
/**
 * ExileServer_object_tree_network_chopTreeRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

private["_sessionId","_parameters","_treeNetId","_tree","_isTree","_player","_treeHeight","_newDamage","_treePosition","_spawnRadius","_weaponHolders","_weaponHolder","_weaponHolderPosition"];
_sessionId = _this select 0;
_parameters = _this select 1;
_treeNetId = _parameters select 0;

///////////////////////////////////
//////Chop Trees Into Vehicles/////
///////////////////////////////////
_woodText = "Wood dropped in your Area!";
_woodVehicleText = "Wood was put inside your Vehicle!";
_woodVehicleFullText = "Wood dropped in your Area! Vehicle is Full!";
///////////////////////////////////

try
{
    _tree = objectFromNetId _treeNetId;
    if (isNull _tree) then
    {
        throw format ["Cannot chop unknown tree! %1", _treeNetId];
    };
    if !(alive _tree) then
    {
        throw "Cannot chop already chopped tree!";
    };
    _isTree = [_tree, "WoodSource"] call ExileClient_util_model_isInteraction;
    if !(_isTree) then
    {
        throw "Can only chop down trees, you twat!";
    };
    _player = _sessionId call ExileServer_system_session_getPlayerObject;
    if (isNull _player) then
    {
        throw "Unknown players cannot chop trees!";
    };
    if !(alive _player) then
    {
        throw "The dead cannot chop down trees!";
    };
    if ((_player distance _tree) > 30) then
    {
        throw "No long distance tree chopping! Nope!";
    };
    _treeHeight = _tree call ExileClient_util_model_getHeight;
    _treeHeight = _treeHeight max 1;
    _newDamage = ((damage _tree) + (1 / (floor _treeHeight) )) min 1;
    _tree setDamage _newDamage;
    if (_newDamage isEqualTo 1) then
    {
        _tree setDamage 999;
    };

///////////////////////////////////
//////Chop Trees Into Vehicles/////
///////////////////////////////////
            _nearestTruck = (getPosATL _tree) nearEntities[[
			//"gm_ge_army_k125", //moped
			"gm_ge_civ_u1300l",
			"gm_ge_army_iltis_cargo",//kübel
			"gm_ge_army_iltis_milan",//kübel bewaffnet
			"gm_ge_army_kat1_454_cargo",//10T Lkw bewaffnet
			"gm_ge_army_u1300l_repair",//unimog bewaffnet
			"gm_ge_army_u1300l_container",//unimog bewaffnet
			"gm_ge_army_u1300l_medic",//unimog
			"gm_ge_army_bpz2a0",//berge panzer schwer
			"gm_ge_army_Leopard1a1a1",//panzer schwer
			"gm_ge_army_Leopard1a1a2",//panzer schwer
			"gm_ge_army_Leopard1a3a1",//panzer schwer
			"gm_ge_army_m113a1g_command",//panzer leicht
			"gm_ge_army_m113a1g_medic",//panzer leicht ohne waffen
			"gm_ge_army_fuchsa0_reconnaissance",//radpanzer schwer plus rakete
			"gm_ge_army_m113a1g_apc",//panzer leicht
			"gm_ge_army_m113a1g_apc_milan",//panzer leicht
			"gm_ge_army_fuchsa0_command",//radpanzer schwer
			"gm_ge_army_fuchsa0_engineer",//radpanzer schwer
			"gm_gc_army_ural4320_repair",//ural
			"gm_gc_army_ural375d_refuel",//ural
			"gm_gc_army_ural375d_medic",//ural
			"gm_gc_army_ural4320_reammo",//ural
			"gm_gc_army_ural44202",//ural
			"gm_gc_army_ural4320_cargo",//ural
			"gm_gc_army_p601",//trabbi
			"gm_gc_army_zsu234v1",//Panzer schwer flugabwehr
			"gm_gc_army_bmp1sp2",//radpanzer schwer
			"gm_gc_army_brdm2",//radpanzer leicht
			"gm_gc_army_btr60pa",//radpanzer leicht
			"gm_gc_army_btr60pb",//radpanzer leicht
			"gm_gc_army_btr60pu12",//radpanzer leicht
			"gm_gc_bgs_ural4320_repair",//ural
			"gm_gc_bgs_ural375d_refuel",//ural
			"gm_gc_bgs_ural375d_medic",//ural
			"gm_gc_bgs_ural4320_reammo",//ural
			"gm_gc_bgs_ural4320_cargo",//ural
			"gm_gc_bgs_p601",//trabbi
			"gm_gc_civ_p601",//trabbi
			"gm_gc_ff_p601",//trabbi
			"gm_gc_pol_p601",//trabbi
			"gm_gc_dp_p601",//trabbi
			//"gm_ge_civ_typ1200",//käfer spawn karre
			"gm_ge_ff_typ1200",//käfer
			"gm_ge_pol_typ1200",//käfer
			"gm_ge_dbp_typ1200",//käfer
			"gm_ge_army_gepard1a1",//panzer schwer
			"gm_ge_army_u1300l_cargo",//unimog bewaffnet
			"gm_ge_army_kat1_451_container",//5 t lkw bewaffnet
			"gm_ge_army_kat1_451_reammo",//5 t lkw bewaffnet
			"gm_ge_army_kat1_451_cargo",//5 t lkw bewaffnet
			"gm_ge_army_kat1_451_refuel",//5 t lkw bewaffnet
            //Trucks
			"B_T_Truck_01_mover_F",
			"B_T_Truck_01_ammo_F",
			"B_T_Truck_01_box_F",
			"B_T_Truck_01_fuel_F",
			"B_T_Truck_01_medical_F",
			"B_T_Truck_01_Repair_F",
			"B_T_Truck_01_transport_F",
			"B_T_Truck_01_covered_F",
			"B_T_MRAP_01_F",
			"B_T_LSV_01_unarmed_F",
			"B_T_LSV_01_unarmed_CTRG_F",
			"B_LSV_01_unarmed_F",
			"B_CTRG_LSV_01_light_F",
			"B_LSV_01_unarmed_black_F",
			"B_LSV_01_unarmed_olive_F",
			"B_LSV_01_unarmed_sand_F",
			"B_T_LSV_01_unarmed_black_F",
			"B_T_LSV_01_unarmed_olive_F",
			"B_T_LSV_01_unarmed_sand_F",
			"O_T_LSV_02_unarmed_F",
			"O_T_LSV_02_unarmed_viper_F",
			"O_LSV_02_unarmed_F",
			"O_LSV_02_unarmed_viper_F",
			"O_T_LSV_02_unarmed_black_F",
			"O_T_LSV_02_unarmed_ghex_F",
			"O_T_LSV_02_unarmed_arid_F",
			"O_LSV_02_unarmed_black_F",
			"O_LSV_02_unarmed_ghex_F",
			"O_LSV_02_unarmed_arid_F",
			"O_T_MRAP_02_ghex_F",
			"B_GEN_Offroad_01_gen_F",
			"C_Offroad_02_unarmed_F",
			"C_Offroad_02_unarmed_black_F",
			"C_Offroad_02_unarmed_blue_F",
			"C_Offroad_02_unarmed_green_F",
			"C_Offroad_02_unarmed_orange_F",
			"C_Offroad_02_unarmed_red_F",
			"C_Offroad_02_unarmed_white_F",
			"I_C_Offroad_02_unarmed_F",
			"I_C_Offroad_02_unarmed_brown_F",
			"I_C_Offroad_02_unarmed_olive_F",
			"O_T_Quadbike_01_ghex_F",
			"O_T_Truck_03_transport_ghex_F",
			"O_T_Truck_03_covered_ghex_F",
			"O_T_Truck_03_repair_ghex_F",
			"O_T_Truck_03_ammo_ghex_F",
			"O_T_Truck_03_fuel_ghex_F",
			"O_T_Truck_03_medical_ghex_F",
			"O_T_Truck_03_device_ghex_F",
			"I_C_Van_01_transport_F",
			"I_C_Van_01_transport_brown_F",
			"I_C_Van_01_transport_olive_F",			
            //Bewaffnet
			"B_APC_Tracked_01_rcws_F",
			"B_APC_Tracked_01_AA_F",
			"O_APC_Wheeled_02_rcws_F",
			"B_APC_Wheeled_01_cannon_F",
			"I_APC_Wheeled_03_cannon_F",
			"I_MRAP_03_hmg_F",
			"B_MRAP_01_hmg_F",
			"O_MRAP_02_hmg_F",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"B_APC_Tracked_01_CRV_F",
			"O_APC_Tracked_02_cannon_F",
			"O_APC_Tracked_02_AA_F",
			"I_APC_tracked_03_cannon_F",
			"I_MBT_03_cannon_F",
            //Apex
            //"B_T_MRAP_01_gmg_F",
			"B_T_MRAP_01_hmg_F",
			"B_T_LSV_01_armed_F",
			"B_T_LSV_01_armed_CTRG_F",	
            "B_LSV_01_armed_F",
			"B_LSV_01_armed_black_F",
			"B_LSV_01_armed_olive_F",
			"B_LSV_01_armed_sand_F",
			"B_T_LSV_01_armed_black_F",
			"B_T_LSV_01_armed_olive_F",
			"B_T_LSV_01_armed_sand_F",
			"O_T_LSV_02_armed_F",
			"O_T_LSV_02_armed_viper_F",
		    "O_LSV_02_armed_F",
			"O_LSV_02_armed_viper_F",
			"O_T_LSV_02_armed_black_F",
			"O_T_LSV_02_armed_ghex_F",
			"O_T_LSV_02_armed_arid_F",
			"O_LSV_02_armed_black_F",
			"O_LSV_02_armed_ghex_F",
			"O_LSV_02_armed_arid_F",
			"O_T_MRAP_02_hmg_ghex_F",
			//Panzer
			"B_T_APC_Tracked_01_AA_F",
			"B_T_APC_Wheeled_01_cannon_F",
			"B_T_APC_Tracked_01_CRV_F",
			"B_T_APC_Tracked_01_rcws_F",
			//"B_T_MBT_01_arty_F",
			//"B_T_MBT_01_mlrs_F",
			"B_T_MBT_01_cannon_F",
			"B_T_MBT_01_TUSK_F",
			"O_T_APC_Tracked_02_cannon_ghex_F",
			"O_T_APC_Tracked_02_AA_ghex_F",
			"O_T_APC_Wheeled_02_rcws_ghex_F",
			"O_T_MBT_02_cannon_ghex_F",
			//"O_T_MBT_02_arty_ghex_F",
			//"O_T_MRAP_02_gmg_ghex_F",
			"Exile_Car_SUV_Armed_Black",
			"BW_SPw_Fennek_SMG_F",
			//"BW_SPw_Fennek_GMW_F",
			"BW_MATV_SMG_F",
			//"BW_MATV_GMW_F",
			"BW_Pandur_FSW_F",
			//"BW_Pandur_Trans_F",
			//"BW_Pandur_Med_F",
			"B_MBT_01_cannon_F",
			"B_MBT_01_TUSK_F",
			"BW_BPz_Nemmera_F",
			//"BW_PzH_Sholef_F",
            //Tank DLC
            "B_AFV_Wheeled_01_cannon_F",                           // Rhino MGS
            "B_T_AFV_Wheeled_01_cannon_F",                         // Rhino MGS
            "B_AFV_Wheeled_01_up_cannon_F",                        // Rhino MGS UP
            "B_T_AFV_Wheeled_01_up_cannon_F",                      // Rhino MGS UP
            "I_LT_01_AT_F",                                        // AWC 301 Nyx (AT)        
            "I_LT_01_scout_F",                                     // AWC 303 Nyx (Recon)     
            "I_LT_01_AA_F",                                        // AWC 302 Nyx (AA)        
            "I_LT_01_cannon_F",                                    // AWC 304 Nyx (Autocannon)
            "O_MBT_04_cannon_F",                                   // T-140 Angara 
            "O_T_MBT_04_cannon_F",                                 // T-140 Angara 
            "O_MBT_04_command_F",                                  // T-140K Angara
            "O_T_MBT_04_command_F",                                // T-140K Angara	
			"B_LSV_01_AT_F",
			"O_LSV_02_AT_F",
			"O_T_LSV_02_AT_F",
			"I_C_Offroad_02_LMG_F",
			//"I_C_Offroad_02_AT_F",
            //ExileKarren
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit",
			"Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_TowTractor_White",
			"Exile_Car_Tractor_Red",
			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_Octavius_White",
			"Exile_Car_Golf_Red",
			"Exile_Car_LandRover_Green",
			"Exile_Car_LandRover_Ambulance_Green",
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_White",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUVXL_Black",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_Repair_Civillian",
			//"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_BRDM2_HQ",
			"Exile_Car_BTR40_MG_Green",
			"Exile_Car_BTR40_Green",
			"Exile_Car_HMMWV_M134_Green",
			"Exile_Car_HMMWV_M2_Green",
			"Exile_Car_HMMWV_MEV_Green",
			"Exile_Car_HMMWV_UNA_Green",
			"C_IDAP_Offroad_02_unarmed_F",
			"C_IDAP_Offroad_01_F",
			"C_IDAP_Van_02_vehicle_F",
			"C_IDAP_Truck_02_transport_F",
			"C_IDAP_Truck_02_F",
			"C_Van_02_transport_F",
			"C_IDAP_Van_02_transport_F",
			"I_G_Van_02_transport_F",
			"B_G_Van_02_transport_F",
			"B_GEN_Van_02_transport_F",
			"I_C_Van_02_transport_F",
			"C_Van_02_vehicle_F",
			"I_G_Van_02_vehicle_F",
			"B_G_Van_02_vehicle_F",
			"B_GEN_Van_02_vehicle_F",
			"O_G_Van_02_vehicle_F",
			"I_C_Van_02_vehicle_F",
			"C_Van_02_medevac_F",
			"C_IDAP_Van_02_medevac_F",
			"O_G_Van_02_transport_F",			
            //ExileTrucks
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker",
			"Exile_Car_V3S_Covered",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue",
            //Heli
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Huey_Green",
			"Exile_Chopper_Huey_Armed_Green",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green",
			//"Land_Pod_Heli_Transport_04_bench_F",
			//"Land_Pod_Heli_Transport_04_covered_F",
			//"Land_Pod_Heli_Transport_04_box_F",
			//"Land_Pod_Heli_Transport_04_fuel_F",
			//"Land_Pod_Heli_Transport_04_ammo_F",
		    "B_Heli_Light_01_armed_F",
		    "B_Heli_Transport_03_black_F",
		    "B_Heli_Transport_01_F",
		    "B_Heli_Transport_01_camo_F",
			"I_Heli_light_03_F",
			"B_Heli_Attack_01_F",
			"O_Heli_Attack_02_F",
			"O_Heli_Attack_02_black_F",
			"O_Heli_Light_02_F",
			//BW Heli
            "BW_MH6_Heer_F",
			//"BW_AH6_Heer_F",
			"BW_AW159_Trans_Heer_F",
			"BW_AW159_Med_Heer_F",
			//"BW_AW159_CAS_Heer_F",
			"BW_AW101_Trans_Heer_F",
			"BW_AW101_Med_Heer_F",
			"BW_CH67_Trans_Heer_F",
			"BW_CH67_Med_Heer_F",
			"BW_Taru_SC_Heer_F",
            //Apex Heli
            "I_C_Heli_Light_01_civil_F",
			"B_CTRG_Heli_Transport_01_sand_F",
			"B_CTRG_Heli_Transport_01_tropic_F",
			//EC635
			"EC635_SAR",
			"EC635_Unarmed_BW",
			"EC635_Unarmed_CSAT",
			"EC635_Unarmed",
			"EC635_ADAC", 
			"EC635_CSAT",
			"EC635",
			"EC635_AT",
			"EC635_AT_CSAT",
			"C_IDAP_Heli_Transport_02_F",
            //Boot			
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			"I_Boat_Armed_01_minigun_F",
			//USS Freedom
		    //"Land_Carrier_01_base_F",
			//Apex Boat
			"B_T_Boat_Transport_01_F",
			"B_T_Lifeboat",
			"O_T_Lifeboat",
			"B_T_Boat_Armed_01_minigun_F",
			"O_T_Boat_Armed_01_hmg_F",
			"O_T_Boat_Transport_01_F",
			"I_C_Boat_Transport_01_F",
			"B_G_Boat_Transport_02_F",
			"O_G_Boat_Transport_02_F",
			"I_G_Boat_Transport_02_F",
			"I_C_Boat_Transport_02_F",
			"C_Boat_Transport_02_F",
			"C_Scooter_Transport_01_F",
			//"Burnes_LCAC_1",
			//"Burnes_MK10_1",
			"sab_boat",
		    "sab_boat_2",
		    "sab_boat_3",
		    "sab_boat_4",
            //Plane
			"sab_cz_An2",
			"Sab_ee_An2",
			"Sab_ru_An2",
			"Sab_yel_An2",
			"Sab_fd_An2",
			"Sab_ana_An2",
			"sab_ca_An2",
			"Sab_Snow_An2",
			"Sab_Snow2_An2",
			"Sab_Snow3_An2",
			"Sab_sea_An2",
			"Sab_sea2_An2",
			"Sab_sea3_An2",
			"Sab_sea4_An2",
			"Sab_Amphi_An2",
			"Sab_af_An2",
			"Sab_tk_An2",
			"Sab_A2_An2",
			"sab_BI_An2",
			"sab_AH_An2",
		    "Sab_An2_b",
		    //"Sab_An2_i",
		    //"Sab_An2_o",		
			"Exile_Plane_Cessna",
			"Exile_Plane_AN2_Green",
			"Exile_Plane_AN2_Stripe",
			"Exile_Plane_AN2_White",
			//"B_Plane_CAS_01_F",
			"O_Plane_CAS_02_F",
			"I_Plane_Fighter_03_CAS_F",
			"I_Plane_Fighter_03_AA_F",
			//C-130 Classnames:
			"sab_C130_J",    	//(Default without Droptanks)
			"sab_C130_JC",   	//(Default without Droptanks, Cargo)
			"sab_C130_JE",   	//(Default with Droptanks = Extended)
			"sab_C130_JEC", 	//(Default with Droptanks, Cargo )
			"sab_C130_JT",		//(Aerial Refueling Tanker)
			"sab_C130_H",		//(H = 4 Prob blades, see above)
			"sab_C130_HE",
			"sab_C130_HEC",
			"sab_C130_HC",	
			//"sab_C130_HH",		//(KC-130 Harvest Hawk)	
			"sab_C130_FA",   	//(Fat Albert)
			"sab_C130_LC", 	    //(LC-130)
			"sab_C130_LC_Ski",  //(LC-130 with Skis)
			"sab_C130_CG",	 	//(Coast Guard)
			"sab_C130_FP",  	//(Floatplane) - still WIP (especially 3d Models)
			"sab_C130_CSP",  	//(XFC/YMC C-130)  - still WIP (especially 3d Models)
			"sab_C130_J_FF", 	//(Civilian Fire Tanker)
			"sab_C130_J_FF2", 	//(Forest Service)
			"sab_L100_AL",		//(Cargo Airliner)	
			"sab_C130_H_CSAT",  //(CSAT Transport)
			"sab_C130_H_CSAT2", //(CSAT Refueling Tanker)
			"sab_C130_H_CSAT3", //(CSAT Cargo)		
			"sab_C130_H_AAF",	//(AAF Transport)
			"sab_C130_H_AAF2",  //(AAF Refueling Tanker)
			"sab_C130_H_AAF3",   //(AAF Cargo)
            //Arma3 DLC Jets
			"B_Plane_Fighter_01_F",
			"B_Plane_Fighter_01_Stealth_F",
			"O_Plane_Fighter_02_F",
			"O_Plane_Fighter_02_Stealth_F",
			"I_Plane_Fighter_04_F",
			//Sentinal Drohne
			//"B_UAV_05_F",
            //Apex Plane
			"C_Plane_Civil_01_F",
			"C_Plane_Civil_01_racing_F",
			"I_C_Plane_Civil_01_F",
			"B_T_VTOL_01_infantry_F",
			"B_T_VTOL_01_vehicle_F",
			//"B_T_VTOL_01_armed_F",
			//"B_T_VTOL_01_infantry_blue_F",
			//"B_T_VTOL_01_infantry_olive_F",
			"B_T_VTOL_01_vehicle_blue_F",
			"B_T_VTOL_01_vehicle_olive_F",
			//"B_T_VTOL_01_armed_blue_F",
			//"B_T_VTOL_01_armed_olive_F"
			//"O_T_VTOL_02_infantry_F",
			//"O_T_VTOL_02_vehicle_F",
			//"O_T_VTOL_02_infantry_hex_F",
			//"O_T_VTOL_02_infantry_ghex_F",
			//"O_T_VTOL_02_infantry_grey_F",
			//"O_T_VTOL_02_vehicle_hex_F",
			//"O_T_VTOL_02_vehicle_ghex_F",
			//"O_T_VTOL_02_vehicle_grey_F",			
            //TKO Addon
			//Buggy Gepanzert
			"Mr_Own_buggy_noir",
			"Mr_Own_buggy_bleufonce",
			"Mr_Own_buggy_rouge",
			"Mr_Own_buggy_jaune",
			"Mr_Own_buggy_rose",
			"Mr_Own_buggy_grise",
			"Mr_Own_buggy_violet",
			"Mr_Own_buggy_orange",
			//Man_TGX_petite_cabine
			"Quiet_Man_TGX_petite_cabine_mq_noir",
			//Tahoe 
			"Mrshounka_tahoe",
			//vsav 
			//"mrshounka_vsav_smur",
			//r8plus 
			"Quiet_v2_r8plus_blanche_f",
			"Quiet_v2_r8plus_chrome_f",
			"Quiet_v2_r8plus_bleu_f",
			"Quiet_v2_r8plus_noir_f",
			"Quiet_v2_r8plus_rouge_f",
			//Bugatti 
			"quiet_Bugatti_blanche_f",
			"quiet_Bugatti_chrome_f",
			"quiet_Bugatti_bleu_f",
			"quiet_Bugatti_noir_f",
			"quiet_Bugatti_rouge_f",
			//Cadillac 
			"Quiet_Cadillac_blanche_f",
			"Quiet_Cadillac_chrome_f",
			"Quiet_Cadillac_bleu_f",
			"Quiet_Cadillac_noir_f",
			"Quiet_Cadillac_rouge_f",
			//dodge_15 
			"Quiet_dodge_15_blanche_f",
			"Quiet_dodge_15_chrome_f",
			"Quiet_dodge_15_bleu_f",
			"Quiet_dodge_15_noir_f",
			"Quiet_dodge_15_rouge_f",
			//dodge1969 
			"Quiet_1969charger_blanche_f",
			"Quiet_1969charger_chrome_f",
			"Quiet_1969charger_bleu_f",
			"Quiet_1969charger_noir_f",
			"Quiet_1969charger_rouge_f",
			//Ford_shelbyGT500 
			"quiet_Ford_shelbyGT500_blanche_f",
			"quiet_Ford_shelbyGT500_chrome_f",
			"quiet_Ford_shelbyGT500_bleu_f",
			"quiet_Ford_shelbyGT500_noir_f",
			"quiet_Ford_shelbyGT500_rouge_f",
			//c65amg 
			"Quiet_c65amg_blanche_f",
			"Quiet_c65amg_chrome_f",
			"Quiet_c65amg_bleu_f",
			"Quiet_c65amg_noir_f",
			"Quiet_c65amg_rouge_f",
			//Sprinter_depannage 
			"Quiet_sprinter_depannage_blanche_f",
			"Quiet_sprinter_depannage_chrome_f",
			"Quiet_sprinter_depannage_bleu_f",
			"Quiet_sprinter_depannage_noir_f",
			"Quiet_sprinter_depannage_rouge_f",
			//sub2015 
			"quiet_sub2015_blanche_f",
			"quiet_sub2015_chrome_f",
			"quiet_sub2015_bleu_f",
			"quiet_sub2015_noir_f",
			"quiet_sub2015_rouge_f",
			//brinks_banque 
			//"shounka_a3_brinks",
			"shounka_a3_brinks_noir",
			"shounka_a3_brinks_bleufonce",
			"shounka_a3_brinks_rouge",
			"shounka_a3_brinks_jaune",
			"shounka_a3_brinks_rose",
			"shounka_a3_brinks_grise",
			"shounka_a3_brinks_violet",
			"shounka_a3_brinks_orange",
			"shounka_a3_dafxf_euro6_f",
			//iveco 
			//"shounka_ivceco_noir",
			//"shounka_ivceco_bleufonce",
			//"shounka_ivceco_rouge",
			//"shounka_ivceco_jaune",
			//"shounka_ivceco_rose",
			//"shounka_ivceco_grise",
			//"shounka_ivceco_violet",
			//"shounka_ivceco_orange",
			//mantgs 
			"shounka_a3_mantgs",
			"shounka_a3_mantgs_2_2_f",
			"shounka_a3_mantgs_2_2_in",
			"shounka_a3_mantgs_2_2_in_noir",
			//pompier_sprinter 
			//"shounka_a3_pompier_sprinter",
			//"shounka_a3_renaultmagnum_f",
			//suburbangign 
			"shounka_a3_suburbangign",
			//suburbangign_pompier 
			//"shounka_a3_suburbangign_pompier",
			//Tal_Maserati 
			"Tal_Maserati_Red",
			"Tal_Maserati_Pink",
			"Tal_Maserati_Black",
			"Tal_Maserati_Blue",
			"Tal_Maserati_LightBlue",
			"Tal_Maserati_Green",
			"Tal_Maserati_Lime",
			"Tal_Maserati_Purple",
			"Tal_Maserati_Grey",
			"Tal_Maserati_Orange",
			"Tal_Maserati_White",
			"Tal_Maserati_Yellow",
			//"Tal_Murci_Baseclass",
			"Tal_Murci_Red",
			"Tal_Murci_Pink",
			"Tal_Murci_Black",
			"Tal_Murci_Blue",
			"Tal_Murci_LightBlue",
			"Tal_Murci_Green",
			"Tal_Murci_Lime",
			"Tal_Murci_Purple",
			"Tal_Murci_Grey",
			"Tal_Murci_Orange",
			"Tal_Murci_White",
			"Tal_Murci_Yellow",
			"Tal_Murci_PC",
			//harley 
			//"shounka_harley_a3",
			"shounka_harley_a3_noir",
			"shounka_harley_a3_bleu",
			"shounka_harley_a3_rouge",
			"shounka_harley_a3_lolz",
            //HotRoad 
			"A3GM_RAT_ROD",
			"A3GM_RAT_ROD_Black",
			"A3GM_RAT_ROD_Orange",
			"A3GM_RAT_ROD_Red",
			"A3GM_RAT_ROD_Gre",
			"MrShounka_mustang_Rework_jaune_f",
			"MrShounka_mustang_Rework_rose_f",
			"MrShounka_mustang_Rework_verte_f",

			"MrShounka_Peugeot_207_rework_blanche_f",
			"MrShounka_Peugeot_207_rework_bleu_f",
			"MrShounka_Peugeot_207_rework_noir_f",
			"MrShounka_Peugeot_207_rework_rouge_f",
			"MrShounka_Peugeot_207_rework_jaune_f",
			"MrShounka_Peugeot_207_rework_rose_f",
			"MrShounka_Peugeot_207_rework_verte_f",

			"MrShounka_pagani_Rework_p_blanche_f",
			"MrShounka_pagani_Rework_p_bleu_f",
			"MrShounka_pagani_Rework_p_noir_f",
			"MrShounka_pagani_Rework_p_rouge_f",
			"MrShounka_pagani_Rework_p_jaune_f",
			"MrShounka_pagani_Rework_p_rose_f",
			"MrShounka_pagani_Rework_p_verte_f",

			"MrShounka_Peugeot508_Rework_blanche_f",
			"MrShounka_Peugeot508_Rework_bleu_f",
			"MrShounka_Peugeot508_Rework_noir_f",
			"MrShounka_Peugeot508_Rework_rouge_f",
			"MrShounka_Peugeot508_Rework_jaune_f",
			"MrShounka_Peugeot508_Rework_rose_f",
			"MrShounka_Peugeot508_Rework_verte_f",

			"MrShounka_porsche911_92_Rework_blanche_f",
			"MrShounka_porsche911_92_Rework_bleu_f",
			"MrShounka_porsche911_92_Rework_noir_f",
			"MrShounka_porsche911_92_Rework_rouge_f",
			"MrShounka_porsche911_92_Rework_jaune_f",
			"MrShounka_porsche911_92_Rework_rose_f",
			"MrShounka_porsche911_92_Rework_verte_f",

			"MrShounka_porsche911_Rework_blanche_f",
			"MrShounka_porsche911_Rework_bleu_f",
			"MrShounka_porsche911_Rework_noir_f",
			"MrShounka_porsche911_Rework_rouge_f",
			"MrShounka_porsche911_Rework_jaune_f",
			"MrShounka_porsche911_Rework_rose_f",
			"MrShounka_porsche911_Rework_verte_f",

			"MrShounka_r5_Rework_blanche_f",
			"MrShounka_r5_Rework_bleu_f",
			"MrShounka_r5_Rework_noir_f",
			"MrShounka_r5_Rework_rouge_f",
			"MrShounka_r5_Rework_jaune_f",
			"MrShounka_r5_Rework_rose_f",
			"MrShounka_r5_Rework_verte_f",

			"MrShounka_raptor_Rework_blanche_f",
			"MrShounka_raptor_Rework_bleu_f",
			"MrShounka_raptor_Rework_noir_f",
			"MrShounka_raptor_Rework_rouge_f",
			"MrShounka_raptor_Rework_jaune_f",
			"MrShounka_raptor_Rework_rose_f",
			"MrShounka_raptor_Rework_verte_f",

			"MrShounka_rs4_Rework_blanche_f",
			"MrShounka_rs4_Rework_bleu_f",
			"MrShounka_rs4_Rework_noir_f",
			"MrShounka_rs4_Rework_rouge_f",
			"MrShounka_rs4_Rework_jaune_f",
			"MrShounka_rs4_Rework_rose_f",
			"MrShounka_rs4_Rework_verte_f",

			"MrShounka_rs6_avant_Rework_blanche_f",
			"MrShounka_rs6_avant_Rework_bleu_f",
			"MrShounka_rs6_avant_Rework_noir_f",
			"MrShounka_rs6_avant_Rework_rouge_f",
			"MrShounka_rs6_avant_Rework_jaune_f",
			"MrShounka_rs6_avant_Rework_rose_f",
			"MrShounka_rs6_avant_Rework_verte_f",

			"MrShounka_subaru08_Rework_blanche_f",
			"MrShounka_subaru08_Rework_bleu_f",
			"MrShounka_subaru08_Rework_noir_f",
			"MrShounka_subaru08_Rework_rouge_f",
			"MrShounka_subaru08_Rework_jaune_f",
			"MrShounka_subaru08_Rework_rose_f",
			"MrShounka_subaru08_Rework_verte_f",

			"MrShounka_transam_Rework_blanche_f",
			"MrShounka_transam_Rework_bleu_f",
			"MrShounka_transam_Rework_noir_f",
			"MrShounka_transam_Rework_rouge_f",
			"MrShounka_transam_Rework_jaune_f",
			"MrShounka_transam_Rework_rose_f",
			"MrShounka_transam_Rework_verte_f",

			"MrShounka_twingo_Rework_blanche_f",
			"MrShounka_twingo_Rework_bleu_f",
			"MrShounka_twingo_Rework_noir_f",
			"MrShounka_twingo_Rework_rouge_f",
			"MrShounka_twingo_Rework_jaune_f",
			"MrShounka_twingo_Rework_rose_f",
			"MrShounka_twingo_Rework_verte_f",

			"MrShounka_Vandura_Rework_blanche_f",
			"MrShounka_Vandura_Rework_bleu_f",
			"MrShounka_Vandura_Rework_noir_f",
			"MrShounka_Vandura_Rework_rouge_f",
			"MrShounka_Vandura_Rework_jaune_f",
			"MrShounka_Vandura_Rework_rose_f",
			"MrShounka_Vandura_Rework_verte_f",

			"MrShounka_veveno_Rework_p_blanche_f",
			"MrShounka_veveno_Rework_p_bleu_f",
			"MrShounka_veveno_Rework_p_noir_f",
			"MrShounka_veveno_Rework_p_rouge_f",
			"MrShounka_veveno_Rework_p_jaune_f",
			"MrShounka_veveno_Rework_p_rose_f",
			"MrShounka_veveno_Rework_p_verte_f",

			"MrShounka_Volkswagen_Touareg_Rework_bleu_f",
			"MrShounka_Volkswagen_Touareg_Rework_noir_f",
			"MrShounka_Volkswagen_Touareg_Rework_rouge_f",
			"MrShounka_Volkswagen_Touareg_Rework_jaune_f",
			"MrShounka_Volkswagen_Touareg_Rework_rose_f",
			"MrShounka_Volkswagen_Touareg_Rework_verte_f",

			"MrShounka_Volkswagen_T_Gend_Rework_f",

			"MrShounka_vsav_smur_rework_Rework_f",

			"MrShounka_yamaha_Rework_blanche_f",
			"MrShounka_yamaha_Rework_bleu_f",
			"MrShounka_yamaha_Rework_noir_f",
			"MrShounka_yamaha_Rework_rouge_f",
			"MrShounka_yamaha_Rework_jaune_f",
			"MrShounka_yamaha_Rework_rose_f",
			"MrShounka_yamaha_Rework_verte_f",

			"MrShounka_mp4_Rework_p_blanche_f",
			"MrShounka_mp4_Rework_p_bleu_f",
			"MrShounka_mp4_Rework_p_noir_f",
			"MrShounka_mp4_Rework_p_rouge_f",
			"MrShounka_mp4_Rework_p_jaune_f",
			"MrShounka_mp4_Rework_p_rose_f",
			"MrShounka_mp4_Rework_p_verte_f",

			"MrShounka_monster_Rework_blanche_f",
			"MrShounka_monster_Rework_bleu_f",
			"MrShounka_monster_Rework_noir_f",
			"MrShounka_monster_Rework_rouge_f",
			"MrShounka_monster_Rework_jaune_f",
			"MrShounka_monster_Rework_rose_f",
			"MrShounka_monster_Rework_verte_f",

			"MrShounka_mercedes_clk_Rework_blanche_f",
			"MrShounka_mercedes_clk_Rework_bleu_f",
			"MrShounka_mercedes_clk_Rework_noir_f",
			"MrShounka_mercedes_clk_Rework_rouge_f",
			"MrShounka_mercedes_clk_Rework_jaune_f",
			"MrShounka_mercedes_clk_Rework_rose_f",
			"MrShounka_mercedes_clk_Rework_verte_f",

			"MrShounka_mercedes_190_Rework_blanche_f",
			"MrShounka_mercedes_190_Rework_bleu_f",
			"MrShounka_mercedes_190_Rework_noir_f",
			"MrShounka_mercedes_190_Rework_rouge_f",
			"MrShounka_mercedes_190_Rework_jaune_f",
			"MrShounka_mercedes_190_Rework_rose_f",
			"MrShounka_mercedes_190_Rework_verte_f",

			"MrShounka_megane_rs_2015_Police_Rework_f",

			"MrShounka_megane_rs_2015_Gend_Rework_f",

			"MrShounka_megane_rs_2015_Rework_p_blanche_f",
			"MrShounka_megane_rs_2015_Rework_p_bleu_f",
			"MrShounka_megane_rs_2015_Rework_p_noir_f",
			"MrShounka_megane_rs_2015_Rework_p_rouge_f",
			"MrShounka_megane_rs_2015_Rework_p_jaune_f",
			"MrShounka_megane_rs_2015_Rework_p_rose_f",
			"MrShounka_megane_rs_2015_Rework_p_verte_f",

			"MrShounka_lykan_Rework_p_blanche_f",
			"MrShounka_lykan_Rework_p_bleu_f",
			"MrShounka_lykan_Rework_p_noir_f",
			"MrShounka_lykan_Rework_p_rouge_f",
			"MrShounka_lykan_Rework_p_jaune_f",
			"MrShounka_lykan_Rework_p_rose_f",
			"MrShounka_lykan_Rework_p_verte_f",

			"MrShounka_lincoln_Rework_blanche_f",
			"MrShounka_lincoln_Rework_bleu_f",
			"MrShounka_lincoln_Rework_noir_f",
			"MrShounka_lincoln_Rework_rouge_f",
			"MrShounka_lincoln_Rework_jaune_f",
			"MrShounka_lincoln_Rework_rose_f",
			"MrShounka_lincoln_Rework_verte_f",

			"MrShounka_jeep_blinde_Rework_blanche_f",
			"MrShounka_jeep_blinde_Rework_bleu_f",
			"MrShounka_jeep_blinde_Rework_noir_f",
			"MrShounka_jeep_blinde_Rework_rouge_f",
			"MrShounka_jeep_blinde_Rework_jaune_f",
			"MrShounka_jeep_blinde_Rework_rose_f",
			"MrShounka_jeep_blinde_Rework_verte_f",

			"MrShounka_Huracan_Rework_p_blanche_f",
			"MrShounka_Huracan_Rework_p_bleu_f",
			"MrShounka_Huracan_Rework_p_noir_f",
			"MrShounka_Huracan_Rework_p_rouge_f",
			"MrShounka_Huracan_Rework_p_jaune_f",
			"MrShounka_Huracan_Rework_p_rose_f",
			"MrShounka_Huracan_Rework_p_verte_f",

			"MrShounka_hummerh2_Rework_blanche_f",
			"MrShounka_hummerh2_Rework_bleu_f",
			"MrShounka_hummerh2_Rework_noir_f",
			"MrShounka_hummerh2_Rework_rouge_f",
			"MrShounka_hummerh2_Rework_jaune_f",
			"MrShounka_hummerh2_Rework_rose_f",
			"MrShounka_hummerh2_Rework_verte_f",

			"MrShounka_hummer_Rework_blanche_f",
			"MrShounka_hummer_Rework_bleu_f",
			"MrShounka_hummer_Rework_noir_f",
			"MrShounka_hummer_Rework_rouge_f",
			"MrShounka_hummer_Rework_jaune_f",
			"MrShounka_hummer_Rework_rose_f",
			"MrShounka_hummer_Rework_verte_f",

			"MrShounka_golfvi_Rework_blanche_f",
			"MrShounka_golfvi_Rework_bleu_f",
			"MrShounka_golfvi_Rework_noir_f",
			"MrShounka_golfvi_Rework_rouge_f",
			"MrShounka_golfvi_Rework_jaune_f",
			"MrShounka_golfvi_Rework_rose_f",
			"MrShounka_golfvi_Rework_verte_f",

			"Mrshounka_ferrari_f430_scuderia_Rework_blanche_f",
			"Mrshounka_ferrari_f430_scuderia_Rework_bleu_f",
			"Mrshounka_ferrari_f430_scuderia_Rework_noir_f",
			"Mrshounka_ferrari_f430_scuderia_Rework_rouge_f",
			"Mrshounka_ferrari_f430_scuderia_Rework_jaune_f",
			"Mrshounka_ferrari_f430_scuderia_Rework_rose_f",
			"Mrshounka_ferrari_f430_scuderia_Rework_verte_f",

			"MrShounka_ducati_Rework_blanche_f",
			"MrShounka_ducati_Rework_bleu_f",
			"MrShounka_ducati_Rework_noir_f",
			"MrShounka_ducati_Rework_rouge_f",
			"MrShounka_ducati_Rework_jaune_f",
			"MrShounka_ducati_Rework_rose_f",
			"MrShounka_ducati_Rework_verte_f",

			"MrShounka_corbillard_Rework_blanche_f",
			"MrShounka_corbillard_Rework_bleu_f",
			"MrShounka_corbillard_Rework_noir_f",
			"MrShounka_corbillard_Rework_rouge_f",
			"MrShounka_corbillard_Rework_jaune_f",
			"MrShounka_corbillard_Rework_rose_f",
			"MrShounka_corbillard_Rework_verte_f",

			"MrShounka_Clio_RS_Gend_Rework_f",
			"MrShounka_Clio_RS_Rework_blanche_f",
			"MrShounka_Clio_RS_Rework_bleu_f",
			"MrShounka_Clio_RS_Rework_noir_f",
			"MrShounka_Clio_RS_Rework_rouge_f",
			"MrShounka_Clio_RS_Rework_jaune_f",
			"MrShounka_Clio_RS_Rework_rose_f",
			"MrShounka_Clio_RS_Rework_verte_f",

			"MrShounka_citroen_nemo_Rework_blanche_f",
			"MrShounka_citroen_nemo_Rework_bleu_f",
			"MrShounka_citroen_nemo_Rework_noir_f",
			"MrShounka_citroen_nemo_Rework_rouge_f",
			"MrShounka_citroen_nemo_Rework_jaune_f",
			"MrShounka_citroen_nemo_Rework_rose_f",
			"MrShounka_citroen_nemo_Rework_verte_f",

			"MrShounka_chevrolet_avalanche_blanche_f",
			"MrShounka_chevrolet_avalanche_Rework_f",
			"MrShounka_chevrolet_avalanche_noir_f",
			"MrShounka_chevrolet_avalanche_rouge_f",
			"MrShounka_chevrolet_avalanche_jaune_f",
			"MrShounka_chevrolet_avalanche_rose_f",
			"MrShounka_chevrolet_avalanche_verte_f",

			"MrShounka_cherokee_Rework_blanche_f",
			"MrShounka_cherokee_Rework_bleu_f",
			"MrShounka_cherokee_Rework_noir_f",
			"MrShounka_cherokee_Rework_rouge_f",
			"MrShounka_cherokee_Rework_jaune_f",
			"MrShounka_cherokee_Rework_rose_f",
			"MrShounka_cherokee_Rework_verte_f",

			"MrShounka_cayenne_c_Rework_blanche_f",
			"MrShounka_cayenne_Rework_bleu_f",
			"MrShounka_cayenne_Rework_noir_f",
			"MrShounka_cayenne_Rework_rouge_f",
			"MrShounka_cayenne_Rework_jaune_f",
			"MrShounka_cayenne_Rework_rose_f",
			"MrShounka_cayenne_Rework_verte_f",

			"MrShounka_c63_2015_Rework_blanche_f",
			"MrShounka_c63_2015_Rework_bleu_f",
			"MrShounka_c63_2015_Rework_noir_f",
			"MrShounka_c63_2015_Rework_rouge_f",
			"MrShounka_c63_2015_Rework_jaune_f",
			"MrShounka_c63_2015_Rework_rose_f",
			"MrShounka_c63_2015_Rework_verte_f",

			"MrShounka_c4_Rework_blanche_f",
			"MrShounka_c4_Rework_bleu_f",
			"MrShounka_c4_Rework_noir_f",
			"MrShounka_c4_Rework_rouge_f",
			"MrShounka_c4_Rework_jaune_f",
			"MrShounka_c4_Rework_rose_f",
			"MrShounka_c4_Rework_verte_f",

			"MrShounka_buggy_Rework_blanche_f",
			"MrShounka_buggy_Rework_bleu_f",
			"MrShounka_buggy_Rework_noir_f",
			"MrShounka_buggy_Rework_rouge_f",
			"MrShounka_buggy_Rework_jaune_f",
			"MrShounka_buggy_Rework_rose_f",
			"MrShounka_buggy_Rework_verte_f",

			"MrShounka_Bowler_Rework_blanche_f",
			"MrShounka_Bowler_Rework_bleu_f",
			"MrShounka_Bowler_Rework_noir_f",
			"MrShounka_Bowler_Rework_rouge_f",
			"MrShounka_Bowler_Rework_jaune_f",
			"MrShounka_Bowler_Rework_rose_f",
			"MrShounka_Bowler_Rework_verte_f",

			"MrShounka_bmwm6_Rework_blanche_f",
			"MrShounka_bmwm6_Rework_bleu_f",
			"MrShounka_bmwm6_Rework_noir_f",
			"MrShounka_bmwm6_Rework_rouge_f",
			"MrShounka_bmwm6_Rework_jaune_f",
			"MrShounka_bmwm6_Rework_rose_f",
			"MrShounka_bmwm6_Rework_verte_f",

			"MrShounka_bmw_1s_Police_Rework_f",

			"MrShounka_bmw_1s_Gend_Rework_f",

			"MrShounka_bmw_1series_Rework_blanche_f",
			"MrShounka_bmw_1series_Rework_bleu_f",
			"MrShounka_bmw_1series_Rework_noir_f",
			"MrShounka_bmw_1series_Rework_rouge_f",
			"MrShounka_bmw_1series_Rework_jaune_f",
			"MrShounka_bmw_1series_Rework_rose_f",
			"MrShounka_bmw_1series_Rework_verte_f",

			"MrShounka_audiq7_Rework_bleu_f",
			"MrShounka_audiq7_Rework_noir_f",
			"MrShounka_audiq7_Rework_rouge_f",
			"MrShounka_audiq7_Rework_jaune_f",
			"MrShounka_audiq7_Rework_rose_f",
			"MrShounka_audiq7_Rework_verte_f",

			"MrShounka_audia8_limo_Rework_p_blanche_f",
			"MrShounka_audia8_limo_Rework_p_bleu_f",
			"MrShounka_audia8_limo_Rework_p_noir_f",
			"MrShounka_audia8_limo_Rework_p_rouge_f",
			"MrShounka_audia8_limo_Rework_p_jaune_f",
			"MrShounka_audia8_limo_Rework_p_rose_f",
			"MrShounka_audia8_limo_Rework_p_verte_f",

			"MrShounka_audi_RS5_Rework_p_blanche_f",
			"MrShounka_audi_RS5_Rework_p_bleu_f",
			"MrShounka_audi_RS5_Rework_p_noir_f",
			"MrShounka_audi_RS5_Rework_p_rouge_f",
			"MrShounka_audi_RS5_Rework_p_jaune_f",
			"MrShounka_audi_RS5_Rework_p_rose_f",
			"MrShounka_audi_RS5_Rework_p_verte_f",

			"MrShounka_Alfa_Romeo_Brera_Rework_blanche_f",
			"MrShounka_Alfa_Romeo_Brera_Rework_bleu_f",
			"MrShounka_Alfa_Romeo_Brera_Rework_noir_f",
			"MrShounka_Alfa_Romeo_Brera_Rework_rouge_f",
			"MrShounka_Alfa_Romeo_Brera_Rework_jaune_f",
			"MrShounka_Alfa_Romeo_Brera_Rework_rose_f",
			"MrShounka_Alfa_Romeo_Brera_Rework_verte_f",

			"MrShounka_agera_Rework_p_blanche_f",
			"MrShounka_agera_Rework_p_bleu_f",
			"MrShounka_agera_Rework_p_noir_f",
			"MrShounka_agera_Rework_p_rouge_f",
			"MrShounka_agera_Rework_p_jaune_f",
			"MrShounka_agera_Rework_p_rose_f",
			"MrShounka_agera_Rework_p_verte_f",
			//Smart
			"MrShounka_a3_smart_Rework_blanche_f",
			"MrShounka_a3_smart_Rework_bleu_f",
			"MrShounka_a3_smart_Rework_noir_f",
			"MrShounka_a3_smart_Rework_rouge_f",
			"MrShounka_a3_smart_Rework_jaune_f",
			"MrShounka_a3_smart_Rework_rose_f",
			"MrShounka_a3_smart_Rework_verte_f",
			//Clio RS
			"MrShounka_a3_rs_Rework_p_blanche_f",
			"MrShounka_a3_rs_Rework_p_bleu_f",
			"MrShounka_a3_rs_Rework_p_noir_f",
			"MrShounka_a3_rs_Rework_p_rouge_f",
			"MrShounka_a3_rs_Rework_p_jaune_f",
			"MrShounka_a3_rs_Rework_p_rose_f",
			"MrShounka_a3_rs_Rework_p_verte_f",
			//Nissan GTR 2012
			"MrShounka_a3_gtr_Rework_blanche_f",
			"MrShounka_a3_gtr_Rework_bleu_f",
			"MrShounka_a3_gtr_Rework_noir_f",
			"MrShounka_a3_gtr_Rework_rouge_f",
			"MrShounka_a3_gtr_Rework_jaune_f",
			"MrShounka_a3_gtr_Rework_rose_f",
			"MrShounka_a3_gtr_Rework_verte_f",
			"Mrshouka_fordgt_Rework_blanche_f",
			"Mrshouka_fordgt_Rework_bleu_f",
			"Mrshouka_fordgt_Rework_noir_f",
			"Mrshouka_fordgt_Rework_rouge_f",
			"Mrshouka_fordgt_Rework_jaune_f",
			"Mrshouka_fordgt_Rework_rose_f",
			"Mrshouka_fordgt_Rework_verte_f",		
            //BW
			"BW_Offroad_Feldjager_F",
			"BW_Offroad_F",
			"BW_Offroad_Repair_F",
			"BW_SPw_Fennek_Stan_F",
			"BW_SPw_Fennek_Med_F",
			"BW_MATV_Stan_F",
			"BW_MATV_Med_F",
			"BW_LKW7T_Trans_F",
			"BW_LKW7T_Trans_Cov_F",
			"BW_LKW7T_Med_F",
			"BW_LKW7T_Fuel_F",
			"BW_LKW7T_Ammo_F",
			"BW_LKW7T_Repair_F",
			"BW_LKW7T_Device_F",
			//"BW_LKW15T_Multi_F",
			"BW_LKW15T_Fuel_F",
			"BW_LKW15T_Ammo_F",
			//"BW_LKW15T_Repair_F",
			"BW_Arma_FLW_F",
			//Eagel
			"BWA3_Eagle_Fleck",	
			"BWA3_Eagle_FLW100_Fleck",
			"BWA3_Eagle_Tropen",
			"BWA3_Eagle_FLW100_Tropen",	
			"BWA3_Puma_Fleck",	
			"BWA3_Leopard2_Fleck",
			// Tracked vehicles (Tropen)	
			"BWA3_Puma_Tropen",
			"BWA3_Leopard2_Tropen"					
			//"BW_Arma_Trans_F",
			//"BW_Arma_Med_F"

                        ], 50];

            _weaponHolder = objNull;
            if ((count _nearestTruck > 0)) then
            {
                _truck = _nearestTruck select 0;
                if (_truck canAdd "Exile_Item_WoodLog") then
                    {
                    _truck addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
                        [_sessionID, "toastRequest", ["SuccessTitleOnly", [_woodVehicleText]]] call ExileServer_system_network_send_to;
                    }
                    else
                    {
                        _treePosition = getPosATL _tree;
                        _treePosition set[2, 0];
                        _spawnRadius = 3;
                        _weaponHolders = nearestObjects[_treePosition, ["GroundWeaponHolder"], _spawnRadius];
                        _weaponHolder = objNull;
                        if (_weaponHolders isEqualTo []) then
                        {
                            _weaponHolderPosition = [_treePosition, _spawnRadius] call ExileClient_util_math_getRandomPositionInCircle;
                            _weaponHolderPosition set [2, 0];
                            _weaponHolder = createVehicle ["GroundWeaponHolder", _weaponHolderPosition, [], 0, "CAN_COLLIDE"];
                            _weaponHolder setPosATL _weaponHolderPosition;
                        }
                        else
                        {
                            _weaponHolder = _weaponHolders select 0;
                        };
                        _weaponHolder addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
                        [_sessionID, "toastRequest", ["SuccessTitleOnly", [_woodVehicleFullText]]] call ExileServer_system_network_send_to;
                    };
            }
            else
            {

///////////////////////////////////


    _treePosition = getPosATL _tree;
    _treePosition set[2, 0];
    _spawnRadius = 3;
    _weaponHolders = nearestObjects[_treePosition, ["GroundWeaponHolder"], _spawnRadius];
    _weaponHolder = objNull;
    if (_weaponHolders isEqualTo []) then
    {
        _weaponHolderPosition = [_treePosition, _spawnRadius] call ExileClient_util_math_getRandomPositionInCircle;
        _weaponHolderPosition set [2, 0];
        _weaponHolder = createVehicle ["GroundWeaponHolder", _weaponHolderPosition, [], 0, "CAN_COLLIDE"];
        _weaponHolder setPosATL _weaponHolderPosition;
    }
    else
    {
        _weaponHolder = _weaponHolders select 0;
    };
    _weaponHolder addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];

///////////////////////////////////
//////Chop Trees Into Vehicles/////
///////////////////////////////////
            [_sessionID, "toastRequest", ["SuccessTitleOnly", [_woodText]]] call ExileServer_system_network_send_to;
            };
///////////////////////////////////

}
catch
{
    _exception call ExileServer_util_log;
};
true