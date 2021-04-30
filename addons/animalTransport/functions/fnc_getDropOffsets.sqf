#include "script_component.hpp"

params [
	["_vehicle", objNull, [objNull, configNull]]
];

[_vehicle, "dropOffset"] call FUNC(getLoadingPointsProperty);