ifeq ($(strip $(AnalysisAnalyzerAuto)),)
AnalysisAnalyzerAuto := self/src/Analysis/Analyzer/plugins
PLUGINS:=yes
AnalysisAnalyzerAuto_files := $(patsubst src/Analysis/Analyzer/plugins/%,%,$(wildcard $(foreach dir,src/Analysis/Analyzer/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
AnalysisAnalyzerAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/Analysis/Analyzer/plugins/BuildFile
AnalysisAnalyzerAuto_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/TrackReco DataFormats/MuonReco
AnalysisAnalyzerAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,AnalysisAnalyzerAuto,AnalysisAnalyzerAuto,$(SCRAMSTORENAME_LIB),src/Analysis/Analyzer/plugins))
AnalysisAnalyzerAuto_PACKAGE := self/src/Analysis/Analyzer/plugins
ALL_PRODS += AnalysisAnalyzerAuto
Analysis/Analyzer_forbigobj+=AnalysisAnalyzerAuto
AnalysisAnalyzerAuto_INIT_FUNC        += $$(eval $$(call Library,AnalysisAnalyzerAuto,src/Analysis/Analyzer/plugins,src_Analysis_Analyzer_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
AnalysisAnalyzerAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,AnalysisAnalyzerAuto,src/Analysis/Analyzer/plugins))
endif
ALL_COMMONRULES += src_Analysis_Analyzer_plugins
src_Analysis_Analyzer_plugins_parent := Analysis/Analyzer
src_Analysis_Analyzer_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Analysis_Analyzer_plugins,src/Analysis/Analyzer/plugins,PLUGINS))
