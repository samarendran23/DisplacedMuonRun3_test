import FWCore.ParameterSet.Config as cms

from CommonTools.ParticleFlow.Isolation.tools_cfi import *


#Now prepare the iso deposits
muPFIsoDepositCharged=isoDepositReplace('displacedMuons1stStep','pfAllChargedHadrons')
muPFIsoDepositChargedAll=isoDepositReplace('displacedMuons1stStep','pfAllChargedParticles')
muPFIsoDepositNeutral=isoDepositReplace('displacedMuons1stStep','pfAllNeutralHadrons')
muPFIsoDepositGamma=isoDepositReplace('displacedMuons1stStep','pfAllPhotons')
muPFIsoDepositPU=isoDepositReplace('displacedMuons1stStep','pfPileUpAllChargedParticles')

displacedMuonPFIsolationDepositsTask = cms.Task(  ##samar
    muPFIsoDepositCharged,
    muPFIsoDepositChargedAll,
    muPFIsoDepositGamma,
    muPFIsoDepositNeutral,
    muPFIsoDepositPU
    )
displacedMuonPFIsolationDepositsSequence = cms.Sequence(displacedMuonPFIsolationDepositsTask)
