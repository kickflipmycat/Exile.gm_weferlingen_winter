// S.O.G. Prairie Fire Dynamic Ambient Music script by JackFighter
// Definition of tracks
dayActionAmbient = [
	"vn_contact",
	"vn_time_to_leave",
	"vn_imminent_attack",
	"vn_hell_on_earth",
	"vn_trippin",
	"vn_drafted",
	"vn_route9",
	"vn_voodoo_girl",
	"vn_tequila_highway",
	"vn_there_it_is",
	"vn_fire_in_the_sky"
];

dayCalmAmbient = [
	"vn_prairie_fire",
	"vn_calm_before_the_storm",
	"vn_behind_enemy_lines",
	"vn_prayer_for_the_fallen",
	"vn_the_village",
	"vn_deadly_jungle",
	"vn_enemy_territory",
	"vn_stealth_mode",
	"vn_shadows_of_the_forest",
	"vn_im_home",
	"vn_another_life",
	"vn_unsung_heroes",
	"vn_blues_for_suzy",
	"vn_kitty_bar_blues",
	"vn_freedom_bird",
	"vn_up_here_looking_down",
	"vn_jungle_boots"
];

nightActionAmbient = [
	"vn_contact",
	"vn_time_to_leave",
	"vn_imminent_attack",
	"vn_hell_on_earth"
];

nightCalmAmbient = [
	"vn_prairie_fire",
	"vn_calm_before_the_storm",
	"vn_behind_enemy_lines",
	"vn_prayer_for_the_fallen",
	"vn_the_village",
	"vn_deadly_jungle",
	"vn_enemy_territory",
	"vn_stealth_mode",
	"vn_shadows_of_the_forest",
	"vn_im_home",
	"vn_another_life"
];

//Script itself
detectionBoolean = false;
musicBooleanStop = false;
addMusicEventHandler ["MusicStop", {musicBooleanStop = true}];
diag_log "Ambient Music Loading...";

[] spawn {
scopeName "checkingLoop";
while {true} do 
	{
		detectionBoolean = true;
		_closestEnemy = player findNearestEnemy player;
		_distanceToClosestEnemy = player distance2D _closestEnemy;
		_enemyAwareness = opfor knowsAbout player; // <-------------------------------------------could be blufor, opfor or independent
		if (_enemyAwareness > 3.95 and _distanceToClosestEnemy < 650) then {detectionBoolean = true;} else {detectionBoolean = false;};
		sleep 0.5;
	};
};

[] spawn {
scopeName "ambientLoop";
	while {true} do {
		_randomCalmDay = selectRandom dayCalmAmbient;
		_randomCalmNight = selectRandom nightCalmAmbient;
		_randomActionDay = selectRandom dayActionAmbient;
		_randomActionNight = selectRandom nightActionAmbient;
			3 fadeMusic 1;
		if (dayTime < 19) then {playMusic _randomCalmDay;} else {playMusic _randomCalmNight;};
		waitUntil {detectionBoolean isEqualTo true or musicBooleanStop isEqualTo true};
		if (musicBooleanStop isEqualTo true) then {musicBooleanStop = false};
		if (detectionBoolean isEqualTo true) then {
			scopeName "actionLoop";
			while {true} do {
				3 fadeMusic 1;
				if (dayTime < 19) then {playMusic _randomActionDay;} else {playMusic _randomActionNight;};
				sleep 4;
				waitUntil {detectionBoolean isEqualTo false or musicBooleanStop isEqualTo true};
				if (musicBooleanStop isEqualTo true) then {musicBooleanStop = false};				
				sleep 0.5;
					3 fadeMusic 0;
					sleep 3;
				_randomActionDay = selectRandom dayActionAmbient;
				_randomActionNight = selectRandom nightActionAmbient;
				if (detectionBoolean isEqualTo false) then {breakOut "ActionLoop";};
			};
			sleep 0.5;
		};
		sleep 0.5;
	};
};

