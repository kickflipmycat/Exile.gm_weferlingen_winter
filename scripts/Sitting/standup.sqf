//#include "..\..\script_macros.hpp"
/*
    File: standup.sqf
    Author: John "Paratus" VanderZwet
    Description:
    Stand up from chair
*/

detach player;
[player,""] remoteExecCall ["life_fnc_animSync",RCLIENT];
//player removeAction standup;
_pos = getPosASL player;
_dir = getDir player;
player setPosASL [(_pos select 0) + (0.5 * sin(_dir)), (_pos select 1) + (0.5 * cos(_dir)), _pos select 2];
player setVariable ["sit", 0];