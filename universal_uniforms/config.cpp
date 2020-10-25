/*	
	Copyright(C) 2019-2020 SteelShot <https://github.com/ModsBySteelShot>
	
	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program. If not, see <https://www.gnu.org/licenses/>.
*/

class CfgPatches {
	class universal_uniforms {
		units[]= {};
		weapons[]= {};
		requiredVersion = 2.00;
		requiredAddons[]= { 
			"A3_Characters_F",
			"A3_Characters_F_Common",
			"A3_Characters_F_Exp",
			"A3_Characters_F_Exp_Civil",
			"A3_Characters_F_Jets",
			"A3_Characters_F_Patrol",
			"A3_Characters_F_Orange",
			"A3_Characters_F_Tacops",
			"A3_Characters_F_Tank",
			"A3_Characters_F_Enoch",
			"A3_Characters_F_Oldman"
		};
	};
};

class CfgMods {
	class universal_uniforms {
		name = "Universal Uniforms";
		version = "2.2.0";

		author = "SteelShot";
		authorID = "76561198029852322";

		dir = "UniversalUniforms";
		hideName = 0;
		hidePicture = 0;

		tooltipOwned = "Universal Uniforms";
		overview = "Wear any faction's uniform as any faction's member";
		description = "Wear any faction's uniform as any faction's member";

		actionName = "Website";
		action = "https://steamcommunity.com/sharedfiles/filedetails/?id=1474877262";
	};
};

class CfgVehicles {
	class CAManBase;
	
	class Civilian;
	
	class SoldierWB : CAManBase {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class SoldierEB : CAManBase {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class SoldierGB : CAManBase {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};
	
	class Civilian_F : Civilian {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_1 : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class VirtualMan_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class HeadlessClient_F : VirtualMan_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_base_F : SoldierWB {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_02_f : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_03_f : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_04_f : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_05_f : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_RangeMaster_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_lite_F : B_Soldier_03_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_GL_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_AR_F : B_Soldier_02_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_SL_F : B_Soldier_03_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_TL_F : B_Soldier_03_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_M_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_LAT_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_medic_F : B_Soldier_02_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_repair_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_exp_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Helipilot_F : B_Soldier_04_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_A_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_AT_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_AA_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_engineer_F : B_Soldier_03_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_crew_F : B_Soldier_03_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_officer_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Competitor_F : B_RangeMaster_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Pilot_F : B_Soldier_05_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_helicrew_F : B_Helipilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_PG_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_UAV_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_universal_F : B_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Survivor_F : B_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_unarmed_F : B_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_diver_base_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_diver_F : B_Soldier_diver_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_diver_TL_F : B_Soldier_diver_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_diver_exp_F : B_Soldier_diver_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_recon_base : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_recon_F : B_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_recon_LAT_F : B_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_recon_exp_F : B_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_recon_medic_F : B_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_recon_TL_F : B_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_recon_M_F : B_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_recon_JTAC_F : B_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_sniper_base_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_spotter_F : B_Soldier_sniper_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_sniper_F : B_Soldier_sniper_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Story_SF_Captain_F : B_Soldier_02_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Story_Protagonist_F : B_Soldier_02_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Story_Engineer_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Story_Colonel_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Story_Pilot_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Story_Tank_Commander_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class b_soldier_survival_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_soldier_GL_LAT_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_soldier_engineer_exp_F : B_Soldier_02_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_soldier_M_medic_F : B_Soldier_03_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_soldier_AR_A_F : B_Soldier_03_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_support_base_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_AAR_F : B_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_AAT_F : B_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_AAA_F : B_soldier_AAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_support_MG_F : B_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_support_GMG_F : B_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_support_Mort_F : B_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_support_AMG_F : B_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_support_AMort_F : B_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_1_1_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_1_2_F : C_man_1_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_1_3_F : C_man_1_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_1_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_1_F_afro : C_man_polo_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_1_F_euro : C_man_polo_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_1_F_asia : C_man_polo_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_2_F : C_man_polo_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_2_F_afro : C_man_polo_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_2_F_euro : C_man_polo_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_2_F_asia : C_man_polo_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_3_F : C_man_polo_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_3_F_afro : C_man_polo_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_3_F_euro : C_man_polo_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_3_F_asia : C_man_polo_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_4_F : C_man_polo_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_4_F_afro : C_man_polo_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_4_F_euro : C_man_polo_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_4_F_asia : C_man_polo_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_5_F : C_man_polo_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_5_F_afro : C_man_polo_5_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_5_F_euro : C_man_polo_5_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_5_F_asia : C_man_polo_5_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_6_F : C_man_polo_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_6_F_afro : C_man_polo_6_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_6_F_euro : C_man_polo_6_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_6_F_asia : C_man_polo_6_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_fugitive_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_fugitive_F_afro : C_man_p_fugitive_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_fugitive_F_euro : C_man_p_fugitive_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_fugitive_F_asia : C_man_p_fugitive_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_beggar_F : C_man_p_fugitive_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_beggar_F_afro : C_man_p_beggar_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_beggar_F_euro : C_man_p_beggar_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_beggar_F_asia : C_man_p_beggar_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_w_worker_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_scientist_F : C_man_w_worker_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_hunter_1_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_shorts_1_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_shorts_1_F_afro : C_man_p_shorts_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_shorts_1_F_euro : C_man_p_shorts_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_shorts_1_F_asia : C_man_p_shorts_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_1_F : C_man_p_shorts_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_1_F_afro : C_man_shorts_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_1_F_euro : C_man_shorts_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_1_F_asia : C_man_shorts_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_2_F : C_man_p_shorts_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_2_F_afro : C_man_shorts_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_2_F_euro : C_man_shorts_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_2_F_asia : C_man_shorts_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_3_F : C_man_p_shorts_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_3_F_afro : C_man_shorts_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_3_F_euro : C_man_shorts_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_3_F_asia : C_man_shorts_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_4_F : C_man_p_shorts_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_4_F_afro : C_man_shorts_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_4_F_euro : C_man_shorts_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_shorts_4_F_asia : C_man_shorts_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_pilot_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_journalist_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Orestes : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Nikos : C_Orestes {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Nikos_aged : C_Nikos {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_base_F : SoldierGB {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_lite_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_SL_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_TL_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_AR_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_medic_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_engineer_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_exp_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_GL_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_M_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_LAT_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_A_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_officer_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_F : I_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_F : I_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_lite_F : I_G_Soldier_lite_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_lite_F : I_G_Soldier_lite_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_SL_F : I_G_Soldier_SL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_SL_F : I_G_Soldier_SL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_TL_F : I_G_Soldier_TL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_TL_F : I_G_Soldier_TL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_AR_F : I_G_Soldier_AR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_AR_F : I_G_Soldier_AR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_medic_F : I_G_medic_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_medic_F : I_G_medic_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_engineer_F : I_G_engineer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_engineer_F : I_G_engineer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_exp_F : I_G_Soldier_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_exp_F : I_G_Soldier_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_GL_F : I_G_Soldier_GL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_GL_F : I_G_Soldier_GL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_M_F : I_G_Soldier_M_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_M_F : I_G_Soldier_M_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_LAT_F : I_G_Soldier_LAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_LAT_F : I_G_Soldier_LAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_A_F : I_G_Soldier_A_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_A_F : I_G_Soldier_A_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_officer_F : I_G_officer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_officer_F : I_G_officer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_unarmed_F : I_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_unarmed_F : B_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_unarmed_F : O_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Survivor_F : I_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Survivor_F : B_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Survivor_F : O_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_universal_F : B_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_universal_F : O_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_universal_F : I_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Story_Protagonist_F : B_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Story_SF_Captain_F : B_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_resistanceLeader_F : I_G_Story_Protagonist_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_resistanceCommander_F : I_G_Story_Protagonist_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_base_F : SoldierGB {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_02_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_03_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_04_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_soldier_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_lite_F : I_Soldier_02_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_A_F : I_Soldier_02_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_GL_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_AR_F : I_Soldier_02_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_SL_F : I_Soldier_02_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_TL_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_M_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_LAT_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_AT_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_AA_F : I_Soldier_02_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_medic_F : I_Soldier_02_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_repair_F : I_Soldier_02_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_exp_F : I_Soldier_02_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_engineer_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_crew_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_helipilot_F : I_Soldier_03_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_pilot_F : I_Soldier_04_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_helicrew_F : I_helipilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_officer_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Story_Colonel_F : I_officer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_soldier_UAV_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_universal_F : I_soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Survivor_F : I_soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_unarmed_F : I_soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_diver_base_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_diver_F : I_Soldier_diver_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_diver_exp_F : I_Soldier_diver_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_diver_TL_F : I_Soldier_diver_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_sniper_base_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Spotter_F : I_Soldier_sniper_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Sniper_F : I_Soldier_sniper_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_support_base_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_AAR_F : I_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_AAT_F : I_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_AAA_F : I_Soldier_AAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_support_MG_F : I_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_support_GMG_F : I_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_support_Mort_F : I_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_support_AMG_F : I_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_support_AMort_F : I_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_base_F : SoldierEB {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_02_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_officer_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_lite_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_GL_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_AR_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_SL_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_TL_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldier_M_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_LAT_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_medic_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldier_repair_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldier_exp_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_helipilot_F : O_Soldier_02_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_A_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_AT_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_AA_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_engineer_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_crew_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Pilot_F : O_helipilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_helicrew_F : O_helipilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldier_PG_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Story_Colonel_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Story_CEO_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldier_UAV_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_universal_F : O_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Survivor_F : O_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_unarmed_F : O_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_diver_base_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_diver_F : O_Soldier_diver_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_diver_TL_F : O_Soldier_diver_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_diver_exp_F : O_Soldier_diver_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_sniper_base_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_spotter_F : O_Soldier_sniper_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_sniper_F : O_Soldier_sniper_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_recon_base : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_recon_F : O_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_recon_M_F : O_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_recon_LAT_F : O_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_recon_medic_F : O_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_recon_exp_F : O_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_recon_JTAC_F : O_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_recon_TL_F : O_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_support_base_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_AAR_F : O_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_AAT_F : O_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_AAA_F : O_Soldier_AAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_support_MG_F : O_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_support_GMG_F : O_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_support_Mort_F : O_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_support_AMG_F : O_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_support_AMort_F : O_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_Urban_base : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_AR_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_AAR_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_LAT_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_AT_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_AAT_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_AA_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_AAA_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_TL_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_SoldierU_SL_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_medic_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_repair_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_exp_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_engineer_U_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_M_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldierU_A_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_SoldierU_GL_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_SoldierU_unarmed_F : O_soldierU_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_1_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_2_F : C_Driver_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_3_F : C_Driver_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_4_F : C_Driver_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_1_random_base_F : C_Driver_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_1_black_F : C_Driver_1_random_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_1_blue_F : C_Driver_1_random_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_1_green_F : C_Driver_1_random_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_1_red_F : C_Driver_1_random_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_1_white_F : C_Driver_1_random_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_1_yellow_F : C_Driver_1_random_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Driver_1_orange_F : C_Driver_1_random_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Marshal_F : B_RangeMaster_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Soldier_VR_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_VR_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_VR_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Soldier_VR_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Protagonist_VR_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Protagonist_VR_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Protagonist_VR_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Protagonist_VR_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_ghillie_base_F : B_Soldier_sniper_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_ghillie_lsh_F : B_ghillie_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_ghillie_sard_F : B_ghillie_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_ghillie_ard_F : B_ghillie_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_ghillie_base_F : O_Soldier_sniper_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_ghillie_lsh_F : O_ghillie_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_ghillie_sard_F : O_ghillie_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_ghillie_ard_F : O_ghillie_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_ghillie_base_F : I_Soldier_sniper_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_ghillie_lsh_F : I_ghillie_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_ghillie_sard_F : I_ghillie_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_ghillie_ard_F : I_ghillie_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Sharpshooter_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Recon_Sharpshooter_F : B_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Sharphooter_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_HeavyGunner_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Sharpshooter_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Urban_Sharpshooter_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Pathfinder_F : O_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_HeavyGunner_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Urban_HeavyGunner_F : O_Soldier_Urban_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Sharpshooter_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Sharpshooter_F : I_G_Sharpshooter_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Sharpshooter_F : I_G_Sharpshooter_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Captain_Pettka_F : B_Soldier_02_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Captain_Jay_F : B_Soldier_02_f {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Captain_Hladas_F : I_officer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_UAV_AI : B_Helipilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_UAV_AI : O_helipilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_UAV_AI : O_UAV_AI {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class Underwear_F : B_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class VirtualCurator_F : VirtualMan_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_VirtualCurator_F : VirtualCurator_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_VirtualCurator_F : VirtualCurator_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_VirtualCurator_F : VirtualCurator_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_VirtualCurator_F : VirtualCurator_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class VirtualSpectator_F : VirtualMan_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_base_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Para_1_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Para_2_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Para_3_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Para_4_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Para_5_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Para_6_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Para_7_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Para_8_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Bandit_1_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Bandit_2_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Bandit_3_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Bandit_4_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Bandit_5_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Bandit_6_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Bandit_7_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Bandit_8_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Camo_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Pilot_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Helipilot_F : I_C_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_universal_F : I_C_Soldier_Para_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_base_unarmed_F : I_C_Soldier_Para_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_A_F : B_Soldier_A_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_AAR_F : B_soldier_AAR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Support_AMG_F : B_support_AMG_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Support_AMort_F : B_support_AMort_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_AAA_F : B_soldier_AAA_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_AAT_F : B_soldier_AAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_AR_F : B_soldier_AR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Medic_F : B_medic_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Crew_F : B_crew_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Engineer_F : B_engineer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_Exp_F : B_soldier_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_GL_F : B_Soldier_GL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Support_GMG_F : B_support_GMG_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Support_MG_F : B_support_MG_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Support_Mort_F : B_support_Mort_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Helicrew_F : B_helicrew_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Helipilot_F : B_Helipilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_soldier_M_F : B_soldier_M_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_AA_F : B_soldier_AA_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_AT_F : B_soldier_AT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Officer_F : B_officer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_PG_F : B_soldier_PG_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Pilot_F : B_Pilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_Repair_F : B_soldier_repair_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_F : B_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_LAT_F : B_soldier_LAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_SL_F : B_Soldier_SL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_TL_F : B_Soldier_TL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_UAV_F : B_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Diver_F : B_diver_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Diver_Exp_F : B_diver_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Diver_TL_F : B_diver_TL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Recon_Exp_F : B_recon_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Recon_JTAC_F : B_recon_JTAC_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Recon_M_F : B_recon_M_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Recon_Medic_F : B_recon_medic_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Recon_F : B_recon_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Recon_LAT_F : B_recon_LAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Recon_TL_F : B_recon_TL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Sniper_F : B_sniper_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Spotter_F : B_spotter_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_ghillie_tna_F : B_ghillie_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_universal_F : B_T_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_unarmed_F : B_T_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_A_F : O_Soldier_A_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_AAR_F : O_Soldier_AAR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Support_AMG_F : O_support_AMG_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Support_AMort_F : O_support_AMort_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_AAA_F : O_Soldier_AAA_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_AAT_F : O_Soldier_AAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_AR_F : O_Soldier_AR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Medic_F : O_medic_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Crew_F : O_crew_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Engineer_F : O_engineer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_Exp_F : O_soldier_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_GL_F : O_Soldier_GL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Support_GMG_F : O_support_GMG_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Support_MG_F : O_support_MG_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Support_Mort_F : O_support_Mort_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Helicrew_F : O_helicrew_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Helipilot_F : O_helipilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_M_F : O_soldier_M_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_AA_F : O_Soldier_AA_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_AT_F : O_Soldier_AT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Officer_F : O_officer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_PG_F : O_soldier_PG_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Pilot_F : O_Pilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_Repair_F : O_soldier_repair_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_F : O_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_LAT_F : O_Soldier_LAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_SL_F : O_Soldier_SL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_TL_F : O_Soldier_TL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_UAV_F : O_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Diver_F : O_diver_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Diver_Exp_F : O_diver_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Diver_TL_F : O_diver_TL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Recon_Exp_F : O_recon_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Recon_JTAC_F : O_recon_JTAC_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Recon_M_F : O_recon_M_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Recon_Medic_F : O_recon_medic_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Recon_F : O_recon_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Recon_LAT_F : O_recon_LAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Recon_TL_F : O_recon_TL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Sniper_F : O_sniper_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Spotter_F : O_spotter_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_ghillie_tna_F : O_ghillie_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_Viper_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_Viper_hex_F : O_V_Soldier_Viper_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_universal_F : O_T_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_unarmed_F : O_T_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_base_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_F : B_CTRG_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_2_F : B_CTRG_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_3_F : B_CTRG_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_TL_tna_F : B_CTRG_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_Exp_tna_F : B_CTRG_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_Medic_tna_F : B_CTRG_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_M_tna_F : B_CTRG_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_tna_F : B_CTRG_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_LAT_tna_F : B_CTRG_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_AR_tna_F : B_CTRG_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_JTAC_tna_F : B_CTRG_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Miller_F : B_CTRG_Soldier_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_urb_1_F : B_CTRG_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_urb_2_F : B_CTRG_Soldier_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_urb_3_F : B_CTRG_Soldier_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_universal_F : B_CTRG_Soldier_tna_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_base_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_hex_F : O_V_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_TL_hex_F : O_V_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_Exp_hex_F : O_V_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_Medic_hex_F : O_V_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_M_hex_F : O_V_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_LAT_hex_F : O_V_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_JTAC_hex_F : O_V_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_ghex_F : O_V_Soldier_hex_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_TL_ghex_F : O_V_Soldier_TL_hex_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_Exp_ghex_F : O_V_Soldier_Exp_hex_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_Medic_ghex_F : O_V_Soldier_Medic_hex_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_M_ghex_F : O_V_Soldier_M_hex_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_LAT_ghex_F : O_V_Soldier_LAT_hex_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_V_Soldier_JTAC_ghex_F : O_V_Soldier_JTAC_hex_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_GEN_Soldier_base_F : B_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_GEN_Soldier_F : B_GEN_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_GEN_Commander_F : B_GEN_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_GEN_Soldier_universal_F : B_GEN_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Captain_Dwarden_F : B_GEN_Commander_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Captain_Ivan_F : I_C_Soldier_Para_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_1_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_1_F_afro : C_man_sport_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_1_F_euro : C_man_sport_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_1_F_asia : C_man_sport_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_1_F_tanoan : C_man_sport_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_2_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_2_F_afro : C_man_sport_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_2_F_euro : C_man_sport_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_2_F_asia : C_man_sport_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_2_F_tanoan : C_man_sport_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_3_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_3_F_afro : C_man_sport_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_3_F_euro : C_man_sport_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_3_F_asia : C_man_sport_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_3_F_tanoan : C_man_sport_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_1_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_1_F_afro : C_Man_casual_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_1_F_euro : C_Man_casual_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_1_F_asia : C_Man_casual_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_1_F_tanoan : C_Man_casual_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_2_F : C_Man_casual_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_2_F_afro : C_Man_casual_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_2_F_euro : C_Man_casual_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_2_F_asia : C_Man_casual_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_2_F_tanoan : C_Man_casual_2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_3_F : C_Man_casual_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_3_F_afro : C_Man_casual_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_3_F_euro : C_Man_casual_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_3_F_asia : C_Man_casual_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_3_F_tanoan : C_Man_casual_3_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_4_F : C_Man_casual_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_4_F_afro : C_Man_casual_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_4_F_euro : C_Man_casual_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_4_F_asia : C_Man_casual_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_4_F_tanoan : C_Man_casual_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_5_F : C_Man_casual_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_5_F_afro : C_Man_casual_5_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_5_F_euro : C_Man_casual_5_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_5_F_asia : C_Man_casual_5_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_5_F_tanoan : C_Man_casual_5_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_6_F : C_Man_casual_4_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_6_F_afro : C_Man_casual_6_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_6_F_euro : C_Man_casual_6_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_6_F_asia : C_Man_casual_6_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_6_F_tanoan : C_Man_casual_6_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_French_universal_F : C_Man_casual_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Deck_Crew_F : B_Helipilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Fighter_Pilot_F : B_Pilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Fighter_Pilot_F : O_Pilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Fighter_Pilot_F : I_pilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Patrol_Soldier_TL_F : B_Soldier_TL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Patrol_Soldier_UAV_F : B_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Patrol_Soldier_M_F : B_soldier_M_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Patrol_Medic_F : B_medic_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Patrol_Soldier_AR_F : B_soldier_AR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Patrol_Soldier_MG_F : B_soldier_AR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Patrol_HeavyGunner_F : B_HeavyGunner_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Patrol_Soldier_A_F : B_Soldier_A_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Patrol_Soldier_AT_F : B_soldier_AT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_Patrol_Engineer_F : B_engineer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_UAV_06_F : B_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_UAV_06_medical_F : B_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_soldier_UAV_06_F : B_T_Soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_soldier_UAV_06_medical_F : B_T_Soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_mine_F : B_soldier_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_soldier_mine_F : B_T_Soldier_Exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldier_UAV_06_F : O_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldier_UAV_06_medical_F : O_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_soldier_UAV_06_F : O_T_Soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_soldier_UAV_06_medical_F : O_T_Soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_soldier_mine_F : O_soldier_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_soldier_mine_F : O_T_Soldier_Exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_soldier_UAV_06_F : I_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_soldier_UAV_06_medical_F : I_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_soldier_mine_F : I_Soldier_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Story_Guerilla_01_F : B_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Story_Officer_01_F : I_officer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_Base_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_AidWorker_01_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_AidWorker_02_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_AidWorker_03_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_AidWorker_04_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_AidWorker_05_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_AidWorker_06_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_AidWorker_07_F : C_IDAP_Man_AidWorker_03_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_AidWorker_08_F : C_IDAP_Man_AidWorker_04_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_AidWorker_09_F : C_IDAP_Man_AidWorker_02_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_ConstructionWorker_01_Red_F : C_Driver_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_ConstructionWorker_01_Vrana_F : C_Man_ConstructionWorker_01_Red_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_ConstructionWorker_01_Black_F : C_Man_ConstructionWorker_01_Red_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_ConstructionWorker_01_Blue_F : C_Man_ConstructionWorker_01_Red_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Paramedic_01_base_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_Paramedic_01_F : C_Paramedic_01_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_Paramedic_01_F : C_Paramedic_01_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Pilot_01_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Journalist_01_War_F : C_journalist_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_UtilityWorker_01_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_EOD_01_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_EOD_01_TrainingMines_F : C_IDAP_Man_EOD_01_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_UAV_01_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_UAV_06_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_UAV_06_medical_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_IDAP_Man_UAV_06_antimine_F : C_IDAP_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_UAV_06_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_UAV_06_medical_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_Fisherman_01_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_Messenger_01_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Story_EOD_01_F : C_IDAP_Man_EOD_01_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Story_Mechanic_01_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_1_F_tanoan : C_Man_casual_1_F_tanoan {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_2_F_tanoan : C_Man_casual_2_F_tanoan {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_3_F_tanoan : C_Man_casual_3_F_tanoan {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_4_F_tanoan : C_Man_casual_4_F_tanoan {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_5_F_tanoan : C_Man_casual_5_F_tanoan {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_6_F_tanoan : C_Man_casual_6_F_tanoan {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_1_F_euro : C_Man_casual_1_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_2_F_euro : C_Man_casual_2_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_3_F_euro : C_Man_casual_3_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_4_F_euro : C_Man_casual_4_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_5_F_euro : C_Man_casual_5_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_casual_6_F_euro : C_Man_casual_6_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_man_polo_1_F_euro : C_man_polo_1_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_man_polo_2_F_euro : C_man_polo_2_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_man_polo_3_F_euro : C_man_polo_3_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_man_polo_4_F_euro : C_man_polo_4_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_man_polo_5_F_euro : C_man_polo_5_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_man_polo_6_F_euro : C_man_polo_6_F_euro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_soldier_base_F : O_officer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_soldier_A_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_soldier_AR_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_medic_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_soldier_GL_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_soldier_M_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_officer_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_soldier_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_soldier_LAT_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_soldier_SL_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_soldier_TL_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_soldier_AA_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_A_soldier_AT_F : O_A_soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_LAT2_F : B_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_T_Soldier_LAT2_F : B_soldier_LAT2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CTRG_Soldier_LAT2_tna_F : B_CTRG_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_G_Soldier_LAT2_F : I_G_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_G_Soldier_LAT2_F : I_G_Soldier_LAT2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_G_Soldier_LAT2_F : I_G_Soldier_LAT2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Soldier_LAT2_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_HAT_F : O_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_HAT_F : O_Soldier_HAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_Soldier_AHAT_F : O_Soldier_support_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_T_Soldier_AHAT_F : O_Soldier_AHAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_Story_Crew_F : I_crew_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_E_Man_Base_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_E_LooterJacket_01_F : C_E_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Uniform_Scientist_01_base_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Uniform_Scientist_01_F : C_Uniform_Scientist_01_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Uniform_Scientist_01_formal_F : C_Uniform_Scientist_01_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Uniform_Scientist_02_base_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Uniform_Scientist_02_F : C_Uniform_Scientist_02_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Uniform_Scientist_02_formal_F : C_Uniform_Scientist_02_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Uniform_Farmer_01_base_F : Civilian_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Uniform_Farmer_01_F : C_Uniform_Farmer_01_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_scientist_01_base_F : C_scientist_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_scientist_01_formal_F : C_scientist_01_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_scientist_02_formal_F : C_scientist_01_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_scientist_01_informal_F : C_scientist_01_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_scientist_02_informal_F : C_scientist_01_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_enoch_base_F : C_man_1 {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_1_enoch_F : C_man_enoch_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_2_enoch_F : C_man_enoch_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_3_enoch_F : C_man_enoch_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_4_enoch_F : C_man_enoch_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_5_enoch_F : C_man_enoch_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_6_enoch_F : C_man_enoch_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Farmer_01_enoch_F : C_man_enoch_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_1_enoch_F : C_Man_1_enoch_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_2_enoch_F : C_Man_2_enoch_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_3_enoch_F : C_Man_3_enoch_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_4_enoch_F : C_Man_4_enoch_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_5_enoch_F : C_Man_5_enoch_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Man_6_enoch_F : C_Man_6_enoch_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class CivilianPresence_C_Farmer_01_enoch_F : C_Farmer_01_enoch_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_ReconFatigues_01_wdl_F : B_Soldier_SL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CombatFatigues_01_wdl_F : B_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CombatFatigues_01_Tshirt_wdl_F : B_soldier_AR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_A_F : B_Soldier_A_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_AAR_F : B_soldier_AAR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Support_AMG_F : B_support_AMG_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Support_AMort_F : B_support_AMort_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_AAA_F : B_soldier_AAA_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_AAT_F : B_soldier_AAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_AR_F : B_soldier_AR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Medic_F : B_medic_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Crew_F : B_crew_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Engineer_F : B_engineer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_Exp_F : B_soldier_exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_soldier_mine_F : B_W_Soldier_Exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_GL_F : B_Soldier_GL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Support_GMG_F : B_support_GMG_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Support_MG_F : B_support_MG_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Support_Mort_F : B_support_Mort_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Helicrew_F : B_helicrew_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Helipilot_F : B_Helipilot_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_soldier_M_F : B_soldier_M_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_AA_F : B_soldier_AA_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_AT_F : B_soldier_AT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Officer_F : B_officer_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_Repair_F : B_soldier_repair_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_F : B_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_LAT_F : B_soldier_LAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_LAT2_F : B_soldier_LAT2_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_SL_F : B_Soldier_SL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_TL_F : B_Soldier_TL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_CBRN_F : B_W_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_RadioOperator_F : B_W_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Survivor_F : B_W_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_UGV_02_Science_F : B_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_soldier_UGV_02_Demining_F : B_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_UAV_F : B_soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_soldier_UGV_02_Science_F : B_W_Soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_soldier_UGV_02_Demining_F : B_W_Soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_universal_F : B_W_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_W_Soldier_unarmed_F : B_W_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Man_Base_F : O_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Gorka_base_F : O_R_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Gorka_F : O_R_Gorka_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Gorka_camo_F : O_R_Gorka_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Gorka_brown_F : O_R_Gorka_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Gorka_black_F : O_R_Gorka_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Soldier_Base_F : O_R_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Soldier_TL_F : O_R_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Soldier_GL_F : O_R_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_soldier_exp_F : O_R_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Soldier_AR_F : O_R_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_soldier_M_F : O_R_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_medic_F : O_R_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Soldier_LAT_F : O_R_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_JTAC_F : O_R_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Soldier_recon_base : O_R_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_recon_TL_F : O_R_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_recon_exp_F : O_R_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_recon_AR_F : O_R_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_recon_M_F : O_R_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_recon_medic_F : O_R_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_recon_GL_F : O_R_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_recon_LAT_F : O_R_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_recon_JTAC_F : O_R_Soldier_recon_base {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CBRN_Man_Base_F : B_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CBRN_Man_Oversuit_01_MTP_F : B_CBRN_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CBRN_Man_Oversuit_01_Tropic_F : B_CBRN_Man_Oversuit_01_MTP_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class B_CBRN_Man_Oversuit_01_Wdl_F : B_CBRN_Man_Oversuit_01_MTP_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_CBRN_Man_Oversuit_01_AAF_F : B_CBRN_Man_Oversuit_01_MTP_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_CBRN_Man_Oversuit_01_EAF_F : B_CBRN_Man_Oversuit_01_MTP_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_CBRN_Man_Oversuit_01_Blue_F : B_CBRN_Man_Oversuit_01_MTP_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_CBRN_Man_Oversuit_01_White_F : B_CBRN_Man_Oversuit_01_MTP_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Man_Base_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Uniform_01_F : I_E_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Uniform_01_tanktop_F : I_E_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Uniform_01_shortsleeve_F : I_E_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Uniform_01_officer_F : I_E_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Uniform_01_sweater_F : I_E_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Uniform_01_coveralls_F : I_E_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_base_F : I_E_Man_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_unarmed_F : I_E_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_A_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_AAR_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_AR_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_lite_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_GL_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_soldier_M_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Officer_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_SL_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_TL_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Survivor_F : I_E_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_RadioOperator_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_AA_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_AT_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_LAT_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_LAT2_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_AAA_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_AAT_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Support_GMG_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Support_MG_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Support_Mort_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Support_AMG_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Support_AMort_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_Pathfinder_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Engineer_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_Exp_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_soldier_Mine_F : I_E_Soldier_Exp_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_Repair_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_CBRN_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Scientist_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Scientist_Unarmed_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Medic_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_MP_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Crew_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Helipilot_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Helicrew_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_UAV_F : I_E_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_soldier_UAV_06_F : I_E_Soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_soldier_UAV_06_medical_F : I_E_Soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_soldier_UGV_02_Science_F : I_E_Soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_soldier_UGV_02_Demining_F : I_E_Soldier_UAV_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_E_Soldier_universal_F : I_E_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Patrol_Soldier_TL_F : O_R_Soldier_TL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Patrol_Soldier_AR_F : O_R_Soldier_AR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Patrol_Soldier_AR2_F : O_R_Soldier_AR_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Patrol_Soldier_GL_F : O_R_Soldier_GL_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Patrol_Soldier_A_F : O_R_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Patrol_Soldier_M_F : O_R_soldier_M_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Patrol_Soldier_M2_F : O_R_soldier_M_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Patrol_Soldier_Medic : O_R_medic_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Patrol_Soldier_Engineer_F : O_R_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_R_Patrol_Soldier_LAT_F : O_R_Soldier_LAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Soldier_Base_F : I_Soldier_base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Uniform_01_camo_F : I_G_Soldier_LAT_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Uniform_01_deserter_F : I_G_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Uniform_01_tshirt_skull_F : I_L_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Uniform_01_tshirt_black_F : I_L_Uniform_01_tshirt_skull_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Uniform_01_tshirt_sport_F : I_L_Uniform_01_tshirt_skull_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Uniform_01_tshirt_olive_F : I_L_Uniform_01_tshirt_skull_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Looter_Pistol_F : I_L_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Looter_SG_F : I_L_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Looter_Rifle_F : I_L_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Looter_SMG_F : I_L_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Criminal_SG_F : I_L_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Criminal_SMG_F : I_L_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_L_Hunter_F : I_L_Soldier_Base_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class SyndikatSoldier_Default : I_C_Soldier_Para_1_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class I_C_Soldier_Para_9_F : SyndikatSoldier_Default {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_GEN_Soldier_F : B_GEN_Soldier_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class O_GEN_Commander_F : B_GEN_Commander_F {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_p_beggar_F_afro_sick : C_man_p_beggar_F_afro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_1_F_afro_sick : C_Man_casual_1_F_afro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_3_F_afro_sick : C_Man_casual_3_F_afro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_4_F_afro_sick : C_Man_casual_4_F_afro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_5_F_afro_sick : C_Man_casual_5_F_afro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_Man_casual_6_F_afro_sick : C_Man_casual_6_F_afro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_1_F_afro_sick : C_man_polo_1_F_afro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_2_F_afro_sick : C_man_polo_2_F_afro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_3_F_afro_sick : C_man_polo_3_F_afro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_polo_6_F_afro_sick : C_man_polo_6_F_afro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class C_man_sport_2_F_afro_sick : C_man_sport_2_F_afro {
		modelSides[]= { 0, 1, 2, 3, 4, 5, 6, 7 };
	};
};
