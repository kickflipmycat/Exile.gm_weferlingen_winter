comment "#############################################################################";
comment "This is tort_dynamicWeather 3 - Wind script - Version 3.04 - 2018-09-12";
comment "Example execVM call with same startup values as above:";
comment "[random 1, 0, 5, -0.5, 0.05] execVM '\@tort_DynamicWeather3\tort_wind.sqf';";
comment "Setting tort_process_wind true/false restarts/halts the weather progression";
comment "Calling 0 = [-1] execVM '\@tort_DynamicWeather3\tort_wind.sqf' kills the script";
comment "#############################################################################";

if (!isNil "tort_wind") then {
  if (!scriptDone tort_wind) then {
    terminate tort_wind;
    comment "waitUntil {scriptDone tort_wind}";
  };
};

if (tolower(str(_this#0)) find "stop" >= 0) exitWith {systemchat "Wind processing has been stopped."};
if (tolower(str(_this#0)) find "false" >= 0) exitWith {systemchat "Wind processing has been stopped."};

tort_wind = _this spawn {

   _ms_now = param [0, random 3];
   _ms_min = param [1, 0];
   _ms_max = param [2, 2 + random 3];
   _tendency = param [3, -0.5 + random 0.75];
   _turbulence = param [4, random 0.5];
   _pGusts = param [5, random 0.1];
   _mincycle = param [6, 15];
   _maxcycle = param [7, 120];
   _randomExtremaChance = param [8,0];
   _maxCap = param [9, 30];

   if (typeName (_this#0) != "SCALAR") then {_ms_now = vectorMagnitude [(wind select 0),(wind select 1),0]};
      
   strhash = {
      private _hash = 7;  if ((count _this) == 3) then {_hash = _hash + (_this select 2)};
      _string_array = toArray (_this select 0);
      for "_i" from 0 to ((count _string_array) - 1) do
            {_hash = (_hash * 33 + 2897 * (_string_array select _i)) % 297371};
      floor(_hash % (_this select 1))
   };

   _dir_island = 360 + ([toLower(worldName), 360] call strhash);
   _dir_now = _dir_island - random 45 + random 90;
   _dir_min = _dir_island - 15 - random 15 - random (45 * _turbulence);
   _dir_max = _dir_island + 15 + random 15 + random (45 * _turbulence); if (_dir_max < _dir_min) then {_dir_max = _dir_max + 360};
   
   _tmpmin = _ms_min; _tmpmax = _ms_max; _tmpturb = _turbulence; _stableExtremaCycles = 1;
   _splitS = 9; _splitTmp = 0; private "_sgn";

   if ((random 2) > (_tendency + 1)) then {_sgn = -1} else {_sgn = 1};

   if (tolower(str(_this#0)) find "-" >= 0) then {_ms_now = abs _ms_now} else {setwind [(sin (_dir_now)) * _ms_now * -1, (cos (_dir_now)) * _ms_now * -1, true]};

   while {true} do
   {
      if (_stableExtremaCycles < 1) then
      {  _stableExtremaCycles = ceil((1-_tmpturb) * random 2.5);
         if (0.5 > random 1) then {_tmpmin = _ms_min; _tmpmax = _ms_max};
         if ((0.2 + 0.6 * _tmpturb) < random 1) then
         {  _tmpmin = _ms_min + random [_ms_min, _ms_min + 0.25 * (_ms_max - _ms_min), _ms_max];
            _tmpmin = [_ms_min, _tmpmin] selectRandomWeighted [0.8, 0.2];
            _tmpmax = _tmpmin + random (_ms_max - _tmpmin);
         };
         if (_randomExtremaChance > random 1) then {_tmpmin = random 20; _tmpmax = _tmpmin + random (20 - _tmpmin)};
      }; _stableExtremaCycles = _stableExtremaCycles - 1;
      
      _cycle = _mincycle + _maxcycle - 0.5 * (_maxcycle - _mincycle) * _tmpturb - random (0.3 * (_maxcycle - _mincycle) * _tmpturb) - random (0.2 * (_maxcycle - _mincycle));
      _change_val = 1 + (random 2) +  3 * _tmpturb + 3 * random _tmpturb;
      _max_change_val = 3 + 6 * _tmpturb;
      _change_dir  = 5 + (random 5) + 15 * _tmpturb + 20 * random _tmpturb;
      
      if ((random 2) > (_tendency + 1)) then {_change_val = - _change_val};

      comment "Exceptions";
      if ((0.1 + 0.9 * _tendency) < random 1) then
      {
         comment "10%-20% chance of almost no change this cycle at all";
         if ((0.8 + 0.1 * _tmpturb) < random 1) then {_change_val = _change_val * random 0.15; _change_dir = _change_dir * random 0.15};
         comment "20-40% chance of same direction change";
         if ((0.8 + 0.1 * _tmpturb) < random 1) then {_change_val = (abs _change_val) * _sgn};
         comment "Low overcast, less wind - high overcast, more wind";
         if ((0.5 * overcast + random 0.5) > 0.7) then {_change_val = abs(_change_val)};
         if ((0.5 * overcast - random 0.5) < 0.3) then {_change_val = abs(_change_val)};
      };

      comment "Direction out of range? Move back!";
      if (_ms_now > _tmpmax) then {_change_val = -abs(_change_val)};
      if (_ms_now < _tmpmin) then {_change_val =  abs(_change_val)};
      if ((_ms_now + _change_val) > _tmpmax) then {_change_val = _tmpmax - _ms_now + 0.25 * random (_tmpmax - _tmpmin)};
      if ((_ms_now + _change_val) < _tmpmin) then {_change_val = _tmpmin - _ms_now - 0.25 * random (_tmpmax - _tmpmin)};
      if ((_ms_now + _change_val) > _maxCap) then {_change_val = _maxCap - _ms_now};
      if ((_ms_now + _change_val) < 0) then {_change_val = - _ms_now};
      if (_change_val < 0) then {_change_val = _change_val max (-_max_change_val)} else {_change_val = _change_val max _max_change_val};

      if (_dir_now > _dir_max) then {_change_dir = -abs(_change_dir)};
      if (_dir_now < _dir_min) then {_change_dir =  abs(_change_dir)};
      _n1 = floor (_cycle / _splitS);
      _a = _change_val/_n1; _b = _change_dir/_n1;
      _sgn = if (_a < 0) then {-1} else {1};
      _allowGusts = ((overcast > 0.5) && ((0.5 + _tmpturb) > random 1) && ((time % (200 + random 100)) > (100 + random 100)));

      for "_j" from 1 to _n1 do
      {
         _ms_now  = _ms_now  + _a;
         _dir_now = _dir_now + _b;
         comment "implant a possible gust";
         _tmp = _ms_now; _splitTmp = _splitS; _gustIsNow = "";
         if (_allowGusts && (_pGusts > random 1)) then
         {
               _ms_now = 20 + random 10; _dir_now = _dir_now - random 30 + random 60; _splitS = 5 + random 7;
               if (_dir_now > _dir_max) then {_b = -abs(_b)};
               if (_dir_now < _dir_min) then {_b =  abs(_b)};
               _gustIsNow = "GUST: " + str _ms_now + " m/s";
         };
         setwind [(sin (_dir_now)) * _ms_now * -1, (cos (_dir_now)) * _ms_now * -1, true];
         tort_wind_debug = format ["[%1ms,%2]WIND:%3s->[%4ms,%5][%6..%7][%8..%9..%10]%11", round(_tmp * 10)/10, round _dir_now % 360, round _cycle, round((_ms_now + _change_val - _j * _a) * 10)/10, round (_dir_now + _change_dir - _j * _b) % 360, round(_tmpmin * 10)/10, round(_tmpmax * 10)/10, round _dir_min % 360, round _dir_island % 360, round _dir_max % 360, _gustIsNow];
         _ms_now = _tmp;
         sleep _splitS; _splitS = _splitTmp;
      };
      sleep (_cycle - (_splitS * _n1));
      if (0.25 > random 1) then {_dir_min = _dir_island - 15 - random 45; _dir_max = _dir_island + 15 + random 45; if (_dir_max < _dir_min) then {_dir_max = _dir_max + 360};};
      _tmpturb = (_tmpturb + 0.1 - random 0.2) max 0 min 1;
      if (abs(_tmpturb - _turbulence) > random 1) then {_tmpturb = _turbulence};
   };
};