#include "script_component.hpp"

params [
	["_vehicle", objNull, [objNull]]
];

[_vehicle, "dropOffset"] call FUNC(getLoadingPointsProperty);