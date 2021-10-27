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
