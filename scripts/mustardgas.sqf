/*
Author: Zloxen
Description: Mustard Gas
*/

While{true} do
{
_gasmask=["G_Combat","G_Balaclava_TI_G_blk_F","G_Balaclava_combat"];

waituntil{
((nearestObject [getpos player, "SmokeShellYellow"]) distance player < 10)
and
(getpos (nearestObject [getpos player, "SmokeShellYellow"]) select 2 < 0.5)
};

if(!(goggles player in _gasMask))then
{

	_first = getDamage player;
	_final = _first + 0.1;
	player setDamage _final;

};

sleep 2;
};