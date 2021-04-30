#include "script_component.hpp"

params [
	["_vehicle", objNull, [objNull, configNull]],
	["_propertyName", "", [""]]
];

private _customConfig = _vehicle;

if (_customConfig isEqualType objNull) then {
	_customConfig = [_customConfig] call FUNC(getCustomConfig);
	if (isNull _customConfig) then {
		WARNING("could not find custom config for %1", _vehicle);
	};
};

private _propertyValues = createHashMapFromArray (("true" configClasses (_customConfig >> "LoadingPoints")) apply {
	[
		configName _x, 
		([_x, _propertyName, [0, 0, 0]] call BIS_fnc_returnConfigEntry)
	]
});

private _unnamedPropertyName = switch (_propertyName) do {
	case "actionOffset": ["unloadActionPoint", []];
	case "dropDir": ["dropDir", 180];
	case "dropOffset": ["unloadPoint", []];	
	default {};
};
private _unnamedDropOffset = [
	_customConfig,
	"unloadPoint",
	[]
] call BIS_fnc_returnConfigEntry;
if (_unnamedDropOffset isNotEqualTo []) then {
	private _unnamedValue = [
		_customConfig,
		_unnamedPropertyName#0,
		_unnamedPropertyName#1
	] call BIS_fnc_returnConfigEntry;
	_propertyValues set ["", _unnamedValue];
};

_propertyValues