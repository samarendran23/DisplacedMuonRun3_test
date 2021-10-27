from RecoMuon.MuonIdentification.displacedMuonShowerInformation_cfi import *
displacedMuonShowerInformation = cms.EDProducer("MuonShowerInformationProducer",
                                           MuonServiceProxy,
    muonCollection = cms.InputTag("displacedMuons1stStep"),
    trackCollection = cms.InputTag("displacedTracks"),
    ShowerInformationFillerParameters = MuonShowerParameters.MuonShowerInformationFillerParameters
)
