ifeq ($(strip $(DataFormats/TrackReco)),)
ALL_COMMONRULES += src_DataFormats_TrackReco_src
src_DataFormats_TrackReco_src_parent := DataFormats/TrackReco
src_DataFormats_TrackReco_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_TrackReco_src,src/DataFormats/TrackReco/src,LIBRARY))
DataFormatsTrackReco := self/DataFormats/TrackReco
DataFormats/TrackReco := DataFormatsTrackReco
DataFormatsTrackReco_files := $(patsubst src/DataFormats/TrackReco/src/%,%,$(wildcard $(foreach dir,src/DataFormats/TrackReco/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsTrackReco_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/TrackReco/BuildFile
DataFormatsTrackReco_LOC_USE := self  DataFormats/Common DataFormats/TrajectoryState DataFormats/TrackCandidate DataFormats/MuonDetId DataFormats/BeamSpot DataFormats/SiPixelDetId DataFormats/SiStripDetId DataFormats/TrackingRecHit DataFormats/TrackerCommon FWCore/Utilities clhepheader rootmath
DataFormatsTrackReco_LCGDICTS  := x 
DataFormatsTrackReco_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsTrackReco,src/DataFormats/TrackReco/src/classes.h,src/DataFormats/TrackReco/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsTrackReco_EX_LIB   := DataFormatsTrackReco
DataFormatsTrackReco_EX_USE   := $(foreach d,$(DataFormatsTrackReco_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsTrackReco_PACKAGE := self/src/DataFormats/TrackReco/src
ALL_PRODS += DataFormatsTrackReco
DataFormatsTrackReco_CLASS := LIBRARY
DataFormats/TrackReco_forbigobj+=DataFormatsTrackReco
DataFormatsTrackReco_INIT_FUNC        += $$(eval $$(call Library,DataFormatsTrackReco,src/DataFormats/TrackReco/src,src_DataFormats_TrackReco_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
