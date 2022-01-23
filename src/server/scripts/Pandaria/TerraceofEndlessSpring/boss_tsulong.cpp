/*
 * Copyright (C) 2012-2013 JadeCore <http://www.pandashan.com/>
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2006-2009 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "GameObjectAI.h"
#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "terrace_of_endless_spring.h"
#include "Pet.h"

enum eTsulongSpells
{
    SPELL_DREAD_SHADOWS        = 122767,
    SPELL_DREAD_SHADOWS_DEBUFF = 122768,
    SPELL_SUNBEAM_DUMMY        = 122782,
    SPELL_SUNBEAM_PROTECTION   = 122789,
    SPELL_NIGHT_PHASE_EFFECT   = 122841,
};

enum eTsulongCreatures
{
    SUNBEAM_DUMMY_ENTRY    = 62849,
};

void AddSC_boss_tsulong()
{

}
