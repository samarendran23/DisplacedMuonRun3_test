import FWCore.ParameterSet.Config as cms

# -*-SH-*-
from RecoMuon.MuonIdentification.isolation_cff import *
from RecoMuon.MuonIdentification.caloCompatibility_cff import *
from RecoMuon.MuonIdentification.MuonTimingFiller_cfi import *
from RecoMuon.MuonIdentification.TrackerKinkFinder_cfi import *
#from TrackingTools.TrackAssociator.default_cfi import *
muons1stStepDisplaced = cms.EDProducer("MuonIdProducer",
    # MuonCaloCompatibility
    MuonCaloCompatibilityBlock,
    # TrackDetectorAssociator
    TrackAssociatorParameterBlock,
    # MuonIsolation
    MIdIsoExtractorPSetBlock,
    # MuonTiming
    TimingFillerBlock,
    # Kink finder
    TrackerKinkFinderParametersBlock,

    fillEnergy = cms.bool(True),
    # OR
    maxAbsPullX = cms.double(3.0),
    maxAbsEta = cms.double(3.0),

    # Selection parameters
    minPt = cms.double(0.5),
    inputCollectionTypes = cms.vstring('inner tracks', 
                                       'links', 
                                       'outer tracks',
                                      # 'tev firstHit',
                                      # 'tev picky',
                                      # 'tev dyt'
                                      ),
    addExtraSoftMuons = cms.bool(False),
    fillGlobalTrackRefits = cms.bool(True),

    # internal
    debugWithTruthMatching = cms.bool(False),
    # input tracks
    inputCollectionLabels = cms.VInputTag(cms.InputTag("displacedTracks"), cms.InputTag("globalMuons"), cms.InputTag("displacedStandAloneMuons"),
                                          #cms.InputTag("tevMuons","firstHit"),cms.InputTag("tevMuons","picky"),cms.InputTag("tevMuons","dyt")
                                          ),
    fillCaloCompatibility = cms.bool(True),
    # OR
    maxAbsPullY = cms.double(9999.0),
    # AND
    maxAbsDy = cms.double(9999.0),
    minP = cms.double(2.5),
    minPCaloMuon = cms.double(1e9),

    # Match parameters
    maxAbsDx = cms.double(3.0),
    fillIsolation = cms.bool(True),
    writeIsoDeposits = cms.bool(True),
    minNumberOfMatches = cms.int32(1),
    fillMatching = cms.bool(True),

    # global fit for candidate p4 requirements
    ptThresholdToFillCandidateP4WithGlobalFit = cms.double(200.0),
    sigmaThresholdToFillCandidateP4WithGlobalFit = cms.double(2.0),

    # global quality
    fillGlobalTrackQuality = cms.bool(False), #input depends on external module output --> set to True where the sequence is defined
    globalTrackQualityInputTag = cms.InputTag('glbTrackQual'),

    # tracker kink finding
    fillTrackerKink = cms.bool(True),
    
    # calo muons
    minCaloCompatibility = cms.double(0.6),

    # arbitration cleaning                       
    runArbitrationCleaner = cms.bool(True),
    arbitrationCleanerOptions = cms.PSet( ME1a = cms.bool(True),
                                          Overlap = cms.bool(True),
                                          Clustering = cms.bool(True),
                                          OverlapDPhi   = cms.double(0.0786), # 4.5 degrees
                                          OverlapDTheta = cms.double(0.02), # 1.14 degrees
                                          ClusterDPhi   = cms.double(0.6), # 34 degrees
                                          ClusterDTheta = cms.double(0.02) # 1.14
    ),

    # tracker muon arbitration
    arbitrateTrackerMuons = cms.bool(True)
)

#from Configuration.Eras.Modifier_run3_GEM_cff import run3_GEM
#run3_GEM.toModify( muons1stStep, TrackAssociatorParameters = dict(useGEM = cms.bool(True) ) )
#from Configuration.Eras.Modifier_phase2_muon_cff import phase2_muon
#phase2_muon.toModify( muons1stStep, TrackAssociatorParameters = dict(useME0 = cms.bool(True) ) )

#muonEcalDetIds = cms.EDProducer("InterestingEcalDetIdProducer",
#                                inputCollection = cms.InputTag("muons1stStep")
#)

#from Configuration.Eras.Modifier_pp_on_AA_2018_cff import pp_on_AA_2018
#pp_on_AA_2018.toModify(muons1stStep, minPt = 0.8)
