ifeq ($(strip $(RecoMuon/GlobalMuonProducer)),)
ALL_COMMONRULES += src_RecoMuon_GlobalMuonProducer_src
src_RecoMuon_GlobalMuonProducer_src_parent := RecoMuon/GlobalMuonProducer
src_RecoMuon_GlobalMuonProducer_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_RecoMuon_GlobalMuonProducer_src,src/RecoMuon/GlobalMuonProducer/src,LIBRARY))
RecoMuonGlobalMuonProducer := self/RecoMuon/GlobalMuonProducer
RecoMuon/GlobalMuonProducer := RecoMuonGlobalMuonProducer
RecoMuonGlobalMuonProducer_files := $(patsubst src/RecoMuon/GlobalMuonProducer/src/%,%,$(wildcard $(foreach dir,src/RecoMuon/GlobalMuonProducer/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
RecoMuonGlobalMuonProducer_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/GlobalMuonProducer/BuildFile
RecoMuonGlobalMuonProducer_LOC_USE := self  DataFormats/Common DataFormats/MuonReco DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager RecoMuon/GlobalTrackFinder RecoMuon/GlobalTrackingTools RecoMuon/TrackingTools TrackingTools/PatternTools
RecoMuonGlobalMuonProducer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoMuonGlobalMuonProducer,RecoMuonGlobalMuonProducer,$(SCRAMSTORENAME_LIB),src/RecoMuon/GlobalMuonProducer/src))
RecoMuonGlobalMuonProducer_PACKAGE := self/src/RecoMuon/GlobalMuonProducer/src
ALL_PRODS += RecoMuonGlobalMuonProducer
RecoMuonGlobalMuonProducer_CLASS := LIBRARY
RecoMuon/GlobalMuonProducer_forbigobj+=RecoMuonGlobalMuonProducer
RecoMuonGlobalMuonProducer_INIT_FUNC        += $$(eval $$(call Library,RecoMuonGlobalMuonProducer,src/RecoMuon/GlobalMuonProducer/src,src_RecoMuon_GlobalMuonProducer_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
