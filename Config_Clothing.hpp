/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
			{ "CUP_U_C_Priest_01", "", 1100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Jeans_04", "", 1100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Jeans_02", "", 1100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Jeans_01", "", 1100, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Jeans_03", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Citizen_02", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Citizen_01", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Citizen_04", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Citizen_03", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Pilot_01", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_02", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_03", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_01", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_04", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Rocker_01", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Rocker_02", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Rocker_03", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Rocker_04", "", 1100, { "", "", -1 } },
			{ "CUP_U_C_Suit_02", "", 19000, { "", "", -1 } },
			{ "CUP_U_C_Suit_01", "", 20000, { "", "", -1 } },
			{ "CUP_U_C_Villager_01", "", 3000, { "", "", -1 } },
			{ "CUP_U_C_Villager_02", "", 3000, { "", "", -1 } },
			{ "CUP_U_C_Villager_03", "", 3000, { "", "", -1 } },
			{ "CUP_U_C_Villager_04", "", 3000, { "", "", -1 } },
			{ "CUP_U_C_Woodlander_01", "", 3000, { "", "", -1 } },
			{ "CUP_U_C_Woodlander_02", "", 3000, { "", "", -1 } },
			{ "CUP_U_C_Woodlander_03", "", 3000, { "", "", -1 } },
			{ "CUP_U_C_Woodlander_04", "", 3000, { "", "", -1 } },
			{ "CUP_U_C_Worker_01", "", 3000, { "", "", -1 } },
			{ "CUP_U_C_Worker_02", "", 3000, { "", "", -1 } },
			{ "CUP_U_C_Worker_03", "", 3000, { "", "", -1 } },
			{ "CUP_U_C_Worker_04", "", 3000, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "CUP_U_C_Policeman_01", "Standard Uniform", 20, { "", "", -1 } },
			{ "U_Marshal", "Command Uniform", 350, { "life_coplevel", "SCALAR", 5 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "CUP_H_C_Policecap_01", "Standard Cap", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Cap_police", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_H_woolhat", "", 120, { "life_coplevel", "SCALAR", 1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 150, { "life_coplevel", "SCALAR", 3 } },
			{ "G_Balaclava_blk", "", 150, { "life_coplevel", "SCALAR", 3 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_POLICE", "ERU Tactical Vest", 800, { "life_coplevel", "SCALAR", 3 } },
			{ "TRYK_V_tacv1_MSL_BK", "Command Vest", 1500, { "life_coplevel", "SCALAR", 1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "A3RPG_PoliceBelt", "", 1000, { "", "", -1 } },
			{ "TRYK_B_Belt_BLK", "", 1000, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 800, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 500, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 2500, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 3500, { "", "", -1 } }
		};
	};

	class siu {
		title = "SIU Clothing";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "CUP_U_C_Suit_02", "Detective Suit Brown", 190, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Suit_01", "Detective Suit Black", 190, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 120, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 150, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 250, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_OrestesBody", "Surfing On Land", 110, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Priest_01", "", 100, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_O_TKI_Khet_Jeans_01", "", 110, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_O_TKI_Khet_Jeans_02", "", 110, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_O_TKI_Khet_Jeans_01", "", 110, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_O_TKI_Khet_Jeans_03", "", 110, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Citizen_02", "", 110, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Citizen_01", "", 110, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Citizen_01", "", 110, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Citizen_03", "", 110, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Pilot_01", "", 100, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Profiteer_02", "", 100, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Profiteer_03", "", 100, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Profiteer_01", "", 100, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Profiteer_01", "", 100, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Rocker_01", "", 110, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Rocker_02", "", 100, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Rocker_03", "", 100, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Rocker_01", "", 100, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Villager_01", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Villager_02", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Villager_03", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Villager_01", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Woodlander_01", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Woodlander_02", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Woodlander_03", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Woodlander_01", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Worker_01", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Worker_02", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Worker_03", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "CUP_U_C_Worker_01", "", 300, { "life_copsiulevel", "SCALAR", 1 } },
			{ "U_NikosAgedBody", "Casual Wears", 500, { "life_copsiulevel", "SCALAR", 1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", 1 } },
			{ "TRYK_H_PASGT_OD", "ERU Helmet", 75, { "life_coplevel", "SCALAR", 3 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "",-1 } },
			{ "G_Shades_Black", "", 25, { "", "", 1 } },
			{ "G_Shades_Blue", "", 20, { "", "", 1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", 1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", 1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", 1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", 1 } },
			{ "G_Squares", "", 10, { "", "", 1 } },
			{ "G_Aviator", "", 100, { "", "", 1 } },
			{ "G_Balaclava_oli", "", 150, { "life_copsiulevel", "SCALAR", 1 } },
			{ "G_Balaclava_blk", "", 150, { "life_copsiulevel", "SCALAR", 1 } },
			{ "G_Lady_Blue", "", 150, { "", "", 1 } },
			{ "G_Lowprofile", "", 30, { "", "", 1 } },
			{ "G_Combat", "", 55, { "", "", 1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", 1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", 1 } },
			{ "TRYK_B_Belt_BLK", "", 1000, { "", "", 1 } },
			{ "B_Kitbag_cbr", "", 800, { "", "", 1 } },
			{ "B_FieldPack_cbr", "", 500, { "", "", 1 } },
			{ "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 2500, { "", "", 1 } },
			{ "B_Carryall_cbr", "", 3500, { "", "", 1 } }
		};
	};

	class eru {
		title = "ERU Clothing";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "A3RPG_ERU_Uniform", "ERU Uniform", 350, { "life_copsrulevel", "SCALAR", 1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", 1 } },
			{ "H_Cap_police", "", 120, { "-1life_copsrulevel", "SCALAR", 1 } },
			{ "TRYK_H_woolhat", "", 120, { "-1life_copsrulevel", "SCALAR", 1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "",-1 } },
			{ "G_Shades_Black", "", 25, { "", "", 1 } },
			{ "G_Shades_Blue", "", 20, { "", "", 1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", 1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", 1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", 1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", 1 } },
			{ "G_Squares", "", 10, { "", "", 1 } },
			{ "G_Aviator", "", 100, { "", "", 1 } },
			{ "G_Balaclava_oli", "", 150, { "-1life_copsrulevel", "SCALAR", 1 } },
			{ "G_Balaclava_blk", "", 150, { "-1life_copsrulevel", "SCALAR", 1 } },
			{ "G_Lady_Blue", "", 150, { "", "", 1 } },
			{ "G_Lowprofile", "", 30, { "", "", 1 } },
			{ "G_Combat", "", 55, { "", "", 1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", 1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", 1 } },
			{ "TRYK_B_Belt_BLK", "", 1000, { "", "", 1 } },
			{ "B_Kitbag_cbr", "", 800, { "", "", 1 } },
			{ "B_FieldPack_cbr", "", 500, { "", "", 1 } },
			{ "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 2500, { "", "", 1 } },
			{ "B_Carryall_cbr", "", 3500, { "", "", 1 } }
		};
	};

	class med_clothing {
		title = "STR_Shops_C_Medics";
		license = "";
		side = "med";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "A3RPG_EMS1", "Volunteer Uniform", 1000, { "life_mediclevel", "SCALAR", 1 } },
			{ "A3RPG_EMS2", "Probie Uniform", 1000, { "life_mediclevel", "SCALAR", 1 } },
			{ "A3RPG_EMS3", "EMT Uniform (White Stripe)", 1000, { "life_mediclevel", "SCALAR", 2 } },
			{ "A3RPG_EMS4", "EMT Uniform (Yellow Stripe)", 1000, { "life_mediclevel", "SCALAR", 2 } },
			{ "A3RPG_EMS5", "Senior EMT Uniform (White Stripe)", 1000, { "life_mediclevel", "SCALAR", 3 } },
			{ "A3RPG_EMS6", "Senior EMT Uniform (Yellow Stripe)", 1000, { "life_mediclevel", "SCALAR", 3 } },
			{ "A3RPG_EMS7", "S&R Uniform (White Stripe)", 1000, { "life_mediclevel", "SCALAR", 3 } },
			{ "A3RPG_EMS8", "S&R Uniform (Yellow Stripe)", 1000, { "life_mediclevel", "SCALAR", 3 } },
			{ "A3RPG_EMS9", "S&R Wetsuit", 1000, { "life_mediclevel", "SCALAR", 3 } },
			{ "A3RPG_EMS10", "ERT Uniform", 1000, { "life_mediclevel", "SCALAR", 3 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_PilotHelmetHeli_B", "Pilot Helmet", 0, { "", "", 3 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "Rebreather", 1000, { "", "", -1 } },
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class med_sr_clothing {
		title = "S&R Clothing";
		license = "";
		side = "med";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "A3RPG_EMS7", "S&R Uniform (White Stripe)", 1000, { "life_medicsrlevel", "SCALAR", 1 } },
			{ "A3RPG_EMS8", "S&R Uniform (Yellow Stripe)", 1000, { "life_medicsrlevel", "SCALAR", 1 } },
			{ "A3RPG_EMS9", "S&R Wetsuit", 1000, { "life_medicsrlevel", "SCALAR", 2 } },
			{ "A3RPG_EMS10", "ERT Uniform", 1000, { "life_medicsrlevel", "SCALAR", 2 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_PilotHelmetHeli_B", "Pilot Helmet", 0, { "life_medicsrlevel", "SCALAR", 2 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "life_medicsrlevel", "SCALAR", 2 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "Rebreather", 1000, { "life_medicsrlevel", "SCALAR", 2 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 12500, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 7500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{"B_AssaultPack_cbr", "", 2500, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 3500, { "", "", -1 } },
			{ "U_C_Driver_1", "", 3600, { "", "", -1 } },
			{ "U_C_Driver_3", "", 3700, { "", "", -1 } },
			{ "U_C_Driver_4", "", 3700, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};