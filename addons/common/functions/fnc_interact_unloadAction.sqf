#include "script_component.hpp"

params ["_target", "_player", "_params"];

[_target, _params#0] call FUNC(player_unloadAnimals);
