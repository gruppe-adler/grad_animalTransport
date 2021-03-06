#include "script_component.hpp"

if (isNil QGVAR(supportedAnimalConfigs)) then {
    private _configArrays = [missionConfigFile, configFile] apply {
            "true" configClasses (_x >> "GRAD_AnimalTransport" >> "Animals")
    };

    GVAR(supportedAnimalConfigs) = (_configArrays#0 + _configArrays#1);
};

GVAR(supportedAnimalConfigs)
