ALL_COMMONRULES += src_RecoMuon_Configuration_test
src_RecoMuon_Configuration_test_parent := RecoMuon/Configuration
src_RecoMuon_Configuration_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoMuon_Configuration_test,src/RecoMuon/Configuration/test,TEST))
