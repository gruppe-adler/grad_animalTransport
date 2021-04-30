#include "script_component.hpp"

params [
	["_vehicleConfigName", "", [""]],
	["_unloadActionPoint", [0, 0, 0], [[]]]
];

private _positionedUnloadAction = [
	QGVAR(unloadAction),
	"unload animals",
	"",
	FUNC(interact_unloadAction),
	FUNC(interact_unloadCondition),
	FUNC(interact_unloadChildren),
	[],
	_unloadActionPoint,
	2.5
] call ace_interact_menu_fnc_createAction;

[
	_vehicleConfigName,
	0,
	[],
	_positionedUnloadAction,
	true
] call ace_interact_menu_fnc_addActionToClass;
