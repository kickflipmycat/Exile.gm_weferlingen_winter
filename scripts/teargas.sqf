/*
File Name: teargas.sqf
File Version: 1.0
File Author: Mokey
File Edited : Romset95
File Description: Gas Lacrymogène | Altis Life 5.0 Framework
*/

if !(hasInterface) exitWith {};

thrownSmokeShell = "SmokeShellGreen"; // Smoke Jeter à la main (Défaut : Smoke Bleu)
launcherSmokeShell = "vn_40mm_m715_smoke_g_mag"; // Smoke jeter depuis un GL (Défaut : Smoke Bleu)
effectDistance = 7; // was 7 

gasMask =
        [
                "G_Aviator",
                "mask2"
        ];

exemptVehicles =
        [
                "vehicle1",
                "vehicle2"
        ];

setNoGasStatus =
        {
                "dynamicBlur" ppEffectEnable true;              // Active PPEffect
                "dynamicBlur" ppEffectAdjust [0];               // Restore normal vision
                "dynamicBlur" ppEffectCommit 1;                // The time it takes to return to normal vision - was 10
                resetCamShake;                                  // Remove Camera Shake
                20 fadeSound 1;                                 // Reset sound to normal
        };

setGasStatus =
        {
                "dynamicBlur" ppEffectEnable true;              // Active PPEffect
                "dynamicBlur" ppEffectAdjust [10];              // Blur Intensity (0-400) (I do not recommend going above 25) - was 25
                "dynamicBlur" ppEffectCommit 1;                // How long the blur effect lasts -  was 10
                enableCamShake true;                            // enable camshake
                addCamShake [20, 20, 1];                        // Camera Shake Value [Power, Duration, Frequency]
                //player setFatigue 1;                          // Fatigues the player.
                5 fadeSound 0.1;                                // Reduce sound to 10% in 5 seconds
        };

gasDamage =
        {
                player setDamage (damage player + 0.0);         // Damage per tickrate (Change number 0.0))
                call BIS_fnc_indicateBleeding;
                sleep 2;                                        // Time in "seconds" where the damage will be done, (ex: 0.12 every 2 seconds)
        };

[]spawn
{
        while{true} do
        {
                call setNoGasStatus;
                waituntil
                {
                        _smokeShellThrown = nearestObject [getPosATL player, thrownSmokeShell];
                        _curPlayerInvulnState = player getVariable ["isAdminInvulnerable", false];
                        _smokeShellThrown distance player < effectDistance
                        &&
                        velocity _smokeShellThrown isEqualTo [ 0, 0, 0 ]
                        &&
                        !_curPlayerInvulnState
                };
                if ((goggles player in gasMask) || ((typeOf vehicle player) in exemptVehicles)) then
                {
                        call setNoGasStatus;
                }
                else
                {
                        call setGasStatus;
                        call gasDamage;
                };
        };
};

[]spawn
{
        while{true} do
        {
                call setNoGasStatus;
                waituntil
                {
                        _smokeShellLaunched = nearestObject [getPosATL player, launcherSmokeShell];
                        _curPlayerInvulnState = player getVariable ["isAdminInvulnerable", false];
                        _smokeShellLaunched distance player < effectDistance
                        &&
                        velocity _smokeShellLaunched isEqualTo [ 0, 0, 0 ]
                        &&
                        !_curPlayerInvulnState
                };
                if ((goggles player in gasMask) || ((typeOf vehicle player) in exemptVehicles)) then
                {
                        call setNoGasStatus;
                }
                else
                {
                        call setGasStatus;
                        call gasDamage;
                        //[player,"flashbang"] remoteExec ["life_fnc_say3D",RANY]; dont work
                        //playSound3D "flashbang"; dont work 
                        //player say3D "flashbang"; // dont work - sound effect chaddles edit  
                };
        };
};