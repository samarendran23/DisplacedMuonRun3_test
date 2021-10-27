ifeq ($(strip $(RecoMuonMuonIdentificationPlugins)),)
RecoMuonMuonIdentificationPlugins := self/src/RecoMuon/MuonIdentification/plugins
PLUGINS:=yes
RecoMuonMuonIdentificationPlugins_files := $(patsubst src/RecoMuon/MuonIdentification/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/RecoMuon/MuonIdentification/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoMuon/MuonIdentification/plugins/$(file). Please fix src/RecoMuon/MuonIdentification/plugins/BuildFile.))))
RecoMuonMuonIdentificationPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/MuonIdentification/plugins/BuildFile
RecoMuonMuonIdentificationPlugins_LOC_USE := self  DataFormats/Common DataFormats/MuonDetId DataFormats/MuonReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/Records Geometry/CaloTopology PhysicsTools/IsolationAlgos PhysicsTools/SelectorUtils RecoMuon/MuonIdentification RecoMuon/TrackingTools TrackingTools/Records TrackingTools/TrackAssociator TrackingTools/TransientTrackingRecHit boost_regex CommonTools/Utils DataFormats/ParticleFlowCandidate
RecoMuonMuonIdentificationPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoMuonMuonIdentificationPlugins,RecoMuonMuonIdentificationPlugins,$(SCRAMSTORENAME_LIB),src/RecoMuon/MuonIdentification/plugins))
RecoMuonMuonIdentificationPlugins_PACKAGE := self/src/RecoMuon/MuonIdentification/plugins
ALL_PRODS += RecoMuonMuonIdentificationPlugins
RecoMuon/MuonIdentification_forbigobj+=RecoMuonMuonIdentificationPlugins
RecoMuonMuonIdentificationPlugins_INIT_FUNC        += $$(eval $$(call Library,RecoMuonMuonIdentificationPlugins,src/RecoMuon/MuonIdentification/plugins,src_RecoMuon_MuonIdentification_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
RecoMuonMuonIdentificationPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,RecoMuonMuonIdentificationPlugins,src/RecoMuon/MuonIdentification/plugins))
endif
ifeq ($(strip $(RecoMuonMuonIdentificationPlugins_cuts)),)
RecoMuonMuonIdentificationPlugins_cuts := self/src/RecoMuon/MuonIdentification/plugins
PLUGINS:=yes
RecoMuonMuonIdentificationPlugins_cuts_files := $(patsubst src/RecoMuon/MuonIdentification/plugins/%,%,$(foreach file,cuts/*.cc,$(eval xfile:=$(wildcard src/RecoMuon/MuonIdentification/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoMuon/MuonIdentification/plugins/$(file). Please fix src/RecoMuon/MuonIdentification/plugins/BuildFile.))))
RecoMuonMuonIdentificationPlugins_cuts_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/MuonIdentification/plugins/BuildFile
RecoMuonMuonIdentificationPlugins_cuts_LOC_USE := self  DataFormats/Common DataFormats/MuonDetId DataFormats/MuonReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/Records Geometry/CaloTopology PhysicsTools/IsolationAlgos RecoMuon/MuonIdentification RecoMuon/TrackingTools TrackingTools/Records TrackingTools/TrackAssociator TrackingTools/TransientTrackingRecHit boost_regex CommonTools/Utils DataFormats/ParticleFlowCandidate PhysicsTools/SelectorUtils
RecoMuonMuonIdentificationPlugins_cuts_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoMuonMuonIdentificationPlugins_cuts,RecoMuonMuonIdentificationPlugins_cuts,$(SCRAMSTORENAME_LIB),src/RecoMuon/MuonIdentification/plugins))
RecoMuonMuonIdentificationPlugins_cuts_PACKAGE := self/src/RecoMuon/MuonIdentification/plugins
ALL_PRODS += RecoMuonMuonIdentificationPlugins_cuts
RecoMuon/MuonIdentification_forbigobj+=RecoMuonMuonIdentificationPlugins_cuts
RecoMuonMuonIdentificationPlugins_cuts_INIT_FUNC        += $$(eval $$(call Library,RecoMuonMuonIdentificationPlugins_cuts,src/RecoMuon/MuonIdentification/plugins,src_RecoMuon_MuonIdentification_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
RecoMuonMuonIdentificationPlugins_cuts_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,RecoMuonMuonIdentificationPlugins_cuts,src/RecoMuon/MuonIdentification/plugins))
endif
ALL_COMMONRULES += src_RecoMuon_MuonIdentification_plugins
src_RecoMuon_MuonIdentification_plugins_parent := RecoMuon/MuonIdentification
src_RecoMuon_MuonIdentification_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIdentification_plugins,src/RecoMuon/MuonIdentification/plugins,PLUGINS))
