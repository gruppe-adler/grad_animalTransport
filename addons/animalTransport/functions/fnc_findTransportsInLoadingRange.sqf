#include "script_component.hpp"
#define CONTAINER_SIZE_BUFFER 20
/* return transport vehicles with a (un)loading point close enough to the passed animal */

params [
    ["_animal", objNull]
];

private _possibleVehicleClasses = [] call FUNC(getSupportedContainerConfigs); // configured vehicle classes
private _possibleVehicleClassNames = _possibleVehicleClasses apply { configName _x};
(nearestObjects [_animal, _possibleVehicleClassNames, GVAR(loadingRange) + CONTAINER_SIZE_BUFFER, false]) select {
    private _vehicle = _x;
    private _loadingPointActionOffsets = [_vehicle] call FUNC(getActionOffsets);

    count (_loadingPointActionOffsets select {
        private _unloadPoint = _x;
        private _unloadPointWorld = (_vehicle vectorModelToWorld _unloadPoint) vectorAdd (getPos _vehicle);
        (_animal distance _unloadPointWorld) < GVAR(loadingRange);
    }) > 0;
}
