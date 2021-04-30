#include "script_component.hpp"

LOG("postClientInit");

if (!hasInterface) exitWith {};

{
    private _unloadActionPoint = ([_x, "unloadActionPoint", [0, 0, 0]] call BIS_fnc_returnConfigEntry);
    [configName _x, _unloadActionPoint] call FUNC(addUnloadActionPoint);
} forEach ([] call FUNC(getSupportedContainerConfigs));
