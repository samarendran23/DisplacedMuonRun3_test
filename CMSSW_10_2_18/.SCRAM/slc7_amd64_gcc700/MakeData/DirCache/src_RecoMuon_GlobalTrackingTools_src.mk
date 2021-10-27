ifeq ($(strip $(RecoMuon/GlobalTrackingTools)),)
ALL_COMMONRULES += src_RecoMuon_GlobalTrackingTools_src
src_RecoMuon_GlobalTrackingTools_src_parent := RecoMuon/GlobalTrackingTools
src_RecoMuon_GlobalTrackingTools_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_RecoMuon_GlobalTrackingTools_src,src/RecoMuon/GlobalTrackingTools/src,LIBRARY))
RecoMuonGlobalTrackingTools := self/RecoMuon/GlobalTrackingTools
RecoMuon/GlobalTrackingTools := RecoMuonGlobalTrackingTools
RecoMuonGlobalTrackingTools_files := $(patsubst src/RecoMuon/GlobalTrackingTools/src/%,%,$(wildcard $(foreach dir,src/RecoMuon/GlobalTrackingTools/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
RecoMuonGlobalTrackingTools_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/GlobalTrackingTools/BuildFile
RecoMuonGlobalTrackingTools_LOC_USE := self  CommonTools/Statistics DataFormats/BeamSpot DataFormats/Common DataFormats/DetId DataFormats/GeometrySurface DataFormats/GeometryVector DataFormats/Math DataFormats/MuonDetId DataFormats/TrackReco DataFormats/TrajectoryState DataFormats/VertexReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry Geometry/CommonDetUnit Geometry/CSCGeometry Geometry/DTGeometry Geometry/GEMGeometry PhysicsTools/UtilAlgos RecoMuon/Navigation RecoMuon/TrackingTools RecoMuon/TransientTrackingRecHit RecoTracker/TkDetLayers RecoTracker/TkMSParametrization RecoTracker/TkTrackingRegions RecoTracker/TransientTrackingRecHit TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrackFitters TrackingTools/TrackRefitter TrackingTools/TrajectoryState TrackingTools/TransientTrack TrackingTools/TransientTrackingRecHit CondCore/DBOutputService CondFormats/RecoMuonObjects Utilities/General CondFormats/Alignment root
RecoMuonGlobalTrackingTools_EX_LIB   := RecoMuonGlobalTrackingTools
RecoMuonGlobalTrackingTools_EX_USE   := $(foreach d,$(RecoMuonGlobalTrackingTools_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoMuonGlobalTrackingTools_PACKAGE := self/src/RecoMuon/GlobalTrackingTools/src
ALL_PRODS += RecoMuonGlobalTrackingTools
RecoMuonGlobalTrackingTools_CLASS := LIBRARY
RecoMuon/GlobalTrackingTools_forbigobj+=RecoMuonGlobalTrackingTools
RecoMuonGlobalTrackingTools_INIT_FUNC        += $$(eval $$(call Library,RecoMuonGlobalTrackingTools,src/RecoMuon/GlobalTrackingTools/src,src_RecoMuon_GlobalTrackingTools_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
