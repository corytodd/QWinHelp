/* Locale identifier class implementation.

   Copyright (C) 2010 rel-eng

   This file is part of QWinHelp.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include "LCID.h"

#include "Utils/DebugUtils.h"

LCIDex::LCIDex() :
    primaryLanguageID(0), subLanguageID(0), sortID(0), sortVersion(0)
{
    PRINT_DBG("LCIDex default constructor");
}

LCIDex::LCIDex(quint16 primaryLanguageID, quint8 subLanguageID, quint8 sortID,
    quint8 sortVersion) :
    primaryLanguageID(primaryLanguageID), subLanguageID(subLanguageID), sortID(
    sortID), sortVersion(sortVersion)
{
    PRINT_DBG("LCIDex constructor");
}

LCIDex::LCIDex(const LCIDex& rhs) :
    primaryLanguageID(rhs.primaryLanguageID), subLanguageID(rhs.subLanguageID),
    sortID(rhs.sortID), sortVersion(rhs.sortVersion)
{
    PRINT_DBG("LCIDex copy constructor");
}

LCIDex::~LCIDex()
{
    PRINT_DBG("LCIDex destructor");
}

LCIDex & LCIDex::operator=(const LCIDex & rhs)
{
    PRINT_DBG("LCIDex assignment operator");
    if (this != &rhs)
    {
        this->primaryLanguageID = rhs.primaryLanguageID;
        this->subLanguageID = rhs.subLanguageID;
        this->sortID = rhs.sortID;
        this->sortVersion = rhs.sortVersion;
    }
    return *this;
}

quint16 LCIDex::getPrimaryLanguageID() const
{
    return primaryLanguageID;
}

quint8 LCIDex::getSubLanguageID() const
{
    return subLanguageID;
}

quint8 LCIDex::getSortID() const
{
    return sortID;
}

quint8 LCIDex::getSortVersion() const
{
    return sortVersion;
}
