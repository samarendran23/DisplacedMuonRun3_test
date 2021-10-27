ifeq ($(strip $(RecoMuon/MuonIsolation)),)
ALL_COMMONRULES += src_RecoMuon_MuonIsolation_src
src_RecoMuon_MuonIsolation_src_parent := RecoMuon/MuonIsolation
src_RecoMuon_MuonIsolation_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIsolation_src,src/RecoMuon/MuonIsolation/src,LIBRARY))
RecoMuonMuonIsolation := self/RecoMuon/MuonIsolation
RecoMuon/MuonIsolation := RecoMuonMuonIsolation
RecoMuonMuonIsolation_files := $(patsubst src/RecoMuon/MuonIsolation/src/%,%,$(wildcard $(foreach dir,src/RecoMuon/MuonIsolation/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
RecoMuonMuonIsolation_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoMuon/MuonIsolation/BuildFile
RecoMuonMuonIsolation_LOC_USE := self  DataFormats/Candidate DataFormats/MuonReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/MessageLogger FWCore/ParameterSet PhysicsTools/IsolationAlgos
RecoMuonMuonIsolation_EX_LIB   := RecoMuonMuonIsolation
RecoMuonMuonIsolation_EX_USE   := $(foreach d,$(RecoMuonMuonIsolation_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoMuonMuonIsolation_PACKAGE := self/src/RecoMuon/MuonIsolation/src
ALL_PRODS += RecoMuonMuonIsolation
RecoMuonMuonIsolation_CLASS := LIBRARY
RecoMuon/MuonIsolation_forbigobj+=RecoMuonMuonIsolation
RecoMuonMuonIsolation_INIT_FUNC        += $$(eval $$(call Library,RecoMuonMuonIsolation,src/RecoMuon/MuonIsolation/src,src_RecoMuon_MuonIsolation_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
