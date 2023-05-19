//Modifed by Thomas [T.K.O]
if hasInterface then
{
	//[] ExecVM "VEMFr_client\sqf\initClient.sqf"; // Client-side part of VEMFr
};


if (isServer) then {
	
	[] execVM "Custom\time.sqf";

};

/////////////////////////////R3F/////////////////////////
[] execVM "R3F_LOG\init.sqf"; 
// enigma revive script
[] execVM "Custom\EnigmaRevive\init.sqf";