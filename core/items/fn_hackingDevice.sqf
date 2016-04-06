/*
	File: fn_hackingDevice
	Author: Zako
	
	Description:
	Breaks the lock on a single door (Closet door to the player).
*/
private["_building","_door","_doors","_cpRate","_title","_progressBar","_titleText","_cp","_ui"];
_building = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _building) exitWith {};
if(!(_building isKindOf "House_F")) exitWith {hint "You are not looking at a house door."};

_doors = getNumber(configFile >> "CfgVehicles" >> (typeOf _building) >> "NumberOfDoors");

_door = 0;
//Find the nearest door
_i = [2,4];
{
	_selPos = _building selectionPosition format["Interact%1",_x];
	_worldSpace = _building modelToWorld _selPos;
		if(player distance _worldSpace < 2) exitWith {_door = _x;};
} foreach _i;
if(_door == 0) exitWith {hint localize "STR_Cop_NotaDoor"}; //Not near a door to be broken into.
if((_building getVariable[format["bis_disabled_Door_%1",_door],0]) == 0) exitWith {hint localize "STR_House_Raid_DoorUnlocked"};
life_action_inUse = true;

//Setup the progress bar
disableSerialization;
_title = localize "STR_ISTR_Hacking_Process";
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;

switch (typeOf _building) do {
	case "Land_CommonwealthBank": {_cpRate = 0.0015;};
	default {_cpRate = 0.0015;}
};

while {true} do
{
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[[player,"AinvPknlMstpSnonWnonDnon_medic_1",true],"life_fnc_animSync",true,false] call life_fnc_MP;
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};
	sleep 0.26;
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = uiNamespace getVariable "life_progress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + _cpRate;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	if(_cP >= 1 OR !alive player) exitWith {};
	if(life_istazed) exitWith {}; //Tazed
	if(life_interrupted) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(!alive player OR life_istazed) exitWith {life_action_inUse = false;};
if((player getVariable["restrained",false])) exitWith {life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
life_action_inUse = false;

_building setVariable[format["bis_disabled_Door_%1",_door],0,true]; //Unlock the door.
if((_building getVariable["locked",false])) then {
	_building setVariable["locked",false,true];
};
[[getPlayerUID player,profileName,"459"],"life_fnc_wantedAdd",false,false] call life_fnc_MP;