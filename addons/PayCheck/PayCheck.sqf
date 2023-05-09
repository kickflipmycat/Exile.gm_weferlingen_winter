if (alive player) then
{
	_poptabs = (player getVariable ["ExileMoney", 0]);
	if (ExilePlayerInSafezone) then
	{
		_paycheck = 0; 
		
		["ErrorTitleAndText", ["No pocket money", "You don't get playdough because you are on trader"]] call ExileClient_gui_toaster_addTemplateToast;
		systemChat "You don't get anything because you are here"; 
	}
	else
	{
		_paycheck = 500; //Awards a player 250 poptabs every 900 seconds whilst not in trader or their territory
		_poptabs = _poptabs + _paycheck;
		//playSound "PayCheckReceived";
		["InfoTitleAndText", ["pocket money", format ["You got pocket money %1 Pop-Tabs, you have now %2 Pop-Tabs on pocket!",_paycheck,_poptabs]]] call ExileClient_gui_toaster_addTemplateToast;
		systemChat format ["You don't get pocket money %1 Pop-Tabs, you have now %2 Pop-Tabs on pochet!",_paycheck,_poptabs];
		player setVariable ["ExileMoney",_poptabs,true];
	};
};