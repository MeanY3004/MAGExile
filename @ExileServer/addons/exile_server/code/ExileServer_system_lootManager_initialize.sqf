/**
 * ExileServer_system_lootManager_initialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileServerBuildingNetIdsWithLoot = [];
[30, ExileServer_system_lootManager_thread_spawnLoot, [], true] call ExileServer_system_thread_addTask;
true