#include "script_component.hpp"

params [
	["_vehicle", objNull, [objNull]]
];

[_vehicle, "dropDir"] call FUNC(getLoadingPointsProperty);