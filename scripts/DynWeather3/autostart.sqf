// Startup with default values

/*[] execVM "\scripts\DynWeather3\tort_overcast.sqf";
[] execVM "\scripts\DynWeather3\tort_rain.sqf";
[] execVM "\scripts\DynWeather3\tort_fog.sqf";
[] execVM "\scripts\DynWeather3\tort_wind.sqf";
*/
// -- Stormy and foggy --
[0.7 + random 0.2, 0.5, 1, 0] execVM "\scripts\DynWeather3\tort_overcast.sqf";
[random 1, 0, 1, 0.5, 0.5, 0.75] execVM "\scripts\DynWeather3\tort_rain.sqf";
[0.1 + random 0.2, 0.1, 0.2 + random 0.4, random 0.7, random 0.5] execVM "\scripts\DynWeather3\tort_fog.sqf";
[5 + random 5, 1, 15, 0, 0.5, 0.5] execVM "\scripts\DynWeather3\tort_wind.sqf";

/*
==========================================================================
Notes
==========================================================================
[false] execVM "..." Terminates the script. Weather stays as it is, ArmA engine gets control.
[-0.8, ...] execVM "..." Sets a target value of 0.8, but does not instantly apply it. -0 is possible!

[] execVM "\scripts\DynWeather3\tort_overcast.sqf"; // overcast with default values
[1] execVM "\scripts\DynWeather3\tort_overcast.sqf"; // set full overcast
[1, 0.5, 1] execVM "\scripts\DynWeather3\tort_overcast.sqf"; // set full overcast, minimal 0.5, max. 1
[-1, 0, 1] execVM "\scripts\DynWeather3\tort_overcast.sqf"; // Try move to full overcast
[-overcast, 0, 0] execVM "\scripts\DynWeather3\tort_overcast.sqf"; // stays as it is, but set min/max to zero, and go there

==========================================================================
More Parameters
==========================================================================
//// OVERCAST PARAMETERS ////
now[0..1], min[0..1], max[0..1], tendency[-1..1]

//// RAIN PARAMETERS ////
now[0..1], min[0..1], max[0..1], tendency[-1..1], turbulence[0..1], overcast_threshold[0..1],
mincycle(sec), maxcycle(sec)

//// FOG PARAMETERS ////
now[0..1], min[0..1], max[0..1], tendency[-1..1], turbulence[0..1],
mincycle(sec), maxcycle(sec),
decay_now[0..1], decay_min[0..1], decay_max[0..1],
baselevel_now(m_rel), baselevel_low(m_rel), baselevel_high(m_rel)

////WIND PARAMETERS ////
now(ms)[0..30], min(ms)[0..30], max(ms)[0..30], tendency[-1..1], turbulence[0..1], gusts[0..1],
mincycle(sec), maxcycle(sec)

==========================================================================
More Example presets
==========================================================================
// -- Sunny --
[0.3, 0.2, 0.5, 0] execVM "\scripts\DynWeather3\tort_overcast.sqf";
[] execVM "\scripts\DynWeather3\tort_rain.sqf";
[] execVM "\scripts\DynWeather3\tort_fog.sqf";
[random 1, 0, 5, -0.5, 0.05] execVM "\scripts\DynWeather3\tort_wind.sqf";

// -- Cloudy --
[0.7] execVM "\scripts\DynWeather3\tort_overcast.sqf";
[0] execVM "\scripts\DynWeather3\tort_rain.sqf";
[] execVM "\scripts\DynWeather3\tort_fog.sqf";
[random 1, 0, 5, -0.5, 0.3, 0.2] execVM "\scripts\DynWeather3\tort_wind.sqf";

// -- Postapocalyptic --
[0.8 + random 0.2, 0.7, 1, 0.5] execVM "\scripts\DynWeather3\tort_overcast.sqf";
[0,0,0.1,-0.5,0,0.8 + random 0.2] execVM "\scripts\DynWeather3\tort_rain.sqf";
[random 0.03, 0, 0.2, -0.3, 0] execVM "\scripts\DynWeather3\tort_fog.sqf";
[random 0.5, random 1, 1 + random 2, -0.75, 0, 0] execVM "\scripts\DynWeather3\tort_wind.sqf";

// -- Stormy --
[0.7 + random 0.2, 0.5, 1, 0] execVM "\scripts\DynWeather3\tort_overcast.sqf";
[random 1, 0, 1, 0.5, 0.5, 0.75] execVM "\scripts\DynWeather3\tort_rain.sqf";
[] execVM "\scripts\DynWeather3\tort_fog.sqf";
[5 + random 5, 1, 15, 0, 0.5, 0.5] execVM "\scripts\DynWeather3\tort_wind.sqf";

// -- OMG --
[0.7 + random 0.2, 0.5, 1, 0] execVM "\scripts\DynWeather3\tort_overcast.sqf";
[random 1, 0, 1, 0, 1, 0.7, 5, 15] execVM "\scripts\DynWeather3\tort_rain.sqf";
[0.02, 0, 0.5, 0, 1, 10, 30, 0.02, 0, 0.15, -5, -20, 10] execVM "\scripts\DynWeather3\tort_fog.sqf";
[5 + random 5, 0, 15, 0, 1, 0.5, 5, 15] execVM "\scripts\DynWeather3\tort_wind.sqf";

// -- Unknown --
[random 1, 0, 0.2 + random 0.8, -0.75 + random 1.5] execVM "\scripts\DynWeather3\tort_overcast.sqf";
[random 1, selectrandom [0, random 0.2], 0.2 + random 0.8, -0.75 + random 1.5, random 0.75, 0.7 + random [0,0,0.3]] execVM "\scripts\DynWeather3\tort_rain.sqf";
[random [0,0,0.4], selectrandom [0,0,random 0.2], 0.2 + random 0.2, -0.75 + random 1.5, random 0.75] execVM "\scripts\DynWeather3\tort_fog.sqf";
[random [0,0,10], 0, random 15, -0.75 + random 1.5, random 0.75, random 0.5] execVM "\scripts\DynWeather3\tort_wind.sqf";

// -- Foggy --
[] execVM "\scripts\DynWeather3\tort_overcast.sqf";
[] execVM "\scripts\DynWeather3\tort_rain.sqf";
[0.1 + random 0.2, 0.1, 0.2 + random 0.4, random 0.7, random 0.5] execVM "\scripts\DynWeather3\tort_fog.sqf";
[] execVM "\scripts\DynWeather3\tort_wind.sqf";

*/