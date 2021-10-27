ALL_SUBSYSTEMS+=Analysis
subdirs_src_Analysis = src_Analysis_Analyzer
ALL_PACKAGES += Analysis/Analyzer
subdirs_src_Analysis_Analyzer := src_Analysis_Analyzer_plugins src_Analysis_Analyzer_python src_Analysis_Analyzer_test
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
ALL_SUBSYSTEMS+=DataFormats
subdirs_src_DataFormats = src_DataFormats_MuonReco src_DataFormats_RecoCandidate src_DataFormats_TrackReco
ALL_PACKAGES += DataFormats/MuonReco
subdirs_src_DataFormats_MuonReco := src_DataFormats_MuonReco_doc src_DataFormats_MuonReco_interface src_DataFormats_MuonReco_src src_DataFormats_MuonReco_test
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
ALL_PACKAGES += DataFormats/RecoCandidate
subdirs_src_DataFormats_RecoCandidate := src_DataFormats_RecoCandidate_interface src_DataFormats_RecoCandidate_src
ALL_PACKAGES += DataFormats/TrackReco
subdirs_src_DataFormats_TrackReco := src_DataFormats_TrackReco_src src_DataFormats_TrackReco_test
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
ALL_SUBSYSTEMS+=Documentation
subdirs_src_Documentation = src_Documentation_DataFormats
ALL_PACKAGES += Documentation/DataFormats
subdirs_src_Documentation_DataFormats := src_Documentation_DataFormats_python src_Documentation_DataFormats_scripts
ifeq ($(strip $(PyDocumentationDataFormats)),)
PyDocumentationDataFormats := self/src/Documentation/DataFormats/python
src_Documentation_DataFormats_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Documentation/DataFormats/python)
PyDocumentationDataFormats_files := $(patsubst src/Documentation/DataFormats/python/%,%,$(wildcard $(foreach dir,src/Documentation/DataFormats/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyDocumentationDataFormats_LOC_USE := self  
PyDocumentationDataFormats_PACKAGE := self/src/Documentation/DataFormats/python
ALL_PRODS += PyDocumentationDataFormats
PyDocumentationDataFormats_INIT_FUNC        += $$(eval $$(call PythonProduct,PyDocumentationDataFormats,src/Documentation/DataFormats/python,src_Documentation_DataFormats_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyDocumentationDataFormats,src/Documentation/DataFormats/python))
endif
ALL_COMMONRULES += src_Documentation_DataFormats_python
src_Documentation_DataFormats_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Documentation_DataFormats_python,src/Documentation/DataFormats/python,PYTHON))
src_Documentation_DataFormats_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/Documentation/DataFormats/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_Documentation_DataFormats_scripts,src/Documentation/DataFormats/scripts,$(SCRAMSTORENAME_BIN),*))
ALL_SUBSYSTEMS+=RecoMuon
subdirs_src_RecoMuon = src_RecoMuon_GlobalMuonProducer src_RecoMuon_MuonIdentification src_RecoMuon_Configuration src_RecoMuon_GlobalTrackingTools src_RecoMuon_MuonIsolation
ALL_PACKAGES += RecoMuon/Configuration
subdirs_src_RecoMuon_Configuration := src_RecoMuon_Configuration_python src_RecoMuon_Configuration_test
ifeq ($(strip $(PyRecoMuonConfiguration)),)
PyRecoMuonConfiguration := self/src/RecoMuon/Configuration/python
src_RecoMuon_Configuration_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoMuon/Configuration/python)
PyRecoMuonConfiguration_files := $(patsubst src/RecoMuon/Configuration/python/%,%,$(wildcard $(foreach dir,src/RecoMuon/Configuration/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoMuonConfiguration_LOC_USE := self  
PyRecoMuonConfiguration_PACKAGE := self/src/RecoMuon/Configuration/python
ALL_PRODS += PyRecoMuonConfiguration
PyRecoMuonConfiguration_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoMuonConfiguration,src/RecoMuon/Configuration/python,src_RecoMuon_Configuration_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoMuonConfiguration,src/RecoMuon/Configuration/python))
endif
ALL_COMMONRULES += src_RecoMuon_Configuration_python
src_RecoMuon_Configuration_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_Configuration_python,src/RecoMuon/Configuration/python,PYTHON))
ALL_COMMONRULES += src_RecoMuon_Configuration_test
src_RecoMuon_Configuration_test_parent := RecoMuon/Configuration
src_RecoMuon_Configuration_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_Configuration_test,src/RecoMuon/Configuration/test,TEST))
ALL_PACKAGES += RecoMuon/GlobalMuonProducer
subdirs_src_RecoMuon_GlobalMuonProducer := src_RecoMuon_GlobalMuonProducer_doc src_RecoMuon_GlobalMuonProducer_python src_RecoMuon_GlobalMuonProducer_src src_RecoMuon_GlobalMuonProducer_test
ifeq ($(strip $(PyRecoMuonGlobalMuonProducer)),)
PyRecoMuonGlobalMuonProducer := self/src/RecoMuon/GlobalMuonProducer/python
src_RecoMuon_GlobalMuonProducer_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoMuon/GlobalMuonProducer/python)
PyRecoMuonGlobalMuonProducer_files := $(patsubst src/RecoMuon/GlobalMuonProducer/python/%,%,$(wildcard $(foreach dir,src/RecoMuon/GlobalMuonProducer/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoMuonGlobalMuonProducer_LOC_USE := self  
PyRecoMuonGlobalMuonProducer_PACKAGE := self/src/RecoMuon/GlobalMuonProducer/python
ALL_PRODS += PyRecoMuonGlobalMuonProducer
PyRecoMuonGlobalMuonProducer_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoMuonGlobalMuonProducer,src/RecoMuon/GlobalMuonProducer/python,src_RecoMuon_GlobalMuonProducer_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoMuonGlobalMuonProducer,src/RecoMuon/GlobalMuonProducer/python))
endif
ALL_COMMONRULES += src_RecoMuon_GlobalMuonProducer_python
src_RecoMuon_GlobalMuonProducer_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_GlobalMuonProducer_python,src/RecoMuon/GlobalMuonProducer/python,PYTHON))
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
ALL_PACKAGES += RecoMuon/GlobalTrackingTools
subdirs_src_RecoMuon_GlobalTrackingTools := src_RecoMuon_GlobalTrackingTools_plugins src_RecoMuon_GlobalTrackingTools_python src_RecoMuon_GlobalTrackingTools_src src_RecoMuon_GlobalTrackingTools_test
ifeq ($(strip $(PyRecoMuonGlobalTrackingTools)),)
PyRecoMuonGlobalTrackingTools := self/src/RecoMuon/GlobalTrackingTools/python
src_RecoMuon_GlobalTrackingTools_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoMuon/GlobalTrackingTools/python)
PyRecoMuonGlobalTrackingTools_files := $(patsubst src/RecoMuon/GlobalTrackingTools/python/%,%,$(wildcard $(foreach dir,src/RecoMuon/GlobalTrackingTools/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoMuonGlobalTrackingTools_LOC_USE := self  
PyRecoMuonGlobalTrackingTools_PACKAGE := self/src/RecoMuon/GlobalTrackingTools/python
ALL_PRODS += PyRecoMuonGlobalTrackingTools
PyRecoMuonGlobalTrackingTools_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoMuonGlobalTrackingTools,src/RecoMuon/GlobalTrackingTools/python,src_RecoMuon_GlobalTrackingTools_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoMuonGlobalTrackingTools,src/RecoMuon/GlobalTrackingTools/python))
endif
ALL_COMMONRULES += src_RecoMuon_GlobalTrackingTools_python
src_RecoMuon_GlobalTrackingTools_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_GlobalTrackingTools_python,src/RecoMuon/GlobalTrackingTools/python,PYTHON))
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
ALL_PACKAGES += RecoMuon/MuonIdentification
subdirs_src_RecoMuon_MuonIdentification := src_RecoMuon_MuonIdentification_plugins src_RecoMuon_MuonIdentification_python src_RecoMuon_MuonIdentification_src src_RecoMuon_MuonIdentification_test
ifeq ($(strip $(PyRecoMuonMuonIdentification)),)
PyRecoMuonMuonIdentification := self/src/RecoMuon/MuonIdentification/python
src_RecoMuon_MuonIdentification_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoMuon/MuonIdentification/python)
PyRecoMuonMuonIdentification_files := $(patsubst src/RecoMuon/MuonIdentification/python/%,%,$(wildcard $(foreach dir,src/RecoMuon/MuonIdentification/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoMuonMuonIdentification_LOC_USE := self  
PyRecoMuonMuonIdentification_PACKAGE := self/src/RecoMuon/MuonIdentification/python
ALL_PRODS += PyRecoMuonMuonIdentification
PyRecoMuonMuonIdentification_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoMuonMuonIdentification,src/RecoMuon/MuonIdentification/python,src_RecoMuon_MuonIdentification_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoMuonMuonIdentification,src/RecoMuon/MuonIdentification/python))
endif
ALL_COMMONRULES += src_RecoMuon_MuonIdentification_python
src_RecoMuon_MuonIdentification_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIdentification_python,src/RecoMuon/MuonIdentification/python,PYTHON))
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
ALL_SUBSYSTEMS+=SampleProduction
subdirs_src_SampleProduction = 
ALL_PACKAGES += RecoMuon/MuonIsolation
subdirs_src_RecoMuon_MuonIsolation := src_RecoMuon_MuonIsolation_doc src_RecoMuon_MuonIsolation_plugins src_RecoMuon_MuonIsolation_python src_RecoMuon_MuonIsolation_src src_RecoMuon_MuonIsolation_test
ifeq ($(strip $(PyRecoMuonMuonIsolation)),)
PyRecoMuonMuonIsolation := self/src/RecoMuon/MuonIsolation/python
src_RecoMuon_MuonIsolation_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoMuon/MuonIsolation/python)
PyRecoMuonMuonIsolation_files := $(patsubst src/RecoMuon/MuonIsolation/python/%,%,$(wildcard $(foreach dir,src/RecoMuon/MuonIsolation/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoMuonMuonIsolation_LOC_USE := self  
PyRecoMuonMuonIsolation_PACKAGE := self/src/RecoMuon/MuonIsolation/python
ALL_PRODS += PyRecoMuonMuonIsolation
PyRecoMuonMuonIsolation_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoMuonMuonIsolation,src/RecoMuon/MuonIsolation/python,src_RecoMuon_MuonIsolation_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoMuonMuonIsolation,src/RecoMuon/MuonIsolation/python))
endif
ALL_COMMONRULES += src_RecoMuon_MuonIsolation_python
src_RecoMuon_MuonIsolation_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIsolation_python,src/RecoMuon/MuonIsolation/python,PYTHON))
ALL_COMMONRULES += src_RecoMuon_MuonIsolation_test
src_RecoMuon_MuonIsolation_test_parent := RecoMuon/MuonIsolation
src_RecoMuon_MuonIsolation_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIsolation_test,src/RecoMuon/MuonIsolation/test,TEST))
