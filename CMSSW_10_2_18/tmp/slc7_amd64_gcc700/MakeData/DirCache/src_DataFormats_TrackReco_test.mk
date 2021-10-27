ifeq ($(strip $(testDataFormatsTrackReco)),)
testDataFormatsTrackReco := self/src/DataFormats/TrackReco/test
testDataFormatsTrackReco_files := $(patsubst src/DataFormats/TrackReco/test/%,%,$(foreach file,testTrack.cc testRunner.cpp,$(eval xfile:=$(wildcard src/DataFormats/TrackReco/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/DataFormats/TrackReco/test/$(file). Please fix src/DataFormats/TrackReco/test/BuildFile.))))
testDataFormatsTrackReco_TEST_RUNNER_CMD :=  testDataFormatsTrackReco 
testDataFormatsTrackReco_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/TrackReco/test/BuildFile
testDataFormatsTrackReco_LOC_USE := self  DataFormats/TrackReco cppunit
testDataFormatsTrackReco_PACKAGE := self/src/DataFormats/TrackReco/test
ALL_PRODS += testDataFormatsTrackReco
testDataFormatsTrackReco_INIT_FUNC        += $$(eval $$(call Binary,testDataFormatsTrackReco,src/DataFormats/TrackReco/test,src_DataFormats_TrackReco_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testDataFormatsTrackReco_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testDataFormatsTrackReco,src/DataFormats/TrackReco/test))
endif
ifeq ($(strip $(testHitPattern)),)
testHitPattern := self/src/DataFormats/TrackReco/test
testHitPattern_files := $(patsubst src/DataFormats/TrackReco/test/%,%,$(foreach file,testHitPattern.cpp,$(eval xfile:=$(wildcard src/DataFormats/TrackReco/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/DataFormats/TrackReco/test/$(file). Please fix src/DataFormats/TrackReco/test/BuildFile.))))
testHitPattern_TEST_RUNNER_CMD :=  testHitPattern 
testHitPattern_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/TrackReco/test/BuildFile
testHitPattern_LOC_USE := self  DataFormats/TrackReco
testHitPattern_PACKAGE := self/src/DataFormats/TrackReco/test
ALL_PRODS += testHitPattern
testHitPattern_INIT_FUNC        += $$(eval $$(call Binary,testHitPattern,src/DataFormats/TrackReco/test,src_DataFormats_TrackReco_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testHitPattern_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testHitPattern,src/DataFormats/TrackReco/test))
endif
ALL_COMMONRULES += src_DataFormats_TrackReco_test
src_DataFormats_TrackReco_test_parent := DataFormats/TrackReco
src_DataFormats_TrackReco_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DataFormats_TrackReco_test,src/DataFormats/TrackReco/test,TEST))
