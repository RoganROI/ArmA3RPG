/*        
File: fn_seizeWeapon.sqf        
Author: Skalicon                
Description:
*/
_clear = nearestObjects [player,["weaponholder"],3];_clear = _clear + nearestObjects [player,["groundWeaponHolder"],3];
_destroyed = 0;for "_i" from 0 to count _clear - 1 do{        _destroyed = _destroyed + 1;
deleteVehicle (_clear select _i);
sleep 0.056;};titleText[format["Seized %1 ground objects in the vicinity.", _destroyed],"PLAIN"];