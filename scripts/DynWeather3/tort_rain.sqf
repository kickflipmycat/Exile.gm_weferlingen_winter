comment "#############################################################################";
comment "This is tort_dynamicWeather 3 - Rain script - Version 3.04 - 2018-09-12";
comment "Example call: 0 = [random 1, 0, 1, -0.5 + random 1, random 0.5, 0.7] execVM '\@tort_DynamicWeather3\tort_rain.sqf';";
comment "Setting tort_process_rain true/false restarts/halts the weather progression";
comment "Calling 0 = [-1] execVM '\@tort_DynamicWeather3\tort_rain.sqf'; kills the script";
comment "#############################################################################";

if (!isNil "tort_rain") then {
  if (!scriptDone tort_rain) then {
    terminate tort_rain;
    comment "waitUntil {scriptDone tort_rain}";
  };
};

if (tolower(str(_this#0)) find "stop" >= 0) exitWith {systemchat "Rain processing has been stopped."};
if (tolower(str(_this#0)) find "false" >= 0) exitWith {systemchat "Rain processing has been stopped."};

tort_rain = _this spawn {

   _now = param [0, random 1];
   _min = param [1, 0];
   _max = param [2, 1];
   _tendency = param [3, -0.25 + random 0.5];
   _turbulence = param [4, random 0.5];
   _overcast_threshold = param [5, 0.7 + random 0.05];
   _mincycle = param [6, 15];
   _maxcycle = param [7, 140];
   _randomExtremaChance = param [8,0];

   if (typeName (_this#0) != "SCALAR") then {_now = rain};
   private ["_transitiontime", "_cycle", "_change_val", "_n1", "_s1", "_n2", "_s2", "_i", "_sgn"];
   _stableExtremaCycles = 1; _tmpmin = _min; _tmpmax = _max; _tmpturb = _turbulence;
   if ((random 2) > (_tendency + 1)) then {_sgn = -1} else {_sgn = 1};
   sleep 3;
   if (tolower(str(_this#0)) find "-" >= 0) then {_now = abs _now} else {1 setrain _now};

   while {true} do {
      if (_stableExtremaCycles < 1) then
      {  _stableExtremaCycles = ceil((1 - _tmpturb) * random 2.5);
         if (0.5 > random 1) then {_tmpmin = _min; _tmpmax = _max};
         if ((0.2 + 0.6 * _tmpturb) < random 1) then
         {  _tmpmin = _min + random [_min, _min + 0.25 * (_max - _min), _max];
            _tmpmin = [_min, _tmpmin] selectRandomWeighted [0.8, 0.2];
            _tmpmax = _tmpmin + random (_max - _tmpmin);
         };
         if (_randomExtremaChance > random 1) then {_tmpmin = random 1; _tmpmax = _tmpmin + random (1 - _tmpmin)};
      }; _stableExtremaCycles = _stableExtremaCycles - 1;
      _change_val = 0;
      _cycle = _maxcycle - 0.5 * (_maxcycle - _mincycle) * _tmpturb - random (0.25 * (_maxcycle - _mincycle) * _tmpturb) - random (0.25 * (_maxcycle - _mincycle) * overcast);
      _transitiontime = (0.8 * _cycle) + random (0.2 * _cycle);
      _n1 = (_transitiontime - (_transitiontime mod 5)) / 5; _n1 = _n1 max 1; _s1 = _transitiontime / _n1;
      _n2 = ((_cycle - _transitiontime) - ((_cycle - _transitiontime) mod 5)) / 5; _n2 = _n2 max 1; _s2 = (_cycle - _transitiontime) / _n2;

      if (overcast > _overcast_threshold) then {
         _change_val = random 0.1 + (0.35 * _tmpturb) + random (0.35 * _tmpturb) + random (0.25 * overcast);
         if ((random 2) > (_tendency + 1)) then {_change_val = - _change_val};
         if ((0.1 + 0.9 * _tendency) < random 1) then
         {
            comment "10-20% chance of almost no change this cycle at all";
            if ((0.8 + 0.1 * _tmpturb) < random 1) then {_change_val = _change_val * random 0.15};
            comment "10-20% extra chance of same direction change";
            if ((0.8 + 0.1 * _tmpturb) < random 1) then {_change_val = (abs _change_val) * _sgn};
         };
         if (_now > _tmpmax) then {_change_val = -abs(_change_val)};
         if (_now < _tmpmin) then {_change_val =  abs(_change_val)};
         if ((_now + _change_val) > _tmpmax) then {_change_val = _tmpmax - _now + 0.25 * random (_tmpmax - _tmpmin)};
         if ((_now + _change_val) < _tmpmin) then {_change_val = _tmpmin - _now - 0.25 * random (_tmpmax - _tmpmin)};
         _sgn = if (_change_val < 0) then {-1} else {1};
         _change_val = _change_val / _n1;
      };
      _tmpTargetRain = (_now + _n1 * _change_val) min 1 max 0;
      for "_i" from 1 to _n1 do {
         _now = (_now + _change_val) min 1 max 0;
         if (overcast < _overcast_threshold) then {_now = 0};
         tort_rain_debug = format ["[%1] RAIN: %2s->%3 [%4..%5] [%6..%7]", round(_now * 100)/100, round _cycle, round(_tmpTargetRain * 100)/100, round(_min * 100)/100, round(_max * 100)/100, round(_tmpmin * 100)/100, round(_tmpmax * 100)/100];
         _s1 setrain _now;
         sleep _s1;
      };

      (_cycle - _transitiontime) setrain _now;
      for "_i" from 1 to _n2 do {sleep _s2};
      _tmpturb = (_tmpturb + 0.1 - random 0.2) max 0 min 1;
      if (abs(_tmpturb - _turbulence) > random 1) then {_tmpturb = _turbulence};
   };
};