/*
    Copyright(C) 2019-2024 SteelShot <https://github.com/ModsBySteelShot>

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

class CfgPatches
{
    class universal_uniforms_rhs
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.16;
        requiredAddons[] = {"universal_uniforms", "rhs_c_troops",     "rhsusf_c_troops",
                            "rhs_cti_insurgents", "rhsgref_c_troops", "rhssaf_c_troops"};
    };
};

class CfgMods
{
    class universal_uniforms_rhs
    {
        name = "Universal Uniforms: RHS Edition";
        version = "2.3.0";

        author = "SteelShot";
        authorID = "76561198029852322";

        dir = "UniversalUniforms-RHS";
        hideName = 0;
        hidePicture = 0;

        tooltipOwned = "Universal Uniforms: RHS Edition";
        overview = "Wear any faction's uniform as any faction's member";
        description = "Wear any faction's uniform as any faction's member";

        actionName = "Website";
        action = "https://steamcommunity.com/sharedfiles/filedetails/?id=1475582774";
    };
};

class CfgVehicles
{
    class SoldierGB;

    class SoldierWB;

    class I_G_Soldier_F;

    class rhs_infantry_msv_base : SoldierGB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_rifleman : rhs_infantry_msv_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_LAT : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_RShG2 : rhs_msv_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_grenadier : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_arifleman : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_arifleman_rpk : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_machinegunner : rhs_msv_arifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_machinegunner_assistant : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_grenadier_rpg : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_strelok_rpg_assist : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_marksman : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_efreitor : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_sergeant : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_junior_sergeant : rhs_msv_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_officer_armored : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_officer : rhs_msv_officer_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_at : rhs_msv_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_aa : rhs_msv_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_engineer : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_medic : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_driver_armored : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_driver : rhs_msv_driver_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_crew : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_armoredcrew : rhs_msv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_combatcrew : rhs_msv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_crew_commander : rhs_msv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_pilot_base : rhs_infantry_msv_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_pilot_tan_base : rhs_pilot_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_pilot : rhs_pilot_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_pilot_tan : rhs_pilot_tan_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_pilot_combat_heli : rhs_pilot_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_pilot_transport_heli : rhs_pilot_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_rifleman : rhs_msv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_LAT : rhs_msv_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_RShG2 : rhs_msv_RShG2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_grenadier : rhs_msv_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_arifleman : rhs_msv_arifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_arifleman_rpk : rhs_msv_arifleman_rpk
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_machinegunner : rhs_msv_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_machinegunner_assistant : rhs_msv_machinegunner_assistant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_grenadier_rpg : rhs_msv_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_strelok_rpg_assist : rhs_msv_strelok_rpg_assist
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_marksman : rhs_msv_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_efreitor : rhs_msv_emr_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_sergeant : rhs_msv_emr_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_junior_sergeant : rhs_msv_emr_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_officer_armored : rhs_msv_officer_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_officer : rhs_msv_emr_officer_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_at : rhs_msv_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_aa : rhs_msv_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_engineer : rhs_msv_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_medic : rhs_msv_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_driver_armored : rhs_msv_driver_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_driver : rhs_msv_driver
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_crew : rhs_msv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_armoredcrew : rhs_msv_armoredcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_combatcrew : rhs_msv_combatcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_crew_commander : rhs_msv_crew_commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_emr_rifleman_patchless : rhs_msv_emr_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_emr_patchless : rhs_msv_emr_rifleman_patchless
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_mflora_rifleman_patchless : rhs_msv_emr_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_rifleman_patchless : rhs_msv_emr_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_rifleman_patchless_alt : rhs_msv_emr_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_msv_rifleman_m88_patchless : rhs_msv_emr_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_infantry_vdv_base : rhs_infantry_msv_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_rifleman : rhs_infantry_vdv_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_rifleman_alt : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_rifleman_lite : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_LAT : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_RShG2 : rhs_vdv_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_grenadier : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_grenadier_alt : rhs_vdv_rifleman_alt
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_rifleman_asval : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_arifleman : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_arifleman_rpk : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_machinegunner : rhs_vdv_arifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_machinegunner_assistant : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_marksman : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_marksman_asval : rhs_vdv_rifleman_asval
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_efreitor : rhs_vdv_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_sergeant : rhs_vdv_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_junior_sergeant : rhs_vdv_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_officer_armored : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_officer : rhs_vdv_officer_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_grenadier_rpg : rhs_vdv_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_at : rhs_vdv_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_aa : rhs_vdv_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_strelok_rpg_assist : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_medic : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_engineer : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_driver_armored : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_driver : rhs_vdv_driver_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_crew : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_armoredcrew : rhs_vdv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_combatcrew : rhs_vdv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_crew_commander : rhs_vdv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_infantry_vdv_des_base : rhs_infantry_vdv_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_rifleman : rhs_infantry_vdv_des_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_rifleman_lite : rhs_vdv_des_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_emr_des_rifleman_patchless : rhs_vdv_des_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_LAT : rhs_vdv_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_RShG2 : rhs_vdv_RShG2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_grenadier : rhs_vdv_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_rifleman_asval : rhs_vdv_rifleman_asval
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_arifleman : rhs_vdv_arifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_arifleman_rpk : rhs_vdv_arifleman_rpk
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_machinegunner : rhs_vdv_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_machinegunner_assistant : rhs_vdv_machinegunner_assistant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_marksman : rhs_vdv_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_marksman_asval : rhs_vdv_marksman_asval
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_efreitor : rhs_vdv_efreitor
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_sergeant : rhs_vdv_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_junior_sergeant : rhs_vdv_junior_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_officer_armored : rhs_vdv_officer_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_officer : rhs_vdv_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_grenadier_rpg : rhs_vdv_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_at : rhs_vdv_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_aa : rhs_vdv_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_strelok_rpg_assist : rhs_vdv_strelok_rpg_assist
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_medic : rhs_vdv_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_engineer : rhs_vdv_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_driver_armored : rhs_vdv_driver_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_driver : rhs_vdv_driver
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_crew : rhs_vdv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_armoredcrew : rhs_vdv_armoredcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_combatcrew : rhs_vdv_combatcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_des_crew_commander : rhs_vdv_crew_commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_gorka_r_y_rifleman : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_gorka_r_g_rifleman : rhs_vdv_gorka_r_y_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_gorka_r_y_gloves_rifleman : rhs_vdv_gorka_r_y_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_gorka_r_g_gloves_rifleman : rhs_vdv_gorka_r_g_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_gorka_1_a_rifleman : rhs_vdv_gorka_r_y_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_gorka_1_b_rifleman : rhs_vdv_gorka_1_a_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_rifleman : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_rifleman_lite : rhs_vdv_flora_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_efreitor : rhs_vdv_efreitor
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_grenadier : rhs_vdv_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_grenadier_rpg : rhs_vdv_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_arifleman_rpk : rhs_vdv_arifleman_rpk
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_machinegunner : rhs_vdv_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_machinegunner_assistant : rhs_vdv_machinegunner_assistant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_at : rhs_vdv_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_aa : rhs_vdv_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_strelok_rpg_assist : rhs_vdv_strelok_rpg_assist
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_marksman : rhs_vdv_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_officer_armored : rhs_vdv_officer_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_officer : rhs_vdv_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_sergeant : rhs_vdv_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_junior_sergeant : rhs_vdv_junior_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_engineer : rhs_vdv_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_driver_armored : rhs_vdv_driver_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_driver : rhs_vdv_driver
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_medic : rhs_vdv_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_LAT : rhs_vdv_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_RShG2 : rhs_vdv_RShG2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_crew : rhs_vdv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_crew_commander : rhs_vdv_crew_commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_armoredcrew : rhs_vdv_armoredcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_flora_combatcrew : rhs_vdv_combatcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_rifleman : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_rifleman_lite : rhs_vdv_mflora_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_efreitor : rhs_vdv_efreitor
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_grenadier : rhs_vdv_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_grenadier_rpg : rhs_vdv_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_arifleman_rpk : rhs_vdv_arifleman_rpk
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_machinegunner : rhs_vdv_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_machinegunner_assistant : rhs_vdv_machinegunner_assistant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_at : rhs_vdv_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_aa : rhs_vdv_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_strelok_rpg_assist : rhs_vdv_strelok_rpg_assist
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_marksman : rhs_vdv_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_officer_armored : rhs_vdv_officer_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_officer : rhs_vdv_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_sergeant : rhs_vdv_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_junior_sergeant : rhs_vdv_junior_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_engineer : rhs_vdv_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_driver_armored : rhs_vdv_driver_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_driver : rhs_vdv_driver
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_medic : rhs_vdv_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_LAT : rhs_vdv_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_RShG2 : rhs_vdv_RShG2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_crew : rhs_vdv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_crew_commander : rhs_vdv_crew_commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_armoredcrew : rhs_vdv_armoredcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_mflora_combatcrew : rhs_vdv_combatcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_rifleman : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_rifleman_l : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_rifleman_akms : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_rifleman_ak103 : rhs_vdv_recon_rifleman_akms
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_rifleman_lat : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_grenadier : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_rifleman_asval : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_arifleman : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_machinegunner_assistant : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_arifleman_rpk : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_efreitor : rhs_vdv_recon_rifleman_lat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_sergeant : rhs_vdv_recon_rifleman_lat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_officer_armored : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_officer : rhs_vdv_recon_officer_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_marksman : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_marksman_asval : rhs_vdv_recon_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_marksman_vss : rhs_vdv_recon_marksman_asval
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_medic : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_rifleman_scout : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_rifleman_scout_akm : rhs_vdv_recon_rifleman_akms
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_grenadier_scout : rhs_vdv_recon_rifleman_scout_akm
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_arifleman_scout : rhs_vdv_recon_rifleman_scout
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vdv_recon_arifleman_rpk_scout : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_mvd_izlom_rifleman : rhs_infantry_vdv_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_mvd_izlom_rifleman_asval : rhs_mvd_izlom_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_mvd_izlom_rifleman_LAT : rhs_mvd_izlom_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_mvd_izlom_grenadier_rpg : rhs_mvd_izlom_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_mvd_izlom_arifleman : rhs_mvd_izlom_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_mvd_izlom_arifleman_rpk : rhs_mvd_izlom_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_mvd_izlom_machinegunner : rhs_mvd_izlom_arifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_mvd_izlom_marksman : rhs_mvd_izlom_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_mvd_izlom_marksman_vss : rhs_mvd_izlom_rifleman_asval
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_mvd_izlom_efreitor : rhs_mvd_izlom_rifleman_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_mvd_izlom_sergeant : rhs_mvd_izlom_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_rifleman : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_rifleman_lite : rhs_vmf_emr_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_efreitor : rhs_vdv_efreitor
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_grenadier : rhs_vdv_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_grenadier_rpg : rhs_vdv_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_arifleman_rpk : rhs_vdv_arifleman_rpk
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_machinegunner : rhs_vdv_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_machinegunner_assistant : rhs_vdv_machinegunner_assistant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_at : rhs_vdv_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_aa : rhs_vdv_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_strelok_rpg_assist : rhs_vdv_strelok_rpg_assist
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_marksman : rhs_vdv_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_officer_armored : rhs_vdv_officer_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_officer : rhs_vdv_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_sergeant : rhs_vdv_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_junior_sergeant : rhs_vdv_junior_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_engineer : rhs_vdv_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_driver_armored : rhs_vdv_driver_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_driver : rhs_vdv_driver
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_medic : rhs_vdv_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_LAT : rhs_vdv_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_RShG2 : rhs_vdv_RShG2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_crew : rhs_vdv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_crew_commander : rhs_vdv_crew_commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_armoredcrew : rhs_vdv_armoredcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_emr_combatcrew : rhs_vdv_combatcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_rifleman : rhs_vdv_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_rifleman_subdued : rhs_vmf_flora_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_rifleman_lite : rhs_vmf_flora_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_efreitor : rhs_vdv_efreitor
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_grenadier : rhs_vdv_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_grenadier_rpg : rhs_vdv_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_arifleman_rpk : rhs_vdv_arifleman_rpk
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_machinegunner : rhs_vdv_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_machinegunner_assistant : rhs_vdv_machinegunner_assistant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_at : rhs_vdv_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_aa : rhs_vdv_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_strelok_rpg_assist : rhs_vdv_strelok_rpg_assist
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_marksman : rhs_vdv_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_officer_armored : rhs_vdv_officer_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_officer : rhs_vdv_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_sergeant : rhs_vdv_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_junior_sergeant : rhs_vdv_junior_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_engineer : rhs_vdv_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_driver_armored : rhs_vdv_driver_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_driver : rhs_vdv_driver
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_medic : rhs_vdv_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_LAT : rhs_vdv_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_RShG2 : rhs_vdv_RShG2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_crew : rhs_vdv_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_crew_commander : rhs_vdv_crew_commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_armoredcrew : rhs_vdv_armoredcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_flora_combatcrew : rhs_vdv_combatcrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_rifleman : rhs_vdv_recon_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_rifleman_l : rhs_vdv_recon_rifleman_asval
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_rifleman_akms : rhs_vdv_recon_rifleman_akms
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_rifleman_lat : rhs_vdv_recon_rifleman_lat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_grenadier : rhs_vdv_recon_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_rifleman_asval : rhs_vdv_recon_rifleman_asval
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_arifleman : rhs_vdv_recon_arifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_machinegunner_assistant : rhs_vdv_recon_machinegunner_assistant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_efreitor : rhs_vdv_recon_efreitor
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_sergeant : rhs_vdv_recon_sergeant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_officer_armored : rhs_vdv_recon_officer_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_officer : rhs_vdv_recon_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_marksman : rhs_vdv_recon_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_marksman_vss : rhs_vdv_recon_marksman_vss
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_medic : rhs_vdv_recon_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_rifleman_scout : rhs_vdv_recon_rifleman_scout
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_rifleman_scout_akm : rhs_vdv_recon_rifleman_scout_akm
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_grenadier_scout : rhs_vdv_recon_grenadier_scout
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vmf_recon_arifleman_scout : rhs_vdv_recon_arifleman_scout
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_rva_crew : rhs_infantry_msv_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_rva_crew_armored : rhs_rva_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_rva_crew_officer : rhs_rva_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_rva_crew_officer_armored : rhs_rva_crew_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_invisible_man : rhs_infantry_msv_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_base : rhs_infantry_msv_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_ttsko_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_ttsko_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_ttsko_2_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_ttsko_2_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_klmk_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_klmk_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_spetsodezhda_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_spetsodezhda_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_grey_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_grey_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_wdl_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_wdl_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_moldovan_ttsko_cold_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_moldovan_ttsko_cold_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_moldovan_ttsko_hot_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_moldovan_ttsko_hot_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_moldovan_ttsko_desat_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_moldovan_ttsko_desat_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_moldovan_ttsko_blue_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_moldovan_ttsko_blue_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_vsr_1_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_vsr_1_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_vsr_2_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_vsr_2_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_vsr_3_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_boots_vsr_3_base : rhs_afghanka_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_boots_base : rhs_afghanka_winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_ttsko_base : rhs_afghanka_winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_boots_ttsko_base : rhs_afghanka_winter_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_vsr_base : rhs_afghanka_winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_boots_vsr_base : rhs_afghanka_winter_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_vsr_2_base : rhs_afghanka_winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_boots_vsr_2_base : rhs_afghanka_winter_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_vsr_3_base : rhs_afghanka_winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_boots_vsr_3_base : rhs_afghanka_winter_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_moldovan_ttsko_base : rhs_afghanka_winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_boots_moldovan_ttsko_base : rhs_afghanka_winter_boots_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_spetsodezhda_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_winter_boots_spetsodezhda_base : rhs_afghanka_winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_para_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_para_ttsko_base : rhs_afghanka_para_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_para_ttsko_2_base : rhs_afghanka_para_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_para_vsr_base : rhs_afghanka_para_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_afghanka_para_vsr_2_base : rhs_afghanka_para_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_omon_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_cossack_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_klmk_oversuit_base : rhs_afghanka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vkpo_base : rhs_infantry_msv_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vkpo_alt_base : rhs_vkpo_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vkpo_gloves_base : rhs_vkpo_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_vkpo_gloves_alt_base : rhs_vkpo_alt_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_6sh122_base : rhs_vkpo_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_6sh122_v1_base : rhs_6sh122_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_6sh122_v2_base : rhs_6sh122_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_6sh122_gloves_v1_base : rhs_6sh122_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_6sh122_gloves_v2_base : rhs_6sh122_gloves_v1_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_uniform_base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_mc_uniform : rhsusf_socom_uniform_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_g3_m81_uniform : rhsusf_socom_uniform_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_g3_aor2_uniform : rhsusf_socom_uniform_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_g3_tan_uniform : rhsusf_socom_uniform_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_g3_rgr_uniform : rhsusf_socom_uniform_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_g3_blk_uniform : rhsusf_socom_uniform_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_acu_uniform : rhsusf_socom_uniform_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_acu2_uniform : rhsusf_army_acu_uniform
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_acu_ucpd_uniform : rhsusf_army_acu_uniform
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_acu_oefcp_uniform : rhsusf_army_acu_uniform
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_acu_ocp_uniform : rhsusf_army_acu_uniform
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_airforce_abu_uniform : rhsusf_socom_uniform_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_bdu_erdl_uniform : rhsusf_airforce_abu_uniform
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_infantry_army_base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_infantry_army_1stcav : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_infantry_army_10th : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_rifleman_1stcav : rhsusf_infantry_army_1stcav
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_rifleman_10th : rhsusf_infantry_army_10th
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_rifleman : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_rifleman_m4 : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_rifleman_m16 : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_rifleman_m590 : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_riflemanl : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_riflemanat : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_grenadier : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_autorifleman : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_autoriflemana : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_machinegunner : rhsusf_army_ocp_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_machinegunnera : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_marksman : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_officer : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_squadleader : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_teamleader : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_jfo : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_fso : rhsusf_army_ocp_jfo
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_javelin : rhsusf_army_ocp_riflemanat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_javelin_assistant : rhsusf_army_ocp_riflemanat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_maaws : rhsusf_army_ocp_riflemanat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_aa : rhsusf_army_ocp_riflemanat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_uav : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_medic : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_engineer : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_explosives : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_sniper : rhsusf_army_ocp_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_sniper_m24sws : rhsusf_army_ocp_sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_sniper_m107 : rhsusf_army_ocp_sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_crewman : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_combatcrewman : rhsusf_army_ocp_crewman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_driver : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_driver_armored : rhsusf_army_ocp_driver
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_helipilot : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_ah64_pilot : rhsusf_army_ocp_helipilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_helicrew : rhsusf_army_ocp_helipilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_rifleman_1stcav : rhsusf_army_ocp_rifleman_1stcav
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_rifleman_10th : rhsusf_army_ocp_rifleman_10th
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_rifleman : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_rifleman_m4 : rhsusf_army_ocp_rifleman_m4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_rifleman_m16 : rhsusf_army_ocp_rifleman_m16
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_rifleman_m590 : rhsusf_army_ocp_rifleman_m590
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_riflemanl : rhsusf_army_ocp_riflemanl
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_riflemanat : rhsusf_army_ocp_riflemanat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_grenadier : rhsusf_army_ocp_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_autorifleman : rhsusf_army_ocp_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_autoriflemana : rhsusf_army_ocp_autoriflemana
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_machinegunner : rhsusf_army_ocp_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_machinegunnera : rhsusf_army_ocp_machinegunnera
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_marksman : rhsusf_army_ocp_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_officer : rhsusf_army_ocp_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_squadleader : rhsusf_army_ocp_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_teamleader : rhsusf_army_ocp_teamleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_jfo : rhsusf_army_ocp_jfo
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_fso : rhsusf_army_ocp_fso
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_javelin : rhsusf_army_ocp_javelin
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_javelin_assistant : rhsusf_army_ocp_javelin_assistant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_maaws : rhsusf_army_ocp_maaws
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_aa : rhsusf_army_ocp_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_uav : rhsusf_army_ocp_uav
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_medic : rhsusf_army_ocp_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_engineer : rhsusf_army_ocp_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_explosives : rhsusf_army_ocp_explosives
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_sniper : rhsusf_army_ocp_sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_sniper_m24sws : rhsusf_army_ocp_sniper_m24sws
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_sniper_m107 : rhsusf_army_ocp_sniper_m107
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_crewman : rhsusf_army_ocp_crewman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_combatcrewman : rhsusf_army_ocp_combatcrewman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_driver : rhsusf_army_ocp_driver
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_driver_armored : rhsusf_army_ocp_driver_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_helipilot : rhsusf_army_ocp_helipilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_ah64_pilot : rhsusf_army_ocp_ah64_pilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_helicrew : rhsusf_army_ocp_helicrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_infantry_army_82nd : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_infantry_army_101st : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_rifleman_82nd : rhsusf_infantry_army_82nd
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_rifleman_101st : rhsusf_infantry_army_101st
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_rifleman : rhsusf_army_ocp_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_riflemanl : rhsusf_army_ocp_arb_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_rifleman_arb_m16 : rhsusf_army_ocp_rifleman_m16
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_rifleman_m590 : rhsusf_army_ocp_rifleman_m590
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_riflemanat : rhsusf_army_ocp_riflemanat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_maaws : rhsusf_army_ocp_maaws
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_grenadier : rhsusf_army_ocp_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_autorifleman : rhsusf_army_ocp_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_autoriflemana : rhsusf_army_ocp_autoriflemana
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_machinegunner : rhsusf_army_ocp_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_machinegunnera : rhsusf_army_ocp_machinegunnera
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_marksman : rhsusf_army_ocp_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_squadleader : rhsusf_army_ocp_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_teamleader : rhsusf_army_ocp_teamleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_medic : rhsusf_army_ocp_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_engineer : rhsusf_army_ocp_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ocp_arb_sniper_m107 : rhsusf_army_ocp_sniper_m107
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_rifleman_82nd : rhsusf_army_ocp_rifleman_82nd
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_rifleman_101st : rhsusf_army_ocp_rifleman_101st
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_rifleman : rhsusf_army_ocp_arb_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_riflemanl : rhsusf_army_ocp_arb_riflemanl
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_rifleman_arb_m16 : rhsusf_army_ocp_rifleman_arb_m16
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_rifleman_m590 : rhsusf_army_ocp_arb_rifleman_m590
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_riflemanat : rhsusf_army_ocp_arb_riflemanat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_maaws : rhsusf_army_ocp_arb_maaws
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_grenadier : rhsusf_army_ocp_arb_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_autorifleman : rhsusf_army_ocp_arb_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_autoriflemana : rhsusf_army_ocp_arb_autoriflemana
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_machinegunner : rhsusf_army_ocp_arb_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_machinegunnera : rhsusf_army_ocp_arb_machinegunnera
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_marksman : rhsusf_army_ocp_arb_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_squadleader : rhsusf_army_ocp_arb_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_teamleader : rhsusf_army_ocp_arb_teamleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_medic : rhsusf_army_ocp_arb_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_engineer : rhsusf_army_ocp_arb_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_army_ucp_arb_sniper_m107 : rhsusf_army_ocp_arb_sniper_m107
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_infantry_usmc_base : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_rifleman : rhsusf_infantry_usmc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_rifleman_m4 : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_rifleman_light : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_riflemanat : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_rifleman_law : rhsusf_usmc_marpat_wd_riflemanat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_rifleman_m590 : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_grenadier : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_grenadier_m32 : rhsusf_usmc_marpat_wd_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_autorifleman : rhsusf_infantry_usmc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_autorifleman_m249 : rhsusf_usmc_marpat_wd_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_autorifleman_m249_ass : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_machinegunner : rhsusf_usmc_marpat_wd_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_machinegunner_ass : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_officer : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_squadleader : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_teamleader : rhsusf_infantry_usmc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_jfo : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_fso : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_smaw : rhsusf_usmc_marpat_wd_riflemanat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_javelin : rhsusf_usmc_marpat_wd_smaw
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_javelin_assistant : rhsusf_usmc_marpat_wd_smaw
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_stinger : rhsusf_usmc_marpat_wd_smaw
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_engineer : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_explosives : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_uav : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_marksman : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_spotter : rhsusf_usmc_marpat_wd_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_sniper : rhsusf_usmc_marpat_wd_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_sniper_m110 : rhsusf_usmc_marpat_wd_sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_sniper_M107 : rhsusf_usmc_marpat_wd_sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_crewman : rhsusf_infantry_usmc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_combatcrewman : rhsusf_usmc_marpat_wd_crewman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_driver : rhsusf_infantry_usmc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_gunner : rhsusf_usmc_marpat_wd_driver
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_helipilot : rhsusf_infantry_usmc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_wd_helicrew : rhsusf_usmc_marpat_wd_helipilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_rifleman : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_rifleman_light : rhsusf_usmc_marpat_wd_rifleman_light
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_rifleman_m4 : rhsusf_usmc_marpat_wd_rifleman_m4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_riflemanat : rhsusf_usmc_marpat_wd_riflemanat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_rifleman_law : rhsusf_usmc_marpat_wd_rifleman_law
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_rifleman_m590 : rhsusf_usmc_marpat_wd_rifleman_m590
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_grenadier : rhsusf_usmc_marpat_wd_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_grenadier_m32 : rhsusf_usmc_marpat_wd_grenadier_m32
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_autorifleman : rhsusf_usmc_marpat_wd_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_autorifleman_m249 : rhsusf_usmc_marpat_wd_autorifleman_m249
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_autorifleman_m249_ass : rhsusf_usmc_marpat_wd_autorifleman_m249_ass
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_machinegunner : rhsusf_usmc_marpat_wd_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_machinegunner_ass : rhsusf_usmc_marpat_wd_machinegunner_ass
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_officer : rhsusf_usmc_marpat_wd_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_squadleader : rhsusf_usmc_marpat_wd_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_teamleader : rhsusf_usmc_marpat_wd_teamleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_fso : rhsusf_usmc_marpat_wd_fso
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_jfo : rhsusf_usmc_marpat_wd_jfo
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_engineer : rhsusf_usmc_marpat_wd_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_explosives : rhsusf_usmc_marpat_wd_explosives
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_uav : rhsusf_usmc_marpat_wd_uav
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_smaw : rhsusf_usmc_marpat_wd_smaw
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_javelin : rhsusf_usmc_marpat_wd_javelin
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_javelin_assistant : rhsusf_usmc_marpat_wd_javelin_assistant
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_stinger : rhsusf_usmc_marpat_wd_stinger
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_marksman : rhsusf_usmc_marpat_wd_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_spotter : rhsusf_usmc_marpat_wd_spotter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_sniper : rhsusf_usmc_marpat_wd_sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_sniper_m110 : rhsusf_usmc_marpat_wd_sniper_m110
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_sniper_m107 : rhsusf_usmc_marpat_wd_sniper_M107
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_crewman : rhsusf_usmc_marpat_wd_crewman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_combatcrewman : rhsusf_usmc_marpat_wd_combatcrewman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_driver : rhsusf_usmc_marpat_wd_driver
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_gunner : rhsusf_usmc_marpat_wd_gunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_helipilot : rhsusf_usmc_marpat_wd_helipilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_marpat_d_helicrew : rhsusf_usmc_marpat_wd_helicrew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_wd_rifleman : rhsusf_usmc_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_wd_rifleman_light : rhsusf_usmc_lar_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_wd_riflemanat : rhsusf_usmc_lar_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_wd_grenadier_m32 : rhsusf_usmc_lar_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_wd_autorifleman : rhsusf_infantry_usmc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_wd_squadleader : rhsusf_usmc_lar_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_wd_teamleader : rhsusf_infantry_usmc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_wd_marksman : rhsusf_usmc_lar_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_wd_crewman : rhsusf_infantry_usmc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_wd_combatcrewman : rhsusf_usmc_lar_marpat_wd_crewman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_wd_machinegunner : rhsusf_usmc_lar_marpat_wd_combatcrewman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_d_rifleman : rhsusf_usmc_lar_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_d_rifleman_light : rhsusf_usmc_lar_marpat_wd_rifleman_light
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_d_riflemanat : rhsusf_usmc_lar_marpat_wd_riflemanat
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_d_grenadier_m32 : rhsusf_usmc_lar_marpat_wd_grenadier_m32
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_d_autorifleman : rhsusf_usmc_lar_marpat_wd_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_d_squadleader : rhsusf_usmc_lar_marpat_wd_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_d_teamleader : rhsusf_usmc_lar_marpat_wd_teamleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_d_marksman : rhsusf_usmc_lar_marpat_wd_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_d_crewman : rhsusf_usmc_lar_marpat_wd_crewman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_d_combatcrewman : rhsusf_usmc_lar_marpat_wd_combatcrewman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_lar_marpat_d_machinegunner : rhsusf_usmc_lar_marpat_wd_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_infantry_usmc_recon_base : rhsusf_infantry_usmc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_rifleman : rhsusf_infantry_usmc_recon_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_rifleman_at : rhsusf_infantry_usmc_recon_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_grenadier_m32 : rhsusf_usmc_recon_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_autorifleman : rhsusf_infantry_usmc_recon_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_machinegunner : rhsusf_infantry_usmc_recon_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_machinegunner_m249 : rhsusf_usmc_recon_marpat_wd_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_marksman : rhsusf_infantry_usmc_recon_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_sniper_M107 : rhsusf_usmc_recon_marpat_wd_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_officer : rhsusf_infantry_usmc_recon_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_teamleader : rhsusf_infantry_usmc_recon_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_rifleman_fast : rhsusf_usmc_recon_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_rifleman_at_fast : rhsusf_usmc_recon_marpat_wd_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_autorifleman_fast : rhsusf_usmc_recon_marpat_wd_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_machinegunner_m249_fast : rhsusf_usmc_recon_marpat_wd_machinegunner_m249
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_marksman_fast : rhsusf_usmc_recon_marpat_wd_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_teamleader_fast : rhsusf_usmc_recon_marpat_wd_teamleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_rifleman_lite : rhsusf_usmc_recon_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_rifleman_at_lite : rhsusf_usmc_recon_marpat_wd_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_autorifleman_lite : rhsusf_usmc_recon_marpat_wd_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_machinegunner_m249_lite : rhsusf_usmc_recon_marpat_wd_machinegunner_m249
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_marksman_lite : rhsusf_usmc_recon_marpat_wd_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_wd_teamleader_lite : rhsusf_usmc_recon_marpat_wd_teamleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_rifleman : rhsusf_usmc_recon_marpat_wd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_rifleman_at : rhsusf_usmc_recon_marpat_wd_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_autorifleman : rhsusf_usmc_recon_marpat_wd_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_grenadier_m32 : rhsusf_usmc_recon_marpat_wd_grenadier_m32
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_machinegunner : rhsusf_usmc_recon_marpat_wd_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_machinegunner_m249 : rhsusf_usmc_recon_marpat_wd_machinegunner_m249
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_marksman : rhsusf_usmc_recon_marpat_wd_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_sniper_M107 : rhsusf_usmc_recon_marpat_wd_sniper_M107
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_officer : rhsusf_usmc_recon_marpat_wd_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_teamleader : rhsusf_usmc_recon_marpat_wd_teamleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_rifleman_fast : rhsusf_usmc_recon_marpat_wd_rifleman_fast
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_rifleman_at_fast : rhsusf_usmc_recon_marpat_wd_rifleman_at_fast
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_autorifleman_fast : rhsusf_usmc_recon_marpat_wd_autorifleman_fast
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_machinegunner_m249_fast : rhsusf_usmc_recon_marpat_wd_machinegunner_m249_fast
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_marksman_fast : rhsusf_usmc_recon_marpat_wd_marksman_fast
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_teamleader_fast : rhsusf_usmc_recon_marpat_wd_teamleader_fast
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_rifleman_lite : rhsusf_usmc_recon_marpat_wd_rifleman_lite
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_rifleman_at_lite : rhsusf_usmc_recon_marpat_wd_rifleman_at_lite
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_autorifleman_lite : rhsusf_usmc_recon_marpat_wd_autorifleman_lite
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_machinegunner_m249_lite : rhsusf_usmc_recon_marpat_wd_machinegunner_m249_lite
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_marksman_lite : rhsusf_usmc_recon_marpat_wd_marksman_lite
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_usmc_recon_marpat_d_teamleader_lite : rhsusf_usmc_recon_marpat_wd_teamleader_lite
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_infantry_socom_armysf_base : rhsusf_socom_mc_uniform
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_infantry_socom_armysf_rifleman : rhsusf_infantry_socom_armysf_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_infantry_socom_marsoc_base : rhsusf_socom_g3_m81_uniform
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_cso : rhsusf_infantry_socom_marsoc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_cso_mk17 : rhsusf_infantry_socom_marsoc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_cso_cqb : rhsusf_infantry_socom_marsoc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_cso_light : rhsusf_socom_marsoc_cso_cqb
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_cso_mk17_light : rhsusf_socom_marsoc_cso_light
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_cso_breacher : rhsusf_socom_marsoc_cso_cqb
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_cso_grenadier : rhsusf_infantry_socom_marsoc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_teamleader : rhsusf_infantry_socom_marsoc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_teamchief : rhsusf_socom_marsoc_teamleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_elementleader : rhsusf_socom_marsoc_cso_cqb
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_jtac : rhsusf_infantry_socom_marsoc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_jfo : rhsusf_socom_marsoc_jtac
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_cso_eod : rhsusf_infantry_socom_marsoc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_cso_mechanic : rhsusf_infantry_socom_marsoc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_sarc : rhsusf_infantry_socom_marsoc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_spotter : rhsusf_infantry_socom_marsoc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_sniper : rhsusf_socom_marsoc_spotter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_sniper_m107 : rhsusf_socom_marsoc_sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_marsoc_marksman : rhsusf_socom_marsoc_cso
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_swcc_crewman : rhsusf_infantry_socom_marsoc_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_socom_swcc_officer : rhsusf_socom_swcc_crewman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_navy_marpat_wd_medic : rhsusf_usmc_marpat_wd_rifleman_m4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_navy_marpat_d_medic : rhsusf_usmc_marpat_d_rifleman_m4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_navy_sarc_w : rhsusf_infantry_usmc_recon_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_navy_sarc_d : rhsusf_navy_sarc_w
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_navy_sarc_w_fast : rhsusf_navy_sarc_w
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_navy_sarc_d_fast : rhsusf_navy_sarc_d
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_airforce_jetpilot : rhsusf_usmc_marpat_wd_rifleman_m4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_airforce_pilot : rhsusf_airforce_jetpilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsusf_airforce_security_force_rifleman : rhsusf_infantry_army_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_ins_base : I_G_Soldier_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_lite_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_F2 : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_F3 : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_AT_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_GL_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_TL_F : rhs_g_Soldier_GL_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_M_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_AR_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_AAR_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_LAT_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_AAT_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_SL_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_engineer_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_exp_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Soldier_AA_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_medic_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_Crew_F : rhs_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_uniform1_base : SoldierGB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_uniform2_base : rhs_g_uniform1_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_uniform3_base : rhs_g_uniform1_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_uniform4_base : rhs_g_uniform1_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhs_g_uniform5_base : rhs_g_uniform1_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_base : SoldierGB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_rifleman : rhsgref_cdf_ngd_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_rifleman_rpg75 : rhsgref_cdf_ngd_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_rifleman_m92 : rhsgref_cdf_ngd_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_rifleman_ak74 : rhsgref_cdf_ngd_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_rifleman_lite : rhsgref_cdf_ngd_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_grenadier : rhsgref_cdf_ngd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_machinegunner : rhsgref_cdf_ngd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_officer : rhsgref_cdf_ngd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_squadleader : rhsgref_cdf_ngd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_grenadier_rpg : rhsgref_cdf_ngd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_medic : rhsgref_cdf_ngd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_engineer : rhsgref_cdf_ngd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_ngd_crew : rhsgref_cdf_ngd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_base : SoldierGB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_TTsKO_forest : rhsgref_cdf_reg_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_TTsKO_mountain : rhsgref_cdf_reg_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_TTsKO_urban : rhsgref_cdf_reg_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_vsr : rhsgref_cdf_reg_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_rifleman : rhsgref_cdf_reg_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_rifleman_rpg75 : rhsgref_cdf_reg_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_rifleman_m70 : rhsgref_cdf_reg_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_rifleman_aks74 : rhsgref_cdf_reg_rifleman_m70
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_rifleman_akm : rhsgref_cdf_reg_rifleman_m70
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_rifleman_lite : rhsgref_cdf_reg_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_grenadier : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_arifleman_rpk : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_machinegunner : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_marksman : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_general : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_officer : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_squadleader : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_grenadier_rpg : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_specialist_aa : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_medic : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_engineer : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_crew : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_reg_crew_commander : rhsgref_cdf_reg_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_air_pilot : rhsgref_cdf_reg_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_base : rhsgref_cdf_reg_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_TTsKO_summer : rhsgref_cdf_para_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_TTsKO_fall : rhsgref_cdf_para_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_TTsKO_dark : rhsgref_cdf_para_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_rifleman : rhsgref_cdf_para_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_rifleman_lite : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_grenadier : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_autorifleman : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_machinegunner : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_marksman : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_officer : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_squadleader : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_grenadier_rpg : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_specialist_aa : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_medic : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_engineer : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_para_crew : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_rifleman : rhsgref_cdf_ngd_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_rifleman_rpg75 : rhsgref_cdf_ngd_rifleman_rpg75
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_rifleman_m92 : rhsgref_cdf_ngd_rifleman_m92
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_rifleman_ak74 : rhsgref_cdf_ngd_rifleman_ak74
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_rifleman_lite : rhsgref_cdf_ngd_rifleman_lite
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_grenadier : rhsgref_cdf_ngd_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_machinegunner : rhsgref_cdf_ngd_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_officer : rhsgref_cdf_ngd_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_squadleader : rhsgref_cdf_ngd_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_grenadier_rpg : rhsgref_cdf_ngd_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_medic : rhsgref_cdf_ngd_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_engineer : rhsgref_cdf_ngd_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_ngd_crew : rhsgref_cdf_ngd_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_arifleman_rpk : rhsgref_cdf_reg_arifleman_rpk
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_rifleman : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_rifleman_rpg75 : rhsgref_cdf_reg_rifleman_rpg75
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_rifleman_m70 : rhsgref_cdf_reg_rifleman_m70
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_rifleman_aks74 : rhsgref_cdf_reg_rifleman_aks74
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_rifleman_akm : rhsgref_cdf_reg_rifleman_akm
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_rifleman_lite : rhsgref_cdf_reg_rifleman_lite
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_grenadier : rhsgref_cdf_reg_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_machinegunner : rhsgref_cdf_reg_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_marksman : rhsgref_cdf_reg_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_general : rhsgref_cdf_reg_general
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_officer : rhsgref_cdf_reg_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_squadleader : rhsgref_cdf_reg_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_grenadier_rpg : rhsgref_cdf_reg_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_specialist_aa : rhsgref_cdf_reg_specialist_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_medic : rhsgref_cdf_reg_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_engineer : rhsgref_cdf_reg_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_crew : rhsgref_cdf_reg_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_reg_crew_commander : rhsgref_cdf_reg_crew_commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_air_pilot : rhsgref_cdf_air_pilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_rifleman : rhsgref_cdf_para_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_rifleman_lite : rhsgref_cdf_para_rifleman_lite
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_grenadier : rhsgref_cdf_para_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_autorifleman : rhsgref_cdf_para_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_machinegunner : rhsgref_cdf_para_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_marksman : rhsgref_cdf_para_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_officer : rhsgref_cdf_para_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_squadleader : rhsgref_cdf_para_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_grenadier_rpg : rhsgref_cdf_para_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_specialist_aa : rhsgref_cdf_para_specialist_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_medic : rhsgref_cdf_para_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_engineer : rhsgref_cdf_para_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_b_para_crew : rhsgref_cdf_para_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_rifleman : rhsgref_cdf_reg_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_rifleman_lite : rhsgref_cdf_reg_rifleman_lite
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_grenadier : rhsgref_cdf_reg_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_arifleman_rpk : rhsgref_cdf_reg_arifleman_rpk
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_machinegunner : rhsgref_cdf_reg_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_general : rhsgref_cdf_reg_general
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_officer : rhsgref_cdf_reg_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_squadleader : rhsgref_cdf_reg_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_grenadier_rpg : rhsgref_cdf_reg_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_medic : rhsgref_cdf_reg_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_engineer : rhsgref_cdf_reg_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_crew : rhsgref_cdf_reg_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_cdf_un_pilot : rhsgref_cdf_air_pilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_base : SoldierGB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_flecktarn : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_flecktarn_full : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_tigerstripe : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_woodland : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_woodland_olive : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_ERDL : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_olive : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_altis_lizard : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_altis_lizard_olive : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_dpm : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_dpm_olive : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_3color_desert : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_gorka_1_flecktarn : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_rifleman : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_rifleman_akms : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_rifleman_aks74 : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_militiaman_kar98k : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_rifleman_m92 : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_rifleman_mp44 : rhsgref_nat_rifleman_m92
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_rifleman_vz58 : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_grenadier : rhsgref_nat_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_warlord : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_commander : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_machinegunner : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_machinegunner_mg42 : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_grenadier_rpg : rhsgref_nat_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_specialist_aa : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_hunter : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_scout : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_saboteur : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_medic : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_crew : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_alpenflage : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_rifleman : rhsgref_nat_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_rifleman_m92 : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_rifleman_akm : rhsgref_nat_pmil_rifleman_m92
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_rifleman_aksu : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_grenadier : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_commander : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_machinegunner : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_grenadier_rpg : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_specialist_aa : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_hunter : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_scout : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_saboteur : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_medic : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_nat_pmil_crew : rhsgref_nat_pmil_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_base : SoldierGB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_reed : rhsgref_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_uniform_izlom : rhsgref_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_uniform_specter : rhsgref_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_uniform_gorka_y : rhsgref_ins_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_uniform_gorka_g : rhsgref_ins_uniform_gorka_y
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_rifleman : rhsgref_ins_uniform_specter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_rifleman_akm : rhsgref_ins_reed
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_rifleman_aksu : rhsgref_ins_reed
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_rifleman_aks74 : rhsgref_ins_rifleman_aksu
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_rifleman_RPG26 : rhsgref_ins_uniform_specter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_militiaman_mosin : rhsgref_ins_reed
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_grenadier : rhsgref_ins_uniform_specter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_arifleman_rpk : rhsgref_ins_uniform_izlom
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_machinegunner : rhsgref_ins_reed
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_squadleader : rhsgref_ins_uniform_specter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_commander : rhsgref_ins_reed
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_grenadier_rpg : rhsgref_ins_uniform_izlom
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_specialist_aa : rhsgref_ins_reed
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_engineer : rhsgref_ins_uniform_gorka_g
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_saboteur : rhsgref_ins_uniform_specter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_sniper : rhsgref_ins_uniform_izlom
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_spotter : rhsgref_ins_uniform_gorka_y
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_medic : rhsgref_ins_uniform_specter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_crew : rhsgref_ins_uniform_specter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_pilot : rhsgref_ins_uniform_specter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_arifleman_rpk : rhsgref_ins_arifleman_rpk
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_rifleman : rhsgref_ins_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_rifleman_akm : rhsgref_ins_rifleman_akm
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_rifleman_aksu : rhsgref_ins_rifleman_aksu
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_rifleman_aks74 : rhsgref_ins_rifleman_aks74
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_rifleman_RPG26 : rhsgref_ins_rifleman_RPG26
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_militiaman_mosin : rhsgref_ins_militiaman_mosin
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_grenadier : rhsgref_ins_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_machinegunner : rhsgref_ins_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_squadleader : rhsgref_ins_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_commander : rhsgref_ins_commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_grenadier_rpg : rhsgref_ins_grenadier_rpg
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_specialist_aa : rhsgref_ins_specialist_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_engineer : rhsgref_ins_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_saboteur : rhsgref_ins_saboteur
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_sniper : rhsgref_ins_sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_spotter : rhsgref_ins_spotter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_medic : rhsgref_ins_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_crew : rhsgref_ins_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_ins_g_pilot : rhsgref_ins_pilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_ERDL : rhsgref_hidf_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_og107 : rhsgref_hidf_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_og107_erdl : rhsgref_hidf_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_rifleman : rhsgref_hidf_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_grenadier : rhsgref_hidf_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_grenadier_m79 : rhsgref_hidf_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_rifleman_m72 : rhsgref_hidf_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_autorifleman : rhsgref_hidf_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_autorifleman_assist : rhsgref_hidf_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_machinegunner : rhsgref_hidf_autorifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_machinegunner_assist : rhsgref_hidf_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_marksman : rhsgref_hidf_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_squadleader : rhsgref_hidf_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_teamleader : rhsgref_hidf_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_medic : rhsgref_hidf_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_sniper : rhsgref_hidf_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_crewman : rhsgref_hidf_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_helipilot : rhsgref_hidf_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_hidf_boat_driver : rhsgref_hidf_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_base : SoldierGB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_para1 : rhsgref_tla_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_para2 : rhsgref_tla_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_rifleman : rhsgref_tla_para1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_rifleman_akms : rhsgref_tla_para2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_rifleman_M16 : rhsgref_tla_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_rifleman_pm63 : rhsgref_tla_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_rifleman_vz58 : rhsgref_tla_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_rifleman_m1 : rhsgref_tla_para2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_rifleman_m14 : rhsgref_tla_para2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_rifleman_l1a1 : rhsgref_tla_para2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_marksman_m14 : rhsgref_tla_para2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_squadleader : rhsgref_tla_para1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_warlord : rhsgref_tla_para1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_grenadier : rhsgref_tla_para1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_grenadier_m79 : rhsgref_tla_para2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_machinegunner : rhsgref_tla_para2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_machinegunner_mg42 : rhsgref_tla_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_rifleman_rpg75 : rhsgref_tla_para1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_specialist_at : rhsgref_tla_rifleman_rpg75
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_saboteur : rhsgref_tla_para2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_medic : rhsgref_tla_para1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_mechanic : rhsgref_tla_para1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_crew : rhsgref_tla_para2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_rifleman : rhsgref_tla_rifleman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_rifleman_akms : rhsgref_tla_rifleman_akms
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_rifleman_M16 : rhsgref_tla_rifleman_M16
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_rifleman_pm63 : rhsgref_tla_rifleman_pm63
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_rifleman_vz58 : rhsgref_tla_rifleman_vz58
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_rifleman_m1 : rhsgref_tla_rifleman_m1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_rifleman_m14 : rhsgref_tla_rifleman_m14
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_rifleman_l1a1 : rhsgref_tla_rifleman_l1a1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_marksman_m14 : rhsgref_tla_marksman_m14
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_squadleader : rhsgref_tla_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_warlord : rhsgref_tla_warlord
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_grenadier : rhsgref_tla_grenadier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_grenadier_m79 : rhsgref_tla_grenadier_m79
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_machinegunner : rhsgref_tla_machinegunner
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_machinegunner_mg42 : rhsgref_tla_machinegunner_mg42
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_rifleman_rpg75 : rhsgref_tla_rifleman_rpg75
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_specialist_at : rhsgref_tla_specialist_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_saboteur : rhsgref_tla_saboteur
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_mechanic : rhsgref_tla_mechanic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_medic : rhsgref_tla_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhsgref_tla_g_crew : rhsgref_tla_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_soldier_m10_base : SoldierGB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_soldier_m93_base : rhssaf_soldier_m10_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_soldier_atf_base : rhssaf_soldier_m10_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_airforce_pilot_transport_heli : rhs_pilot_transport_heli
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_airforce_pilot_mig29 : rhssaf_airforce_pilot_transport_heli
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_airforce_o_pilot_transport_heli : rhssaf_airforce_pilot_transport_heli
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_airforce_o_pilot_mig29 : rhssaf_airforce_pilot_mig29
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_soldier_army_digital_base : rhssaf_soldier_m10_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_rifleman_m21 : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_rifleman_m70 : rhssaf_army_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_rifleman_ammo : rhssaf_army_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_gl : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_mgun_m84 : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_asst_mgun : rhssaf_army_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_sq_lead : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_ft_lead : rhssaf_army_m10_digital_sq_lead
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_sniper_m76 : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_spotter : rhssaf_army_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_rifleman_at : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_spec_at : rhssaf_army_m10_digital_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_spec_aa : rhssaf_army_m10_digital_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_asst_spec_at : rhssaf_army_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_asst_spec_aa : rhssaf_army_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_medic : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_repair : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_exp : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_engineer : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_crew : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_crew_armored : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_crew_armored_nco : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_digital_officer : rhssaf_soldier_army_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_rifleman_m21 : rhssaf_army_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_rifleman_m70 : rhssaf_army_m10_digital_rifleman_m70
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_rifleman_ammo : rhssaf_army_m10_digital_rifleman_ammo
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_gl : rhssaf_army_m10_digital_gl
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_mgun_m84 : rhssaf_army_m10_digital_mgun_m84
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_asst_mgun : rhssaf_army_m10_digital_asst_mgun
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_sq_lead : rhssaf_army_m10_digital_sq_lead
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_ft_lead : rhssaf_army_m10_digital_ft_lead
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_sniper_m76 : rhssaf_army_m10_digital_sniper_m76
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_spotter : rhssaf_army_m10_digital_spotter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_rifleman_at : rhssaf_army_m10_digital_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_spec_at : rhssaf_army_m10_digital_spec_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_spec_aa : rhssaf_army_m10_digital_spec_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_asst_spec_at : rhssaf_army_m10_digital_asst_spec_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_asst_spec_aa : rhssaf_army_m10_digital_asst_spec_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_medic : rhssaf_army_m10_digital_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_repair : rhssaf_army_m10_digital_repair
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_exp : rhssaf_army_m10_digital_exp
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_engineer : rhssaf_army_m10_digital_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_crew : rhssaf_army_m10_digital_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_crew_armored : rhssaf_army_m10_digital_crew_armored
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_digital_officer : rhssaf_army_m10_digital_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_soldier_army_oakleaf_base : rhssaf_soldier_m93_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_soldier_army_oakleaf_summer_base : rhssaf_soldier_m93_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_rifleman_m21 : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_rifleman_m70 : rhssaf_army_m93_oakleaf_summer_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_rifleman_ammo : rhssaf_army_m93_oakleaf_summer_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_gl : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_mgun_m84 : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_asst_mgun : rhssaf_army_m93_oakleaf_summer_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_sq_lead : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_ft_lead : rhssaf_army_m93_oakleaf_summer_sq_lead
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_sniper_m76 : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_spotter : rhssaf_army_m93_oakleaf_summer_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_rifleman_at : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_spec_at : rhssaf_army_m93_oakleaf_summer_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_spec_aa : rhssaf_army_m93_oakleaf_summer_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_asst_spec_at : rhssaf_army_m93_oakleaf_summer_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_asst_spec_aa : rhssaf_army_m93_oakleaf_summer_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_medic : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_repair : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_exp : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_engineer : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_crew : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m93_oakleaf_summer_officer : rhssaf_soldier_army_oakleaf_summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_rifleman_m21 : rhssaf_army_m93_oakleaf_summer_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_rifleman_m70 : rhssaf_army_m93_oakleaf_summer_rifleman_m70
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_rifleman_ammo : rhssaf_army_m93_oakleaf_summer_rifleman_ammo
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_gl : rhssaf_army_m93_oakleaf_summer_gl
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_mgun_m84 : rhssaf_army_m93_oakleaf_summer_mgun_m84
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_asst_mgun : rhssaf_army_m93_oakleaf_summer_asst_mgun
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_sq_lead : rhssaf_army_m93_oakleaf_summer_sq_lead
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_ft_lead : rhssaf_army_m93_oakleaf_summer_ft_lead
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_sniper_m76 : rhssaf_army_m93_oakleaf_summer_sniper_m76
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_spotter : rhssaf_army_m93_oakleaf_summer_spotter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_rifleman_at : rhssaf_army_m93_oakleaf_summer_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_spec_at : rhssaf_army_m93_oakleaf_summer_spec_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_spec_aa : rhssaf_army_m93_oakleaf_summer_spec_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_asst_spec_at : rhssaf_army_m93_oakleaf_summer_asst_spec_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_asst_spec_aa : rhssaf_army_m93_oakleaf_summer_asst_spec_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_medic : rhssaf_army_m93_oakleaf_summer_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_repair : rhssaf_army_m93_oakleaf_summer_repair
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_exp : rhssaf_army_m93_oakleaf_summer_exp
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_engineer : rhssaf_army_m93_oakleaf_summer_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_crew : rhssaf_army_m93_oakleaf_summer_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m93_oakleaf_summer_officer : rhssaf_army_m93_oakleaf_summer_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_soldier_army_para_digital_base : rhssaf_soldier_m10_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_rifleman_m21 : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_rifleman_g36 : rhssaf_army_m10_para_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_rifleman_hk416 : rhssaf_army_m10_para_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_rifleman_ammo : rhssaf_army_m10_para_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_gl_ag36 : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_gl_m320 : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_mgun_m84 : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_mgun_minimi : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_asst_mgun_m84 : rhssaf_army_m10_para_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_asst_mgun_minimi : rhssaf_army_m10_para_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_sq_lead : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_ft_lead : rhssaf_army_m10_para_sq_lead
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_sniper_m76 : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_sniper_scarH : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_sniper_m82a1 : rhssaf_army_m10_para_sniper_m76
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_spotter : rhssaf_army_m10_para_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_rifleman_at : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_spec_at : rhssaf_army_m10_para_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_spec_aa : rhssaf_army_m10_para_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_asst_spec_at : rhssaf_army_m10_para_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_asst_spec_aa : rhssaf_army_m10_para_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_medic : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_repair : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_exp : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_engineer : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_crew : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_m10_para_officer : rhssaf_soldier_army_para_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_rifleman_m21 : rhssaf_army_m10_para_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_rifleman_g36 : rhssaf_army_m10_para_rifleman_g36
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_rifleman_hk416 : rhssaf_army_m10_para_rifleman_hk416
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_rifleman_ammo : rhssaf_army_m10_para_rifleman_ammo
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_gl_ag36 : rhssaf_army_m10_para_gl_ag36
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_gl_m320 : rhssaf_army_m10_para_gl_m320
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_mgun_m84 : rhssaf_army_m10_para_mgun_m84
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_mgun_minimi : rhssaf_army_m10_para_mgun_minimi
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_asst_mgun_m84 : rhssaf_army_m10_para_asst_mgun_m84
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_asst_mgun_minimi : rhssaf_army_m10_para_asst_mgun_minimi
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_sq_lead : rhssaf_army_m10_para_sq_lead
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_ft_lead : rhssaf_army_m10_para_ft_lead
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_sniper_m76 : rhssaf_army_m10_para_sniper_m76
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_sniper_scarH : rhssaf_army_m10_para_sniper_scarH
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_sniper_m82a1 : rhssaf_army_m10_para_sniper_m82a1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_spotter : rhssaf_army_m10_para_spotter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_rifleman_at : rhssaf_army_m10_para_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_spec_at : rhssaf_army_m10_para_spec_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_spec_aa : rhssaf_army_m10_para_spec_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_asst_spec_at : rhssaf_army_m10_para_asst_spec_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_asst_spec_aa : rhssaf_army_m10_para_asst_spec_aa
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_medic : rhssaf_army_m10_para_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_repair : rhssaf_army_m10_para_repair
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_exp : rhssaf_army_m10_para_exp
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_engineer : rhssaf_army_m10_para_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_crew : rhssaf_army_m10_para_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_army_o_m10_para_officer : rhssaf_army_m10_para_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_soldier_un_desert_base : rhssaf_soldier_m10_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_rifleman_m21 : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_rifleman_m70 : rhssaf_un_m10_digital_desert_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_rifleman_ammo : rhssaf_un_m10_digital_desert_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_gl : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_mgun_m84 : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_asst_mgun : rhssaf_un_m10_digital_desert_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_sq_lead : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_ft_lead : rhssaf_un_m10_digital_desert_sq_lead
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_sniper_m76 : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_spotter : rhssaf_un_m10_digital_desert_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_rifleman_at : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_spec_at : rhssaf_un_m10_digital_desert_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_spec_aa : rhssaf_un_m10_digital_desert_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_asst_spec_at : rhssaf_un_m10_digital_desert_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_asst_spec_aa : rhssaf_un_m10_digital_desert_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_medic : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_repair : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_exp : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_engineer : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_crew : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_desert_officer : rhssaf_soldier_un_desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_soldier_un_digital_base : rhssaf_soldier_m10_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_rifleman_m21 : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_rifleman_m70 : rhssaf_un_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_rifleman_ammo : rhssaf_un_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_gl : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_mgun_m84 : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_asst_mgun : rhssaf_un_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_sq_lead : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_ft_lead : rhssaf_un_m10_digital_sq_lead
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_sniper_m76 : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_spotter : rhssaf_un_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_rifleman_at : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_spec_at : rhssaf_un_m10_digital_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_spec_aa : rhssaf_un_m10_digital_rifleman_at
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_asst_spec_at : rhssaf_un_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_asst_spec_aa : rhssaf_un_m10_digital_rifleman_m21
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_medic : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_repair : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_exp : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_engineer : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_crew : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    }

    class rhssaf_un_m10_digital_officer : rhssaf_soldier_un_digital_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };
};
