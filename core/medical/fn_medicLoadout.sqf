/*
	File: fn_medicLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Loads the medic out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player addUniform "A3RPG_EMS1";
player addGoggles "Masque_Chirurgical";
player addBackpack "B_Kitbag_cbr";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "IteGPS";
player assignItem "ItemGPS";
player addItem "ItemWatch";
player assignItem "ItemWatch";

[[player,0,"textures\medic_uniform.jpg"],"life_fnc_setTexture",true,false] call life_fnc_MP;

[] call life_fnc_saveGear;