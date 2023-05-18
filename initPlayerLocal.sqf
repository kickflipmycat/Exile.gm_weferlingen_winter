//initPlayerLocal.sqf
/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */
// Load Status Bar
[] execVM "Custom\StatusBar\statusBar_init.sqf";
//Rockets
[] execVM "custom\MWarning\init.sqf";

[] execVM "scripts\DynamicAmbient.sqf";
//[] execVM "scripts\ROS_SitDown.sqf";
//[] execVM "scripts\Holster.sqf";
/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

if (!hasInterface || isServer) exitWith {};

// 48 NPCs
private _npcs = [
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "WhiteHead_21", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","G_Tactical_Black",[],["","","","","",""]], [2326.21, 19372.7, 108.73], [-0.997078, -0.076384, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", [], "Exile_Trader_Aircraft", "WhiteHead_18", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Combat",[],["","","","","",""]], [2326.32, 19370.6, 108.73], [-0.995085, -0.0990205, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "gm_face_whiteHead_02", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [2326.6, 19355.9, 108.73], [-0.99971, -0.0241003, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "AfricanHead_03", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Combat",[],["","","","","",""]], [2324.78, 19361.9, 108.73], [-0.998964, -0.0455136, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "GreekHead_A3_07", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [2324.57, 19364.4, 108.73], [-0.999987, -0.0051355, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "GreekHead_A3_08", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Tactical_Clear",[],["","","","","",""]], [2320.93, 19347.9, 108.73], [0.146166, 0.98926, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "gm_face_whiteHead_02", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Aviator",[],["","","","","",""]], [2319.01, 19341.9, 107.838], [-0.999996, -0.00272272, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_17", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Combat",[],["","","","","",""]], [2298.14, 19378.4, 107.921], [0.0319048, 0.999491, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "GreekHead_A3_05", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","G_Tactical_Clear",[],["","","","","",""]], [2300.85, 19379.1, 108.173], [0.0133609, 0.999911, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "GreekHead_A3_05", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [2326.48, 19353.2, 108.73], [-0.993336, 0.115255, 0], [0, 0, 1]],
["Exile_Trader_RussianRoulette", [], "Exile_Trader_RussianRoulette", "gm_face_whiteHead_01", [[],[],["hgun_Pistol_Signal_F","","","",[],[],""],["U_Marshal",[]],["V_Rangemaster_belt",[]],[],"H_Cap_marshal","G_Sport_Blackyellow",[],["","","","","",""]], [2320.45, 19377.4, 108.73], [-0.999828, 0.0185708, 0], [0, 0, 1]],
["Exile_Trader_Office", [], "Exile_Trader_Office", "WhiteHead_01", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","G_Combat",[],["","","","","",""]], [2332.32, 19379.2, 108.73], [-0.99999, 0.00445175, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "WhiteHead_11", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [969.453, 8093.15, 105.246], [0.918391, -0.395674, 0], [0, 0, 1]],
["Exile_Trader_RussianRoulette", [], "Exile_Trader_RussianRoulette", "WhiteHead_02", [[],[],["hgun_Pistol_Signal_F","","","",[],[],""],["U_Marshal",[]],["V_Rangemaster_belt",[]],[],"H_Cap_marshal","G_Sport_Blackyellow",[],["","","","","",""]], [968.287, 8068.25, 105.224], [0.952376, -0.304927, 0], [0, 0, 1]],
["Exile_Trader_Office", [], "Exile_Trader_Office", "WhiteHead_20", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","G_Combat",[],["","","","","",""]], [956.386, 8069.89, 105.306], [0.956586, -0.291449, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "AfricanHead_02", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","",[],["","","","","",""]], [964.233, 8073.27, 105.246], [0.977012, -0.213183, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", [], "Exile_Trader_Aircraft", "WhiteHead_21", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Tactical_Black",[],["","","","","",""]], [965.077, 8075.77, 105.246], [0.981604, -0.190927, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "WhiteHead_08", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [968.565, 8090.59, 105.246], [0.964517, -0.26402, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "GreekHead_A3_08", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Tactical_Clear",[],["","","","","",""]], [968.579, 8084.32, 105.246], [0.969953, -0.243294, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_16", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [968.056, 8081.82, 105.239], [0.959336, -0.282265, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "GreekHead_A3_07", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Combat",[],["","","","","",""]], [976.309, 8096.68, 105.246], [-0.437463, -0.899236, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "Sturrock", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Tactical_Clear",[],["","","","","",""]], [979.574, 8101.87, 105.397], [0.967584, -0.252548, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_19", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Aviator",[],["","","","","",""]], [998.727, 8083.96, 104.868], [0.242398, 0.970177, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "WhiteHead_13", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","",[],["","","","","",""]], [1002.63, 8050.53, 104.036], [-0.241426, -0.970419, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "GreekHead_A3_06", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [19945, 4532.9, 152.237], [0.996391, -0.0848802, 0], [0, 0, 1]],
["Exile_Trader_RussianRoulette", [], "Exile_Trader_RussianRoulette", "WhiteHead_12", [[],[],["hgun_Pistol_Signal_F","","","",[],[],""],["U_Marshal",[]],["V_Rangemaster_belt",[]],[],"H_Cap_marshal","G_Sport_Blackyellow",[],["","","","","",""]], [19951.7, 4508.91, 152.237], [0.999929, 0.0119568, 0], [0, 0, 1]],
["Exile_Trader_Office", [], "Exile_Trader_Office", "AfricanHead_03", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","G_Tactical_Clear",[],["","","","","",""]], [19939.9, 4506.7, 152.353], [0.99966, 0.0260743, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "WhiteHead_12", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","G_Combat",[],["","","","","",""]], [19945.3, 4512.37, 152.238], [0.994282, 0.106783, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", [], "Exile_Trader_Aircraft", "WhiteHead_14", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Combat",[],["","","","","",""]], [19945.1, 4514.85, 152.236], [0.991599, 0.129349, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "WhiteHead_14", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [19944.9, 4530.19, 152.237], [0.998508, 0.0546045, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "GreekHead_A3_05", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Combat",[],["","","","","",""]], [19946.9, 4524.24, 152.172], [0.997109, 0.075985, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_14", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","G_Tactical_Black",[],["","","","","",""]], [19947.2, 4521.71, 152.3], [0.999364, 0.035657, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "WhiteHead_06", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Tactical_Black",[],["","","","","",""]], [19950.1, 4538.33, 152.237], [-0.0704157, -0.997518, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_01", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Combat",[],["","","","","",""]], [19951.8, 4544.37, 151.074], [0.999447, 0.0332456, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_09", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Combat",[],["","","","","",""]], [19974.3, 4508.05, 151.515], [0.0311645, -0.999514, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "WhiteHead_18", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","",[],["","","","","",""]], [19971.2, 4507.38, 151.606], [0.073778, -0.997275, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "WhiteHead_07", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","",[],["","","","","",""]], [17322.2, 17908.1, 75.1327], [0.907734, 0.419547, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", [], "Exile_Trader_Aircraft", "AfricanHead_02", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Tactical_Clear",[],["","","","","",""]], [17321.4, 17910.6, 75.1327], [0.897966, 0.440065, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "WhiteHead_14", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [17315.2, 17924.6, 75.1327], [0.928446, 0.371469, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_21", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","",[],["","","","","",""]], [17319, 17919.6, 75.1373], [0.920274, 0.391275, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_18", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","G_Aviator",[],["","","","","",""]], [17320.1, 17917.3, 75.1623], [0.935324, 0.353793, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "GreekHead_A3_06", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Combat",[],["","","","","",""]], [17317.6, 17933.9, 75.1327], [0.252714, -0.967541, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_15", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","",[],["","","","","",""]], [17325.2, 17937, 74.5307], [0.936175, 0.351535, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_14", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Tactical_Black",[],["","","","","",""]], [17349.6, 17913, 74.4782], [0.381423, -0.924401, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "WhiteHead_08", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","G_Tactical_Clear",[],["","","","","",""]], [17347.4, 17911.5, 74.5096], [0.420513, -0.907287, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "WhiteHead_06", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [17314.4, 17927.1, 75.1327], [0.971105, 0.238651, 0], [0, 0, 1]],
["Exile_Trader_RussianRoulette", [], "Exile_Trader_RussianRoulette", "WhiteHead_06", [[],[],["hgun_Pistol_Signal_F","","","",[],[],""],["U_Marshal",[]],["V_Rangemaster_belt",[]],[],"H_Cap_marshal","G_Sport_Blackyellow",[],["","","","","",""]], [17328.5, 17906.6, 75.1327], [0.943448, 0.331521, 0], [0, 0, 1]],
["Exile_Trader_Office", [], "Exile_Trader_Office", "GreekHead_A3_06", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","G_Tactical_Clear",[],["","","","","",""]], [17318, 17900.7, 75.1327], [0.938673, 0.34481, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;

ExileClientXM8IsPowerOn = true;


missionNamespace setVariable ["ExileClient_KillMessages_network_KillMessages",(compileFinal preprocessFileLineNumbers "addons\KillMessage\ExileClient_KillMessages_network_KillMessages.sqf")];

/////////////////////////////////////////////////////////////**************************
private["_code"];
waitUntil {!isNull (findDisplay 46)};
{
    _x params [["_function",""],["_file",""]];
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function,_code];
}
forEach
[
    ["Config",'addons\PayCheck\Config.sqf'],
    ["PayCheck",'addons\PayCheck\PayCheck.sqf']
];

call Config;

systemChat "Loading: Taschengeld ";

if (usePayCheckMoney) then
{
    [usePayCheckMoneyTime,PayCheck,[],true] call ExileClient_system_thread_addtask;
};

/************************************************************************************************************************************************************/

true

//anti float script
waitUntil {!isNil"ExileClientLoadedIn"};
[
    1,
    {
        _fs = ["afalpercmstpsraswrfldnon","afalpercmstpsnonwnondnon","afalpercmstpsraswpstdnon","afalpknlmstpsraswrfldnon","afalpknlmstpsnonwnondnon"];  
		if ((animationState player) in _fs) then
		{
			_f = (getPos player select 2);
			if (_f < 0.1) then 
			{
				player setvelocity [0,0,0];
			};
			
		};
		
    },
    [],
    true,
    true
] call ExileClient_system_thread_addtask;

/*
//set aperture dark night script chaddles edit
darkMapFixRunning = true; 
while {darkMapFixRunning} do { 
    call { 
        private _lightBrightness = getLighting select 1; 
 
        if (4 < _lightBrightness && _lightBrightness < 120) exitWith { 
            setApertureNew [4, 6, 9, 0.9]; 
        }; 
 
        if (_lightBrightness < 4) exitWith { 
            private _minAperture = linearConversion [0, 4, _lightBrightness, 1, 3, true]; 
            setApertureNew [_minAperture, 6, 9, 0.9]; 
        }; 
 
        setAperture -1; 
    }; 
    sleep 1; 
};
*/

//chaddles stamina & sway code edit 190122
waitUntil {!isnull player};

player enableStamina false;

player setCustomAimCoef 0;

player addEventHandler ["Respawn", {player enableStamina false}];

player addEventHandler ["Respawn", {player setCustomAimCoef 0}];


