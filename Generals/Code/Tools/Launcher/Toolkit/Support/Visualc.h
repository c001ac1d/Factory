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

/******************************************************************************
*
* FILE
*     $Archive:  $
*
* DESCRIPTION
*     Disable specific warnings generated by Microsoft Visual C++ 6.0
*
* PROGRAMMER
*     Denzil E. Long, Jr.
*     $Author:  $
*
* VERSION INFO
*     $Modtime:  $
*     $Revision:  $
*
******************************************************************************/
#pragma once

#ifndef _VISUALC_H_
#define _VISUALC_H_

#if defined(_MSC_VER)

// "unreferenced inline function has been removed"
// Inline functions are used in headers and this warning will appear everywhere
// without explicitly being disabled.
#pragma warning(disable:4514)

// "conversion from 'double' to 'float', possible loss of data"
// This occurs during non-constant floating point arithmetic. Since all floating
// point math is silently upcasted to doubles, it should silently downcast
// back to 'float' when complete -- hence this warning should not be displayed.
#pragma warning(disable:4244)

// "overflow in floating-point constant arithmetic"
// This warning occurs even when there is no overflow. It occurs when a double
// is downcasted to a float during constant arithmetic (this is not worthy of
// a warning message).
#pragma warning(disable:4056)

// "argument trunation from const double to float"
// This warning is of little use since the compiler uses doubles whenever
// possible, therfore this warning will appear frequently. It is similar to
// warning 4244 and is similarly irrelevant.
#pragma warning(disable:4305)

// "'this' used in base member initializer list"
// Using "this" in a base member initializer is valid -- no need for this warning.
#pragma warning(disable:4355)

// "typedef-name used as a synonym for class-name"
// This is by design and should not be a warning.
#pragma warning(disable:4097)

// "function not inlined"
// This warning is typically useless. The inline keyword only serves as a
// suggestion to the compiler and it may or may not inline a function on a
// case by case basis. No need to be told of this.
#pragma warning(disable:4710)

// "function selected for automatic inline expansion"
// There is no need to announce this with a warning message.
#pragma warning(disable:4711)

// "identifier was truncated to 'number' characters in the debug information"
// The debugger cannot debug code with symbols longer than 255 characters.
// In the debugger, you cannot view, evaluate, update, or watch the truncated symbols.
#pragma warning(disable:4786)

#endif // _MSC_VER
#endif // _VISUALC_H_
