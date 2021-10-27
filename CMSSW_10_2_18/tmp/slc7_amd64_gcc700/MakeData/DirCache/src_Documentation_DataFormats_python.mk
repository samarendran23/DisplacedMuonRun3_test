ifeq ($(strip $(PyDocumentationDataFormats)),)
PyDocumentationDataFormats := self/src/Documentation/DataFormats/python
src_Documentation_DataFormats_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Documentation/DataFormats/python)
PyDocumentationDataFormats_files := $(patsubst src/Documentation/DataFormats/python/%,%,$(wildcard $(foreach dir,src/Documentation/DataFormats/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyDocumentationDataFormats_LOC_USE := self  
PyDocumentationDataFormats_PACKAGE := self/src/Documentation/DataFormats/python
ALL_PRODS += PyDocumentationDataFormats
PyDocumentationDataFormats_INIT_FUNC        += $$(eval $$(call PythonProduct,PyDocumentationDataFormats,src/Documentation/DataFormats/python,src_Documentation_DataFormats_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyDocumentationDataFormats,src/Documentation/DataFormats/python))
endif
ALL_COMMONRULES += src_Documentation_DataFormats_python
src_Documentation_DataFormats_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Documentation_DataFormats_python,src/Documentation/DataFormats/python,PYTHON))
