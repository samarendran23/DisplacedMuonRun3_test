import FWCore.ParameterSet.Config as cms


from RecoMuon.MuonIsolation.muonPFIsolationDeposits_cff import *
from RecoMuon.MuonIsolation.muonPFIsolationValues_cff import *


#from RecoMuon.MuonIsolation.displacedMuonPFIsolationDeposits_cff import *  ##samar


muonPFIsolationTask =  cms.Task(
    muonPFIsolationDepositsTask,
    muonPFIsolationValuesTask
)                                         
muonPFIsolationSequence = cms.Sequence(muonPFIsolationTask)


#displacedMuonPFIsolationTask =  cms.Task(      
#    displacedMuonPFIsolationDepositsTask,
#    muonPFIsolationValuesTask
#)
#displacedMuonPFIsolationSequence = cms.Sequence(displacedMuonPFIsolationTask)  ##samar


