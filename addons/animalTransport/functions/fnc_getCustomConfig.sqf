params [
    ["_vehicle", objNull] // NOTE: animals are also vehicles
];
diag_log "y2";
private _categoryName = if (_vehicle isKindOf "Animal") then { "Animals" } else { "Vehicles" };
diag_log "y3";
private _getAnimalTransportConfig = {
    private _classes = [
        configFile,
        missionConfigFile
    ] apply {
        _x >> "GRAD_AnimalTransport" >> _categoryName >> configName _this
    } select { 
        !(isNull _x) 
    };
    _classes pushBack configNull;
    _classes#0
};
diag_log "y4";
private _vehicleConfig = configOf _vehicle;
private _animalTransportConfig = _vehicleConfig call _getAnimalTransportConfig;
diag_log "y5a";
diag_log "y5z";
while {isNull _animalTransportConfig && !(isNull _vehicleConfig)} do {
    diag_log "y5loop";
    _vehicleConfig = inheritsFrom _vehicleConfig;
    if (isNull _vehicleConfig) exitWith {cfgNull};
    _animalTransportConfig = _vehicleConfig call _getAnimalTransportConfig;        
};
diag_log "y6";
_animalTransportConfig