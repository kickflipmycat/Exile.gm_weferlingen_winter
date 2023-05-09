comment "Private ZEUS Menu V1.8EP - Public Release Version."; 
diag_log "Private Zeus Menu Loading..."; 
comment "Users who can give the menu to other players"; 
usersWhoCanGive = [ 
 "76561198029421937"
]; 
publicVariable "usersWhoCanGive"; 
 
comment "Users who will automatically receive the menu"; 
usersWhoReceive = [ 
 "ID", "Name", 
 "76561198029421937", "chaddles"
]; 
publicVariable 'usersWhoReceive'; 
 
comment "Users who will be auto-kicked with the perm kick option. (Leave empty)"; 
usersWhoAreKicked = []; 
publicVariable 'usersWhoAreKicked'; 
 
pvtRunLocal = false; 
publicVariable 'pvtRunLocal'; 
 
pvtVersion = "1.8EP"; 
publicVariable 'pvtVersion'; 
 
private _uid = getPlayerUID player; 
if(pvtRunLocal) then { 
 if(isNil "usersWhoAreWhitelisted") then { 
  usersWhoAreWhitelisted = [_uid]; 
  publicVariable "usersWhoAreWhitelisted"; 
 } else { 
  usersWhoAreWhitelisted pushBackUnique _uid; 
  publicVariable "usersWhoAreWhitelisted"; 
 }; 
} else { 
 if(isNil "usersWhoAreWhitelisted") then { 
  usersWhoAreWhitelisted = [ 
   _uid 
  ]; 
  { 
   usersWhoAreWhitelisted pushBackUnique _x; 
   usersWhoCanGive pushBackUnique _x; 
  } forEach usersWhoReceive; 
  publicVariable "usersWhoAreWhitelisted"; 
 } else { 
  usersWhoAreWhitelisted pushBackUnique _uid; 
  publicVariable "usersWhoAreWhitelisted"; 
 }; 
}; 
 
MAZ_pvtCarrier = { 
 comment "Menus"; 
  MAZ_fnc_pvtMenu = { 
   disableSerialization; 
   with uiNamespace do { 
    private _gModeEnabled = player getVariable ["isGodded",false]; 
    private _vehGModeEnabled = (vehicle player) getVariable ["isGodded",false]; 
    private _isInvisible = player getVariable ["isInvis",false]; 
    private _isNoStam = player getVariable ["isNoStam",false]; 
    private _isESPOn = player getVariable ['isESPOn',false]; 
    pvtMenu = (findDisplay 46) createDisplay "RscDisplayEmpty"; 
    pvtMenu displayAddEventHandler ["unload", { 
     if(!isNil "MAZ_newRespawnMarker") then { 
      deleteMarkerLocal "MAZ_newRespawnMark"; 
      MAZ_newRespawnMarker = nil; 
      onMapSingleClick ""; 
     }; 
     private _existingRespawns = missionNamespace getVariable 'existingRespawns_MAZ'; 
     { 
      deleteMarkerLocal _x; 
     } forEach _existingRespawns; 
     private _debugCodeBox = uiNamespace getVariable 'pvtMenuDebugEdit'; 
     private _debugText = ctrlText _debugCodeBox; 
     if(_debugText == "Debug Console..." || _debugText == "") then { 
      _debugText = "Debug Console..."; 
      player setVariable ['dbgConsleCode_MAZ',_debugText]; 
     }; 
      
    }]; 
    showChat true; 
    comment "Backgrounds"; 
 
     pvtMenuFrameLeft = pvtMenu ctrlCreate ["RscFrame", 1800]; 
     pvtMenuFrameLeft ctrlSetPosition [0.304062 * safezoneW + safezoneX,0.247 * safezoneH + safezoneY,0.134062 * safezoneW,0.396 * safezoneH]; 
     pvtMenuFrameLeft ctrlSetFade 1; 
     pvtMenuFrameLeft ctrlCommit 0; 
 
     pvtMenuFrameLeftBG = pvtMenu ctrlCreate ["RscPicture", 1804]; 
     pvtMenuFrameLeftBG ctrlSetPosition [0.304062 * safezoneW + safezoneX,0.247 * safezoneH + safezoneY,0.134062 * safezoneW,0.396 * safezoneH]; 
     pvtMenuFrameLeftBG ctrlSetTextColor [0,0,0,0.65]; 
     pvtMenuFrameLeftBG ctrlSetText "#(argb,8,8,3)color(1,1,1,1)"; 
     pvtMenuFrameLeftBG ctrlSetFade 1; 
     pvtMenuFrameLeftBG ctrlCommit 0; 
 
     pvtMenuFrameMidLow = pvtMenu ctrlCreate ["RscFrame", 1801]; 
     pvtMenuFrameMidLow ctrlSetPosition [0.438125 * safezoneW + safezoneX, 0.5 * safezoneH + safezoneY, 0.12375 * safezoneW, 0.143 * safezoneH]; 
     pvtMenuFrameMidLow ctrlSetFade 1; 
     pvtMenuFrameMidLow ctrlCommit 0; 
 
     pvtMenuFrameMidBG = pvtMenu ctrlCreate ["RscPicture", 1805]; 
     pvtMenuFrameMidBG ctrlSetPosition [0.438125 * safezoneW + safezoneX, 0.39 * safezoneH + safezoneY, 0.12375 * safezoneW, 0.253 * safezoneH]; 
     pvtMenuFrameMidBG ctrlSetTextColor [0,0,0,0.65]; 
     pvtMenuFrameMidBG ctrlSetText "#(argb,8,8,3)color(1,1,1,1)"; 
     pvtMenuFrameMidBG ctrlSetFade 1; 
     pvtMenuFrameMidBG ctrlCommit 0; 
 
     pvtMenuFrameMidHigh = pvtMenu ctrlCreate ["RscFrame", 1802]; 
     pvtMenuFrameMidHigh ctrlSetPosition [0.438125 * safezoneW + safezoneX, 0.39 * safezoneH + safezoneY, 0.12375 * safezoneW, 0.11 * safezoneH]; 
     pvtMenuFrameMidHigh ctrlSetFade 1; 
     pvtMenuFrameMidHigh ctrlCommit 0; 
 
     pvtMenuFrameRight = pvtMenu ctrlCreate ["RscFrame", 1803]; 
     pvtMenuFrameRight ctrlSetPosition [0.561875 * safezoneW + safezoneX,0.247 * safezoneH + safezoneY,0.134062 * safezoneW,0.396 * safezoneH]; 
     pvtMenuFrameRight ctrlSetFade 1; 
     pvtMenuFrameRight ctrlCommit 0; 
 
     pvtMenuFrameRightBG = pvtMenu ctrlCreate ["RscPicture", 1807]; 
     pvtMenuFrameRightBG ctrlSetPosition [0.561875 * safezoneW + safezoneX,0.247 * safezoneH + safezoneY,0.134062 * safezoneW,0.396 * safezoneH]; 
     pvtMenuFrameRightBG ctrlSetTextColor [0,0,0,0.65]; 
     pvtMenuFrameRightBG ctrlSetText "#(argb,8,8,3)color(1,1,1,1)"; 
     pvtMenuFrameRightBG ctrlSetFade 1; 
     pvtMenuFrameRightBG ctrlCommit 0; 
 
    comment "Player Menu"; 
 
     pvtMenuPlayerList = pvtMenu ctrlCreate ["RscListBox",1500]; 
     pvtMenuPlayerList ctrlSetPosition [0.567031 * safezoneW + safezoneX,0.258 * safezoneH + safezoneY,0.12375 * safezoneW,0.11 * safezoneH]; 
     pvtMenuPlayerList ctrlSetFade 1; 
     pvtMenuPlayerList ctrlCommit 0; 
 
     pvtMenuPlayerListFrame = pvtMenu ctrlCreate ["RscFrame",1765]; 
     pvtMenuPlayerListFrame ctrlSetPosition [0.567031 * safezoneW + safezoneX,0.258 * safezoneH + safezoneY,0.12375 * safezoneW,0.11 * safezoneH]; 
     pvtMenuPlayerListFrame ctrlSetFade 1; 
     pvtMenuPlayerListFrame ctrlCommit 0; 
 
     pvtMenuTeleportTo = pvtMenu ctrlCreate ["RscButtonMenu",2400]; 
     pvtMenuTeleportTo ctrlSetPosition [0.567031 * safezoneW + safezoneX,0.379 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuTeleportTo ctrlSetStructuredText parseText "<t align='center'>TP 2</t>"; 
     pvtMenuTeleportTo ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_teleportTo; 
     }]; 
     pvtMenuTeleportTo ctrlSetFont "PuristaSemiBold"; 
     pvtMenuTeleportTo ctrlSetToolTip "Teleport to selected player."; 
     pvtMenuTeleportTo ctrlSetFade 1; 
     pvtMenuTeleportTo ctrlCommit 0; 
 
     pvtMenuTeleportToMe = pvtMenu ctrlCreate ["RscButtonMenu",2401]; 
     pvtMenuTeleportToMe ctrlSetPosition [0.634062 * safezoneW + safezoneX,0.379 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuTeleportToMe ctrlSetStructuredText parseText "<t align='center'>TP 2 ME</t>"; 
     pvtMenuTeleportToMe ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_teleportToMe; 
     }]; 
     pvtMenuTeleportToMe ctrlSetFont "PuristaSemiBold"; 
     pvtMenuTeleportToMe ctrlSetToolTip "Teleport selected player to me."; 
     pvtMenuTeleportToMe ctrlSetFade 1; 
     pvtMenuTeleportToMe ctrlCommit 0; 
 
     pvtMenuRemoveGuns = pvtMenu ctrlCreate ["RscButtonMenu",2402]; 
     pvtMenuRemoveGuns ctrlSetPosition [0.567031 * safezoneW + safezoneX,0.412 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuRemoveGuns ctrlSetStructuredText parseText "<t align='center'>No Guns</t>"; 
     pvtMenuRemoveGuns ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_removeGuns; 
     }]; 
     pvtMenuRemoveGuns ctrlSetFont "PuristaSemiBold"; 
     pvtMenuRemoveGuns ctrlSetToolTip "Remove selected player's guns."; 
     pvtMenuRemoveGuns ctrlSetFade 1; 
     pvtMenuRemoveGuns ctrlCommit 0; 
 
     pvtMenuBrickUnit = pvtMenu ctrlCreate ["RscButtonMenu",2403]; 
     pvtMenuBrickUnit ctrlSetPosition [0.634062 * safezoneW + safezoneX,0.412 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuBrickUnit ctrlSetStructuredText parseText "<t align='center'>Brick</t>"; 
     pvtMenuBrickUnit ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_makeBrick; 
     }]; 
     pvtMenuBrickUnit ctrlSetFont "PuristaSemiBold"; 
     pvtMenuBrickUnit ctrlSetToolTip "I TURNED MYSELF INTO A BRICK MORTY! BOOM! BIG REVEAL! IM A BRICK. WHAT DO YOU THINK ABOUT THAT? I TURNED MYSELF INTO A BRICK! W-WHAT ARE YOU JUST STARING AT ME FOR, BRO. I TURNED MYSELF INTO A BRICK MORTY!"; 
     pvtMenuBrickUnit ctrlSetFade 1; 
     pvtMenuBrickUnit ctrlCommit 0; 
 
     pvtMenuHealPlayer = pvtMenu ctrlCreate ["RscButtonMenu",2404]; 
     pvtMenuHealPlayer ctrlSetPosition [0.567031 * safezoneW + safezoneX,0.445 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuHealPlayer ctrlSetStructuredText parseText "<t align='center'>Heal</t>"; 
     pvtMenuHealPlayer ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_healPlayer; 
     }]; 
     pvtMenuHealPlayer ctrlSetFont "PuristaSemiBold"; 
     pvtMenuHealPlayer ctrlSetToolTip "Heal selected player."; 
     pvtMenuHealPlayer ctrlSetFade 1; 
     pvtMenuHealPlayer ctrlCommit 0; 
 
     pvtMenuRevivePlayer = pvtMenu ctrlCreate ["RscButtonMenu",2405]; 
     pvtMenuRevivePlayer ctrlSetPosition [0.634062 * safezoneW + safezoneX,0.445 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuRevivePlayer ctrlSetStructuredText parseText "<t align='center'>Revive</t>"; 
     pvtMenuRevivePlayer ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_revivePlayer; 
     }]; 
     pvtMenuRevivePlayer ctrlSetFont "PuristaSemiBold"; 
     pvtMenuRevivePlayer ctrlSetToolTip "Revive selected player."; 
     pvtMenuRevivePlayer ctrlSetFade 1; 
     pvtMenuRevivePlayer ctrlCommit 0; 
 
     pvtMenuRemoveFuel = pvtMenu ctrlCreate ["RscButtonMenu",2406]; 
     pvtMenuRemoveFuel ctrlSetPosition [0.567031 * safezoneW + safezoneX,0.478 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuRemoveFuel ctrlSetStructuredText parseText "<t align='center'>Bingo</t>"; 
     pvtMenuRemoveFuel ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_removeFuel; 
     }]; 
     pvtMenuRemoveFuel ctrlSetFont "PuristaSemiBold"; 
     pvtMenuRemoveFuel ctrlSetToolTip "Remove selected player's vehicle's fuel."; 
     pvtMenuRemoveFuel ctrlSetFade 1; 
     pvtMenuRemoveFuel ctrlCommit 0; 
 
     pvtMenuMakeBomb = pvtMenu ctrlCreate ["RscButtonMenu",2407]; 
     pvtMenuMakeBomb ctrlSetPosition [0.634062 * safezoneW + safezoneX,0.478 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuMakeBomb ctrlSetStructuredText parseText "<t align='center'>Bomb</t>"; 
     pvtMenuMakeBomb ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_makePlayerBomb; 
     }]; 
     pvtMenuMakeBomb ctrlSetFont "PuristaSemiBold"; 
     pvtMenuMakeBomb ctrlSetToolTip "Turn selected player into a bomb."; 
     pvtMenuMakeBomb ctrlSetFade 1; 
     pvtMenuMakeBomb ctrlCommit 0; 
 
     pvtMenuEjectPlayer = pvtMenu ctrlCreate ["RscButtonMenu",2408]; 
     pvtMenuEjectPlayer ctrlSetPosition [0.567031 * safezoneW + safezoneX,0.511 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuEjectPlayer ctrlSetStructuredText parseText "<t align='center'>Eject</t>"; 
     pvtMenuEjectPlayer ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_ejectPlayer; 
     }]; 
     pvtMenuEjectPlayer ctrlSetFont "PuristaSemiBold"; 
     pvtMenuEjectPlayer ctrlSetToolTip "Eject selected player."; 
     pvtMenuEjectPlayer ctrlSetFade 1; 
     pvtMenuEjectPlayer ctrlCommit 0; 
 
     pvtMenuMutePlayer = pvtMenu ctrlCreate ["RscButtonMenu",2409]; 
     pvtMenuMutePlayer ctrlSetPosition [0.634062 * safezoneW + safezoneX,0.511 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuMutePlayer ctrlSetStructuredText parseText "<t align='center'>Mute</t>"; 
     pvtMenuMutePlayer ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_muteUnmutePlyr; 
     }]; 
     pvtMenuMutePlayer ctrlSetFont "PuristaSemiBold"; 
     pvtMenuMutePlayer ctrlSetToolTip "Globally mute selected player."; 
     pvtMenuMutePlayer ctrlSetFade 1; 
     pvtMenuMutePlayer ctrlCommit 0; 
 
     pvtMenuGivePlayerMenu = pvtMenu ctrlCreate ["RscButtonMenu",2410]; 
     pvtMenuGivePlayerMenu ctrlSetPosition [0.567031 * safezoneW + safezoneX,0.544 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuGivePlayerMenu ctrlSetStructuredText parseText "<t align='center'>Yes Menu</t>"; 
     pvtMenuGivePlayerMenu ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_givePlayerMenu; 
     }]; 
     pvtMenuGivePlayerMenu ctrlSetFont "PuristaSemiBold"; 
     pvtMenuGivePlayerMenu ctrlSetToolTip "Give selected player the menu."; 
     pvtMenuGivePlayerMenu ctrlSetFade 1; 
     pvtMenuGivePlayerMenu ctrlCommit 0; 
 
     pvtMenuTakeAwayMenu = pvtMenu ctrlCreate ["RscButtonMenu",2411]; 
     pvtMenuTakeAwayMenu ctrlSetPosition [0.634062 * safezoneW + safezoneX,0.544 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuTakeAwayMenu ctrlSetStructuredText parseText "<t align='center'>No Menu</t>"; 
     pvtMenuTakeAwayMenu ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_removeMenu; 
     }]; 
     pvtMenuTakeAwayMenu ctrlSetFont "PuristaSemiBold"; 
     pvtMenuTakeAwayMenu ctrlSetToolTip "Take away selected player's access to the menu."; 
     pvtMenuTakeAwayMenu ctrlSetFade 1; 
     pvtMenuTakeAwayMenu ctrlCommit 0; 
 
     pvtMenuMakePlayerAdmin = pvtMenu ctrlCreate ["RscButtonMenu",2412]; 
     pvtMenuMakePlayerAdmin ctrlSetPosition [0.567031 * safezoneW + safezoneX,0.577 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuMakePlayerAdmin ctrlSetStructuredText parseText "<t align='center'>Admin</t>"; 
     pvtMenuMakePlayerAdmin ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_makeAdmin; 
     }]; 
     pvtMenuMakePlayerAdmin ctrlSetFont "PuristaSemiBold"; 
     pvtMenuMakePlayerAdmin ctrlSetToolTip "Make selected player server admin."; 
     pvtMenuMakePlayerAdmin ctrlSetFade 1; 
     pvtMenuMakePlayerAdmin ctrlCommit 0; 
 
     pvtMenuYeetPlayer = pvtMenu ctrlCreate ["RscButtonMenu",2413]; 
     pvtMenuYeetPlayer ctrlSetPosition [0.634062 * safezoneW + safezoneX,0.577 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuYeetPlayer ctrlSetStructuredText parseText "<t align='center'>Yeet</t>"; 
     pvtMenuYeetPlayer ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_yeetNibba; 
     }]; 
     pvtMenuYeetPlayer ctrlSetFont "PuristaSemiBold"; 
     pvtMenuYeetPlayer ctrlSetToolTip "Send selected player into the sky."; 
     pvtMenuYeetPlayer ctrlSetFade 1; 
     pvtMenuYeetPlayer ctrlCommit 0; 
 
     pvtMenuKillPlayer = pvtMenu ctrlCreate ["RscButtonMenu",2414]; 
     pvtMenuKillPlayer ctrlSetPosition [0.567031 * safezoneW + safezoneX,0.61 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuKillPlayer ctrlSetStructuredText parseText "<t align='center'>Kill</t>"; 
     pvtMenuKillPlayer ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_killNibba; 
     }]; 
     pvtMenuKillPlayer ctrlSetFont "PuristaSemiBold"; 
     pvtMenuKillPlayer ctrlSetTextColor [0.8,0,0,0.8]; 
     pvtMenuKillPlayer ctrlSetToolTip "Kill selected player."; 
     pvtMenuKillPlayer ctrlSetFade 1; 
     pvtMenuKillPlayer ctrlCommit 0; 
 
     pvtMenuKickPlayer = pvtMenu ctrlCreate ["RscButtonMenu",2415]; 
     pvtMenuKickPlayer ctrlSetPosition [0.634062 * safezoneW + safezoneX,0.61 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuKickPlayer ctrlSetStructuredText parseText "<t align='center'>Kick</t>"; 
     pvtMenuKickPlayer ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_kickNibba; 
     }]; 
     pvtMenuKickPlayer ctrlSetFont "PuristaSemiBold"; 
     pvtMenuKickPlayer ctrlSetToolTip "Temporarily or permanently kick selected player."; 
     pvtMenuKickPlayer ctrlSetTextColor [0.8,0,0,0.8]; 
     pvtMenuKickPlayer ctrlSetFade 1; 
     pvtMenuKickPlayer ctrlCommit 0; 
 
    comment "Utility"; 
      
     pvtMenuOpenArsenal = pvtMenu ctrlCreate ["RscButtonMenu",2416]; 
     pvtMenuOpenArsenal ctrlSetPosition [0.309219 * safezoneW + safezoneX,0.269 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuOpenArsenal ctrlSetStructuredText parseText "<t align='center'>Arsenal</t>"; 
     pvtMenuOpenArsenal ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_openArsenal; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuOpenArsenal ctrlSetFont "PuristaSemiBold"; 
     pvtMenuOpenArsenal ctrlSetFade 1; 
     pvtMenuOpenArsenal ctrlCommit 0; 
 
     pvtMenuClearDeadBodies = pvtMenu ctrlCreate ["RscButtonMenu",2417]; 
     pvtMenuClearDeadBodies ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.269 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuClearDeadBodies ctrlSetStructuredText parseText "<t align='center'>Clear Map</t>"; 
     pvtMenuClearDeadBodies ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_clearMap; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuClearDeadBodies ctrlSetFont "PuristaSemiBold"; 
     pvtMenuClearDeadBodies ctrlSetFade 1; 
     pvtMenuClearDeadBodies ctrlCommit 0; 
 
     pvtMenuTeleport = pvtMenu ctrlCreate ["RscButtonMenu",2418]; 
     pvtMenuTeleport ctrlSetPosition [0.309219 * safezoneW + safezoneX,0.302 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuTeleport ctrlSetStructuredText parseText "<t align='center'>Teleport</t>"; 
     pvtMenuTeleport ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_teleportOnMap; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuTeleport ctrlSetFont "PuristaSemiBold"; 
     pvtMenuTeleport ctrlSetFade 1; 
     pvtMenuTeleport ctrlCommit 0; 
 
     pvtMenuHeal = pvtMenu ctrlCreate ["RscButtonMenu",2419]; 
     pvtMenuHeal ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.302 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuHeal ctrlSetStructuredText parseText "<t align='center'>Heal Self</t>"; 
     pvtMenuHeal ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_healSelf; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuHeal ctrlSetFont "PuristaSemiBold"; 
     pvtMenuHeal ctrlSetFade 1; 
     pvtMenuHeal ctrlCommit 0; 
 
     pvtMenuChangeSide = pvtMenu ctrlCreate ["RscButtonMenu",2420]; 
     pvtMenuChangeSide ctrlSetPosition [0.309219 * safezoneW + safezoneX,0.335 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuChangeSide ctrlSetStructuredText parseText "<t align='center'>Change</t>"; 
     pvtMenuChangeSide ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_changeSide; 
     }]; 
     pvtMenuChangeSide ctrlSetFont "PuristaSemiBold"; 
     pvtMenuChangeSide ctrlSetTooltip "Change player side."; 
     pvtMenuChangeSide ctrlSetFade 1; 
     pvtMenuChangeSide ctrlCommit 0; 
 
     pvtMenuDeleteTarget = pvtMenu ctrlCreate ["RscButtonMenu",2421]; 
     pvtMenuDeleteTarget ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.335 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuDeleteTarget ctrlSetStructuredText parseText "<t align='center'>Delete</t>"; 
     pvtMenuDeleteTarget ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_deleteTarget; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuDeleteTarget ctrlSetFont "PuristaSemiBold"; 
     pvtMenuDeleteTarget ctrlSetFade 1; 
     pvtMenuDeleteTarget ctrlCommit 0; 
 
     pvtMenuStaminaToggle = pvtMenu ctrlCreate ["RscButtonMenu",2422]; 
     pvtMenuStaminaToggle ctrlSetPosition [0.309219 * safezoneW + safezoneX,0.368 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuStaminaToggle ctrlSetStructuredText parseText "<t align='center'>Stamina</t>"; 
     pvtMenuStaminaToggle ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_toggleStamina; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuStaminaToggle ctrlSetFont "PuristaSemiBold"; 
     pvtMenuStaminaToggle ctrlSetTooltip "Disable stamina."; 
     if(_isNoStam) then { 
      pvtMenuStaminaToggle ctrlSetTextColor [0,1,0,0.7]; 
     } else { 
      pvtMenuStaminaToggle ctrlSetTextColor [1,1,1,1]; 
     }; 
     pvtMenuStaminaToggle ctrlSetFade 1; 
     pvtMenuStaminaToggle ctrlCommit 0; 
 
     pvtMenuKillTarget = pvtMenu ctrlCreate ["RscButtonMenu",2423]; 
     pvtMenuKillTarget ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.368 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuKillTarget ctrlSetStructuredText parseText "<t align='center'>Kill</t>"; 
     pvtMenuKillTarget ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_killTarget; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuKillTarget ctrlSetFont "PuristaSemiBold"; 
     pvtMenuKillTarget ctrlSetFade 1; 
     pvtMenuKillTarget ctrlCommit 0; 
 
     pvtMenuGodMode = pvtMenu ctrlCreate ["RscButtonMenu",2424]; 
     pvtMenuGodMode ctrlSetPosition [0.309219 * safezoneW + safezoneX,0.401 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuGodMode ctrlSetStructuredText parseText "<t align='center'>GM</t>"; 
     pvtMenuGodMode ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_godMode; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuGodMode ctrlSetFont "PuristaSemiBold"; 
     if(_gModeEnabled) then { 
      pvtMenuGodMode ctrlSetTextColor [0,1,0,0.7]; 
     } else { 
      pvtMenuGodMode ctrlSetTextColor [1,1,1,1]; 
     }; 
     pvtMenuGodMode ctrlSetTooltip "God mode."; 
     pvtMenuGodMode ctrlSetFade 1; 
     pvtMenuGodMode ctrlCommit 0; 
 
     pvtMenuVehicleGodMode = pvtMenu ctrlCreate ["RscButtonMenu",2425]; 
     pvtMenuVehicleGodMode ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.401 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuVehicleGodMode ctrlSetStructuredText parseText "<t align='center'>VGM</t>"; 
     pvtMenuVehicleGodMode ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_vehicleGodMode; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuVehicleGodMode ctrlSetFont "PuristaSemiBold"; 
     if((_vehGModeEnabled && (vehicle player != player)) || (!(isDamageAllowed vehicle player) && (vehicle player != player))) then { 
      pvtMenuVehicleGodMode ctrlSetTextColor [0,1,0,0.7]; 
     } else { 
      pvtMenuVehicleGodMode ctrlSetTextColor [1,1,1,1]; 
     }; 
     pvtMenuVehicleGodMode ctrlSetTooltip "Vehicle god mode."; 
     pvtMenuVehicleGodMode ctrlSetFade 1; 
     pvtMenuVehicleGodMode ctrlCommit 0; 
 
     pvtMenuInvisibleToggle = pvtMenu ctrlCreate ["RscButtonMenu",2426]; 
     pvtMenuInvisibleToggle ctrlSetPosition [0.309219 * safezoneW + safezoneX,0.434 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuInvisibleToggle ctrlSetStructuredText parseText "<t align='center'>Invisible</t>"; 
     pvtMenuInvisibleToggle ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_invisible; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuInvisibleToggle ctrlSetFont "PuristaSemiBold"; 
     if(_isInvisible) then { 
      pvtMenuInvisibleToggle ctrlSetTextColor [0,1,0,0.7]; 
     } else { 
      pvtMenuInvisibleToggle ctrlSetTextColor [1,1,1,1]; 
     }; 
     pvtMenuInvisibleToggle ctrlSetFade 1; 
     pvtMenuInvisibleToggle ctrlCommit 0; 
 
     pvtMenuRepair = pvtMenu ctrlCreate ["RscButtonMenu",2427]; 
     pvtMenuRepair ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.434 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuRepair ctrlSetStructuredText parseText "<t align='center'>Repair</t>"; 
     pvtMenuRepair ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_repairVehicle; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuRepair ctrlSetFont "PuristaSemiBold"; 
     pvtMenuRepair ctrlSetFade 1; 
     pvtMenuRepair ctrlCommit 0; 
 
     pvtMenuMakeArsenal = pvtMenu ctrlCreate ["RscButtonMenu",2428]; 
     pvtMenuMakeArsenal ctrlSetPosition [0.309219 * safezoneW + safezoneX,0.467 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuMakeArsenal ctrlSetStructuredText parseText "<t align='center'>T Arsenal</t>"; 
     pvtMenuMakeArsenal ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_targetArsenal; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuMakeArsenal ctrlSetFont "PuristaSemiBold"; 
     pvtMenuMakeArsenal ctrlSetTooltip "Make whatever you're looking at an arsenal."; 
     pvtMenuMakeArsenal ctrlSetFade 1; 
     pvtMenuMakeArsenal ctrlCommit 0; 
 
     pvtMenuESPToggle = pvtMenu ctrlCreate ["RscButtonMenu",2429]; 
     pvtMenuESPToggle ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.467 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuESPToggle ctrlSetStructuredText parseText "<t align='center'>ESP</t>"; 
     if(_isESPOn) then { 
      pvtMenuESPToggle ctrlSetTextColor [0,1,0,0.7]; 
     } else { 
      pvtMenuESPToggle ctrlSetTextColor [1,1,1,1]; 
     }; 
     pvtMenuESPToggle ctrlSetToolTip "This button will toggle ESP."; 
     pvtMenuESPToggle ctrlAddEventHandler ["ButtonClick",{ 
      private _isESPOn = player getVariable ['isESPOn',false]; 
      if(_isESPOn) then { 
       [] spawn MAZ_fnc_removeESP; 
      } else { 
       [] spawn MAZ_fnc_ESP; 
      }; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuESPToggle ctrlSetFont "PuristaSemiBold"; 
     pvtMenuESPToggle ctrlSetFade 1; 
     pvtMenuESPToggle ctrlCommit 0; 
 
     pvtMenuEditVehicle = pvtMenu ctrlCreate ["RscButtonMenu",2430]; 
     pvtMenuEditVehicle ctrlSetPosition [0.309219 * safezoneW + safezoneX,0.5 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuEditVehicle ctrlSetStructuredText parseText "<t align='center'>Edit Veh</t>"; 
     pvtMenuEditVehicle ctrlAddEventHandler ["ButtonClick",{ 
      if(vehicle player != player) then { 
       [vehicle player] spawn MAZ_fnc_changeAttributesMenu; 
       with uiNamespace do { 
        pvtMenu closeDisplay 0; 
       }; 
      } else { 
       systemChat '[ZEUS] - You cannot edit yourself!'; 
       playSound 'addItemFailed'; 
      }; 
     }]; 
     pvtMenuEditVehicle ctrlSetFont "PuristaSemiBold"; 
     pvtMenuEditVehicle ctrlSetToolTip "Edit your vehicle's appearance."; 
     pvtMenuEditVehicle ctrlSetFade 1; 
     pvtMenuEditVehicle ctrlCommit 0; 
 
     pvtMenuCreateRespawn = pvtMenu ctrlCreate ["RscButtonMenu",2431]; 
     pvtMenuCreateRespawn ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.5 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuCreateRespawn ctrlSetStructuredText parseText "<t align='center'>Respawn</t>"; 
     pvtMenuCreateRespawn ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_makeRespawn; 
     }]; 
     pvtMenuCreateRespawn ctrlSetFont "PuristaSemiBold"; 
     pvtMenuCreateRespawn ctrlSetToolTip "Create new respawns."; 
     pvtMenuCreateRespawn ctrlSetFade 1; 
     pvtMenuCreateRespawn ctrlCommit 0; 
 
     pvtMenuDeleteMarkers = pvtMenu ctrlCreate ["RscButtonMenu",2432]; 
     pvtMenuDeleteMarkers ctrlSetPosition [0.309219 * safezoneW + safezoneX,0.533 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuDeleteMarkers ctrlSetStructuredText parseText "<t align='center'>No Mrkrs</t>"; 
     pvtMenuDeleteMarkers ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_noMarkers; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuDeleteMarkers ctrlSetFont "PuristaSemiBold"; 
     pvtMenuDeleteMarkers ctrlSetFade 1; 
     pvtMenuDeleteMarkers ctrlCommit 0; 
 
     pvtMenuCopyLoadout = pvtMenu ctrlCreate ["RscButtonMenu",2433]; 
     pvtMenuCopyLoadout ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.533 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuCopyLoadout ctrlSetStructuredText parseText "<t align='center'>Take Kit</t>"; 
     pvtMenuCopyLoadout ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_stealKit; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuCopyLoadout ctrlSetFont "PuristaSemiBold"; 
     pvtMenuCopyLoadout ctrlSetFade 1; 
     pvtMenuCopyLoadout ctrlCommit 0; 
 
     pvtMenuRemoveMines = pvtMenu ctrlCreate ["RscButtonMenu",2434]; 
     pvtMenuRemoveMines ctrlSetPosition [0.309219 * safezoneW + safezoneX,0.566 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuRemoveMines ctrlSetStructuredText parseText "<t align='center'>Mines</t>"; 
     pvtMenuRemoveMines ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_removeMines; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuRemoveMines ctrlSetFont "PuristaSemiBold"; 
     pvtMenuRemoveMines ctrlSetToolTip "Remove all APERS."; 
     pvtMenuRemoveMines ctrlSetFade 1; 
     pvtMenuRemoveMines ctrlCommit 0; 
 
     pvtMenuFlyToggle = pvtMenu ctrlCreate ["RscButtonMenu",2435]; 
     pvtMenuFlyToggle ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.566 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuFlyToggle ctrlSetStructuredText parseText "<t align='center'>Fly</t>"; 
     pvtMenuFlyToggle ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_toggleFly; 
     }]; 
     pvtMenuFlyToggle ctrlSetFont "PuristaSemiBold"; 
     pvtMenuFlyToggle ctrlSetFade 1; 
     pvtMenuFlyToggle ctrlCommit 0; 
 
     pvtMenuGiveZeus = pvtMenu ctrlCreate ["RscButtonMenu",2436]; 
     pvtMenuGiveZeus ctrlSetPosition [0.309219 * safezoneW + safezoneX,0.599 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuGiveZeus ctrlSetStructuredText parseText "<t align='center'>Zeus</t>"; 
     pvtMenuGiveZeus ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_giveZeus; 
      with uiNamespace do {pvtMenu closeDisplay 0;}; 
     }]; 
     pvtMenuGiveZeus ctrlSetFont "PuristaSemiBold"; 
     pvtMenuGiveZeus ctrlSetFade 1; 
     pvtMenuGiveZeus ctrlCommit 0; 
 
     pvtMenuKillServer = pvtMenu ctrlCreate ["RscButtonMenu",2437]; 
     pvtMenuKillServer ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.599 * safezoneH + safezoneY,0.0567187 * safezoneW,0.022 * safezoneH]; 
     pvtMenuKillServer ctrlSetStructuredText parseText "<t align='center'>Kill Srvr</t>"; 
     pvtMenuKillServer ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_killServerConfirm; 
     }]; 
     pvtMenuKillServer ctrlSetFont "PuristaSemiBold"; 
     pvtMenuKillServer ctrlSetFade 1; 
     pvtMenuKillServer ctrlCommit 0; 
 
    comment "Middle"; 
 
     pvtMenuSetTime = pvtMenu ctrlCreate ["RscButtonMenu",2438]; 
     pvtMenuSetTime ctrlSetPosition [0.443281 * safezoneW + safezoneX, 0.544 * safezoneH + safezoneY, 0.108281 * safezoneW, 0.022 * safezoneH]; 
     pvtMenuSetTime ctrlSetStructuredText parseText "<t align='center'>Set Time</t>"; 
     pvtMenuSetTime ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_setTime; 
     }]; 
     pvtMenuSetTime ctrlSetFont "PuristaSemiBold"; 
     pvtMenuSetTime ctrlSetFade 1; 
     pvtMenuSetTime ctrlCommit 0; 
 
     pvtMenuSetWeather = pvtMenu ctrlCreate ["RscButtonMenu",2439]; 
     pvtMenuSetWeather ctrlSetPosition [0.469062 * safezoneW + safezoneX, 0.61 * safezoneH + safezoneY, 0.061875 * safezoneW, 0.022 * safezoneH]; 
     pvtMenuSetWeather ctrlSetStructuredText parseText "<t align='center'>Weather</t>"; 
     pvtMenuSetWeather ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_setWeather; 
     }]; 
     pvtMenuSetWeather ctrlSetFont "PuristaSemiBold"; 
     pvtMenuSetWeather ctrlSetFade 1; 
     pvtMenuSetWeather ctrlCommit 0; 
 
     pvtMenuHourCombo = pvtMenu ctrlCreate ["RscCombo",2100]; 
     pvtMenuHourCombo ctrlSetPosition [0.443281 * safezoneW + safezoneX, 0.511 * safezoneH + safezoneY, 0.0515625 * safezoneW, 0.022 * safezoneH]; 
     pvtMenuHourCombo ctrlSetFade 1; 
     pvtMenuHourCombo ctrlCommit 0; 
 
     private _index = pvtMenuHourCombo lbAdd "00"; 
     pvtMenuHourCombo lbSetData [_index, "0"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_night_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "01"; 
     pvtMenuHourCombo lbSetData [_index, "1"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_night_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "02"; 
     pvtMenuHourCombo lbSetData [_index, "2"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_night_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "03"; 
     pvtMenuHourCombo lbSetData [_index, "3"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_night_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "04"; 
     pvtMenuHourCombo lbSetData [_index, "4"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_night_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "05"; 
     pvtMenuHourCombo lbSetData [_index, "5"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "06"; 
     pvtMenuHourCombo lbSetData [_index, "6"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "07"; 
     pvtMenuHourCombo lbSetData [_index, "7"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "08"; 
     pvtMenuHourCombo lbSetData [_index, "8"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "09"; 
     pvtMenuHourCombo lbSetData [_index, "9"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "10"; 
     pvtMenuHourCombo lbSetData [_index, "10"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "11"; 
     pvtMenuHourCombo lbSetData [_index, "11"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "12"; 
     pvtMenuHourCombo lbSetData [_index, "12"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "13"; 
     pvtMenuHourCombo lbSetData [_index, "13"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "14"; 
     pvtMenuHourCombo lbSetData [_index, "14"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "15"; 
     pvtMenuHourCombo lbSetData [_index, "15"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "16"; 
     pvtMenuHourCombo lbSetData [_index, "16"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "17"; 
     pvtMenuHourCombo lbSetData [_index, "17"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "18"; 
     pvtMenuHourCombo lbSetData [_index, "18"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "19"; 
     pvtMenuHourCombo lbSetData [_index, "19"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "20"; 
     pvtMenuHourCombo lbSetData [_index, "20"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_night_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "21"; 
     pvtMenuHourCombo lbSetData [_index, "21"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_night_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "22"; 
     pvtMenuHourCombo lbSetData [_index, "22"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_night_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "23"; 
     pvtMenuHourCombo lbSetData [_index, "23"]; 
     pvtMenuHourCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_night_0_ca.paa"]; 
     _index = pvtMenuHourCombo lbAdd "  "; 
 
     pvtMenuMinuteCombo = pvtMenu ctrlCreate ["RscCombo",2101]; 
     pvtMenuMinuteCombo ctrlSetPosition [0.505156 * safezoneW + safezoneX, 0.511 * safezoneH + safezoneY, 0.0515625 * safezoneW, 0.022 * safezoneH]; 
     pvtMenuMinuteCombo ctrlSetFade 1; 
     pvtMenuMinuteCombo ctrlCommit 0; 
 
     _index = pvtMenuMinuteCombo lbAdd "00"; 
     pvtMenuMinuteCombo lbSetData [_index,"0"]; 
     _index = pvtMenuMinuteCombo lbAdd "10"; 
     pvtMenuMinuteCombo lbSetData [_index,"10"]; 
     _index = pvtMenuMinuteCombo lbAdd "20"; 
     pvtMenuMinuteCombo lbSetData [_index,"20"]; 
     _index = pvtMenuMinuteCombo lbAdd "30"; 
     pvtMenuMinuteCombo lbSetData [_index,"30"]; 
     _index = pvtMenuMinuteCombo lbAdd "40"; 
     pvtMenuMinuteCombo lbSetData [_index,"40"]; 
     _index = pvtMenuMinuteCombo lbAdd "50"; 
     pvtMenuMinuteCombo lbSetData [_index,"50"]; 
 
     pvtMenuWeatherCombo = pvtMenu ctrlCreate ["RscCombo",2102]; 
     pvtMenuWeatherCombo ctrlSetPosition [0.469062 * safezoneW + safezoneX,0.577 * safezoneH + safezoneY,0.061875 * safezoneW,0.022 * safezoneH]; 
     pvtMenuWeatherCombo ctrlSetFade 1; 
     pvtMenuWeatherCombo ctrlCommit 0; 
 
     _index = pvtMenuWeatherCombo lbAdd "Clear"; 
     pvtMenuWeatherCombo lbSetData [_index,"0"]; 
     pvtMenuWeatherCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
     _index = pvtMenuWeatherCombo lbAdd "Cloudy"; 
     pvtMenuWeatherCombo lbSetData [_index,"1"]; 
     pvtMenuWeatherCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_2_ca.paa"]; 
     _index = pvtMenuWeatherCombo lbAdd "Overcast"; 
     pvtMenuWeatherCombo lbSetData [_index,"2"]; 
     pvtMenuWeatherCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_3_ca.paa"]; 
     _index = pvtMenuWeatherCombo lbAdd "Rainy"; 
     pvtMenuWeatherCombo lbSetData [_index,"3"]; 
     pvtMenuWeatherCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_rain_ca.paa"]; 
     _index = pvtMenuWeatherCombo lbAdd "Thunder Storm"; 
     pvtMenuWeatherCombo lbSetData [_index,"4"]; 
     pvtMenuWeatherCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_4_ca.paa"]; 
     _index = pvtMenuWeatherCombo lbAdd "Add Fog"; 
     pvtMenuWeatherCombo lbSetData [_index,"5"]; 
     pvtMenuWeatherCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_2_ca.paa"]; 
     _index = pvtMenuWeatherCombo lbAdd "Remove Fog"; 
     pvtMenuWeatherCombo lbSetData [_index,"6"]; 
     pvtMenuWeatherCombo lbSetPictureRight [_index,"a3\missions_f_oldman\data\img\weathermanager\weather_day_0_ca.paa"]; 
 
     pvtMenuLandVehiclesButton = pvtMenu ctrlCreate ["RscButtonMenu",2440]; 
     pvtMenuLandVehiclesButton ctrlSetPosition [0.443281 * safezoneW + safezoneX, 0.401 * safezoneH + safezoneY, 0.113437 * safezoneW, 0.022 * safezoneH]; 
     pvtMenuLandVehiclesButton ctrlSetStructuredText parseText "<t align='center'>Land Vehicles</t>"; 
     pvtMenuLandVehiclesButton ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn { 
       { 
        _x ctrlSetFade 1; 
        _x ctrlCommit 0.25; 
       } forEach allControls (uiNameSpace getVariable ['pvtMenu',displayNull]); 
       sleep 0.25; 
       [] spawn MAZ_fnc_vehicleSpawner; 
       uiNamespace setVariable ['vehicleSpawnerMode_MAZ',0]; 
       _list = uiNameSpace getVariable ['pvtMenuSpawnerListbox',displayNull]; 
       waitUntil {!isNil '_list'}; 
       [] spawn MAZ_fnc_pvtLandList; 
      }; 
     }]; 
     pvtMenuLandVehiclesButton ctrlSetFont "PuristaSemiBold"; 
     pvtMenuLandVehiclesButton ctrlSetFade 1; 
     pvtMenuLandVehiclesButton ctrlCommit 0; 
 
     pvtMenuAirVehiclesButton = pvtMenu ctrlCreate ["RscButtonMenu",2441]; 
     pvtMenuAirVehiclesButton ctrlSetPosition [0.443281 * safezoneW + safezoneX, 0.434 * safezoneH + safezoneY, 0.113437 * safezoneW, 0.022 * safezoneH]; 
     pvtMenuAirVehiclesButton ctrlSetStructuredText parseText "<t align='center'>Air Vehicles</t>"; 
     pvtMenuAirVehiclesButton ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn { 
       { 
        _x ctrlSetFade 1; 
        _x ctrlCommit 0.25; 
       } forEach allControls (uiNameSpace getVariable ['pvtMenu',displayNull]); 
       sleep 0.25; 
       [] spawn MAZ_fnc_vehicleSpawner; 
       uiNamespace setVariable ['vehicleSpawnerMode_MAZ',1]; 
       _list = uiNameSpace getVariable ['pvtMenuSpawnerListbox',displayNull]; 
       waitUntil {!isNil '_list'}; 
       [] spawn MAZ_fnc_airList; 
      }; 
     }]; 
     pvtMenuAirVehiclesButton ctrlSetFont "PuristaSemiBold"; 
     pvtMenuAirVehiclesButton ctrlSetFade 1; 
     pvtMenuAirVehiclesButton ctrlCommit 0; 
 
     pvtMenuSeaVehiclesButton = pvtMenu ctrlCreate ["RscButtonMenu",2442]; 
     pvtMenuSeaVehiclesButton ctrlSetPosition [0.443281 * safezoneW + safezoneX, 0.467 * safezoneH + safezoneY, 0.113437 * safezoneW, 0.022 * safezoneH]; 
     pvtMenuSeaVehiclesButton ctrlSetStructuredText parseText "<t align='center'>Sea Vehicles</t>"; 
     pvtMenuSeaVehiclesButton ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn { 
       { 
        _x ctrlSetFade 1; 
        _x ctrlCommit 0.25; 
       } forEach allControls (uiNameSpace getVariable ['pvtMenu',displayNull]); 
       sleep 0.25; 
       [] spawn MAZ_fnc_vehicleSpawner; 
       uiNamespace setVariable ['vehicleSpawnerMode_MAZ',2]; 
       _list = uiNameSpace getVariable ['pvtMenuSpawnerListbox',displayNull]; 
       waitUntil {!isNil '_list'}; 
       [] spawn MAZ_fnc_seaList; 
      }; 
     }]; 
     pvtMenuSeaVehiclesButton ctrlSetFont "PuristaSemiBold"; 
     pvtMenuSeaVehiclesButton ctrlSetFade 1; 
     pvtMenuSeaVehiclesButton ctrlCommit 0; 
 
    comment "Debug Console"; 
 
     pvtMenuDebugFrame = pvtMenu ctrlCreate ["RscFrame",1820]; 
     pvtMenuDebugFrame ctrlSetPosition [0.371096 * safezoneW + safezoneX,0.654 * safezoneH + safezoneY,0.257813 * safezoneW,0.253 * safezoneH]; 
     pvtMenuDebugFrame ctrlSetFade 1; 
     pvtMenuDebugFrame ctrlCommit 0; 
     pvtMenuDebugFrameBG = pvtMenu ctrlCreate ["RscPicture", 1821]; 
     pvtMenuDebugFrameBG ctrlSetPosition [0.371096 * safezoneW + safezoneX,0.654 * safezoneH + safezoneY,0.257813 * safezoneW,0.253 * safezoneH]; 
     pvtMenuDebugFrameBG ctrlSetTextColor [0,0,0,0.65]; 
     pvtMenuDebugFrameBG ctrlSetText "#(argb,8,8,3)color(1,1,1,1)"; 
     pvtMenuDebugFrameBG ctrlSetFade 1; 
     pvtMenuDebugFrameBG ctrlCommit 0; 
 
     pvtMenuDebugEdit = pvtMenu ctrlCreate ["RscEditMulti",1400]; 
     pvtMenuDebugEdit ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.665 * safezoneH + safezoneY,0.2475 * safezoneW,0.165 * safezoneH]; 
     private _previousDebugCode = player getVariable ['dbgConsleCode_MAZ',"Debug Console..."]; 
     pvtMenuDebugEdit ctrlSetText format ["%1",_previousDebugCode]; 
     pvtMenuDebugEdit ctrlSetFont "PuristaMedium"; 
     pvtMenuDebugEdit ctrlAddEventHandler ['setFocus',{ 
      params ["_control"]; 
      if(ctrlText _control == "Debug Console...") then { 
       _control ctrlSetText ""; 
      }; 
     }]; 
     pvtMenuDebugEdit ctrlAddEventHandler ['killFocus',{ 
      params ["_control"]; 
      if(ctrlText _control == "") then { 
       _control ctrlSetText "Debug Console..."; 
      }; 
     }]; 
     pvtMenuDebugEdit ctrlSetFade 1; 
     pvtMenuDebugEdit ctrlCommit 0; 
 
     pvtMenuDebugServerExec = pvtMenu ctrlCreate ["RscButtonMenu",2550]; 
     pvtMenuDebugServerExec ctrlSetPosition [0.381406 * safezoneW + safezoneX,0.841 * safezoneH + safezoneY,0.0515625 * safezoneW,0.022 * safezoneH]; 
     pvtMenuDebugServerExec ctrlSetStructuredText parseText "<t align='center'>Server</t>"; 
     pvtMenuDebugServerExec ctrlSetBackgroundColor [0,0.1,0,0.8]; 
     pvtMenuDebugServerExec ctrlAddEventHandler ["ButtonClick",{ 
      _debugCodeBox = uiNamespace getVariable 'pvtMenuDebugEdit'; 
      _debugText = ctrlText _debugCodeBox; 
      player setVariable ['dbgConsleCode_MAZ',_debugText]; 
      if(_debugText == "Debug Console..." || _debugText == "") exitWith {playsound "addItemFailed";systemChat "[ZEUS] - Error: No code supplied.";}; 
      _code = compile (ctrlText (uiNamespace getVariable 'pvtMenuDebugEdit')); 
      playSound 'addItemOk'; 
      _returnInfo = { 
       params ["_code"]; 
       _return = ([nil] apply {[] call _code} param [0, text ""]); 
 
       _changeReturnField = { 
        _return = _this; 
        with uiNamespace do { 
         _returnStr = str _return; 
         disableSerialization; 
         _outputCtrlServerExecColor = [0,0.1,0,0.8]; 
         (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlSetText _returnStr; 
         (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlSetBackgroundColor _outputCtrlServerExecColor; 
         (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlCommit 0; 
        }; 
       }; 
 
       [[_return,_changeReturnField],{ 
        params ["_return","_fnc"]; 
        _return spawn _fnc; 
       }] remoteExec ['spawn',remoteExecutedOwner]; 
      }; 
      [[_code,_returnInfo], { 
       params ["_code","_returnInfo"]; 
       [_code] spawn _returnInfo; 
      }] remoteExec ['spawn',2]; 
     }]; 
     pvtMenuDebugServerExec ctrlSetFont "PuristaSemiBold"; 
     pvtMenuDebugServerExec ctrlSetFade 1; 
     pvtMenuDebugServerExec ctrlCommit 0; 
 
     pvtMenuDebugGlobalExec = pvtMenu ctrlCreate ["RscButtonMenu",2551]; 
     pvtMenuDebugGlobalExec ctrlSetPosition [0.443281 * safezoneW + safezoneX,0.841 * safezoneH + safezoneY,0.0515625 * safezoneW,0.022 * safezoneH]; 
     pvtMenuDebugGlobalExec ctrlSetStructuredText parseText "<t align='center'>Global</t>"; 
     pvtMenuDebugGlobalExec ctrlSetBackgroundColor [0.1,0,0,0.8]; 
     pvtMenuDebugGlobalExec ctrlAddEventHandler ["ButtonClick",{ 
      _debugCodeBox = uiNamespace getVariable 'pvtMenuDebugEdit'; 
      _debugText = ctrlText _debugCodeBox; 
      if(_debugText == "Debug Console..." || _debugText == "") exitWith {playsound "addItemFailed";systemChat "[ZEUS] - Error: No code supplied.";}; 
      player setVariable ['dbgConsleCode_MAZ',_debugText]; 
      _code = compile (ctrlText (uiNamespace getVariable 'pvtMenuDebugEdit')); 
      playSound 'addItemOk'; 
      _returnInfo = { 
       params ["_code"]; 
       _return = ([nil] apply {[] call _code} param [0, text ""]); 
 
       _changeReturnField = { 
        _return = _this; 
        with uiNamespace do { 
         _returnStr = str _return; 
         disableSerialization; 
         _outputCtrlServerExecColor = [0,0.1,0,0.8]; 
         (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlSetText _returnStr; 
         (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlSetBackgroundColor _outputCtrlServerExecColor; 
         (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlCommit 0; 
        }; 
       }; 
 
       [[_return,_changeReturnField],{ 
        params ["_return","_fnc"]; 
        _return spawn _fnc; 
       }] remoteExec ['spawn',remoteExecutedOwner]; 
      }; 
      [[_code,_returnInfo], { 
       params ["_code","_returnInfo"]; 
       [_code] spawn _returnInfo; 
      }] remoteExec ['spawn',0]; 
     }]; 
     pvtMenuDebugGlobalExec ctrlSetFont "PuristaSemiBold"; 
     pvtMenuDebugGlobalExec ctrlSetFade 1; 
     pvtMenuDebugGlobalExec ctrlCommit 0; 
 
     pvtMenuDebugLocalExec = pvtMenu ctrlCreate ["RscButtonMenu",2552]; 
     pvtMenuDebugLocalExec ctrlSetPosition [0.505156 * safezoneW + safezoneX,0.841 * safezoneH + safezoneY,0.0515625 * safezoneW,0.022 * safezoneH]; 
     pvtMenuDebugLocalExec ctrlSetStructuredText parseText "<t align='center'>Local</t>"; 
     pvtMenuDebugLocalExec ctrlAddEventHandler ["ButtonClick",{ 
      _debugCodeBox = uiNamespace getVariable 'pvtMenuDebugEdit'; 
      _debugText = ctrlText _debugCodeBox; 
      if(_debugText == "Debug Console..." || _debugText == "") exitWith {playsound "addItemFailed";systemChat "[ZEUS] - Error: No code supplied.";}; 
      player setVariable ['dbgConsleCode_MAZ',_debugText]; 
      _codeText = "this = player;" + (ctrlText (uiNamespace getVariable 'pvtMenuDebugEdit')); 
      _code = compile _codeText; 
      _return = ([nil] apply {[] call _code} param [0, text ""]); 
      with uiNamespace do { 
       _returnStr = str _return; 
       disableSerialization; 
       _outputCtrlLocalExecColor = [0,0,0,0.8]; 
       (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlSetText _returnStr; 
       (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlSetBackgroundColor _outputCtrlLocalExecColor; 
       (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlCommit 0; 
      }; 
      playSound 'addItemOk'; 
     }]; 
     pvtMenuDebugLocalExec ctrlSetToolTip "'this' refers to the local player."; 
     pvtMenuDebugLocalExec ctrlSetFont "PuristaSemiBold"; 
     pvtMenuDebugLocalExec ctrlSetFade 1; 
     pvtMenuDebugLocalExec ctrlCommit 0; 
 
     pvtMenuDebugPlayerExec = pvtMenu ctrlCreate ["RscButtonMenu",2553]; 
     pvtMenuDebugPlayerExec ctrlSetPosition [0.567031 * safezoneW + safezoneX,0.841 * safezoneH + safezoneY,0.0515625 * safezoneW,0.022 * safezoneH]; 
     pvtMenuDebugPlayerExec ctrlSetStructuredText parseText "<t align='center'>Player</t>"; 
     pvtMenuDebugPlayerExec ctrlSetBackgroundColor [0,0,0.1,0.8]; 
     pvtMenuDebugPlayerExec ctrlAddEventHandler ["ButtonClick",{ 
      _debugCodeBox = uiNamespace getVariable 'pvtMenuDebugEdit'; 
      _debugText = ctrlText _debugCodeBox; 
      if(_debugText == "Debug Console..." || _debugText == "") exitWith {playsound "addItemFailed";systemChat "[ZEUS] - Error: No code supplied.";}; 
      player setVariable ['dbgConsleCode_MAZ',_debugText]; 
      _code = compile ("this = player;" + (ctrlText (uiNamespace getVariable 'pvtMenuDebugEdit'))); 
      _returnInfo = { 
       params ["_code"]; 
       _return = ([nil] apply {[] call _code} param [0, text ""]); 
 
       _changeReturnField = { 
        _return = _this; 
        with uiNamespace do { 
         _returnStr = str _return; 
         disableSerialization; 
         _outputCtrlServerExecColor = [0,0.1,0,0.8]; 
         (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlSetText _returnStr; 
         (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlSetBackgroundColor _outputCtrlServerExecColor; 
         (uiNameSpace getVariable 'pvtMenuDebugReturnField') ctrlCommit 0; 
        }; 
       }; 
 
       [[_return,_changeReturnField],{ 
        params ["_return","_fnc"]; 
        _return spawn _fnc; 
       }] remoteExec ['spawn',remoteExecutedOwner]; 
      }; 
     
      _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
      if(_index == -1) then { 
       playsound "addItemFailed"; 
       systemChat "[ZEUS] - Error: No player selected."; 
      } else { 
       _unit = (allPlayers select _index); 
       [[_code,_returnInfo], { 
        params ["_code","_returnInfo"]; 
        [_code] spawn _returnInfo; 
       }] remoteExec ['spawn',_unit]; 
      }; 
     }]; 
     pvtMenuDebugPlayerExec ctrlSetFont "PuristaSemiBold"; 
     pvtMenuDebugPlayerExec ctrlSetToolTip "Execute code on player selected in player list. 'this' refers to the player executed on."; 
     pvtMenuDebugPlayerExec ctrlSetFade 1; 
     pvtMenuDebugPlayerExec ctrlCommit 0; 
 
     pvtMenuDebugReturnField = pvtMenu ctrlCreate ["RscEdit",1150]; 
     pvtMenuDebugReturnField ctrlSetPosition [0.37625 * safezoneW + safezoneX,0.874 * safezoneH + safezoneY,0.2475 * safezoneW,0.022 * safezoneH]; 
     pvtMenuDebugReturnField ctrlSetTooltip "Code return will show here."; 
     pvtMenuDebugReturnField ctrlSetBackgroundColor [0,0,0,0.75]; 
     pvtMenuDebugReturnField ctrlSetTextColor [1,1,1,1]; 
     pvtMenuDebugReturnField ctrlSetFont "PuristaMedium"; 
     pvtMenuDebugReturnField ctrlCommit 0; 
 
    comment "Spawn functions"; 
 
     waitUntil {!(isNull pvtMenu)}; 
     pvtMenuHourCombo lbSetCurSel 0; 
     pvtMenuMinuteCombo lbSetCurSel 0; 
     pvtMenuWeatherCombo lbSetCurSel 0; 
    comment "Fade In"; 
     { 
      _x ctrlSetFade 0; 
      _x ctrlCommit 0.25; 
     } forEach allControls pvtMenu; 
   }; 
   private _displayID = uiNameSpace getVariable ['pvtMenu',displayNull]; 
   [_displayID] spawn MAZ_fnc_updateList; 
  }; 
 
  MAZ_fnc_vehicleSpawner = { 
   disableSerialization; 
   with uiNamespace do { 
    pvtSpawner = (findDisplay 46) createDisplay "RscDisplayEmpty"; 
    showChat true; 
 
    comment "Backgrounds"; 
 
     pvtMenuSpawnerFrame = pvtSpawner ctrlCreate ["RscFrame", 1800]; 
     pvtMenuSpawnerFrame ctrlSetPosition [0.40203 * safezoneW + safezoneX,0.247 * safezoneH + safezoneY,0.195937 * safezoneW,0.462 * safezoneH]; 
     pvtMenuSpawnerFrame ctrlSetFade 1; 
     pvtMenuSpawnerFrame ctrlCommit 0; 
 
     pvtMenuSpawnerListFrame = pvtSpawner ctrlCreate ["RscFrame",1802]; 
     pvtMenuSpawnerListFrame ctrlSetPosition [0.407187 * safezoneW + safezoneX,0.258 * safezoneH + safezoneY,0.185625 * safezoneW,0.33 * safezoneH]; 
     pvtMenuSpawnerListFrame ctrlSetFade 1; 
     pvtMenuSpawnerListFrame ctrlCommit 0; 
 
     pvtMenuSpawnerFrameBG = pvtSpawner ctrlCreate ["RscPicture", 1801]; 
     pvtMenuSpawnerFrameBG ctrlSetPosition [0.40203 * safezoneW + safezoneX,0.247 * safezoneH + safezoneY,0.195937 * safezoneW,0.462 * safezoneH]; 
     pvtMenuSpawnerFrameBG ctrlSetTextColor [0,0,0,0.65]; 
     pvtMenuSpawnerFrameBG ctrlSetText "#(argb,8,8,3)color(1,1,1,1)"; 
     pvtMenuSpawnerFrameBG ctrlSetFade 1; 
     pvtMenuSpawnerFrameBG ctrlCommit 0; 
 
    comment "Buttons"; 
      
     pvtMenuSpawnerSpawn = pvtSpawner ctrlCreate ["RscButtonMenu",2400]; 
     pvtMenuSpawnerSpawn ctrlSetPosition [0.412344 * safezoneW + safezoneX,0.676 * safezoneH + safezoneY,0.0825 * safezoneW,0.022 * safezoneH]; 
     pvtMenuSpawnerSpawn ctrlSetStructuredText parseText "<t align='center'>Spawn</t>"; 
     pvtMenuSpawnerSpawn ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_spawnVehicle; 
     }]; 
     pvtMenuSpawnerSpawn ctrlSetFont "PuristaSemiBold"; 
     pvtMenuSpawnerSpawn ctrlSetFade 1; 
     pvtMenuSpawnerSpawn ctrlCommit 0;  
 
     pvtMenuSpawnerCancel = pvtSpawner ctrlCreate ["RscButtonMenu",2401]; 
     pvtMenuSpawnerCancel ctrlSetPosition [0.505156 * safezoneW + safezoneX,0.676 * safezoneH + safezoneY,0.0825 * safezoneW,0.022 * safezoneH]; 
     pvtMenuSpawnerCancel ctrlSetStructuredText parseText "<t align='center'>Cancel</t>"; 
     pvtMenuSpawnerCancel ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn { 
       private _menu = uiNameSpace getVariable ['pvtSpawner',displayNull]; 
       { 
        _x ctrlSetFade 1; 
        _x ctrlCommit 0.25; 
       } forEach allControls _menu; 
       sleep 0.25; 
       _menu closeDisplay 0; 
      }; 
     }]; 
     pvtMenuSpawnerCancel ctrlSetFont "PuristaSemiBold"; 
     pvtMenuSpawnerCancel ctrlSetFade 1; 
     pvtMenuSpawnerCancel ctrlCommit 0;  
 
     pvtMenuSpawnerMoveInCB = pvtSpawner ctrlCreate ["RscCheckbox",2800]; 
     pvtMenuSpawnerMoveInCB ctrlSetPosition [0.407187 * safezoneW + safezoneX,0.643 * safezoneH + safezoneY,0.0103125 * safezoneW,0.022 * safezoneH]; 
     pvtMenuSpawnerMoveInCB ctrlSetFade 1; 
     pvtMenuSpawnerMoveInCB ctrlCommit 0; 
 
     pvtMenuSpawnerAirSpawnCB = pvtSpawner ctrlCreate ["RscCheckbox",2801]; 
     pvtMenuSpawnerAirSpawnCB ctrlSetPosition [0.45875 * safezoneW + safezoneX,0.643 * safezoneH + safezoneY,0.0103125 * safezoneW,0.022 * safezoneH]; 
     pvtMenuSpawnerAirSpawnCB ctrlSetFade 1; 
     pvtMenuSpawnerAirSpawnCB ctrlCommit 0; 
 
     pvtMenuSpawnerSpawnAICB = pvtSpawner ctrlCreate ["RscCheckbox",2802]; 
     pvtMenuSpawnerSpawnAICB ctrlSetPosition [0.525781 * safezoneW + safezoneX,0.643 * safezoneH + safezoneY,0.0103125 * safezoneW,0.022 * safezoneH]; 
     pvtMenuSpawnerSpawnAICB ctrlSetFade 1; 
     pvtMenuSpawnerSpawnAICB ctrlCommit 0; 
 
    comment "Labels"; 
 
     pvtMenuSpawnerMoveInLabel = pvtSpawner ctrlCreate ["RscStructuredText",1100]; 
     pvtMenuSpawnerMoveInLabel ctrlSetStructuredText parseText "Move In";  
     pvtMenuSpawnerMoveInLabel ctrlSetPosition [0.4175 * safezoneW + safezoneX,0.643 * safezoneH + safezoneY,0.045 * safezoneW,0.022 * safezoneH]; 
     pvtMenuSpawnerMoveInLabel ctrlSetFade 1; 
     pvtMenuSpawnerMoveInLabel ctrlCommit 0; 
 
     pvtMenuSpawnerAirSpawnLabel = pvtSpawner ctrlCreate ["RscStructuredText",1101]; 
     pvtMenuSpawnerAirSpawnLabel ctrlSetStructuredText parseText "Spawn in Air";  
     pvtMenuSpawnerAirSpawnLabel ctrlSetPosition [0.469062 * safezoneW + safezoneX,0.643 * safezoneH + safezoneY,0.061875 * safezoneW,0.022 * safezoneH]; 
     pvtMenuSpawnerAirSpawnLabel ctrlSetFade 1; 
     pvtMenuSpawnerAirSpawnLabel ctrlCommit 0; 
 
     pvtMenuSpawnAILabel = pvtSpawner ctrlCreate ["RscStructuredText",1102]; 
     pvtMenuSpawnAILabel ctrlSetStructuredText parseText "Spawn w/ AI";  
     pvtMenuSpawnAILabel ctrlSetPosition [0.536094 * safezoneW + safezoneX,0.643 * safezoneH + safezoneY,0.061875 * safezoneW,0.022 * safezoneH]; 
     pvtMenuSpawnAILabel ctrlSetFade 1; 
     pvtMenuSpawnAILabel ctrlCommit 0; 
 
    comment "Listbox"; 
 
     pvtMenuSpawnerListbox = pvtSpawner ctrlCreate ["RscListBox",1500]; 
     pvtMenuSpawnerListbox ctrlSetPosition [0.407187 * safezoneW + safezoneX,0.258 * safezoneH + safezoneY,0.185625 * safezoneW,0.33 * safezoneH]; 
     pvtMenuSpawnerListbox ctrlSetFade 1; 
     pvtMenuSpawnerListbox ctrlCommit 0; 
 
    comment "Search Bar"; 
 
     pvtMenuSpawnerSearch = pvtSpawner ctrlCreate ["RscEdit",1409]; 
     pvtMenuSpawnerSearch ctrlSetPosition [0.407187 * safezoneW + safezoneX,0.599 * safezoneH + safezoneY,0.185625 * safezoneW,0.033 * safezoneH]; 
     pvtMenuSpawnerSearch ctrlSetText "Search"; 
     pvtMenuSpawnerSearch ctrlAddEventHandler ['setFocus',{ 
      params ["_control"]; 
      if(ctrlText _control == "Search") then { 
       _control ctrlSetText ""; 
      }; 
     }]; 
     pvtMenuSpawnerSearch ctrlAddEventHandler ['killFocus',{ 
      params ["_control"]; 
      if(ctrlText _control == "") then { 
       _control ctrlSetText "Search"; 
      }; 
     }]; 
     pvtMenuSpawnerSearch ctrlAddEventHandler ['keyDown', { 
      params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"]; 
      with uiNamespace do { 
       _searchText = ctrlText pvtMenuSpawnerSearch; 
 
       lbClear pvtMenuSpawnerListbox; 
       if(_key == 14 && (count _searchText == 1)) then { 
        _searchText = ""; 
       }; 
       switch (vehicleSpawnerMode_MAZ) do { 
        case 0: { 
         comment "Land"; 
         _landVehArray = "getNumber (_x >> 'scope') == 2 && getNumber (_x >> 'type') >= 0 && getNumber (_x >> 'type') < 2" configClasses (configFile >> "cfgVehicles"); 
         _landArray = []; 
 
         { 
          _land = configName _x; 
          if ((_land isKindOf "Car") OR (_land isKindOf "Tank")) then{ 
           _landArray pushBack _land; 
          }; 
         } forEach _landVehArray; 
 
         { 
          private _landName = getText (configFile >> "cfgVehicles" >> _x >> "displayName"); 
          if((toLower _searchText) in (toLower _landName)) then { 
           private _dlcName = getText (configfile >> "CfgVehicles" >> _x >> "DLC"); 
           private _vehPicture = getText (configfile >> "CfgVehicles" >> _x >> "icon"); 
           private _dlcPicture = ""; 
           if(_dlcName == "Expansion") then { 
            _dlcPicture = "a3\data_f_exp\logos\arma3_exp_icon_ca.paa"; 
           }; 
           if(_dlcName == "ORANGE") then { 
            _dlcPicture = "a3\data_f_orange\logos\arma3_orange_picture_ca.paa"; 
           }; 
           if(_dlcName == "Tank") then { 
            _dlcPicture = "a3\data_f_tank\logos\arma3_tank_picture_ca.paa"; 
           }; 
           if(_dlcName == "Jets") then { 
            _dlcPicture = "a3\data_f_jets\logos\jets_logo_ca.paa"; 
           }; 
           if(_dlcName == "Enoch") then { 
            _dlcPicture = "a3\data_f_enoch\logos\arma3_enoch_logo_ca.paa"; 
           }; 
           private _vehList = uiNameSpace getVariable ['pvtMenuSpawnerListbox',displayNull]; 
           private _lbIndex = _vehList lbAdd _landName; 
           _vehList lbSetPicture [_lbIndex,_vehPicture]; 
           _vehList lbSetPictureRight [_lbIndex,_dlcPicture]; 
           _vehList lbSetData [_lbIndex, _x]; 
          }; 
         } forEach _landArray; 
        }; 
        case 1: { 
         comment "Air"; 
         _airVehArray = "getNumber (_x >> 'scope') == 2" configClasses (configFile >> "cfgVehicles"); 
         _airArray = []; 
 
         { 
          _air = configName _x; 
          if (_air isKindOf "Air") then{ 
           _airArray pushBack _air; 
          }; 
         } forEach _airVehArray; 
 
         { 
          private _airName = getText (configFile >> "cfgVehicles" >> _x >> "displayName"); 
          if((toLower _searchText) in (toLower _airName)) then { 
           private _airName = getText (configFile >> "cfgVehicles" >> _x >> "displayName"); 
           private _dlcName = getText (configfile >> "CfgVehicles" >> _x >> "DLC"); 
           private _vehPicture = getText (configfile >> "CfgVehicles" >> _x >> "icon"); 
           private _dlcPicture = ""; 
           if(_dlcName == "Expansion") then { 
            _dlcPicture = "a3\data_f_exp\logos\arma3_exp_icon_ca.paa"; 
           }; 
           if(_dlcName == "ORANGE") then { 
            _dlcPicture = "a3\data_f_orange\logos\arma3_orange_picture_ca.paa"; 
           }; 
           if(_dlcName == "Tank") then { 
            _dlcPicture = "a3\data_f_tank\logos\arma3_tank_picture_ca.paa"; 
           }; 
           if(_dlcName == "Jets") then { 
            _dlcPicture = "a3\data_f_jets\logos\jets_logo_ca.paa"; 
           }; 
           if(_dlcName == "Enoch") then { 
            _dlcPicture = "a3\data_f_enoch\logos\arma3_enoch_logo_ca.paa"; 
           }; 
           if(_dlcName == "Heli") then { 
            _dlcPicture = "a3\data_f_heli\logos\arma3_heli_icon_ca.paa"; 
           }; 
           private _vehList = uiNameSpace getVariable ['pvtMenuSpawnerListbox',displayNull]; 
           private _lbIndex = _vehList lbAdd _airname; 
           _vehList lbSetPicture [_lbIndex,_vehPicture]; 
           _vehList lbSetPictureRight [_lbIndex,_dlcPicture]; 
           _vehList lbSetData [_lbIndex, _x]; 
          }; 
         } forEach _airArray; 
        }; 
        case 2: { 
         comment "Sea"; 
         _boatVehArray = "getNumber (_x >> 'scope') == 2 && getNumber (_x >> 'type') >= 0 && getNumber (_x >> 'type') < 2" configClasses (configFile >> "cfgVehicles"); 
         _boatArray = []; 
 
         _removeDuplicates = { 
          _array = (_this select 0); 
          { 
           _array deleteAt (_array find _x); 
          } forEach _array; 
         }; 
 
         { 
          _boat = configName _x; 
          if ((_boat isKindOf "Ship")) then{ 
           _boatArray pushBack _boat; 
          }; 
         } forEach _boatVehArray; 
 
         [_boatArray] call _removeDuplicates; 
 
         { 
          private _boatName = getText (configFile >> "cfgVehicles" >> _x >> "displayName"); 
          if((toLower _searchText) in (toLower _boatName)) then { 
           private _dlcName = getText (configfile >> "CfgVehicles" >> _x >> "DLC"); 
           private _vehPicture = getText (configfile >> "CfgVehicles" >> _x >> "icon"); 
           private _dlcPicture = ""; 
           if(_dlcName == "Expansion") then { 
            _dlcPicture = "a3\data_f_exp\logos\arma3_exp_icon_ca.paa"; 
           }; 
           if(_dlcName == "ORANGE") then { 
            _dlcPicture = "a3\data_f_orange\logos\arma3_orange_picture_ca.paa"; 
           }; 
           if(_dlcName == "Tank") then { 
            _dlcPicture = "a3\data_f_tank\logos\arma3_tank_picture_ca.paa"; 
           }; 
           if(_dlcName == "Jets") then { 
            _dlcPicture = "a3\data_f_jets\logos\jets_logo_ca.paa"; 
           }; 
           if(_dlcName == "Enoch") then { 
            _dlcPicture = "a3\data_f_enoch\logos\arma3_enoch_logo_ca.paa"; 
           }; 
           if(_dlcName == "Heli") then { 
            _dlcPicture = "a3\data_f_heli\logos\arma3_heli_icon_ca.paa"; 
           }; 
           private _vehList = uiNameSpace getVariable ['pvtMenuSpawnerListbox',displayNull]; 
           private _lbIndex = _vehList lbAdd _boatName; 
           _vehList lbSetPicture [_lbIndex,_vehPicture]; 
           _vehList lbSetPictureRight [_lbIndex,_dlcPicture]; 
           _vehList lbSetData [_lbIndex, _x]; 
          }; 
         } forEach _boatArray; 
        }; 
       }; 
      }; 
     }]; 
     pvtMenuSpawnerSearch ctrlCommit 0; 
 
    comment "Fade In"; 
     { 
      _x ctrlSetFade 0; 
      _x ctrlCommit 0.25; 
     } forEach allControls pvtSpawner; 
   }; 
  }; 
 
 comment "Functions"; 
  comment "Utility"; 
   MAZ_fnc_openArsenal = { 
    ["Preload"] call BIS_fnc_arsenal; 
    ["Open", true] call BIS_fnc_arsenal; 
    showChat true; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_clearMap = { 
    private _countDead = 0; 
    private _deadObjects = 0; 
    {_countDead = _countDead + 1;} forEach allDeadMen; 
    [[],{ 
     for '_i' from 1 to 3 do { 
      private _allMObjects = allMissionObjects 'All'; 
       { 
        if ((!alive _x) or (damage _x == 1)) then { 
         deleteVehicle _x; 
        } else { 
         private _objName = getText (configFile >> 'cfgVehicles' >> typeOf _x >> 'displayName'); 
         if ((_objName == 'Ground') or (_objName == 'Damaged Building') or (_objName == 'Canopy')) then { 
          deleteVehicle _x; 
         } else { 
          private _objName2 = _objName splitString ' '; 
          if (_objName2 # (count _objName2 - 1) == '(Ruin)') then { 
           deleteVehicle _x; 
          } else { 
           private _objName3 = _objName splitString ','; 
           if (_objName3 # (count _objName3 - 1) == ' Ruin)') then { 
            deleteVehicle _x; 
           }; 
          }; 
         }; 
        }; 
       } forEach _allMObjects; 
      sleep 0.77; 
     }; 
     { 
      if (count units _x == 0) then {deleteGroup _x}; 
     } forEach allGroups; 
    }] remoteExec ['spawn',2]; 
    systemChat format ["[ZEUS] - %1 dead bodies were removed.",_countDead]; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_teleportOnMap = { 
    player onMapSingleClick "if (_alt) then { 
     vehicle player setPosATL _pos; 
    }"; 
    openMap [true, false]; 
    systemChat "[ZEUS] - Press Alt + LMB to teleport to areas on the map!"; 
    with uiNamespace do {pvtMenu closeDisplay 0;}; 
   }; 
 
   MAZ_fnc_healSelf = { 
    if(isNil "noParamsMedical") then { 
     player setDamage 0; 
     ["#rev",1,player] call BIS_fnc_reviveOnState; 
    } else { 
     player setDamage 0; 
     player setUnconscious false; 
 
     player setVariable ['noParamsDowned',nil,true]; 
     player setVariable ["downedMessageSent",nil,true]; 
    }; 
   }; 
 
   MAZ_fnc_changeSide = { 
    with uiNamespace do { 
     changeSideCtrls = []; 
 
     changeSideFrame = pvtMenu ctrlCreate ["RscFrame", 1808]; 
     changeSideFrame ctrlSetPosition [0.226719 * safezoneW + safezoneX,0.302 * safezoneH + safezoneY,0.0721875 * safezoneW,0.275 * safezoneH]; 
     changeSideFrame ctrlSetFade 1; 
     changeSideFrame ctrlCommit 0; 
     changeSideCtrls pushBack changeSideFrame; 
 
     changeSideBG = pvtMenu ctrlCreate ["RscPicture", 1809]; 
     changeSideBG ctrlSetPosition [0.226719 * safezoneW + safezoneX,0.302 * safezoneH + safezoneY,0.0721875 * safezoneW,0.275 * safezoneH]; 
     changeSideBG ctrlSetTextColor [0,0,0,0.65]; 
     changeSideBG ctrlSetText "#(argb,8,8,3)color(1,1,1,1)"; 
     changeSideBG ctrlSetFade 1; 
     changeSideBG ctrlCommit 0; 
     changeSideCtrls pushBack changeSideBG; 
 
     changeSideWestButton = pvtMenu ctrlCreate ["RscButtonMenu",2500]; 
     changeSideWestButton ctrlSetPosition [0.231875 * safezoneW + safezoneX,0.313 * safezoneH + safezoneY,0.061875 * safezoneW,0.055 * safezoneH]; 
     changeSideWestButton ctrlSetStructuredText parseText "<t size='0.6'>&#160;</t><br/><t align='center'>BLUFOR</t>"; 
     changeSideWestButton ctrlSetFont "PuristaSemiBold"; 
     changeSideWestButton ctrlSetBackgroundColor [0,0.3,0.6,0.75]; 
     changeSideWestButton ctrlAddEventHandler ["ButtonClick",{ 
      [west] call MAZ_fnc_joinSide; 
     }]; 
     changeSideWestButton ctrlSetFade 1; 
     changeSideWestButton ctrlCommit 0; 
     changeSideCtrls pushBack changeSideWestButton; 
 
     changeSideEastButton = pvtMenu ctrlCreate ["RscButtonMenu",2501]; 
     changeSideEastButton ctrlSetPosition [0.231875 * safezoneW + safezoneX,0.379 * safezoneH + safezoneY,0.061875 * safezoneW,0.055 * safezoneH]; 
     changeSideEastButton ctrlSetStructuredText parseText "<t size='0.6'>&#160;</t><br/><t align='center'>OPFOR</t>"; 
     changeSideEastButton ctrlSetFont "PuristaSemiBold"; 
     changeSideEastButton ctrlSetBackgroundColor [0.5,0,0,0.75]; 
     changeSideEastButton ctrlAddEventHandler ["ButtonClick",{ 
      [east] call MAZ_fnc_joinSide; 
     }]; 
     changeSideEastButton ctrlSetFade 1; 
     changeSideEastButton ctrlCommit 0; 
     changeSideCtrls pushBack changeSideEastButton; 
 
     changeSideIndepButton = pvtMenu ctrlCreate ["RscButtonMenu",2502]; 
     changeSideIndepButton ctrlSetPosition [0.231875 * safezoneW + safezoneX,0.445 * safezoneH + safezoneY,0.061875 * safezoneW,0.055 * safezoneH]; 
     changeSideIndepButton ctrlSetStructuredText parseText "<t size='0.6'>&#160;</t><br/><t align='center'>INDEP</t>"; 
     changeSideIndepButton ctrlSetFont "PuristaSemiBold"; 
     changeSideIndepButton ctrlSetBackgroundColor [0,0.5,0,0.75]; 
     changeSideIndepButton ctrlAddEventHandler ["ButtonClick",{ 
      [independent] call MAZ_fnc_joinSide; 
     }]; 
     changeSideIndepButton ctrlSetFade 1; 
     changeSideIndepButton ctrlCommit 0; 
     changeSideCtrls pushBack changeSideIndepButton; 
 
     changeSideCivButton = pvtMenu ctrlCreate ["RscButtonMenu",2503]; 
     changeSideCivButton ctrlSetPosition [0.231875 * safezoneW + safezoneX,0.511 * safezoneH + safezoneY,0.061875 * safezoneW,0.055 * safezoneH]; 
     changeSideCivButton ctrlSetStructuredText parseText "<t size='0.6'>&#160;</t><br/><t align='center'>CIVILIAN</t>"; 
     changeSideCivButton ctrlSetFont "PuristaSemiBold"; 
     changeSideCivButton ctrlSetBackgroundColor [0.4,0,0.5,0.75]; 
     changeSideCivButton ctrlAddEventHandler ["ButtonClick",{ 
      [civilian] call MAZ_fnc_joinSide; 
     }]; 
     changeSideCivButton ctrlSetFade 1; 
     changeSideCivButton ctrlCommit 0; 
     changeSideCtrls pushBack changeSideCivButton; 
 
     { 
      _x ctrlSetFade 0; 
      _x ctrlCommit 0.5; 
     } forEach changeSideCtrls; 
    }; 
   }; 
 
   MAZ_fnc_joinSide = { 
    params ["_sideToJoin"]; 
    [player] joinSilent (createGroup _sideToJoin); 
    with uiNamespace do { 
     [] spawn { 
      { 
       _x ctrlSetFade 1; 
       _x ctrlCommit 0.5; 
        
      } forEach changeSideCtrls; 
      uiSleep 0.5; 
      { 
       ctrlDelete _x; 
      } forEach changeSideCtrls; 
     }; 
    }; 
   }; 
 
   MAZ_fnc_deleteTarget = { 
    deleteVehicle cursorObject; 
   }; 
 
   MAZ_fnc_toggleStamina = { 
    private _isNoStam = player getVariable ["isNoStam",false]; 
    if(_isNoStam) then { 
     player enableStamina true; 
     player setVariable ["isNoStam",false]; 
    } else { 
     player enableStamina false; 
     player setVariable ["isNoStam",true]; 
    }; 
   }; 
 
   MAZ_fnc_killTarget = { 
    cursorObject setDamage 1; 
   }; 
 
   MAZ_fnc_godMode = { 
    private _gModeEnabled = player getVariable ["isGodded",false]; 
    if(_gModeEnabled) then { 
     player allowDamage true; 
     player setVariable ["isGodded",false]; 
    } else { 
     player allowDamage false; 
     player setVariable ["isGodded",true]; 
    }; 
   }; 
 
   MAZ_fnc_vehicleGodMode = { 
    private _vehGModeEnabled = (vehicle player) getVariable ["isGodded",false]; 
    if(_vehGModeEnabled) then { 
     (vehicle player) allowDamage true; 
     (vehicle player) setVariable ["isGodded",false,true]; 
    } else { 
     (vehicle player) allowDamage false; 
     (vehicle player) setVariable ["isGodded",true,true]; 
    }; 
   }; 
 
   MAZ_fnc_invisible = { 
    private _isInvisible = player getVariable ["isInvis",false]; 
    if(_isInvisible) then { 
     [player, false] remoteExec ["hideObject",0,true]; 
     player setVariable ["isInvis",false]; 
    } else { 
     [player, true] remoteExec ["hideObject",0,true]; 
     player setVariable ["isInvis",true]; 
    }; 
   }; 
 
   MAZ_fnc_repairVehicle = { 
    private _vehicle = cursorTarget; 
    _vehicle setDamage 0; 
    vehicle player setDamage 0; 
    _vehicle setFuel 1; 
    vehicle player setFuel 1; 
    _vehicle setVehicleAmmo 1; 
    vehicle player setVehicleAmmo 1; 
    systemChat "[ZEUS] - Vehicle repaired."; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_targetArsenal = { 
    ["AmmoboxInit",[cursorObject,true]] spawn BIS_fnc_arsenal; 
    systemChat "[ZEUS] - Object is an arsenal."; 
    playSound 'addItemOk'; 
   }; 
 
   fn_isUnitCopilot = { 
    if(vehicle _this == _this) exitWith {false}; 
 
    private ["_veh", "_cfg", "_trts", "_return", "_trt"]; 
    _veh = (vehicle _this); 
    _cfg = configFile >> "CfgVehicles" >> typeOf(_veh); 
    _trts = _cfg >> "turrets"; 
    _return = false; 
 
    for "_i" from 0 to (count _trts - 1) do { 
     _trt = _trts select _i; 
 
     if(getNumber(_trt >> "iscopilot") == 1) exitWith { 
      _return = (_veh turretUnit [_i] == _this); 
     }; 
    }; 
 
    _return 
   }; 
 
   MAZ_fnc_checkForIfDriver = { 
    params ["_unit","_vehicle"]; 
    private _return = false; 
    if(driver _vehicle == _unit) then { 
     _return = true; 
    }; 
    private _crewCount = {alive _x} count (crew _vehicle); 
    if(_crewCount == 1) then { 
     _return = true; 
    }; 
    if(_unit call fn_isUnitCopilot && isNull (driver _vehicle)) then { 
     _return = true; 
    }; 
    _return 
   }; 
 
   MAZ_fnc_ESP = { 
    maxDistanceFlagMarker3D = 1500; 
    transitionDistanceFlagMarker3D = 500; 
    maxDistanceUnitMarker3D = 150; 
    maxDistanceUnitMarkerText3D = 10; 
    maxCursorRangeUnitMarker = 0.02; 
    minMapZoomUnitMarker = 0.0045; 
    if(!isNil "MAZ_fnc_ESPEH") then { 
     removeMissionEventHandler ["Draw3D",MAZ_fnc_ESPEH]; 
    }; 
    MAZ_fnc_ESPEH = addMissionEventHandler ["Draw3D", { 
     { 
      if((typeOf _x) in ["ModuleHQ_F","Logic"] || !alive _x) then {} else { 
       private _veh = vehicle _x; 
       if(player in _veh) exitWith {}; 
       private _imageType = "\A3\ui_f\data\Map\VehicleIcons\iconMan_ca.paa"; 
       private _side = toLower (str (side _x)); 
       private _imgColor = [1,1,1,1]; 
       switch(_side) do { 
        case "west": {_imgColor = [0,0.5,1,0.85];}; 
        case "east": {_imgColor = [1,0,0,0.85];}; 
        case "independent": {_imgColor = [0,1,0.5,0.85];}; 
        case "guer": {_imgColor = [0,1,0,0.85];}; 
        case "civilian": {_imgColor = [1,0,1,0.85];}; 
        case "enemy": {_imgColor = [0.976,0.412,0.055,0.85];}; 
       }; 
       private _text = name _x; 
       if(!isPlayer _x) then { 
        _text = _text + " (AI)"; 
       }; 
       if(_veh == _x) then { 
        comment "Is not in vehicle"; 
        private _position = _x modelToWorldVisual (_x selectionPosition "head_axis"); 
        _position set [2,(_position select 2)+0.5]; 
 
        drawIcon3D [ 
         _imageType,  
         _imgColor,  
         _position,  
         0.6,  
         0.6,  
         0,  
         _text,  
         2,  
         0.02825 * 1.5,  
         "RobotoCondensedBold", 
         'center', 
         false,  
         0,  
         -0.045 
        ]; 
        drawLine3D [ 
         [getPosATL player select 0,getPosATL player select 1,(getPosATL player select 2) + 1], 
         [getPosATL _x select 0,getPosATL _x select 1,(getPosATL _x select 2) + 1], 
         _imgColor 
        ]; 
       } else { 
        comment "Is in vehicle"; 
        if([_x,_veh] call MAZ_fnc_checkForIfDriver) then { 
         private _className = (typeOf _veh); 
         private _file = getText (configfile >> "CfgVehicles" >> _className >> "icon"); 
         private _crewCount = {alive _x} count (crew _veh); 
         if(_crewCount > 1) then { 
          _text = _text + " [+" + str (_crewCount - 1) + "]"; 
         }; 
         private _position = _veh modelToWorldVisual [0,0,0]; 
         _position set [2, (_position # 2) + 0.75]; 
         drawIcon3D [ 
          _file,  
          _imgColor,  
          _position,  
          0.7,  
          0.7,  
          0,  
          _text,  
          2,  
          0.02825 * 1.5,  
          "RobotoCondensedBold", 
          'center', 
          false,  
          0,  
          -0.045 
         ]; 
         drawLine3D [ 
          [getPosATL player select 0,getPosATL player select 1,(getPosATL player select 2) + 1], 
          [getPosATL _veh select 0,getPosATL _veh select 1,(getPosATL _veh select 2) + 1], 
          _imgColor 
         ]; 
        }; 
       }; 
      }; 
     } forEach allUnits - [player]; 
    }]; 
    if(!isNil "MAZ_mapESPEH") then { 
     (findDisplay 12 displayCtrl 51) ctrlRemoveEventHandler ["Draw",MAZ_mapESPEH]; 
    }; 
    MAZ_mapESPEH = (findDisplay 12 displayCtrl 51) ctrlAddEventHandler ["Draw", { 
     { 
      if((typeOf _x) in ["ModuleHQ_F","Logic"] || !alive _x) then {} else { 
       private _pos2D = (_this select 0) ctrlMapWorldToScreen _pos; 
       private _posCursor2D = getMousePosition; 
       private _dist = _pos2D distance2D _posCursor2D; 
       private _scale = ctrlMapScale (_this select 0); 
       private _veh = vehicle _x; 
       private _imageType = "\A3\ui_f\data\Map\VehicleIcons\iconMan_ca.paa"; 
       private _side = toLower (str (side _x)); 
       private _imgColor = [1,1,1,1]; 
       switch(_side) do { 
        case "west": {_imgColor = [0,0.5,1,0.75];}; 
        case "east": {_imgColor = [1,0,0,0.75];}; 
        case "independent": {_imgColor = [0,1,0.5,0.75];}; 
        case "guer": {_imgColor = [0,1,0,0.75];}; 
        case "civilian": {_imgColor = [1,0,1,0.75];}; 
        case "enemy": {_imgColor = [0.976,0.412,0.055,0.75];}; 
       }; 
       private _text = name _x; 
       if(!isPlayer _x) then { 
        _text = _text + " (AI)"; 
       }; 
       if((_scale > minMapZoomUnitMarker) && (_dist > maxCursorRangeUnitMarker)) then {_text = "";}; 
       private _rot = getDir _veh; 
       if(_x == player) then { 
        _imgColor = [0,0.8,1,0.95]; 
       }; 
       if(_veh == _x) then { 
        comment "Is not in vehicle"; 
        private _position = getPos _x; 
 
        _this select 0 drawIcon [ 
         _imageType,  
         _imgColor,  
         _position,  
         20,  
         20,  
         _rot,  
         _text,  
         2,  
         0.02825 * 1.5,  
         "RobotoCondensedBold", 
         'left' 
        ]; 
        _this select 0 drawIcon [ 
         _imageType,  
         _imgColor,  
         _position,  
         20,  
         20,  
         _rot,  
         _text,  
         1,  
         0.02825 * 1.5,  
         "RobotoCondensedBold", 
         'left' 
        ]; 
        _this select 0 drawLine [ 
         getPos player, 
         getPos _x, 
         _imgColor 
        ]; 
       } else { 
        comment "Is in vehicle"; 
        if([_x,_veh] call MAZ_fnc_checkForIfDriver) then { 
         private _className = (typeOf _veh); 
         private _file = getText (configfile >> "CfgVehicles" >> _className >> "icon"); 
         private _vehName = getText (configfile >> "CfgVehicles" >> _className >> "displayName"); 
         private _crewCount = {alive _x} count (crew _veh); 
         if(_crewCount > 1) then { 
          _text = _text + " [+" + str (_crewCount - 1) + "]"; 
         }; 
         private _position = getPos _veh; 
         _this select 0 drawIcon[ 
          _file, 
          _imgColor, 
          _position, 
          20, 
          20, 
          _rot, 
          _vehName, 
          2, 
          0.05, 
          "RobotoCondensedBold", 
          "left" 
         ]; 
         _this select 0 drawIcon [ 
          _file,  
          _imgColor,  
          _position,  
          20,  
          20,  
          _rot,  
          _text,  
          2,  
          0.02825 * 1.5,  
          "RobotoCondensedBold", 
          'right' 
         ]; 
         _this select 0 drawIcon [ 
          _file, 
          _imgColor, 
          _position, 
          20, 
          20, 
          _rot, 
          _vehName, 
          1, 
          0.05, 
          "RobotoCondensedBold", 
          "left" 
         ]; 
         (_this select 0) drawLine [ 
          getPos player, 
          getPos _x, 
          _imgColor 
         ]; 
        }; 
       }; 
      }; 
     } forEach allUnits; 
    }]; 
    player setVariable ['isESPOn',true]; 
   }; 
 
   MAZ_fnc_removeESP = { 
    if(!isNil "MAZ_fnc_ESPEH") then { 
     removeMissionEventHandler ["Draw3D",MAZ_fnc_ESPEH]; 
    }; 
    if(!isNil "MAZ_mapESPEH") then { 
     (findDisplay 12 displayCtrl 51) ctrlRemoveEventHandler ["Draw",MAZ_mapESPEH]; 
    }; 
    player setVariable ['isESPOn',false]; 
   }; 
 
   MAZ_fnc_makeRespawn = { 
    if(isNil "respawnsCreated_MAZ") then { 
     respawnsCreated_MAZ = []; 
     publicVariable "respawnsCreated_MAZ"; 
    }; 
    with uiNamespace do { 
     _respawnsArray = missionNamespace getVariable 'respawnsCreated_MAZ'; 
 
     respawnMapFrame1 = pvtMenu ctrlCreate ["RscFrame",1615]; 
     respawnMapFrame1 ctrlSetPosition [0.0307813 * safezoneW + safezoneX,0.247 * safezoneH + safezoneY,0.268125 * safezoneW,0.396 * safezoneH]; 
     respawnMapFrame1 ctrlSetFade 1; 
     respawnMapFrame1 ctrlAddEventHandler ["Destroy",{ 
      params ["_control", "_exitCode"]; 
      onMapSingleClick ""; 
     }]; 
     respawnMapFrame1 ctrlCommit 0; 
      
     respawnMapBG = pvtMenu ctrlCreate ["RscPicture",1616]; 
     respawnMapBG ctrlSetPosition [0.0307813 * safezoneW + safezoneX,0.247 * safezoneH + safezoneY,0.268125 * safezoneW,0.396 * safezoneH]; 
     respawnMapBG ctrlSetTextColor [0,0,0,0.75]; 
     respawnMapBG ctrlSetText "#(argb,8,8,3)color(1,1,1,1)"; 
     respawnMapBG ctrlSetFade 1; 
     respawnMapBG ctrlCommit 0; 
 
     respawnMapFrame2 = pvtMenu ctrlCreate ["RscFrame",1617]; 
     respawnMapFrame2 ctrlSetPosition [0.0359375 * safezoneW + safezoneX,0.258 * safezoneH + safezoneY,0.257813 * safezoneW,0.319 * safezoneH]; 
     respawnMapFrame2 ctrlSetFade 1; 
     respawnMapFrame2 ctrlCommit 0; 
 
     respawnMakerMap = pvtMenu ctrlCreate ['RscMapControl',9999];  
     respawnMakerMap ctrlSetPosition [0.0359375 * safezoneW + safezoneX,0.258 * safezoneH + safezoneY,0.257813 * safezoneW,0.319 * safezoneH]; 
     respawnMakerMap ctrlSetFade 1; 
     respawnMakerMap ctrlCommit 0; 
 
     makeRespawnWestButton = pvtMenu ctrlCreate ["RscButtonMenu",2500]; 
     makeRespawnWestButton ctrlSetPosition [0.0359375 * safezoneW + safezoneX,0.588 * safezoneH + safezoneY,0.0567187 * safezoneW,0.044 * safezoneH]; 
     makeRespawnWestButton ctrlSetStructuredText parseText "<t size='0.5'>&#160;</t><br/><t align='center'>BLUFOR</t>"; 
     makeRespawnWestButton ctrlSetFont "PuristaSemiBold"; 
     makeRespawnWestButton ctrlSetBackgroundColor [0,0.3,0.6,0.75]; 
     makeRespawnWestButton ctrlAddEventHandler ["ButtonClick",{ 
      if(isNil "MAZ_newRespawnMarker") then { 
       systemChat "No respawn position selected!"; 
      } else { 
       [west] call MAZ_fnc_respawnCreate; 
      }; 
     }]; 
     makeRespawnWestButton ctrlSetFade 1; 
     makeRespawnWestButton ctrlCommit 0; 
 
     makeRespawnEastButton = pvtMenu ctrlCreate ["RscButtonMenu",2501]; 
     makeRespawnEastButton ctrlSetPosition [0.102969 * safezoneW + safezoneX,0.588 * safezoneH + safezoneY,0.0567187 * safezoneW,0.044 * safezoneH]; 
     makeRespawnEastButton ctrlSetStructuredText parseText "<t size='0.5'>&#160;</t><br/><t align='center'>OPFOR</t>"; 
     makeRespawnEastButton ctrlSetFont "PuristaSemiBold"; 
     makeRespawnEastButton ctrlSetBackgroundColor [0.5,0,0,0.75]; 
     makeRespawnEastButton ctrlAddEventHandler ["ButtonClick",{ 
      if(isNil "MAZ_newRespawnMarker") then { 
       systemChat "No respawn position selected!"; 
      } else { 
       [east] call MAZ_fnc_respawnCreate; 
      }; 
     }]; 
     makeRespawnEastButton ctrlSetFade 1; 
     makeRespawnEastButton ctrlCommit 0; 
 
     makeRespawnIndepButton = pvtMenu ctrlCreate ["RscButtonMenu",2502]; 
     makeRespawnIndepButton ctrlSetPosition [0.17 * safezoneW + safezoneX,0.588 * safezoneH + safezoneY,0.0567187 * safezoneW,0.044 * safezoneH]; 
     makeRespawnIndepButton ctrlSetStructuredText parseText "<t size='0.5'>&#160;</t><br/><t align='center'>INDEP</t>"; 
     makeRespawnIndepButton ctrlSetFont "PuristaSemiBold"; 
     makeRespawnIndepButton ctrlSetBackgroundColor [0,0.5,0,0.75]; 
     makeRespawnIndepButton ctrlAddEventHandler ["ButtonClick",{ 
      if(isNil "MAZ_newRespawnMarker") then { 
       systemChat "No respawn position selected!"; 
      } else { 
       [independent] call MAZ_fnc_respawnCreate; 
      }; 
     }]; 
     makeRespawnIndepButton ctrlSetFade 1; 
     makeRespawnIndepButton ctrlCommit 0; 
 
     makeRespawnCivButton = pvtMenu ctrlCreate ["RscButtonMenu",2503]; 
     makeRespawnCivButton ctrlSetPosition [0.237031 * safezoneW + safezoneX,0.588 * safezoneH + safezoneY,0.0567187 * safezoneW,0.044 * safezoneH]; 
     makeRespawnCivButton ctrlSetStructuredText parseText "<t size='0.5'>&#160;</t><br/><t align='center'>CIVILIAN</t>"; 
     makeRespawnCivButton ctrlSetFont "PuristaSemiBold"; 
     makeRespawnCivButton ctrlSetBackgroundColor  [0.4,0,0.5,0.75]; 
     makeRespawnCivButton ctrlAddEventHandler ["ButtonClick",{ 
      if(isNil "MAZ_newRespawnMarker") then { 
       systemChat "No respawn position selected!"; 
      } else { 
       [civilian] call MAZ_fnc_respawnCreate; 
      }; 
     }]; 
     makeRespawnCivButton ctrlSetFade 1; 
     makeRespawnCivButton ctrlCommit 0; 
 
     removeRespawnFrame1 = pvtMenu ctrlCreate ["RscFrame",1618]; 
     removeRespawnFrame1 ctrlSetPosition [0.0720312 * safezoneW + safezoneX,0.654 * safezoneH + safezoneY,0.201094 * safezoneW,0.231 * safezoneH]; 
     removeRespawnFrame1 ctrlSetFade 1; 
     removeRespawnFrame1 ctrlCommit 0; 
     removeRespawnBG = pvtMenu ctrlCreate ["RscPicture",1619]; 
     removeRespawnBG ctrlSetPosition [0.0720312 * safezoneW + safezoneX,0.654 * safezoneH + safezoneY,0.201094 * safezoneW,0.231 * safezoneH]; 
     removeRespawnBG ctrlSetTextColor [0,0,0,0.75]; 
     removeRespawnBG ctrlSetText "#(argb,8,8,3)color(1,1,1,1)"; 
     removeRespawnBG ctrlSetFade 1; 
     removeRespawnBG ctrlCommit 0; 
 
     removeRespawnListBox = pvtMenu ctrlCreate ["RscListBox",1505]; 
     removeRespawnListBox ctrlSetPosition [0.0771875 * safezoneW + safezoneX,0.665 * safezoneH + safezoneY,0.190781 * safezoneW,0.176 * safezoneH]; 
     removeRespawnListBox ctrlSetFade 1; 
     private _existingRespawnMarkersArray = []; 
     { 
      private _index = removeRespawnListBox lbAdd format ["Side: %1  ID: %2", _x select 0, _x select 1]; 
      private _dataArray = [str (_x select 0),_x select 1,_x select 2]; 
      removeRespawnListBox lbSetData [_index,str _dataArray]; 
      removeRespawnListBox ctrlCommit 0; 
      if(count _respawnsArray != 0) then { 
       MAZ_newRespawnMarker = createMarkerLocal [format ['MAZ_existingRespawn_%1',_forEachIndex],_x select 2]; 
       (format ['MAZ_existingRespawn_%1',_forEachIndex]) setMarkerTypeLocal 'respawn_inf'; 
       private _respawnSide = _x select 0; 
       private _markerColor = "ColorOrange"; 
       switch (_respawnSide) do { 
        case west: {_markerColor = "ColorWEST";}; 
        case east: {_markerColor = "ColorEAST";}; 
        case independent: {_markerColor = "ColorGUER";}; 
        case civilian: {_markerColor = "ColorCIV";}; 
       }; 
       (format ['MAZ_existingRespawn_%1',_forEachIndex]) setMarkerColorLocal _markerColor; 
       (format ['MAZ_existingRespawn_%1',_forEachIndex]) setMarkerTextLocal format ['Existing Respawn Position [%1]',_x select 1]; 
       _existingRespawnMarkersArray pushBack (format ['MAZ_existingRespawn_%1',_forEachIndex]); 
       missionNamespace setVariable ['existingRespawns_MAZ',_existingRespawnMarkersArray,true]; 
      }; 
     } forEach _respawnsArray; 
 
     removeRespawnListBox ctrlAddEventHandler ["LBSelChanged",{ 
      params ["_control", "_selectedIndex"]; 
      private _spawnData = parseSimpleArray (_control lbData _selectedIndex); 
      (uiNamespace getVariable 'respawnMakerMap') ctrlMapAnimAdd [1,0.1,player]; 
      ctrlMapAnimCommit (uiNamespace getVariable 'respawnMakerMap'); 
     }]; 
     removeRespawnListBox ctrlCommit 0; 
 
     removeRespawnButton = pvtMenu ctrlCreate ["RscButtonMenu",2504]; 
     removeRespawnButton ctrlSetPosition [0.0771875 * safezoneW + safezoneX,0.852 * safezoneH + safezoneY,0.190781 * safezoneW,0.022 * safezoneH]; 
     removeRespawnButton ctrlSetStructuredText parseText "<t align='center'>Remove Respawn</t>"; 
     removeRespawnButton ctrlSetFont "PuristaSemiBold"; 
     removeRespawnButton ctrlSetBackgroundColor [0,0.3,0.6,0.75]; 
     removeRespawnButton ctrlAddEventHandler ["ButtonClick",{ 
      private _listBox = uiNamespace getVariable 'removeRespawnListBox'; 
      private _index = lbCurSel _listBox; 
      private _spawnData = parseSimpleArray (_listBox lbData _index); 
      private _spawnSide = toLower (_spawnData select 0); 
       
      switch (_spawnSide) do { 
       case "west": {_spawnSide = west;}; 
       case "east": {_spawnSide = east;}; 
       case "independent": {_spawnSide = independent;}; 
       case "civilian": {_spawnSide = civilian;}; 
      }; 
       
      [_spawnSide,(_spawnData select 1)] call BIS_fnc_removeRespawnPosition; 
      respawnsCreated_MAZ deleteAt _index; 
      publicVariable 'respawnsCreated_MAZ'; 
       
      { 
       deleteMarkerLocal _x; 
      } forEach existingRespawns_MAZ; 
      lbClear (uiNamespace getVariable 'removeRespawnListBox'); 
      private _existingRespawnMarkersArray = []; 
      { 
       private _listBox = uiNamespace getVariable 'removeRespawnListBox'; 
       private _index = _listBox lbAdd format ["Side: %1  ID: %2", _x select 0, _x select 1]; 
       private _dataArray = [str (_x select 0),_x select 1,_x select 2]; 
       _listBox lbSetData [_index,str _dataArray]; 
       _listBox ctrlCommit 0; 
       if(!(count respawnsCreated_MAZ == 0)) then { 
        MAZ_newRespawnMarker = createMarkerLocal [format ['MAZ_existingRespawn_%1',_forEachIndex],_x select 2]; 
        (format ['MAZ_existingRespawn_%1',_forEachIndex]) setMarkerTypeLocal 'respawn_inf'; 
        private _respawnSide = _x select 0; 
        private _markerColor = "ColorOrange"; 
        switch (_respawnSide) do { 
         case west: {_markerColor = "ColorWEST";}; 
         case east: {_markerColor = "ColorEAST";}; 
         case independent: {_markerColor = "ColorGUER";}; 
         case civilian: {_markerColor = "ColorCIV";}; 
        }; 
        (format ['MAZ_existingRespawn_%1',_forEachIndex]) setMarkerColorLocal _markerColor; 
        (format ['MAZ_existingRespawn_%1',_forEachIndex]) setMarkerTextLocal format ['Existing Respawn Position [%1]',_x select 1]; 
        _existingRespawnMarkersArray pushBack (format ['MAZ_existingRespawn_%1',_forEachIndex]); 
        missionNamespace setVariable ['existingRespawns_MAZ',_existingRespawnMarkersArray,true]; 
       }; 
 
      } forEach respawnsCreated_MAZ; 
     }]; 
     removeRespawnButton ctrlSetFade 1; 
     removeRespawnButton ctrlCommit 0; 
 
 
     [] spawn { 
      respawnMapFrame1 ctrlSetFade 0; 
      respawnMapFrame2 ctrlSetFade 0; 
      respawnMapBG ctrlSetFade 0; 
      respawnMakerMap ctrlSetFade 0; 
      makeRespawnWestButton ctrlSetFade 0; 
      makeRespawnEastButton ctrlSetFade 0; 
      makeRespawnIndepButton ctrlSetFade 0; 
      makeRespawnCivButton ctrlSetFade 0; 
      removeRespawnFrame1 ctrlSetFade 0; 
      removeRespawnBG ctrlSetFade 0; 
      removeRespawnListBox ctrlSetFade 0; 
      removeRespawnButton ctrlSetFade 0; 
 
      respawnMapFrame1 ctrlCommit 0.5; 
      respawnMapFrame2 ctrlCommit 0.5; 
      respawnMapBG ctrlCommit 0.5; 
      respawnMakerMap ctrlCommit 0.5; 
      makeRespawnWestButton ctrlCommit 0.5; 
      makeRespawnEastButton ctrlCommit 0.5; 
      makeRespawnIndepButton ctrlCommit 0.5; 
      makeRespawnCivButton ctrlCommit 0.5; 
      removeRespawnFrame1 ctrlCommit 0.5; 
      removeRespawnBG ctrlCommit 0.5; 
      removeRespawnListBox ctrlCommit 0.5; 
      removeRespawnButton ctrlCommit 0.5; 
 
     }; 
    }; 
    onMapSingleClick { 
     if(isNil "MAZ_newRespawnMarker") then { 
      MAZ_newRespawnMarker = createMarkerLocal ['MAZ_newRespawnMark',_pos]; 
      'MAZ_newRespawnMark' setMarkerTypeLocal 'respawn_inf'; 
      'MAZ_newRespawnMark' setMarkerColorLocal 'ColorOrange'; 
      'MAZ_newRespawnMark' setMarkerTextLocal 'Proposed Respawn Position'; 
     } else { 
      MAZ_newRespawnMarker setMarkerPosLocal _pos; 
     }; 
    }; 
   }; 
 
   MAZ_fnc_respawnCreate = { 
    params ["_sideOfRespawn"]; 
    private _newRespawn = [_sideOfRespawn,(getMarkerPos "MAZ_newRespawnMark")] call BIS_fnc_addRespawnPosition; 
    _newRespawn pushBack (getMarkerPos "MAZ_newRespawnMark"); 
    respawnsCreated_MAZ pushBack _newRespawn; 
    publicVariable "respawnsCreated_MAZ"; 
    deleteMarkerLocal "MAZ_newRespawnMark"; 
    MAZ_newRespawnMarker = nil; 
    { 
     deleteMarkerLocal _x; 
    } forEach existingRespawns_MAZ; 
    lbClear (uiNamespace getVariable 'removeRespawnListBox'); 
    private _existingRespawnMarkersArray = []; 
    { 
     private _listBox = uiNamespace getVariable 'removeRespawnListBox'; 
     private _index = _listBox lbAdd format ["Side: %1  ID: %2", _x select 0, _x select 1]; 
     private _dataArray = [str (_x select 0),_x select 1,_x select 2]; 
     _listBox lbSetData [_index,str _dataArray]; 
     _listBox ctrlCommit 0; 
     if(!(count respawnsCreated_MAZ == 0)) then { 
      MAZ_newRespawnMarker = createMarkerLocal [format ['MAZ_existingRespawn_%1',_forEachIndex],_x select 2]; 
      (format ['MAZ_existingRespawn_%1',_forEachIndex]) setMarkerTypeLocal 'respawn_inf'; 
      private _respawnSide = _x select 0; 
      private _markerColor = "ColorOrange"; 
      switch (_respawnSide) do { 
       case west: {_markerColor = "ColorWEST";}; 
       case east: {_markerColor = "ColorEAST";}; 
       case independent: {_markerColor = "ColorGUER";}; 
       case civilian: {_markerColor = "ColorCIV";}; 
      }; 
      (format ['MAZ_existingRespawn_%1',_forEachIndex]) setMarkerColorLocal _markerColor; 
      (format ['MAZ_existingRespawn_%1',_forEachIndex]) setMarkerTextLocal format ['Existing Respawn Position [%1]',_x select 1]; 
      _existingRespawnMarkersArray pushBack (format ['MAZ_existingRespawn_%1',_forEachIndex]); 
      missionNamespace setVariable ['existingRespawns_MAZ',_existingRespawnMarkersArray,true]; 
     }; 
    } forEach respawnsCreated_MAZ; 
    uiNamespace getVariable 'pvtMenu' closeDisplay 0; 
   }; 
 
   MAZ_fnc_noMarkers = { 
    { 
     deleteMarker _x; 
    }forEach allMapMarkers; 
    systemChat "[ZEUS] - All map markers were deleted."; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_stealKit = { 
    comment "Remove all items and give items of cursorTarget"; 
    private _tgt = cursorTarget; 
    if(_tgt isKindOf "Man") then { 
     player setUnitLoadout (getUnitLoadout _tgt); 
    } else { 
     systemChat "[ZEUS] - Invalid Target"; 
     playSound 'addItemFailed'; 
    }; 
   }; 
 
   MAZ_fnc_giveZeus = { 
    playSound "addItemFailed"; 
    systemChat "[ZEUS] - Disabled for Operational Security."; 
   }; 
 
   MAZ_fnc_killServerConfirm = { 
    with uiNameSpace do { 
     frame5 = pvtMenu ctrlCreate ["RscFrame", -1]; 
     frame5 ctrlSetPosition [0.226719 * safezoneW + safezoneX,0.379 * safezoneH + safezoneY,0.0721875 * safezoneW,0.132 * safezoneH]; 
     frame5 ctrlSetFade 1; 
     frame5 ctrlCommit 0; 
     frame5 ctrlSetFade 0; 
     frame5 ctrlCommit 1; 
 
     backgroundKill = pvtMenu ctrlCreate ["RscPicture", -1]; 
     backgroundKill ctrlSetText "#(argb,8,8,3)color(0,0,0,0.6)"; 
     backgroundKill ctrlSetPosition [0.226719 * safezoneW + safezoneX,0.379 * safezoneH + safezoneY,0.0721875 * safezoneW,0.132 * safezoneH]; 
     backgroundKill ctrlSetFade 1; 
     backgroundKill ctrlCommit 0; 
     backgroundKill ctrlSetFade 0; 
     backgroundKill ctrlCommit 1; 
 
     confirmText = pvtMenu ctrlCreate ["RscStructuredText",-1]; 
     confirmText ctrlSetStructuredText parseText "<t size='0.1'>&#160;</t><br/><t size='1.25' align='center'>Are you sure?</t>"; 
     confirmText ctrlSetTextColor [1,1,1,1]; 
     confirmText ctrlSetPosition [0.226719 * safezoneW + safezoneX,0.379 * safezoneH + safezoneY,0.0721875 * safezoneW,0.033 * safezoneH]; 
     confirmText ctrlSetBackgroundColor [0.6,0,0,0.75]; 
     confirmText ctrlSetFade 1; 
     confirmText ctrlCommit 0; 
     confirmText ctrlSetFade 0; 
     confirmText ctrlCommit 1; 
 
     confirmKillBut = pvtMenu ctrlCreate ["RscButtonMenu",-1]; 
     confirmKillBut ctrlSetPosition [0.231875 * safezoneW + safezoneX,0.423 * safezoneH + safezoneY,0.061875 * safezoneW,0.033 * safezoneH]; 
     confirmKillBut ctrlSetStructuredText parseText "<t size='0.25'>&#160;</t><br/><t align='center'>Yes</t>"; 
     confirmKillBut ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_destroyConfirmControls; 
      [] spawn { 
       _dontKick = name player; 
       { 
        if(!((name _x) == _dontKick)) then { 
         [[], { 
          [] spawn MAZ_fnc_killServer; 
         }] remoteExec ['spawn',_x,true]; 
        }; 
       } forEach allPlayers; 
       waitUntil {(count allPlayers) == 1}; 
       [] spawn MAZ_fnc_killServer; 
      }; 
     }]; 
     confirmKillBut ctrlSetFont "PuristaSemiBold"; 
     confirmKillBut ctrlSetFade 1; 
     confirmKillBut ctrlCommit 0; 
     confirmKillBut ctrlSetFade 0; 
     confirmKillBut ctrlCommit 1; 
 
     unconfirmKillBut = pvtMenu ctrlCreate ["RscButtonMenu",-1]; 
     unconfirmKillBut ctrlSetPosition [0.231875 * safezoneW + safezoneX,0.467 * safezoneH + safezoneY,0.061875 * safezoneW,0.033 * safezoneH]; 
     unconfirmKillBut ctrlSetStructuredText parseText "<t size='0.25'>&#160;</t><br/><t align='center'>No</t>"; 
     unconfirmKillBut ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_destroyConfirmControls; 
     }]; 
     unconfirmKillBut ctrlSetFont "PuristaSemiBold"; 
     unconfirmKillBut ctrlSetFade 1; 
     unconfirmKillBut ctrlCommit 0; 
     unconfirmKillBut ctrlSetFade 0; 
     unconfirmKillBut ctrlCommit 1; 
    }; 
   }; 
 
   MAZ_fnc_killServer = { 
    onEachFrame {  
     _displays = allDisplays;  
     _indexMission = _displays find (findDisplay 46);  
     _displays = _displays select [_indexMission,count(_displays)];  
     comment "reverse _displays";  
     {_x closeDisplay 2} forEach _displays;   
 
     onEachFrame {  
      (findDisplay 50) closeDisplay 2;  
      (findDisplay 70) closeDisplay 2;  
     };  
    };  
   }; 
 
   MAZ_fnc_earplugsPvt = { 
    private _isEarplugsIn = player getVariable ['isEarplugsIn',false]; 
    if(_isEarplugsIn) then { 
     1 fadeSound 1; 
     player setVariable ['isEarplugsIn',false]; 
     [] call MAZ_fnc_deleteEarplugIcon; 
    } else { 
     1 fadeSound 0.1; 
     player setVariable ['isEarplugsIn',true]; 
     [] call MAZ_fnc_createEarplugIcon; 
    }; 
   }; 
 
   MAZ_fnc_createEarplugIcon = { 
    with uiNamespace do { 
     _display = findDisplay 46; 
 
     earplugsIcon = _display ctrlCreate ["RscPicture",-1]; 
     earplugsIcon ctrlSetText "a3\ui_f\data\igui\rscingameui\rscdisplaychannel\mutevon_crossed_ca.paa"; 
     earplugsIcon ctrlSetTextColor [1,1,1,0.7]; 
     earplugsIcon ctrlSetPosition [0.00499997 * safezoneW + safezoneX,0.137 * safezoneH + safezoneY,0.0257812 * safezoneW,0.044 * safezoneH]; 
     earplugsIcon ctrlCommit 0; 
    }; 
   }; 
 
   MAZ_fnc_deleteEarplugIcon = { 
    with uiNamespace do { 
     ctrlDelete earplugsIcon; 
    }; 
   }; 
 
   MAZ_fnc_removeMines = { 
    { 
     deleteVehicle _x; 
    }forEach allMines; 
    systemChat "[ZEUS] - All mines were deleted."; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_toggleFly = { 
    private _isFly = player getVariable ["isFlyEnabled",false]; 
    if (_isFly) then { 
     (findDisplay 46) displayRemoveEventHandler ["KeyDown",flyKeyBind_MAZ]; 
     jumpKeyBind_MAZ = (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call MAZ_fnc_doJump;"]; 
     player setVariable ["isFlyEnabled",false]; 
     systemChat "Fly mode off"; 
    } else { 
     flyKeyBind_MAZ = (findDisplay 46) displayAddEventHandler ["KeyDown", "if(_this select 1 == 57)then { 
      [] spawn MAZ_fnc_fly; 
     }"]; 
     (findDisplay 46) displayRemoveEventHandler ["KeyDown",jumpKeyBind_MAZ]; 
     player setVariable ["isFlyEnabled",true]; 
     systemChat "Fly mode on"; 
    }; 
   }; 
 
   MAZ_fnc_fly = { 
    player setVelocity [(velocity player select 0),(velocity player select 1),4]; 
   }; 
 
   MAZ_fnc_finnByeBye = { 
    finnName = name player; 
    [finnName, { 
     finnName = _this; 
     finnName spawn MAZ_fnc_finByeByeExec; 
    }] remoteExec ['spawn',0]; 
     
   }; 
 
   MAZ_fnc_finByeByeExec = { 
    if (!hasInterface) exitWith {};  
    uiNamespace setVariable ["finnBye",_this];  
    with uiNamespace do   
    {  
     comment 'close arsenal';  
     if (!isNull ((findDisplay -1) displayCtrl 44046)) then {  
      while {(!isNull ((findDisplay -1) displayCtrl 44046))} do {  
       (findDisplay -1) closeDisplay 0;  
      };  
     };  
     waitUntil {(isNull ((findDisplay -1) displayCtrl 44046))};  
     if ( isNull (findDisplay 49)) then {  
      if (isNull (findDisplay 312)) then {  
       _RscDisplayHUD = (findDisplay 46) createDisplay "RscDisplayEmpty";  
       showchat true;  
       _RscDisplayHUD displayAddEventHandler ["MouseMoving",  
       {  
        params ["_display", "_xPos", "_yPos"];  
        serverCommand format ["#Vote Kick %1", uiNamespace getVariable ["finnBye", ""]];  
        with uiNamespace do   
        {  
         _display closeDisplay 0;  
        };  
       }];  
      } else {  
       _RscDisplayHUD = (findDisplay 312) createDisplay "RscDisplayEmpty";  
       showchat true;  
       _RscDisplayHUD displayAddEventHandler ["MouseMoving",  
       {  
        params ["_display", "_xPos", "_yPos"];  
        serverCommand format ["#Vote Kick %1", uiNamespace getVariable ["finnBye", ""]];  
        with uiNamespace do   
        {  
         _display closeDisplay 0;  
        };  
       }];  
      };  
     } else {  
      _RscDisplayHUD = (findDisplay 49) createDisplay "RscDisplayEmpty";  
      showchat true;  
      _RscDisplayHUD displayAddEventHandler ["MouseMoving",  
      {  
       params ["_display", "_xPos", "_yPos"];  
       serverCommand format ["#Vote Kick %1", uiNamespace getVariable ["finnBye", ""]];  
       with uiNamespace do   
       {  
       _display closeDisplay 0;  
       };  
      }];  
     };  
    };  
   }; 
 
  comment "Cool Vehicles"; 
   MAZ_fnc_getAllTextureTypes = { 
    params ["_veh"]; 
    private _objectType = ""; 
    if(typeName _veh == "STRING") then { 
     _objectType = _veh; 
    }; 
    if(typeName _veh == "OBJECT") then { 
     _objectType = typeOf _veh; 
    }; 
    _return = []; 
    { 
     vehicleEditDisplayName = getText (_x >> "displayName"); 
     _textures = getArray (_x >> "textures"); 
     _return pushBack [vehicleEditDisplayName,_textures]; 
    }forEach configProperties [configFile >> "CfgVehicles" >> _objectType >> "textureSources","isClass _x",true]; 
    _return 
   }; 
 
   MAZ_fnc_changeAttributesMenu = { 
    params ["_veh"]; 
    private _displayText = getText (configFile >> "CfgVehicles" >> typeOf _veh >> "displayName"); 
    _veh setVariable ['oldTextures',getObjectTextures _veh,true]; 
    uiNamespace setVariable ['vehicleEditing',_veh]; 
    uiNamespace setVariable ['vehicleName',_displayText]; 
    with uiNamespace do { 
     createDialog "RscDisplayEmpty"; 
     showchat true; 
     vehicleEditDisplay = findDisplay -1; 
 
 
     vehicleEditDisplay displayAddEventHandler ["unload", { 
      private _editingVehicle = vehicle player; 
      private _oldTextures = _editingVehicle getVariable 'oldTextures'; 
      if(!isNil "_oldTextures") then { 
       { 
        [_editingVehicle,[_forEachIndex,_x]] remoteExec ['setObjectTexture',0,_editingVehicle]; 
       }forEach _oldTextures; 
       systemChat "[ZEUS] - Vehicle changes NOT applied."; 
      }; 
     }]; 
 
     vehicleEditLabel = vehicleEditDisplay ctrlCreate ["RscStructuredText", 1100]; 
     vehicleEditLabel ctrlSetStructuredText parseText format ["Editing Vehicle (%1)",vehicleName]; 
     vehicleEditLabel ctrlSetPosition [0.396875 * safezoneW + safezoneX, 0.32 * safezoneH + safezoneY, 0.20625 * safezoneW, 0.022 * safezoneH]; 
     vehicleEditLabel ctrlSetTextColor [1,1,1,1]; 
     vehicleEditLabel ctrlSetBackgroundColor [0.1,0.5,0,1]; 
     vehicleEditLabel ctrlCommit 0; 
 
     vehicleEditBackground = vehicleEditDisplay ctrlCreate ["RscPicture", 1200]; 
     vehicleEditBackground ctrlSetText "#(argb,8,8,3)color(0,0,0,0.6)"; 
     vehicleEditBackground ctrlSetPosition [0.396875 * safezoneW + safezoneX, 0.346 * safezoneH + safezoneY, 0.20625 * safezoneW, 0.363 * safezoneH]; 
     vehicleEditBackground ctrlCommit 0; 
 
     vehicleEditFrame = vehicleEditDisplay ctrlCreate ["RscFrame", 1800]; 
     vehicleEditFrame ctrlSetPosition [0.396875 * safezoneW + safezoneX, 0.346 * safezoneH + safezoneY, 0.20625 * safezoneW, 0.363 * safezoneH]; 
     vehicleEditFrame ctrlCommit 0; 
 
     vehicleEditTextures = vehicleEditDisplay ctrlCreate ["RscFrame", 1801]; 
     vehicleEditTextures ctrlSetPosition [0.402031 * safezoneW + safezoneX, 0.357 * safezoneH + safezoneY, 0.195937 * safezoneW, 0.132 * safezoneH]; 
     vehicleEditTextures ctrlCommit 0; 
 
     vehicleEditTexturesList = vehicleEditDisplay ctrlCreate ["RscListbox", 1500]; 
     vehicleEditTexturesList ctrlSetPosition [0.402031 * safezoneW + safezoneX, 0.357 * safezoneH + safezoneY, 0.195937 * safezoneW, 0.132 * safezoneH]; 
     vehicleEditTexturesList ctrlAddEventHandler ["LBSelChanged", { 
      params ["_control", "_selectedIndex"]; 
      [_control,_selectedIndex,uiNamespace getVariable 'vehicleEditing'] call MAZ_fnc_editTextureClick; 
     }]; 
     vehicleEditTexturesList ctrlCommit 0; 
 
     vehicleEditAttributes = vehicleEditDisplay ctrlCreate ["RscFrame", 1802]; 
     vehicleEditAttributes ctrlSetPosition [0.402031 * safezoneW + safezoneX, 0.5 * safezoneH + safezoneY, 0.195937 * safezoneW, 0.132 * safezoneH]; 
     vehicleEditAttributes ctrlCommit 0; 
 
     vehicleEditAttributesList = vehicleEditDisplay ctrlCreate ["RscListbox", 1501]; 
     vehicleEditAttributesList ctrlSetPosition [0.402031 * safezoneW + safezoneX, 0.5 * safezoneH + safezoneY, 0.195937 * safezoneW, 0.132 * safezoneH]; 
     vehicleEditAttributesList ctrlAddEventHandler ["LBDblClick", { 
      params ["_control", "_selectedIndex"]; 
      [_control,_selectedIndex] call MAZ_fnc_editAtribsDblClick; 
     }]; 
     vehicleEditAttributesList ctrlCommit 0; 
 
     vehicleEditCancel = vehicleEditDisplay ctrlCreate ["RscButtonMenu", 2400]; 
     vehicleEditCancel ctrlSetStructuredText parseText "<t size='0.1'>&#160;</t><br/><t align='center'>Cancel</t>"; 
     vehicleEditCancel ctrlSetPosition [0.443281 * safezoneW + safezoneX, 0.654 * safezoneH + safezoneY, 0.04125 * safezoneW, 0.033 * safezoneH]; 
     vehicleEditCancel ctrlSetTextColor [0.8,0,0,1]; 
     vehicleEditCancel ctrlSetBackgroundColor [0,0,0,0.8]; 
     vehicleEditCancel ctrlSetFont "PuristaSemiBold"; 
     vehicleEditCancel ctrlAddEventHandler ["ButtonClick",{ 
      (uiNamespace getVariable 'vehicleEditDisplay') closeDisplay 0; 
      private _veh = uiNamespace getVariable 'vehicleEditing'; 
      private _oldTextures = _veh getVariable 'oldTextures'; 
      { 
       [_veh,[_forEachIndex,_x]] remoteExec ['setObjectTexture',0,_veh]; 
      }forEach _oldTextures; 
     }]; 
     vehicleEditCancel ctrlCommit 0; 
 
     vehicleEditApply = vehicleEditDisplay ctrlCreate ["RscButtonMenu", 2401]; 
     vehicleEditApply ctrlSetStructuredText parseText "<t size='0.1'>&#160;</t><br/><t align='center'>Apply</t>"; 
     vehicleEditApply ctrlSetPosition [0.515469 * safezoneW + safezoneX, 0.654 * safezoneH + safezoneY, 0.04125 * safezoneW, 0.033 * safezoneH]; 
     vehicleEditApply ctrlSetTextColor [0,0.8,0,1]; 
     vehicleEditApply ctrlSetBackgroundColor [0,0,0,0.8]; 
     vehicleEditApply ctrlSetFont "PuristaSemiBold"; 
     vehicleEditApply ctrlAddEventHandler ["ButtonClick",{ 
      [ 
       uiNamespace getVariable 'vehicleEditTexturesList', 
       uiNamespace getVariable 'vehicleEditAttributesList', 
       uiNamespace getVariable 'vehicleEditing' 
      ] call MAZ_fnc_confirmVehEdit; 
     }]; 
     vehicleEditApply ctrlCommit 0; 
    }; 
    [uiNamespace getVariable 'vehicleEditTexturesList',_veh] call MAZ_fnc_populateVehicleTextures; 
    [uiNamespace getVariable 'vehicleEditAttributesList',_veh] call MAZ_fnc_populateVehicleAtribs; 
    systemChat "[ZEUS] - Vehicle editor opened."; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_populateVehicleTextures = { 
    params ["_listBox","_veh"]; 
    private _vehTextures = [_veh] call MAZ_fnc_getAllTextureTypes; 
    private _litleBirds = ["B_Heli_Light_01_F","B_Heli_Light_01_dynamicLoadout_F"]; 
    if(typeOf _veh in _litleBirds) then {_vehTextures = ["C_Heli_Light_01_civil_F"] call MAZ_fnc_getAllTextureTypes;}; 
    { 
     _listbox lbAdd (_x select 0); 
    } forEach _vehTextures; 
   }; 
 
   MAZ_fnc_populateVehicleAtribs = { 
    params ["_listBox","_veh"]; 
    private _objectOptions = [_veh] call BIS_fnc_getVehicleCustomization; 
    _objectOptions = _objectOptions select 1; 
    if(count _objectOptions == 0) exitWith {}; 
    for "_i" from 0 to (count _objectOptions -1) step 2 do { 
     private _lbIndex = _listBox lbAdd (_objectOptions select _i); 
     private _settingIndex = _i + 1; 
     private _atrib = (_objectOptions select _settingIndex); 
     private _string = str _atrib; 
     _listbox lbSetData [_lbIndex,_string]; 
     if(_atrib == 0) then { 
      _listBox lbSetColor [_lbIndex,[0.8,0,0,1]]; 
     } else { 
      _listBox lbSetColor [_lbIndex,[0,0.8,0,1]]; 
     }; 
    }; 
   }; 
 
   MAZ_fnc_editTextureClick = { 
    params ["_listBox","_index","_veh"]; 
    private _allVehTextures = [_veh] call MAZ_fnc_getAllTextureTypes; 
    private _litleBirds = ["B_Heli_Light_01_F","B_Heli_Light_01_dynamicLoadout_F"]; 
    if(typeOf _veh in _litleBirds) then {_allVehTextures = ["C_Heli_Light_01_civil_F"] call MAZ_fnc_getAllTextureTypes;}; 
    private _vehTexturesSelected = _allVehTextures select _index; 
    private _vehTextures = _vehTexturesSelected select 1; 
    { 
     _veh setObjectTexture [_forEachIndex,_x]; 
    } forEach _vehTextures; 
   }; 
 
   MAZ_fnc_editAtribsDblClick = { 
    params ["_listBox","_index"]; 
    private _data = _listBox lbData _index; 
    switch (_data) do { 
     case "0": { 
      _listBox lbSetData [_index,"1"]; 
      _listBox lbSetColor [_index,[0,0.8,0,1]]; 
     }; 
     case "1": { 
      _listBox lbSetData [_index,"0"]; 
      _listBox lbSetColor [_index,[0.8,0,0,1]]; 
     }; 
    }; 
   }; 
 
   MAZ_fnc_confirmVehEdit = { 
    params ["_textures","_atribs","_veh"]; 
    private _indexTextures = lbCurSel _textures; 
    if(_indexTextures == -1) exitWith {systemChat '[ZEUS] - Choose a texture!'; playSound 'addItemFailed';}; 
    private _allVehTextures = [_veh] call MAZ_fnc_getAllTextureTypes; 
    private _litleBirds = ["B_Heli_Light_01_F","B_Heli_Light_01_dynamicLoadout_F"]; 
    if(typeOf _veh in _litleBirds) then {_allVehTextures = ["C_Heli_Light_01_civil_F"] call MAZ_fnc_getAllTextureTypes;}; 
    private _vehTexturesSelected = _allVehTextures select _indexTextures; 
    private _vehTextures = _vehTexturesSelected select 1; 
 
    private _objectOptions = [_veh] call BIS_fnc_getVehicleCustomization; 
    _objectOptions = _objectOptions select 1; 
    if(count _objectOptions == 0) then {_objectOptions = []} else { 
     private _atribSettings = []; 
 
     for "_i" from 0 to ((count _objectOptions) / 2) do { 
      private _data = _atribs lbData _i; 
      _atribSettings pushBack (parseNumber _data); 
     }; 
 
     { 
      private _index = ((_forEachIndex * 2) + 1); 
      _objectOptions set [_index,_x]; 
     }forEach _atribSettings; 
    }; 
 
    [ 
     _veh, 
     false,  
     _objectOptions 
    ] call BIS_fnc_initVehicle;  
    { 
     [_veh,[_forEachIndex,_x]] remoteExec ['setObjectTexture',0,_veh]; 
    } forEach _vehTextures; 
 
    _veh setVariable ['oldTextures',nil,true]; 
    (uiNamespace getVariable 'vehicleEditDisplay') closeDisplay 0; 
    systemChat '[ZEUS] - Vehicle attributes applied!';  
    playSound 'addItemOk'; 
   }; 
 
  comment "Player Menu"; 
   MAZ_fnc_teleportTo = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
    private _unit = (allPlayers select _index); 
    if(vehicle player != player) then { 
     player allowDamage false; 
     moveOut player; 
     player setVelocity [0,0,0]; 
     player allowDamage true; 
    }; 
    if((vehicle _unit) == _unit) then { 
     player setPosATL [(getPosATL _unit select 0),(getPosATL _unit select 1),(getPosATL _unit select 2)]; 
    } else { 
     player moveInAny (vehicle _unit); 
    }; 
   }; 
 
   MAZ_fnc_teleportToMe = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
    private _unit = (allPlayers select _index); 
    if(vehicle _unit != _unit) then { 
     _unit allowDamage false; 
     moveOut _unit; 
     _unit setVelocity [0,0,0]; 
     _unit allowDamage true; 
    }; 
    if((vehicle player) == player) then { 
     _unit setPosATL [(getPosATL player select 0),(getPosATL player select 1),(getPosATL player select 2)]; 
    } else { 
     _unit moveInAny (vehicle player); 
    }; 
   }; 
 
   MAZ_fnc_removeGuns = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
    private _unit = (allPlayers select _index); 
    removeAllWeapons _unit; 
    systemChat "[ZEUS] - Unit's weapons were removed."; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_makeBrick = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
    private _unit = (allPlayers select _index); 
    _unit allowDamage false; 
    private _brick = "Land_Brick_01_F" createVehicle position _unit; 
    [_unit, true] remoteExec ["hideObject",0,true]; 
    _brick attachTo [_unit,[0,0,0.03]]; 
    systemChat "[ZEUS] - Unit is now a brick."; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_healPlayer = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
    private _unit = (allPlayers select _index); 
    _unit setDamage 0; 
    systemChat "[ZEUS] - Unit healed."; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_revivePlayer = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
    private _unit = (allPlayers select _index); 
    [[], { 
     if(isNil "noParamsMedical") then { 
      player setDamage 0; 
      ["#rev",1,player] call BIS_fnc_reviveOnState; 
     } else { 
      player setDamage 0; 
      player setUnconscious false; 
 
      player setVariable ['noParamsDowned',nil,true]; 
      player setVariable ["downedMessageSent",nil,true]; 
 
      [[player, "system"], { 
       params ["_revived","_reviver"]; 
       [0,_revived,_reviver] spawn (noParamsReviveAr select 2); 
      }] remoteExec ['spawn',0]; 
     }; 
    }] remoteExec ["spawn",_unit]; 
   }; 
 
   MAZ_fnc_removeFuel = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
    private _unit = (allPlayers select _index); 
    [[], { 
     vehicle player setFuel 0; 
    }] remoteExec ["spawn",driver (vehicle _unit)]; 
    systemChat "[ZEUS] - Unit's fuel was removed."; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_makePlayerBomb = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
    private _unit = (allPlayers select _index); 
    [[], { 
     [] spawn MAZ_fnc_bombExec; 
    }] remoteExec ["spawn",_unit]; 
    systemChat "[ZEUS] - Unit's is a bomb."; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_bombExec = { 
    private _timer = 30; 
    while{_timer >= 0} do { 
     [_timer] spawn MAZ_fnc_bombMsg; 
     playSound3D ["A3\ui_f\data\sound\CfgIngameUI\hintCollapse.wss", player, false, position player, 5, 1, 50]; 
     playSound3D ["A3\ui_f\data\sound\CfgIngameUI\hintCollapse.wss", player, false, position player, 5, 1, 50]; 
     playSound3D ["A3\ui_f\data\sound\CfgIngameUI\hintCollapse.wss", player, false, position player, 5, 1, 50]; 
     playSound3D ["A3\ui_f\data\sound\CfgIngameUI\hintCollapse.wss", player, false, position player, 5, 1, 50]; 
     playSound3D ["A3\ui_f\data\sound\CfgIngameUI\hintCollapse.wss", player, false, position player, 5, 1, 50]; 
     playSound3D ["A3\ui_f\data\sound\CfgIngameUI\hintCollapse.wss", player, false, position player, 5, 1, 50]; 
     playSound3D ["A3\ui_f\data\sound\CfgIngameUI\hintCollapse.wss", player, false, position player, 5, 1, 50]; 
     sleep 1; 
     _timer = _timer - 1; 
    }; 
    private _bigBomb = createVehicle ["ammo_Bomb_SDB",position player,[],0]; 
    _bigBomb attachTo [player,[0,0,0.2]]; 
    detach _bigBomb; 
   }; 
 
   MAZ_fnc_bombMsg = { 
    params ["_timer"]; 
    [format ["<t color='#FFFFFF' size='1.25'>%1 seconds until you go kaboom</t>",_timer],-1,-0.3,1,0,0] spawn BIS_fnc_dynamicText; 
   }; 
 
   MAZ_fnc_givePlayerMenu = { 
    if((getPlayerUID player) in usersWhoCanGive) then { 
     private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
     private _unit = (allPlayers select _index); 
     [[], { 
      if(isNil "pvtMenuBind_MAZ") then { 
       pvtMenuBind_MAZ = (findDisplay 46) displayAddEventHandler ["KeyDown", "if(_this select 1 == 83)then {[] spawn MAZ_fnc_pvtMenu;}"]; 
       pvtMenuBindZeus_MAZ = (findDisplay 312) displayAddEventHandler ["KeyDown", "if(_this select 1 == 83)then {[] spawn MAZ_fnc_pvtMenu;}"]; 
      }; 
      if(!isNil "earplugsBind_Comp_MAZ") then { 
       (findDisplay 46) displayRemoveEventHandler ["KeyDown",earplugsBind_Comp_MAZ]; 
      }; 
      if(!isNil "earplugs") then { 
       (findDisplay 46) displayRemoveEventHandler ["KeyDown",earplugs]; 
      }; 
      if(!isNil "holster") then { 
       (findDisplay 46) displayRemoveEventHandler ["KeyDown",holster]; 
      }; 
      if(isNil "earplugsBind_MAZ") then { 
       earplugsBind_MAZ = (findDisplay 46) displayAddEventHandler ["KeyDown", "if(_this select 1 == 207) then {[] spawn MAZ_fnc_earplugsPvt;}"]; 
      }; 
      if(isNil "holsterBind_MAZ" && isNil "holster") then { 
       holsterBind_MAZ = (findDisplay 46) displayAddEventHandler ["KeyDown", "if(_this select 1 == 35) then { 
        player action ['SWITCHWEAPON',player,player,-1]; 
        waitUntil {currentWeapon player == '' or {primaryWeapon player == '' && handgunWeapon player == ''}}; 
       }"]; 
      }; 
      if(isNil "jumpKeyBind_MAZ") then { 
       jumpKeyBind_MAZ = (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call MAZ_fnc_doJump;"]; 
      }; 
      if(isNil "respawnResetVars_pvt_MAZ") then { 
       respawnResetVars_pvt_MAZ = player addEventHandler ["Respawn",{ 
        player setVariable ["isGodded",false]; 
        player setVariable ["isInvis",false]; 
        player setVariable ["isNoStam",false]; 
       }]; 
      }; 
      titleText ["ZEUS Private Menu loaded","PLAIN",2,true,true]; 
      playSound "addItemOk"; 
     }] remoteExec ["spawn",_unit]; 
     systemChat format ["[ZEUS] - Private Menu Given to %1",name _unit]; 
     private _uid = getPlayerUID _unit; 
     usersWhoAreWhitelisted pushBackUnique _uid; 
     publicVariable "usersWhoAreWhitelisted"; 
     playSound "addItemOk"; 
    } else { 
     systemChat "[ZEUS] - No permission to give or revoke menu!"; 
     playSound "addItemFailed"; 
    }; 
   }; 
 
   MAZ_fnc_removeMenu = { 
    if((getPlayerUID player) in usersWhoCanGive) then { 
     private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
     private _unit = (allPlayers select _index); 
     [[], { 
      if(!isNil "pvtMenuBind_MAZ") then { 
       (findDisplay 46) displayRemoveEventHandler ["KeyDown",pvtMenuBind_MAZ]; 
      }; 
      if(!isNil "earplugsBind_MAZ") then { 
       (findDisplay 46) displayRemoveEventHandler ["KeyDown",earplugsBind_MAZ]; 
      }; 
      if(!isNil "holsterBind_MAZ") then { 
       (findDisplay 46) displayRemoveEventHandler ["KeyDown",holsterBind_MAZ]; 
      }; 
      if(!isNIl "jumpKeyBind_MAZ") then { 
       (findDisplay 46) displayRemoveEventHandler ["KeyDown",jumpKeyBind_MAZ]; 
      };  
      if(!isNil "respawnResetVars_pvt_MAZ") then { 
       player removeEventHandler ["Respawn",respawnResetVars_pvt_MAZ]; 
      }; 
      titleText ["ZEUS Private Menu removed","PLAIN",2,true,true]; 
      playSound "addItemFailed"; 
     }] remoteExec ["spawn",_unit]; 
     systemChat format ["[ZEUS] - Private Menu Taken from %1",name _unit]; 
     private _uid = getPlayerUID _unit; 
     private _index = usersWhoAreWhitelisted find _uid; 
     usersWhoAreWhitelisted deleteAt _index; 
     publicVariable "usersWhoAreWhitelisted"; 
     playSound "addItemOk"; 
    } else { 
     systemChat "[ZEUS] - No permission to give or revoke menu!"; 
     playSound "addItemFailed"; 
    }; 
   }; 
 
   MAZ_fnc_makeAdmin = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
    private _unit = (allPlayers select _index); 
    with uiNamespace do {pvtMenu closeDisplay 0;}; 
    [[name _unit], { 
     params ["_adminName"]; 
     _adminName spawn MAZ_fnc_makeAdminExec; 
    }] remoteExec ["spawn",-2]; 
    systemChat "[ZEUS] - Unit is now admin."; 
    playSound 'addItemOk'; 
   }; 
 
   MAZ_fnc_makeAdminExec = { 
    if (!hasInterface) exitWith {};  
    uiNamespace setVariable ["adminTarget",_this];  
    with uiNamespace do   
    {  
     comment 'close arsenal';  
     if (!isNull ((findDisplay -1) displayCtrl 44046)) then {  
      while {(!isNull ((findDisplay -1) displayCtrl 44046))} do {  
       (findDisplay -1) closeDisplay 0;  
      };  
     };  
     waitUntil {(isNull ((findDisplay -1) displayCtrl 44046))};  
     if ( isNull (findDisplay 49)) then {  
      if (isNull (findDisplay 312)) then {  
       _RscDisplayHUD = (findDisplay 46) createDisplay "RscDisplayEmpty";  
       showchat true;  
       _RscDisplayHUD displayAddEventHandler ["MouseMoving",  
       {  
        params ["_display", "_xPos", "_yPos"];  
        serverCommand format ["#Vote Admin %1", uiNamespace getVariable ["adminTarget", ""]];  
        with uiNamespace do   
        {  
         _display closeDisplay 0;  
        };  
       }];  
      } else {  
       _RscDisplayHUD = (findDisplay 312) createDisplay "RscDisplayEmpty";  
       showchat true;  
       _RscDisplayHUD displayAddEventHandler ["MouseMoving",  
       {  
        params ["_display", "_xPos", "_yPos"];  
        serverCommand format ["#Vote Admin %1", uiNamespace getVariable ["adminTarget", ""]];  
        with uiNamespace do   
        {  
         _display closeDisplay 0;  
        };  
       }];  
      };  
     } else {  
      _RscDisplayHUD = (findDisplay 49) createDisplay "RscDisplayEmpty";  
      showchat true;  
      _RscDisplayHUD displayAddEventHandler ["MouseMoving",  
      {  
       params ["_display", "_xPos", "_yPos"];  
       serverCommand format ["#Vote Admin %1", uiNamespace getVariable ["adminTarget", ""]];  
       with uiNamespace do   
       {  
       _display closeDisplay 0;  
       };  
      }];  
     };  
    };  
   }; 
 
   MAZ_fnc_yeetNibba = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
    private _unit = (allPlayers select _index); 
    private _nameUnit = name _unit; 
    removeAllWeapons _unit; 
    removeUniform _unit; 
    removeVest _unit; 
    removeBackpack _unit; 
    removeAllItems _unit; 
    removeHeadgear _unit; 
    _unit setPos [(getPos _unit select 0),(getPos _unit select 1),400]; 
    [[], { 
     hint format ["Take this as a warning, %1.", name player]; 
    }] remoteExec ["spawn",_unit]; 
   }; 
 
   MAZ_fnc_killNibba = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]); 
    private _unit = (allPlayers select _index); 
    _unit setDamage 1; 
   }; 
 
   MAZ_fnc_kickNibba = { 
    private _indexKicked = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]);  
    if(_indexKicked == -1) then { 
     systemChat "Error: No player selected."; 
    } else { 
     kickTarget = (allPlayers select _indexKicked);  
     [] spawn MAZ_fnc_kickExec; 
    };     
   }; 
 
   MAZ_fnc_kickNibbaExec = { 
    params ['_mode']; 
    switch (_mode) do { 
     case 0: { }; 
     case 1: { 
      usersWhoAreKicked pushBackUnique (getPlayerUID player); 
      publicVariable 'usersWhoAreKicked'; 
     }; 
    }; 
    onEachFrame {  
     _displays = allDisplays;  
     _indexMission = _displays find (findDisplay 46);  
     _displays = _displays select [_indexMission,count(_displays)];  
     reverse _displays;  
     {_x closeDisplay 2} forEach _displays;   
 
     onEachFrame {  
      (findDisplay 50) closeDisplay 2;  
      (findDisplay 70) closeDisplay 2;  
     };  
    };  
   }; 
 
   MAZ_fnc_sortUnits = { 
    params ["_lbIndex","_unit","_curatorList"]; 
    private _list = uinamespace getvariable ['pvtMenuPlayerList', displayNull]; 
    comment '_list lbSetData [_lbIndex,_unit]'; 
    private _veh = vehicle _unit; 
    if(_veh == _unit) then { 
     if(alive _unit) then { 
      private _side = toLower (str (side _unit)); 
      _list lbSetPicture [_lbIndex,"\A3\ui_f\data\Map\VehicleIcons\iconMan_ca.paa"]; 
      switch(_side) do { 
       case "west": {_list lbSetPictureColor [_lbIndex, [0,0.5,1,0.5]];}; 
       case "east": {_list lbSetPictureColor [_lbIndex, [1,0,0,0.5]];}; 
       case "independent": {_list lbSetPictureColor [_lbIndex, [0,1,0.5,0.5]];}; 
       case "guer": {_list lbSetPictureColor [_lbIndex, [0,1,0,0.5]];}; 
       case "civilian": {_list lbSetPictureColor [_lbIndex, [1,0,1,0.5]];}; 
       case "enemy": {_list lbSetPictureColor [_lbIndex, [0.976,0.412,0.055,0.5]];}; 
      }; 
      if(_unit in _curatorList) then { 
       _list lbSetPicture [_lbIndex,"\A3\ui_f_curator\data\CfgDiary\playerLogic_ca.paa"]; 
       _list lbSetColor [_lbIndex,[1,1,1,1]]; 
      }; 
     } else { 
      _list lbSetPicture [_lbIndex,"\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa"]; 
      _list lbSetPictureColor [_lbIndex,[0.8,0,0,1]]; 
     }; 
    } else { 
     if(alive _unit) then { 
      _list lbSetPicture [_lbIndex,getText (configfile >> "CfgVehicles" >> typeOf _veh >> "icon")]; 
      if ((_list lbPicture _lbIndex) == "") then { 
       _list lbSetPicture [_lbIndex,"A3\ui_f\data\map\markers\military\unknown_ca.paa"]; 
      }; 
      _side = toLower (str (side _unit)); 
      switch(_side) do { 
       case "west": {_list lbSetPictureColor [_lbIndex, [0,0.5,1,0.5]];}; 
       case "east": {_list lbSetPictureColor [_lbIndex, [1,0,0,0.5]];}; 
       case "independent": {_list lbSetPictureColor [_lbIndex, [0,1,0.5,0.5]];}; 
       case "guer": {_list lbSetPictureColor [_lbIndex, [0,1,0,0.5]];}; 
       case "civilian": {_list lbSetPictureColor [_lbIndex, [1,0,1,0.5]];}; 
       case "enemy": {_list lbSetPictureColor [_lbIndex, [0.976,0.412,0.055,0.5]];}; 
      }; 
     } else { 
      _list lbSetPicture [_lbIndex,"\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa"]; 
      _list lbSetPictureColor [_lbIndex,[0.8,0,0,1]]; 
     }; 
    }; 
     
    if(group _unit == group player) then { 
     _list lbSetColor [_lbIndex,[0,0.8,0,0.7]]; 
    }; 
    if(getPlayerUId _unit in usersWhoAreWhitelisted) then { 
     _list lbSetColor [_lbIndex,[1,0.35,0,1]]; 
    }; 
    if(_unit == player) then { 
     _list lbSetColor [_lbIndex,[0.5,0,0.6,1]]; 
    }; 
    private _scorePlyr = rating _unit; 
    if(_scorePlyr <= -2000 || str (side _unit) == "ENEMY") then { 
     _list lbSetPictureRight [_lbIndex, "\A3\ui_f\data\Map\Markers\Military\warning_ca.paa"]; 
     _list lbSetPictureRightColor [_lbIndex, [0.976,0.412,0.055,0.5]]; 
    }; 
    private _isMuted = _unit getVariable ["isMuted",false]; 
    if(_isMuted) then { 
     _list lbSetPicture [_lbIndex,"a3\ui_f\data\igui\rscingameui\rscdisplaychannel\mutevon_crossed_ca.paa"]; 
     _list lbSetPictureColor [_lbIndex,[0.8,0,0,1]]; 
    }; 
   }; 
 
   MAZ_fnc_updateList = { 
    params ["_displayID"]; 
    while{!(isNull _displayID)} do { 
     comment "Player Menu Update"; 
     private _list = uinamespace getvariable ['pvtMenuPlayerList', displayNull]; 
     lbClear _list; 
     private _allPlayers = allPlayers; 
     private _curatorList = []; 
     { 
      private _logicObj = getAssignedCuratorUnit _x; 
      _curatorList pushBack _logicObj; 
      _allPlayers pushBackUnique _logicObj; 
     } forEach allCurators; 
     { 
      private _name = name _x; 
      private _health = (1-(damage _x))*100; 
      _health = round _health; 
      private _lbIndex = _list lbAdd format ["%1 - %2/100",_name,_health]; 
      [_lbIndex,_x,_curatorList] call MAZ_fnc_sortUnits; 
     } forEach allPlayers; 
 
     comment "Determine maximum amount of players"; 
     private _maxPlayable = (playableSlotsNumber west) + (playableSlotsNumber east) + (playableSlotsNumber independent) + (playableSlotsNumber civilian) + (playableSlotsNumber sideLogic); 
 
     _list lbAdd format ["%1/%2 Players",(count allPlayers),_maxPlayable]; 
     _list lbAdd "  "; 
     _list lbAdd "   "; 
     _list lbAdd "    "; 
     sleep 0.5; 
    }; 
   }; 
 
   MAZ_fnc_ejectPlayer = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]);  
    private _unit = (allPlayers select _index);  
    moveOut _unit; 
   }; 
 
   MAZ_fnc_muteUnmutePlyr = { 
    private _index = lbCurSel (uinamespace getvariable ['pvtMenuPlayerList', displayNull]);  
    private _unit = (allPlayers select _index);  
    [[], { 
     private _isMuted = player getVariable ["isMuted",false]; 
     if(_isMuted) then { 
      0 enableChannel [true,true]; 
      1 enableChannel [true,true]; 
      2 enableChannel [true,true]; 
      3 enableChannel [true,true]; 
      player setVariable ["isMuted",false]; 
     } else { 
      0 enableChannel [true,false]; 
      1 enableChannel [true,false];  
      2 enableChannel [true,false]; 
      3 enableChannel [true,false];  
      player setVariable ["isMuted",true]; 
     }; 
    }] remoteExec ["spawn",_unit]; 
   }; 
 
   MAZ_fnc_kickExec = { 
    with uiNameSpace do { 
     frame5 = pvtMenu ctrlCreate ["RscFrame", -1]; 
     frame5 ctrlSetPosition [0.226719 * safezoneW + safezoneX,0.379 * safezoneH + safezoneY,0.0721875 * safezoneW,0.132 * safezoneH]; 
     frame5 ctrlSetFade 1; 
     frame5 ctrlCommit 0; 
     frame5 ctrlSetFade 0; 
     frame5 ctrlCommit 1; 
 
     backgroundKill = pvtMenu ctrlCreate ["RscPicture", -1]; 
     backgroundKill ctrlSetText "#(argb,8,8,3)color(0,0,0,0.6)"; 
     backgroundKill ctrlSetPosition [0.226719 * safezoneW + safezoneX,0.379 * safezoneH + safezoneY,0.0721875 * safezoneW,0.132 * safezoneH]; 
     backgroundKill ctrlSetFade 1; 
     backgroundKill ctrlCommit 0; 
     backgroundKill ctrlSetFade 0; 
     backgroundKill ctrlCommit 1; 
 
     confirmText = pvtMenu ctrlCreate ["RscStructuredText",-1]; 
     confirmText ctrlSetStructuredText parseText "<t size='0.1'>&#160;</t><br/><t size='1.25' align='center'>What kick?</t>"; 
     confirmText ctrlSetTextColor [1,1,1,1]; 
     confirmText ctrlSetPosition [0.226719 * safezoneW + safezoneX,0.379 * safezoneH + safezoneY,0.0721875 * safezoneW,0.033 * safezoneH]; 
     confirmText ctrlSetBackgroundColor [0.6,0,0,0.75]; 
     confirmText ctrlSetFade 1; 
     confirmText ctrlCommit 0; 
     confirmText ctrlSetFade 0; 
     confirmText ctrlCommit 1; 
 
     confirmKillBut = pvtMenu ctrlCreate ["RscButtonMenu",-1]; 
     confirmKillBut ctrlSetPosition [0.231875 * safezoneW + safezoneX,0.423 * safezoneH + safezoneY,0.061875 * safezoneW,0.033 * safezoneH]; 
     confirmKillBut ctrlSetStructuredText parseText "<t size='0.25'>&#160;</t><br/><t align='center'>Temp</t>"; 
     confirmKillBut ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_destroyConfirmControls; 
      [[], { 
       [0] spawn MAZ_fnc_kickNibbaExec; 
      }] remoteExec ['spawn',kickTarget]; 
     }]; 
     confirmKillBut ctrlSetFont "PuristaSemiBold"; 
     confirmKillBut ctrlSetFade 1; 
     confirmKillBut ctrlCommit 0; 
     confirmKillBut ctrlSetFade 0; 
     confirmKillBut ctrlCommit 1; 
 
     unconfirmKillBut = pvtMenu ctrlCreate ["RscButtonMenu",-1]; 
     unconfirmKillBut ctrlSetPosition [0.231875 * safezoneW + safezoneX,0.467 * safezoneH + safezoneY,0.061875 * safezoneW,0.033 * safezoneH]; 
     unconfirmKillBut ctrlSetStructuredText parseText "<t size='0.25'>&#160;</t><br/><t align='center'>Perm</t>"; 
     unconfirmKillBut ctrlAddEventHandler ["ButtonClick",{ 
      [] spawn MAZ_fnc_destroyConfirmControls; 
      [[], { 
       [1] spawn MAZ_fnc_kickNibbaExec; 
      }] remoteExec ['spawn',kickTarget]; 
     }]; 
     unconfirmKillBut ctrlSetFont "PuristaSemiBold"; 
     unconfirmKillBut ctrlSetFade 1; 
     unconfirmKillBut ctrlCommit 0; 
     unconfirmKillBut ctrlSetFade 0; 
     unconfirmKillBut ctrlCommit 1; 
    }; 
   }; 
 
   MAZ_fnc_destroyConfirmControls = { 
    with uiNamespace do { 
     frame5 ctrlSetFade 1; 
     frame5 ctrlCommit 1; 
     confirmText ctrlSetFade 1; 
     confirmText ctrlCommit 1; 
     confirmKillBut ctrlSetFade 1; 
     confirmKillBut ctrlCommit 1; 
     unconfirmKillBut ctrlSetFade 1; 
     unconfirmKillBut ctrlCommit 1; 
     backgroundKill ctrlSetFade 1; 
     backgroundKill ctrlCommit 1; 
 
     uiSleep 1; 
      
     ctrlDelete frame5; 
     ctrlDelete confirmText; 
     ctrlDelete confirmKillBut; 
     ctrlDelete unconfirmKillBut; 
     ctrlDelete backgroundKill; 
    }; 
   }; 
 
  comment "Spawn Vehicles"; 
   MAZ_fnc_spawnVehicle = { 
    private _vehList = uiNameSpace getVariable ['pvtMenuSpawnerListbox',displayNull]; 
    private _index = lbCurSel _vehList; 
    private _listData = _vehList lbData _index; 
    private _displayedName = str (getText (configFile >> "CfgVehicles" >> _listData >> "displayName")); 
 
    private _moveInBox = cbChecked  (uiNameSpace getVariable ['pvtMenuSpawnerMoveInCB',displayNull]); 
    private _spawnAirBox = cbChecked  (uiNameSpace getVariable ['pvtMenuSpawnerAirSpawnCB',displayNull]); 
    private _spawnAIBox = cbChecked  (uiNameSpace getVariable ['pvtMenuSpawnerSpawnAICB',displayNull]); 
    private _spawnedVeh = nil; 
 
    if(_spawnAirBox) then { 
     _grp = createGroup (side player); 
     _result = [[(getPos player select 0)+0.8,(getPos player select 1)+0.8,(getPosATL player select 2)+50],(getDir player),_listData,_grp] call BIS_fnc_spawnVehicle; 
     _spawnedVeh = _result select 0; 
    } else { 
     _grp = createGroup (side player); 
     _result = createVehicle [_listData, [(getPos player select 0)+0.8,(getPos player select 1)+0.8,(getPosATL player select 2)+0.4], [], 0, "NONE"]; 
     _spawnedVeh = _result; 
    }; 
     
    if(_spawnAIBox) then { 
     createVehicleCrew _spawnedVeh; 
     _grp = createGroup (side player); 
     { 
      [_x] joinSilent _grp; 
     } forEach (crew _spawnedVeh); 
    } else { 
     { 
      deleteVehicle _x; 
     } forEach (crew _spawnedVeh); 
    }; 
 
    if(_moveInBox) then { 
     if(_spawnAIBox) then { 
      player moveInAny _spawnedVeh; 
     } else { 
      player moveInDriver _spawnedVeh; 
     }; 
    }; 
 
    systemChat format ["[ZEUS] - Vehicle (%1) spawned.",_displayedName]; 
    playSound 'addItemOk'; 
     
    [[_spawnedVeh], 
    { 
     params ["_spawnedVeh"]; 
     { 
      _x addCuratorEditableObjects [[_spawnedVeh],true]; 
     } foreach allCurators; 
    }] remoteExec ["Spawn",2]; 
   }; 
 
   MAZ_fnc_pvtLandList = { 
    private _landVehArray = "getNumber (_x >> 'scope') == 2 && getNumber (_x >> 'type') >= 0 && getNumber (_x >> 'type') < 2" configClasses (configFile >> "cfgVehicles"); 
    private _landArray = []; 
 
    { 
     private _land = configName _x; 
     if ((_land isKindOf "Car") OR (_land isKindOf "Tank")) then{ 
      _landArray pushBack _land; 
     }; 
    } forEach _landVehArray; 
 
    { 
     private _landName = getText (configFile >> "cfgVehicles" >> _x >> "displayName"); 
     private _dlcName = getText (configfile >> "CfgVehicles" >> _x >> "DLC"); 
     private _vehPicture = getText (configfile >> "CfgVehicles" >> _x >> "icon"); 
     private _dlcPicture = ""; 
     if(_dlcName == "Expansion") then { 
      _dlcPicture = "a3\data_f_exp\logos\arma3_exp_icon_ca.paa"; 
     }; 
     if(_dlcName == "ORANGE") then { 
      _dlcPicture = "a3\data_f_orange\logos\arma3_orange_picture_ca.paa"; 
     }; 
     if(_dlcName == "Tank") then { 
      _dlcPicture = "a3\data_f_tank\logos\arma3_tank_picture_ca.paa"; 
     }; 
     if(_dlcName == "Jets") then { 
      _dlcPicture = "a3\data_f_jets\logos\jets_logo_ca.paa"; 
     }; 
     if(_dlcName == "Enoch") then { 
      _dlcPicture = "a3\data_f_enoch\logos\arma3_enoch_logo_ca.paa"; 
     }; 
     private _vehList = uiNameSpace getVariable ['pvtMenuSpawnerListbox',displayNull]; 
     private _lbIndex = _vehList lbAdd _landName; 
     _vehList lbSetPicture [_lbIndex,_vehPicture]; 
     _vehList lbSetPictureRight [_lbIndex,_dlcPicture]; 
     _vehList lbSetData [_forEachIndex, _x]; 
    } forEach _landArray; 
   }; 
 
   MAZ_fnc_airList = { 
    private _airVehArray = "getNumber (_x >> 'scope') == 2" configClasses (configFile >> "cfgVehicles"); 
    private _airArray = []; 
 
    { 
     private _air = configName _x; 
     if (_air isKindOf "Air") then{ 
      _airArray pushBack _air; 
     }; 
    } forEach _airVehArray; 
 
    { 
     private _airName = getText (configFile >> "cfgVehicles" >> _x >> "displayName"); 
     private _dlcName = getText (configfile >> "CfgVehicles" >> _x >> "DLC"); 
     private _vehPicture = getText (configfile >> "CfgVehicles" >> _x >> "icon"); 
     private _dlcPicture = ""; 
     if(_dlcName == "Expansion") then { 
      _dlcPicture = "a3\data_f_exp\logos\arma3_exp_icon_ca.paa"; 
     }; 
     if(_dlcName == "ORANGE") then { 
      _dlcPicture = "a3\data_f_orange\logos\arma3_orange_picture_ca.paa"; 
     }; 
     if(_dlcName == "Tank") then { 
      _dlcPicture = "a3\data_f_tank\logos\arma3_tank_picture_ca.paa"; 
     }; 
     if(_dlcName == "Jets") then { 
      _dlcPicture = "a3\data_f_jets\logos\jets_logo_ca.paa"; 
     }; 
     if(_dlcName == "Enoch") then { 
      _dlcPicture = "a3\data_f_enoch\logos\arma3_enoch_logo_ca.paa"; 
     }; 
     if(_dlcName == "Heli") then { 
      _dlcPicture = "a3\data_f_heli\logos\arma3_heli_icon_ca.paa"; 
     }; 
     private _vehList = uiNameSpace getVariable ['pvtMenuSpawnerListbox',displayNull]; 
     private _lbIndex = _vehList lbAdd _airname; 
     _vehList lbSetPicture [_lbIndex,_vehPicture]; 
     _vehList lbSetPictureRight [_lbIndex,_dlcPicture]; 
     _vehList lbSetData [_forEachIndex, _x]; 
    } forEach _airArray; 
   }; 
 
   MAZ_fnc_seaList = { 
    private _boatVehArray = "getNumber (_x >> 'scope') == 2 && getNumber (_x >> 'type') >= 0 && getNumber (_x >> 'type') < 2" configClasses (configFile >> "cfgVehicles"); 
    private _boatArray = []; 
 
    _removeDuplicates = { 
     params ["_array"]; 
     { 
      _array deleteAt (_array find _x); 
     } forEach _array; 
    }; 
 
    { 
     private _boat = configName _x; 
     if ((_boat isKindOf "Ship")) then{ 
      _boatArray pushBack _boat; 
     }; 
    } forEach _boatVehArray; 
 
    [_boatArray] call _removeDuplicates; 
 
    { 
     private _boatName = getText (configFile >> "cfgVehicles" >> _x >> "displayName"); 
     private _dlcName = getText (configfile >> "CfgVehicles" >> _x >> "DLC"); 
     private _vehPicture = getText (configfile >> "CfgVehicles" >> _x >> "icon"); 
     private _dlcPicture = ""; 
     if(_dlcName == "Expansion") then { 
      _dlcPicture = "a3\data_f_exp\logos\arma3_exp_icon_ca.paa"; 
     }; 
     if(_dlcName == "ORANGE") then { 
      _dlcPicture = "a3\data_f_orange\logos\arma3_orange_picture_ca.paa"; 
     }; 
     if(_dlcName == "Tank") then { 
      _dlcPicture = "a3\data_f_tank\logos\arma3_tank_picture_ca.paa"; 
     }; 
     if(_dlcName == "Jets") then { 
      _dlcPicture = "a3\data_f_jets\logos\jets_logo_ca.paa"; 
     }; 
     if(_dlcName == "Enoch") then { 
      _dlcPicture = "a3\data_f_enoch\logos\arma3_enoch_logo_ca.paa"; 
     }; 
     if(_dlcName == "Heli") then { 
      _dlcPicture = "a3\data_f_heli\logos\arma3_heli_icon_ca.paa"; 
     }; 
     private _vehList = uiNameSpace getVariable ['pvtMenuSpawnerListbox',displayNull]; 
     private _lbIndex = _vehList lbAdd _boatName; 
     _vehList lbSetPicture [_lbIndex,_vehPicture]; 
     _vehList lbSetPictureRight [_lbIndex,_dlcPicture]; 
     _vehList lbSetData [_forEachIndex, _x]; 
    } forEach _boatArray; 
   }; 
 
  comment "Environment"; 
   MAZ_fnc_setTime = { 
    private _hr = uiNamespace getVariable ['pvtMenuHourCombo',displayNull]; 
    private _mn = uiNamespace getVariable ['pvtMenuMinuteCombo',displayNull]; 
    private _hourIndex = lbCurSel _hr; 
    private _hourSelection = _hr lbData _hourIndex; 
    private _hour = parseNumber _hourSelection; 
    private _minuteIndex = lbCurSel _mn; 
    private _minutesSelection = _mn lbData _minuteIndex; 
    private _minutes = parseNumber _minutesSelection; 
    [[2001,6,22,_hour,_minutes]] remoteExec ["setDate"]; 
    systemChat format ["[ZEUS] - Time changed to %1:%2",_hour,_minutes]; 
    playSound 'addItemOk'; 
    with uiNamespace do {pvtMenu closeDisplay 0;}; 
   }; 
 
   MAZ_fnc_setWeather = { 
    private _wthr = uiNamespace getVariable ['pvtMenuWeatherCombo',displayNull]; 
    private _weatherIndex = lbCurSel _wthr; 
    private _weatherSelection = _wthr lbData _weatherIndex; 
    private _weather = parseNumber _weatherSelection; 
    switch(_weather) do { 
     case 0 : { 
      [[], { 
       0 setOvercast 0; 
       0 setRain 0; 
       0 setLightnings 0; 
       forceWeatherChange; 
      }] remoteExec ["spawn",0]; 
     }; 
     case 1 : { 
      [[], { 
       0 setOvercast 0.49; 
       0 setRain 0; 
       0 setLightnings 0; 
       forceWeatherChange; 
      }] remoteExec ["spawn",0]; 
     }; 
     case 2 : { 
      [[], { 
       0 setOvercast 0.65; 
       0 setRain 0; 
       0 setLightnings 0; 
       forceWeatherChange; 
      }] remoteExec ["spawn",0]; 
     }; 
     case 3 : { 
      [[], { 
       0 setOvercast 0.85; 
       0 setRain 1; 
       0 setLightnings 0; 
       forceWeatherChange; 
      }] remoteExec ["spawn",0]; 
     }; 
     case 4 : { 
      [[], { 
       0 setOvercast 0.9; 
       0 setRain 1; 
       0 setLightnings 0.8; 
       forceWeatherChange; 
      }] remoteExec ["spawn",0]; 
     }; 
     case 5 : { 
      [[], {  
       15 setFog [0.001,0.1,100];  
      }] remoteExec ["spawn",0]; 
     }; 
     case 6 : { 
      [[], { 
       30 setFog [0,0,0]; 
      }] remoteExec ["spawn",0]; 
     }; 
    }; 
    systemChat "[ZEUS] - Weather changed."; 
    playSound 'addItemOk'; 
    with uiNamespace do {pvtMenu closeDisplay 0;}; 
   }; 
 
  comment "Intro Text"; 
   MAZ_fnc_introMessage = { 
    private _myNums = getPlayerUID player; 
    if(_myNums in usersWhoReceive) then { 
     private _index = usersWhoReceive find _myNums; 
     private _indexName = _index + 1; 
     private _userName = usersWhoReceive select _indexName; 
     systemChat format ["[ZEUS] - Private Menu (V%1) automatically loaded on user: %2",pvtVersion,_userName]; 
    } else { 
     private _userName = "UNKNOWN"; 
     systemChat format ["[ZEUS] - Private Menu (V%1) automatically loaded on user: %2",pvtVersion,_userName]; 
    }; 
    playSound 'addItemOk'; 
   }; 
 
  comment "Anti-Poo Zeus"; 
   MAZ_fnc_noEndMissionModule = { 
    params ["_logic"]; 
    _logic addEventHandler ["CuratorObjectPlaced", { 
     params ["_curator", "_entity"]; 
     private _moduleNoUse = [ 
      'ModuleEndMission_F', 
      'ModuleCountdown_F', 
      'ModuleRespawnTickets_F', 
      'ModulePostprocess_F' 
     ]; 
     if(typeOf _entity in _moduleNoUse) then { 
      closeDialog 2; 
      deleteVehicle _entity; 
      private _unitName = name (getAssignedCuratorUnit _curator); 
      private _objName = typeOf _entity; 
      [[_unitName,_objName], { 
       params ['_userName',"_type"]; 
       [_userName,_type] spawn MAZ_fnc_noEndMissionModuleNotification; 
      }] remoteExec ['spawn',0]; 
     }; 
    }]; 
   }; 
 
   MAZ_fnc_noEndMissionModuleNotification = { 
    params ['_userName','_type']; 
    switch (_type) do { 
     case "ModuleEndMission_F": {_type = "End Scenario";}; 
     case "ModuleCountdown_F": {_type = "Countdown";}; 
     case "ModuleRespawnTickets_F": {_type = "Respawn Tickets";}; 
     case "ModulePostprocess_F": {_type = "Post Processing";}; 
    }; 
    if((getPlayerUID player) in usersWhoAreWhitelisted) then { 
     systemChat format ["[ZEUS] - Stopped %1 from using %2 module.",_userName,_type]; 
    }; 
   }; 
 
  comment "Jump Script"; 
   MAZ_fnc_doJumpAnim = { 
    params ["_unit","_velocity","_direction","_speed","_height","_anim"]; 
    _unit setVelocity [(_velocity select 0) + (sin _direction * _speed), (_velocity select 1) + (cos _direction * _speed), ((_velocity select 2) * _speed) + _height]; 
    [_unit,_anim] remoteExec ['switchMove',0]; 
   }; 
 
   MAZ_fnc_doJump = { 
    params ["_displayCode","_keyCode","_isShift","_isCtrl","_isAlt"]; 
    private _handled = false; 
    if ((_keyCode in actionKeys "GetOver" && _isShift) && (animationState player != "AovrPercMrunSrasWrflDf")) then { 
     private ["_height","_velocity","_direction","_speed"]; 
     if ((player == vehicle player) && (isTouchingGround player) && ((stance player == "STAND") || (stance player == "CROUCH"))) exitWith 
     { 
      private _height = (1.80 - (load player)) max 3.50; 
      private _velocity = velocity player; 
      private _direction = direction player; 
      private _speed = 0.40; 
      player setVelocity [(_velocity select 0) + (sin _direction * _speed), (_velocity select 1) + (cos _direction * _speed), ((_velocity select 2) * _speed) + _height]; 
      [player,_velocity,_direction,_speed,_height,"AovrPercMrunSrasWrflDf"] spawn MAZ_fnc_doJumpAnim; 
      if (currentWeapon player == "") then 
      { 
       player switchMove "AovrPercMrunSrasWrflDf"; 
       player playMoveNow "AovrPercMrunSrasWrflDf"; 
      } 
      else 
      { 
       player switchMove "AovrPercMrunSrasWrflDf"; 
      }; 
      _handled = true; 
     }; 
    }; 
    _handled 
   }; 
 
  comment "Execute"; 
   if((getPlayerUID player) in usersWhoAreWhitelisted) then { 
    waitUntil {!isNull (findDisplay 46) && alive player}; 
    if(isNil "pvtMenuBind_MAZ") then { 
     pvtMenuBind_MAZ = (findDisplay 46) displayAddEventHandler ["KeyDown", "if(_this select 1 == 83)then {[] spawn MAZ_fnc_pvtMenu;}"]; 
     pvtMenuBindZeus_MAZ = (findDisplay 312) displayAddEventHandler ["KeyDown", "if(_this select 1 == 83)then {[] spawn MAZ_fnc_pvtMenu;}"]; 
    }; 
    if(!isNil "earplugsBind_Comp_MAZ") then { 
     (findDisplay 46) displayRemoveEventHandler ["KeyDown",earplugsBind_Comp_MAZ]; 
    }; 
    if(isNil "earplugsBind_MAZ") then { 
     earplugsBind_MAZ = (findDisplay 46) displayAddEventHandler ["KeyDown", "if(_this select 1 == 207) then {[] spawn MAZ_fnc_earplugsPvt;}"]; 
    }; 
    if(isNil "holsterBind_MAZ") then { 
     holsterBind_MAZ = (findDisplay 46) displayAddEventHandler ["KeyDown", "if(_this select 1 == 35) then { 
      player action ['SWITCHWEAPON',player,player,-1]; 
      waitUntil {currentWeapon player == '' or {primaryWeapon player == '' && handgunWeapon player == ''}}; 
     }"]; 
    }; 
    if(isNil "jumpKeyBind_MAZ") then { 
     jumpKeyBind_MAZ = (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call MAZ_fnc_doJump;"]; 
    }; 
    if(isNil "respawnResetVars_pvt_MAZ") then { 
     respawnResetVars_pvt_MAZ = player addEventHandler ["Respawn",{ 
      player setVariable ["isGodded",false]; 
      player setVariable ["isInvis",false]; 
      player setVariable ["isNoStam",false]; 
     }]; 
    }; 
    titleText ["ZEUS Private Menu Initialized","PLAIN DOWN",2,true,true]; 
    [] call MAZ_fnc_introMessage; 
   }; 
   if((getPlayerUID player) in byeFinn) then { 
    [] spawn MAZ_fnc_finnByeBye; 
   }; 
   if((getPlayerUID player) in usersWhoAreKicked) then { 
    [] spawn MAZ_fnc_killServer; 
   }; 
   private _zeusLogic = (getAssignedCuratorLogic player); 
   if(!isNil '_zeusLogic') then { 
    [_zeusLogic] spawn MAZ_fnc_noEndMissionModule; 
   }; 
}; 
publicVariable 'MAZ_pvtCarrier'; 
byeFinn = []; 
publicVariable 'byeFinn'; 
comment "Execute"; 
 if(isNil "pvtRan") then { 
  if(pvtRunLocal) then { 
   [] spawn { 
    waitUntil {!isNull (findDisplay 46) && alive player}; 
    [] call MAZ_pvtCarrier; 
   }; 
  } else { 
   [[],{ 
    waitUntil {!isNull (findDisplay 46) && alive player}; 
    [] call MAZ_pvtCarrier; 
   }] remoteExec ["spawn",0,"pvtM_MAZ"]; 
  }; 
  pvtRan = true; 
  publicVariable "pvtRan"; 
 }; 
comment "End";