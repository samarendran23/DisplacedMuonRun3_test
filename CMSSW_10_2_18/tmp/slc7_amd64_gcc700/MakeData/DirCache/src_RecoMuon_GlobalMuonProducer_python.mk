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
