#include "script_component.hpp"

LOG("postClientInit");

if (!hasInterface) exitWith {};

{    
    private _containerConfig = _x;
    
    private _loadingPoints = createHashMapFromArray (("true" configClasses (_containerConfig >> "LoadingPoints")) 
        apply {[
            configName _x, 
            ([_x, "actionOffset", [0, 0, 0]] call BIS_fnc_returnConfigEntry)
        ]});

    private _unnamedActionPoint = ([_containerConfig, "unloadActionPoint", []] call BIS_fnc_returnConfigEntry);
    if (_unnamedActionPoint isNotEqualTo []) then {
        _loadingPoints set ["", _unnamedActionPoint];
    };

    {        
        [configName _containerConfig, _y, _x] call FUNC(addUnloadActionPoint);    
    } forEach _loadingPoints;

} forEach ([] call FUNC(getSupportedContainerConfigs));
