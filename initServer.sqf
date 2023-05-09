[] execVM "scripts\init.sqf";

addMissionEventHandler ["EntityKilled",
{
	params ["_entity", "_killer", "_instigator", "_useEffects"];
	private _type = typeOf _entity;
	private _smallExplosion = "M_SPG9_HE";
	private _mediumExplosion = "R_80mm_HE";
	private _hugeExplosion = "Bo_GBU12_LGB";
	private _bloodSplatBig = selectRandom ["BloodPool_01_Large_New_F","BloodPool_01_Medium_New_F","BloodSplatter_01_Large_New_F","BloodSplatter_01_Medium_New_F"];
	private _bloodSplatSmall = selectRandom ["BloodSplatter_01_Small_New_F","BloodSpray_01_New_F"];
	private _DT_fnc_createEntity = {
		params ['_class',['_delete',false]];
		private _positionATL = getPosATL _entity;
		if (_delete) then {
			if (_entity in (entities _type)) then {
				deleteVehicle _entity
			} else {
				_entity setOwner 2;
				_entity hideObjectGlobal true;
				_entity enableSimulation false;
			};
		};
		private _object = _class createVehicle _positionATL;
		_object setPosATL _positionATL;
		_object setDir (getDir _entity);
		_object setVectorUp (surfaceNormal _positionATL);
	};
	private _DT_fnc_triggerExplosives = {
		params [['_delete',false]];
		private _magazineCargo = _entity getVariable ['magazineCargo',[]];
		private _explosionPower = -1;
		{
			private _types = _x call BIS_fnc_itemType;
			_types params ['_itemCategory','_itemType'];
			switch (true) do {
				case (_itemType in ['Artillery','Missile','Rocket','Mine','MineDirectional']): {_explosionPower = 2 max _explosionPower};
				case (_itemType in ['Shell','MineBounding']): {_explosionPower = 1 max _explosionPower};
				case (_itemType in ['Grenade']): {_explosionPower = 0 max _explosionPower};
			};
			if (_explosionPower isEqualTo 2) exitWith {};
		} forEach _magazineCargo;
		switch (_explosionPower) do {
			case 2: {[_hugeExplosion,_delete] call _DT_fnc_createEntity};
			case 1: {[_mediumExplosion,_delete] call _DT_fnc_createEntity};
			case 0: {[_smallExplosion,_delete] call _DT_fnc_createEntity};
		};
		_explosionPower
	};

	switch (true) do {
		// Fuel Stations
		case (_type in ["Land_FuelStation_Feed_F","Land_fs_feed_F","Land_FuelStation_01_pump_F","Land_FuelStation_02_pump_F","Land_FuelStation_01_pump_malevil_F"]): {_hugeExplosion call _DT_fnc_createEntity};
		// Fuel Cans, Barrels, Ammo boxes
		case (_type in ["Land_MetalBarrel_F"]): {[_mediumExplosion,true] call _DT_fnc_createEntity};
		case (_type in ["CargoNet_01_barrels_F"]): {[_hugeExplosion,true] call _DT_fnc_createEntity};
		case (_type isKindOf "ReammoBox_F"): {true call _DT_fnc_triggerExplosives};
		// Men and Animal
		case (_type isKindOf "Animal"): {_bloodSplatSmall call _DT_fnc_createEntity};
		case (_type isKindOf "Man"): {_bloodSplatBig call _DT_fnc_createEntity};
		// Fuel Vehicles and vehicles with explosive materials
		case ((_type isKindOf "LandVehicle") OR (_type isKindOf "Air") OR (_type isKindOf "Ship")): {
			private _explosionPower = false call _DT_fnc_triggerExplosives;
			private _fuelCargoAmount = getFuelCargo _entity;
			if (isNil {_fuelCargoAmount}) exitWith {};
			if !(finite _fuelCargoAmount) exitWith {};
			switch (true) do {
				case (_fuelCargoAmount >= 0.75): {_hugeExplosion call _DT_fnc_createEntity};
				case (_fuelCargoAmount >= 0.33): {_mediumExplosion call _DT_fnc_createEntity};
				case (_fuelCargoAmount < 0.33): {_smallExplosion call _DT_fnc_createEntity};
			};
		};
		// Buildings smoke clouds turned off by chaddles
		//case (_type isKindOf "Building"): {"test_EmptyObjectForSmoke" call _DT_fnc_createEntity};
	};
}];

// Save magazines locally to scan it on death.
0 spawn {
	while {true} do {
		{
			_x setVariable ['magazineCargo',magazineCargo _x];
		} forEach (vehicles + (entities "ReammoBox_F")); 
		uiSleep 1;
	};
};

//part of explosion scripts
player addAction ['Destroy That!',{cursorObject setDamage 1},[],1000,true,false,"","!isNull cursorObject",viewDistance];