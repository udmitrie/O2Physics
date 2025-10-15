// Copyright 2019-2020 CERN and copyright holders of ALICE O2.
// See https://alice-o2.web.cern.ch/copyright for details of the copyright holders.
// All rights not expressly granted are reserved.
//
// This software is distributed under the terms of the GNU General Public
// License v3 (GPL Version 3), copied verbatim in the file "COPYING".
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

/// \file ZDCExtra.h
/// \brief ZDC extra table
/// \author Chiara Oppedisano <chiara.oppedisano@cern.ch>, INFN Torino; Uliana Dmitrieva <uliana.dmitrieva@cern.ch>, INFN Torino

#ifndef COMMON_DATAMODEL_ZDCEXTRA_H_
#define COMMON_DATAMODEL_ZDCEXTRA_H_

#include <Framework/AnalysisDataModel.h>

#include <cstdint>

namespace o2::aod
{
namespace zdcextra
{
DECLARE_SOA_COLUMN(ZNApmc, znaPMC, float);                 //! PMC ZNA        
DECLARE_SOA_COLUMN(ZNApm1, znaPM1, float);                 //! PM1 ZNA        
DECLARE_SOA_COLUMN(ZNApm2, znaPM2, float);                 //! PM2 ZNA        
DECLARE_SOA_COLUMN(ZNApm3, znaPM3, float);                 //! PM3 ZNA        
DECLARE_SOA_COLUMN(ZNApm4, znaPM4, float);                 //! PM4 ZNA        
DECLARE_SOA_COLUMN(ZNAtdc, znaTDC, float);                 //! TDC ZNA        
DECLARE_SOA_COLUMN(ZNAQx, znaQx, float);                   //! Q-vector X ZNA
DECLARE_SOA_COLUMN(ZNAQy, znaQy, float);                   //! Q-vector Y ZNA
DECLARE_SOA_COLUMN(ZNCpmc, zncPMC, float);                 //! PMC ZNC        
DECLARE_SOA_COLUMN(ZNCpm1, zncPM1, float);                 //! PM1 ZNC        
DECLARE_SOA_COLUMN(ZNCpm2, zncPM2, float);                 //! PM2 ZNC        
DECLARE_SOA_COLUMN(ZNCpm3, zncPM3, float);                 //! PM3 ZNC        
DECLARE_SOA_COLUMN(ZNCpm4, zncPM4, float);                 //! PM4 ZNC        
DECLARE_SOA_COLUMN(ZNCtdc, zncTDC, float);                 //! TDC ZNC        
DECLARE_SOA_COLUMN(ZNCQx, zncQx, float);                   //! Q-vector X ZNC
DECLARE_SOA_COLUMN(ZNCQy, zncQy, float);                   //! Q-vector Y ZNC
DECLARE_SOA_COLUMN(Centrality, centrality, float);         //! Centrality
DECLARE_SOA_COLUMN(Vx, vx, float);                         //! Vertex X
DECLARE_SOA_COLUMN(Vy, vy, float);                         //! Vertex Y
DECLARE_SOA_COLUMN(Vz, vz, float);                         //! Vertex Z
DECLARE_SOA_COLUMN(Timestamp, timestamp, uint64_t);        //! Timestamp
DECLARE_SOA_COLUMN(SelectionBits, selectionBits, uint8_t); //! Selection Flags
} // namespace zdcextra

DECLARE_SOA_TABLE(ZdcExtras, "AOD", "ZDCEXTRA", o2::soa::Index<>,
                  zdcextra::ZNApmc,
                  zdcextra::ZNApm1,
                  zdcextra::ZNApm2,
                  zdcextra::ZNApm3,
                  zdcextra::ZNApm4,
                  zdcextra::ZNAtdc,
                  zdcextra::ZNAQx,
                  zdcextra::ZNAQy,
                  zdcextra::ZNCpmc,
                  zdcextra::ZNCpm1,
                  zdcextra::ZNCpm2,
                  zdcextra::ZNCpm3,
                  zdcextra::ZNCpm4,
                  zdcextra::ZNCtdc,
                  zdcextra::ZNCQx,
                  zdcextra::ZNCQy,
                  zdcextra::Centrality,
                  zdcextra::Vx,
                  zdcextra::Vy,
                  zdcextra::Vz,
                  zdcextra::Timestamp,
                  zdcextra::SelectionBits);
} // namespace o2::aod

#endif // COMMON_DATAMODEL_ZDCEXTRA_H_
