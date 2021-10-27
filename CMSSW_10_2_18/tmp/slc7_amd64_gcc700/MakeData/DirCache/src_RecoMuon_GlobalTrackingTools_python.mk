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
