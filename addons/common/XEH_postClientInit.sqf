#include "script_component.hpp"

LOG("postClientInit");

if (!hasInterface) exitWith {};

{    
    private _containerConfig = _x;    
    private _loadingPoints = [_containerConfig] call FUNC(getActionOffsets);

    {        
        [configName _containerConfig, _y, _x] call FUNC(addUnloadActionPoint);    
    } forEach _loadingPoints;

} forEach ([] call FUNC(getSupportedContainerConfigs));
