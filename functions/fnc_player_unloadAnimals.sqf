#include "script_component.hpp"

params [
    ["_vehicle", objNull]
];

if (isNull _vehicle) exitWith { ERROR("arrgh vic is null"); };

private _emptyHash = ([] call cba_fnc_hashCreate);
private _animals = _vehicle getVariable [QGVAR(animals), _emptyHash];

private _totalCount = count ([_animals] call cba_fnc_hashKeys);

if (_totalCount < 1) exitWith {
    hint "nothing to unload";
};

cba_fnc_hashValues = {
    private _hash = _this select 0;
    (_this call cba_fnc_hashKeys) apply {
        [_hash, _x] call cba_fnc_hashGet
    }
};

player setVariable [QGVAR(lastUnloadTime), 0];

[
    (_totalCount / GRAD_animalTransport_unloadSpeed) + 1,
    [ // callback arguments
        ([_animals] call cba_fnc_hashValues)
    ],
    { // onFinish
        LOG("unloading finished");
    },
    { // onFailure
        params ["", "", "", "_errorCode"];
        WARNING("unloading failed with %1", _errorCode);
    },
    format["unloading %1 animals", _totalCount],
    {
        params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
        private _lastUnloadTime = player getVariable [QGVAR(lastUnloadTime), 0];
        private _timeToUnload = ((_elapsedTime - _lastUnloadTime) * GRAD_animalTransport_unloadSpeed) > 1;
        if (!_timeToUnload) exitWith {true};

        private _animals = _args select 0;
        private _animalIndex = _animals findIf {
            !(isNull _x) && !(isNull (attachedTo _x))
        };
        if (_animalIndex == -1) exitWith {false};

        private _animal = (_animals select _animalIndex);
        [QGVAR(vehicle_unloadAnimal), [_animal], attachedTo _animal] call CBA_fnc_targetEvent;
        player setVariable [QGVAR(lastUnloadTime), _elapsedTime];
        _animals set [_animalIndex, objNull]; // remember: arrays are mutable, we're editing the same copy over and over
        true
    }
] call ace_common_fnc_progressBar;
