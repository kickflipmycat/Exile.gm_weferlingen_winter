comment "#############################################################################";
comment "This is tort_dynamicWeather 3 - Fog script - Version 3.04 - 2018-09-12";
comment "Example: 0 = [random 0.05, 0, 0.4, -0.75, 0.2, 0.02, 0, 0.07, - 30 + random 20, -40, -10] execVM '\@tort_DynamicWeather3\tort_fog.sqf';";
comment "Setting tort_process_fog true/false restarts/halts the weather progression";
comment "Calling 0 = [-1] execVM '\@tort_DynamicWeather3\tort_rain.fog'; kills the script";
comment "#############################################################################";

if (!isNil "tort_fog") then {
	if (!scriptDone tort_fog) then {
		terminate tort_fog;
		comment "waitUntil {scriptDone tort_fog}";
	};
};

if (tolower(str(_this#0)) find "stop" >= 0) exitWith {systemchat "Fog processing has been stopped."};
if (tolower(str(_this#0)) find "false" >= 0) exitWith {systemchat "Fog processing has been stopped."};

tort_fog = _this spawn {

   _now = param [0, random 0.02];
   _min = param [1, 0];
   _max = param [2, 0.05];
   _tendency = param [3, -0.7];
   _turbulence = param [4, 0.2];
   _mincycle = param [5, 15];
   _maxcycle = param [6, 150];
   _decay_now = param [7, 0.02];
   _decay_min = param [8, 0];
   _decay_max = param [9, 0.08];
   _baselevel_now = param [10, 0];
   _baselevel_low = param [11, -40];
   _baselevel_high = param [12, 0];
   _randomExtremaChance = param [13,0];

   if (typeName (_this#0) != "SCALAR") then {_now = fog};
	waituntil {sleep 0.1; alive player}; sleep 2;
	private "_sgn"; _splitS = 3;
	if ((random 2) > (_tendency + 1)) then {_sgn = [-1,-1,-1]} else {_sgn = [1,1,1]};
	_asl = ((getPosASL player) select 2) - ((getPosATL player) select 2);
	_baselevel_now = _asl + _baselevel_now;
   if (tolower(str(_this#0)) find "-" >= 0) then {_now = abs _now} else {2 setfog [_now,_decay_now, _baselevel_now]};
	sleep _splitS;

	while {true} do
	{
      _windstr = vectorMagnitude [(wind select 0),(wind select 1),0];
      _tmpmin = _min; _tmpmax = _max; _tmpturb = _turbulence;
      if (_randomExtremaChance > random 1) then {_tmpmin = random 1; _tmpmax = _tmpmin + random (1 - _tmpmin)};
      _cycle = _mincycle + _maxcycle - 0.5 * (_maxcycle - _mincycle) * _tmpturb - random (0.3 * (_maxcycle - _mincycle) * _tmpturb) - random (0.2 * (_maxcycle - _mincycle));
      _changeVal = random 0.05 + 0.05 * _tmpturb + random (0.05 * _tmpturb);
      _changeDecay  = random 0.005 + 0.01 * _tmpturb + random (0.01 * _tmpturb);
      _changeLevel   = random 3 + 2 * _tmpturb + random (4 * _tmpturb);
      if ((random 2) > (_tendency + 1)) then {_changeVal = -_changeVal; _changeDecay = -_changeDecay};
      if ((random 3) > (_tendency + 1)) then {_changeLevel = -_changeLevel};

      comment "Exceptions! Most likely if tendency at 0, not happening at tendency -1/1";
      _allowException = ((0.1 + 0.9 * (_tendency^2)) < random 1);
      if (_allowException) then {
         comment "Probably limit fog depending on wind, rain and (high noon on a sunny day)";
         if (_windstr > random 20) then {_changeDecay = - abs(_changeDecay * (1 + _windstr / 15)); _changeVal = - abs(_changeVal * (1 + _windstr / 40))};
         if (rain > random 0.5) then {_changeVal = - abs(_changeVal * (1 + 0.5 * rain))};
         if ((((random 6)*(0.5 + random 0.5)) > (abs(daytime - 14)+ 0.5)) && (0.5 * overcast < random 1)) then {_changeDecay = - abs(_changeDecay * (1 - overcast)); _changeVal = - abs(_changeVal * (1 + 0.5 * overcast))};
         _cycle = _cycle * (0.65 + 0.35 * (1-rain)) * random [0.4,0.5,1];
      } else {
         if ((0.1 + 0.9 * (_tendency^2)) < random 1) then
         {
            comment "5-15% chance of almost no change this cycle at all";
            if ((0.85 + 0.1 * _tmpturb) < random 1) then {_changeVal = _changeVal * random 0.15; _changeDecay = _changeDecay * random 0.15};
            comment "5-15% chance of same direction change";
            if ((0.85 + 0.1 * _tmpturb) < random 1) then {_changeVal = (abs _changeVal) * (_sgn select 0); _changeDecay = (abs _changeDecay) * (_sgn select 1); _changeLevel = (abs _changeLevel) * (_sgn select 2)};
         };
      };

      if ((_now + _changeVal) <= 0) then {_changeDecay = - _decay_now};

      _n1 = floor (_cycle / _splitS);
      _a = _changeVal/_n1; _b = _changeDecay/_n1; _c = _changeLevel/_n1;
      _sgn = [if (_a < 0) then {-1} else {1}, if (_b < 0) then {-1} else {1}, if (_c < 0) then {-1} else {1}];
      _targetFog = round (((_now + _changeVal) min _tmpmax max _tmpmin) * 100) / 100;

      comment "If base level goes too high, move down it";
      if ((_asl + _baselevel_high) < (_baselevel_now + _changeLevel)) then {_c = - (abs _c)};

      for "_j" from 1 to _n1 do
      {
         if (_now > _tmpmax) then {_a = -((_now - _tmpmax)/(_n1-_j))};
         if (_now < _tmpmin) then {_a = (_tmpmin - _now)/(_n1-_j)};
         _now = ((_now + _a) min 1) max 0;
         _decay_now = ((_decay_now + _b) max _decay_min) min _decay_max;
         _baselevel_now = _baselevel_now + _c;
         if (isMultiplayer && !isMultiplayerSolo) then
            {_splitS setfog _now}
         else
            {_splitS setfog [_now, _decay_now, _baselevel_now]};
         tort_fog_debug = format ["[%1,%2,%3] FOG: %4s->%5 [%6..%7] [%8..%9] EXC:%10", round((fogparams select 0)*100)/100, round((fogparams select 1)*1000)/1000, round ((fogparams select 2) *10)/10, round _cycle, _targetFog, round(_min * 100)/100, round(_max * 100)/100, round(_tmpmin * 100)/100, round(_tmpmax * 100)/100, _allowException];
         sleep _splitS;
      };
      sleep (_cycle - (_splitS * _n1));
      if (0.25 > random 1) then {_asl = ((getPosASL player) select 2) - ((getPosATL player) select 2)};
      _tmpturb = (_tmpturb + 0.1 - random 0.2) max 0 min 1;
      if (abs(_tmpturb - _turbulence) > random 1) then {_tmpturb = _turbulence};
	};
};