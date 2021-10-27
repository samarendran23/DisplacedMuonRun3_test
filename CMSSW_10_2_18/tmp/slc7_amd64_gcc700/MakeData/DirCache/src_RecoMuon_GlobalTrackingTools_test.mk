ifeq ($(strip $(DYTTuner)),)
DYTTuner := self/src/RecoMuon/GlobalTrackingTools/test
DYTTuner_files := $(patsubst src/RecoMuon/GlobalTrackingTools/test/%,%,$(foreach file,DYTTuner.cc,$(eval xfile:=$(wildcard src/RecoMuon/GlobalTrackingTools/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoMuon/GlobalTrackingTools/test/$(file). Please fix src/RecoMuon/GlobalTrackingTools/test/BuildFile.))))
DYTTuner_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/GlobalTrackingTools/test/BuildFile
DYTTuner_LOC_USE := self  CondFormats/RecoMuonObjects DataFormats/MuonReco CommonTools/UtilAlgos CondCore/DBOutputService root
DYTTuner_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,DYTTuner,DYTTuner,$(SCRAMSTORENAME_LIB),src/RecoMuon/GlobalTrackingTools/test))
DYTTuner_PACKAGE := self/src/RecoMuon/GlobalTrackingTools/test
ALL_PRODS += DYTTuner
DYTTuner_INIT_FUNC        += $$(eval $$(call Library,DYTTuner,src/RecoMuon/GlobalTrackingTools/test,src_RecoMuon_GlobalTrackingTools_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
DYTTuner_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,DYTTuner,src/RecoMuon/GlobalTrackingTools/test))
endif
ALL_COMMONRULES += src_RecoMuon_GlobalTrackingTools_test
src_RecoMuon_GlobalTrackingTools_test_parent := RecoMuon/GlobalTrackingTools
src_RecoMuon_GlobalTrackingTools_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_GlobalTrackingTools_test,src/RecoMuon/GlobalTrackingTools/test,TEST))
