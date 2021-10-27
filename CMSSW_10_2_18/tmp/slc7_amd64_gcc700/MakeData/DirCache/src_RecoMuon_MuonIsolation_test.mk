ALL_COMMONRULES += src_RecoMuon_MuonIsolation_test
src_RecoMuon_MuonIsolation_test_parent := RecoMuon/MuonIsolation
src_RecoMuon_MuonIsolation_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_MuonIsolation_test,src/RecoMuon/MuonIsolation/test,TEST))
