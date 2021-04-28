params [
    ["_vehicle", objNull] // NOTE: animals are also vehicles
];

private _categoryName = if (_vehicle isKindOf "Animal") then { "Animals" } else { "Vehicles" };
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
private _vehicleConfig = configOf _vehicle;
private _animalTransportConfig = _vehicleConfig call _getAnimalTransportConfig;
while {isNull _animalTransportConfig && !(isNull _vehicleConfig)} do {
    _vehicleConfig = inheritsFrom _vehicleConfig;
    if (isNull _vehicleConfig) exitWith {configNull};
    _animalTransportConfig = _vehicleConfig call _getAnimalTransportConfig;
};
_animalTransportConfig
