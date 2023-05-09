// AI or player sits in a chair used for single static ambient AI or player at mission start v1.5 by RickOShay
// This script places a player or a single ambient AI unit into the nearest chair
// Works with most chairs of the correct height. It also works with ROS_Sitdown.sqf for player's AI group
// Sitting animations are randomized for all units and backpack is removed and replaced on player stand up.
// Place the following line in the player/AI units init field and place the player/AI unit next to a chair (<2.5m)
// [this] execvm "scripts\ROS_UnitSit.sqf";

params ["_unit","_cdir","_cpos","_chair"];

[_unit, false] remoteExec ["allowdamage",_unit];

// AI must be under 2.5m from nearest chair
_nearobjs = nearestObjects [_unit, ["Base_CUP_Furniture","Items_base_F","Small_items","Small_Items_EP1","Furniture_base_F","ThingX","Thing"], 2.5];

if (count _nearobjs == 0) exitWith {hint "There are no near chairs!"};

_chair = _nearobjs select 0;

if !(_chair getVariable ["occupied",false]) then {
	[_chair, _unit] remoteExecCall ["disableCollisionWith", 0, _chair];

	_pos = [];

	// Sitting anims - 4 rifle (lap/legs) - 4 rifle (back)
	_sittingAnims = [
		"HubSittingChairA_idle3",
		"HubSittingChairA_move1",
		"HubSittingChairB_idle2",
		"HubSittingChairC_idle3",
		"HubSittingChairUA_idle3",
		"HubSittingChairUA_move1",
		"HubSittingChairUA_idle1",
		"HubSittingChairUB_idle2"
	];

	if !(surfaceIsWater position _unit) then {
		_pos = getPosATL _chair;
	} else {
		_pos = getPosASL _chair;
	};

	_dir = getdir _chair;
	if ((vectorUp _chair select 2) != 1) then {
		_chair setVectorUp [0,0,0];
		_chair setPosATL _pos;
		_chair setdir _dir;
	};

	sleep 0.05;

	_dir = (getDir _chair) + 180;

	_sitanim = selectRandom _sittingAnims;

	// Save inventory and remove backpack
	if (isPlayer _unit) then {
		[player, [missionNamespace, "inventory_var"]] call BIS_fnc_saveInventory;
		removeBackpack player;
	} else {
		removeBackpack _unit;
	};

	// Default
	if (typeof _chair != "Land_ChairPlastic_F" && typeof _chair != "Land_ChairWood_F" && typeof _chair != "Land_OfficeChair_01_F") then {
		_unit setdir _dir;
		[_unit, _sitanim] remoteExec ["switchMove", 0];
		if !(surfaceIsWater position player) then {
			_pos = getPosATL _chair;
			_unit setPosATL (_chair modelToWorld [0,-0.15,-1]);
		} else {
			_pos = getPosASL _chair;
			_unit setPosASL (_chair modelToWorld [0,-0.15,-1]);
		};
	};
	if (typeof _chair == "Land_ChairPlastic_F") then {
		_unit setdir _dir -90;
		[_unit, _sitanim] remoteExec ["switchMove", 0];
		if !(surfaceIsWater position player) then {
			_pos = getPosATL _chair;
			_unit setPosATL (_chair modelToWorld [0.05,0,-1]);
		} else {
			_pos = getPosASL _chair;
			_unit setPosASL (_chair modelToWorld [0.05,0,-1]);
		};
	};
	if ((typeof _chair == "Land_ChairWood_F") or (typeof _chair == "Land_OfficeChair_01_F")) then {
		_unit setdir _dir;
		[_unit, _sitanim] remoteExec ["switchMove", 0];
		if !(surfaceIsWater position player) then {
			_pos = getPosATL _chair;
			_unit setPosATL (_chair modelToWorld [0,0,-0.99]);
		} else {
			_pos = getPosASL _chair;
			_unit setPosASL (_chair modelToWorld [0,0,-0.99]);
		};
	};

	// Variable is required if script used in conjunction with ROS_SitDown.sqf
	[_chair,["occupied",true,true]] remoteExec ["setVariable",_chair,true];

	// Unit Player stand up Fnc
	ROS_Fnc_UnitStandUp = {
		params ["_chair"];
		_chair enableSimulation false;
		sleep 0.1;
		[player, ""] remoteExec ["switchMove", 0,false];
		player setPosASL (_chair modelToWorld [0,-0.7,-0.5]);
		// Load inventory
		[player, [missionNamespace, "inventory_var"]] call BIS_fnc_loadInventory;
		[_chair,["occupied",false,true]] remoteExec ["setVariable",_chair,true];
		_chair enableSimulation true;
		[_chair, player] remoteExecCall ["enableCollisionWith", 0, _chair];
		hint "";
	};

	// Add Stand Up Addaction to Unit Player
	if (isplayer _unit) then {
		player addAction ["<t color='#B0FF00'>Stand up</t>",{
			params ["_target", "_caller", "_actionId"];
			_nearobjs = nearestObjects [player, ["Base_CUP_Furniture","Items_base_F","Small_items","Small_Items_EP1","Furniture_base_F","ThingX","Thing"], 1];
			_chair = _nearobjs select 0;
			player removeAction _actionId;
			[_chair] spawn ROS_Fnc_UnitStandUp;
		},"",1.5,false,false,"","animationState player find 'sitting' >-1"];
	};
};
