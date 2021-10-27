ifeq ($(strip $(PyAnalysisAnalyzer)),)
PyAnalysisAnalyzer := self/src/Analysis/Analyzer/python
src_Analysis_Analyzer_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Analysis/Analyzer/python)
PyAnalysisAnalyzer_files := $(patsubst src/Analysis/Analyzer/python/%,%,$(wildcard $(foreach dir,src/Analysis/Analyzer/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyAnalysisAnalyzer_LOC_USE := self  
PyAnalysisAnalyzer_PACKAGE := self/src/Analysis/Analyzer/python
ALL_PRODS += PyAnalysisAnalyzer
PyAnalysisAnalyzer_INIT_FUNC        += $$(eval $$(call PythonProduct,PyAnalysisAnalyzer,src/Analysis/Analyzer/python,src_Analysis_Analyzer_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyAnalysisAnalyzer,src/Analysis/Analyzer/python))
endif
ALL_COMMONRULES += src_Analysis_Analyzer_python
src_Analysis_Analyzer_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Analysis_Analyzer_python,src/Analysis/Analyzer/python,PYTHON))
