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
	class universal_uniforms_bwm {
		units[]= {};
		weapons[]= {};
		requiredVersion = 2.00;
		requiredAddons[]= {
			"universal_uniforms",
			"bwa3_units"			
		};
	};
};

class CfgMods {
	class universal_uniforms_bwm {
		name = "Universal Uniforms: BWMod Edition";
		version = "2.2.0";

		author = "SteelShot";
		authorID = "76561198029852322";

		dir = "UniversalUniforms-BWM";
		hideName = 0;
		hidePicture = 0;

		tooltipOwned = "Universal Uniforms: BWMod Edition";
		overview = "Wear any faction's uniform as any faction's member";
		description = "Wear any faction's uniform as any faction's member";

		actionName = "Website";
		action = "https://steamcommunity.com/sharedfiles/filedetails/?id=2117887316";
	};
};

class CfgVehicles {
	class B_Soldier_base_F;

	class B_Soldier_02_f;

	class B_Soldier_03_f;

	class B_Soldier_sniper_base_F;

	class I_Soldier_base_F;

	class I_Soldier_02_F;

	class I_Soldier_sniper_base_F;
	
	class BWA3_Uniform_Fleck : B_Soldier_base_F {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_Tropen : BWA3_Uniform_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_Multi : BWA3_Uniform_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_tee_Fleck : B_Soldier_02_f {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_tee_Tropen : BWA3_Uniform_tee_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_tee_Multi : BWA3_Uniform_tee_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_sleeves_Fleck : B_Soldier_03_f {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_sleeves_Tropen : BWA3_Uniform_sleeves_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_sleeves_Multi : BWA3_Uniform_sleeves_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_Ghillie_Fleck : B_Soldier_sniper_base_F {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_Ghillie_Tropen : BWA3_Uniform_Ghillie_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_Ghillie_Multi : BWA3_Uniform_Ghillie_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_Crew_Fleck : B_Soldier_base_F {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_Crew_Tropen : BWA3_Uniform_Crew_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_Crew_Multi : BWA3_Uniform_Crew_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform_Helipilot : B_Soldier_base_F {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform2_Fleck : I_Soldier_base_F {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform2_Tropen : BWA3_Uniform2_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform2_Multi : BWA3_Uniform2_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform2_sleeves_Fleck : I_Soldier_02_F {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform2_sleeves_Tropen : BWA3_Uniform2_sleeves_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform2_sleeves_Multi : BWA3_Uniform2_sleeves_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform2_Ghillie_Fleck : I_Soldier_sniper_base_F {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform2_Ghillie_Tropen : BWA3_Uniform2_Ghillie_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Uniform2_Ghillie_Multi : BWA3_Uniform2_Ghillie_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_base : B_Soldier_base_F {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_Tropen : BWA3_Rifleman_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_Multi : BWA3_Rifleman_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_lite_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_lite_Tropen : BWA3_Rifleman_lite_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_lite_Multi : BWA3_Rifleman_lite_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_unarmed_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_unarmed_Tropen : BWA3_Rifleman_unarmed_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_unarmed_Multi : BWA3_Rifleman_unarmed_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_G27_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_G27_Tropen : BWA3_Rifleman_G27_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_G27_Multi : BWA3_Rifleman_G27_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Grenadier_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Grenadier_Tropen : BWA3_Grenadier_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Grenadier_Multi : BWA3_Grenadier_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Grenadier_G27_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Grenadier_G27_Tropen : BWA3_Grenadier_G27_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Grenadier_G27_Multi : BWA3_Grenadier_G27_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_MachineGunner_MG4_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_MachineGunner_MG4_Tropen : BWA3_MachineGunner_MG4_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_MachineGunner_MG4_Multi : BWA3_MachineGunner_MG4_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_MachineGunner_MG3_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_MachineGunner_MG3_Tropen : BWA3_MachineGunner_MG3_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_MachineGunner_MG3_Multi : BWA3_MachineGunner_MG3_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_MachineGunner_MG5_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_MachineGunner_MG5_Tropen : BWA3_MachineGunner_MG5_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_MachineGunner_MG5_Multi : BWA3_MachineGunner_MG5_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Medic_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Medic_Tropen : BWA3_Medic_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Medic_Multi : BWA3_Medic_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Marksman_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Marksman_Tropen : BWA3_Marksman_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Marksman_Multi : BWA3_Marksman_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_G28_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_G28_Tropen : BWA3_Rifleman_G28_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_G28_Multi : BWA3_Rifleman_G28_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Sniper_G29_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Sniper_G29_Tropen : BWA3_Sniper_G29_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Sniper_G29_Multi : BWA3_Sniper_G29_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Sniper_G82_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Sniper_G82_Tropen : BWA3_Sniper_G82_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Sniper_G82_Multi : BWA3_Sniper_G82_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Spotter_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Spotter_Tropen : BWA3_Spotter_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Spotter_Multi : BWA3_Spotter_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAT_RGW90_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAT_RGW90_Tropen : BWA3_RiflemanAT_RGW90_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAT_RGW90_Multi : BWA3_RiflemanAT_RGW90_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAT_PzF3_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAT_PzF3_Tropen : BWA3_RiflemanAT_PzF3_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAT_PzF3_Multi : BWA3_RiflemanAT_PzF3_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAT_CG_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAT_CG_Tropen : BWA3_RiflemanAT_CG_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAT_CG_Multi : BWA3_RiflemanAT_CG_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAA_Fliegerfaust_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAA_Fliegerfaust_Tropen : BWA3_RiflemanAA_Fliegerfaust_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_RiflemanAA_Fliegerfaust_Multi : BWA3_RiflemanAA_Fliegerfaust_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Engineer_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Engineer_Tropen : BWA3_Engineer_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Engineer_Multi : BWA3_Engineer_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_TL_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_TL_Tropen : BWA3_TL_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_TL_Multi : BWA3_TL_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_SL_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_SL_Tropen : BWA3_SL_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_SL_Multi : BWA3_SL_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Officer_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Officer_Tropen : BWA3_Officer_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Officer_Multi : BWA3_Officer_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Crew_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Crew_Tropen : BWA3_Crew_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Crew_Multi : BWA3_Crew_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Tank_Commander_Fleck : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Tank_Commander_Tropen : BWA3_Tank_Commander_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Tank_Commander_Multi : BWA3_Tank_Commander_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Helipilot : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_Rifleman_recon_base : BWA3_Rifleman_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Fleck : BWA3_Rifleman_recon_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Tropen : BWA3_recon_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Multi : BWA3_recon_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_LAT_Fleck : BWA3_Rifleman_recon_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_LAT_Tropen : BWA3_recon_LAT_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_LAT_Multi : BWA3_recon_LAT_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Pioneer_Fleck : BWA3_Rifleman_recon_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Pioneer_Tropen : BWA3_recon_Pioneer_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Pioneer_Multi : BWA3_recon_Pioneer_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Medic_Fleck : BWA3_Rifleman_recon_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Medic_Tropen : BWA3_recon_Medic_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Medic_Multi : BWA3_recon_Medic_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_TL_Fleck : BWA3_Rifleman_recon_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_TL_Tropen : BWA3_recon_TL_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_TL_Multi : BWA3_recon_TL_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Marksman_Fleck : BWA3_Rifleman_recon_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Marksman_Tropen : BWA3_recon_Marksman_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Marksman_Multi : BWA3_recon_Marksman_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Radioman_Fleck : BWA3_Rifleman_recon_base {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Radioman_Tropen : BWA3_recon_Radioman_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};

	class BWA3_recon_Radioman_Multi : BWA3_recon_Radioman_Fleck {
		modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };
	};
};
