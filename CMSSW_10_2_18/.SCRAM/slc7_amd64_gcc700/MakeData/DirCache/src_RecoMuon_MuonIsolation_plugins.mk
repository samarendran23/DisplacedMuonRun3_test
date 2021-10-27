ifeq ($(strip $(RecoMuonMuonIsolationPlugins)),)
RecoMuonMuonIsolationPlugins := self/src/RecoMuon/MuonIsolation/plugins
PLUGINS:=yes
RecoMuonMuonIsolationPlugins_files := $(patsubst src/RecoMuon/MuonIsolation/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/RecoMuon/MuonIsolation/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoMuon/MuonIsolation/plugins/$(file). Please fix src/RecoMuon/MuonIsolation/plugins/BuildFile.))))
RecoMuonMuonIsolationPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/MuonIsolation/plugins/BuildFile
RecoMuonMuonIsolationPlugins_LOC_USE := self  RecoMuon/TrackingTools CommonTools/Statistics DataFormats/BeamSpot DataFormats/CaloTowers DataFormats/Common DataFormats/EcalDetId DataFormats/GeometryVector DataFormats/HcalDetId DataFormats/JetReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CaloGeometry Geometry/Records MagneticField/Engine MagneticField/Records PhysicsTools/IsolationAlgos PhysicsTools/Utilities RecoMuon/MuonIsolation TrackingTools/Records TrackingTools/TrackAssociator TrackingTools/TransientTrack DataFormats/PatCandidates
RecoMuonMuonIsolationPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoMuonMuonIsolationPlugins,RecoMuonMuonIsolationPlugins,$(SCRAMSTORENAME_LIB),src/RecoMuon/MuonIsolation/plugins))
RecoMuonMuonIsolationPlugins_PACKAGE := self/src/RecoMuon/MuonIsolation/plugins
ALL_PRODS += RecoMuonMuonIsolationPlugins
RecoMuon/MuonIsolation_forbigobj+=RecoMuonMuonIsolationPlugins
RecoMuonMuonIsolationPlugins_INIT_FUNC        += $$(eval $$(call Library,RecoMuonMuonIsolationPlugins,src/RecoMuon/MuonIsolation/plugins,src_RecoMuon_MuonIsolation_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
RecoMuonMuonIsolationPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,RecoMuonMuonIsolationPlugins,src/RecoMuon/MuonIsolation/plugins))
endif
ALL_COMMONRULES += src_RecoMuon_MuonIsolation_plugins
src_RecoMuon_MuonIsolation_plugins_parent := RecoMuon/MuonIsolation
src_RecoMuon_MuonIsolation_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIsolation_plugins,src/RecoMuon/MuonIsolation/plugins,PLUGINS))
