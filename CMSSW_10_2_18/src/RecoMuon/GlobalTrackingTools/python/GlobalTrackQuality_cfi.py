import FWCore.ParameterSet.Config as cms

from RecoMuon.TrackingTools.MuonServiceProxy_cff import *
from RecoMuon.GlobalTrackingTools.GlobalMuonRefitter_cff import *
from RecoMuon.GlobalTrackingTools.GlobalMuonTrackMatcher_cff import *

glbTrackQual = cms.EDProducer(
    "GlobalTrackQualityProducer",
    MuonServiceProxy,
    GlobalMuonTrackMatcher,
    InputCollection = cms.InputTag("globalMuons"),
    InputLinksCollection = cms.InputTag("globalMuons"),

    testCollectionLabel = cms.string('Qual_glb'),  ##samar

#not used for now
    BaseLabel = cms.string('GLB'),
    RefitterParameters = cms.PSet(
    GlobalMuonRefitter
    ),
    nSigma = cms.double(3.0),
    MaxChi2 = cms.double(100000.0),
    )

displacedGlbTrackQual = cms.EDProducer(
    "GlobalTrackQualityProducer",
    MuonServiceProxy,
    GlobalMuonTrackMatcher,
    InputCollection = cms.InputTag("samarMuons"),
    InputLinksCollection = cms.InputTag("samarMuons"),

    testCollectionLabel = cms.string('Qual_samar'),  ##samar

#not used for now
    BaseLabel = cms.string('GLB'),
    RefitterParameters = cms.PSet(
    GlobalMuonRefitter
    ),
    nSigma = cms.double(3.0),
    MaxChi2 = cms.double(100000.0),
    )

