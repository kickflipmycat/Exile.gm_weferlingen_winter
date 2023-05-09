Tort_dynamicWeather3
====================
This mod enables permanently moving weather. It can be used as mod or script.



Installation:
=============
Place the folder "@tort_dynamicWeather3" into your ArmA3 folder, so that you will typically have:
"..\steamapps\common\ArmA3\@tort_dynamicweather3\"




Usage as a mod
==============
Add "-mod=@tort_dynamicweather3" and "--filePatching" to your ArmA3 command line.

Configuration of the mod
========================
- Edit the execVM calls in the @autostart.sqf. It has example presets.
- Changes require a mission restart.

For instant changes, execute the calls in a debug window.
You could furthermore paste the modules code there.


Usage as a SCRIPT
=================
Call the desired scripts (in an Eden logics init field, via mission files, from the debug window...).
Examples:
0 = [] execVM "\@tort_dynamicweather3\tort_rain.sqf"; //start with default values
0 = [0.5] execVM "\@tort_dynamicweather3\tort_overcast.sqf"; //start with 0.5 overcast
0 = [5, 0, 10, -0.5, 0] "\@tort_dynamicweather3\tort_wind.sqf";
You can start the script as often as you want - also, if it is loaded as a mod. It will kill the prior instance and start from scratch.
Find presets in the @autostart.sqf

Arguments
=========
As for the arguments order and description please look into the default values on top of the respective script.
General information:
- "weighting": from -1 to 1 and describes the probability to move up or down. I.e., weighting=-0.5 for rain means you get 75% probability of rain going down. -1 means 100% probability of it going down, 0.5 means 75% of it going up.
- "turbulence": 0 to 1. 0 means less changes and more stability, 1 means lots of changes.
Find argument listings in the @autostart.sqf.



Overcast notes
==============
The initial overcast is set with "forceweatherchange" which creates a short lag. The rest will be done smoothly. Don't expect radical changes, overcast transition is slow in ArmA. Therefore overcast has no turbulence argument.

Rain notes
==========
Rain has an addition threshold argument which defines, after which overcast level rain is allowed. If you'd set threshold to >1, you'd never see rain.

Fog notes
=========
If not in MP, fog uses decay, i.e. can create thick ground fog. Ground fog is a beast which easily destroys playability which has to be tamed.
Features:
- Ground fog follows player elevation in a hopefully subtle way
- Ground fog will lose thickness by wind
- Fog value decreases with wind and rain
- Higher ground fog probability in the morning

Wind notes
==========
- Wind values are in m/s.
- Includes gusts, because "setgust" command in ArmA is broken
- Every terrain has a specific wind direction with some offset of course
- wind is set with setwind array
I had advanced_ballistics in mind, the wind module is useful for snipers. Now advanced_ballistics is deprecated and went into ACE. I am not using ACE but I think, it will still serve snipers well.