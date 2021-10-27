import FWCore.ParameterSet.Config as cms

displacedmuonSelectionTypeValueMapProducer = cms.EDProducer("MuonSelectionTypeValueMapProducer",
    inputMuonCollection = cms.InputTag("muons1stStepDisplaced"),
    selectionType = cms.string("All")
)









