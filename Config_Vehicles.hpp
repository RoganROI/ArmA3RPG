class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "driver" }, 
			{ "C_Hatchback_01_F", 9500, "driver" }, 
			{ "C_Offroad_01_F", 12500, "driver" },
			{ "C_SUV_01_F", 30000, "driver" },
			{ "C_Hatchback_01_sport_F", 40000, "driver" },
			{ "C_Van_01_transport_F", 45000, "driver" },
			{ "IVORY_PRIUS", 30000, "driver" },
			{ "ivory_wrx", 100000, "driver" },
			{ "Jonzie_STI", 130000, "driver" },
			{ "Jonzie_Datsun_510", 30000, "driver" },
			{ "Jonzie_Datsun_Z432", 100000, "driver" },
			{ "Jonzie_Raptor", 90000, "driver" },
			{ "Jonzie_XB", 100000, "driver" },
			{ "Ivory_Supra", 150000, "driver" },
			{ "Ivory_m3_gts", 160000, "driver" },
			{ "Ivory_m3", 150000, "driver" },
			{ "Jonzie_30CSL", 100000, "driver" },
			{ "ivory_tractor", 50000, "driver" },
			{ "ivory_tractor2", 50000, "driver" },
			{ "jonzie_mini_cooper", 50000, "driver" },
			{ "jonzie_mini_cooper_r_spec", 80000, "driver" },
			{ "jonzie_corolla", 80000, "driver" },
			{ "ivory_isf", 150000, "driver" },
			{ "ivory_gt500", 150000, "driver" }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000 , "driver" },
			{ "C_Kart_01_Fuel_F", 15000, "driver" },
			{ "C_Kart_01_Red_F", 15000, "driver" },
			{ "C_Kart_01_Vrana_F", 15000, "driver" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "Jonzie_Ambulance", 4000, "" },
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "ivory_b206_rescue", 5000, "mAir", { "life_medicsrlevel", 1 } },
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_box_F", 60000, "trucking" },
			{ "I_Truck_02_transport_F", 75000, "trucking" },
			{ "I_Truck_02_covered_F", 100000, "trucking" },
			{ "B_Truck_01_transport_F", 275000, "trucking" },
			{ "O_Truck_03_transport_F", 200000, "trucking" },
			{ "O_Truck_03_covered_F", 250000, "trucking" },
			{ "B_Truck_01_box_F", 350000, "trucking" },
			{ "O_Truck_03_device_F", 450000, "trucking" },
			{ "Jonzie_Transit", 65000, "trucking" }
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "rebel" },
			{ "B_G_Offroad_01_F", 95000, "rebel" },
			{ "O_MRAP_02_F", 450000, "rebel" },
			{ "B_Heli_Light_01_F", 325000, "rebel" },
			{ "B_G_Offroad_01_armed_F", 750000, "rebel" }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "DAR_TaurusPolice", 2000, "" },
			{ "DAR_ChargerPolice", 2000, "" },
			{ "DAR_TahoePoliceSlick", 3000, "", { "life_coplevel", 4 } },
			{ "DAR_TahoePolice", 3000, "", { "life_coplevel", 4 } },
			{ "DAR_ExplorerPolice", 3000, "", { "life_coplevel", 4 } },
			{ "ivory_wrx_cop_marked", 3000, "", { "life_coplevel", 7 } },
			{ "ivory_wrx_cop_slicktop", 3000, "", { "life_coplevel", 7 } }
		};
	};
	
	class cop_car_dtu {
		side = "cop";
		vehicles[] = {
			{ "DAR_ChargerPoliceStateSlick", 2000, "", { "life_copsiulevel", 1 } },
			{ "DAR_TaurusPoliceStateSlick", 0000, "", { "life_copsiulevel", 1 } },
			{ "DAR_TahoePoliceDet", 3000, "", { "life_copsiulevel", 1 } },
			{ "DAR_ExplorerPoliceStealth", 3000, "", { "life_copsiulevel", 1 } },
			{ "ivory_wrx_cop_unmarked", 3000, "", { "life_copsiulevel", 1 } },
			{ "jonzie_raptor", 2000, "", { "life_copsiulevel", 1 } },
			{ "ivory_m3", 2000, "", { "life_copsiulevel", 1 } },
			{ "jonzie_escalade", 2000, "", { "life_copsiulevel", 1 } },
			{ "ivory_isf", 2000, "", { "life_copsiulevel", 1 } }
		};
	};
	
	class cop_car_eru {
		side = "cop";
		vehicles[] = {
			{ "DAR_ExplorerPoliceStealth", 30000, "", { "life_copsrulevel", 1 } }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 253000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 750000, "pilot" }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 3000, "cAir" },
			{ "ivory_b206_police", 2000, "cAir" }
		};
	};

	class cop_airhq {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, "cAir" },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } },
			{ "B_MRAP_01_hmg_F", 750000, "", { "life_coplevel", 3 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 20000, "coastguard" },
			{ "B_Boat_Armed_01_minigun_F", 75000, "coastguard" },
			{ "B_SDV_01_F", 100000, "coastguard" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "B_SDV_01_F", 150000, "boat" }
		};
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = -1;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};
	
	class ivory_wrx_cop_slicktop : Default {
		vItemSpace = 50;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};
	
	class ivory_wrx_cop_marked : Default {
		vItemSpace = 50;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};
		
	class ivory_wrx_cop_unmarked : Default {
		vItemSpace = 50;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};
	
	class jonzie_ambulance : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};
	
	class ivory_b206_police : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 5000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 35000, 0, 0, 0 };
		garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 25650, 0, 0, 0 };
		garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
			{ "White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
			{ "Blue", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
			{ "Dark Red", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
			{ "Blue / White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Fed", "fed", {
	                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Police", "cop", {
	                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Taxi", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } }
	    };
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 4500;
        textures[] = {
        	{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
			{ "Black / White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
			{ "Beige", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

	class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
			{ "Digi Desert", "reb", {
	                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
	        } },
			{ "Black", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
	        } },
			{ "Blue", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
	        } },
			{ "Red", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
	        } },
			{ "White", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
	        } },
			{ "Digi Green", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
	        } },
			{ "Hunter Camo", "civ", {
	                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
	        } },
	        { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

	class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
		garageSell[] = { 62000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 20000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
		garageSell[] = { 49800, 3500, 0, 0 };
    };

	class O_Truck_03_covered_F {
		vItemSpace = 300;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};

	class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
			{ "Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
			{ "White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
			{ "Grey", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

	class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "Black", "cop", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Silver", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Cop", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
	        };
    };

	class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 25000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

	class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 35000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };
	class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Regular", "cop", {
                "\A3\Soft_F\MRAP_01\Data\mrap_01_base_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 45000, 19500, 0, 0 };
		garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
			{ "Black", "fed", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        storageFee[] = { 55000, 0, 22000, 0 };
		garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Black", "fed", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
			{ "White / Blue", "civ", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"   
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
			{ "Desert Digi", "reb", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa" 
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 375;
        storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 125000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };

    //Custom police cars

    class DAR_CVPIPolice : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class DAR_TaurusPolice : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class DAR_TaurusPoliceState : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class DAR_TaurusPoliceStateSlick : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class DAR_ChargerPolice : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class DAR_ChargerPoliceStateSlick : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class DAR_TahoePoliceSlick : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class DAR_TahoePoliceDet : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class DAR_TahoePolice : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class DAR_ExplorerPolice : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class DAR_ExplorerPoliceStealth : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	//Custom civ cars

	class IVORY_PRIUS : Default {
		vItemSpace = 50;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class ivory_wrx : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};
	
	class jonzie_escalade : Default {
		vItemSpace = 75;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class Jonzie_STI : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class Jonzie_Datsun_510 : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class Jonzie_Datsun_Z432 : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};
	
	class ivory_b206_rescue : Default {
		vItemSpace = 100;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class Jonzie_Raptor : Default {
		vItemSpace = 60;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class Jonzie_XB : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class Ivory_Supra : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class Ivory_m3_gts : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class Ivory_m3 : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class Jonzie_30CSL : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class ivory_tractor : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class ivory_tractor2 : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class jonzie_mini_cooper : Default {
		vItemSpace = 45;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class jonzie_mini_cooper_r_spec : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class jonzie_corolla : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class ivory_isf : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class ivory_gt500 : Default {
		vItemSpace = 30;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class Jonzie_Transit : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};
};