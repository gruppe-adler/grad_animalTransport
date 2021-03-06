#include "script_component.hpp"

if (isNil QGVAR(supportedContainerConfigs)) then {
    private _configArrays = [missionConfigFile, configFile] apply {
            "true" configClasses (_x >> "GRAD_animalTransport" >> "Vehicles");
    };

    GVAR(supportedContainerConfigs) = (_configArrays#0 + _configArrays#1);
};

GVAR(supportedContainerConfigs)
