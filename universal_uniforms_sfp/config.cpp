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
    class universal_uniforms_sfp
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.16;
        requiredAddons[] = {"universal_uniforms", "Swedish_Forces_Pack", "sfp_police"};
    };
};

class CfgMods
{
    class universal_uniforms_sfp
    {
        name = "Universal Uniforms: SFP Edition";
        version = "2.3.0";

        author = "SteelShot";
        authorID = "76561198029852322";

        dir = "UniversalUniforms-SFP";
        hideName = 0;
        hidePicture = 0;

        tooltipOwned = "Universal Uniforms: SFP Edition";
        overview = "Wear any faction's uniform as any faction's member";
        description = "Wear any faction's uniform as any faction's member";

        actionName = "Website";
        action = "https://steamcommunity.com/sharedfiles/filedetails/?id=2117928067";
    };
};

class CfgVehicles
{
    class B_Soldier_base_F;

    class O_Soldier_F;

    class B_Pilot_F;

    class B_Helipilot_F;

    class C_man_polo_1_F;

    class sfp_m90w_rifleman_ak5 : B_Soldier_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_criminal1 : O_Soldier_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_criminal2 : sfp_criminal1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_criminal3 : sfp_criminal1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_criminal4 : sfp_criminal1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_police_officer : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_police_modern : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_police_modern_submachinegun : sfp_police_modern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_police_modern_refx : sfp_police_modern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_police_modern_tactical : sfp_police_modern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_police_modern_tactical_shotgun : sfp_police_modern_tactical
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_police_modern_tactical_submachinegun : sfp_police_modern_tactical
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_underwear : B_Soldier_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_underwear : B_Soldier_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_ak5 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_tucked_m08 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_long_m08 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_fs18 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_fs18 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_krsk90 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_rto : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_rto : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_peltor : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_peltor : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_cap_peltor : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_cap_peltor : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_marksman : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_marksman : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_militarypolice_ak5 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_militarypolice_ak5 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m93_naval_officer : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_tshirt : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_tshirt : sfp_m90w_rifleman_tshirt
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_folded : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_folded : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_ak4 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_ak4 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_jtac : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_jtac : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_nbc : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_nbc : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_ag90 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_ag90 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_crew : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_crew : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_rifleman_uav_op : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_rifleman_uav_op : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_officer : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_officer : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_platoonleader : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_platoonleader : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_squadleader : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_squadleader : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_teamleader : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_teamleader : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_gr : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_gr : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_engineer : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_engineer : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_medic : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_medic : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_explosive_specialist : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_explosive_specialist : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_automaticrifleman_ksp90 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_automaticrifleman_ksp90 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_machinegunner_ksp58 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_machinegunner_ksp58 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_at_specialist_rb57 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_at_specialist_rb57 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_at_specialist_pskott86 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_at_specialist_pskott86 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_at_specialist_grg86 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_at_specialist_grg86 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_at_loader_grg86 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_at_loader_grg86 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sniper : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sniper : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_pilot : B_Pilot_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_helipilot : B_Helipilot_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_rifleman_ak4 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_rifleman_gr : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_rifleman_rto : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_marksman : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_officer : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_platoonleader : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_squadleader : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_teamleader : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_engineer : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_medic : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_mine_specialist : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_explosive_specialist : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_machinegunner_ksp58 : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_at_specialist_pskott86 : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_at_specialist_grg48 : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_hv_at_loader_grg86 : sfp_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_rifleman_ak5 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_militarypolice_ak5d : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_rifleman_folded : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_rifleman_tucked_m08 : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_rifleman_rto : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_rifleman_ak4 : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_marksman : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_sniper : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_rifleman_ag90 : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_crew : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_pilot : sfp_m90w_pilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_helipilot : sfp_m90w_helipilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_rifleman_uav_op : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_officer : sfp_m90w_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_platoonleader : sfp_m90w_platoonleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_squadleader : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_teamleader : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_gr : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_engineer : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_medic : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_explosive_specialist : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_automaticrifleman_ksp90 : sfp_m90w_automaticrifleman_ksp90
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_machinegunner_ksp58 : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_at_specialist_rb57 : sfp_m90w_at_specialist_rb57
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_at_specialist_pskott86 : sfp_m90w_at_specialist_pskott86
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_at_specialist_grg86 : sfp_m90w_at_specialist_grg86
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_un_at_loader_grg86 : sfp_m90w_un_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_ak5 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_g36 : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_hk1 : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_ag90 : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_ak5_sd : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_teamleader : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_uav_op : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_jtac : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_medic : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_explosive_specialist : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_ksp90 : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_at_specialist_rb57 : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_at_specialist_grg : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_machinegunner_ksp58 : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_sniper : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_sniper_ag90 : sfp_m90t_sog_sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_sog_spotter : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_combat_diver_base_F : sfp_m90t_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_combat_diver : sfp_m90t_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_combat_diver_tl : sfp_m90t_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_combat_diver_exp : sfp_m90t_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90t_combat_diver_medic : sfp_m90t_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_rifleman_ak5 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_militarypolice_ak5 : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90d_rifleman_rto : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_rifleman_ak4 : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_rifleman_ag90 : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_aa_specialist_rbs69 : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_crew : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_pilot : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_officer : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_platoonleader : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_squadleader : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_Msquadleader : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_teamleader : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_engineer : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_medic : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_mine_specialist : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_explosive_specialist : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_automaticrifleman_ksp90 : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_machinegunner_ksp58 : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_gr : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_at_specialist_pskott86 : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_at_specialist_grg86 : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_at_loader_grg86 : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_marksman : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_sniper : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_rb56_crewcheif : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_rb56_gunner : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_rb56_loader : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_rifleman_ak4 : sfp_1990_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_rifleman_kpist45 : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_rifleman_rto : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_marksman : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_officer : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_platoonleader : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_squadleader : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_teamleader : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_engineer : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_medic : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_mine_specialist : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_explosive_specialist : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_machinegunner_ksp58 : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_at_specialist_pskott86 : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_at_specialist_grg48 : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_hv_at_loader_grg86 : sfp_1990_hv_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_bassak_ak5 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_bassak_marksman : sfp_1990_m90w_bassak_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_bassak_ag90 : sfp_1990_m90w_bassak_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_bassak_teamleader : sfp_1990_m90w_bassak_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_bassak_medic : sfp_1990_m90w_bassak_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_bassak_explosive_specialist : sfp_1990_m90w_bassak_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_bassak_ksp90 : sfp_1990_m90w_bassak_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_bassak_at_specialist : sfp_1990_m90w_bassak_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_bassak_at_specialist_grg : sfp_1990_m90w_bassak_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_bassak_machinegunner_ksp58 : sfp_1990_m90w_bassak_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_combat_diver_base_F : sfp_1990_m90w_bassak_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_combat_diver : sfp_1990_m90w_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_combat_diver_tl : sfp_1990_m90w_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_combat_diver_exp : sfp_1990_m90w_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90w_combat_diver_medic : sfp_1990_m90w_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_rifleman_ak5 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_rifleman_ak4 : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_rifleman_rto : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_rifleman_ag90 : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_crew : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_pilot : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_officer : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_platoonleader : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_squadleader : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_Msquadleader : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_teamleader : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_engineer : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_medic : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_mine_specialist : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_explosive_specialist : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_automaticrifleman_ksp90 : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_machinegunner_ksp58 : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_gr : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_at_specialist_pskott86 : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_at_specialist_grg86 : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_at_loader_grg86 : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_1990_m90s_marksman : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_sniper : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_ak5 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_g36 : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_ag90 : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_ak5_sd : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_teamleader : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_uav_op : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_jtac : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_medic : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_explosive_specialist : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_ksp90 : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_at_specialist_rb57 : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_at_specialist_grg : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_machinegunner_ksp58 : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_sniper : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_sniper_ag90 : sfp_m90w_sog_sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_sog_spotter : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_combat_diver_base_F : sfp_m90w_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_combat_diver : sfp_m90w_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_combat_diver_tl : sfp_m90w_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_combat_diver_exp : sfp_m90w_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90w_combat_diver_medic : sfp_m90w_combat_diver_base_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_ak5 : sfp_m90d_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_g36 : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_ag90 : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_ak5_sd : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_uav_op : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_jtac : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_teamleader : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_medic : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_explosive_specialist : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_ksp90 : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_at_specialist_rb57 : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_at_specialist_grg : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_machinegunner_ksp58 : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_sniper : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_sniper_ag90 : sfp_m90d_sog_sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90d_sog_spotter : sfp_m90d_sog_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_rifleman_ak4 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_rifleman_kpist45 : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_rifleman_rto : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_marksman : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_platoonleader : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_squadleader : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_teamleader : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_engineer : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_medic : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_mine_specialist : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_explosive_specialist : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_machinegunner_ksp58 : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_at_specialist_pskott68 : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_at_specialist_pskott86 : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_at_specialist_grg48 : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_304k : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m58w_at_loader_grg86 : sfp_m58w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_rifleman_ak4 : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_rifleman_ak4 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_sailor : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_crew : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_crew_hood : sfp_m59w_crew
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_rifleman_kpist45 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_rifleman_kpist45 : sfp_m59w_rifleman_kpist45
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_rifleman_rto : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_aa_specialist_rbs69 : sfp_m59w_rifleman_kpist45
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_marksman : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_marksman : sfp_m59w_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_officer : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_officer : sfp_m59w_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_platoonleader : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_platoonleader : sfp_m59w_platoonleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_squadleader : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_squadleader : sfp_m59w_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_teamleader : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_teamleader : sfp_m59w_teamleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_engineer : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_engineer : sfp_m59w_engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_medic : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_medic : sfp_m59w_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_mine_specialist : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_mine_specialist : sfp_m59w_mine_specialist
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_explosive_specialist : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_explosive_specialist : sfp_m59w_explosive_specialist
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_homeguard_rifleman_ak4 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_machinegunner_ksp58 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_machinegunner_ksp58 : sfp_m59w_machinegunner_ksp58
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_at_specialist_pskott68 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_at_specialist_pskott86 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_at_specialist_pskott86 : sfp_m59w_at_specialist_pskott86
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_at_specialist_grg48 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_at_specialist_grg48 : sfp_m59w_at_specialist_grg48
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_304k : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_at_loader_grg86 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_marksman1986 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_marksman1986 : sfp_m59w_marksman
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_officer1986 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_officer1986 : sfp_m59w_officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_platoonleader1986 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_platoonleader1986 : sfp_m59w_platoonleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_squadleader1986 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_squadleader1986 : sfp_m59w_squadleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_teamleader1986 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_teamleader1986 : sfp_m59w_teamleader
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_medic1986 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_medic1986 : sfp_m59w_medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_explosive_specialist1986 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_explosive_specialist1986 : sfp_m59w_explosive_specialist
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_machinegunner_ksp581986 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_machinegunner_ksp581986 : sfp_m59w_machinegunner_ksp58
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_at_specialist_pskott861986 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_at_specialist_grg481986 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m62s_at_specialist_grg481986 : sfp_m59w_at_specialist_grg48
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_at_loader_grg481986 : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_kj_operator : sfp_m59w_rifleman_ak4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_kj_teamleader : sfp_m59w_kj_operator
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_kj_medic : sfp_m59w_kj_operator
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_kj_explosive_specialist : sfp_m59w_kj_operator
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_kj_at : sfp_m59w_kj_operator
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_kj_marksman : sfp_m59w_kj_operator
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_kj_machinegunner : sfp_m59w_kj_operator
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m59w_fjs_operator : sfp_m59w_kj_operator
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_adyk_operator : sfp_m59w_kj_operator
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_civ_tourist : C_man_polo_1_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_civ_tourist_hat : C_man_polo_1_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_ingame_test_unit : sfp_m90w_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class sfp_m90s_aa_specialist_rbs69 : sfp_m90s_rifleman_ak5
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };
};
