src_Documentation_DataFormats_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/Documentation/DataFormats/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_Documentation_DataFormats_scripts,src/Documentation/DataFormats/scripts,$(SCRAMSTORENAME_BIN),*))
