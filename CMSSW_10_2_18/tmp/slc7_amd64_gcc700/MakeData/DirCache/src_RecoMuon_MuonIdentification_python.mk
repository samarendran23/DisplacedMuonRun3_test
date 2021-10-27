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
