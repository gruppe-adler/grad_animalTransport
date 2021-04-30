[{
	params [
		["_args", [], [[]]],
		["_handle", 0, [0]]
	];

	if (!isGameFocused || isGamePaused) exitWith {};

	private _camPos = AGLToASL positionCameraToWorld [0, 0, 0];
	private _camDir = getCameraViewDirection ACE_player;

	{
		private _opacity = 1;
		private _text = "o";

		private _diff = (getPosASL _x) vectorDiff _camPos;
		private _civAngle = acos (_camDir vectorCos _diff);

		private _fov = deg getObjectFOV ACE_player;

		if (_civAngle < _fov) then {
            if (vehicle _x isNotEqualTo _x) then {
                _text = format ["%1", (vehicle _x) getCargoIndex _x];
            };
		};

		private _color = [0.8, 0, 1, _opacity]; // colorCivilian is too dark for text :/

		drawIcon3D [
			"#(argb,8,8,3)color(0,0,0,0)",
			_color,
			(getPosATL _x) vectorAdd [0, 0, 1],
			1, 1, 0,
			_text, 0, 0.1, "EtelkaNarrowMediumPro", "center", true
		];
	} forEach (units sitters);

}, 0, []] call CBA_fnc_addPerFrameHandler;

player addAction ["fill my vic with people", {
    _v = vehicle player;
    {
        _x moveInAny _v;
    } forEach (units sitters);
}, [], 2, true, true, "", "call " + str {vehicle player != player}];

mission_vehicleFillWithAnimals = {
	_vehicle = _this;
	assert(_vehicle isKindOf "Car");
	_animalClassName = "Sheep_Random_F";
	private _spaces = [_vehicle, _animalClassName] call grad_animalTransport_fnc_findSuitableSpaces;
	if (count _spaces == 0) exitWith {};

	{
		private _a = createAgent [_animalClassName, [0, 0, 0], [], 5, "CAN_COLLIDE"];
		[_vehicle, _a] call grad_animalTransport_fnc_vehicle_loadAnimal;
		[
			{
				_this setVariable ["ace_dragging_canCarry", false, true];
			},
			_a,
			5
		] call CBA_fnc_waitAndExecute;

	} forEach _spaces;
};

player addAction ["fill my vic with sheep", {
    _v = vehicle player;
    _v call mission_vehicleFillWithAnimals;

}, [], 2, true, true, "", "call " + str {vehicle player != player}];

fillallvicswithsheepactionID = player addAction ["fill all vics with sheep", {
	player removeAction fillallvicswithsheepactionID;
	{
	    _x call mission_vehicleFillWithAnimals;
	} forEach (vehicles select {_x isKindOf "Car"});
}];

mission_printParents = {
	private _vehicle = _this;
	private _config = configOf _vehicle;
	private _classNames = [];
	while {!(isNull _config)} do {
		_classNames pushBack (configName _config);
		_config = inheritsFrom _config;
		if (configName _config == "Car") exitWith {};
	};
	reverse _classNames;
	systemChat (_classNames joinString " > ");
	diag_log (_classNames joinString " > ");
	_classNames;
};

markunloadactionID = player addAction ["mark unload action & points", {
	player removeAction markunloadactionID;
	{
		private _car = _x;

		private _sphere = createSimpleObject ["Sign_Sphere25cm_F", [0, 0, 0], true];
		private _cfg = [_car] call grad_animalTransport_fnc_getCustomConfig;
		if (isNull _cfg) then {
			diag_log format ["no custom config for %1", typeOf _car];
		} else {
			diag_log format ["attaching helper sphere to %1", typeOf _car];
			private _offset = getArray (_cfg >> "unloadActionPoint");
			_sphere attachTo [_car, _offset];
		};

	} forEach (vehicles select {_x isKindOf "Car"});
}];
