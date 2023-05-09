// global mobilisation edits
// categories to be refined
// original script SOG music by JackFighter 
// Definition of tracks
dayActionAmbient = [
	"gm_preprations",
"gm_medley",
"gm_limits",
"gm_note",
"gm_intermezzo",
"gm_1983",
"gm_longplay",
"gm_warmup",
"gm_uncertain",
"gm_panzerkraft",
"gm_leopards",
"gm_remaining",
"gm_longstrides",
"gm_response",
"gm_scatter",
"gm_death",
"gm_motschuetzen"
];

dayCalmAmbient = [
"gm_preprations",
"gm_medley",
"gm_limits",
"gm_note",
"gm_intermezzo",
"gm_1983",
"gm_longplay",
"gm_warmup",
"gm_uncertain",
"gm_panzerkraft",
"gm_leopards",
"gm_remaining",
"gm_longstrides",
"gm_response",
"gm_scatter",
"gm_death",
"gm_motschuetzen"
];

nightActionAmbient = [
"gm_preprations",
"gm_medley",
"gm_limits",
"gm_note",
"gm_intermezzo",
"gm_1983",
"gm_longplay",
"gm_warmup",
"gm_uncertain",
"gm_panzerkraft",
"gm_leopards",
"gm_remaining",
"gm_longstrides",
"gm_response",
"gm_scatter",
"gm_death",
"gm_motschuetzen"
];

nightCalmAmbient = [
"gm_preprations",
"gm_medley",
"gm_limits",
"gm_note",
"gm_intermezzo",
"gm_1983",
"gm_longplay",
"gm_warmup",
"gm_uncertain",
"gm_panzerkraft",
"gm_leopards",
"gm_remaining",
"gm_longstrides",
"gm_response",
"gm_scatter",
"gm_death",
"gm_motschuetzen"
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

