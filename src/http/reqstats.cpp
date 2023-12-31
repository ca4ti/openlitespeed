/*****************************************************************************
*    Open LiteSpeed is an open source HTTP server.                           *
*    Copyright (C) 2013 - 2022  LiteSpeed Technologies, Inc.                 *
*                                                                            *
*    This program is free software: you can redistribute it and/or modify    *
*    it under the terms of the GNU General Public License as published by    *
*    the Free Software Foundation, either version 3 of the License, or       *
*    (at your option) any later version.                                     *
*                                                                            *
*    This program is distributed in the hope that it will be useful,         *
*    but WITHOUT ANY WARRANTY; without even the implied warranty of          *
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the            *
*    GNU General Public License for more details.                            *
*                                                                            *
*    You should have received a copy of the GNU General Public License       *
*    along with this program. If not, see http://www.gnu.org/licenses/.      *
*****************************************************************************/
#include "reqstats.h"

ReqStats::ReqStats()
    : m_iReqPerSec(0)
    , m_iTotalReqs(0)
    , m_iStxCacheHitsPerSec(0)
    , m_iTotalStxCacheHits(0)
    , m_iPubCacheHitsPerSec(0)
    , m_iTotalPubCacheHits(0)
    , m_iPrivCacheHitsPerSec(0)
    , m_iTotalPrivCacheHits(0)

{
}

ReqStats::~ReqStats()
{
}

void ReqStats::finalizeRpt()
{
    m_iTotalReqs += m_iReqPerSec;
    m_iTotalStxCacheHits += m_iStxCacheHitsPerSec;
    m_iTotalPubCacheHits += m_iPubCacheHitsPerSec;
    m_iTotalPrivCacheHits += m_iPrivCacheHitsPerSec;

}


