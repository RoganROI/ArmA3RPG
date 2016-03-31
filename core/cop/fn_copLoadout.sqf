/*
	File: fn_copLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	Edited: Itsyuka
	
	Description:
	Loads the cops out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "CUP_U_C_Policeman_01";
player addVest "CUP_V_C_Police_Holster";

player addWeapon "CUP_hgun_Makarov";
player addMagazine "CUP_8Rnd_9x18_Makarov_M";
player addMagazine "CUP_8Rnd_9x18_Makarov_M";
player addMagazine "CUP_8Rnd_9x18_Makarov_M";
player addMagazine "CUP_8Rnd_9x18_Makarov_M";
player addMagazine "CUP_8Rnd_9x18_Makarov_M";
player addMagazine "CUP_8Rnd_9x18_Makarov_M";

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
player addItem "tf_anprc152_1";
player assignItem "tf_anprc152_1";

[] call life_fnc_saveGear;