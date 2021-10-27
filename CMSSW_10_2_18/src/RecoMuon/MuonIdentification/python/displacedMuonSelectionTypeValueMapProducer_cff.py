import FWCore.ParameterSet.Config as cms

from RecoMuon.MuonIdentification.displacedMuonSelectionTypeValueMapProducer_cfi import *

muidTrackerMuonArbitrated = displacedMuonSelectionTypeValueMapProducer.clone()
muidTrackerMuonArbitrated.selectionType = cms.string("TrackerMuonArbitrated")
#
muidAllArbitrated = displacedMuonSelectionTypeValueMapProducer.clone()
muidAllArbitrated.selectionType = cms.string("AllArbitrated")
#
muidGlobalMuonPromptTight = displacedMuonSelectionTypeValueMapProducer.clone()
muidGlobalMuonPromptTight.selectionType = cms.string("GlobalMuonPromptTight")
#
muidTMLastStationLoose = displacedMuonSelectionTypeValueMapProducer.clone()
muidTMLastStationLoose.selectionType = cms.string("TMLastStationLoose")
#
muidTMLastStationTight = displacedMuonSelectionTypeValueMapProducer.clone()
muidTMLastStationTight.selectionType = cms.string("TMLastStationTight")
#
muidTM2DCompatibilityLoose = displacedMuonSelectionTypeValueMapProducer.clone()
muidTM2DCompatibilityLoose.selectionType = cms.string("TM2DCompatibilityLoose")
#
muidTM2DCompatibilityTight = displacedMuonSelectionTypeValueMapProducer.clone()
muidTM2DCompatibilityTight.selectionType = cms.string("TM2DCompatibilityTight")
#
muidTMOneStationLoose = displacedMuonSelectionTypeValueMapProducer.clone()
muidTMOneStationLoose.selectionType = cms.string("TMOneStationLoose")
#
muidTMOneStationTight = displacedMuonSelectionTypeValueMapProducer.clone()
muidTMOneStationTight.selectionType = cms.string("TMOneStationTight")
#
muidTMLastStationOptimizedLowPtLoose = displacedMuonSelectionTypeValueMapProducer.clone()
muidTMLastStationOptimizedLowPtLoose.selectionType = cms.string("TMLastStationOptimizedLowPtLoose")
#
muidTMLastStationOptimizedLowPtTight = displacedMuonSelectionTypeValueMapProducer.clone()
muidTMLastStationOptimizedLowPtTight.selectionType = cms.string("TMLastStationOptimizedLowPtTight")
#
muidGMTkChiCompatibility = displacedMuonSelectionTypeValueMapProducer.clone()
muidGMTkChiCompatibility.selectionType = cms.string("GMTkChiCompatibility")
#
muidGMStaChiCompatibility = displacedMuonSelectionTypeValueMapProducer.clone()
muidGMStaChiCompatibility.selectionType = cms.string("GMStaChiCompatibility")
#
muidGMTkKinkTight = displacedMuonSelectionTypeValueMapProducer.clone()
muidGMTkKinkTight.selectionType = cms.string("GMTkKinkTight")
#
muidTMLastStationAngLoose = displacedMuonSelectionTypeValueMapProducer.clone()
muidTMLastStationAngLoose.selectionType = cms.string("TMLastStationAngLoose")
#
muidTMLastStationAngTight = displacedMuonSelectionTypeValueMapProducer.clone()
muidTMLastStationAngTight.selectionType = cms.string("TMLastStationAngTight")
#
muidTMOneStationAngLoose = displacedMuonSelectionTypeValueMapProducer.clone()
muidTMOneStationAngLoose.selectionType = cms.string("TMOneStationAngLoose")
#
muidTMOneStationAngTight = displacedMuonSelectionTypeValueMapProducer.clone()
muidTMOneStationAngTight.selectionType = cms.string("TMOneStationAngTight")
#
muidRPCMuLoose = displacedMuonSelectionTypeValueMapProducer.clone()
muidRPCMuLoose.selectionType = cms.string("RPCMuLoose")
#
muonSelectionTypeTask = cms.Task(
    muidTrackerMuonArbitrated
    ,muidAllArbitrated
    ,muidGlobalMuonPromptTight
    ,muidTMLastStationLoose
    ,muidTMLastStationTight
    ,muidTM2DCompatibilityLoose
    ,muidTM2DCompatibilityTight
    ,muidTMOneStationLoose
    ,muidTMOneStationTight
    ,muidTMLastStationOptimizedLowPtLoose
    ,muidTMLastStationOptimizedLowPtTight
    ,muidGMTkChiCompatibility
    ,muidGMStaChiCompatibility
    ,muidGMTkKinkTight
    ,muidTMLastStationAngLoose
    ,muidTMLastStationAngTight
    ,muidTMOneStationAngLoose
    ,muidTMOneStationAngTight
    ,muidRPCMuLoose)
muonSelectionTypeSequence = cms.Sequence(muonSelectionTypeTask)
