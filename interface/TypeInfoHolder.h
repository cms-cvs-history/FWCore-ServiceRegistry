#ifndef ServiceRegistry_TypeInfoHolder_h
#define ServiceRegistry_TypeInfoHolder_h
// -*- C++ -*-
//
// Package:     ServiceRegistry
// Class  :     TypeInfoHolder
// 
/**\class TypeInfoHolder TypeInfoHolder.h FWCore/ServiceRegistry/interface/TypeInfoHolder.h

 Description: wrapper to allow std::type_info to be used as a key to a std::map

 Usage:
    <usage>

*/
//
// Original Author:  Chris Jones
//         Created:  Mon Sep  5 14:38:42 EDT 2005
// $Id: TypeInfoHolder.h,v 1.1 2005/09/07 21:58:16 chrjones Exp $
//

// system include files

// user include files

// forward declarations
namespace edm {
   namespace serviceregistry {

      class TypeInfoHolder {
        public:
         TypeInfoHolder(const std::type_info& iInfo) : m_info(iInfo) {}
         const std::type_info& info() const { return m_info;}
         
         bool operator<(const TypeInfoHolder& iRHS) const {
            return m_info.before(iRHS.m_info) ;
         }
        private:
         const std::type_info& m_info;
      };
   }
}

#endif