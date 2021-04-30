#include "script_component.hpp"

params [
    ["_vehicle", objNull, [objNull]],
    ["_animal", objNull, [objNull]],
    ["_loadingPointName", "", [""]]
];

private _dropOffset = [0, 0, 0];
private _dropDir = 180;
if (_loadingPointName == "") then {
    _dropOffset = [
        [_vehicle] call FUNC(getCustomConfig),
        "unloadPoint",
        [0, 0, 0]
    ] call BIS_fnc_returnConfigEntry;
} else {
    private _config = ([_vehicle] call FUNC(getCustomConfig)) >> "LoadingPoints" >> _loadingPointName;
    _dropDir = [_config,
        "dropDir",
        180
    ] call BIS_fnc_returnConfigEntry;
    _dropOffset = [
        _config,
        "dropOffset",
        [0, 0, 0]
    ] call BIS_fnc_returnConfigEntry;
};

_animal attachTo [_vehicle, _dropOffset];
detach _animal;
_animal setVariable ["ace_dragging_canCarry", true, true];
["ace_common_setDir", [_animal, (getDir _vehicle) - _dropDir], _animal] call CBA_fnc_targetEvent;
