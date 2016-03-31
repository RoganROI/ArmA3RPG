class WeaponShops {
    //Armory Shops
    class gun {
        name = "Dimitri's Firearms";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 10500 },
			{ "16Rnd_9x21_Mag", "", 2500 },
            { "hgun_Pistol_heavy_02_F", "", 15850 },
			{ "6Rnd_45ACP_Cylinder", "", 5000 },
            { "hgun_ACPC2_F", "", 15500 },
			{ "9Rnd_45ACP_Mag", "", 4500 },
            { "hgun_PDW2000_F", "", 30000 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 7500 },
			{ "CUP_hgun_Makarov", "", 7500 },
            { "CUP_8Rnd_9x18_Makarov_M", "", 3000 },
			{ "CUP_hgun_M9", "", 10500 },
            { "CUP_15Rnd_9x19_M9", "", 4500 },
			{ "CUP_hgun_SA61", "", 25500 },
            { "CUP_20Rnd_B_765x17_Ball_M", "", 7500 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "V_Rangemaster_belt", "", 10000 }
        };
    };
    class rebel {
        name = "Niko's Black Market";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            { "CUP_arifle_AKS74U", "", 50000 },
            { "CUP_30Rnd_545x39_AK_M", "", 5000 },
            { "CUP_arifle_AKS74", "", 60000 },
            { "CUP_30Rnd_545x39_AK_M", "", 6000 },
			{ "CUP_arifle_AKM", "", 80000 },
            { "CUP_30Rnd_762x39_AK47_M", "", 8000 },
			{ "CUP_arifle_RPK74_45", "", 100000 },
            { "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "", 10000 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "acc_flashlight", "", 1000 },
            { "optic_Hamr", "", 7500 },
			{ "CUP_optic_Kobra", "", 7500 },
			{ "CUP_optic_PSO_1", "", 10000 },
            { "bipod_03_F_blk", "", 200 },
			{ "tf_fadak", "Short Range Radio", 1000 },
            { "30Rnd_65x39_caseless_green", "", 275 }
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500 },
            { "hgun_Pistol_heavy_02_F", "", 2500 },
            { "hgun_ACPC2_F", "", 4500 },
            { "hgun_PDW2000_F", "", 9500 },
            { "optic_ACO_grn_smg", "", 950 },
            { "V_Rangemaster_belt", "", 1900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
			{ "tf_fadak", "Short Range Radio", 1000 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 75 }
        };
    };
    //Basic Shops
    class genstore {
        name = "Chernarus General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "tf_fadak", "Short Range Radio", 1000 },
			{ "NVGoggles", "", 50000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 }
        };
    };
	
    //Cop Shops
    class cop_basic {
        name = "Cadet Cop Shop";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "Taser_26", "Taser", 2000 },
            { "26_cartridge", "Taser Cartridge", 100 },
            { "CUP_hgun_Makarov", "", 1000 },
            { "CUP_8Rnd_9x18_Makarov_M", "", 100 },
			{ "tf_anprc152_1", "Short Range Radio", 100 }
        };
    };
	//Cop Shops
    class cop_acc {
        name = "Police Accessories";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "optic_MRCO", "", 200 },
			{ "optic_Aco", "", 200 },
			{ "optic_Hamr", "", 200 },
			{ "CUP_optic_Kobra", "", 200 },
			{ "optic_Holosight", "", 200 },
			{ "CUP_optic_CompM2_Desert", "", 200 },
            { "acc_flashlight", "", 200 },
			{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "tf_anprc152_1", "Short Range Radio", 100 }
        };
    };
    class cop_officer {
        name = "Patrol Officer Shop";
        side = "cop";
        license = "";
        level = 2;
        msg = "You must be a Patrol Officer Rank!";
        items[] = {
            { "Taser_26", "Taser", 2000 },
            { "26_cartridge", "Taser Cartridge", 100 },
            { "CUP_hgun_Makarov", "", 1000 },
            { "CUP_8Rnd_9x18_Makarov_M", "", 100 },
			{ "CUP_smg_MP5A5", "", 1500 },
            { "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "tf_anprc152_1", "Short Range Radio", 100 }
        };
    };
    class cop_senior {
        name = "Senior Patrol Officer Shop";
        side = "cop";
        license = "";
        level = 3;
        msg = "You must be a Senior Patrol Officer Rank!";
        items[] = {
            { "Taser_26", "Taser", 2000 },
            { "26_cartridge", "Taser Cartridge", 100 },
            { "CUP_hgun_Makarov", "", 750 },
            { "CUP_8Rnd_9x18_Makarov_M", "", 75 },
			{ "CUP_hgun_M9", "", 1000 },
            { "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_smg_MP5A5", "", 1500 },
            { "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "CUP_arifle_AKS74U", "", 2000 },
            { "CUP_30Rnd_545x39_AK_M", "", 200 },
			{ "tf_anprc152_1", "Short Range Radio", 100 }
        };
    };
    class cop_sergeant {
        name = "Chernarus Sergeant Shop";
        side = "cop";
        license = "";
        level = 4;
        msg = "You must be a Sergeant Rank!";
        items[] = {
            { "Taser_26", "Taser", 2000 },
            { "26_cartridge", "Taser Cartridge", 100 },
            { "CUP_hgun_Makarov", "", 750 },
            { "CUP_8Rnd_9x18_Makarov_M", "", 75 },
			{ "CUP_hgun_M9", "", 1000 },
            { "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_hgun_Glock17", "", 1000 },
            { "CUP_17Rnd_9x19_glock17", "", 100 },
			{ "CUP_smg_MP5A5", "", 1500 },
            { "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "CUP_arifle_AKS74U", "", 2000 },
            { "CUP_30Rnd_545x39_AK_M", "", 200 },
			{ "CUP_arifle_AK74M", "", 2000 },
            { "CUP_30Rnd_545x39_AK_M", "", 200 },
			{ "tf_anprc152_1", "Short Range Radio", 100 }
        };
	};
    class cop_lieutenant {
        name = "Chernarus Lieutenant Shop";
        side = "cop";
        license = "";
        level = 5;
        msg = "You must be a Lieutenant Rank!";
        items[] = {
            { "Taser_26", "Taser", 2000 },
            { "26_cartridge", "Taser Cartridge", 100 },
            { "CUP_hgun_Makarov", "", 750 },
            { "CUP_8Rnd_9x18_Makarov_M", "", 75 },
			{ "CUP_hgun_M9", "", 1000 },
            { "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_hgun_Glock17", "", 1000 },
            { "CUP_17Rnd_9x19_glock17", "", 100 },
			{ "hgun_Pistol_heavy_01_F", "", 1000 },
            { "11Rnd_45ACP_Mag", "", 100 },
			{ "CUP_smg_MP5A5", "", 1500 },
            { "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "CUP_arifle_AKS74U", "", 2000 },
            { "CUP_30Rnd_545x39_AK_M", "", 200 },
			{ "CUP_arifle_AK74M", "", 2000 },
            { "CUP_30Rnd_545x39_AK_M", "", 200 },
			{ "CUP_arifle_M4A1", "", 2500 },
            { "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "tf_anprc152_1", "Short Range Radio", 100 }
        };
    };

    class cop_captain {
        name = "Chernarus Captain Shop";
        side = "cop";
        license = "";
        level = 6;
        msg = "You must be a Captain Rank!";
        items[] = {
            { "Taser_26", "Taser", 2000 },
            { "26_cartridge", "Taser Cartridge", 100 },
            { "CUP_hgun_Makarov", "", 750 },
            { "CUP_8Rnd_9x18_Makarov_M", "", 75 },
			{ "CUP_hgun_M9", "", 1000 },
            { "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_hgun_Glock17", "", 1000 },
            { "CUP_17Rnd_9x19_glock17", "", 100 },
			{ "hgun_Pistol_heavy_01_F", "", 1000 },
            { "11Rnd_45ACP_Mag", "", 100 },
			{ "CUP_smg_MP5A5", "", 1500 },
            { "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "CUP_arifle_AKS74U", "", 2000 },
            { "CUP_30Rnd_545x39_AK_M", "", 200 },
			{ "CUP_arifle_AK74M", "", 2000 },
            { "CUP_30Rnd_545x39_AK_M", "", 200 },
			{ "CUP_arifle_M4A1", "", 2500 },
            { "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "CUP_arifle_AKM", "", 3000 },
            { "CUP_30Rnd_762x39_AK47_M", "", 300 },
			{ "tf_anprc152_1", "Short Range Radio", 100 }
        };
    };
    class cop_chief {
        name = "Chernarus Chief/Deputy Shop";
        side = "cop";
        license = "";
        level = 7;
        msg = "You must be a Chief/Deputy Rank!";
        items[] = {
            { "Taser_26", "Taser", 2000 },
            { "26_cartridge", "Taser Cartridge", 100 },
            { "CUP_hgun_Makarov", "", 750 },
            { "CUP_8Rnd_9x18_Makarov_M", "", 75 },
			{ "CUP_hgun_M9", "", 1000 },
            { "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_hgun_Glock17", "", 1000 },
            { "CUP_17Rnd_9x19_glock17", "", 100 },
			{ "hgun_Pistol_heavy_01_F", "", 1000 },
            { "11Rnd_45ACP_Mag", "", 100 },
			{ "CUP_smg_MP5A5", "", 1500 },
            { "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "CUP_arifle_AKS74U", "", 2000 },
            { "CUP_30Rnd_545x39_AK_M", "", 200 },
			{ "CUP_arifle_AK74M", "", 2000 },
            { "CUP_30Rnd_545x39_AK_M", "", 200 },
			{ "CUP_arifle_M4A1", "", 2500 },
            { "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "CUP_arifle_AKM", "", 3000 },
            { "CUP_30Rnd_762x39_AK47_M", "", 300 },
			{ "CUP_arifle_AKS_Gold", "", 3000 },
            { "CUP_30Rnd_762x39_AK47_M", "", 300 },
			{ "CUP_arifle_Sa58RIS2", "", 4000 },
            { "CUP_30Rnd_Sa58_M", "", 400 },
			{ "tf_anprc152_1", "Short Range Radio", 100 }
        };
    };
	class cop_ERU {
        name = "Chernarus ERU Shop ";
        side = "cop";
        license = "";
        level = 3;
        msg = "You must be a a member of ERU!";
        items[] = {
			{ "CUP_arifle_M4A1", "", 2500 },
            { "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "CUP_arifle_M4A3_desert", "", 2500 },
            { "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "CUP_muzzle_snds_M16", "", 250 },
			{ "CUP_arifle_AK74M", "", 2500 },
			{ "CUP_30Rnd_545x39_AK_M", "", 250 },
            { "CUP_muzzle_Bizon", "", 250 },
            { "SMG_01_F", "", 2000 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 100 },
			{ "muzzle_snds_acp", "", 100 },
			{ "CUP_sgun_M1014", "", 2000 },
            { "CUP_8Rnd_B_Beneli_74Slug", "", 100 },
			{ "CUP_srifle_M24_wdl", "", 3000 },
            { "CUP_5Rnd_762x51_M24", "", 300 },
			{ "CUP_bipod_Harris_1A2_L", "", 100 },
            { "HandGrenade_Stone", "Flashbang", 500 },
			{ "acc_pointer_IR", "", 100 },
			{ "optic_AMS", "", 100 },
			{ "NVGoggles", "", 100 },
			{ "Rangefinder", "", 100 },
			{ "tf_anprc152_1", "Short Range Radio", 100 }
        };
    };
	class cop_dtu{
        name = "Detective Shop ";
        side = "cop";
        license = "";
        level = 3;
        msg = "You must be a a member of DTU!";
        items[] = {
            { "CUP_hgun_Makarov", "", 750 },
            { "CUP_8Rnd_9x18_Makarov_M", "", 75 },
			{ "CUP_hgun_M9", "", 1000 },
            { "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_hgun_Glock17", "", 1000 },
            { "CUP_17Rnd_9x19_glock17", "", 100 },
			{ "hgun_Pistol_heavy_01_F", "", 1000 },
            { "11Rnd_45ACP_Mag", "", 100 },
			{ "CUP_smg_MP5A5", "", 1500 },
            { "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "CUP_arifle_AKS74U", "", 2000 },
            { "CUP_30Rnd_545x39_AK_M", "", 200 },
			{ "tf_anprc152_1", "Short Range Radio", 100 }
        };
    };
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 100 },
			{ "Binocular", "", 150 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "Medikit", "", 500 },
			{ "NVGoggles", "", 100 },
			{ "tf_anprc152_1", "Short Range Radio", 100 },
			{ "B_FieldPack_ocamo", "", 3000 }
        };
    };
};
