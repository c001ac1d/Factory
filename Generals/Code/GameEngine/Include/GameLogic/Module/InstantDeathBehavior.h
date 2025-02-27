/*
**	Command & Conquer Generals(tm)
**	Copyright 2025 Electronic Arts Inc.
**
**	This program is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 3 of the License, or
**	(at your option) any later version.
**
**	This program is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

////////////////////////////////////////////////////////////////////////////////
//																																						//
//  (c) 2001-2003 Electronic Arts Inc.																				//
//																																						//
////////////////////////////////////////////////////////////////////////////////

// FILE: InstantDeathBehavior.h /////////////////////////////////////////////////////////////////////////
// Author: Steven Johnson, Sep 2002
///////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#ifndef __InstantDeathBehavior_H_
#define __InstantDeathBehavior_H_

// INCLUDES ///////////////////////////////////////////////////////////////////////////////////////
#include "GameLogic/Module/DieModule.h"

class FXList;
class ObjectCreationList;
class WeaponTemplate;
class DamageInfo;

//-------------------------------------------------------------------------------------------------
typedef std::vector<const FXList*> FXListVec;
typedef std::vector<const ObjectCreationList*> OCLVec;
typedef std::vector<const WeaponTemplate*> WeaponTemplateVec;

//-------------------------------------------------------------------------------------------------
class InstantDeathBehaviorModuleData : public DieModuleData
{
public:
	FXListVec					m_fx;
	OCLVec						m_ocls;
	WeaponTemplateVec	m_weapons;

	InstantDeathBehaviorModuleData();
	static void buildFieldParse(MultiIniFieldParse& p);

private:

};

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
class InstantDeathBehavior : public DieModule
{

	MEMORY_POOL_GLUE_WITH_USERLOOKUP_CREATE( InstantDeathBehavior, "InstantDeathBehavior" )
	MAKE_STANDARD_MODULE_MACRO_WITH_MODULE_DATA( InstantDeathBehavior, InstantDeathBehaviorModuleData )

public:

	InstantDeathBehavior( Thing *thing, const ModuleData* moduleData );
	// virtual destructor prototype provided by memory pool declaration

	// DieModuleInterface
	virtual void onDie( const DamageInfo *damageInfo );

};

#endif // __InstantDeathBehavior_H_

