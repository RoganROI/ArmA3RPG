/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Blasting charge is used for the federal reserve vault and nothing  more.. Yet.
*/
private["_vault","_handle","_door","_building","_door"];
_vault = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_building = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(_vault getVariable["chargeplaced",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyPlaced"};

if(playerSide == west && (nearestObject [[2569.861,5059.013,-0.934],"Land_Commonwealthbank"]) == cursorTarget) exitWith {
	_door = 2;
	_doors = ["Vault_Door", "Door"];
	_doorCount = (count _doors) -1; 
	for "_x" from 0 to _doorCount do
	{
		_selPos = _building selectionPosition format["Vault_Interact"];
		_worldSpace = _building modelToWorld _selPos;
			if(player distance _worldSpace < 3) exitWith {_door = _x;};
	};
	if(_door == 2) exitWith {hint localize "STR_Cop_NotaDoor"}; //Not near a door to be broken into.
	if(_door == 0) then {_door = "Vault_Door";};
	if(((_building getVariable ['bis_disabled_Vault_Door',0]) == 1)) exitWith {};

	fed_bank setVariable["chargeplaced",false,true];
	vault_blown_effect setVariable["safe_open",false,true];
	vault_bank_1 animate ["vault_door",0];
	vault_bank_1 setVariable[format["bis_disabled_Vault_Door"],1,true];
	vault_bank_1 setVariable[format["bank_alarm_state"],0,true];

	fed_bank hideObjectGlobal false;
};

if(isNull _vault) exitWith {}; //Bad object
if(typeOf _vault != "Suitcase") exitWith {hint localize "STR_ISTR_Blast_VaultOnly"};
if(_vault getVariable["safe_open",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyOpen"};
if(!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith {}; //Error?

fed_bank setVariable["chargeplaced",true,true];
if((vault_bank_1 getVariable[format["bank_alarm_state"],0]) == 0) then {
	[[0,"STR_ISTR_Blast_Placed"],"life_fnc_broadcast",west,false] call life_fnc_MP;
	[[_vault],"life_fnc_bankAlarm",nil,true] spawn life_fnc_MP;
};
hint localize "STR_ISTR_Blast_KeepOff";
_handle = [] spawn life_fnc_demoChargeTimer;
[[],"life_fnc_demoChargeTimer",west,false] call life_fnc_MP;

waitUntil {scriptDone _handle};
sleep 0.9;
if(!(fed_bank getVariable["chargeplaced",false])) exitWith {hint localize "STR_ISTR_Blast_Disarmed"};

_bomb = "Bo_GBU12_LGB_MI10" createVehicle [getPosATL fed_bank select 0, getPosATL fed_bank select 1, (getPosATL fed_bank select 2)+0.5];
fed_bank setVariable["chargeplaced",false,true];
vault_blown_effect setVariable["safe_open",true,true];
vault_bank_1 setVariable[format["bis_disabled_Vault_Door"],0,true];
vault_bank_1 setVariable[format["bank_alarm_state"],0,true];

fed_bank hideObjectGlobal true;

hint localize "STR_ISTR_Blast_Opened";