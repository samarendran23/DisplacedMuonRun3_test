ifeq ($(strip $(RecoMuon/MuonIdentification)),)
ALL_COMMONRULES += src_RecoMuon_MuonIdentification_src
src_RecoMuon_MuonIdentification_src_parent := RecoMuon/MuonIdentification
src_RecoMuon_MuonIdentification_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIdentification_src,src/RecoMuon/MuonIdentification/src,LIBRARY))
RecoMuonMuonIdentification := self/RecoMuon/MuonIdentification
RecoMuon/MuonIdentification := RecoMuonMuonIdentification
RecoMuonMuonIdentification_files := $(patsubst src/RecoMuon/MuonIdentification/src/%,%,$(wildcard $(foreach dir,src/RecoMuon/MuonIdentification/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
RecoMuonMuonIdentification_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/MuonIdentification/BuildFile
RecoMuonMuonIdentification_LOC_USE := self  DataFormats/GeometrySurface DataFormats/GeometryVector DataFormats/Math DataFormats/TrajectoryState DataFormats/VertexReco FWCore/ServiceRegistry RecoMuon/Navigation RecoMuon/TransientTrackingRecHit RecoMuon/MuonIsolation RecoTracker/TkDetLayers RecoTracker/TkMSParametrization RecoTracker/TransientTrackingRecHit TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrackFitters TrackingTools/TrackRefitter TrackingTools/TrajectoryState TrackingTools/TransientTrackingRecHit Geometry/DTGeometry DataFormats/DetId DataFormats/MuonDetId DataFormats/MuonReco DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities Geometry/CommonDetUnit Geometry/CSCGeometry Geometry/GEMGeometry Geometry/Records SimTracker/Records SimMuon/MCTruth SimTracker/TrackAssociation roothistmatrix RecoMuon/TrackingTools DataFormats/CSCRecHit RecoLocalCalo/HcalRecAlgos PhysicsTools/SelectorUtils
RecoMuonMuonIdentification_LCGDICTS  := x 
RecoMuonMuonIdentification_PRE_INIT_FUNC += $$(eval $$(call LCGDict,RecoMuonMuonIdentification,src/RecoMuon/MuonIdentification/src/classes.h,src/RecoMuon/MuonIdentification/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
RecoMuonMuonIdentification_EX_LIB   := RecoMuonMuonIdentification
RecoMuonMuonIdentification_EX_USE   := $(foreach d,$(RecoMuonMuonIdentification_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoMuonMuonIdentification_PACKAGE := self/src/RecoMuon/MuonIdentification/src
ALL_PRODS += RecoMuonMuonIdentification
RecoMuonMuonIdentification_CLASS := LIBRARY
RecoMuon/MuonIdentification_forbigobj+=RecoMuonMuonIdentification
RecoMuonMuonIdentification_INIT_FUNC        += $$(eval $$(call Library,RecoMuonMuonIdentification,src/RecoMuon/MuonIdentification/src,src_RecoMuon_MuonIdentification_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
