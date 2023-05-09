/* ROS_SitDown.sqf ver 1.5 - by RickOShay
===============================================================================================================================
SIT DOWN IN CHAIRS - for players and group NPC's (AI) - SP,MP - requires CUP Core
===============================================================================================================================
Players and AI units are able to sit down in all supported chairs.
Chairs can be placed in the editor or spawned via alternative script.
This script will add the Sit/Stand action to all supported chairs in the mission
(irrespective of position and how they were spawned in).

There are no mod dependencies.

There are 7 chair classes that are supported (see below).
Player can tell group NPC's (AI) to sit down. (group leader action)
Player can create and place new chairs and remove all chairs. (group leader action)
Works in SP, Listen and Dedicated server missions (incl. persistent missions eg. Liberation).

See configurable options below.

Reference list of supported chair classes (Do not change - they are offset and dir dependent):
==============================================================================================
"Land_CampingChair_V2_F"
"Land_CampingChair_V2_white_F"
"Land_ChairPlastic_F"
"Land_CampingChair_V1_F"
"Land_RattanChair_01_F"
"Land_ChairWood_F"
"Land_OfficeChair_01_F"

NOTE:
"Land_ChairWood_F" and "Land_CampingChair_V1_F" are not supported on building rooves.
"Land_ChairWood_F" and "Land_CampingChair_V1_F" and "Land_RattanChair_01_F" are not supported on carrier decks.

Legal stuff:
============
Full credit must be given in missions that make use of this script or derivative work if shared
either publicly or privately in any way including the Steam Workshop.

INSTRUCTIONS - SP and MP including persistent missions like Liberation:
=======================================================================
1) Place the following code into your init.sqf file: [] execvm "scripts\ROS_SitDown.sqf";
2) Copy ROS_SitDown.sqf to the mission scripts folder.

===============================================================================================================================
CONFIGURABLE OPTIONS (Change values below to true; or false;)
===============================================================================================================================
*/// Switch on group AI Auto sit down when player leader sits down (you need enough chairs for NPC's)
ROS_AIAutoSitdown = FALSE;

/// Enable or disable the addition and removal of chairs (only group leader)
ROS_AddChairs = TRUE;

/// Chairs can be created anywhere on the map or only near marker name (only group leader)
ROS_AddChairsAnywhere = TRUE;

/// Chairs can only be created 100m from this marker if ROS_AddChairsAnywhere is FALSE (only group leader)
ROS_CreateChairMkr = "base_marker";

/// Default chair to create (see allowed Chairtype classes below)
ROS_DefaultChair = "Land_CampingChair_V2_F";

/// Is Liberation mission?
ROS_IsKPLib = FALSE;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// DON'T CHANGE ANYTHING BELOW THIS LINE ////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Supported chair types (do not change these classes - specific offset and orientations apply)
if (isnil "ROS_ChairTypes") then {
	ROS_ChairTypes = [
	"Land_CampingChair_V2_F",
	"Land_CampingChair_V2_white_F",
	"Land_ChairPlastic_F",
	"Land_CampingChair_V1_F",
	"Land_RattanChair_01_F",
	"Land_ChairWood_F",
	"Land_OfficeChair_01_F"
	];
	publicVariable "ROS_ChairTypes";
};

// Wait until player is initialized - required especially for KPLib where nearest FOB is used to find nearest chairs

waitUntil {!isNull player};

waitUntil {time > 3};

// Radius to create chairs from above marker if ROS_AddChairsAnywhere is false
ROS_CreateChairDistance = 100;
// Max distance from player for AI to find a chair
ROSchairmaxdist = 40;
ROScurrentChair = objNull;
ROS_nearChairs =[];
ROSAINotSitting = [];
ROSAISitting = [];
ROSAIunits = [];
if (isNil "AISitActionAdded") then {AISitActionAdded = false;};
{if !(isplayer _x && alive _x) then {ROSAIunits pushBackUnique _x}} foreach units group player;
publicVariable "ROSAIunits";

if (isNil "ROS_AddSittingFncs") then {ROS_AddSittingFncs = false;};

// Add Respawn EH
player addEventHandler ["Respawn", {[] spawn ROS_Fnc_RespawnSit;}];

if !(ROS_AddSittingFncs) then {

	// Add Addaction AI sitdown - Player group leader (if auto AI sit down is off)
	ROS_Fnc_ActNPCSit = {
		if (player == leader group player && count units group player >1) then {
			player addAction ["<t color='#B0FF00'>NPCs Sit Down</t>",{
				params ["_target", "_caller", "_actionId"];
				[] spawn ROS_Fnc_AIsitDown;
			},"",9,false,true,"","!ROS_AIAutoSitdown && animationState player find 'sitting' >-1 && ({(animationState _x find 'sitting')<0} count ROSAIunits >0)"];
		};
	};
	// Add Addaction Add and Remove chairs - Player group leader
	ROS_Fnc_placeChair = {
		ROS_acc_place = player addAction ["<t color='#B0FF00'>Place Chair</t>", {
			params ["_target", "_caller", "_actionId"];
			hint "";
			[ROS_newchair, false] remoteExec ["enableSimulationGlobal",2];
			detach ROS_newchair;
	  		player removeAction _actionId;
	  		player removeAction ROS_acc_create;
	  		publicVariable "ROS_newchair";
	  		[ROS_newchair,["occupied",false,true]] remoteExec ["setVariable",ROS_newchair,true];
	  		call ROS_Fnc_createChair;
	 	},"",1.5];
	};
	ROS_Fnc_createChair = {
		if (ROS_AddChairsAnywhere) then {
			ROS_newchair = objnull;
			player removeAction ROS_acc_create;
	 		ROS_acc_create = player addAction ["<t color='#B0FF00'>Create Chair</t>", {
	 			params ["_target", "_caller", "_actionId"];
		 	  	ROS_newchair = ROS_DefaultChair createVehicle getPosATL player;
		  		ROS_newchair attachTo [player,[0, 3, 0.5]];
		  		player removeAction _actionId;
				call ROS_Fnc_placeChair;
		  	},"",1.4,false,false,"","(isnull cursorobject or (tolower (typeof cursorObject) find 'carrier' >-1)) && animationState player find 'sitting' <0 && player == leader group player && count units group player >1 && ROS_AddChairs"];
	  	} else {
	  		ROS_newchair = objnull;
			player removeAction ROS_acc_create;
	 		ROS_acc_create = player addAction ["<t color='#B0FF00'>Create Chair</t>", {
	 			params ["_target", "_caller", "_actionId"];
		 	  	ROS_newchair = ROS_DefaultChair createVehicle getPosATL player;
		  		ROS_newchair attachTo [player,[0, 3, 0.5]];
		  		player removeAction _actionId;
				call ROS_Fnc_placeChair;
		  	},"",1.4,false,false,"","(isnull cursorobject or (tolower (typeof cursorObject) find 'carrier' >-1)) && animationState player find 'sitting' <0 && player == leader group player && count units group player >1 && ROS_AddChairs && player distance (getMarkerPos ROS_CreateChairMkr)<100"];
	  	};
	};
	ROS_Fnc_removeChair = {
	 	ROS_acc_remove = player addAction ["<t color='#B0FF00'>Recycle Chair</t>", {
	 		params ["_target", "_caller", "_actionId"];
	 		deleteVehicle cursorObject;
	 		},"",1.3,true,false,"","(typeof cursorobject) in ROS_ChairTypes && player distance cursorObject <1.8 && player == leader group player && count units group player >1 && ROS_AddChairs"];
	};

	// AI sit down Fnc (if enabled)
	if (player == leader group player && count units group player >1) then {
		ROS_Fnc_AIsitDown = {
			ROSAINotSitting = [];
			publicVariable "ROSAINotSitting";
			ROSAISitting = [];
			publicVariable "ROSAISitting";
			ROS_nearChairs = [];
			_freechairs = [];
			_num_freechairs = 0;
			_num_AiNotSitting = 0;
			_limit = 0;
			_nearobjs = [];
			ROSAIunits = [];
			{if !(isplayer _x && alive _x) then {ROSAIunits pushBack _x}} foreach units group player;
			publicVariable "ROSAIunits";
			// Prevent AI dying while sitting
			{[_x, false] remoteExec ["allowdamage",_x]} forEach ROSAIunits;

			// Get array of non sitting AI in group
			{if (animationState _x find 'sitting' <0) then {ROSAINotSitting pushBackUnique _x}} foreach ROSAIunits;
			// Get near unoccupied chairs
			_nearobjs = nearestObjects [player, ["Base_CUP_Furniture","Items_base_F","Small_items","Small_Items_EP1","Furniture_base_F","ThingX","Thing"], ROSchairmaxdist];
			{if ((typeof _x) in ROS_ChairTypes) then {ROS_nearChairs pushBackUnique _x}} foreach _nearObjs;
			{if (!(_x getVariable ["occupied",false])) then {[_x,["occupied",false,true]] remoteExec ["setVariable",_x,true]; _freechairs pushBackUnique _x}} forEach ROS_nearChairs;
			sleep 0.1;
			_num_freechairs = (count _freechairs);
			_num_AiNotSitting = (count ROSAINotSitting);
			if ((count ROSAIunits) > _num_freechairs) exitWith {Hint "Either there aren't enough chairs for your\nentire group. Or chairs are too far away.\nTry adjusting the ROSchairmaxdist\nto >40m or add more chairs."};

			if (_num_freechairs >= count ROSAIunits) then {
				for "_i" from 0 to (_num_AiNotSitting -1) do {
					_chair = [_freechairs, player] call BIS_fnc_nearestPosition;
					_dir = getdir _chair;
					if ((vectorUp _chair select 2) != 1) then {
						_pos = getPosATL _chair;
						_chair setVectorUp [0,0,0];
						_chair setPosATL _pos;
						_chair setdir _dir;
					};
					_unit = ROSAINotSitting select _i;
					[_chair, false] remoteExec ["enableSimulationGlobal",2];
					[_chair, _unit] remoteExecCall ["disableCollisionWith", 0, _chair];
					sleep 0.1;
					_unit disableAI "move";
					// save inventory and remove backpack
					_inv = name _unit;
					[_unit, [missionNamespace, format["%1%2", "Inventory", _inv]]] call BIS_fnc_saveInventory;
					removeBackpack _unit;
					[_chair, _unit] spawn ROS_Fnc_sit;
					[_chair,["occupied",true,true]] remoteExec ["setVariable",_chair,true];
					_freechairs = _freechairs -[_chair];
				};
			};
			{if (animationState _x find 'sitting' >-1) then {ROSAISitting pushBackUnique _x}} foreach ROSAIunits;
			publicVariable "ROSAISitting";
			if (count ROSAISitting == count ROSAIunits) then {ROSAINotSitting =[]};
			publicVariable "ROSAINotSitting";
		};
	}; // end player = leader group

	// AI stand up Fnc
	if (player == leader group player && count units group player >1) then {
		ROS_fnc_AIstandUp = {

			ROSAISitting = [];
			_AIunit = objNull;

			{if (animationState _x find 'sitting' >-1) then {ROSAISitting pushBackUnique _x}} foreach ROSAIunits;
			publicVariable "ROSAISitting";

			for "_i" from 0 to ((count ROSAISitting)-1) do {
				_AIunit = ROSAISitting select _i;
				_nearobjs = nearestObjects [_AIunit, ["Base_CUP_Furniture","Items_base_F","Small_items","Small_Items_EP1","Furniture_base_F","ThingX","Thing"], 1, true];
				_chair = _nearobjs select 0;
				[_chair,["occupied",false,true]] remoteExec ["setVariable",_chair,true];
				[_AIunit, ""] remoteExec ["switchMove", 0,false];
				// load inventory
				_inv = name _AIunit;
				[_AIunit, [missionNamespace, format["%1%2", "Inventory", _inv]]] call BIS_fnc_loadInventory;
				//sleep 0.12;
				_AIunit enableAI "move";
				if !(surfaceIsWater position _AIunit) then {
					_AIunit setPosATL (_chair modelToWorld [0,-0.6,-0.5]);
				} else {
					_AIunit setPosASL (_chair modelToWorld [0,-0.6,-0.5]);
				};
				_AIunit setUnitPos "up";
				_AIunit setBehaviour "auto";
				[_AIunit, true] remoteExec ["allowdamage",_AIunit];
				sleep 0.5 + random 0.5;
			};
			{if (animationState _x find 'sitting' <0) then {ROSAINotSitting pushBackUnique _x}} foreach ROSAIunits;
			publicVariable "ROSAINotSitting";
			if (count ROSAINotSitting == count ROSAIunits) then {ROSSitting = []};
			publicVariable "ROSAISitting";
		};
	};

	// Player stand up Fnc
	ROS_Fnc_PlayerStandUp = {
		params ["_chair"];
		// Delay required to allow all NPC's to sit down before player stands
		sleep 1;

		ROSAINotSitting = [];
		{if (animationState _x find 'sitting' <0) then {ROSAINotSitting pushBackUnique _x}} foreach ROSAIunits;

		[_chair, false] remoteExec ["enableSimulationGlobal",2];
		sleep 0.1;
		[player, ""] remoteExec ["switchMove", 0,false];

		if !(surfaceIsWater position player) then {
			player setPosATL (_chair modelToWorld [0,-0.7,-0.5]);
		} else {
			player setPosASL (_chair modelToWorld [0,-0.7,-0.5]);
		};

		// load inventory
		[player, [missionNamespace, "inventory_var"]] call BIS_fnc_loadInventory;

		[_chair,["occupied",false,true]] remoteExec ["setVariable",_chair,true];
		[_chair, player] remoteExecCall ["enableCollisionWith", 0, _chair];

		if ((count ROSAINotSitting) != (count ROSAIunits) && player == leader group player && count units group player >1) then {[] spawn ROS_Fnc_AIstandUp};
		hint "";
	};

	// Sit - all units and players
	ROS_Fnc_sit = {
		params ["_chair", "_unit"];

		chair = _chair; // remove
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

		if !(surfaceIsWater position player) then {
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

		[_chair,["occupied",true,true]] remoteExec ["setVariable",_chair,true];
	};

	ROS_AddSittingFncs = true;
};

// Init fncs at start and on player respawn - see this script header.
ROS_Fnc_RespawnSit = {
	waitUntil {ROS_AddSittingFncs};
	[ROScurrentChair,["occupied",false,true]] remoteExec ["setVariable",ROScurrentChair,true];

	if (!ROS_IsKPLib) then {
		if (count units group player >1) then {
			[] spawn ROS_Fnc_AIstandUp;
			[] spawn ROS_Fnc_ActNPCSit;
		};
		call ROS_Fnc_createChair;
		call ROS_Fnc_removeChair;
	};
	// Add Addaction Sit to all suitable chairs
	player addaction ["<t color='#B0FF00'>Sit Down</t>",{
		params ["_target", "_caller", "_actionId"];
		[player, [missionNamespace, "inventory_var"]] call BIS_fnc_saveInventory;
		removeBackpack player;
		ROScurrentChair = cursorObject;
		publicVariable "ROScurrentChair";
		[ROScurrentChair, player] remoteExecCall ["disableCollisionWith", 0, ROScurrentChair];
		sleep 0.3;
		[ROScurrentChair, player] spawn ROS_Fnc_sit;
		waitUntil {animationState player find 'sitting' >-1};
		// If Ai Auto Sit down
		if (ROS_AIAutoSitdown && player == leader group player && count units group player >1) then {
			[] spawn ROS_Fnc_AIsitDown;
		};
		// Clear corpses (remove addactions from dead players near chairs = remove body)
		_neardead = allDead select {_x distance player <50};
		{hidebody _x} foreach _neardead;
		// Add Addaction to Player stand up
		ROS_acc_stand = player addAction ["<t color='#B0FF00'>Stand up</t>",{
			params ["_target", "_caller", "_actionId"];
			_nearobjs = nearestObjects [player, ["Base_CUP_Furniture","Items_base_F","Small_items","Small_Items_EP1","Furniture_base_F","ThingX","Thing"], 1];
			_chair = _nearobjs select 0;
			player removeAction _actionId;
			[_chair] spawn ROS_fnc_PlayerStandUp;
		},"",1.5,false,false,"","animationState player find 'sitting' >-1"];
	},"",1.5,true,true,"","(typeof cursorobject) in ROS_ChairTypes && !(cursorObject getVariable ['occupied',false]) && player distance cursorObject < 1.9"];
};

[] spawn  ROS_Fnc_RespawnSit;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
