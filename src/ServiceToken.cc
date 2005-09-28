// -*- C++ -*-
//
// Package:     ServiceRegistry
// Class  :     ServiceToken
// 
// Implementation:
//     <Notes on implementation>
//
// Original Author:  Chris Jones
//         Created:  Thu Sep  8 04:26:12 EDT 2005
// $Id: ServiceToken.cc,v 1.1 2005/09/08 09:04:59 chrjones Exp $
//

// system include files

// user include files
#include "FWCore/ServiceRegistry/interface/ServiceToken.h"
#include "FWCore/ServiceRegistry/interface/ServicesManager.h"


//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
//ServiceToken::ServiceToken()
//{
//}
   
// ServiceToken::ServiceToken(const ServiceToken& rhs)
// {
//    // do actual copying here;
// }

//ServiceToken::~ServiceToken()
//{
//}
   
//
// assignment operators
//
// const ServiceToken& ServiceToken::operator=(const ServiceToken& rhs)
// {
//   //An exception safe implementation is
//   ServiceToken temp(rhs);
//   swap(rhs);
//
//   return *this;
// }

//
// member functions
//
void
edm::ServiceToken::connectTo(edm::ActivityRegistry& iConnectTo)
{
   if(0!=manager_.get()){
      manager_->connectTo(iConnectTo);
   }
}
void
edm::ServiceToken::connect(edm::ActivityRegistry& iConnectTo)
{
   if(0!=manager_.get()){
      manager_->connect(iConnectTo);
   }
}

//
// const member functions
//

//
// static member functions
//