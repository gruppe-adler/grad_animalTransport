#include "script_component.hpp"

params [
	["_vehicleConfigNameOrVehicle", "", ["", objNull]],
	["_unloadActionPoint", [0, 0, 0], [[]]],
	["_loadingPointName", "", [""]]
];

private _positionedUnloadAction = [
	QGVAR(unloadAction),
	"unload animals",
	"",
	FUNC(interact_unloadAction),
	FUNC(interact_unloadCondition),
	FUNC(interact_unloadChildren),
	[_loadingPointName],
	_unloadActionPoint,
	2.5
] call ace_interact_menu_fnc_createAction;

if (_vehicleConfigNameOrVehicle isEqualType "") then {
	[
		_vehicleConfigNameOrVehicle,
		0,
		[],
		_positionedUnloadAction,
		true
	] call ace_interact_menu_fnc_addActionToClass;
} else {
	[
		_vehicleConfigNameOrVehicle,
		0,
		[],
		_positionedUnloadAction
	] call ace_interact_menu_fnc_addActionToObject;
};

INFO_1("added unload action points to %1",_vehicleConfigNameOrVehicle);