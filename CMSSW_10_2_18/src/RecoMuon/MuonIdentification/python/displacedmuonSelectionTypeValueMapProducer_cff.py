import FWCore.ParameterSet.Config as cms

from RecoMuon.MuonIdentification.displacedmuonSelectionTypeValueMapProducer_cfi import *

muidTrackerMuonArbitrated = displacedmuonSelectionTypeValueMapProducer.clone()
muidTrackerMuonArbitrated.selectionType = cms.string("TrackerMuonArbitrated")
#
muidAllArbitrated = displacedmuonSelectionTypeValueMapProducer.clone()
muidAllArbitrated.selectionType = cms.string("AllArbitrated")
#
muidGlobalMuonPromptTight = displacedmuonSelectionTypeValueMapProducer.clone()
muidGlobalMuonPromptTight.selectionType = cms.string("GlobalMuonPromptTight")
#
muidTMLastStationLoose = displacedmuonSelectionTypeValueMapProducer.clone()
muidTMLastStationLoose.selectionType = cms.string("TMLastStationLoose")
#
muidTMLastStationTight = displacedmuonSelectionTypeValueMapProducer.clone()
muidTMLastStationTight.selectionType = cms.string("TMLastStationTight")
#
muidTM2DCompatibilityLoose = displacedmuonSelectionTypeValueMapProducer.clone()
muidTM2DCompatibilityLoose.selectionType = cms.string("TM2DCompatibilityLoose")
#
muidTM2DCompatibilityTight = displacedmuonSelectionTypeValueMapProducer.clone()
muidTM2DCompatibilityTight.selectionType = cms.string("TM2DCompatibilityTight")
#
muidTMOneStationLoose = displacedmuonSelectionTypeValueMapProducer.clone()
muidTMOneStationLoose.selectionType = cms.string("TMOneStationLoose")
#
muidTMOneStationTight = displacedmuonSelectionTypeValueMapProducer.clone()
muidTMOneStationTight.selectionType = cms.string("TMOneStationTight")
#
muidTMLastStationOptimizedLowPtLoose = displacedmuonSelectionTypeValueMapProducer.clone()
muidTMLastStationOptimizedLowPtLoose.selectionType = cms.string("TMLastStationOptimizedLowPtLoose")
#
muidTMLastStationOptimizedLowPtTight = displacedmuonSelectionTypeValueMapProducer.clone()
muidTMLastStationOptimizedLowPtTight.selectionType = cms.string("TMLastStationOptimizedLowPtTight")
#
muidGMTkChiCompatibility = displacedmuonSelectionTypeValueMapProducer.clone()
muidGMTkChiCompatibility.selectionType = cms.string("GMTkChiCompatibility")
#
muidGMStaChiCompatibility = displacedmuonSelectionTypeValueMapProducer.clone()
muidGMStaChiCompatibility.selectionType = cms.string("GMStaChiCompatibility")
#
muidGMTkKinkTight = displacedmuonSelectionTypeValueMapProducer.clone()
muidGMTkKinkTight.selectionType = cms.string("GMTkKinkTight")
#
muidTMLastStationAngLoose = displacedmuonSelectionTypeValueMapProducer.clone()
muidTMLastStationAngLoose.selectionType = cms.string("TMLastStationAngLoose")
#
muidTMLastStationAngTight = displacedmuonSelectionTypeValueMapProducer.clone()
muidTMLastStationAngTight.selectionType = cms.string("TMLastStationAngTight")
#
muidTMOneStationAngLoose = displacedmuonSelectionTypeValueMapProducer.clone()
muidTMOneStationAngLoose.selectionType = cms.string("TMOneStationAngLoose")
#
muidTMOneStationAngTight = displacedmuonSelectionTypeValueMapProducer.clone()
muidTMOneStationAngTight.selectionType = cms.string("TMOneStationAngTight")
#
muidRPCMuLoose = displacedmuonSelectionTypeValueMapProducer.clone()
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
