ifeq ($(strip $(TestMuonMuonIdentificationPlugins)),)
TestMuonMuonIdentificationPlugins := self/src/RecoMuon/MuonIdentification/test
TestMuonMuonIdentificationPlugins_files := $(patsubst src/RecoMuon/MuonIdentification/test/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/RecoMuon/MuonIdentification/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoMuon/MuonIdentification/test/$(file). Please fix src/RecoMuon/MuonIdentification/test/BuildFile.))))
TestMuonMuonIdentificationPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/MuonIdentification/test/BuildFile
TestMuonMuonIdentificationPlugins_LOC_USE := self  DataFormats/Common DataFormats/TrackReco DataFormats/MuonReco TrackingTools/TrackAssociator FWCore/Framework FWCore/PluginManager FWCore/ParameterSet boost RecoMuon/MuonIsolation RecoMuon/MuonIdentification DataFormats/RecoCandidate PhysicsTools/UtilAlgos CommonTools/Utils
TestMuonMuonIdentificationPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,TestMuonMuonIdentificationPlugins,TestMuonMuonIdentificationPlugins,$(SCRAMSTORENAME_LIB),src/RecoMuon/MuonIdentification/test))
TestMuonMuonIdentificationPlugins_PACKAGE := self/src/RecoMuon/MuonIdentification/test
ALL_PRODS += TestMuonMuonIdentificationPlugins
TestMuonMuonIdentificationPlugins_INIT_FUNC        += $$(eval $$(call Library,TestMuonMuonIdentificationPlugins,src/RecoMuon/MuonIdentification/test,src_RecoMuon_MuonIdentification_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
TestMuonMuonIdentificationPlugins_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,TestMuonMuonIdentificationPlugins,src/RecoMuon/MuonIdentification/test))
endif
ALL_COMMONRULES += src_RecoMuon_MuonIdentification_test
src_RecoMuon_MuonIdentification_test_parent := RecoMuon/MuonIdentification
src_RecoMuon_MuonIdentification_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIdentification_test,src/RecoMuon/MuonIdentification/test,TEST))
