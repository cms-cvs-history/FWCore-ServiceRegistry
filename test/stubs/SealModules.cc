/*
 *  SealModules.cc
 *  CMSSW
 *
 *  Created by Chris Jones on 9/7/05.
 *
 */

#include "FWCore/ServiceRegistry/test/stubs/DependsOnDummyService.h"
#include "FWCore/ServiceRegistry/test/stubs/DummyService.h"
#include "FWCore/ServiceRegistry/interface/ServiceMaker.h"

using namespace testserviceregistry;
using namespace edm::serviceregistry;
DEFINE_SEAL_MODULE();
DEFINE_ANOTHER_FWK_SERVICE_MAKER(DependsOnDummyService,NoArgsMaker<DependsOnDummyService>)
DEFINE_ANOTHER_FWK_SERVICE(DummyService)

