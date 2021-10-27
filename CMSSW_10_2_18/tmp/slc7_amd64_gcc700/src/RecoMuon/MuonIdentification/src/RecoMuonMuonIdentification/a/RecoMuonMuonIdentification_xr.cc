// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc7_amd64_gcc700dIsrcdIRecoMuondIMuonIdentificationdIsrcdIRecoMuonMuonIdentificationdIadIRecoMuonMuonIdentification_xr

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "src/RecoMuon/MuonIdentification/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR_Dictionary();
   static void VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p = 0);
   static void *newArray_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR(Long_t size, void *p);
   static void delete_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p);
   static void deleteArray_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p);
   static void destruct_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::VersionedSelector<edm::Ptr<reco::Muon> >*)
   {
      ::VersionedSelector<edm::Ptr<reco::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::VersionedSelector<edm::Ptr<reco::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("VersionedSelector<edm::Ptr<reco::Muon> >", "PhysicsTools/SelectorUtils/interface/VersionedSelector.h", 46,
                  typeid(::VersionedSelector<edm::Ptr<reco::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::VersionedSelector<edm::Ptr<reco::Muon> >) );
      instance.SetNew(&new_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR);
      instance.SetNewArray(&newArray_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR);
      instance.SetDelete(&delete_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR);
      instance.SetDestructor(&destruct_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::VersionedSelector<edm::Ptr<reco::Muon> >*)
   {
      return GenerateInitInstanceLocal((::VersionedSelector<edm::Ptr<reco::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::VersionedSelector<edm::Ptr<reco::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::VersionedSelector<edm::Ptr<reco::Muon> >*)0x0)->GetClass();
      VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MakeVersionedSelectorlErecocLcLMuongR_Dictionary();
   static void MakeVersionedSelectorlErecocLcLMuongR_TClassManip(TClass*);
   static void *new_MakeVersionedSelectorlErecocLcLMuongR(void *p = 0);
   static void *newArray_MakeVersionedSelectorlErecocLcLMuongR(Long_t size, void *p);
   static void delete_MakeVersionedSelectorlErecocLcLMuongR(void *p);
   static void deleteArray_MakeVersionedSelectorlErecocLcLMuongR(void *p);
   static void destruct_MakeVersionedSelectorlErecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MakeVersionedSelector<reco::Muon>*)
   {
      ::MakeVersionedSelector<reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MakeVersionedSelector<reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("MakeVersionedSelector<reco::Muon>", "PhysicsTools/SelectorUtils/interface/MakePyVIDClassBuilder.h", 8,
                  typeid(::MakeVersionedSelector<reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MakeVersionedSelectorlErecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::MakeVersionedSelector<reco::Muon>) );
      instance.SetNew(&new_MakeVersionedSelectorlErecocLcLMuongR);
      instance.SetNewArray(&newArray_MakeVersionedSelectorlErecocLcLMuongR);
      instance.SetDelete(&delete_MakeVersionedSelectorlErecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_MakeVersionedSelectorlErecocLcLMuongR);
      instance.SetDestructor(&destruct_MakeVersionedSelectorlErecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MakeVersionedSelector<reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::MakeVersionedSelector<reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MakeVersionedSelector<reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MakeVersionedSelectorlErecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MakeVersionedSelector<reco::Muon>*)0x0)->GetClass();
      MakeVersionedSelectorlErecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void MakeVersionedSelectorlErecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR_Dictionary();
   static void MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR_TClassManip(TClass*);
   static void *new_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR(void *p = 0);
   static void *newArray_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR(Long_t size, void *p);
   static void delete_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR(void *p);
   static void deleteArray_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR(void *p);
   static void destruct_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>*)
   {
      ::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>", "PhysicsTools/SelectorUtils/interface/MakePtrFromCollection.h", 7,
                  typeid(::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>) );
      instance.SetNew(&new_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR);
      instance.SetNewArray(&newArray_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR);
      instance.SetDelete(&delete_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR);
      instance.SetDestructor(&destruct_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>*)0x0)->GetClass();
      MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR_Dictionary();
   static void MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR_TClassManip(TClass*);
   static void *new_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR(void *p = 0);
   static void *newArray_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR(Long_t size, void *p);
   static void delete_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR(void *p);
   static void deleteArray_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR(void *p);
   static void destruct_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>*)
   {
      ::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>", "PhysicsTools/SelectorUtils/interface/MakePtrFromCollection.h", 7,
                  typeid(::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>) );
      instance.SetNew(&new_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR);
      instance.SetNewArray(&newArray_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR);
      instance.SetDelete(&delete_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR);
      instance.SetDestructor(&destruct_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>*)0x0)->GetClass();
      MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *PrintVIDToStringlErecocLcLMuongR_Dictionary();
   static void PrintVIDToStringlErecocLcLMuongR_TClassManip(TClass*);
   static void *new_PrintVIDToStringlErecocLcLMuongR(void *p = 0);
   static void *newArray_PrintVIDToStringlErecocLcLMuongR(Long_t size, void *p);
   static void delete_PrintVIDToStringlErecocLcLMuongR(void *p);
   static void deleteArray_PrintVIDToStringlErecocLcLMuongR(void *p);
   static void destruct_PrintVIDToStringlErecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PrintVIDToString<reco::Muon>*)
   {
      ::PrintVIDToString<reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::PrintVIDToString<reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("PrintVIDToString<reco::Muon>", "PhysicsTools/SelectorUtils/interface/PrintVIDToString.h", 11,
                  typeid(::PrintVIDToString<reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &PrintVIDToStringlErecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::PrintVIDToString<reco::Muon>) );
      instance.SetNew(&new_PrintVIDToStringlErecocLcLMuongR);
      instance.SetNewArray(&newArray_PrintVIDToStringlErecocLcLMuongR);
      instance.SetDelete(&delete_PrintVIDToStringlErecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_PrintVIDToStringlErecocLcLMuongR);
      instance.SetDestructor(&destruct_PrintVIDToStringlErecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PrintVIDToString<reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::PrintVIDToString<reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PrintVIDToString<reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *PrintVIDToStringlErecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::PrintVIDToString<reco::Muon>*)0x0)->GetClass();
      PrintVIDToStringlErecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void PrintVIDToStringlErecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p) {
      return  p ? new(p) ::VersionedSelector<edm::Ptr<reco::Muon> > : new ::VersionedSelector<edm::Ptr<reco::Muon> >;
   }
   static void *newArray_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::VersionedSelector<edm::Ptr<reco::Muon> >[nElements] : new ::VersionedSelector<edm::Ptr<reco::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p) {
      delete ((::VersionedSelector<edm::Ptr<reco::Muon> >*)p);
   }
   static void deleteArray_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p) {
      delete [] ((::VersionedSelector<edm::Ptr<reco::Muon> >*)p);
   }
   static void destruct_VersionedSelectorlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p) {
      typedef ::VersionedSelector<edm::Ptr<reco::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::VersionedSelector<edm::Ptr<reco::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_MakeVersionedSelectorlErecocLcLMuongR(void *p) {
      return  p ? new(p) ::MakeVersionedSelector<reco::Muon> : new ::MakeVersionedSelector<reco::Muon>;
   }
   static void *newArray_MakeVersionedSelectorlErecocLcLMuongR(Long_t nElements, void *p) {
      return p ? new(p) ::MakeVersionedSelector<reco::Muon>[nElements] : new ::MakeVersionedSelector<reco::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_MakeVersionedSelectorlErecocLcLMuongR(void *p) {
      delete ((::MakeVersionedSelector<reco::Muon>*)p);
   }
   static void deleteArray_MakeVersionedSelectorlErecocLcLMuongR(void *p) {
      delete [] ((::MakeVersionedSelector<reco::Muon>*)p);
   }
   static void destruct_MakeVersionedSelectorlErecocLcLMuongR(void *p) {
      typedef ::MakeVersionedSelector<reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MakeVersionedSelector<reco::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR(void *p) {
      return  p ? new(p) ::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon> : new ::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>;
   }
   static void *newArray_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR(Long_t nElements, void *p) {
      return p ? new(p) ::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>[nElements] : new ::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR(void *p) {
      delete ((::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>*)p);
   }
   static void deleteArray_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR(void *p) {
      delete [] ((::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>*)p);
   }
   static void destruct_MakePtrFromCollectionlEvectorlErecocLcLMuongRcOrecocLcLMuoncOrecocLcLMuongR(void *p) {
      typedef ::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR(void *p) {
      return  p ? new(p) ::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon> : new ::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>;
   }
   static void *newArray_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR(Long_t nElements, void *p) {
      return p ? new(p) ::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>[nElements] : new ::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR(void *p) {
      delete ((::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>*)p);
   }
   static void deleteArray_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR(void *p) {
      delete [] ((::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>*)p);
   }
   static void destruct_MakePtrFromCollectionlEvectorlEpatcLcLMuongRcOpatcLcLMuoncOrecocLcLMuongR(void *p) {
      typedef ::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_PrintVIDToStringlErecocLcLMuongR(void *p) {
      return  p ? new(p) ::PrintVIDToString<reco::Muon> : new ::PrintVIDToString<reco::Muon>;
   }
   static void *newArray_PrintVIDToStringlErecocLcLMuongR(Long_t nElements, void *p) {
      return p ? new(p) ::PrintVIDToString<reco::Muon>[nElements] : new ::PrintVIDToString<reco::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_PrintVIDToStringlErecocLcLMuongR(void *p) {
      delete ((::PrintVIDToString<reco::Muon>*)p);
   }
   static void deleteArray_PrintVIDToStringlErecocLcLMuongR(void *p) {
      delete [] ((::PrintVIDToString<reco::Muon>*)p);
   }
   static void destruct_PrintVIDToStringlErecocLcLMuongR(void *p) {
      typedef ::PrintVIDToString<reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PrintVIDToString<reco::Muon>

namespace {
  void TriggerDictionaryInitialization_RecoMuonMuonIdentification_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/afs/cern.ch/work/s/sanayak/public/DisplacedMuonRun3_Samar_New_OCT2021_GlobalTrackingTools/CMSSW_10_2_18/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/cms/cmssw/CMSSW_10_2_18/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/cms/coral/CORAL_2_3_21-gnimlf9/include/LCG",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/lcg/root/6.12.07-gnimlf5/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/boost/1.63.0-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/pcre/8.37-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/bz2lib/1.0.6-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/clhep/2.4.0.0-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/gsl/2.2.1-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/hepmc/2.06.07-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/libuuid/2.22.2-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/openssl/1.0.2d-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/python/2.7.14-omkpbe4/include/python2.7",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/sigcpp/2.6.2-omkpbe2/include/sigc++-2.0",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/tbb/2018_U1-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/cms/vdt/0.4.0-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/xerces-c/3.1.3-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/xz/5.2.2-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/zlib-x86_64/1.2.11-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/eigen/64060da8461a627eb25b5a7bc0616776068db58b/include/eigen3",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/md5/1.0.0-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/tinyxml/2.5.3-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/lcg/root/6.12.07-gnimlf5/include",
"/afs/cern.ch/work/s/sanayak/public/DisplacedMuonRun3_Samar_New_OCT2021_GlobalTrackingTools/CMSSW_10_2_18/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "RecoMuonMuonIdentification_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  __attribute__((annotate("$clingAutoload$RecoMuon/MuonIdentification/interface/VersionedMuonSelector.h")))  Muon;}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Ptr.h")))  __attribute__((annotate("$clingAutoload$RecoMuon/MuonIdentification/interface/VersionedMuonSelector.h")))  Ptr;
}
template <class T> class __attribute__((annotate("$clingAutoload$PhysicsTools/SelectorUtils/interface/VersionedSelector.h")))  __attribute__((annotate("$clingAutoload$RecoMuon/MuonIdentification/interface/VersionedMuonSelector.h")))  VersionedSelector;

template <class PhysObj> struct __attribute__((annotate("$clingAutoload$PhysicsTools/SelectorUtils/interface/MakePyVIDClassBuilder.h")))  MakeVersionedSelector;

namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/Muon.h")))  __attribute__((annotate("$clingAutoload$RecoMuon/MuonIdentification/interface/VersionedMuonSelector.h")))  Muon;}
template <typename T> struct __attribute__((annotate("$clingAutoload$PhysicsTools/SelectorUtils/interface/PrintVIDToString.h")))  PrintVIDToString;

)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "RecoMuonMuonIdentification_xr dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef CMS_DICT_IMPL
  #define CMS_DICT_IMPL 1
#endif
#ifndef _REENTRANT
  #define _REENTRANT 1
#endif
#ifndef GNUSOURCE
  #define GNUSOURCE 1
#endif
#ifndef __STRICT_ANSI__
  #define __STRICT_ANSI__ 1
#endif
#ifndef GNU_GCC
  #define GNU_GCC 1
#endif
#ifndef _GNU_SOURCE
  #define _GNU_SOURCE 1
#endif
#ifndef EIGEN_DONT_PARALLELIZE
  #define EIGEN_DONT_PARALLELIZE 1
#endif
#ifndef TBB_USE_GLIBCXX_VERSION
  #define TBB_USE_GLIBCXX_VERSION 70301
#endif
#ifndef BOOST_SPIRIT_THREADSAFE
  #define BOOST_SPIRIT_THREADSAFE 1
#endif
#ifndef PHOENIX_THREADSAFE
  #define PHOENIX_THREADSAFE 1
#endif
#ifndef CMSSW_GIT_HASH
  #define CMSSW_GIT_HASH "CMSSW_10_2_18"
#endif
#ifndef PROJECT_NAME
  #define PROJECT_NAME "CMSSW"
#endif
#ifndef PROJECT_VERSION
  #define PROJECT_VERSION "CMSSW_10_2_18"
#endif
#ifndef CMSSW_REFLEX_DICT
  #define CMSSW_REFLEX_DICT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "DataFormats/Common/interface/Wrapper.h"

//Add includes for your classes here
#include "RecoMuon/MuonIdentification/interface/VersionedMuonSelector.h"
#include "DataFormats/MuonReco/interface/MuonFwd.h"

#include "DataFormats/PatCandidates/interface/Muon.h"

#include "PhysicsTools/SelectorUtils/interface/MakePyVIDClassBuilder.h"
#include "PhysicsTools/SelectorUtils/interface/MakePtrFromCollection.h"
#include "PhysicsTools/SelectorUtils/interface/PrintVIDToString.h"

namespace RecoMuon_MuonIdentification {
  struct dictionary {    
    //for using the selectors in python
    VersionedMuonSelector vMuonSelector; 
    
    MakeVersionedSelector<reco::Muon> vMakeMuonVersionedSelector;
    MakePtrFromCollection<reco::MuonCollection> vMakeMuonPtrFromCollection;
    MakePtrFromCollection<std::vector<pat::Muon>,pat::Muon,reco::Muon> vMakePatToRecoMuonPtrFromCollection;
    PrintVIDToString<reco::Muon> vPrintMuonVIDToString;
  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"", payloadCode, "@",
"MakePtrFromCollection<vector<pat::Muon>,pat::Muon,reco::Muon>", payloadCode, "@",
"MakePtrFromCollection<vector<reco::Muon>,reco::Muon,reco::Muon>", payloadCode, "@",
"MakeVersionedSelector<reco::Muon>", payloadCode, "@",
"PrintVIDToString<reco::Muon>", payloadCode, "@",
"VersionedSelector<edm::Ptr<reco::Muon> >", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("RecoMuonMuonIdentification_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_RecoMuonMuonIdentification_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_RecoMuonMuonIdentification_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_RecoMuonMuonIdentification_xr() {
  TriggerDictionaryInitialization_RecoMuonMuonIdentification_xr_Impl();
}
