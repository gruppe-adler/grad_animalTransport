#include "script_component.hpp"

params [
	["_vehicle", objNull, [objNull, configNull]]
];

[_vehicle, "actionOffset"] call FUNC(getLoadingPointsProperty);