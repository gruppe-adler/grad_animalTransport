#include "script_component.hpp"

params [
	["_vehicle", objNull, [objNull]],
	["_propertyName", "", [""]]
];

private _propertyValues = createHashMapFromArray ((([_vehicle] call FUNC(getCustomConfig)) >> "LoadingPoints") apply {
	[
		configName _x, 
		([_x, _propertyName, [0, 0, 0]] call BIS_fnc_returnConfigEntry)
	]
});

private _unnamedPropertyName = switch (_propertyName) do {
	case "actionOffset": ["unloadActionPoint", []]; break;
	case "dropDir": ["dropDir", 180]; break;
	case "dropOffset": ["unloadPoint", []]; break;	
};
private _unnamedDropOffset = [
	[_vehicle] call FUNC(getCustomConfig),
	"unloadPoint",
	[]
] call BIS_fnc_returnConfigEntry;
if (_unnamedDropOffset isNotEqualTo []) then {
	private _unnamedValue = [
		[_vehicle] call FUNC(getCustomConfig),
		_unnamedPropertyName#0,
		_unnamedPropertyName#1
	] call BIS_fnc_returnConfigEntry;
	_propertyValues set ["", _unnamedValue];
};

_propertyValues