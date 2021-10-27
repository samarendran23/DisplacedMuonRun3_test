ifeq ($(strip $(RecoMuonGlobalTrackingToolsPlugins)),)
RecoMuonGlobalTrackingToolsPlugins := self/src/RecoMuon/GlobalTrackingTools/plugins
PLUGINS:=yes
RecoMuonGlobalTrackingToolsPlugins_files := $(patsubst src/RecoMuon/GlobalTrackingTools/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/RecoMuon/GlobalTrackingTools/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoMuon/GlobalTrackingTools/plugins/$(file). Please fix src/RecoMuon/GlobalTrackingTools/plugins/BuildFile.))))
RecoMuonGlobalTrackingToolsPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/GlobalTrackingTools/plugins/BuildFile
RecoMuonGlobalTrackingToolsPlugins_LOC_USE := self  DataFormats/Common DataFormats/MuonDetId DataFormats/MuonReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/Records PhysicsTools/IsolationAlgos RecoMuon/TrackingTools RecoMuon/GlobalTrackingTools TrackingTools/Records TrackingTools/TrackAssociator TrackingTools/TransientTrackingRecHit boost_regex
RecoMuonGlobalTrackingToolsPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoMuonGlobalTrackingToolsPlugins,RecoMuonGlobalTrackingToolsPlugins,$(SCRAMSTORENAME_LIB),src/RecoMuon/GlobalTrackingTools/plugins))
RecoMuonGlobalTrackingToolsPlugins_PACKAGE := self/src/RecoMuon/GlobalTrackingTools/plugins
ALL_PRODS += RecoMuonGlobalTrackingToolsPlugins
RecoMuon/GlobalTrackingTools_forbigobj+=RecoMuonGlobalTrackingToolsPlugins
RecoMuonGlobalTrackingToolsPlugins_INIT_FUNC        += $$(eval $$(call Library,RecoMuonGlobalTrackingToolsPlugins,src/RecoMuon/GlobalTrackingTools/plugins,src_RecoMuon_GlobalTrackingTools_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
RecoMuonGlobalTrackingToolsPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,RecoMuonGlobalTrackingToolsPlugins,src/RecoMuon/GlobalTrackingTools/plugins))
endif
ALL_COMMONRULES += src_RecoMuon_GlobalTrackingTools_plugins
src_RecoMuon_GlobalTrackingTools_plugins_parent := RecoMuon/GlobalTrackingTools
src_RecoMuon_GlobalTrackingTools_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_GlobalTrackingTools_plugins,src/RecoMuon/GlobalTrackingTools/plugins,PLUGINS))
