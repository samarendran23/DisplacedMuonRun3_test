ifeq ($(strip $(DataFormats/RecoCandidate)),)
ALL_COMMONRULES += src_DataFormats_RecoCandidate_src
src_DataFormats_RecoCandidate_src_parent := DataFormats/RecoCandidate
src_DataFormats_RecoCandidate_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_RecoCandidate_src,src/DataFormats/RecoCandidate/src,LIBRARY))
DataFormatsRecoCandidate := self/DataFormats/RecoCandidate
DataFormats/RecoCandidate := DataFormatsRecoCandidate
DataFormatsRecoCandidate_files := $(patsubst src/DataFormats/RecoCandidate/src/%,%,$(wildcard $(foreach dir,src/DataFormats/RecoCandidate/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsRecoCandidate_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/RecoCandidate/BuildFile
DataFormatsRecoCandidate_LOC_USE := self  DataFormats/CaloRecHit DataFormats/Candidate DataFormats/Common DataFormats/TrackReco DataFormats/CaloTowers DataFormats/EgammaReco clhep SimDataFormats/GeneratorProducts
DataFormatsRecoCandidate_LCGDICTS  := x 
DataFormatsRecoCandidate_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsRecoCandidate,src/DataFormats/RecoCandidate/src/classes.h,src/DataFormats/RecoCandidate/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsRecoCandidate_EX_LIB   := DataFormatsRecoCandidate
DataFormatsRecoCandidate_EX_USE   := $(foreach d,$(DataFormatsRecoCandidate_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsRecoCandidate_PACKAGE := self/src/DataFormats/RecoCandidate/src
ALL_PRODS += DataFormatsRecoCandidate
DataFormatsRecoCandidate_CLASS := LIBRARY
DataFormats/RecoCandidate_forbigobj+=DataFormatsRecoCandidate
DataFormatsRecoCandidate_INIT_FUNC        += $$(eval $$(call Library,DataFormatsRecoCandidate,src/DataFormats/RecoCandidate/src,src_DataFormats_RecoCandidate_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
