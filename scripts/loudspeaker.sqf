GOM_fnc_baseLoudspeakers = {

	params ["_loudspeakers","_sounds"];

	GOM_fnc_basePlaySounds = true;

	while {GOM_fnc_basePlaySounds} do {

		//sleep random [300,600,900]; //Amount of random time it will take to play in seconds. I recommend you keep it, currently set at 5 minute, 10 minute and 15 minute random intervals
		sleep 600;
		{

			_sound = selectRandom _sounds;

			if (alive _x) then {

				[_x,_sound] remoteExec ["say3D",0];

			};

		} forEach _loudspeakers;

	};

};

//to call it:
/*
_loudspeakers = [speaker1,speaker2]; //Object variable name change this to suit your needs. If you wish to add more than two simply continue with a , after the name
_sounds = ["sound","sound1"]; //Name of the sound file replace to suit your needs.

_play = [_loudspeakers, _sounds] spawn GOM_fnc_baseLoudspeakers; */

_loudspeakers = [speaker1,speaker2,speaker3,speaker4];  
_sounds =  
["gm_preprations","gm_medley","gm_limits","gm_note","gm_intermezzo","gm_1983","gm_longplay","gm_warmup","gm_uncertain","gm_panzerkraft","gm_leopards","gm_remaining","gm_longstrides","gm_response","gm_scatter","gm_death","gm_motschuetzen"];
 
_play = [_loudspeakers, _sounds] spawn GOM_fnc_baseLoudspeakers;  

