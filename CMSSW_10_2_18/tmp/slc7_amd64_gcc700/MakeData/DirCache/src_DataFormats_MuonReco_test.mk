ifeq ($(strip $(testDataFormatsMuonReco)),)
testDataFormatsMuonReco := self/src/DataFormats/MuonReco/test
testDataFormatsMuonReco_files := $(patsubst src/DataFormats/MuonReco/test/%,%,$(foreach file,testMuon.cc testRunner.cpp,$(eval xfile:=$(wildcard src/DataFormats/MuonReco/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/DataFormats/MuonReco/test/$(file). Please fix src/DataFormats/MuonReco/test/BuildFile.))))
testDataFormatsMuonReco_TEST_RUNNER_CMD :=  testDataFormatsMuonReco 
testDataFormatsMuonReco_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/MuonReco/test/BuildFile
testDataFormatsMuonReco_LOC_USE := self  DataFormats/MuonReco cppunit
testDataFormatsMuonReco_PACKAGE := self/src/DataFormats/MuonReco/test
ALL_PRODS += testDataFormatsMuonReco
testDataFormatsMuonReco_INIT_FUNC        += $$(eval $$(call Binary,testDataFormatsMuonReco,src/DataFormats/MuonReco/test,src_DataFormats_MuonReco_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testDataFormatsMuonReco_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testDataFormatsMuonReco,src/DataFormats/MuonReco/test))
endif
ALL_COMMONRULES += src_DataFormats_MuonReco_test
src_DataFormats_MuonReco_test_parent := DataFormats/MuonReco
src_DataFormats_MuonReco_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DataFormats_MuonReco_test,src/DataFormats/MuonReco/test,TEST))
