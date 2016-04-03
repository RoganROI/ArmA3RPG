#include <macro.h>
/*
	File: fn_bankAlarm.sqf
	Author: Zako
	
	Description:
	Starts the bank siren.
*/
private["_vault"];
_vault = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _vault) exitWith {};

while {(vault_bank_1 getVariable[format["bank_alarm_state"],0]) == 0} do {
	_vault say3D "bank_alarm";
	sleep 23;
};