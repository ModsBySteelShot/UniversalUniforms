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
    class universal_uniforms_cup
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.16;
        requiredAddons[] = {"universal_uniforms",
                            "CUP_Creatures_Military_BAF",
                            "CUP_Creatures_Military_Germany",
                            "CUP_Creatures_Military_NAPA",
                            "CUP_Creatures_Military_PMC",
                            "CUP_Creatures_Military_Russia",
                            "CUP_Creatures_Military_Taki",
                            "CUP_Creatures_Military_TakiInsurgents",
                            "CUP_Creatures_Military_USMC",
                            "CUP_Creatures_People_Civil_Chernarus",
                            "CUP_Creatures_People_Civil_Russia",
                            "CUP_Creatures_People_Civil_Takistan",
                            "CUP_Creatures_Military_ACR",
                            "CUP_Creatures_Military_CDF",
                            "CUP_Creatures_Military_Chedaki",
                            "CUP_Creatures_Military_RACS",
                            "CUP_Creatures_Military_SLA",
                            "CUP_Creatures_Military_USArmy",
                            "CUP_Creatures_Military_HIL",
                            "CUP_Creatures_Military_Ukraine"};
    };
};

class CfgMods
{
    class universal_uniforms_cup
    {
        name = "Universal Uniforms: CUP Edition";
        version = "2.3.0";

        author = "SteelShot";
        authorID = "76561198029852322";

        dir = "UniversalUniforms-CUP";
        hideName = 0;
        hidePicture = 0;

        tooltipOwned = "Universal Uniforms: CUP Edition";
        overview = "Wear any faction's uniform as any faction's member";
        description = "Wear any faction's uniform as any faction's member";

        actionName = "Website";
        action = "https://steamcommunity.com/sharedfiles/filedetails/?id=1852257061";
    };
};

class CfgVehicles
{
    class SoldierEB;

    class SoldierWB;

    class Civilian_F;

    class B_ghillie_lsh_F;

    class CUP_O_RUS_Man_Base : SoldierEB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_Summer_base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Summer_1 : CUP_O_RUS_Soldier_VKPO_Summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Summer_2 : CUP_O_RUS_Soldier_VKPO_Summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Summer_3 : CUP_O_RUS_Soldier_VKPO_Summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Summer_4 : CUP_O_RUS_Soldier_VKPO_Summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_1 : CUP_O_RUS_Soldier_VKPO_Summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_2 : CUP_O_RUS_Soldier_VKPO_Summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_3 : CUP_O_RUS_Soldier_VKPO_Summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Rolled_Summer_4 : CUP_O_RUS_Soldier_VKPO_Summer_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_Desert_base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Desert_1 : CUP_O_RUS_Soldier_VKPO_Desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Desert_2 : CUP_O_RUS_Soldier_VKPO_Desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Desert_3 : CUP_O_RUS_Soldier_VKPO_Desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Desert_4 : CUP_O_RUS_Soldier_VKPO_Desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_1 : CUP_O_RUS_Soldier_VKPO_Desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_2 : CUP_O_RUS_Soldier_VKPO_Desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_3 : CUP_O_RUS_Soldier_VKPO_Desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Rolled_Desert_4 : CUP_O_RUS_Soldier_VKPO_Desert_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_Winter_base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Winter_1 : CUP_O_RUS_Soldier_VKPO_Winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Winter_2 : CUP_O_RUS_Soldier_VKPO_Winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Winter_3 : CUP_O_RUS_Soldier_VKPO_Winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Winter_4 : CUP_O_RUS_Soldier_VKPO_Winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1 : CUP_O_RUS_Soldier_VKPO_Winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_2 : CUP_O_RUS_Soldier_VKPO_Winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3 : CUP_O_RUS_Soldier_VKPO_Winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4 : CUP_O_RUS_Soldier_VKPO_Winter_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_Gorka_base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Khaki_1 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Khaki_2 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Khaki_3 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Khaki_4 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_EMR_1 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_EMR_2 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_EMR_3 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_EMR_4 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Brown_1 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Brown_2 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Brown_3 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Brown_4 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_A_Tacs_1 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_A_Tacs_2 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_A_Tacs_3 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_A_Tacs_4 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Yellow_1 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Yellow_2 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Yellow_3 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Gorka_Yellow_4 : CUP_O_RUS_Soldier_Gorka_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_Ratnik_6Sh122_base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_1 : CUP_O_RUS_Soldier_Ratnik_6Sh122_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_2 : CUP_O_RUS_Soldier_Ratnik_6Sh122_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_3 : CUP_O_RUS_Soldier_Ratnik_6Sh122_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_4 : CUP_O_RUS_Soldier_Ratnik_6Sh122_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Autumn_1 : CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_1
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Autumn_2 : CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Autumn_3 : CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Autumn_4 : CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_Ratnik_6Sh119_base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_1 : CUP_O_RUS_Soldier_Ratnik_6Sh119_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_2 : CUP_O_RUS_Soldier_Ratnik_6Sh119_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_3 : CUP_O_RUS_Soldier_Ratnik_6Sh119_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_U_O_RUS_Soldier_Masking_Suit_6Sh119_Winter_4 : CUP_O_RUS_Soldier_Ratnik_6Sh119_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_VKPO_Summer_Base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Survivor_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Unarmed_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Lite_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_GL_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AR_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_MG_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Marksman_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_TL_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_SL_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Medic_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Repair_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Exp_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Mine_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Engineer_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_LAT_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AT_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_HAT_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AA_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_A_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAR_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAT_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AHAT_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Crew_VKPO_Summer : CUP_O_RUS_M_Soldier_VKPO_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_VKPO_Desert_Base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Survivor_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Unarmed_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Lite_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_GL_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AR_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_MG_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Marksman_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_TL_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_SL_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Medic_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Repair_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Exp_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Mine_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Engineer_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_LAT_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AT_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_HAT_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AA_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_A_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAR_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAT_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AHAT_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Crew_VKPO_Desert : CUP_O_RUS_M_Soldier_VKPO_Desert_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_VKPO_Winter_Base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Survivor_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Unarmed_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Lite_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_GL_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AR_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_MG_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Marksman_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_TL_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_SL_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Medic_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Repair_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Exp_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Mine_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Engineer_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_LAT_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AT_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_HAT_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AA_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_A_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAR_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAT_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AHAT_VKPO_Winter : CUP_O_RUS_M_Soldier_VKPO_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Ratnik_Summer_Base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Survivor_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Unarmed_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Lite_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_GL_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AR_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_MG_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Marksman_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_TL_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_SL_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Medic_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Repair_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Exp_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Mine_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Engineer_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_LAT_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AT_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_HAT_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AA_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_A_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAR_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAT_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AHAT_Ratnik_Summer : CUP_O_RUS_M_Soldier_Ratnik_Summer_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Survivor_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Unarmed_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Lite_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_GL_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AR_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_MG_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Marksman_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_TL_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_SL_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Medic_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Repair_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Exp_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Mine_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Engineer_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_LAT_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AT_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_HAT_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AA_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_A_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAR_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAT_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AHAT_Ratnik_Autumn : CUP_O_RUS_M_Soldier_Ratnik_Autumn_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Ratnik_Winter_Base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Survivor_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Unarmed_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Lite_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_GL_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AR_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_MG_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Marksman_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_TL_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_SL_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Medic_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Repair_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Exp_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Mine_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_Engineer_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_LAT_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AT_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_HAT_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AA_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_A_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAR_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AAT_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Soldier_AHAT_Ratnik_Winter : CUP_O_RUS_M_Soldier_Ratnik_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Gorka_Brown_Base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_TL_Gorka_Brown : CUP_O_RUS_M_Recon_Gorka_Brown_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Rifleman_Gorka_Brown : CUP_O_RUS_M_Recon_Gorka_Brown_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Marksman_Gorka_Brown : CUP_O_RUS_M_Recon_Gorka_Brown_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_LAT_Gorka_Brown : CUP_O_RUS_M_Recon_Gorka_Brown_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Medic_Gorka_Brown : CUP_O_RUS_M_Recon_Gorka_Brown_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Exp_Gorka_Brown : CUP_O_RUS_M_Recon_Gorka_Brown_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Sharpshooter_Gorka_Brown : CUP_O_RUS_M_Recon_Gorka_Brown_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_GL_Gorka_Brown : CUP_O_RUS_M_Recon_Gorka_Brown_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_MG_Gorka_Brown : CUP_O_RUS_M_Recon_Gorka_Brown_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Gorka_Khaki_Base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_TL_Gorka_Khaki : CUP_O_RUS_M_Recon_Gorka_Khaki_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Rifleman_Gorka_Khaki : CUP_O_RUS_M_Recon_Gorka_Khaki_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Marksman_Gorka_Khaki : CUP_O_RUS_M_Recon_Gorka_Khaki_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_LAT_Gorka_Khaki : CUP_O_RUS_M_Recon_Gorka_Khaki_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Medic_Gorka_Khaki : CUP_O_RUS_M_Recon_Gorka_Khaki_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Exp_Gorka_Khaki : CUP_O_RUS_M_Recon_Gorka_Khaki_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Sharpshooter_Gorka_Khaki : CUP_O_RUS_M_Recon_Gorka_Khaki_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_GL_Gorka_Khaki : CUP_O_RUS_M_Recon_Gorka_Khaki_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_MG_Gorka_Khaki : CUP_O_RUS_M_Recon_Gorka_Khaki_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Gorka_EMR_Base : CUP_O_RUS_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_TL_Gorka_EMR : CUP_O_RUS_M_Recon_Gorka_EMR_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Rifleman_Gorka_EMR : CUP_O_RUS_M_Recon_Gorka_EMR_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Marksman_Gorka_EMR : CUP_O_RUS_M_Recon_Gorka_EMR_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_LAT_Gorka_EMR : CUP_O_RUS_M_Recon_Gorka_EMR_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Medic_Gorka_EMR : CUP_O_RUS_M_Recon_Gorka_EMR_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Exp_Gorka_EMR : CUP_O_RUS_M_Recon_Gorka_EMR_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_Sharpshooter_Gorka_EMR : CUP_O_RUS_M_Recon_Gorka_EMR_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_GL_Gorka_EMR : CUP_O_RUS_M_Recon_Gorka_EMR_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_M_Recon_MG_Gorka_EMR : CUP_O_RUS_M_Recon_Gorka_EMR_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_BAF_Soldier_DPM_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AmmoBearer_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstAutoRifleman_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstGunnerGMG_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstGunnerHMG_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstGunnerArty_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstAA_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstAT_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AutoRifleman_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Medic_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Competitor_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Crew_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_DeckCrew_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Engineer_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Explosive_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_FighterPilot_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Grenadier_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GunnerGMG_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GunnerHMG_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GunnerArty_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_HeavyGunner_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Helicrew_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Helipilot_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Marksman_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Mine_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AA_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AT_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Officer_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Paratrooper_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Pilot_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RangeMaster_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Repair_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Rifleman_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanAT_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanLAT_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanLite_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanUnarmed_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_SharpShooter_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_SquadLeader_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Survivor_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_TeamLeader_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Diver_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_AS50_TWS_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_AS50_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Spotter_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Spotter_L85TWS_DPM : CUP_BAF_Soldier_DPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_BAF_Soldier_DDPM_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AmmoBearer_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstAutoRifleman_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstGunnerGMG_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstGunnerHMG_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstGunnerArty_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstAA_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstAT_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AutoRifleman_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Medic_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Competitor_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Crew_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_DeckCrew_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Engineer_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Explosive_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_FighterPilot_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Grenadier_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GunnerGMG_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GunnerHMG_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GunnerArty_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_HeavyGunner_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Helicrew_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Helipilot_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Marksman_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Mine_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AA_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AT_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Officer_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Paratrooper_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Pilot_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RangeMaster_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Repair_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Rifleman_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanAT_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanLAT_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanLite_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanUnarmed_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_SharpShooter_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_SquadLeader_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Survivor_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_TeamLeader_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Diver_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_AS50_TWS_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_AS50_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Spotter_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Spotter_L85TWS_DDPM : CUP_BAF_Soldier_DDPM_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_BAF_Soldier_MTP_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_01_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_02_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_03_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_04_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_05_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_01_DDPM : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_02_DDPM : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_03_DDPM : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_04_DDPM : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_01_DPM : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_02_DPM : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_03_DPM : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_04_DPM : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AmmoBearer_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstAutoRifleman_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstGunnerGMG_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstGunnerHMG_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstGunnerArty_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstAA_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AsstAT_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AutoRifleman_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Medic_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Competitor_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Crew_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_DeckCrew_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Engineer_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Explosive_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_FighterPilot_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Grenadier_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GunnerGMG_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GunnerHMG_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GunnerArty_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_HeavyGunner_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Helicrew_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Helipilot_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Marksman_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Mine_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AA_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AT_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Officer_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Paratrooper_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Pilot_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RangeMaster_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Repair_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Rifleman_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanAT_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanLAT_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanLite_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_RiflemanUnarmed_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_SharpShooter_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_SquadLeader_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Survivor_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_TeamLeader_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Diver_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_AS50_TWS_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_AS50_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Spotter_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Spotter_L85TWS_MTP : CUP_BAF_Soldier_MTP_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_MTP : CUP_B_BAF_Soldier_Rifleman_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GL_MTP : CUP_B_BAF_Soldier_Grenadier_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Night_MTP : CUP_B_BAF_Soldier_Rifleman_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Light_MTP : CUP_B_BAF_Soldier_RiflemanLite_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Backpack_MTP : CUP_B_BAF_Soldier_Grenadier_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AAR_MTP : CUP_B_BAF_Soldier_AsstAutoRifleman_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AMG_MTP : CUP_B_BAF_Soldier_Rifleman_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AAT_MTP : CUP_B_BAF_Soldier_AsstAT_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AHAT_MTP : CUP_B_BAF_Soldier_Rifleman_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AAA_MTP : CUP_B_BAF_Soldier_AsstAA_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Officer_MTP : CUP_B_BAF_Soldier_Officer_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_SL_MTP : CUP_B_BAF_Soldier_SquadLeader_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_TL_MTP : CUP_B_BAF_Soldier_TeamLeader_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AR_MTP : CUP_B_BAF_Soldier_AutoRifleman_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_MG_MTP : CUP_B_BAF_Soldier_HeavyGunner_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_HAT_MTP : CUP_B_BAF_Soldier_RiflemanAT_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_scout_MTP : CUP_B_BAF_Soldier_RiflemanLite_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Pilot_MTP : CUP_B_BAF_Soldier_Helipilot_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Crew_MTP : CUP_B_BAF_Soldier_Crew_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Medic_MTP : CUP_B_BAF_Soldier_Medic_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_JTAC_MTP : CUP_B_BAF_Soldier_Grenadier_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Engineer_MTP : CUP_B_BAF_Soldier_Engineer_MTP
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_WDL : CUP_B_BAF_Soldier_Rifleman_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GL_WDL : CUP_B_BAF_Soldier_Grenadier_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Night_WDL : CUP_B_BAF_Soldier_Rifleman_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Light_WDL : CUP_B_BAF_Soldier_RiflemanLite_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Backpack_WDL : CUP_B_BAF_Soldier_Grenadier_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AAR_WDL : CUP_B_BAF_Soldier_AsstAutoRifleman_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AMG_WDL : CUP_B_BAF_Soldier_Rifleman_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AAT_WDL : CUP_B_BAF_Soldier_AsstAT_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AHAT_WDL : CUP_B_BAF_Soldier_Rifleman_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AAA_WDL : CUP_B_BAF_Soldier_AsstAA_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Officer_WDL : CUP_B_BAF_Soldier_Officer_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_SL_WDL : CUP_B_BAF_Soldier_SquadLeader_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_TL_WDL : CUP_B_BAF_Soldier_TeamLeader_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AR_WDL : CUP_B_BAF_Soldier_AutoRifleman_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_MG_WDL : CUP_B_BAF_Soldier_HeavyGunner_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AT_WDL : CUP_B_BAF_Soldier_AT_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_HAT_WDL : CUP_B_BAF_Soldier_RiflemanAT_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AA_WDL : CUP_B_BAF_Soldier_AA_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Marksman_WDL : CUP_B_BAF_Soldier_Marksman_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_scout_WDL : CUP_B_BAF_Soldier_RiflemanLite_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_WDL : CUP_B_BAF_Soldier_SharpShooter_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_AS50_WDL : CUP_B_BAF_Soldier_SharpShooter_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Sniper_AS50_TWS_WDL : CUP_B_BAF_Soldier_SharpShooter_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Spotter_WDL : CUP_B_BAF_Soldier_SharpShooter_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Spotter_L85TWS_WDL : CUP_B_BAF_Soldier_Rifleman_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Pilot_WDL : CUP_B_BAF_Soldier_Helipilot_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Crew_WDL : CUP_B_BAF_Soldier_Crew_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Medic_WDL : CUP_B_BAF_Soldier_Medic_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_JTAC_WDL : CUP_B_BAF_Soldier_Grenadier_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Engineer_WDL : CUP_B_BAF_Soldier_Engineer_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_DDPM : CUP_B_BAF_Soldier_Rifleman_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_GL_DDPM : CUP_B_BAF_Soldier_Grenadier_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Night_DDPM : CUP_B_BAF_Soldier_Rifleman_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Light_DDPM : CUP_B_BAF_Soldier_RiflemanLite_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_Backpack_DDPM : CUP_B_BAF_Soldier_Grenadier_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AAR_DDPM : CUP_B_BAF_Soldier_AsstAutoRifleman_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AMG_DDPM : CUP_B_BAF_Soldier_Rifleman_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AAT_DDPM : CUP_B_BAF_Soldier_AsstAT_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AHAT_DDPM : CUP_B_BAF_Soldier_Rifleman_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AAA_DDPM : CUP_B_BAF_Soldier_AsstAA_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Officer_DDPM : CUP_B_BAF_Soldier_Officer_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_SL_DDPM : CUP_B_BAF_Soldier_SquadLeader_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_TL_DDPM : CUP_B_BAF_Soldier_TeamLeader_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_AR_DDPM : CUP_B_BAF_Soldier_AutoRifleman_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_MG_DDPM : CUP_B_BAF_Soldier_HeavyGunner_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_HAT_DDPM : CUP_B_BAF_Soldier_RiflemanAT_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_scout_DDPM : CUP_B_BAF_Soldier_RiflemanLite_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Pilot_DDPM : CUP_B_BAF_Soldier_Helipilot_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Crew_DDPM : CUP_B_BAF_Soldier_Crew_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Medic_DDPM : CUP_B_BAF_Soldier_Medic_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_JTAC_DDPM : CUP_B_BAF_Soldier_Grenadier_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Engineer_DDPM : CUP_B_BAF_Soldier_Engineer_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_GER_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_01 : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_02 : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_03 : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_04 : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_05 : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_06 : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_07 : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_08 : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_09 : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_Overalls_Tank : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_Overalls_Pilot : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Crye : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Crye2 : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_GL : CUP_B_GER_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Medic : CUP_B_GER_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_TL : CUP_B_GER_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_Scout : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_MG : CUP_B_GER_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_MG3 : CUP_B_GER_BW_Soldier_MG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_Engineer : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_AA : CUP_B_GER_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_AAA : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_AT : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_PZF_AT : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_AAT : CUP_B_GER_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_Sniper : CUP_B_GER_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_Ammo : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Soldier_Marksman : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_GL : CUP_B_GER_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Medic : CUP_B_GER_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_TL : CUP_B_GER_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_Scout : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_MG : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_MG3 : CUP_B_GER_Soldier_MG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_Engineer : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_AA : CUP_B_GER_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_AAA : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_AT : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_AAT : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_Sniper : CUP_B_GER_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_Ammo : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Crew : CUP_B_GER_Soldier_Overalls_Tank
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_TankCommander : CUP_B_GER_Soldier_Overalls_Tank
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_HPilot : CUP_B_GER_Soldier_Overalls_Pilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Operator : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Operator_GL : CUP_B_GER_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Operator_EXP : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Operator_Medic : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Operator_TL : CUP_B_GER_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_01 : CUP_B_GER_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_02 : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_03 : CUP_B_GER_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_04 : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_05 : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_06 : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_07 : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_08 : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_09 : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_Fleck_Overalls_Tank : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_Fleck_Overalls_Pilot : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Crye : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Crye2 : CUP_Creatures_Military_GER_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier : CUP_B_GER_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_GL : CUP_B_GER_Soldier_GL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Medic : CUP_B_GER_Medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_TL : CUP_B_GER_Soldier_TL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_Scout : CUP_B_GER_Soldier_Scout
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_MG : CUP_B_GER_Soldier_MG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_MG3 : CUP_B_GER_Soldier_MG3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_Engineer : CUP_B_GER_Soldier_Engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_AA : CUP_B_GER_Soldier_AA
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_AAA : CUP_B_GER_Soldier_AAA
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_AT : CUP_B_GER_Soldier_AT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_PZF_AT : CUP_B_GER_Soldier_AT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_AAT : CUP_B_GER_Soldier_AAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_Sniper : CUP_B_GER_Soldier_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_Ammo : CUP_B_GER_Soldier_Ammo
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_BW_Fleck_Soldier_Marksman : CUP_B_GER_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier : CUP_B_GER_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_GL : CUP_B_GER_Soldier_GL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Medic : CUP_B_GER_Medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_TL : CUP_B_GER_Soldier_TL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_Scout : CUP_B_GER_Soldier_Scout
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_MG : CUP_B_GER_Soldier_MG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_MG3 : CUP_B_GER_Soldier_MG3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_Engineer : CUP_B_GER_Soldier_Engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_AA : CUP_B_GER_Soldier_AA
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_AAA : CUP_B_GER_Soldier_AAA
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_AT : CUP_B_GER_Soldier_AT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_AAT : CUP_B_GER_Soldier_AAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_Sniper : CUP_B_GER_Soldier_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Soldier_Ammo : CUP_B_GER_Soldier_Ammo
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Crew : CUP_B_GER_Soldier_Fleck_Overalls_Tank
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_TankCommander : CUP_B_GER_Soldier_Fleck_Overalls_Tank
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_HPilot : CUP_B_GER_Soldier_Overalls_Pilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Operator : CUP_B_GER_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Operator_GL : CUP_B_GER_Soldier_GL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Operator_EXP : CUP_B_GER_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Operator_Medic : CUP_B_GER_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Fleck_Operator_TL : CUP_B_GER_Soldier_TL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_NAPA_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_NAPA_Civilian_Base : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_01 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_02 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_03 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_04 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_05 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_06 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_07 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_08 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_09 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_10 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_11 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_12 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_13 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_14 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_15 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_16 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_17 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_18 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_19 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_AKSU : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_AKM : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_AKS74 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_LAT : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_GL : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Officer : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_AT : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_AA : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_AR : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_MG : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Saboteur : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Medic : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Crew : CUP_I_GUE_Soldier_AKSU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Engineer : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Ammobearer : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_AA2 : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Pilot : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Sniper : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Soldier_Scout : CUP_I_GUE_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Commander : CUP_Creatures_Military_NAPA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Local : CUP_Creatures_Military_NAPA_Civilian_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Woodman : CUP_Creatures_Military_NAPA_Civilian_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Gamekeeper : CUP_Creatures_Military_NAPA_Civilian_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Forester : CUP_Creatures_Military_NAPA_Civilian_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Farmer : CUP_Creatures_Military_NAPA_Civilian_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_GUE_Villager : CUP_Creatures_Military_NAPA_Civilian_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_PMC_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_01 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_02 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_03 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_04 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_05 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_06 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_07 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_08 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_09 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_10 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_11 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_12 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_13 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_14 : CUP_I_PMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_15 : CUP_I_PMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_16 : CUP_I_PMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_17 : CUP_I_PMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_19 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_20 : CUP_I_PMC_Soldier_19
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_21 : CUP_I_PMC_Soldier_19
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_22 : CUP_I_PMC_Soldier_19
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_23 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_24 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_31 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_32 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_35 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_36 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_37 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_38 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_39 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_40 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_41 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_42 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_43 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_1 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_2 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_3 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_4 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_5 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_6 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_7 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_8 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_9 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_10 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_11 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_12 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_13 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_14 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_Para_Soldier_15 : CUP_Creatures_Military_PMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_Base : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier : CUP_I_PMC_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_M4A3 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Engineer : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Crew : CUP_I_PMC_Soldier_19
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Medic : CUP_I_PMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_TL : CUP_I_PMC_Soldier_24
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Pilot : CUP_I_PMC_Soldier_19
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_MG : CUP_I_PMC_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_MG_PKM : CUP_I_PMC_Soldier_MG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Sniper : CUP_I_PMC_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Sniper_KSVK : CUP_I_PMC_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_GL : CUP_I_PMC_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Bodyguard_M4 : CUP_I_PMC_Soldier_19
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Bodyguard_AA12 : CUP_I_PMC_Bodyguard_M4
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_AA : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_AT : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Contractor1 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Contractor2 : CUP_I_PMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_GL_M16A2 : CUP_I_PMC_Soldier_10
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_PMC_Soldier_Winter_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_18 : CUP_Creatures_Military_PMC_Soldier_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_25 : CUP_Creatures_Military_PMC_Soldier_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_26 : CUP_Creatures_Military_PMC_Soldier_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_27 : CUP_Creatures_Military_PMC_Soldier_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_28 : CUP_Creatures_Military_PMC_Soldier_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_29 : CUP_Creatures_Military_PMC_Soldier_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_30 : CUP_Creatures_Military_PMC_Soldier_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_33 : CUP_Creatures_Military_PMC_Soldier_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Soldier_34 : CUP_Creatures_Military_PMC_Soldier_Winter_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Soldier : CUP_I_PMC_Soldier_18
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Soldier_M4A3 : CUP_I_PMC_Soldier_18
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Engineer : CUP_I_PMC_Soldier_27
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Crew : CUP_I_PMC_Soldier_28
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Medic : CUP_I_PMC_Soldier_27
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Soldier_TL : CUP_I_PMC_Soldier_26
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Pilot : CUP_I_PMC_Soldier_28
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Soldier_MG : CUP_I_PMC_Soldier_26
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Soldier_MG_PKM : CUP_I_PMC_Winter_Soldier_MG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Sniper : CUP_I_PMC_Soldier_27
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Sniper_KSVK : CUP_I_PMC_Winter_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Soldier_GL : CUP_I_PMC_Soldier_26
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Soldier_AA : CUP_I_PMC_Soldier_27
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_PMC_Winter_Soldier_AT : CUP_I_PMC_Soldier_27
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_RUS_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_02 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_04 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_EMR_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_EMR_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_02_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_04_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_EMR_VDV_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_EMR_VDV_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_BeigeDigital_MSV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_BeigeDigital_MSV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_BeigeDigital_MSV_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_BeigeDigital_MSV_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_BeigeDigital_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_BeigeDigital_VDV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_BeigeDigital_VDV_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_BeigeDigital_VDV_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_KSOR_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_KSOR_VDV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_KSOR_VDV_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_KSOR_VDV_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_ODKB_Soldier_KSOR_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_ODKB_Soldier_KSOR_VDV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_ODKB_Soldier_KSOR_VDV_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_ODKB_Soldier_KSOR_VDV_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_M88_MSV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_M88_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_M88_MSV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_M88_VDV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_01 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_03 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_01_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_03_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_10 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_MSV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_worn_MSV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_worn_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_MSV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_worn_MSV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_VDV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_VDV_rolled_up_gloves2 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_worn_VDV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_worn_VDV_rolled_up_gloves2 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_worn_gloves_MSV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR93_worn_gloves_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_MSV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_worn_MSV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_worn_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_MSV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_worn_MSV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_VDV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_VDV_rolled_up_gloves2 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_worn_VDV_rolled_up : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_worn_VDV_rolled_up_gloves2 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_worn_gloves_MSV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VSR98_worn_gloves_VDV : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_05 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_06 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_07 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_08 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Gorka_Partizan_gloves : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Gorka_PartizanA_gloves : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Gorka_Green_gloves : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Gorka_Partizan_gloves_kneepads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Gorka_PartizanA_gloves_kneepads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Gorka_Green_gloves_kneepads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_09 : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Ratnik_Summer : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Ratnik_Autumn : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Ratnik_Desert : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Ratnik_Pink : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Ratnik_BeigeDigital : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Ratnik_Winter : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_MSV_Pink_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_MSV_Pink_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_VDV_Pink_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_VDV_Pink_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_VDV_BeigeDigital_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_VKPO_VDV_BeigeDigital_rolled_up_gloves_pads : CUP_Creatures_Military_RUS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier : CUP_O_RUS_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Saiga : CUP_O_RUS_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL : CUP_O_RUS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL : CUP_O_RUS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL : CUP_O_RUS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG : CUP_O_RUS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR : CUP_O_RUS_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT : CUP_O_RUS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT : CUP_O_RUS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT : CUP_O_RUS_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA : CUP_O_RUS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper_KSVK : CUP_O_RU_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Spotter : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman : CUP_O_RUS_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Medic : CUP_O_RUS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Pilot : CUP_O_RUS_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Crew : CUP_O_RUS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Engineer : CUP_O_RUS_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Explosive_Specialist : CUP_O_RUS_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Light : CUP_O_RUS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Officer : CUP_O_RUS_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Commander : CUP_O_RUS_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Saiga_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper_EMR : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper_KSVK_EMR : CUP_O_RU_Sniper_EMR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Spotter_EMR : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Medic_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Pilot_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Crew_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Engineer_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Explosive_Specialist_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Light_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Officer_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_VDV : CUP_O_RUS_Soldier_01_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Saiga_VDV : CUP_O_RUS_Soldier_01_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_VDV : CUP_O_RUS_Soldier_03_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_VDV : CUP_O_RUS_Soldier_03_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_VDV : CUP_O_RUS_Soldier_03_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_VDV : CUP_O_RUS_Soldier_03_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_VDV : CUP_O_RUS_Soldier_01_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_VDV : CUP_O_RUS_Soldier_03_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_VDV : CUP_O_RUS_Soldier_03_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_VDV : CUP_O_RUS_Soldier_01_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_VDV : CUP_O_RUS_Soldier_03_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper_VDV : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper_KSVK_VDV : CUP_O_RU_Sniper_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Spotter_VDV : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_VDV : CUP_O_RUS_Soldier_01_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Medic_VDV : CUP_O_RUS_Soldier_03_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Pilot_VDV : CUP_O_RUS_Soldier_01_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Crew_VDV : CUP_O_RUS_Soldier_03_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Engineer_VDV : CUP_O_RUS_Soldier_01_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Explosive_Specialist_VDV : CUP_O_RUS_Soldier_01_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Light_VDV : CUP_O_RUS_Soldier_03_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Officer_VDV : CUP_O_RUS_Soldier_01_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Commander_VDV : CUP_O_RUS_Soldier_01_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_VDV_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Saiga_VDV_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_VDV_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_VDV_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_VDV_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_VDV_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_VDV_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_VDV_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_VDV_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_VDV_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_VDV_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper_VDV_EMR : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper_KSVK_VDV_EMR : CUP_O_RU_Sniper_VDV_EMR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Spotter_VDV_EMR : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_VDV_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Medic_VDV_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Pilot_VDV_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Crew_VDV_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Engineer_VDV_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Explosive_Specialist_VDV_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Light_VDV_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Officer_VDV_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier : CUP_O_RUS_Soldier_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_SpecOps : CUP_O_RUS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_SpecOps_Night : CUP_O_RUS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_SpecOps_SD : CUP_O_RUS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_SpecOps_Scout : CUP_O_RUS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_SpecOps_Scout_Night : CUP_O_RUS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_GL : CUP_O_RUS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_TL : CUP_O_RUS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Commander : CUP_O_RUS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_Marksman : CUP_O_RUS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Saboteur : CUP_O_RUS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_Autumn : CUP_O_RUS_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_SpecOps_Autumn : CUP_O_RUS_Soldier_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_SpecOps_Night_Autumn : CUP_O_RUS_Soldier_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_SpecOps_SD_Autumn : CUP_O_RUS_Soldier_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_SpecOps_Scout_Autumn : CUP_O_RUS_Soldier_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_SpecOps_Scout_Night_Autumn : CUP_O_RUS_Soldier_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_GL_Autumn : CUP_O_RUS_Soldier_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_TL_Autumn : CUP_O_RUS_Soldier_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Commander_Autumn : CUP_O_RUS_Soldier_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Soldier_Marksman_Autumn : CUP_O_RUS_Soldier_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RUS_Saboteur_Autumn : CUP_O_RUS_Soldier_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_MVD_Soldier_Base : CUP_O_RUS_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_MVD_Soldier : CUP_O_MVD_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_MVD_Soldier_GL : CUP_O_MVD_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_MVD_Soldier_TL : CUP_O_MVD_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_MVD_Soldier_AT : CUP_O_MVD_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_MVD_Soldier_MG : CUP_O_MVD_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_MVD_Soldier_Marksman : CUP_O_MVD_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_MVD_Sniper : CUP_O_MVD_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_M_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Saiga_M_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_M_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_M_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_M_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_M_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_M_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_M_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_M_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_M_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_M_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper_M_EMR : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper_KSVK_M_EMR : CUP_O_RU_Sniper_M_EMR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Spotter_M_EMR : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_M_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Medic_M_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Pilot_M_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Crew_M_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Engineer_M_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Explosive_Specialist_M_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Light_M_EMR : CUP_O_RUS_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Officer_M_EMR : CUP_O_RUS_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_VDV_M_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Saiga_VDV_M_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_VDV_M_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_VDV_M_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_VDV_M_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_VDV_M_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_VDV_M_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_VDV_M_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_VDV_M_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_VDV_M_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_VDV_M_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper_VDV_M_EMR : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Sniper_KSVK_VDV_M_EMR : CUP_O_RU_Sniper_VDV_M_EMR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Spotter_VDV_M_EMR : CUP_O_RUS_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_VDV_M_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Medic_VDV_M_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Pilot_VDV_M_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Crew_VDV_M_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Engineer_VDV_M_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Explosive_Specialist_VDV_M_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Light_VDV_M_EMR : CUP_O_RUS_Soldier_04_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Officer_VDV_M_EMR : CUP_O_RUS_Soldier_02_VDV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Survivor_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Unarmed_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Officer_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Lite_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Saiga_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Medic_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Repair_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Exp_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Engineer_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_A_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAR_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAT_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AHAT_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Crew_M_EMR_V2 : CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Survivor_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Unarmed_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Officer_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Lite_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Saiga_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Medic_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Repair_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Exp_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Engineer_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_A_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAR_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAT_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AHAT_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Crew_M_VDV_EMR_V2 : CUP_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Survivor_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Unarmed_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Officer_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Lite_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Saiga_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Medic_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Repair_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Exp_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Engineer_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_A_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAR_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_rolled_up_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAT_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AHAT_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Crew_M_BeigeDigital : CUP_O_RUS_Soldier_VKPO_MSV_BeigeDigital_gloves_pads
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Survivor_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Unarmed_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Lite_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Medic_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Repair_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Exp_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Engineer_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_A_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAR_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAT_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AHAT_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_TL_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Marksman_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_LAT_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Medic_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Exp_Ratnik_Summer : CUP_O_RUS_Ratnik_Summer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Survivor_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Unarmed_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Lite_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Medic_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Repair_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Exp_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Engineer_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_A_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAR_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAT_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AHAT_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_TL_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Marksman_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_LAT_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Medic_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Exp_Ratnik_Winter : CUP_O_RUS_Ratnik_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Survivor_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Unarmed_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Lite_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Medic_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Repair_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Exp_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Engineer_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_A_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAR_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAT_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AHAT_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_TL_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Marksman_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_LAT_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Medic_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Exp_Ratnik_Autumn : CUP_O_RUS_Ratnik_Autumn
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Survivor_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Unarmed_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Lite_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Medic_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Repair_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Exp_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Engineer_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_A_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAR_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAT_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AHAT_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_TL_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Marksman_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_LAT_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Medic_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Exp_Ratnik_BeigeDigital : CUP_O_RUS_Ratnik_BeigeDigital
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Survivor_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Unarmed_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Lite_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Medic_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Repair_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Exp_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Engineer_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_A_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAR_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAT_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AHAT_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_TL_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Marksman_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_LAT_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Medic_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Recon_Exp_Ratnik_Desert : CUP_O_RUS_Ratnik_Desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Survivor_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Unarmed_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_worn_MSV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_TL_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_worn_MSV_rolled_up
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_SL_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV_rolled_up
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Lite_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_GL_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AR_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_worn_MSV_rolled_up
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_MG_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV_rolled_up
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Marksman_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_worn_MSV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Medic_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_worn_MSV_rolled_up
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Exp_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_Engineer_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV_rolled_up
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_LAT_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_worn_MSV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AT_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_HAT_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AA_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAR_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_MSV_rolled_up
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_RU_Soldier_AAT_MSV_VSR93 : CUP_O_RUS_Soldier_VSR93_worn_MSV_rolled_up
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_TK_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_01 : CUP_Creatures_Military_TK_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_02 : CUP_Creatures_Military_TK_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_03 : CUP_Creatures_Military_TK_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_04 : CUP_Creatures_Military_TK_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_05 : CUP_Creatures_Military_TK_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_GL : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_Backpack : CUP_O_TK_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_AAT : CUP_O_TK_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_AMG : CUP_O_TK_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_LAT : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_AT : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_HAT : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_AA : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Engineer : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_MG : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_AR : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_M : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Medic : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_SL : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Officer : CUP_O_TK_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Spotter : CUP_O_TK_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Sniper : CUP_O_TK_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Sniper_KSVK : CUP_O_TK_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Sniper_SVD_Night : CUP_O_TK_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_AKS_Night : CUP_O_TK_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_FNFAL_Night : CUP_O_TK_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Soldier_AKS_74_GOSHAWK : CUP_O_TK_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Crew : CUP_O_TK_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Pilot : CUP_O_TK_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Commander : CUP_O_TK_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_Story_Aziz : CUP_O_TK_Commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_SpecOps : CUP_O_TK_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_SpecOps_TL : CUP_O_TK_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_SpecOps_MG : CUP_O_TK_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_TKI_Insurgent_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_01 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_02 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_03 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_04 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_05 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_06 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_07 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_08 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_09 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_10 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_11 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TKI_Man_12 : CUP_Creatures_Military_TKI_Insurgent_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Soldier : CUP_O_TKI_Man_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Soldier_AAT : CUP_O_TKI_Man_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Soldier_GL : CUP_O_TKI_Man_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Soldier_Enfield : CUP_O_TKI_Man_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Soldier_FNFAL : CUP_O_TKI_Man_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Soldier_AA : CUP_O_TKI_Man_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Soldier_AT : CUP_O_TKI_Man_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Soldier_TL : CUP_O_TKI_Man_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Sniper : CUP_O_TKI_Man_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Soldier_AR : CUP_O_TKI_Man_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Soldier_MG : CUP_O_TKI_Man_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Guerilla_Medic : CUP_O_TKI_Man_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Commander : CUP_O_TKI_Man_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Mechanic : CUP_O_TKI_Man_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_TK_INS_Bomber : CUP_O_TKI_Man_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_TKG_Guerrilla_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_01 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_02 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_03 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_04 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_05 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_06 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_07 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_08 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_09 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_10 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_11 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TKG_Man_12 : CUP_Creatures_Military_TKG_Guerrilla_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier : CUP_I_TKG_Man_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier_AAT : CUP_I_TKG_Man_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier_AK_47S : CUP_I_TKG_Man_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier_M16A2 : CUP_I_TKG_Man_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier_GL : CUP_I_TKG_Man_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Guerilla_Enfield : CUP_I_TKG_Man_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier_AA : CUP_I_TKG_Man_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier_AT : CUP_I_TKG_Man_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier_HAT : CUP_I_TKG_Man_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier_LAT : CUP_I_TKG_Man_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier_TL : CUP_I_TKG_Man_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Sniper : CUP_I_TKG_Man_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier_AR : CUP_I_TKG_Man_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Soldier_MG : CUP_I_TKG_Man_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Guerilla_Medic : CUP_I_TKG_Man_10
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Commander : CUP_I_TKG_Man_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Mechanic : CUP_I_TKG_Man_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_TK_GUE_Demo : CUP_I_TKG_Man_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_USMC_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_01 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_02 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_03 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_04 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_05 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_06 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_07 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_08 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_M81 : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_M81_Tan : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_BLK : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_RGR : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_M81_RGR : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_M81_US : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_M81_US_V2 : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_M81_US_V3 : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_M81_Tan_US : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_M81_RGR_US : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_MC : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_MC_V2 : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_MC_V3 : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_MC_US : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_MC_US_V2 : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_Tan_MC_US : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_RGR_MC_US : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_AOR1 : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_AOR2 : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_ATACSAU : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_G3C_ATACSFG : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_pads_gloves : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_gloves : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_pads : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_roll : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_roll_pads_gloves : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_roll_gloves : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_roll_pads : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_roll_2 : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_roll_2_pads_gloves : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_roll_2_pads : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_roll_2_gloves : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des_pads_gloves : CUP_B_USMC_Soldier_MCCUU_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des_gloves : CUP_B_USMC_Soldier_MCCUU_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des_pads : CUP_B_USMC_Soldier_MCCUU_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des_roll : CUP_B_USMC_Soldier_MCCUU_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des_roll_pads_gloves : CUP_B_USMC_Soldier_MCCUU_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des_roll_gloves : CUP_B_USMC_Soldier_MCCUU_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des_roll_pads : CUP_B_USMC_Soldier_MCCUU_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des_roll_2 : CUP_B_USMC_Soldier_MCCUU_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des_roll_2_pads_gloves : CUP_B_USMC_Soldier_MCCUU_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des_roll_2_pads : CUP_B_USMC_Soldier_MCCUU_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_des_roll_2_gloves : CUP_B_USMC_Soldier_MCCUU_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_pads_gloves : CUP_B_USMC_Soldier_MCCUU_M81_MARPAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_gloves : CUP_B_USMC_Soldier_MCCUU_M81_MARPAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_pads : CUP_B_USMC_Soldier_MCCUU_M81_MARPAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll : CUP_B_USMC_Soldier_MCCUU_M81_MARPAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_pads_gloves : CUP_B_USMC_Soldier_MCCUU_M81_MARPAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_gloves : CUP_B_USMC_Soldier_MCCUU_M81_MARPAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_pads : CUP_B_USMC_Soldier_MCCUU_M81_MARPAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_2 : CUP_B_USMC_Soldier_MCCUU_M81_MARPAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_2_pads_gloves : CUP_B_USMC_Soldier_MCCUU_M81_MARPAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_2_pads : CUP_B_USMC_Soldier_MCCUU_M81_MARPAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_2_gloves : CUP_B_USMC_Soldier_MCCUU_M81_MARPAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81 : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81_pads_gloves : CUP_B_USMC_Soldier_MCCUU_MARPAT_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81_gloves : CUP_B_USMC_Soldier_MCCUU_MARPAT_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81_pads : CUP_B_USMC_Soldier_MCCUU_MARPAT_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81_roll : CUP_B_USMC_Soldier_MCCUU_MARPAT_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81_roll_pads_gloves : CUP_B_USMC_Soldier_MCCUU_MARPAT_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81_roll_gloves : CUP_B_USMC_Soldier_MCCUU_MARPAT_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81_roll_pads : CUP_B_USMC_Soldier_MCCUU_MARPAT_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81_roll_2 : CUP_B_USMC_Soldier_MCCUU_MARPAT_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81_roll_2_pads_gloves : CUP_B_USMC_Soldier_MCCUU_MARPAT_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81_roll_2_pads : CUP_B_USMC_Soldier_MCCUU_MARPAT_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_MARPAT_M81_roll_2_gloves : CUP_B_USMC_Soldier_MCCUU_MARPAT_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81 : CUP_B_USMC_Soldier_MCCUU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_pads_gloves : CUP_B_USMC_Soldier_MCCUU_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_gloves : CUP_B_USMC_Soldier_MCCUU_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_pads : CUP_B_USMC_Soldier_MCCUU_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_roll : CUP_B_USMC_Soldier_MCCUU_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_roll_pads_gloves : CUP_B_USMC_Soldier_MCCUU_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_roll_gloves : CUP_B_USMC_Soldier_MCCUU_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_roll_pads : CUP_B_USMC_Soldier_MCCUU_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_roll_2 : CUP_B_USMC_Soldier_MCCUU_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_roll_2_pads_gloves : CUP_B_USMC_Soldier_MCCUU_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_roll_2_pads : CUP_B_USMC_Soldier_MCCUU_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_roll_2_gloves : CUP_B_USMC_Soldier_MCCUU_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Base : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Base_Blue : CUP_B_USMC_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Base_Brown : CUP_B_USMC_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Base_Green : CUP_B_USMC_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Base_Red : CUP_B_USMC_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Base_Violet : CUP_B_USMC_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Base_White : CUP_B_USMC_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Base_Yellow : CUP_B_USMC_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_Base : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_base_Blue : CUP_B_USNavy_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_base_Brown : CUP_B_USNavy_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_base_Green : CUP_B_USNavy_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_base_Red : CUP_B_USNavy_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_base_Violet : CUP_B_USNavy_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_base_White : CUP_B_USNavy_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_base_Yellow : CUP_B_USNavy_LHD_Crew_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier : CUP_B_USMC_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_UAV : CUP_B_USMC_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_Light : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_SpecOps_SD : CUP_B_USMC_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_GL : CUP_B_USMC_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Officer : CUP_B_USMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_SL : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_TL : CUP_B_USMC_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AT_Base : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_LAT : CUP_B_USMC_Soldier_AT_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AT : CUP_B_USMC_Soldier_AT_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_HAT : CUP_B_USMC_Soldier_AT_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AA : CUP_B_USMC_Soldier_AT_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Medic : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AR : CUP_B_USMC_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MG : CUP_B_USMC_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Spotter : CUP_B_USMC_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Sniper_M40A3 : CUP_B_USMC_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Sniper_M107 : CUP_B_USMC_Sniper_M40A3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_Marksman : CUP_B_USMC_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_SpecOps : CUP_B_USMC_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Engineer : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Pilot : CUP_B_USMC_Soldier_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Crew : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Blue : CUP_B_USMC_LHD_Crew_Base_Blue
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Brown : CUP_B_USMC_LHD_Crew_Base_Brown
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Green : CUP_B_USMC_LHD_Crew_Base_Green
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Red : CUP_B_USMC_LHD_Crew_Base_Red
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Violet : CUP_B_USMC_LHD_Crew_Base_Violet
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_White : CUP_B_USMC_LHD_Crew_Base_White
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_LHD_Crew_Yellow : CUP_B_USMC_LHD_Crew_Base_Yellow
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_Blue : CUP_B_USNavy_LHD_Crew_base_Blue
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_Brown : CUP_B_USNavy_LHD_Crew_base_Brown
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_Green : CUP_B_USNavy_LHD_Crew_base_Green
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_Red : CUP_B_USNavy_LHD_Crew_base_Red
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_Violet : CUP_B_USNavy_LHD_Crew_base_Violet
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_White : CUP_B_USNavy_LHD_Crew_base_White
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USNavy_LHD_Crew_Yellow : CUP_B_USNavy_LHD_Crew_base_Yellow
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_des : CUP_B_USMC_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_UAV_des : CUP_B_USMC_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_Light_des : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_SpecOps_SD_des : CUP_B_USMC_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_GL_des : CUP_B_USMC_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Officer_des : CUP_B_USMC_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_SL_des : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_TL_des : CUP_B_USMC_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AT_Base_des : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_LAT_des : CUP_B_USMC_Soldier_AT_Base_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AT_des : CUP_B_USMC_Soldier_AT_Base_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_HAT_des : CUP_B_USMC_Soldier_AT_Base_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AA_des : CUP_B_USMC_Soldier_AT_Base_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Medic_des : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AR_des : CUP_B_USMC_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MG_des : CUP_B_USMC_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Spotter_des : CUP_B_USMC_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Sniper_M40A3_des : CUP_B_USMC_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Sniper_M107_des : CUP_B_USMC_Sniper_M40A3_des
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_Marksman_des : CUP_B_USMC_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_SpecOps_des : CUP_B_USMC_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Engineer_des : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Pilot_des : CUP_B_USMC_Soldier_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Crew_des : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_10 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_11 : CUP_B_USMC_Soldier_10
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_12 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_13 : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_14 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_15 : CUP_B_USMC_Soldier_14
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_16 : CUP_Creatures_Military_USMC_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_17 : CUP_B_USMC_Soldier_16
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_FROG_WDL : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Crewman_FROG_WDL : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_LAT_FROG_WDL : CUP_B_USMC_Soldier_14
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AT_FROG_WDL : CUP_B_USMC_Soldier_16
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_HAT_FROG_WDL : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AA_FROG_WDL : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_Light_FROG_WDL : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AR_FROG_WDL : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MG_FROG_WDL : CUP_B_USMC_Soldier_14
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_TL_FROG_WDL : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_SL_FROG_WDL : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Medic_FROG_WDL : CUP_B_USMC_Soldier_16
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_Marksman_FROG_WDL : CUP_B_USMC_Soldier_10
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Engineer_FROG_WDL : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_GL_FROG_WDL : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_SpecOps_FROG_WDL : CUP_B_USMC_Soldier_10
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_RTO_FROG_WDL : CUP_B_USMC_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Officer_FROG_WDL : CUP_B_USMC_Soldier_10
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_UAV_FROG_WDL : CUP_B_USMC_Soldier_16
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_FROG_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Crewman_FROG_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_LAT_FROG_DES : CUP_B_USMC_Soldier_15
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AT_FROG_DES : CUP_B_USMC_Soldier_17
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_HAT_FROG_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AA_FROG_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_Light_FROG_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_AR_FROG_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_MG_FROG_DES : CUP_B_USMC_Soldier_15
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_TL_FROG_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_SL_FROG_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Medic_FROG_DES : CUP_B_USMC_Soldier_17
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_Marksman_FROG_DES : CUP_B_USMC_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Engineer_FROG_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_GL_FROG_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_SpecOps_FROG_DES : CUP_B_USMC_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_RTO_FROG_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Officer_FROG_DES : CUP_B_USMC_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_Soldier_UAV_FROG_DES : CUP_B_USMC_Soldier_17
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_FR_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_01 : CUP_Creatures_Military_FR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_02 : CUP_Creatures_Military_FR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_03 : CUP_Creatures_Military_FR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_04 : CUP_Creatures_Military_FR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_05 : CUP_Creatures_Military_FR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_06 : CUP_Creatures_Military_FR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_07 : CUP_Creatures_Military_FR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_08 : CUP_Creatures_Military_FR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_09 : CUP_Creatures_Military_FR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_10 : CUP_Creatures_Military_FR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_TL : CUP_B_FR_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Commander : CUP_B_FR_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Saboteur : CUP_B_FR_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Marksman : CUP_B_FR_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Light : CUP_B_FR_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Medic : CUP_B_FR_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_AR : CUP_B_FR_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_GL : CUP_B_FR_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Exp : CUP_B_FR_Soldier_10
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Operator : CUP_B_FR_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_UAV : CUP_B_FR_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Assault : CUP_B_FR_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Assault_GL : CUP_B_FR_Soldier_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Story_Miles : CUP_B_FR_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Story_Cooper : CUP_B_FR_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Story_Sykes : CUP_B_FR_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Story_OHara : CUP_B_FR_Medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Story_Rodriguez : CUP_B_FR_Soldier_AR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_TL_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Commander_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Saboteur_DES : CUP_B_USMC_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Marksman_DES : CUP_B_USMC_Soldier_17
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Light_DES : CUP_B_USMC_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Medic_DES : CUP_B_USMC_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_AR_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_GL_DES : CUP_B_USMC_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Exp_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Operator_DES : CUP_B_USMC_Soldier_17
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_UAV_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Assault_DES : CUP_B_USMC_Soldier_17
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Soldier_Assault_GL_DES : CUP_B_USMC_Soldier_17
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Story_Miles_DES : CUP_B_USMC_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Story_Cooper_DES : CUP_B_USMC_Soldier_15
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Story_Sykes_DES : CUP_B_USMC_Soldier_15
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Story_OHara_DES : CUP_B_USMC_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_FR_Story_Rodriguez_DES : CUP_B_USMC_Soldier_17
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC : CUP_B_USMC_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_TL : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_TC : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_OC : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_CC : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_EL : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_AR : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_Medic : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_Marksman : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_DA : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_TL_DA : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_TC_DA : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_OC_DA : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_CC_DA : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_EL_DA : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_AR_DA : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_Medic_DA : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USMC_MARSOC_Marksman_DA : CUP_B_USMC_MARSOC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Civil_Chernarus_Base : Civilian_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UPilot_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UCitizen_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UCitizen_02 : CUP_C_UCitizen_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UCitizen_03 : CUP_C_UCitizen_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UCitizen_04 : CUP_C_UCitizen_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_Uracketeer_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_Uracketeer_02 : CUP_C_Uracketeer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_Uracketeer_03 : CUP_C_Uracketeer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_Uracketeer_04 : CUP_C_Uracketeer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UFunctionary_jacket_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UFunctionary_jacket_02 : CUP_C_UFunctionary_jacket_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UFunctionary_jacket_03 : CUP_C_UFunctionary_jacket_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UWorker_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UWorker_02 : CUP_C_UWorker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UWorker_03 : CUP_C_UWorker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UWorker_04 : CUP_C_UWorker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UProfiteer_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UProfiteer_02 : CUP_C_UProfiteer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UProfiteer_03 : CUP_C_UProfiteer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UProfiteer_04 : CUP_C_UProfiteer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UWoodlander_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UWoodlander_02 : CUP_C_UWoodlander_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UWoodlander_03 : CUP_C_UWoodlander_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UWoodlander_04 : CUP_C_UWoodlander_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UVillager_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UVillager_02 : CUP_C_UVillager_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UVillager_03 : CUP_C_UVillager_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UVillager_04 : CUP_C_UVillager_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UPriest_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UPoliceman_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UFunctionary_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UFunctionary_02 : CUP_C_UFunctionary_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UFunctionary_03 : CUP_C_UFunctionary_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UDoctor_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UDoctor_02 : CUP_C_UDoctor_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UDoctor_03 : CUP_C_UDoctor_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_URocker_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_URocker_02 : CUP_C_URocker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_URocker_03 : CUP_C_URocker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_URocker_04 : CUP_C_URocker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UMechanic_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UMechanic_02 : CUP_C_UMechanic_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UMechanic_03 : CUP_C_UMechanic_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UFireman_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_URescuer_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UAirMedic_red_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UAirMedic_orange_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UAirMedic_yellow_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UTracksuit_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UTracksuit_02 : CUP_C_UTracksuit_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UTracksuit_03 : CUP_C_UTracksuit_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_UTracksuit_04 : CUP_C_UTracksuit_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Pilot_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Citizen_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Citizen_02 : CUP_C_C_Citizen_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Citizen_03 : CUP_C_C_Citizen_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Citizen_04 : CUP_C_C_Citizen_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Racketeer_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Racketeer_02 : CUP_C_C_Racketeer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Racketeer_03 : CUP_C_C_Racketeer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Racketeer_04 : CUP_C_C_Racketeer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Functionary_jacket_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Functionary_jacket_02 : CUP_C_C_Functionary_jacket_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Functionary_jacket_03 : CUP_C_C_Functionary_jacket_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Worker_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Worker_02 : CUP_C_C_Worker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Worker_03 : CUP_C_C_Worker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Worker_04 : CUP_C_C_Worker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Profiteer_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Profiteer_02 : CUP_C_C_Profiteer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Profiteer_03 : CUP_C_C_Profiteer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Profiteer_04 : CUP_C_C_Profiteer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Woodlander_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Woodlander_02 : CUP_C_C_Woodlander_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Woodlander_03 : CUP_C_C_Woodlander_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Woodlander_04 : CUP_C_C_Woodlander_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Villager_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Villager_02 : CUP_C_C_Villager_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Villager_03 : CUP_C_C_Villager_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Villager_04 : CUP_C_C_Villager_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Priest_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Policeman_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Policeman_02 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Functionary_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Functionary_02 : CUP_C_C_Functionary_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Functionary_03 : CUP_C_C_Functionary_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Doctor_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Schoolteacher_01 : CUP_C_C_Doctor_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Assistant_01 : CUP_C_C_Doctor_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Rocker_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Rocker_02 : CUP_C_C_Rocker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Rocker_03 : CUP_C_C_Rocker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Rocker_04 : CUP_C_C_Rocker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Mechanic_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Mechanic_02 : CUP_C_C_Mechanic_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Mechanic_03 : CUP_C_C_Mechanic_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Worker_05 : CUP_C_C_Mechanic_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Fireman_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Rescuer_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_AirMedic_red_01 : CUP_C_C_Rescuer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_AirMedic_orange_01 : CUP_C_C_Rescuer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_AirMedic_yellow_01 : CUP_C_C_Rescuer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Bully_01 : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Bully_02 : CUP_C_C_Bully_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Bully_03 : CUP_C_C_Bully_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Bully_04 : CUP_C_C_Bully_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_C_Citizen_Random : CUP_Creatures_Civil_Chernarus_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Pilot_01 : CUP_C_C_Pilot_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Citizen_01 : CUP_C_C_Citizen_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Citizen_02 : CUP_C_R_Citizen_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Citizen_03 : CUP_C_R_Citizen_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Citizen_04 : CUP_C_R_Citizen_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Racketeer_01 : CUP_C_C_Racketeer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Racketeer_02 : CUP_C_R_Racketeer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Racketeer_03 : CUP_C_R_Racketeer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Racketeer_04 : CUP_C_R_Racketeer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Functionary_jacket_01 : CUP_C_C_Functionary_jacket_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Functionary_jacket_02 : CUP_C_R_Functionary_jacket_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Functionary_jacket_03 : CUP_C_R_Functionary_jacket_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Worker_01 : CUP_C_C_Worker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Worker_02 : CUP_C_R_Worker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Worker_03 : CUP_C_R_Worker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Worker_04 : CUP_C_R_Worker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Profiteer_01 : CUP_C_C_Profiteer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Profiteer_02 : CUP_C_R_Profiteer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Profiteer_03 : CUP_C_R_Profiteer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Profiteer_04 : CUP_C_R_Profiteer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Woodlander_01 : CUP_C_C_Woodlander_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Woodlander_02 : CUP_C_R_Woodlander_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Woodlander_03 : CUP_C_R_Woodlander_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Woodlander_04 : CUP_C_R_Woodlander_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Villager_01 : CUP_C_C_Villager_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Villager_02 : CUP_C_R_Villager_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Villager_03 : CUP_C_R_Villager_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Villager_04 : CUP_C_R_Villager_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Priest_01 : CUP_C_C_Priest_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Policeman_01 : CUP_C_C_Policeman_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Policeman_02 : CUP_C_C_Policeman_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Functionary_01 : CUP_C_C_Functionary_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Functionary_02 : CUP_C_R_Functionary_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Functionary_03 : CUP_C_R_Functionary_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Doctor_01 : CUP_C_C_Doctor_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Schoolteacher_01 : CUP_C_R_Doctor_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Assistant_01 : CUP_C_R_Doctor_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Rocker_01 : CUP_C_C_Rocker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Rocker_02 : CUP_C_R_Rocker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Rocker_03 : CUP_C_R_Rocker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Rocker_04 : CUP_C_R_Rocker_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Mechanic_01 : CUP_C_C_Mechanic_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Mechanic_02 : CUP_C_R_Mechanic_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Mechanic_03 : CUP_C_R_Mechanic_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Worker_05 : CUP_C_R_Mechanic_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Fireman_01 : CUP_C_C_Fireman_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Rescuer_01 : CUP_C_C_Rescuer_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Bully_01 : CUP_C_C_Bully_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Bully_02 : CUP_C_R_Bully_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Bully_03 : CUP_C_R_Bully_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Bully_04 : CUP_C_R_Bully_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_R_Citizen_Random : CUP_C_C_Citizen_Random
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Civil_Takistan_Base : Civilian_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_01 : CUP_Creatures_Civil_Takistan_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_02 : CUP_Creatures_Civil_Takistan_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_03 : CUP_Creatures_Civil_Takistan_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_04 : CUP_Creatures_Civil_Takistan_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_05 : CUP_Creatures_Civil_Takistan_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_06 : CUP_Creatures_Civil_Takistan_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_07 : CUP_Creatures_Civil_Takistan_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_08 : CUP_Creatures_Civil_Takistan_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_01_Coat : CUP_C_TK_Man_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_03_Coat : CUP_C_TK_Man_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_05_Coat : CUP_C_TK_Man_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_06_Coat : CUP_C_TK_Man_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_07_Coat : CUP_C_TK_Man_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_01_Jack : CUP_C_TK_Man_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_02_Jack : CUP_C_TK_Man_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_03_Jack : CUP_C_TK_Man_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_04_Jack : CUP_C_TK_Man_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_05_Jack : CUP_C_TK_Man_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_06_Jack : CUP_C_TK_Man_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_08_Jack : CUP_C_TK_Man_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_01_Waist : CUP_C_TK_Man_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_02_Waist : CUP_C_TK_Man_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_03_Waist : CUP_C_TK_Man_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_04_Waist : CUP_C_TK_Man_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_05_Waist : CUP_C_TK_Man_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_06_Waist : CUP_C_TK_Man_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_07_Waist : CUP_C_TK_Man_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_C_TK_Man_08_Waist : CUP_C_TK_Man_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_ACR_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_01 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_02 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_03 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_04 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_05 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_06 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_07 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_08 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_09 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_10 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_11 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_12 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_13 : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_DST_Base : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOp_DST_Base : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_ARPG_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_AMG_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_AR_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Crew_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Engineer_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_ExplosiveSpecialist_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_805_GL_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_MG_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_Marksman_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Medic_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Officer_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Pilot_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_AT_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_Backpack_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_805_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_RPG_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Sniper_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_Light_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_Unarmed_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Spotter_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_SL_DES : CUP_B_CZ_Soldier_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_GL_DES : CUP_B_CZ_SpecOp_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_MG_DES : CUP_B_CZ_SpecOp_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_DES : CUP_B_CZ_SpecOp_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_Scout_DES : CUP_B_CZ_SpecOp_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_Recon_DES : CUP_B_CZ_SpecOp_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_Exp_DES : CUP_B_CZ_SpecOp_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_TL_DES : CUP_B_CZ_SpecOp_DST_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_WDL_Base : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOp_WDL_Base : CUP_Creatures_Military_ACR_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_ARPG_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_AMG_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_AR_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Crew_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Engineer_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_ExplosiveSpecialist_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_805_GL_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_MG_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_Marksman_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Medic_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Officer_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Pilot_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_AT_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_backpack_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_805_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_RPG_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Sniper_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_Light_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_Unarmed_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Spotter_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_Soldier_SL_WDL : CUP_B_CZ_Soldier_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_GL_WDL : CUP_B_CZ_SpecOp_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_MG_WDL : CUP_B_CZ_SpecOp_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_WDL : CUP_B_CZ_SpecOp_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_Scout_WDL : CUP_B_CZ_SpecOp_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_Recon_WDL : CUP_B_CZ_SpecOp_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_Exp_WDL : CUP_B_CZ_SpecOp_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CZ_SpecOps_TL_WDL : CUP_B_CZ_SpecOp_WDL_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CDF_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_01_MNT : CUP_Creatures_Military_CDF_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_02_MNT : CUP_Creatures_Military_CDF_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_01_DST : CUP_Creatures_Military_CDF_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_02_DST : CUP_Creatures_Military_CDF_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_01_FST : CUP_Creatures_Military_CDF_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_02_FST : CUP_Creatures_Military_CDF_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_01_SNW : CUP_Creatures_Military_CDF_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_02_SNW : CUP_Creatures_Military_CDF_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_UNO_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UNO_Soldier_01_MNT : CUP_Creatures_Military_UNO_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UNO_Soldier_02_MNT : CUP_Creatures_Military_UNO_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UNO_Soldier_01_DST : CUP_Creatures_Military_UNO_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UNO_Soldier_02_DST : CUP_Creatures_Military_UNO_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UNO_Soldier_01_FST : CUP_Creatures_Military_UNO_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UNO_Soldier_02_FST : CUP_Creatures_Military_UNO_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_Light_MNT : CUP_B_CDF_Soldier_02_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_GL_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Militia_MNT : CUP_B_CDF_Soldier_02_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Medic_MNT : CUP_B_CDF_Soldier_02_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Sniper_MNT : CUP_B_CDF_Soldier_02_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Spotter_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_Marksman_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_LAT_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AAT_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_RPG18_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AA_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AR_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_MG_MNT : CUP_B_CDF_Soldier_02_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AMG_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_TL_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Officer_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Commander_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Pilot_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Crew_MNT : CUP_B_CDF_Soldier_02_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Engineer_MNT : CUP_B_CDF_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_Light_DST : CUP_B_CDF_Soldier_02_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_GL_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Militia_DST : CUP_B_CDF_Soldier_02_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Medic_DST : CUP_B_CDF_Soldier_02_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Sniper_DST : CUP_B_CDF_Soldier_02_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Spotter_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_Marksman_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_LAT_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AAT_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_RPG18_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AA_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AR_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_MG_DST : CUP_B_CDF_Soldier_02_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AMG_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_TL_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Officer_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Commander_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Pilot_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Crew_DST : CUP_B_CDF_Soldier_02_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Engineer_DST : CUP_B_CDF_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_Light_FST : CUP_B_CDF_Soldier_02_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_GL_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Militia_FST : CUP_B_CDF_Soldier_02_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Medic_FST : CUP_B_CDF_Soldier_02_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Sniper_FST : CUP_B_CDF_Soldier_02_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Spotter_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_Marksman_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_LAT_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AAT_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_RPG18_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AA_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AR_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_MG_FST : CUP_B_CDF_Soldier_02_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AMG_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_TL_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Officer_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Commander_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Pilot_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Crew_FST : CUP_B_CDF_Soldier_02_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Engineer_FST : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_Light_SNW : CUP_B_CDF_Soldier_02_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_GL_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Militia_SNW : CUP_B_CDF_Soldier_02_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Medic_SNW : CUP_B_CDF_Soldier_02_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Sniper_SNW : CUP_B_CDF_Soldier_02_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Spotter_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_Marksman_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_LAT_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AAT_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_RPG18_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AA_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AR_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_MG_SNW : CUP_B_CDF_Soldier_02_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AMG_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_TL_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Officer_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Commander_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Pilot_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Crew_SNW : CUP_B_CDF_Soldier_02_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Engineer_SNW : CUP_B_CDF_Soldier_01_SNW
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier : CUP_B_CDF_Soldier_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_Light : CUP_B_CDF_Soldier_Light_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_GL : CUP_B_CDF_Soldier_GL_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Militia : CUP_B_CDF_Militia_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Medic : CUP_B_CDF_Medic_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Sniper : CUP_B_CDF_Sniper_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Spotter : CUP_B_CDF_Spotter_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_Marksman : CUP_B_CDF_Soldier_Marksman_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_LAT : CUP_B_CDF_Soldier_LAT_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AA : CUP_B_CDF_Soldier_AA_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_AR : CUP_B_CDF_Soldier_AR_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_MG : CUP_B_CDF_Soldier_MG_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Soldier_TL : CUP_B_CDF_Soldier_TL_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Officer : CUP_B_CDF_Officer_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Commander : CUP_B_CDF_Commander_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Pilot : CUP_B_CDF_Pilot_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Crew : CUP_B_CDF_Crew_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_CDF_Engineer : CUP_B_CDF_Engineer_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_MNT : CUP_I_UNO_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_Backpack_MNT : CUP_I_UNO_Soldier_02_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_GL_MNT : CUP_I_UNO_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AAT_MNT : CUP_I_UNO_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AMG_MNT : CUP_I_UNO_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_LAT_MNT : CUP_I_UNO_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AT_MNT : CUP_I_UNO_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_MG_MNT : CUP_I_UNO_Soldier_02_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AR_MNT : CUP_I_UNO_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_SL_MNT : CUP_I_UNO_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Officer_MNT : CUP_I_UNO_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Guard_MNT : CUP_I_UNO_Soldier_02_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Pilot_MNT : CUP_I_UNO_Soldier_01_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Crew_MNT : CUP_I_UNO_Soldier_02_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_Light_MNT : CUP_I_UNO_Soldier_02_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_DST : CUP_I_UNO_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_Backpack_DST : CUP_I_UNO_Soldier_02_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_GL_DST : CUP_I_UNO_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AAT_DST : CUP_I_UNO_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AMG_DST : CUP_I_UNO_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_LAT_DST : CUP_I_UNO_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AT_DST : CUP_I_UNO_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_MG_DST : CUP_I_UNO_Soldier_02_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AR_DST : CUP_I_UNO_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_SL_DST : CUP_I_UNO_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Officer_DST : CUP_I_UNO_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Guard_DST : CUP_I_UNO_Soldier_02_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Pilot_DST : CUP_I_UNO_Soldier_01_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Crew_DST : CUP_I_UNO_Soldier_02_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_Light_DST : CUP_I_UNO_Soldier_02_DST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_FST : CUP_I_UNO_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_Backpack_FST : CUP_I_UNO_Soldier_02_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_GL_FST : CUP_I_UNO_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AAT_FST : CUP_I_UNO_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AMG_FST : CUP_I_UNO_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_LAT_FST : CUP_I_UNO_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AT_FST : CUP_I_UNO_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_MG_FST : CUP_I_UNO_Soldier_02_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AR_FST : CUP_I_UNO_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_SL_FST : CUP_I_UNO_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Officer_FST : CUP_I_UNO_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Guard_FST : CUP_I_UNO_Soldier_02_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Pilot_FST : CUP_I_UNO_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Crew_FST : CUP_I_UNO_Soldier_02_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_Light_FST : CUP_I_UNO_Soldier_02_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier : CUP_I_UN_CDF_Soldier_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_Backpack : CUP_I_UN_CDF_Soldier_Backpack_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AAT : CUP_I_UN_CDF_Soldier_AAT_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AMG : CUP_I_UN_CDF_Soldier_AMG_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_AT : CUP_I_UN_CDF_Soldier_AT_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_MG : CUP_I_UN_CDF_Soldier_MG_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_SL : CUP_I_UN_CDF_Soldier_SL_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Officer : CUP_I_UN_CDF_Officer_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Guard : CUP_I_UN_CDF_Guard_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Pilot : CUP_I_UN_CDF_Pilot_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Crew : CUP_I_UN_CDF_Crew_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_UN_CDF_Soldier_Light : CUP_I_UN_CDF_Soldier_Light_MNT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_OPFINS_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_01 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_02 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_03 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_04 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_05 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_06 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_07 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_08 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_09 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_10 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_11 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_12 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_13 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_14 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_15 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_16 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_17 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_CHDKZ_Soldier_18 : CUP_Creatures_Military_OPFINS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Soldier_AK74 : CUP_Creatures_Military_CHDKZ_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Soldier_Engineer : CUP_Creatures_Military_CHDKZ_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Soldier : CUP_Creatures_Military_CHDKZ_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Soldier_Ammo : CUP_Creatures_Military_CHDKZ_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Soldier_GL : CUP_Creatures_Military_CHDKZ_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Officer : CUP_Creatures_Military_CHDKZ_Soldier_10
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Medic : CUP_Creatures_Military_CHDKZ_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Commander : CUP_Creatures_Military_CHDKZ_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Soldier_AR : CUP_Creatures_Military_CHDKZ_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Soldier_MG : CUP_Creatures_Military_CHDKZ_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Soldier_AT : CUP_Creatures_Military_CHDKZ_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Soldier_LAT : CUP_O_INS_Soldier_AT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Soldier_AA : CUP_Creatures_Military_CHDKZ_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Sniper : CUP_Creatures_Military_CHDKZ_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Soldier_Exp : CUP_Creatures_Military_CHDKZ_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Saboteur : CUP_Creatures_Military_CHDKZ_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Story_Lopotev : CUP_O_INS_Commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Story_Bardak : CUP_O_INS_Commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Crew : CUP_Creatures_Military_CHDKZ_Soldier_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Pilot : CUP_Creatures_Military_CHDKZ_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Worker2 : CUP_Creatures_Military_CHDKZ_Soldier_13
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Woodlander1 : CUP_Creatures_Military_CHDKZ_Soldier_14
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Woodlander2 : CUP_Creatures_Military_CHDKZ_Soldier_15
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Woodlander3 : CUP_Creatures_Military_CHDKZ_Soldier_16
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Villager3 : CUP_Creatures_Military_CHDKZ_Soldier_17
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_INS_Villager4 : CUP_Creatures_Military_CHDKZ_Soldier_18
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_RACS_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Desert_Soldier_01 : CUP_Creatures_Military_RACS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Desert_Soldier_02 : CUP_Creatures_Military_RACS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Desert_Soldier_03 : CUP_Creatures_Military_RACS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_03 : CUP_Creatures_Military_RACS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier : CUP_I_RACS_Desert_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_LAT : CUP_I_RACS_Desert_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_Light : CUP_I_RACS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_Unarmed : CUP_I_RACS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Officer : CUP_I_RACS_Desert_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Medic : CUP_I_RACS_Desert_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_SL : CUP_I_RACS_Desert_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_GL : CUP_I_RACS_Desert_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_M : CUP_I_RACS_Desert_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_AR : CUP_I_RACS_Desert_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_MMG : CUP_I_RACS_Desert_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AMG : CUP_I_RACS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Crew : CUP_I_RACS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AA : CUP_I_RACS_Desert_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_MAT : CUP_I_RACS_Desert_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AAT : CUP_I_RACS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_HAT : CUP_I_RACS_Desert_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Sniper : CUP_I_RACS_Desert_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Engineer : CUP_I_RACS_Desert_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Pilot : CUP_I_RACS_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_RoyalCommando : CUP_I_RACS_Desert_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_RoyalGuard : CUP_I_RACS_Desert_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_RoyalMarksman : CUP_I_RACS_Desert_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Urban_Soldier_01 : CUP_Creatures_Military_RACS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Urban_Soldier_02 : CUP_Creatures_Military_RACS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_Urban : CUP_I_RACS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_LAT_Urban : CUP_I_RACS_Soldier_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_Light_Urban : CUP_I_RACS_Soldier_Light
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_Unarmed_Urban : CUP_I_RACS_Soldier_Unarmed
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Officer_Urban : CUP_I_RACS_Officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Medic_Urban : CUP_I_RACS_Medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_SL_Urban : CUP_I_RACS_SL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_GL_Urban : CUP_I_RACS_GL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_M_Urban : CUP_I_RACS_M
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_AR_Urban : CUP_I_RACS_AR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_MMG_Urban : CUP_I_RACS_MMG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AMG_Urban : CUP_I_RACS_Soldier_AMG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AA_Urban : CUP_I_RACS_Soldier_AA
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_MAT_Urban : CUP_I_RACS_Soldier_MAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AAT_Urban : CUP_I_RACS_Soldier_AAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_HAT_Urban : CUP_I_RACS_Soldier_HAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Sniper_Urban : CUP_I_RACS_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Engineer_Urban : CUP_I_RACS_Engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_WDL_Soldier_01 : CUP_Creatures_Military_RACS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_WDL_Soldier_02 : CUP_Creatures_Military_RACS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_wdl : CUP_I_RACS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_LAT_wdl : CUP_I_RACS_Soldier_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_Light_wdl : CUP_I_RACS_Soldier_Light
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_Unarmed_wdl : CUP_I_RACS_Soldier_Unarmed
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Officer_wdl : CUP_I_RACS_Officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Medic_wdl : CUP_I_RACS_Medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_SL_wdl : CUP_I_RACS_SL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_GL_wdl : CUP_I_RACS_GL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_M_wdl : CUP_I_RACS_M
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_AR_wdl : CUP_I_RACS_AR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_MMG_wdl : CUP_I_RACS_MMG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AMG_wdl : CUP_I_RACS_Soldier_AMG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AA_wdl : CUP_I_RACS_Soldier_AA
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_MAT_wdl : CUP_I_RACS_Soldier_MAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AAT_wdl : CUP_I_RACS_Soldier_AAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_HAT_wdl : CUP_I_RACS_Soldier_HAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Sniper_wdl : CUP_I_RACS_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Engineer_wdl : CUP_I_RACS_Engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Mech_Soldier_01 : CUP_Creatures_Military_RACS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Mech_Soldier_02 : CUP_Creatures_Military_RACS_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_Mech : CUP_I_RACS_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_LAT_Mech : CUP_I_RACS_Soldier_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_Light_Mech : CUP_I_RACS_Soldier_Light
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_Unarmed_Mech : CUP_I_RACS_Soldier_Unarmed
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Officer_Mech : CUP_I_RACS_Officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Medic_Mech : CUP_I_RACS_Medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_SL_Mech : CUP_I_RACS_SL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_GL_Mech : CUP_I_RACS_GL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_M_Mech : CUP_I_RACS_M
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_AR_Mech : CUP_I_RACS_AR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_MMG_Mech : CUP_I_RACS_MMG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AMG_Mech : CUP_I_RACS_Soldier_AMG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AA_Mech : CUP_I_RACS_Soldier_AA
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_MAT_Mech : CUP_I_RACS_Soldier_MAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_AAT_Mech : CUP_I_RACS_Soldier_AAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Soldier_HAT_Mech : CUP_I_RACS_Soldier_HAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Sniper_Mech : CUP_I_RACS_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_I_RACS_Engineer_Mech : CUP_I_RACS_Engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_SLA_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_01 : CUP_Creatures_Military_SLA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_02 : CUP_Creatures_Military_SLA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_03 : CUP_Creatures_Military_SLA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_04 : CUP_Creatures_Military_SLA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_05 : CUP_Creatures_Military_SLA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_06 : CUP_Creatures_Military_SLA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_07 : CUP_Creatures_Military_SLA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_08 : CUP_Creatures_Military_SLA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_09 : CUP_Creatures_Military_SLA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_Overalls_Pilot : CUP_Creatures_Military_SLA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_Overalls_Tank : CUP_Creatures_Military_SLA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_GL : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_Backpack : CUP_O_SLA_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AAT : CUP_O_SLA_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AMG : CUP_O_SLA_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_LAT : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AT : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_HAT : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AA : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Engineer : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_MG : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AR : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Medic : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_SL : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Officer : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Spotter : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Sniper : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Sniper_KSVK : CUP_O_SLA_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Sniper_SVD_Night : CUP_O_SLA_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AKS_Night : CUP_O_SLA_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AKS_74_GOSHAWK : CUP_O_SLA_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Crew : CUP_O_SLA_Soldier_Overalls_Tank
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Pilot : CUP_O_SLA_Soldier_Overalls_Pilot
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Commander : CUP_O_SLA_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_SpecOps : CUP_O_SLA_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_SpecOps_TL : CUP_O_SLA_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_SpecOps_LAT : CUP_O_SLA_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_SpecOps_MG : CUP_O_SLA_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_SpecOps_Demo : CUP_O_SLA_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_militia : CUP_O_SLA_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_GL_militia : CUP_O_SLA_Soldier_GL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_Backpack_militia : CUP_O_SLA_Soldier_Backpack
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AAT_militia : CUP_O_SLA_Soldier_AAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AMG_militia : CUP_O_SLA_Soldier_AMG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_LAT_militia : CUP_O_SLA_Soldier_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AT_militia : CUP_O_SLA_Soldier_AT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AA_militia : CUP_O_SLA_Soldier_AA
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Engineer_militia : CUP_O_SLA_Engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_MG_militia : CUP_O_SLA_Soldier_MG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AR_militia : CUP_O_SLA_Soldier_AR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Medic_militia : CUP_O_SLA_Medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_SL_militia : CUP_O_SLA_Soldier_SL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Officer_militia : CUP_O_SLA_Officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_urban : CUP_O_SLA_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_GL_urban : CUP_O_SLA_Soldier_GL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_Backpack_urban : CUP_O_SLA_Soldier_Backpack
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AAT_urban : CUP_O_SLA_Soldier_AAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AMG_urban : CUP_O_SLA_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_LAT_urban : CUP_O_SLA_Soldier_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AT_urban : CUP_O_SLA_Soldier_AT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_HAT_urban : CUP_O_SLA_Soldier_HAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AA_urban : CUP_O_SLA_Soldier_AA
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Engineer_urban : CUP_O_SLA_Engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_MG_urban : CUP_O_SLA_Soldier_MG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AR_urban : CUP_O_SLA_Soldier_AR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Medic_urban : CUP_O_SLA_Medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_SL_urban : CUP_O_SLA_Soldier_SL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Officer_urban : CUP_O_SLA_Officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Spotter_urban : CUP_O_SLA_Spotter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Sniper_urban : CUP_O_SLA_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Sniper_KSVK_urban : CUP_O_SLA_Sniper_KSVK
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Sniper_SVD_Night_urban : CUP_O_SLA_Sniper_SVD_Night
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AKS_Night_urban : CUP_O_SLA_Soldier_AKS_Night
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AKS_74_GOSHAWK_urban : CUP_O_SLA_Soldier_AKS_74_GOSHAWK
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Commander_urban : CUP_O_SLA_Commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_soldier_desert : CUP_O_SLA_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_GL_desert : CUP_O_SLA_Soldier_GL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_Backpack_desert : CUP_O_SLA_Soldier_Backpack
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AAT_desert : CUP_O_SLA_Soldier_AAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AMG_desert : CUP_O_SLA_Soldier_AMG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_LAT_desert : CUP_O_SLA_Soldier_LAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AT_desert : CUP_O_SLA_Soldier_AT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_HAT_desert : CUP_O_SLA_Soldier_HAT
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AA_desert : CUP_O_SLA_Soldier_AA
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Engineer_desert : CUP_O_SLA_Engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_MG_desert : CUP_O_SLA_Soldier_MG
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AR_desert : CUP_O_SLA_Soldier_AR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Medic_desert : CUP_O_SLA_Medic
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_SL_desert : CUP_O_SLA_Soldier_SL
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Officer_desert : CUP_O_SLA_Officer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Spotter_desert : CUP_O_SLA_Spotter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Sniper_desert : CUP_O_SLA_Sniper
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Sniper_KSVK_desert : CUP_O_SLA_Sniper_KSVK
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Sniper_SVD_Night_desert : CUP_O_SLA_Sniper_SVD_Night
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AKS_Night_desert : CUP_O_SLA_Soldier_AKS_Night
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Soldier_AKS_74_GOSHAWK_desert : CUP_O_SLA_Soldier_AKS_74_GOSHAWK
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_SLA_Commander_desert : CUP_O_SLA_Commander
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_Partisans_soldier_TTsKO : CUP_O_SLA_Soldier_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_Partisans_soldier_SL : CUP_O_SLA_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_Partisans_Soldier_AT : CUP_O_SLA_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_Partisans_Soldier_MG : CUP_O_SLA_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_Partisans_Medic : CUP_O_SLA_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_O_Partisans_Engineer : CUP_O_SLA_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_USA_Soldier_ACU_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_UCP_Soldier_01 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_UCP_Soldier_02 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_UCP_Soldier_03 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_UCP_Soldier_04 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_UCP_Soldier_05 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_UCP_Soldier_06 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_UCP_Soldier_07 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_UCP_Soldier_08 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OCP_Soldier_01 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OCP_Soldier_02 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OCP_Soldier_03 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OCP_Soldier_04 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OCP_Soldier_05 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OCP_Soldier_06 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OCP_Soldier_07 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OCP_Soldier_08 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OEFCP_Soldier_01 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OEFCP_Soldier_02 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OEFCP_Soldier_03 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OEFCP_Soldier_04 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OEFCP_Soldier_05 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OEFCP_Soldier_06 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OEFCP_Soldier_07 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_OEFCP_Soldier_08 : CUP_Creatures_Military_USA_Soldier_ACU_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_USA_Soldier_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_01 : CUP_Creatures_Military_USA_Soldier_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_02 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_03 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_04 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_05 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_06 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_OD : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_desert : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_ERDL : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_ERDL_highland : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_tigerstripe : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_Tpattern : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_urban : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_winter : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_winter_woodlandBottom : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_winter_WoodlandTop : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_BDU_flecktarn : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_BDU_flecktarn_ODBottom : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_GER_Soldier_BDU_Tropentarn : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_BDU_DPM : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_BAF_Soldier_BDU_DPM_ODBottom : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_roll2 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_roll_glove : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDU_roll2_glove : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_V1_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_V2_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_V3_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_RGR_US_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_RGR_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_ATACSFG_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_ATACSFG_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_ATACSAU_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_ATACSAU_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_BLK_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_BLK_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_BLK_RUS_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_BLK_RUS_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_MCAM_RUS_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_MCAM_RUS_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_MCAM_RUS2_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_MCAM_RUS2_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_MCAM_NP_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_MCAM_NP_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_MCAM_NP2_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_MCAM_NP2_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_TAN_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_TAN_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_TAN_US_Full : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_TAN_US_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_RGR_US_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_RGR_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_V1_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_V2_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYE_V3_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_V1 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_V2 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V1 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V1_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V2 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V2_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V3 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V3_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V4 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V4_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V5 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V5_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V6 : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_CRYEG3_MARSOC_V6_Roll : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_base : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_base : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_base : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_base : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_base : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_base : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_base : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_base : CUP_B_USArmy_Soldier_BDUv2_gloves_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_base : CUP_B_USArmy_Soldier_BDUv2_gloves_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_base : CUP_B_USArmy_Soldier_BDUv2_gloves_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_base : CUP_B_USArmy_Soldier_BDUv2_gloves_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_base : CUP_B_USArmy_Soldier_BDUv2_gloves_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_M81 : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_M81 : CUP_B_USArmy_Soldier_BDUv2_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_M81 : CUP_B_USArmy_Soldier_BDUv2_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_M81 : CUP_B_USArmy_Soldier_BDUv2_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_M81 : CUP_B_USArmy_Soldier_BDUv2_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_M81 : CUP_B_USArmy_Soldier_BDUv2_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_M81 : CUP_B_USArmy_Soldier_BDUv2_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_M81 : CUP_B_USArmy_Soldier_BDUv2_gloves_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_M81 : CUP_B_USArmy_Soldier_BDUv2_gloves_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_M81 : CUP_B_USArmy_Soldier_BDUv2_gloves_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_M81 : CUP_B_USArmy_Soldier_BDUv2_gloves_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_M81 : CUP_B_USArmy_Soldier_BDUv2_gloves_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_M81_US : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_M81_US : CUP_B_USArmy_Soldier_BDUv2_M81_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_M81_US : CUP_B_USArmy_Soldier_BDUv2_M81_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_M81_US : CUP_B_USArmy_Soldier_BDUv2_M81_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_M81_US : CUP_B_USArmy_Soldier_BDUv2_M81_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_M81_US : CUP_B_USArmy_Soldier_BDUv2_M81_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_M81_US : CUP_B_USArmy_Soldier_BDUv2_M81_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_M81_US : CUP_B_USArmy_Soldier_BDUv2_gloves_M81_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_M81_US : CUP_B_USArmy_Soldier_BDUv2_gloves_M81_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_M81_US : CUP_B_USArmy_Soldier_BDUv2_gloves_M81_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_M81_US : CUP_B_USArmy_Soldier_BDUv2_gloves_M81_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_M81_US : CUP_B_USArmy_Soldier_BDUv2_gloves_M81_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_desert : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_desert : CUP_B_USArmy_Soldier_BDUv2_desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_desert : CUP_B_USArmy_Soldier_BDUv2_desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_desert : CUP_B_USArmy_Soldier_BDUv2_desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_desert : CUP_B_USArmy_Soldier_BDUv2_desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_desert : CUP_B_USArmy_Soldier_BDUv2_desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_desert : CUP_B_USArmy_Soldier_BDUv2_desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_desert : CUP_B_USArmy_Soldier_BDUv2_gloves_desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_desert : CUP_B_USArmy_Soldier_BDUv2_gloves_desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_desert : CUP_B_USArmy_Soldier_BDUv2_gloves_desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_desert : CUP_B_USArmy_Soldier_BDUv2_gloves_desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_desert : CUP_B_USArmy_Soldier_BDUv2_gloves_desert
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_desert_US : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_desert_US : CUP_B_USArmy_Soldier_BDUv2_desert_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_desert_US : CUP_B_USArmy_Soldier_BDUv2_desert_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_desert_US : CUP_B_USArmy_Soldier_BDUv2_desert_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_desert_US : CUP_B_USArmy_Soldier_BDUv2_desert_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_desert_US : CUP_B_USArmy_Soldier_BDUv2_desert_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_desert_US : CUP_B_USArmy_Soldier_BDUv2_desert_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_desert_US : CUP_B_USArmy_Soldier_BDUv2_gloves_desert_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_desert_US : CUP_B_USArmy_Soldier_BDUv2_gloves_desert_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_desert_US : CUP_B_USArmy_Soldier_BDUv2_gloves_desert_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_desert_US : CUP_B_USArmy_Soldier_BDUv2_gloves_desert_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_desert_US : CUP_B_USArmy_Soldier_BDUv2_gloves_desert_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_DCU : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_DCU : CUP_B_USArmy_Soldier_BDUv2_DCU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_DCU : CUP_B_USArmy_Soldier_BDUv2_DCU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_DCU : CUP_B_USArmy_Soldier_BDUv2_DCU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_DCU : CUP_B_USArmy_Soldier_BDUv2_DCU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_DCU : CUP_B_USArmy_Soldier_BDUv2_DCU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_DCU : CUP_B_USArmy_Soldier_BDUv2_DCU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_DCU : CUP_B_USArmy_Soldier_BDUv2_gloves_DCU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_DCU : CUP_B_USArmy_Soldier_BDUv2_gloves_DCU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_DCU : CUP_B_USArmy_Soldier_BDUv2_gloves_DCU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_DCU : CUP_B_USArmy_Soldier_BDUv2_gloves_DCU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_DCU : CUP_B_USArmy_Soldier_BDUv2_gloves_DCU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_DCU_US : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_DCU_US : CUP_B_USArmy_Soldier_BDUv2_DCU_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_DCU_US : CUP_B_USArmy_Soldier_BDUv2_DCU_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_DCU_US : CUP_B_USArmy_Soldier_BDUv2_DCU_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_DCU_US : CUP_B_USArmy_Soldier_BDUv2_DCU_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_DCU_US : CUP_B_USArmy_Soldier_BDUv2_DCU_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_DCU_US : CUP_B_USArmy_Soldier_BDUv2_DCU_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_DCU_US : CUP_B_USArmy_Soldier_BDUv2_gloves_DCU_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_DCU_US : CUP_B_USArmy_Soldier_BDUv2_gloves_DCU_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_DCU_US : CUP_B_USArmy_Soldier_BDUv2_gloves_DCU_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_DCU_US : CUP_B_USArmy_Soldier_BDUv2_gloves_DCU_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_DCU_US : CUP_B_USArmy_Soldier_BDUv2_gloves_DCU_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_OD : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_OD : CUP_B_USArmy_Soldier_BDUv2_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_OD : CUP_B_USArmy_Soldier_BDUv2_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_OD : CUP_B_USArmy_Soldier_BDUv2_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_OD : CUP_B_USArmy_Soldier_BDUv2_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_OD : CUP_B_USArmy_Soldier_BDUv2_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_OD : CUP_B_USArmy_Soldier_BDUv2_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_OD : CUP_B_USArmy_Soldier_BDUv2_gloves_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_OD : CUP_B_USArmy_Soldier_BDUv2_gloves_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_OD : CUP_B_USArmy_Soldier_BDUv2_gloves_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_OD : CUP_B_USArmy_Soldier_BDUv2_gloves_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_OD : CUP_B_USArmy_Soldier_BDUv2_gloves_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_OD_US : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_OD_US : CUP_B_USArmy_Soldier_BDUv2_OD_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_OD_US : CUP_B_USArmy_Soldier_BDUv2_OD_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_OD_US : CUP_B_USArmy_Soldier_BDUv2_OD_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_OD_US : CUP_B_USArmy_Soldier_BDUv2_OD_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_OD_US : CUP_B_USArmy_Soldier_BDUv2_OD_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_OD_US : CUP_B_USArmy_Soldier_BDUv2_OD_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_OD_US : CUP_B_USArmy_Soldier_BDUv2_gloves_OD_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_OD_US : CUP_B_USArmy_Soldier_BDUv2_gloves_OD_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_OD_US : CUP_B_USArmy_Soldier_BDUv2_gloves_OD_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_OD_US : CUP_B_USArmy_Soldier_BDUv2_gloves_OD_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_OD_US : CUP_B_USArmy_Soldier_BDUv2_gloves_OD_US
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_ERDL_highland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_ERDL_highland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_ERDL_highland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_ERDL_highland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_ERDL_highland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_ERDL_highland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_highland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_highland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_highland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_highland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_ERDL_highland : CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_highland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_ERDL_lowland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_ERDL_lowland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_ERDL_lowland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_ERDL_lowland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_ERDL_lowland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_ERDL_lowland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_lowland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_lowland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_lowland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_lowland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_ERDL_lowland : CUP_B_USArmy_Soldier_BDUv2_gloves_ERDL_lowland
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_Tigerstripe
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_Tigerstripe
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_Tigerstripe
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_Tigerstripe
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_Tigerstripe
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_Tigerstripe
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_gloves_Tigerstripe
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_gloves_Tigerstripe
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_gloves_Tigerstripe
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_gloves_Tigerstripe
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_Tigerstripe : CUP_B_USArmy_Soldier_BDUv2_gloves_Tigerstripe
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_Tpattern : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_Tpattern : CUP_B_USArmy_Soldier_BDUv2_Tpattern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_Tpattern : CUP_B_USArmy_Soldier_BDUv2_Tpattern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_Tpattern : CUP_B_USArmy_Soldier_BDUv2_Tpattern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_Tpattern : CUP_B_USArmy_Soldier_BDUv2_Tpattern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_Tpattern : CUP_B_USArmy_Soldier_BDUv2_Tpattern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_Tpattern : CUP_B_USArmy_Soldier_BDUv2_Tpattern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_Tpattern : CUP_B_USArmy_Soldier_BDUv2_gloves_Tpattern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_Tpattern : CUP_B_USArmy_Soldier_BDUv2_gloves_Tpattern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_Tpattern : CUP_B_USArmy_Soldier_BDUv2_gloves_Tpattern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_Tpattern : CUP_B_USArmy_Soldier_BDUv2_gloves_Tpattern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_Tpattern : CUP_B_USArmy_Soldier_BDUv2_gloves_Tpattern
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_Urban : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_Urban : CUP_B_USArmy_Soldier_BDUv2_Urban
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_Urban : CUP_B_USArmy_Soldier_BDUv2_Urban
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_Urban : CUP_B_USArmy_Soldier_BDUv2_Urban
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_Urban : CUP_B_USArmy_Soldier_BDUv2_Urban
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_Urban : CUP_B_USArmy_Soldier_BDUv2_Urban
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_Urban : CUP_B_USArmy_Soldier_BDUv2_Urban
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_Urban : CUP_B_USArmy_Soldier_BDUv2_gloves_Urban
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_Urban : CUP_B_USArmy_Soldier_BDUv2_gloves_Urban
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_Urban : CUP_B_USArmy_Soldier_BDUv2_gloves_Urban
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_Urban : CUP_B_USArmy_Soldier_BDUv2_gloves_Urban
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_Urban : CUP_B_USArmy_Soldier_BDUv2_gloves_Urban
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_Winter : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_Winter : CUP_B_USArmy_Soldier_BDUv2_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_Winter : CUP_B_USArmy_Soldier_BDUv2_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_Winter : CUP_B_USArmy_Soldier_BDUv2_gloves_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_Winter_M81 : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_Winter_M81 : CUP_B_USArmy_Soldier_BDUv2_Winter_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_Winter_M81 : CUP_B_USArmy_Soldier_BDUv2_Winter_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_Winter_M81 : CUP_B_USArmy_Soldier_BDUv2_gloves_Winter_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_M81_Winter : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_M81_Winter : CUP_B_USArmy_Soldier_BDUv2_M81_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_M81_Winter : CUP_B_USArmy_Soldier_BDUv2_M81_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_M81_Winter : CUP_B_USArmy_Soldier_BDUv2_gloves_M81_Winter
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_CEU : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_CEU : CUP_B_USArmy_Soldier_BDUv2_CEU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_CEU : CUP_B_USArmy_Soldier_BDUv2_CEU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_CEU : CUP_B_USArmy_Soldier_BDUv2_CEU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_CEU : CUP_B_USArmy_Soldier_BDUv2_CEU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_CEU : CUP_B_USArmy_Soldier_BDUv2_CEU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_CEU : CUP_B_USArmy_Soldier_BDUv2_CEU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_CEU : CUP_B_USArmy_Soldier_BDUv2_gloves_CEU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_CEU : CUP_B_USArmy_Soldier_BDUv2_gloves_CEU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_CEU : CUP_B_USArmy_Soldier_BDUv2_gloves_CEU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_CEU : CUP_B_USArmy_Soldier_BDUv2_gloves_CEU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_CEU : CUP_B_USArmy_Soldier_BDUv2_gloves_CEU
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_DDPM : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_DDPM : CUP_B_USArmy_Soldier_BDUv2_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_DDPM : CUP_B_USArmy_Soldier_BDUv2_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_DDPM : CUP_B_USArmy_Soldier_BDUv2_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_DDPM : CUP_B_USArmy_Soldier_BDUv2_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_DDPM : CUP_B_USArmy_Soldier_BDUv2_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_DDPM : CUP_B_USArmy_Soldier_BDUv2_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_DDPM : CUP_B_USArmy_Soldier_BDUv2_gloves_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_DDPM : CUP_B_USArmy_Soldier_BDUv2_gloves_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_DDPM : CUP_B_USArmy_Soldier_BDUv2_gloves_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_DDPM : CUP_B_USArmy_Soldier_BDUv2_gloves_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_DDPM : CUP_B_USArmy_Soldier_BDUv2_gloves_DDPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_DPM : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_DPM : CUP_B_USArmy_Soldier_BDUv2_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_DPM : CUP_B_USArmy_Soldier_BDUv2_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_DPM : CUP_B_USArmy_Soldier_BDUv2_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_DPM : CUP_B_USArmy_Soldier_BDUv2_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_DPM : CUP_B_USArmy_Soldier_BDUv2_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_DPM : CUP_B_USArmy_Soldier_BDUv2_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_DPM : CUP_B_USArmy_Soldier_BDUv2_gloves_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_DPM : CUP_B_USArmy_Soldier_BDUv2_gloves_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_DPM : CUP_B_USArmy_Soldier_BDUv2_gloves_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_DPM : CUP_B_USArmy_Soldier_BDUv2_gloves_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_DPM : CUP_B_USArmy_Soldier_BDUv2_gloves_DPM
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_DPM_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_DPM_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_DPM_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_DPM_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_DPM_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_DPM_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_gloves_DPM_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_gloves_DPM_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_gloves_DPM_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_gloves_DPM_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_DPM_OD : CUP_B_USArmy_Soldier_BDUv2_gloves_DPM_OD
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_Alpenflage
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_Alpenflage
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_Alpenflage
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_Alpenflage
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_Alpenflage
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_Alpenflage
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_gloves_Alpenflage
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_gloves_Alpenflage
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_gloves_Alpenflage
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_gloves_Alpenflage
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_Alpenflage : CUP_B_USArmy_Soldier_BDUv2_gloves_Alpenflage
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_dirty_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_Rhodesian
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_Rhodesian
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_dirty_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_Rhodesian
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_Rhodesian
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_dirty_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_Rhodesian
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_Rhodesian
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_gloves_dirty_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_gloves_Rhodesian
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_gloves_Rhodesian
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_dirty_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_gloves_Rhodesian
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_gloves_Rhodesian
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_dirty_Rhodesian : CUP_B_USArmy_Soldier_BDUv2_gloves_Rhodesian
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AA_UCP : CUP_B_USArmy_UCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_UCP : CUP_B_USArmy_UCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_ACOG_UCP : CUP_B_USArmy_UCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_UAV_UCP : CUP_B_USArmy_UCP_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Backpack_UCP : CUP_B_USArmy_UCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AMG_UCP : CUP_B_USArmy_UCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AAR_UCP : CUP_B_USArmy_UCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AHAT_UCP : CUP_B_USArmy_UCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AAT_UCP : CUP_B_USArmy_UCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Light_UCP : CUP_B_USArmy_UCP_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_GL_UCP : CUP_B_USArmy_UCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Officer_UCP : CUP_B_USArmy_UCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_SL_UCP : CUP_B_USArmy_UCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_TL_UCP : CUP_B_USArmy_UCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_LAT_UCP : CUP_B_USArmy_UCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AT_UCP : CUP_B_USArmy_UCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_HAT_UCP : CUP_B_USArmy_UCP_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Medic_UCP : CUP_B_USArmy_UCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AR_UCP : CUP_B_USArmy_UCP_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_MG_UCP : CUP_B_USArmy_UCP_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Spotter_UCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper_UCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper_M110_TWS_UCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper_M107_UCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Marksman_UCP : CUP_B_USArmy_UCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Marksman_EBR_UCP : CUP_B_USArmy_UCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer_Sapper_UCP : CUP_B_USArmy_UCP_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer_EOD_UCP : CUP_B_USArmy_UCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer_UCP : CUP_B_USArmy_UCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Crew_UCP : CUP_B_USArmy_UCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AA_OCP : CUP_B_USArmy_OCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_OCP : CUP_B_USArmy_OCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_ACOG_OCP : CUP_B_USArmy_OCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_UAV_OCP : CUP_B_USArmy_OCP_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Backpack_OCP : CUP_B_USArmy_OCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AMG_OCP : CUP_B_USArmy_OCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AAR_OCP : CUP_B_USArmy_OCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AHAT_OCP : CUP_B_USArmy_OCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AAT_OCP : CUP_B_USArmy_OCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Light_OCP : CUP_B_USArmy_OCP_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_GL_OCP : CUP_B_USArmy_OCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Officer_OCP : CUP_B_USArmy_OCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_SL_OCP : CUP_B_USArmy_OCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_TL_OCP : CUP_B_USArmy_OCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_LAT_OCP : CUP_B_USArmy_OCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AT_OCP : CUP_B_USArmy_OCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_HAT_OCP : CUP_B_USArmy_OCP_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Medic_OCP : CUP_B_USArmy_OCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AR_OCP : CUP_B_USArmy_OCP_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_MG_OCP : CUP_B_USArmy_OCP_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Spotter_OCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper_OCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper_M110_TWS_OCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper_M107_OCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Marksman_OCP : CUP_B_USArmy_OCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Marksman_EBR_OCP : CUP_B_USArmy_OCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer_Sapper_OCP : CUP_B_USArmy_OCP_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer_EOD_OCP : CUP_B_USArmy_OCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer_OCP : CUP_B_USArmy_OCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Crew_OCP : CUP_B_USArmy_OCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AA_OEFCP : CUP_B_USArmy_OEFCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_OEFCP : CUP_B_USArmy_OEFCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_ACOG_OEFCP : CUP_B_USArmy_OEFCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_UAV_OEFCP : CUP_B_USArmy_OEFCP_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Backpack_OEFCP : CUP_B_USArmy_OEFCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AMG_OEFCP : CUP_B_USArmy_OEFCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AAR_OEFCP : CUP_B_USArmy_OEFCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AHAT_OEFCP : CUP_B_USArmy_OEFCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AAT_OEFCP : CUP_B_USArmy_OEFCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Light_OEFCP : CUP_B_USArmy_OEFCP_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_GL_OEFCP : CUP_B_USArmy_OEFCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Officer_OEFCP : CUP_B_USArmy_OEFCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_SL_OEFCP : CUP_B_USArmy_OEFCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_TL_OEFCP : CUP_B_USArmy_OEFCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_LAT_OEFCP : CUP_B_USArmy_OEFCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AT_OEFCP : CUP_B_USArmy_OEFCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_HAT_OEFCP : CUP_B_USArmy_OEFCP_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Medic_OEFCP : CUP_B_USArmy_OEFCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AR_OEFCP : CUP_B_USArmy_OEFCP_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_MG_OEFCP : CUP_B_USArmy_OEFCP_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Spotter_OEFCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper_OEFCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper_M110_TWS_OEFCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper_M107_OEFCP : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Marksman_OEFCP : CUP_B_USArmy_OEFCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Marksman_EBR_OEFCP : CUP_B_USArmy_OEFCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer_Sapper_OEFCP : CUP_B_USArmy_OEFCP_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer_EOD_OEFCP : CUP_B_USArmy_OEFCP_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer_OEFCP : CUP_B_USArmy_OEFCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Crew_OEFCP : CUP_B_USArmy_OEFCP_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_ACOG : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_UAV : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Backpack : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AMG : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AAR : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AHAT : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AAT : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Light : CUP_B_USArmy_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_GL : CUP_B_USArmy_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Officer : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_SL : CUP_B_USArmy_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_TL : CUP_B_USArmy_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_LAT : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AT : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_HAT : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AA : CUP_B_USArmy_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Medic : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_AR : CUP_B_USArmy_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_MG : CUP_B_USArmy_Soldier_04
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Spotter : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper_M110_TWS : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Sniper_M107 : CUP_B_USArmy_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Marksman : CUP_B_USArmy_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer_Sapper : CUP_B_USArmy_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer_EOD : CUP_B_USArmy_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Engineer : CUP_B_USArmy_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Soldier_Engineer : CUP_B_US_Engineer
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Crew : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Pilot : CUP_B_USArmy_Soldier_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_Pilot_Light : CUP_B_USArmy_Soldier_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps_UAV : CUP_B_USArmy_Soldier_03
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps_TL : CUP_B_USArmy_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps_Medic : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps_Assault : CUP_B_US_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps_SD : CUP_B_US_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps_MG : CUP_B_US_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps_AR : CUP_B_USArmy_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps_Night : CUP_B_US_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps_M : CUP_B_US_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps_M14 : CUP_B_US_SpecOps
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_US_SpecOps_JTAC : CUP_B_USArmy_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_HIL_Reservist_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_Res : CUP_Creatures_Military_HIL_Reservist_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_LAT_Res : CUP_Creatures_Military_HIL_Reservist_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_Light_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_Unarmed_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Officer_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Medic_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_SL_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_GL_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_M_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_MMG_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_AMG_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_MAT_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_HAT_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Engineer_Res : CUP_B_HIL_Soldier_Res
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_HIL_Recon_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_Recon : CUP_Creatures_Military_HIL_Recon_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_LAT_Recon : CUP_Creatures_Military_HIL_Recon_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Medic_Recon : CUP_B_HIL_Soldier_Recon
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_SL_Recon : CUP_B_HIL_Soldier_Recon
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_GL_Recon : CUP_B_HIL_Soldier_Recon
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_M_Recon : CUP_B_HIL_Soldier_Recon
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_MMG_Recon : CUP_B_HIL_Soldier_Recon
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_MAT_Recon : CUP_B_HIL_Soldier_Recon
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_HAT_Recon : CUP_B_HIL_Soldier_Recon
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Engineer_Recon : CUP_B_HIL_Soldier_Recon
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_HIL_Man_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_CCE_Soldier_01 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_CCE_Soldier_02 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_CCE_Soldier_03 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_CCE_Soldier_04 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_CCE_Soldier_05 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_CCE_Soldier_06 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_CCE_Soldier_07 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_CCE_Soldier_08 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_LAT : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_Light : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_Unarmed : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Officer : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Medic : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_SL : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_GL : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_M : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_MMG : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_AMG : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Crew : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_AA : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_MAT : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_AAT : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_HAT : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Engineer : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Pilot : CUP_B_HIL_Soldier
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_HIL_SF_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_TTS_Soldier_01 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_TTS_Soldier_02 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_TTS_Soldier_03 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_TTS_Soldier_04 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_TTS_Soldier_05 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_TTS_Soldier_06 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_TTS_Soldier_07 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_TTS_Soldier_08 : CUP_Creatures_Military_HIL_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_SF : CUP_Creatures_Military_HIL_SF_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_PM_SF : CUP_Creatures_Military_HIL_SF_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_LAT_SF : CUP_Creatures_Military_HIL_SF_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Scout_SF : CUP_Creatures_Military_HIL_SF_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Scout_MP5_SF : CUP_B_HIL_Scout_SF
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Scout_MP7_SF : CUP_B_HIL_Scout_SF
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Medic_SF : CUP_B_HIL_Soldier_SF
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_SL_SF : CUP_B_HIL_Soldier_SF
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_GL_SF : CUP_B_HIL_SL_SF
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_M_SF : CUP_B_HIL_Soldier_SF
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_MMG_SF : CUP_B_HIL_Soldier_SF
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_MAT_SF : CUP_B_HIL_Soldier_SF
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Soldier_HAT_SF : CUP_B_HIL_Soldier_SF
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Engineer_SF : CUP_B_HIL_Soldier_SF
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Diver_MP5_SF : CUP_Creatures_Military_HIL_SF_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_HIL_Diver_MP7_SF : CUP_B_HIL_Diver_MP5_SF
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_Creatures_Military_AFU_Man_Base : SoldierWB
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_M14_Soldier_01 : CUP_Creatures_Military_AFU_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_M14_Soldier_02 : CUP_Creatures_Military_AFU_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_M14_Soldier_03 : CUP_Creatures_Military_AFU_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_M14_Soldier_04 : CUP_Creatures_Military_AFU_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_M14_Soldier_05 : CUP_Creatures_Military_AFU_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_M14_Soldier_06 : CUP_Creatures_Military_AFU_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_M14_Soldier_07 : CUP_Creatures_Military_AFU_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_M14_Soldier_08 : CUP_Creatures_Military_AFU_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_M14_Soldier_09 : CUP_Creatures_Military_AFU_Man_Base
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_AAT : CUP_B_AFU_M14_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_AAR : CUP_B_AFU_M14_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_AMG : CUP_B_AFU_M14_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_ATSpecialist : CUP_B_AFU_M14_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Autorifleman : CUP_B_AFU_M14_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Crewman : CUP_B_AFU_M14_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Engineer : CUP_B_AFU_M14_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Grenadier : CUP_B_AFU_M14_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Grenatier_AKM : CUP_CRYE_MCAM_NP_Full
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Machinegunner : CUP_B_AFU_M14_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Marksman : CUP_B_AFU_M14_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Medic : CUP_B_AFU_M14_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_MissileSoldier_AA : CUP_B_AFU_M14_Soldier_05
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Rifleman : CUP_B_AFU_M14_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Rifleman_PSO : CUP_B_AFU_M14_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Rifleman_AT : CUP_B_AFU_M14_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Rifleman_Ammo : CUP_B_AFU_M14_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Rifleman_AKM : CUP_B_AFU_M14_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Rifleman_SKS : CUP_B_USArmy_Soldier_BDUv2_gloves_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Sapper : CUP_B_AFU_M14_Soldier_07
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Sapper_2 : CUP_B_USArmy_UCP_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Sniper_AM : CUP_B_CZ_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_Spotter_MM14 : CUP_B_CZ_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Soldier_SquadLeader : CUP_B_AFU_M14_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_TDF_Solider_TeamLeader : CUP_B_AFU_M14_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_AAT : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_AAR : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_AMG : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_ATSpecialist : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_ATSpecialist_METIS : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Autorifleman : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Crewman : CUP_B_AFU_M14_Soldier_01
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Engineer : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Grenadier : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Machinegunner : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Marksman : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Medic : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_MissileSoldier_AA : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Rifleman : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Rifleman_1P90 : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Rifleman_PSO : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Rifleman_AT : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Rifleman_Ammo : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Sapper : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Sniper_AM : CUP_B_CZ_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_Spotter : CUP_B_CZ_Soldier_11
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_SquadLeader : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_TeamLeader : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_ReconTL : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_ReconGL : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_ReconMarksman : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_ReconDemo : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_ReconMedic : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_ReconScout : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_ReconScoutAT : CUP_B_AFU_M14_Soldier_09
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_HeliPilot : CUP_B_USMC_Soldier_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_Soldier_HeliCrew : CUP_B_USMC_Soldier_06
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_GrenadierGB : CUP_I_Para_Soldier_15
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_MedicGB : CUP_I_Para_Soldier_12
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_MarksmanDE : CUP_B_GER_Fleck_Crye
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_TeamleaderUS : CUP_CRYE_G3C_MC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_RiflemanBE : CUP_CRYE_MCAM_NP2_Roll
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_RiflemanUSAT : CUP_CRYE_G3C_RGR
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_ARUS : CUP_CRYE_G3C_MC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_SniperGB : B_ghillie_lsh_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_SpotterGB : B_ghillie_lsh_F
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_EngineerDE : CUP_I_Para_Soldier_9
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_MachinegunnerCZ : CUP_B_CZ_Soldier_02
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_RiflemanATCZ : CUP_CRYE_G3C_MC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_MissileSpecialistAACDF : CUP_B_CDF_Soldier_01_FST
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_ATSpecialistUSA : CUP_CRYE_G3C_MC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_RiflemanUS : CUP_CRYE_G3C_MC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_RiflemanFR : CUP_CRYE_G3C_MC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_ReconTeamLeader : CUP_CRYE_G3C_MC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_ReconDemoSpecialist : CUP_B_GER_Fleck_Crye2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_ReconParamedic : CUP_B_GER_Fleck_Crye2
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_ReconGrenadier : CUP_CRYE_G3C_MC
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_ReconMarksman : CUP_CRYE_G3C_M81
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_ReconScout : CUP_B_CZ_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_ILDU_Soldier_ReconScoutAT : CUP_B_CZ_Soldier_08
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_SF_Autorifleman : CUP_CRYE_G3C_MC_V3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_SF_FAC : CUP_CRYE_G3C_MC_V3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_SF_MachineGunner : CUP_CRYE_G3C_MC_V3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_SF_Marksman : CUP_CRYE_G3C_MC_V3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_SF_Medic : CUP_CRYE_G3C_MC_V3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_SF_Operator : CUP_CRYE_G3C_MC_V3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_SF_OperatorAssault : CUP_CRYE_G3C_MC_V3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_SF_TeamLeader : CUP_CRYE_G3C_MC_V3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };

    class CUP_B_AFU_SF_DroneOperator : CUP_CRYE_G3C_MC_V3
    {
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7};
    };
};
