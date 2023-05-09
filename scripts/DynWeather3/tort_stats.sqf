tort_stats = false;
waitUntil {(!isnil "tort_overcast_debug")&&(!isnil "tort_fog_debug")&&(!isnil "tort_rain_debug")&&(!isnil "tort_wind_debug")};
while {true} do {
   while {tort_stats} do {
      hintSilent parseText format ["%1<br/>%2<br/>%3<br/>%4",tort_overcast_debug,tort_rain_debug,tort_fog_debug,tort_wind_debug];
      sleep 2.21;
   };
   sleep 3.9874;
};