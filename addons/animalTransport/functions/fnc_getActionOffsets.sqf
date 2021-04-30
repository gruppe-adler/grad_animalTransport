#include "script_component.hpp"

params [
	["_vehicle", objNull, [objNull]]
];

[_vehicle, "actionOffset"] call FUNC(getLoadingPointsProperty);