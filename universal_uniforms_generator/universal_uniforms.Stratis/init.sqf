/*	
	Copyright (c) 2019, 2025 Džiugas Eiva GPL-3.0-only
	
	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public Licence as published by
    the Free Software Foundation version 3 of the Licence.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public Licence for more details.

    You should have received a copy of the GNU General Public Licence
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

_vanilla = ["A3_Characters_F",
			"A3_Characters_F_Common",
			"A3_Characters_F_Exp",
			"A3_Characters_F_Exp_Civil",
			"A3_Characters_F_Jets",
			"A3_Characters_F_Patrol",
			"A3_Characters_F_Orange",
			"A3_Characters_F_Tacops",
			"A3_Characters_F_Tank",
			"A3_Characters_F_Tank_Uniforms",
			"A3_Characters_F_Enoch",
			"A3_Characters_F_Oldman",
			"A3_Characters_F_AoW"];

_rhs = ["rhs_c_troops",
		"rhsusf_c_troops",
		"rhs_cti_insurgents",
		"rhsgref_c_troops",
		"rhssaf_c_troops"];
		
_cup = ["CUP_Creatures_Military_BAF",
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
		"CUP_Creatures_Military_Ukraine"];

bwm = ["bwa3_units"];

sfp = ["Swedish_Forces_Pack",
	   "sfp_police"];

/* ------------------------------------------ CONTROL VARIABLES -----------------------------------------*/
/*
	To scrape vanilla uniforms, set this to true
	NOTE: All mods have to be disabled as this will
	print all uniforms that the game currently has
*/
_doVanilla = false;

/*
	To scrape a particular mod's uniforms, set this to true
	and adjust the index variable to match one of the string
	in _modPrefixes array.
*/
_doModded = false;
_modPrefixes = ["rhs", "CUP_", "bwa3_", "sfp_"];
_modPrefixIndex = 0;

/*
	To print results, set this to true
*/
_doResults = true;

/*
	To print addons, set this to true
*/
_doAddons = false;

/* ------------------------------------------ FUNCTIONS -----------------------------------------*/
fn_scrapeUniforms = {
	params ["_modded", "_prefix"];

	if(_modded) then {
		{
			_name = configName _x;
			
			if ([_prefix, _name] call BIS_fnc_inString) then {
				_sides = getArray (configFile >> "CfgVehicles" >> _name >> "modelSides");
				_parents = [_x, true] call BIS_fnc_returnParents;
				_override = "modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };";
				
				if ((count _sides) > 0) then {
					if ((_parents select 1) != "CAManBase") then {
						diag_log format ["class %1 : %2{%3};", _name, (_parents select 1), _override];
					};
				};
			};
		} forEach _namesCfg;
	} else {
		{
			_name = configName _x;

			_sides = getArray (configFile >> "CfgVehicles" >> _name >> "modelSides");
			_parents = [_x, true] call BIS_fnc_returnParents;
			_override = "modelSides[]={ 0, 1, 2, 3, 4, 5, 6, 7 };";
				
			if ((count _sides) > 0) then {
				if ((_parents select 1) != "CAManBase") then {
					diag_log format ["class %1 : %2{%3};", _name, (_parents select 1), _override];
				};
			};
		} forEach _namesCfg;
	};

	0
};

/* ------------------------------------------ MAIN -----------------------------------------*/
if(_doVanilla || _doModded || _doResults || _doAddons) then {
	// Required for any of the probes
	_namesCfg = ("true" configClasses (configFile >> "CfgVehicles")) select { 
		_parents = [_x, true] call BIS_fnc_returnParents; ("CAManBase" in _parents)
	};

	diag_log format ["------------------------------------------ START -----------------------------------------"];

	if(_doVanilla) then {
		diag_log format ["-------------------------------------- START VANILLA -------------------------------------"];

		[false, "A3_"] call fn_scrapeUniforms;

		diag_log format ["--------------------------------------- END VANILLA --------------------------------------"];
	};

	if(_doModded) then {
		diag_log format ["-------------------------------------- START MODDED --------------------------------------"];

		[true, _modPrefixes select _modPrefixIndex] call fn_scrapeUniforms;

		diag_log format ["--------------------------------------- END MODDED ---------------------------------------"];
	};

	if(_doResults) then {
		diag_log format ["-------------------------------------- START RESULTS -------------------------------------"];

		{
			_name = configName _x;
			_side = getArray (configFile >> "CfgVehicles" >> _name >> "modelSides");
			_parents = [_x, true] call BIS_fnc_returnParents;

			diag_log format ["%1 [%2 : %4]", _side, _name, (_parents select 0), (_parents select 1)];
		} forEach _namesCfg;

		diag_log format ["--------------------------------------- END RESULTS --------------------------------------"];
	};

	if(_doAddons) then {
		diag_log format ["-------------------------------------- START ADDONS --------------------------------------"];

		_addons = [];

		{
			_name = configName _x;
			_sides = getArray (configFile >> "CfgVehicles" >> _name >> "modelSides");
			_parents = [_x, true] call BIS_fnc_returnParents;

			if ((count _sides) > 0) then {
				if ((_parents select 1) != "CAManBase") then {
					_cfgPatches = ("true" configClasses (configFile >> "CfgPatches")) select {
						_units = getArray (_x >> "units"); (_name in _units)
					};
					
					if((count _cfgPatches) > 0) then {
						_addon = configName (_cfgPatches select 0);
						
						if(!(_addon in _addons)) then {
							_addons append [_addon];
						};
					};			
				};
			};	
		} forEach _namesCfg;

		{
			diag_log _x;
		} forEach _addons;

		diag_log format ["--------------------------------------- END ADDONS --------------------------------------"];
	};

	diag_log format ["------------------------------------------- END ------------------------------------------"];
} else {
	diag_log format ["----------------------------------------- NO WORK ----------------------------------------"];
};
