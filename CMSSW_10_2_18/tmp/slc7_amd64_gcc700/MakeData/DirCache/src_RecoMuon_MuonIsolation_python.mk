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
