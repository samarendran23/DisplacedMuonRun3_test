import FWCore.ParameterSet.Config as cms

displacedMuonSelectionTypeValueMapProducer = cms.EDProducer("MuonSelectionTypeValueMapProducer",
    inputMuonCollection = cms.InputTag("displacedMuons1stStep"),
    selectionType = cms.string("All")
)









