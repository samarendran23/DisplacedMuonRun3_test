ifeq ($(strip $(GLBMuonAnalyzer)),)
GLBMuonAnalyzer := self/src/RecoMuon/GlobalMuonProducer/test
GLBMuonAnalyzer_files := $(patsubst src/RecoMuon/GlobalMuonProducer/test/%,%,$(foreach file,GLBMuonAnalyzer.cc,$(eval xfile:=$(wildcard src/RecoMuon/GlobalMuonProducer/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoMuon/GlobalMuonProducer/test/$(file). Please fix src/RecoMuon/GlobalMuonProducer/test/BuildFile.))))
GLBMuonAnalyzer_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/GlobalMuonProducer/test/BuildFile
GLBMuonAnalyzer_LOC_USE := self  FWCore/Framework FWCore/Utilities FWCore/ParameterSet FWCore/ServiceRegistry RecoMuon/TrackingTools TrackingTools/TransientTrack FWCore/PluginManager DataFormats/TrackReco DataFormats/MuonReco DataFormats/Common SimDataFormats/Track clhep root
GLBMuonAnalyzer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,GLBMuonAnalyzer,GLBMuonAnalyzer,$(SCRAMSTORENAME_LIB),src/RecoMuon/GlobalMuonProducer/test))
GLBMuonAnalyzer_PACKAGE := self/src/RecoMuon/GlobalMuonProducer/test
ALL_PRODS += GLBMuonAnalyzer
GLBMuonAnalyzer_INIT_FUNC        += $$(eval $$(call Library,GLBMuonAnalyzer,src/RecoMuon/GlobalMuonProducer/test,src_RecoMuon_GlobalMuonProducer_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
GLBMuonAnalyzer_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,GLBMuonAnalyzer,src/RecoMuon/GlobalMuonProducer/test))
endif
ALL_COMMONRULES += src_RecoMuon_GlobalMuonProducer_test
src_RecoMuon_GlobalMuonProducer_test_parent := RecoMuon/GlobalMuonProducer
src_RecoMuon_GlobalMuonProducer_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_GlobalMuonProducer_test,src/RecoMuon/GlobalMuonProducer/test,TEST))
