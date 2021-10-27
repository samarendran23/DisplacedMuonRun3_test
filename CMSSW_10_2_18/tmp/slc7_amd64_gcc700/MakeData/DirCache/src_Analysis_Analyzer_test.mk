ifeq ($(strip $(testAnalysisAnalyzerTP)),)
testAnalysisAnalyzerTP := self/src/Analysis/Analyzer/test
testAnalysisAnalyzerTP_files := $(patsubst src/Analysis/Analyzer/test/%,%,$(foreach file,test_catch2_*.cc,$(eval xfile:=$(wildcard src/Analysis/Analyzer/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Analysis/Analyzer/test/$(file). Please fix src/Analysis/Analyzer/test/BuildFile.))))
testAnalysisAnalyzerTP_TEST_RUNNER_CMD :=  testAnalysisAnalyzerTP 
testAnalysisAnalyzerTP_BuildFile    := $(WORKINGDIR)/cache/bf/src/Analysis/Analyzer/test/BuildFile
testAnalysisAnalyzerTP_LOC_USE := self  FWCore/TestProcessor catch2
testAnalysisAnalyzerTP_PACKAGE := self/src/Analysis/Analyzer/test
ALL_PRODS += testAnalysisAnalyzerTP
testAnalysisAnalyzerTP_INIT_FUNC        += $$(eval $$(call Binary,testAnalysisAnalyzerTP,src/Analysis/Analyzer/test,src_Analysis_Analyzer_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testAnalysisAnalyzerTP_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testAnalysisAnalyzerTP,src/Analysis/Analyzer/test))
endif
ALL_COMMONRULES += src_Analysis_Analyzer_test
src_Analysis_Analyzer_test_parent := Analysis/Analyzer
src_Analysis_Analyzer_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Analysis_Analyzer_test,src/Analysis/Analyzer/test,TEST))
