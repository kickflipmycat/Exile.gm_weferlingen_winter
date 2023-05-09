//#include "..\..\script_macros.hpp"
/*
    File: sitdown.sqf
    Author: Joachim and Victor for Prism Community
        www.prism.ovh

    Description:
    Sit in a chair!
*/

private ["_chair","_unit","_randomSit","_sitStyle","_dir"];

_chair = _this select 0;
_unit = _this select 1;
_randomSit = floor(random 5);

if (_unit getVariable ["restrained",false]) exitWith {};
if (_unit getVariable ["isTazed",false]) exitWith {};
if ((player getVariable "sit") == 1) exitWith{hint "You are already sitting !"};
if (vehicle _unit != _unit) exitWith { hint "You are already sitting here!" };
if (_unit distance _chair > 4) exitWith { hint "You are too far !" };
if (!isNull (_chair getVariable ["sitting", objNull])) exitWith { hint "someone is already seated !"; };
if ("sun" in (str _chair)) exitWith { hint "You cannot sit on this object !"; };

switch _randomSit do
{
    case 0: { _sitStyle = "HubSittingChairA_idle1"};
    case 1: { _sitStyle = "HubSittingChairB_idle3"};
    case 2: { _sitStyle = "HubSittingChairC_idle3"};
    case 3: { _sitStyle = "HubSittingChairUA_idle2"};
    case 4: { _sitStyle = "HubSittingChairUB_idle2"};
    case 5: { _sitStyle = "HubSittingChairUC_idle2"};

    default { _sitStyle = "Crew"};
};

_dir = switch (typeOf _chair) do
{
    case "Land_ChairPlastic_F": { 270 };
    case "Land_CampingChair_V1_F": { 180 }; // who sits on a chair backwards
    case "Land_CampingChair_V2_F": { 180 };
    case "Land_ChairWood_F": { 180 };
    case "Land_OfficeChair_01_F": { 180 };
    case "Land_Bench_F": { 90 };
    case "Land_vn_ch_mod_c": { 90 };
    case "Land_vn_lobby_chair": { 90 };
    case "Land_vn_chair_ep1": { 90 };
    case "Land_vn_chair": { 90 };
    case "Land_vn_campingchair_v1_f": { 90 };
    case "Land_vn_campingchair_v2_f": { 90 };
    case "Land_vn_chairplastic_f": { 90 };
    case "Land_vn_chairwood_f": { 90 };
    case "Land_vn_armchair_01_f": { 90 };
    case "Land_vn_sofa_01_f": { 90 }; // add to furniture only?
    case "vn_bar_01_barstool_01": { 90 };
    case "vn_bar_01_campchair_01": { 90 };
    case "vn_bar_01_lawnchair_01": { 90 };

    default { 90 };
};

_posATL = getPosATL _chair;
_obj = "UserTexture1m_F" createVehicle (_posATL);
_obj setPosATL (_posATL);

if ("bench" in (str _chair)) then
{
    if ("bench_f" in (str _chair)) then
    {
        _unit setPosATL [getPosATL _chair select 0, getPosATL _chair select 1 , (getPosATL _chair select 2) - 2];
    };
   
    if ("bench_01_f" in (str _chair)) then
    {
        _unit setPosATL [getPosATL _chair select 0, getPosATL _chair select 1 , (getPosATL _chair select 2) - 0.85];
    };
   
    if ("bench_02_f" in (str _chair)) then
    {
        _unit setPosATL [getPosATL _chair select 0, getPosATL _chair select 1 , (getPosATL _chair select 2) - 0.85];
    };
} else {
    _unit setPosATL (_posATL);
};

_unit setDir ((direction _chair) - _dir);
_chair setVariable ["sitting", _unit, true];
[_unit,_sitStyle] remoteExecCall ["life_fnc_animSync",RCLIENT];
player setVariable ["sit", 1];
standup = _unit addAction ["<t color='#FF0000'>stand up</t>","scripts\Sitting\standup.sqf"];
sleep 1;

while {(player getVariable "sit") == 1} do
    {
        if (!alive player) then
        {
            player setVariable ["sit", 0];
        };
   
        if (_unit getVariable ["restrained",false]) then
        {
            player setVariable ["sit", 0];
        };
   
        if(life_istazed) then
        {
            player setVariable ["sit", 0];
        };
   
        if (player distance (getPosATL _obj) > 2) then
        {
            player setVariable ["sit", 0];
            [player,""] remoteExecCall ["life_fnc_animSync",RCLIENT];
            player setVariable ["sit", 0];
            hint "you are too far from the chair";      
        };
   
        sleep 0.2;
    };

_unit removeAction standup;
deleteVehicle _obj;
player setVariable ["sit", 0];
_chair setVariable ["sitting", nil, true];
_sitStyle = nil;
_dir = nil;