//Uncomment following line if used as function
//_unit = param[0];
//Uncomment following line if used as script
_unit = _this select 0;

diag_log "HALO script loading...";
_haloAltitude = 1000;
//Opening map and handling click
openMap true;
mapclick = false;
onMapSingleClick "clickpos = _pos; mapclick = true; onMapSingleClick """";true;";
waituntil {mapclick};

_haloLocation = clickpos;
_unitLoadout = getUnitLoadout _unit;
cutText ["H.A.L.O. in progress...", "BLACK OUT", 1];
sleep 1;
openMap false;
_unit setPos _haloLocation;
_unit addBackpack "B_Parachute";
//Halo
[_unit, _haloAltitude] call bis_fnc_halo;
sleep 2;
cutText ["", "BLACK IN", 1];
waitUntil {(getpos _unit select 2) < 2};
//Giving loadout back
sleep 1;
_unit setUnitLoadout _unitLoadout;S