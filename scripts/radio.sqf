// To be called via init of object
_sound = selectRandom 
  [
    "sound1" // Defined in Description.ext
  ];

playSound _sound;