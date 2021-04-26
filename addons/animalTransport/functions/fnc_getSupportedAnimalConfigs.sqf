#include "script_component.hpp"

if (isNil QGVAR(supportedAnimalConfigs)) then {
    private _configArrays = [configFile, missionConfigFile] apply {
            "true" configClasses (_x >> "GRAD_animalTransport" >> "Animals")
    };

    GVAR(supportedAnimalConfigs) = (_configArrays#0 + _configArrays#1);
};

GVAR(supportedAnimalConfigs)
