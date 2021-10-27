ifeq ($(strip $(DataFormats/MuonReco)),)
ALL_COMMONRULES += src_DataFormats_MuonReco_src
src_DataFormats_MuonReco_src_parent := DataFormats/MuonReco
src_DataFormats_MuonReco_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_MuonReco_src,src/DataFormats/MuonReco/src,LIBRARY))
DataFormatsMuonReco := self/DataFormats/MuonReco
DataFormats/MuonReco := DataFormatsMuonReco
DataFormatsMuonReco_files := $(patsubst src/DataFormats/MuonReco/src/%,%,$(wildcard $(foreach dir,src/DataFormats/MuonReco/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsMuonReco_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/MuonReco/BuildFile
DataFormatsMuonReco_LOC_USE := self  DataFormats/Common DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/DTRecHit DataFormats/CSCRecHit DataFormats/GEMRecHit DataFormats/VertexReco rootmath
DataFormatsMuonReco_LCGDICTS  := x 
DataFormatsMuonReco_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsMuonReco,src/DataFormats/MuonReco/src/classes.h,src/DataFormats/MuonReco/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsMuonReco_EX_LIB   := DataFormatsMuonReco
DataFormatsMuonReco_EX_USE   := $(foreach d,$(DataFormatsMuonReco_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsMuonReco_PACKAGE := self/src/DataFormats/MuonReco/src
ALL_PRODS += DataFormatsMuonReco
DataFormatsMuonReco_CLASS := LIBRARY
DataFormats/MuonReco_forbigobj+=DataFormatsMuonReco
DataFormatsMuonReco_INIT_FUNC        += $$(eval $$(call Library,DataFormatsMuonReco,src/DataFormats/MuonReco/src,src_DataFormats_MuonReco_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
