comment "#############################################################################";
comment "This is tort_dynamicWeather 3 - Overcast script - Version 3.04 - 2018-09-12" ;
comment "Example call 0 = [0.3 + random 0.6, 0.2, 1, -0.5 + random 1] execVM '\@tort_DynamicWeather3\tort_overcast.sqf';";
comment "Setting tort_process_overcast true/false restarts/halts the weather progression";
comment "Calling 0 = [-1] execVM '\@tort_DynamicWeather3\tort_overcast.sqf;' kills the script";
comment "#############################################################################";

if (!isNil "tort_overcast") then {
   if (!scriptDone tort_overcast) then {
      terminate tort_overcast;
      comment "waitUntil {scriptDone tort_overcast}";
   };
};

if (tolower(str(_this#0)) find "stop"  >= 0) exitWith {systemchat "Overcast processing has been stopped."};
if (tolower(str(_this#0)) find "false" >= 0) exitWith {systemchat "Overcast processing has been stopped."};

tort_overcast = _this spawn {

   _now = param [0, 0.3 + random 0.5];
   _min = param [1, random 0.3];
   _max = param [2, 1];
   _tendency = param [3, -0.25 + random 0.5];

   if (typeName (_this#0) != "SCALAR") then {_now = overcast};
   if (tolower(str(_this#0)) find "-" >= 0) then {_now = abs _now} else {0 setovercast _now; forceweatherchange};
   private "_sgn";
   if ((random 2) > (_tendency + 1)) then {_sgn = -1} else {_sgn = 1};
   while {true} do
   {
      _windstr = vectorMagnitude [(wind select 0),(wind select 1),0];
      comment "0.1 per 10 minutes";
      _change_val = 0.1 min random((_max - _min) / 4);
      if ((random 2) > (_tendency + 1)) then {_change_val = - _change_val};
      comment "15% chance of almost no change this cycle at all";
      if (0.15 > random 1) then {_change_val = _change_val * random 0.15};
      comment "15% extra chance of same direction change";
      if (0.15 > random 1) then {_change_val = (abs _change_val) * _sgn};

      _sgn = if (_change_val < 0) then {-1} else {1};
      _change_val = (_change_val / 10);
      for "_j" from 1 to 200 do
      {
         if ((_j % 20) == 1) then
         {
            0 setovercast _now; _tmp = _now;
            _now = _now + _change_val;
            _now = (_now max _min) min _max ;
            tort_overcast_debug = format ["[%1] OV: %2s->%3 [%4..%5]", round(_tmp * 100)/100, 60, round(_now * 100)/100, round(_min * 100)/100, round(_max * 100)/100];
         };
         sleep 3;
      };
   };
};