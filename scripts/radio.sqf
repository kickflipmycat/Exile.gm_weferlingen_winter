// To be called via init of object
_sound = selectRandom 
  [
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

playSound _sound;