#include "script_component.hpp"

params ["_target", "_player", "_params"];

_params params [
    ["_loadingPointName", "", [""]]
];

private _animals = (_target getVariable [QGVAR(animals), ([] call cba_fnc_hashCreate)]);
([_animals] call CBA_fnc_hashKeys)
    apply {
        private _animal = [_animals, _x] call CBA_fnc_hashGet;
        ([
            (format ["GRAD_animalTransport_unloadSingleAction_%1", _x]),
            _x,
            "", // icon
            {
                params ["", "_player", "_params"];
                _params params ["_animal", "", ""];
                [QGVAR(vehicle_unloadAnimal), _params, (attachedTo _animal)] call CBA_fnc_targetEvent;
            },
            {true},
            {},
            [_animal, _loadingPointName, _player]
        ] call ace_interact_menu_fnc_createAction);
    } apply {
        [_x, [], _target]
    };
