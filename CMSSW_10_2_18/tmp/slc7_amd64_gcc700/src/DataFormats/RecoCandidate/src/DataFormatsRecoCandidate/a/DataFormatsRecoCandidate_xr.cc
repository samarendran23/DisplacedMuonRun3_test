// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc7_amd64_gcc700dIsrcdIDataFormatsdIRecoCandidatedIsrcdIDataFormatsRecoCandidatedIadIDataFormatsRecoCandidate_xr

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
#include "src/DataFormats/RecoCandidate/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >*)
   {
      ::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >", "string", 760,
                  typeid(::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >","vector<reco::IsoDeposit>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)
   {
      ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >", ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >","edm::Ref<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)
   {
      ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >", ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >","edm::Ref<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)
   {
      ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >", ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >","edm::Ref<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::RecoChargedCandidate> >*)
   {
      ::edm::RefProd<vector<reco::RecoChargedCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::RecoChargedCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::RecoChargedCandidate> >", ::edm::RefProd<vector<reco::RecoChargedCandidate> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::RecoChargedCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::RecoChargedCandidate> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::RecoChargedCandidate> >","edm::RefProd<std::vector<reco::RecoChargedCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::RecoChargedCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::RecoChargedCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::RecoChargedCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::RecoChargedCandidate> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::RecoChargedRefCandidate> >*)
   {
      ::edm::RefProd<vector<reco::RecoChargedRefCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::RecoChargedRefCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::RecoChargedRefCandidate> >", ::edm::RefProd<vector<reco::RecoChargedRefCandidate> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::RecoChargedRefCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::RecoChargedRefCandidate> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::RecoChargedRefCandidate> >","edm::RefProd<std::vector<reco::RecoChargedRefCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::RecoChargedRefCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::RecoChargedRefCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::RecoChargedRefCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::RecoChargedRefCandidate> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::RecoEcalCandidate> >*)
   {
      ::edm::RefProd<vector<reco::RecoEcalCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::RecoEcalCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::RecoEcalCandidate> >", ::edm::RefProd<vector<reco::RecoEcalCandidate> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::RecoEcalCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::RecoEcalCandidate> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::RecoEcalCandidate> >","edm::RefProd<std::vector<reco::RecoEcalCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::RecoEcalCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::RecoEcalCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::RecoEcalCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::RecoEcalCandidate> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)
   {
      ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >", ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >","edm::RefVector<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)
   {
      ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >", ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >","edm::RefVector<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)
   {
      ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >", ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >","edm::RefVector<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::RecoChargedCandidate> >*)
   {
      ::edm::Wrapper<vector<reco::RecoChargedCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::RecoChargedCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::RecoChargedCandidate> >", ::edm::Wrapper<vector<reco::RecoChargedCandidate> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::RecoChargedCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::RecoChargedCandidate> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::RecoChargedCandidate> >","edm::Wrapper<std::vector<reco::RecoChargedCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::RecoChargedCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::RecoChargedCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::RecoChargedCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::RecoChargedCandidate> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >*)
   {
      ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::RecoChargedRefCandidate> >", ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::RecoChargedRefCandidate> >","edm::Wrapper<std::vector<reco::RecoChargedRefCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::RecoEcalCandidate> >*)
   {
      ::edm::Wrapper<vector<reco::RecoEcalCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::RecoEcalCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::RecoEcalCandidate> >", ::edm::Wrapper<vector<reco::RecoEcalCandidate> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::RecoEcalCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::RecoEcalCandidate> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::RecoEcalCandidate> >","edm::Wrapper<std::vector<reco::RecoEcalCandidate> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::RecoEcalCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::RecoEcalCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::RecoEcalCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::RecoEcalCandidate> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<reco::FitQuality> >*)
   {
      ::edm::Wrapper<edm::ValueMap<reco::FitQuality> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<reco::FitQuality> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<reco::FitQuality> >", ::edm::Wrapper<edm::ValueMap<reco::FitQuality> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<reco::FitQuality> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<reco::FitQuality> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<reco::FitQuality> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<reco::FitQuality> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::FitQuality> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::FitQuality> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >","edm::Wrapper<reco::SimToRecoCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >","edm::Wrapper<reco::RecoToSimCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >*)
   {
      ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >", ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)
   {
      ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >","edm::Wrapper<edm::RefVector<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)
   {
      ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >","edm::Wrapper<edm::RefVector<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >*)
   {
      ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >", ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)
   {
      ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >","edm::Wrapper<edm::RefVector<std::vector<reco::RecoEcalCandidate> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >","edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >","edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >","edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >","edm::reftobase::Holder<reco::Candidate,reco::RecoStandAloneMuonCandidateRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)
   {
      ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >::Class_Version(), "DataFormats/Common/interface/RefHolder_.h", 20,
                  typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >","edm::reftobase::RefHolder<reco::RecoChargedCandidateRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)
   {
      ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >::Class_Version(), "DataFormats/Common/interface/RefHolder_.h", 20,
                  typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >","edm::reftobase::RefHolder<reco::RecoChargedRefCandidateRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)
   {
      ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >", ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >::Class_Version(), "DataFormats/Common/interface/RefHolder_.h", 20,
                  typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >","edm::reftobase::RefHolder<reco::RecoStandAloneMuonCandidateRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)
   {
      ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >::Class_Version(), "DataFormats/Common/interface/RefHolder_.h", 20,
                  typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >","edm::reftobase::RefHolder<reco::RecoEcalCandidateRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)
   {
      ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >::Class_Version(), "DataFormats/Common/interface/VectorHolder.h", 15,
                  typeid(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >","edm::reftobase::VectorHolder<reco::Candidate,reco::RecoChargedCandidateRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)
   {
      ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >::Class_Version(), "DataFormats/Common/interface/VectorHolder.h", 15,
                  typeid(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >","edm::reftobase::VectorHolder<reco::Candidate,reco::RecoChargedRefCandidateRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)
   {
      ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >", ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >::Class_Version(), "DataFormats/Common/interface/VectorHolder.h", 15,
                  typeid(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >","edm::reftobase::VectorHolder<reco::Candidate,reco::RecoStandAloneMuonCandidateRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)
   {
      ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >::Class_Version(), "DataFormats/Common/interface/VectorHolder.h", 15,
                  typeid(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >","edm::reftobase::VectorHolder<reco::Candidate,reco::RecoEcalCandidateRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR_Dictionary();
   static void edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR(void *p);
   static void deleteArray_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR(void *p);
   static void destruct_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >*)
   {
      ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >", ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >::Class_Version(), "DataFormats/Common/interface/OwnVector.h", 24,
                  typeid(::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >) );
      instance.SetNew(&new_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >*)0x0)->GetClass();
      edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)
   {
      ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >::Class_Version(), "DataFormats/Common/interface/RefVectorHolder.h", 15,
                  typeid(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >","edm::reftobase::RefVectorHolder<reco::RecoChargedCandidateRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)
   {
      ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >::Class_Version(), "DataFormats/Common/interface/RefVectorHolder.h", 15,
                  typeid(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >","edm::reftobase::RefVectorHolder<reco::RecoChargedRefCandidateRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)
   {
      ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >", ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >::Class_Version(), "DataFormats/Common/interface/RefVectorHolder.h", 15,
                  typeid(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >","edm::reftobase::RefVectorHolder<reco::RecoStandAloneMuonCandidateRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)
   {
      ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >::Class_Version(), "DataFormats/Common/interface/RefVectorHolder.h", 15,
                  typeid(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >","edm::reftobase::RefVectorHolder<reco::RecoEcalCandidateRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLFitQualitygR_Dictionary();
   static void edmcLcLValueMaplErecocLcLFitQualitygR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLFitQualitygR(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLFitQualitygR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLFitQualitygR(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLFitQualitygR(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLFitQualitygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::FitQuality>*)
   {
      ::edm::ValueMap<reco::FitQuality> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::FitQuality>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::FitQuality>", ::edm::ValueMap<reco::FitQuality>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<reco::FitQuality>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLFitQualitygR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::FitQuality>) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLFitQualitygR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLFitQualitygR);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLFitQualitygR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLFitQualitygR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLFitQualitygR);

      ::ROOT::AddClassAlternate("edm::ValueMap<reco::FitQuality>","reco::FitResultCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::FitQuality>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::FitQuality>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::FitQuality>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLFitQualitygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::FitQuality>*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLFitQualitygR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLFitQualitygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLIsoDepositgR_Dictionary();
   static void edmcLcLValueMaplErecocLcLIsoDepositgR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLIsoDepositgR(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLIsoDepositgR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLIsoDepositgR(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLIsoDepositgR(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLIsoDepositgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::IsoDeposit>*)
   {
      ::edm::ValueMap<reco::IsoDeposit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::IsoDeposit>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::IsoDeposit>", ::edm::ValueMap<reco::IsoDeposit>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<reco::IsoDeposit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLIsoDepositgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::IsoDeposit>) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLIsoDepositgR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLIsoDepositgR);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLIsoDepositgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLIsoDepositgR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLIsoDepositgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::IsoDeposit>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::IsoDeposit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::IsoDeposit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLIsoDepositgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::IsoDeposit>*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLIsoDepositgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLIsoDepositgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator_Dictionary();
   static void edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::IsoDeposit>::const_iterator*)
   {
      ::edm::ValueMap<reco::IsoDeposit>::const_iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::IsoDeposit>::const_iterator));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::IsoDeposit>::const_iterator", "DataFormats/Common/interface/ValueMap.h", 171,
                  typeid(::edm::ValueMap<reco::IsoDeposit>::const_iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::IsoDeposit>::const_iterator) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::IsoDeposit>::const_iterator*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::IsoDeposit>::const_iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::IsoDeposit>::const_iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::IsoDeposit>::const_iterator*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLRecoCandidate_Dictionary();
   static void recocLcLRecoCandidate_TClassManip(TClass*);
   static void delete_recocLcLRecoCandidate(void *p);
   static void deleteArray_recocLcLRecoCandidate(void *p);
   static void destruct_recocLcLRecoCandidate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::RecoCandidate*)
   {
      ::reco::RecoCandidate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::RecoCandidate));
      static ::ROOT::TGenericClassInfo 
         instance("reco::RecoCandidate", 12, "DataFormats/RecoCandidate/interface/RecoCandidate.h", 20,
                  typeid(::reco::RecoCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLRecoCandidate_Dictionary, isa_proxy, 12,
                  sizeof(::reco::RecoCandidate) );
      instance.SetDelete(&delete_recocLcLRecoCandidate);
      instance.SetDeleteArray(&deleteArray_recocLcLRecoCandidate);
      instance.SetDestructor(&destruct_recocLcLRecoCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::RecoCandidate*)
   {
      return GenerateInitInstanceLocal((::reco::RecoCandidate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::RecoCandidate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLRecoCandidate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::RecoCandidate*)0x0)->GetClass();
      recocLcLRecoCandidate_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLRecoCandidate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLRecoChargedCandidate_Dictionary();
   static void recocLcLRecoChargedCandidate_TClassManip(TClass*);
   static void *new_recocLcLRecoChargedCandidate(void *p = 0);
   static void *newArray_recocLcLRecoChargedCandidate(Long_t size, void *p);
   static void delete_recocLcLRecoChargedCandidate(void *p);
   static void deleteArray_recocLcLRecoChargedCandidate(void *p);
   static void destruct_recocLcLRecoChargedCandidate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::RecoChargedCandidate*)
   {
      ::reco::RecoChargedCandidate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::RecoChargedCandidate));
      static ::ROOT::TGenericClassInfo 
         instance("reco::RecoChargedCandidate", 12, "DataFormats/RecoCandidate/interface/RecoChargedCandidate.h", 15,
                  typeid(::reco::RecoChargedCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLRecoChargedCandidate_Dictionary, isa_proxy, 12,
                  sizeof(::reco::RecoChargedCandidate) );
      instance.SetNew(&new_recocLcLRecoChargedCandidate);
      instance.SetNewArray(&newArray_recocLcLRecoChargedCandidate);
      instance.SetDelete(&delete_recocLcLRecoChargedCandidate);
      instance.SetDeleteArray(&deleteArray_recocLcLRecoChargedCandidate);
      instance.SetDestructor(&destruct_recocLcLRecoChargedCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::RecoChargedCandidate*)
   {
      return GenerateInitInstanceLocal((::reco::RecoChargedCandidate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::RecoChargedCandidate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLRecoChargedCandidate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::RecoChargedCandidate*)0x0)->GetClass();
      recocLcLRecoChargedCandidate_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLRecoChargedCandidate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLRecoChargedRefCandidate_Dictionary();
   static void recocLcLRecoChargedRefCandidate_TClassManip(TClass*);
   static void *new_recocLcLRecoChargedRefCandidate(void *p = 0);
   static void *newArray_recocLcLRecoChargedRefCandidate(Long_t size, void *p);
   static void delete_recocLcLRecoChargedRefCandidate(void *p);
   static void deleteArray_recocLcLRecoChargedRefCandidate(void *p);
   static void destruct_recocLcLRecoChargedRefCandidate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::RecoChargedRefCandidate*)
   {
      ::reco::RecoChargedRefCandidate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::RecoChargedRefCandidate));
      static ::ROOT::TGenericClassInfo 
         instance("reco::RecoChargedRefCandidate", 12, "DataFormats/RecoCandidate/interface/RecoChargedRefCandidate.h", 14,
                  typeid(::reco::RecoChargedRefCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLRecoChargedRefCandidate_Dictionary, isa_proxy, 12,
                  sizeof(::reco::RecoChargedRefCandidate) );
      instance.SetNew(&new_recocLcLRecoChargedRefCandidate);
      instance.SetNewArray(&newArray_recocLcLRecoChargedRefCandidate);
      instance.SetDelete(&delete_recocLcLRecoChargedRefCandidate);
      instance.SetDeleteArray(&deleteArray_recocLcLRecoChargedRefCandidate);
      instance.SetDestructor(&destruct_recocLcLRecoChargedRefCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::RecoChargedRefCandidate*)
   {
      return GenerateInitInstanceLocal((::reco::RecoChargedRefCandidate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::RecoChargedRefCandidate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLRecoChargedRefCandidate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::RecoChargedRefCandidate*)0x0)->GetClass();
      recocLcLRecoChargedRefCandidate_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLRecoChargedRefCandidate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >*)
   {
      ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 22,
                  typeid(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >","edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >*)
   {
      ::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 37,
                  typeid(::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >","edm::helpers::Key<edm::RefProd<std::vector<reco::RecoChargedCandidate> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >*)
   {
      ::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 37,
                  typeid(::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >","edm::helpers::Key<edm::RefProd<std::vector<reco::RecoEcalCandidate> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >", ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >","edm::AssociationMap<edm::OneToValue<std::vector<reco::RecoChargedCandidate>,float,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >", ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >","edm::AssociationMap<edm::OneToValue<std::vector<reco::RecoEcalCandidate>,float,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >*)
   {
      ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >", ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >","reco::SimToRecoCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >*)
   {
      ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >", ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >","reco::RecoToSimCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >", ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >","edm::AssociationMap<edm::OneToOne<std::vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLRecoEcalCandidate_Dictionary();
   static void recocLcLRecoEcalCandidate_TClassManip(TClass*);
   static void *new_recocLcLRecoEcalCandidate(void *p = 0);
   static void *newArray_recocLcLRecoEcalCandidate(Long_t size, void *p);
   static void delete_recocLcLRecoEcalCandidate(void *p);
   static void deleteArray_recocLcLRecoEcalCandidate(void *p);
   static void destruct_recocLcLRecoEcalCandidate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::RecoEcalCandidate*)
   {
      ::reco::RecoEcalCandidate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::RecoEcalCandidate));
      static ::ROOT::TGenericClassInfo 
         instance("reco::RecoEcalCandidate", 12, "DataFormats/RecoCandidate/interface/RecoEcalCandidate.h", 15,
                  typeid(::reco::RecoEcalCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLRecoEcalCandidate_Dictionary, isa_proxy, 12,
                  sizeof(::reco::RecoEcalCandidate) );
      instance.SetNew(&new_recocLcLRecoEcalCandidate);
      instance.SetNewArray(&newArray_recocLcLRecoEcalCandidate);
      instance.SetDelete(&delete_recocLcLRecoEcalCandidate);
      instance.SetDeleteArray(&deleteArray_recocLcLRecoEcalCandidate);
      instance.SetDestructor(&destruct_recocLcLRecoEcalCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::RecoEcalCandidate*)
   {
      return GenerateInitInstanceLocal((::reco::RecoEcalCandidate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::RecoEcalCandidate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLRecoEcalCandidate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::RecoEcalCandidate*)0x0)->GetClass();
      recocLcLRecoEcalCandidate_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLRecoEcalCandidate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLRecoCaloTowerCandidate_Dictionary();
   static void recocLcLRecoCaloTowerCandidate_TClassManip(TClass*);
   static void *new_recocLcLRecoCaloTowerCandidate(void *p = 0);
   static void *newArray_recocLcLRecoCaloTowerCandidate(Long_t size, void *p);
   static void delete_recocLcLRecoCaloTowerCandidate(void *p);
   static void deleteArray_recocLcLRecoCaloTowerCandidate(void *p);
   static void destruct_recocLcLRecoCaloTowerCandidate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::RecoCaloTowerCandidate*)
   {
      ::reco::RecoCaloTowerCandidate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::RecoCaloTowerCandidate));
      static ::ROOT::TGenericClassInfo 
         instance("reco::RecoCaloTowerCandidate", 12, "DataFormats/RecoCandidate/interface/RecoCaloTowerCandidate.h", 15,
                  typeid(::reco::RecoCaloTowerCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLRecoCaloTowerCandidate_Dictionary, isa_proxy, 12,
                  sizeof(::reco::RecoCaloTowerCandidate) );
      instance.SetNew(&new_recocLcLRecoCaloTowerCandidate);
      instance.SetNewArray(&newArray_recocLcLRecoCaloTowerCandidate);
      instance.SetDelete(&delete_recocLcLRecoCaloTowerCandidate);
      instance.SetDeleteArray(&deleteArray_recocLcLRecoCaloTowerCandidate);
      instance.SetDestructor(&destruct_recocLcLRecoCaloTowerCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::RecoCaloTowerCandidate*)
   {
      return GenerateInitInstanceLocal((::reco::RecoCaloTowerCandidate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::RecoCaloTowerCandidate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLRecoCaloTowerCandidate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::RecoCaloTowerCandidate*)0x0)->GetClass();
      recocLcLRecoCaloTowerCandidate_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLRecoCaloTowerCandidate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLFitQuality_Dictionary();
   static void recocLcLFitQuality_TClassManip(TClass*);
   static void *new_recocLcLFitQuality(void *p = 0);
   static void *newArray_recocLcLFitQuality(Long_t size, void *p);
   static void delete_recocLcLFitQuality(void *p);
   static void deleteArray_recocLcLFitQuality(void *p);
   static void destruct_recocLcLFitQuality(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::FitQuality*)
   {
      ::reco::FitQuality *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::FitQuality));
      static ::ROOT::TGenericClassInfo 
         instance("reco::FitQuality", 11, "DataFormats/RecoCandidate/interface/FitQuality.h", 16,
                  typeid(::reco::FitQuality), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLFitQuality_Dictionary, isa_proxy, 12,
                  sizeof(::reco::FitQuality) );
      instance.SetNew(&new_recocLcLFitQuality);
      instance.SetNewArray(&newArray_recocLcLFitQuality);
      instance.SetDelete(&delete_recocLcLFitQuality);
      instance.SetDeleteArray(&deleteArray_recocLcLFitQuality);
      instance.SetDestructor(&destruct_recocLcLFitQuality);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::FitQuality*)
   {
      return GenerateInitInstanceLocal((::reco::FitQuality*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::FitQuality*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLFitQuality_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::FitQuality*)0x0)->GetClass();
      recocLcLFitQuality_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLFitQuality_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLCaloRecHitCandidate_Dictionary();
   static void recocLcLCaloRecHitCandidate_TClassManip(TClass*);
   static void *new_recocLcLCaloRecHitCandidate(void *p = 0);
   static void *newArray_recocLcLCaloRecHitCandidate(Long_t size, void *p);
   static void delete_recocLcLCaloRecHitCandidate(void *p);
   static void deleteArray_recocLcLCaloRecHitCandidate(void *p);
   static void destruct_recocLcLCaloRecHitCandidate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::CaloRecHitCandidate*)
   {
      ::reco::CaloRecHitCandidate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::CaloRecHitCandidate));
      static ::ROOT::TGenericClassInfo 
         instance("reco::CaloRecHitCandidate", 12, "DataFormats/RecoCandidate/interface/CaloRecHitCandidate.h", 17,
                  typeid(::reco::CaloRecHitCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLCaloRecHitCandidate_Dictionary, isa_proxy, 12,
                  sizeof(::reco::CaloRecHitCandidate) );
      instance.SetNew(&new_recocLcLCaloRecHitCandidate);
      instance.SetNewArray(&newArray_recocLcLCaloRecHitCandidate);
      instance.SetDelete(&delete_recocLcLCaloRecHitCandidate);
      instance.SetDeleteArray(&deleteArray_recocLcLCaloRecHitCandidate);
      instance.SetDestructor(&destruct_recocLcLCaloRecHitCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::CaloRecHitCandidate*)
   {
      return GenerateInitInstanceLocal((::reco::CaloRecHitCandidate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::CaloRecHitCandidate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLCaloRecHitCandidate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::CaloRecHitCandidate*)0x0)->GetClass();
      recocLcLCaloRecHitCandidate_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLCaloRecHitCandidate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLisodepositcLcLDirection_Dictionary();
   static void recocLcLisodepositcLcLDirection_TClassManip(TClass*);
   static void *new_recocLcLisodepositcLcLDirection(void *p = 0);
   static void *newArray_recocLcLisodepositcLcLDirection(Long_t size, void *p);
   static void delete_recocLcLisodepositcLcLDirection(void *p);
   static void deleteArray_recocLcLisodepositcLcLDirection(void *p);
   static void destruct_recocLcLisodepositcLcLDirection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::isodeposit::Direction*)
   {
      ::reco::isodeposit::Direction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::isodeposit::Direction));
      static ::ROOT::TGenericClassInfo 
         instance("reco::isodeposit::Direction", 10, "DataFormats/RecoCandidate/interface/IsoDepositDirection.h", 19,
                  typeid(::reco::isodeposit::Direction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLisodepositcLcLDirection_Dictionary, isa_proxy, 12,
                  sizeof(::reco::isodeposit::Direction) );
      instance.SetNew(&new_recocLcLisodepositcLcLDirection);
      instance.SetNewArray(&newArray_recocLcLisodepositcLcLDirection);
      instance.SetDelete(&delete_recocLcLisodepositcLcLDirection);
      instance.SetDeleteArray(&deleteArray_recocLcLisodepositcLcLDirection);
      instance.SetDestructor(&destruct_recocLcLisodepositcLcLDirection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::isodeposit::Direction*)
   {
      return GenerateInitInstanceLocal((::reco::isodeposit::Direction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::isodeposit::Direction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLisodepositcLcLDirection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::isodeposit::Direction*)0x0)->GetClass();
      recocLcLisodepositcLcLDirection_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLisodepositcLcLDirection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLisodepositcLcLDirectioncLcLDistance_Dictionary();
   static void recocLcLisodepositcLcLDirectioncLcLDistance_TClassManip(TClass*);
   static void *new_recocLcLisodepositcLcLDirectioncLcLDistance(void *p = 0);
   static void *newArray_recocLcLisodepositcLcLDirectioncLcLDistance(Long_t size, void *p);
   static void delete_recocLcLisodepositcLcLDirectioncLcLDistance(void *p);
   static void deleteArray_recocLcLisodepositcLcLDirectioncLcLDistance(void *p);
   static void destruct_recocLcLisodepositcLcLDirectioncLcLDistance(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::isodeposit::Direction::Distance*)
   {
      ::reco::isodeposit::Direction::Distance *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::isodeposit::Direction::Distance));
      static ::ROOT::TGenericClassInfo 
         instance("reco::isodeposit::Direction::Distance", 10, "DataFormats/RecoCandidate/interface/IsoDepositDirection.h", 22,
                  typeid(::reco::isodeposit::Direction::Distance), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLisodepositcLcLDirectioncLcLDistance_Dictionary, isa_proxy, 12,
                  sizeof(::reco::isodeposit::Direction::Distance) );
      instance.SetNew(&new_recocLcLisodepositcLcLDirectioncLcLDistance);
      instance.SetNewArray(&newArray_recocLcLisodepositcLcLDirectioncLcLDistance);
      instance.SetDelete(&delete_recocLcLisodepositcLcLDirectioncLcLDistance);
      instance.SetDeleteArray(&deleteArray_recocLcLisodepositcLcLDirectioncLcLDistance);
      instance.SetDestructor(&destruct_recocLcLisodepositcLcLDirectioncLcLDistance);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::isodeposit::Direction::Distance*)
   {
      return GenerateInitInstanceLocal((::reco::isodeposit::Direction::Distance*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::isodeposit::Direction::Distance*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLisodepositcLcLDirectioncLcLDistance_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::isodeposit::Direction::Distance*)0x0)->GetClass();
      recocLcLisodepositcLcLDirectioncLcLDistance_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLisodepositcLcLDirectioncLcLDistance_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLIsoDeposit_Dictionary();
   static void recocLcLIsoDeposit_TClassManip(TClass*);
   static void *new_recocLcLIsoDeposit(void *p = 0);
   static void *newArray_recocLcLIsoDeposit(Long_t size, void *p);
   static void delete_recocLcLIsoDeposit(void *p);
   static void deleteArray_recocLcLIsoDeposit(void *p);
   static void destruct_recocLcLIsoDeposit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::IsoDeposit*)
   {
      ::reco::IsoDeposit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::IsoDeposit));
      static ::ROOT::TGenericClassInfo 
         instance("reco::IsoDeposit", 10, "DataFormats/RecoCandidate/interface/IsoDeposit.h", 46,
                  typeid(::reco::IsoDeposit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLIsoDeposit_Dictionary, isa_proxy, 12,
                  sizeof(::reco::IsoDeposit) );
      instance.SetNew(&new_recocLcLIsoDeposit);
      instance.SetNewArray(&newArray_recocLcLIsoDeposit);
      instance.SetDelete(&delete_recocLcLIsoDeposit);
      instance.SetDeleteArray(&deleteArray_recocLcLIsoDeposit);
      instance.SetDestructor(&destruct_recocLcLIsoDeposit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::IsoDeposit*)
   {
      return GenerateInitInstanceLocal((::reco::IsoDeposit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::IsoDeposit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLIsoDeposit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::IsoDeposit*)0x0)->GetClass();
      recocLcLIsoDeposit_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLIsoDeposit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLIsoDepositcLcLVeto_Dictionary();
   static void recocLcLIsoDepositcLcLVeto_TClassManip(TClass*);
   static void *new_recocLcLIsoDepositcLcLVeto(void *p = 0);
   static void *newArray_recocLcLIsoDepositcLcLVeto(Long_t size, void *p);
   static void delete_recocLcLIsoDepositcLcLVeto(void *p);
   static void deleteArray_recocLcLIsoDepositcLcLVeto(void *p);
   static void destruct_recocLcLIsoDepositcLcLVeto(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::IsoDeposit::Veto*)
   {
      ::reco::IsoDeposit::Veto *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::IsoDeposit::Veto));
      static ::ROOT::TGenericClassInfo 
         instance("reco::IsoDeposit::Veto", 10, "DataFormats/RecoCandidate/interface/IsoDeposit.h", 58,
                  typeid(::reco::IsoDeposit::Veto), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLIsoDepositcLcLVeto_Dictionary, isa_proxy, 12,
                  sizeof(::reco::IsoDeposit::Veto) );
      instance.SetNew(&new_recocLcLIsoDepositcLcLVeto);
      instance.SetNewArray(&newArray_recocLcLIsoDepositcLcLVeto);
      instance.SetDelete(&delete_recocLcLIsoDepositcLcLVeto);
      instance.SetDeleteArray(&deleteArray_recocLcLIsoDepositcLcLVeto);
      instance.SetDestructor(&destruct_recocLcLIsoDepositcLcLVeto);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::IsoDeposit::Veto*)
   {
      return GenerateInitInstanceLocal((::reco::IsoDeposit::Veto*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::IsoDeposit::Veto*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLIsoDepositcLcLVeto_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::IsoDeposit::Veto*)0x0)->GetClass();
      recocLcLIsoDepositcLcLVeto_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLIsoDepositcLcLVeto_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLIsoDepositcLcLconst_iterator_Dictionary();
   static void recocLcLIsoDepositcLcLconst_iterator_TClassManip(TClass*);
   static void delete_recocLcLIsoDepositcLcLconst_iterator(void *p);
   static void deleteArray_recocLcLIsoDepositcLcLconst_iterator(void *p);
   static void destruct_recocLcLIsoDepositcLcLconst_iterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::IsoDeposit::const_iterator*)
   {
      ::reco::IsoDeposit::const_iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::IsoDeposit::const_iterator));
      static ::ROOT::TGenericClassInfo 
         instance("reco::IsoDeposit::const_iterator", 10, "DataFormats/RecoCandidate/interface/IsoDeposit.h", 143,
                  typeid(::reco::IsoDeposit::const_iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLIsoDepositcLcLconst_iterator_Dictionary, isa_proxy, 12,
                  sizeof(::reco::IsoDeposit::const_iterator) );
      instance.SetDelete(&delete_recocLcLIsoDepositcLcLconst_iterator);
      instance.SetDeleteArray(&deleteArray_recocLcLIsoDepositcLcLconst_iterator);
      instance.SetDestructor(&destruct_recocLcLIsoDepositcLcLconst_iterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::IsoDeposit::const_iterator*)
   {
      return GenerateInitInstanceLocal((::reco::IsoDeposit::const_iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::IsoDeposit::const_iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLIsoDepositcLcLconst_iterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::IsoDeposit::const_iterator*)0x0)->GetClass();
      recocLcLIsoDepositcLcLconst_iterator_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLIsoDepositcLcLconst_iterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> > : new ::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >[nElements] : new ::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLIsoDepositmUcOvectorlErecocLcLIsoDepositgRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > : new ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >[nElements] : new ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > : new ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >[nElements] : new ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > : new ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >[nElements] : new ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::RecoChargedCandidate> > : new ::edm::RefProd<vector<reco::RecoChargedCandidate> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::RecoChargedCandidate> >[nElements] : new ::edm::RefProd<vector<reco::RecoChargedCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::RecoChargedCandidate> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::RecoChargedCandidate> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::RecoChargedCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::RecoChargedCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::RecoChargedRefCandidate> > : new ::edm::RefProd<vector<reco::RecoChargedRefCandidate> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::RecoChargedRefCandidate> >[nElements] : new ::edm::RefProd<vector<reco::RecoChargedRefCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::RecoChargedRefCandidate> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::RecoChargedRefCandidate> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::RecoChargedRefCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::RecoChargedRefCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::RecoEcalCandidate> > : new ::edm::RefProd<vector<reco::RecoEcalCandidate> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::RecoEcalCandidate> >[nElements] : new ::edm::RefProd<vector<reco::RecoEcalCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::RecoEcalCandidate> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::RecoEcalCandidate> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::RecoEcalCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::RecoEcalCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > : new ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >[nElements] : new ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > : new ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >[nElements] : new ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > : new ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >[nElements] : new ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::RecoChargedCandidate> > : new ::edm::Wrapper<vector<reco::RecoChargedCandidate> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::RecoChargedCandidate> >[nElements] : new ::edm::Wrapper<vector<reco::RecoChargedCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::RecoChargedCandidate> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::RecoChargedCandidate> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLRecoChargedCandidategRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::RecoChargedCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::RecoChargedCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> > : new ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >[nElements] : new ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLRecoChargedRefCandidategRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::RecoChargedRefCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::RecoEcalCandidate> > : new ::edm::Wrapper<vector<reco::RecoEcalCandidate> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::RecoEcalCandidate> >[nElements] : new ::edm::Wrapper<vector<reco::RecoEcalCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::RecoEcalCandidate> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::RecoEcalCandidate> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLRecoEcalCandidategRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::RecoEcalCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::RecoEcalCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::FitQuality> > : new ::edm::Wrapper<edm::ValueMap<reco::FitQuality> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::FitQuality> >[nElements] : new ::edm::Wrapper<edm::ValueMap<reco::FitQuality> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<reco::FitQuality> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<reco::FitQuality> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLFitQualitygRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<reco::FitQuality> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<reco::FitQuality> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> > : new ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >[nElements] : new ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLIsoDepositgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > : new ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements] : new ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > : new ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >[nElements] : new ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > > : new ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >[nElements] : new ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > : new ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements] : new ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements] : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >[nElements] : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >[nElements] : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements] : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > : new ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements] : new ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > : new ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >[nElements] : new ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > : new ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >[nElements] : new ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > : new ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements] : new ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > : new ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >;
   }
   static void *newArray_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >[nElements] : new ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR(void *p) {
      delete ((::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >*)p);
   }
   static void deleteArray_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR(void *p) {
      delete [] ((::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >*)p);
   }
   static void destruct_edmcLcLOwnVectorlErecocLcLRecoCandidatecOedmcLcLClonePolicylErecocLcLRecoCandidategRsPgR(void *p) {
      typedef ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > : new ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements] : new ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > : new ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >[nElements] : new ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedRefCandidategRcOrecocLcLRecoChargedRefCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > : new ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >[nElements] : new ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoStandAloneMuonCandidategRcOrecocLcLRecoStandAloneMuonCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > : new ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements] : new ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLFitQualitygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::FitQuality> : new ::edm::ValueMap<reco::FitQuality>;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLFitQualitygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::FitQuality>[nElements] : new ::edm::ValueMap<reco::FitQuality>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLFitQualitygR(void *p) {
      delete ((::edm::ValueMap<reco::FitQuality>*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLFitQualitygR(void *p) {
      delete [] ((::edm::ValueMap<reco::FitQuality>*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLFitQualitygR(void *p) {
      typedef ::edm::ValueMap<reco::FitQuality> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::FitQuality>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLIsoDepositgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::IsoDeposit> : new ::edm::ValueMap<reco::IsoDeposit>;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLIsoDepositgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::IsoDeposit>[nElements] : new ::edm::ValueMap<reco::IsoDeposit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLIsoDepositgR(void *p) {
      delete ((::edm::ValueMap<reco::IsoDeposit>*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLIsoDepositgR(void *p) {
      delete [] ((::edm::ValueMap<reco::IsoDeposit>*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLIsoDepositgR(void *p) {
      typedef ::edm::ValueMap<reco::IsoDeposit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::IsoDeposit>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::IsoDeposit>::const_iterator : new ::edm::ValueMap<reco::IsoDeposit>::const_iterator;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::IsoDeposit>::const_iterator[nElements] : new ::edm::ValueMap<reco::IsoDeposit>::const_iterator[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator(void *p) {
      delete ((::edm::ValueMap<reco::IsoDeposit>::const_iterator*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator(void *p) {
      delete [] ((::edm::ValueMap<reco::IsoDeposit>::const_iterator*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLIsoDepositgRcLcLconst_iterator(void *p) {
      typedef ::edm::ValueMap<reco::IsoDeposit>::const_iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::IsoDeposit>::const_iterator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_recocLcLRecoCandidate(void *p) {
      delete ((::reco::RecoCandidate*)p);
   }
   static void deleteArray_recocLcLRecoCandidate(void *p) {
      delete [] ((::reco::RecoCandidate*)p);
   }
   static void destruct_recocLcLRecoCandidate(void *p) {
      typedef ::reco::RecoCandidate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::RecoCandidate

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLRecoChargedCandidate(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::RecoChargedCandidate : new ::reco::RecoChargedCandidate;
   }
   static void *newArray_recocLcLRecoChargedCandidate(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::RecoChargedCandidate[nElements] : new ::reco::RecoChargedCandidate[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLRecoChargedCandidate(void *p) {
      delete ((::reco::RecoChargedCandidate*)p);
   }
   static void deleteArray_recocLcLRecoChargedCandidate(void *p) {
      delete [] ((::reco::RecoChargedCandidate*)p);
   }
   static void destruct_recocLcLRecoChargedCandidate(void *p) {
      typedef ::reco::RecoChargedCandidate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::RecoChargedCandidate

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLRecoChargedRefCandidate(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::RecoChargedRefCandidate : new ::reco::RecoChargedRefCandidate;
   }
   static void *newArray_recocLcLRecoChargedRefCandidate(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::RecoChargedRefCandidate[nElements] : new ::reco::RecoChargedRefCandidate[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLRecoChargedRefCandidate(void *p) {
      delete ((::reco::RecoChargedRefCandidate*)p);
   }
   static void deleteArray_recocLcLRecoChargedRefCandidate(void *p) {
      delete [] ((::reco::RecoChargedRefCandidate*)p);
   }
   static void destruct_recocLcLRecoChargedRefCandidate(void *p) {
      typedef ::reco::RecoChargedRefCandidate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::RecoChargedRefCandidate

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > > : new ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >[nElements] : new ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR(void *p) {
      delete ((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRsPgRsPgR(void *p) {
      typedef ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > > : new ::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >[nElements] : new ::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete ((::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      typedef ::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > > : new ::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >[nElements] : new ::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete ((::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      typedef ::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > : new ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoChargedCandidategRcOfloatcOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > : new ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLRecoEcalCandidategRcOfloatcOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > : new ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >[nElements] : new ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEvectorlETrackingParticlegRcOedmcLcLViewlErecocLcLTrackgRcOdoublecOunsignedsPintcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRsPgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > : new ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >[nElements] : new ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualityGenericlEedmcLcLViewlErecocLcLTrackgRcOvectorlETrackingParticlegRcOdoublecOunsignedsPintcOedmcLcLRefToBaseProdlErecocLcLTrackgRcOedmcLcLRefProdlEvectorlETrackingParticlegRsPgRcOedmcLcLRefToBaselErecocLcLTrackgRcOedmcLcLReflEvectorlETrackingParticlegRcOTrackingParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlETrackingParticlegRcOTrackingParticlegRsPgRsPgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > : new ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOedmcLcLOwnVectorlErecocLcLCandidatecOedmcLcLClonePolicylErecocLcLCandidategRsPgRcOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLRecoEcalCandidate(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::RecoEcalCandidate : new ::reco::RecoEcalCandidate;
   }
   static void *newArray_recocLcLRecoEcalCandidate(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::RecoEcalCandidate[nElements] : new ::reco::RecoEcalCandidate[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLRecoEcalCandidate(void *p) {
      delete ((::reco::RecoEcalCandidate*)p);
   }
   static void deleteArray_recocLcLRecoEcalCandidate(void *p) {
      delete [] ((::reco::RecoEcalCandidate*)p);
   }
   static void destruct_recocLcLRecoEcalCandidate(void *p) {
      typedef ::reco::RecoEcalCandidate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::RecoEcalCandidate

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLRecoCaloTowerCandidate(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::RecoCaloTowerCandidate : new ::reco::RecoCaloTowerCandidate;
   }
   static void *newArray_recocLcLRecoCaloTowerCandidate(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::RecoCaloTowerCandidate[nElements] : new ::reco::RecoCaloTowerCandidate[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLRecoCaloTowerCandidate(void *p) {
      delete ((::reco::RecoCaloTowerCandidate*)p);
   }
   static void deleteArray_recocLcLRecoCaloTowerCandidate(void *p) {
      delete [] ((::reco::RecoCaloTowerCandidate*)p);
   }
   static void destruct_recocLcLRecoCaloTowerCandidate(void *p) {
      typedef ::reco::RecoCaloTowerCandidate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::RecoCaloTowerCandidate

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLFitQuality(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::FitQuality : new ::reco::FitQuality;
   }
   static void *newArray_recocLcLFitQuality(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::FitQuality[nElements] : new ::reco::FitQuality[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLFitQuality(void *p) {
      delete ((::reco::FitQuality*)p);
   }
   static void deleteArray_recocLcLFitQuality(void *p) {
      delete [] ((::reco::FitQuality*)p);
   }
   static void destruct_recocLcLFitQuality(void *p) {
      typedef ::reco::FitQuality current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::FitQuality

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLCaloRecHitCandidate(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloRecHitCandidate : new ::reco::CaloRecHitCandidate;
   }
   static void *newArray_recocLcLCaloRecHitCandidate(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloRecHitCandidate[nElements] : new ::reco::CaloRecHitCandidate[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLCaloRecHitCandidate(void *p) {
      delete ((::reco::CaloRecHitCandidate*)p);
   }
   static void deleteArray_recocLcLCaloRecHitCandidate(void *p) {
      delete [] ((::reco::CaloRecHitCandidate*)p);
   }
   static void destruct_recocLcLCaloRecHitCandidate(void *p) {
      typedef ::reco::CaloRecHitCandidate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::CaloRecHitCandidate

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLisodepositcLcLDirection(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::isodeposit::Direction : new ::reco::isodeposit::Direction;
   }
   static void *newArray_recocLcLisodepositcLcLDirection(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::isodeposit::Direction[nElements] : new ::reco::isodeposit::Direction[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLisodepositcLcLDirection(void *p) {
      delete ((::reco::isodeposit::Direction*)p);
   }
   static void deleteArray_recocLcLisodepositcLcLDirection(void *p) {
      delete [] ((::reco::isodeposit::Direction*)p);
   }
   static void destruct_recocLcLisodepositcLcLDirection(void *p) {
      typedef ::reco::isodeposit::Direction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::isodeposit::Direction

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLisodepositcLcLDirectioncLcLDistance(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::isodeposit::Direction::Distance : new ::reco::isodeposit::Direction::Distance;
   }
   static void *newArray_recocLcLisodepositcLcLDirectioncLcLDistance(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::isodeposit::Direction::Distance[nElements] : new ::reco::isodeposit::Direction::Distance[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLisodepositcLcLDirectioncLcLDistance(void *p) {
      delete ((::reco::isodeposit::Direction::Distance*)p);
   }
   static void deleteArray_recocLcLisodepositcLcLDirectioncLcLDistance(void *p) {
      delete [] ((::reco::isodeposit::Direction::Distance*)p);
   }
   static void destruct_recocLcLisodepositcLcLDirectioncLcLDistance(void *p) {
      typedef ::reco::isodeposit::Direction::Distance current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::isodeposit::Direction::Distance

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLIsoDeposit(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::IsoDeposit : new ::reco::IsoDeposit;
   }
   static void *newArray_recocLcLIsoDeposit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::IsoDeposit[nElements] : new ::reco::IsoDeposit[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLIsoDeposit(void *p) {
      delete ((::reco::IsoDeposit*)p);
   }
   static void deleteArray_recocLcLIsoDeposit(void *p) {
      delete [] ((::reco::IsoDeposit*)p);
   }
   static void destruct_recocLcLIsoDeposit(void *p) {
      typedef ::reco::IsoDeposit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::IsoDeposit

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLIsoDepositcLcLVeto(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::IsoDeposit::Veto : new ::reco::IsoDeposit::Veto;
   }
   static void *newArray_recocLcLIsoDepositcLcLVeto(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::IsoDeposit::Veto[nElements] : new ::reco::IsoDeposit::Veto[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLIsoDepositcLcLVeto(void *p) {
      delete ((::reco::IsoDeposit::Veto*)p);
   }
   static void deleteArray_recocLcLIsoDepositcLcLVeto(void *p) {
      delete [] ((::reco::IsoDeposit::Veto*)p);
   }
   static void destruct_recocLcLIsoDepositcLcLVeto(void *p) {
      typedef ::reco::IsoDeposit::Veto current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::IsoDeposit::Veto

namespace ROOT {
   // Wrapper around operator delete
   static void delete_recocLcLIsoDepositcLcLconst_iterator(void *p) {
      delete ((::reco::IsoDeposit::const_iterator*)p);
   }
   static void deleteArray_recocLcLIsoDepositcLcLconst_iterator(void *p) {
      delete [] ((::reco::IsoDeposit::const_iterator*)p);
   }
   static void destruct_recocLcLIsoDepositcLcLconst_iterator(void *p) {
      typedef ::reco::IsoDeposit::const_iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::IsoDeposit::const_iterator

namespace ROOT {
   static TClass *vectorlErecocLcLRecoEcalCandidategR_Dictionary();
   static void vectorlErecocLcLRecoEcalCandidategR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLRecoEcalCandidategR(void *p = 0);
   static void *newArray_vectorlErecocLcLRecoEcalCandidategR(Long_t size, void *p);
   static void delete_vectorlErecocLcLRecoEcalCandidategR(void *p);
   static void deleteArray_vectorlErecocLcLRecoEcalCandidategR(void *p);
   static void destruct_vectorlErecocLcLRecoEcalCandidategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::RecoEcalCandidate>*)
   {
      vector<reco::RecoEcalCandidate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::RecoEcalCandidate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::RecoEcalCandidate>", -2, "vector", 216,
                  typeid(vector<reco::RecoEcalCandidate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLRecoEcalCandidategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::RecoEcalCandidate>) );
      instance.SetNew(&new_vectorlErecocLcLRecoEcalCandidategR);
      instance.SetNewArray(&newArray_vectorlErecocLcLRecoEcalCandidategR);
      instance.SetDelete(&delete_vectorlErecocLcLRecoEcalCandidategR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLRecoEcalCandidategR);
      instance.SetDestructor(&destruct_vectorlErecocLcLRecoEcalCandidategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::RecoEcalCandidate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::RecoEcalCandidate>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLRecoEcalCandidategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::RecoEcalCandidate>*)0x0)->GetClass();
      vectorlErecocLcLRecoEcalCandidategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLRecoEcalCandidategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLRecoEcalCandidategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::RecoEcalCandidate> : new vector<reco::RecoEcalCandidate>;
   }
   static void *newArray_vectorlErecocLcLRecoEcalCandidategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::RecoEcalCandidate>[nElements] : new vector<reco::RecoEcalCandidate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLRecoEcalCandidategR(void *p) {
      delete ((vector<reco::RecoEcalCandidate>*)p);
   }
   static void deleteArray_vectorlErecocLcLRecoEcalCandidategR(void *p) {
      delete [] ((vector<reco::RecoEcalCandidate>*)p);
   }
   static void destruct_vectorlErecocLcLRecoEcalCandidategR(void *p) {
      typedef vector<reco::RecoEcalCandidate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::RecoEcalCandidate>

namespace ROOT {
   static TClass *vectorlErecocLcLRecoChargedRefCandidategR_Dictionary();
   static void vectorlErecocLcLRecoChargedRefCandidategR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLRecoChargedRefCandidategR(void *p = 0);
   static void *newArray_vectorlErecocLcLRecoChargedRefCandidategR(Long_t size, void *p);
   static void delete_vectorlErecocLcLRecoChargedRefCandidategR(void *p);
   static void deleteArray_vectorlErecocLcLRecoChargedRefCandidategR(void *p);
   static void destruct_vectorlErecocLcLRecoChargedRefCandidategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::RecoChargedRefCandidate>*)
   {
      vector<reco::RecoChargedRefCandidate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::RecoChargedRefCandidate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::RecoChargedRefCandidate>", -2, "vector", 216,
                  typeid(vector<reco::RecoChargedRefCandidate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLRecoChargedRefCandidategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::RecoChargedRefCandidate>) );
      instance.SetNew(&new_vectorlErecocLcLRecoChargedRefCandidategR);
      instance.SetNewArray(&newArray_vectorlErecocLcLRecoChargedRefCandidategR);
      instance.SetDelete(&delete_vectorlErecocLcLRecoChargedRefCandidategR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLRecoChargedRefCandidategR);
      instance.SetDestructor(&destruct_vectorlErecocLcLRecoChargedRefCandidategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::RecoChargedRefCandidate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::RecoChargedRefCandidate>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLRecoChargedRefCandidategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::RecoChargedRefCandidate>*)0x0)->GetClass();
      vectorlErecocLcLRecoChargedRefCandidategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLRecoChargedRefCandidategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLRecoChargedRefCandidategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::RecoChargedRefCandidate> : new vector<reco::RecoChargedRefCandidate>;
   }
   static void *newArray_vectorlErecocLcLRecoChargedRefCandidategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::RecoChargedRefCandidate>[nElements] : new vector<reco::RecoChargedRefCandidate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLRecoChargedRefCandidategR(void *p) {
      delete ((vector<reco::RecoChargedRefCandidate>*)p);
   }
   static void deleteArray_vectorlErecocLcLRecoChargedRefCandidategR(void *p) {
      delete [] ((vector<reco::RecoChargedRefCandidate>*)p);
   }
   static void destruct_vectorlErecocLcLRecoChargedRefCandidategR(void *p) {
      typedef vector<reco::RecoChargedRefCandidate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::RecoChargedRefCandidate>

namespace ROOT {
   static TClass *vectorlErecocLcLRecoChargedCandidategR_Dictionary();
   static void vectorlErecocLcLRecoChargedCandidategR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLRecoChargedCandidategR(void *p = 0);
   static void *newArray_vectorlErecocLcLRecoChargedCandidategR(Long_t size, void *p);
   static void delete_vectorlErecocLcLRecoChargedCandidategR(void *p);
   static void deleteArray_vectorlErecocLcLRecoChargedCandidategR(void *p);
   static void destruct_vectorlErecocLcLRecoChargedCandidategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::RecoChargedCandidate>*)
   {
      vector<reco::RecoChargedCandidate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::RecoChargedCandidate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::RecoChargedCandidate>", -2, "vector", 216,
                  typeid(vector<reco::RecoChargedCandidate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLRecoChargedCandidategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::RecoChargedCandidate>) );
      instance.SetNew(&new_vectorlErecocLcLRecoChargedCandidategR);
      instance.SetNewArray(&newArray_vectorlErecocLcLRecoChargedCandidategR);
      instance.SetDelete(&delete_vectorlErecocLcLRecoChargedCandidategR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLRecoChargedCandidategR);
      instance.SetDestructor(&destruct_vectorlErecocLcLRecoChargedCandidategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::RecoChargedCandidate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::RecoChargedCandidate>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLRecoChargedCandidategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::RecoChargedCandidate>*)0x0)->GetClass();
      vectorlErecocLcLRecoChargedCandidategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLRecoChargedCandidategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLRecoChargedCandidategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::RecoChargedCandidate> : new vector<reco::RecoChargedCandidate>;
   }
   static void *newArray_vectorlErecocLcLRecoChargedCandidategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::RecoChargedCandidate>[nElements] : new vector<reco::RecoChargedCandidate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLRecoChargedCandidategR(void *p) {
      delete ((vector<reco::RecoChargedCandidate>*)p);
   }
   static void deleteArray_vectorlErecocLcLRecoChargedCandidategR(void *p) {
      delete [] ((vector<reco::RecoChargedCandidate>*)p);
   }
   static void destruct_vectorlErecocLcLRecoChargedCandidategR(void *p) {
      typedef vector<reco::RecoChargedCandidate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::RecoChargedCandidate>

namespace ROOT {
   static TClass *vectorlErecocLcLRecoCandidatemUgR_Dictionary();
   static void vectorlErecocLcLRecoCandidatemUgR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLRecoCandidatemUgR(void *p = 0);
   static void *newArray_vectorlErecocLcLRecoCandidatemUgR(Long_t size, void *p);
   static void delete_vectorlErecocLcLRecoCandidatemUgR(void *p);
   static void deleteArray_vectorlErecocLcLRecoCandidatemUgR(void *p);
   static void destruct_vectorlErecocLcLRecoCandidatemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::RecoCandidate*>*)
   {
      vector<reco::RecoCandidate*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::RecoCandidate*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::RecoCandidate*>", -2, "vector", 216,
                  typeid(vector<reco::RecoCandidate*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLRecoCandidatemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::RecoCandidate*>) );
      instance.SetNew(&new_vectorlErecocLcLRecoCandidatemUgR);
      instance.SetNewArray(&newArray_vectorlErecocLcLRecoCandidatemUgR);
      instance.SetDelete(&delete_vectorlErecocLcLRecoCandidatemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLRecoCandidatemUgR);
      instance.SetDestructor(&destruct_vectorlErecocLcLRecoCandidatemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::RecoCandidate*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::RecoCandidate*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLRecoCandidatemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::RecoCandidate*>*)0x0)->GetClass();
      vectorlErecocLcLRecoCandidatemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLRecoCandidatemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLRecoCandidatemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::RecoCandidate*> : new vector<reco::RecoCandidate*>;
   }
   static void *newArray_vectorlErecocLcLRecoCandidatemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::RecoCandidate*>[nElements] : new vector<reco::RecoCandidate*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLRecoCandidatemUgR(void *p) {
      delete ((vector<reco::RecoCandidate*>*)p);
   }
   static void deleteArray_vectorlErecocLcLRecoCandidatemUgR(void *p) {
      delete [] ((vector<reco::RecoCandidate*>*)p);
   }
   static void destruct_vectorlErecocLcLRecoCandidatemUgR(void *p) {
      typedef vector<reco::RecoCandidate*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::RecoCandidate*>

namespace ROOT {
   static TClass *vectorlErecocLcLIsoDepositgR_Dictionary();
   static void vectorlErecocLcLIsoDepositgR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLIsoDepositgR(void *p = 0);
   static void *newArray_vectorlErecocLcLIsoDepositgR(Long_t size, void *p);
   static void delete_vectorlErecocLcLIsoDepositgR(void *p);
   static void deleteArray_vectorlErecocLcLIsoDepositgR(void *p);
   static void destruct_vectorlErecocLcLIsoDepositgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::IsoDeposit>*)
   {
      vector<reco::IsoDeposit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::IsoDeposit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::IsoDeposit>", -2, "vector", 216,
                  typeid(vector<reco::IsoDeposit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLIsoDepositgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::IsoDeposit>) );
      instance.SetNew(&new_vectorlErecocLcLIsoDepositgR);
      instance.SetNewArray(&newArray_vectorlErecocLcLIsoDepositgR);
      instance.SetDelete(&delete_vectorlErecocLcLIsoDepositgR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLIsoDepositgR);
      instance.SetDestructor(&destruct_vectorlErecocLcLIsoDepositgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::IsoDeposit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::IsoDeposit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLIsoDepositgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::IsoDeposit>*)0x0)->GetClass();
      vectorlErecocLcLIsoDepositgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLIsoDepositgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLIsoDepositgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::IsoDeposit> : new vector<reco::IsoDeposit>;
   }
   static void *newArray_vectorlErecocLcLIsoDepositgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::IsoDeposit>[nElements] : new vector<reco::IsoDeposit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLIsoDepositgR(void *p) {
      delete ((vector<reco::IsoDeposit>*)p);
   }
   static void deleteArray_vectorlErecocLcLIsoDepositgR(void *p) {
      delete [] ((vector<reco::IsoDeposit>*)p);
   }
   static void destruct_vectorlErecocLcLIsoDepositgR(void *p) {
      typedef vector<reco::IsoDeposit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::IsoDeposit>

namespace ROOT {
   static TClass *vectorlErecocLcLFitQualitygR_Dictionary();
   static void vectorlErecocLcLFitQualitygR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLFitQualitygR(void *p = 0);
   static void *newArray_vectorlErecocLcLFitQualitygR(Long_t size, void *p);
   static void delete_vectorlErecocLcLFitQualitygR(void *p);
   static void deleteArray_vectorlErecocLcLFitQualitygR(void *p);
   static void destruct_vectorlErecocLcLFitQualitygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::FitQuality>*)
   {
      vector<reco::FitQuality> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::FitQuality>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::FitQuality>", -2, "vector", 216,
                  typeid(vector<reco::FitQuality>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLFitQualitygR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::FitQuality>) );
      instance.SetNew(&new_vectorlErecocLcLFitQualitygR);
      instance.SetNewArray(&newArray_vectorlErecocLcLFitQualitygR);
      instance.SetDelete(&delete_vectorlErecocLcLFitQualitygR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLFitQualitygR);
      instance.SetDestructor(&destruct_vectorlErecocLcLFitQualitygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::FitQuality> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::FitQuality>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLFitQualitygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::FitQuality>*)0x0)->GetClass();
      vectorlErecocLcLFitQualitygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLFitQualitygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLFitQualitygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::FitQuality> : new vector<reco::FitQuality>;
   }
   static void *newArray_vectorlErecocLcLFitQualitygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::FitQuality>[nElements] : new vector<reco::FitQuality>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLFitQualitygR(void *p) {
      delete ((vector<reco::FitQuality>*)p);
   }
   static void deleteArray_vectorlErecocLcLFitQualitygR(void *p) {
      delete [] ((vector<reco::FitQuality>*)p);
   }
   static void destruct_vectorlErecocLcLFitQualitygR(void *p) {
      typedef vector<reco::FitQuality> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::FitQuality>

namespace ROOT {
   static TClass *multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR_Dictionary();
   static void multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR_TClassManip(TClass*);
   static void *new_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR(void *p = 0);
   static void *newArray_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR(Long_t size, void *p);
   static void delete_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR(void *p);
   static void deleteArray_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR(void *p);
   static void destruct_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<reco::isodeposit::Direction::Distance,float>*)
   {
      multimap<reco::isodeposit::Direction::Distance,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<reco::isodeposit::Direction::Distance,float>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<reco::isodeposit::Direction::Distance,float>", -2, "map", 98,
                  typeid(multimap<reco::isodeposit::Direction::Distance,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<reco::isodeposit::Direction::Distance,float>) );
      instance.SetNew(&new_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR);
      instance.SetNewArray(&newArray_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR);
      instance.SetDelete(&delete_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR);
      instance.SetDeleteArray(&deleteArray_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR);
      instance.SetDestructor(&destruct_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<reco::isodeposit::Direction::Distance,float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<reco::isodeposit::Direction::Distance,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<reco::isodeposit::Direction::Distance,float>*)0x0)->GetClass();
      multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<reco::isodeposit::Direction::Distance,float> : new multimap<reco::isodeposit::Direction::Distance,float>;
   }
   static void *newArray_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<reco::isodeposit::Direction::Distance,float>[nElements] : new multimap<reco::isodeposit::Direction::Distance,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR(void *p) {
      delete ((multimap<reco::isodeposit::Direction::Distance,float>*)p);
   }
   static void deleteArray_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR(void *p) {
      delete [] ((multimap<reco::isodeposit::Direction::Distance,float>*)p);
   }
   static void destruct_multimaplErecocLcLisodepositcLcLDirectioncLcLDistancecOfloatgR(void *p) {
      typedef multimap<reco::isodeposit::Direction::Distance,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<reco::isodeposit::Direction::Distance,float>

namespace {
  void TriggerDictionaryInitialization_DataFormatsRecoCandidate_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/afs/cern.ch/work/s/sanayak/public/DisplacedMuonRun3_Samar_New_OCT2021_GlobalTrackingTools/CMSSW_10_2_18/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/cms/cmssw/CMSSW_10_2_18/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/lcg/root/6.12.07-gnimlf5/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/pcre/8.37-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/boost/1.63.0-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/bz2lib/1.0.6-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/clhep/2.4.0.0-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/gsl/2.2.1-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/hepmc/2.06.07-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/libuuid/2.22.2-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/tbb/2018_U1-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/xz/5.2.2-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/zlib-x86_64/1.2.11-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/md5/1.0.0-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/tinyxml/2.5.3-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/lcg/root/6.12.07-gnimlf5/include",
"/afs/cern.ch/work/s/sanayak/public/DisplacedMuonRun3_Samar_New_OCT2021_GlobalTrackingTools/CMSSW_10_2_18/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DataFormatsRecoCandidate_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/IsoDeposit.h")))  IsoDeposit;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoChargedCandidate.h")))  RecoChargedCandidate;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoChargedRefCandidate.h")))  RecoChargedRefCandidate;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoEcalCandidate.h")))  RecoEcalCandidate;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/FitQuality.h")))  __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/FitResult.h")))  FitQuality;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoCandidate.h")))  RecoCandidate;}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoCandidate.h")))  FindUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename REFV> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoCandidate.h")))  FindRefVectorUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoCandidate.h")))  FindTrait;
}}
namespace edm{namespace refhelper{template <typename C> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoCandidate.h")))  ValueTrait;
}}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/ValueMap.h")))  __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoCandidate.h")))  ValueMap;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoChargedRefCandidate.h")))  Track;}
class __attribute__((annotate("$clingAutoload$SimDataFormats/TrackingAnalysis/interface/TrackingParticle.h")))  __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/TrackAssociation.h")))  TrackingParticle;
namespace edm{template <typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/ClonePolicy.h")))  __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoCandidate.h")))  ClonePolicy;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/Candidate/interface/Candidate.h")))  __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoCandidate.h")))  Candidate;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoStandAloneMuonCandidate.h")))  RecoStandAloneMuonCandidate;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/RecoCaloTowerCandidate.h")))  RecoCaloTowerCandidate;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/CaloRecHitCandidate.h")))  CaloRecHitCandidate;}
namespace reco{namespace isodeposit{class __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/IsoDepositDirection.h")))  __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/IsoDeposit.h")))  Direction;}}
namespace reco{typedef edm::ValueMap<FitQuality> FitResultCollection __attribute__((annotate("$clingAutoload$DataFormats/RecoCandidate/interface/FitResult.h"))) ;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsRecoCandidate_xr dictionary payload"

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
#include "Rtypes.h" 
#include "Math/Cartesian3D.h" 
#include "Math/Polar3D.h" 
#include "Math/CylindricalEta3D.h" 
#include "Math/PxPyPzE4D.h" 
#include <boost/cstdint.hpp> 
#include "DataFormats/RecoCandidate/interface/RecoCandidate.h"
#include "DataFormats/RecoCandidate/interface/RecoChargedCandidate.h"
#include "DataFormats/RecoCandidate/interface/RecoChargedRefCandidate.h"
#include "DataFormats/RecoCandidate/interface/RecoChargedCandidateFwd.h" 
#include "DataFormats/RecoCandidate/interface/RecoChargedCandidateIsolation.h" 
#include "DataFormats/RecoCandidate/interface/RecoChargedRefCandidateFwd.h" 
#include "DataFormats/RecoCandidate/interface/RecoStandAloneMuonCandidate.h"
#include "DataFormats/RecoCandidate/interface/RecoStandAloneMuonCandidateFwd.h"
#include "DataFormats/RecoCandidate/interface/RecoEcalCandidate.h"
#include "DataFormats/RecoCandidate/interface/RecoEcalCandidateFwd.h" 
#include "DataFormats/RecoCandidate/interface/RecoCaloTowerCandidate.h"
#include "DataFormats/RecoCandidate/interface/RecoEcalCandidateIsolation.h"
#include "DataFormats/RecoCandidate/interface/FitResult.h"
#include "DataFormats/RecoCandidate/interface/CaloRecHitCandidate.h"
#include "DataFormats/RecoCandidate/interface/TrackAssociation.h"
#include "DataFormats/HcalRecHit/interface/HcalRecHitCollections.h"
#include "DataFormats/RecoCandidate/interface/TrackCandidateAssociation.h"
#include "DataFormats/HcalDetId/interface/HcalSubdetector.h" 
#include "DataFormats/HcalRecHit/interface/HcalRecHitDefs.h" 
#include "DataFormats/EcalRecHit/interface/EcalRecHitCollections.h"
#include "DataFormats/Common/interface/RefProd.h" 
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/RefToBase.h"
#include "DataFormats/Common/interface/Ref.h"
#include "DataFormats/Common/interface/RefVector.h"
#include "DataFormats/Common/interface/AssociationMap.h"
#include "DataFormats/Common/interface/OneToValue.h"
#include "DataFormats/Common/interface/OneToManyWithQuality.h"
#include "DataFormats/Common/interface/OneToManyWithQualityGeneric.h"
#include "DataFormats/Common/interface/OwnVector.h"

#include "DataFormats/RecoCandidate/interface/IsoDeposit.h"
#include "DataFormats/RecoCandidate/interface/IsoDepositFwd.h"


namespace DataFormats_RecoCandidate {

  struct dictionary {
    reco::RecoChargedCandidateCollection v1;
    edm::Wrapper<reco::RecoChargedCandidateCollection> w1;
    edm::Ref<reco::RecoChargedCandidateCollection> r1;
    edm::RefProd<reco::RecoChargedCandidateCollection> rp1;
    edm::RefVector<reco::RecoChargedCandidateCollection> rv1;

    reco::RecoChargedRefCandidateCollection vr1;
    edm::Wrapper<reco::RecoChargedRefCandidateCollection> wr1;
    edm::Ref<reco::RecoChargedRefCandidateCollection> rr1;
    edm::RefProd<reco::RecoChargedRefCandidateCollection> rpr1;
    edm::RefVector<reco::RecoChargedRefCandidateCollection> rvr1;

    reco::RecoChargedCandidateIsolationMap vrm3;
    edm::Wrapper<reco::RecoChargedCandidateIsolationMap> wrm3;
    edm::helpers::Key<edm::RefProd<reco::RecoChargedCandidateCollection > > hrm3;

    reco::RecoEcalCandidateCollection v2;
    edm::Wrapper<reco::RecoEcalCandidateCollection> w2;
    edm::Ref<reco::RecoEcalCandidateCollection> r2;
    edm::RefProd<reco::RecoEcalCandidateCollection> rp2;
    edm::RefVector<reco::RecoEcalCandidateCollection> rv2;

    reco::RecoEcalCandidateIsolationMap v3;
    edm::Wrapper<reco::RecoEcalCandidateIsolationMap> w3;
    edm::helpers::Key<edm::RefProd<reco::RecoEcalCandidateCollection > > h3;

    reco::RecoStandAloneMuonCandidateCollection v4;
    edm::Wrapper<reco::RecoStandAloneMuonCandidateCollection> w4;
    edm::Ref<reco::RecoStandAloneMuonCandidateCollection> r4;
    edm::RefProd<reco::RecoStandAloneMuonCandidateCollection> rp4;
    edm::RefVector<reco::RecoStandAloneMuonCandidateCollection> rv4;

    edm::reftobase::Holder<reco::Candidate, reco::RecoEcalCandidateRef> rb1;
    edm::reftobase::Holder<reco::Candidate, reco::RecoChargedCandidateRef> rb2;
/*     edm::reftobase::Holder<reco::Candidate, reco::RecoChargedRefCandidateBaseRef> rb3; */
    edm::reftobase::Holder<reco::Candidate, reco::RecoChargedRefCandidateRef> rb4;

    edm::Wrapper<reco::FitResultCollection> wfr1;
    edm::Wrapper<reco::TrackCandidateAssociation> tca1;

    reco::SimToRecoCollection ii3;
    reco::SimToRecoCollection::const_iterator itii3;
    edm::Wrapper<reco::SimToRecoCollection > ii2;

    reco::RecoToSimCollection jj3;
    reco::RecoToSimCollection::const_iterator  itjj3;
    edm::Wrapper<reco::RecoToSimCollection > jj2;
      
    edm::reftobase::Holder<reco::Candidate, reco::RecoChargedCandidateRef> rbc1;
    edm::reftobase::RefHolder<reco::RecoChargedCandidateRef> rbc2;
    edm::reftobase::VectorHolder<reco::Candidate, reco::RecoChargedCandidateRefVector> rbc3;
    edm::reftobase::RefVectorHolder<reco::RecoChargedCandidateRefVector> rbc4;

    edm::reftobase::Holder<reco::Candidate, reco::RecoChargedRefCandidateRef> rbcr1;
    edm::reftobase::RefHolder<reco::RecoChargedRefCandidateRef> rbcr2;
    edm::reftobase::VectorHolder<reco::Candidate, reco::RecoChargedRefCandidateRefVector> rbcr3;
    edm::reftobase::RefVectorHolder<reco::RecoChargedRefCandidateRefVector> rbcr4;

/*     edm::reftobase::Holder<reco::Candidate, reco::RecoChargedRefCandidateBaseRef> rbcrb1; */
/*     edm::reftobase::RefHolder<reco::RecoChargedRefCandidateBaseRef> rbcrb2; */
/*     edm::reftobase::VectorHolder<reco::Candidate, reco::RecoChargedRefCandidateBaseRefVector> rbcrb3; */
/*     edm::reftobase::RefVectorHolder<reco::RecoChargedRefCandidateBaseRefVector> rbcrb4; */

          
    edm::reftobase::Holder<reco::Candidate, reco::RecoStandAloneMuonCandidateRef> rbsa1;
    edm::reftobase::RefHolder<reco::RecoStandAloneMuonCandidateRef> rbsa2;
    edm::reftobase::VectorHolder<reco::Candidate, reco::RecoStandAloneMuonCandidateRefVector> rbsa3;
    edm::reftobase::RefVectorHolder<reco::RecoStandAloneMuonCandidateRefVector> rbsa4;
          
    edm::reftobase::Holder<reco::Candidate, reco::RecoEcalCandidateRef> rbe1;
    edm::reftobase::RefHolder<reco::RecoEcalCandidateRef> rbe2;
    edm::reftobase::VectorHolder<reco::Candidate, reco::RecoEcalCandidateRefVector> rbe3;
    edm::reftobase::RefVectorHolder<reco::RecoEcalCandidateRefVector> rbe4;


    std::multimap<reco::isodeposit::Direction::Distance,float> mumdf1;
    reco::IsoDeposit isod1;
    std::vector<reco::IsoDeposit> visod1;
    reco::IsoDepositMap idvm;
    reco::IsoDepositMap::const_iterator idvmci;
    edm::Wrapper<reco::IsoDepositMap> w_idvm;
    
    edm::Wrapper<edm::RefVector<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > tpaaa;

    edm::Wrapper<edm::RefVector<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > > tpaaa2;

/*     edm::Wrapper<edm::RefVector<std::vector<reco::RecoChargedRefCandidateBase>,reco::RecoChargedRefCandidateBase,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedRefCandidateBase>,reco::RecoChargedRefCandidateBase> > > tpaaa3; */

    edm::Wrapper<edm::OwnVector<reco::RecoCandidate> > wovrc;

  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const reco::IsoDeposit*,vector<reco::IsoDeposit> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > >", payloadCode, "@",
"edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > >", payloadCode, "@",
"edm::AssociationMap<edm::OneToOne<std::vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<std::vector<reco::RecoChargedCandidate>,float,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<std::vector<reco::RecoEcalCandidate>,float,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> >", payloadCode, "@",
"edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> >", payloadCode, "@",
"edm::Ref<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >", payloadCode, "@",
"edm::Ref<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >", payloadCode, "@",
"edm::Ref<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >", payloadCode, "@",
"edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >", payloadCode, "@",
"edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >", payloadCode, "@",
"edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::RecoChargedCandidate> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::RecoChargedRefCandidate> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::RecoEcalCandidate> >", payloadCode, "@",
"edm::RefProd<vector<reco::RecoChargedCandidate> >", payloadCode, "@",
"edm::RefProd<vector<reco::RecoChargedRefCandidate> >", payloadCode, "@",
"edm::RefProd<vector<reco::RecoEcalCandidate> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >", payloadCode, "@",
"edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> >", payloadCode, "@",
"edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> >", payloadCode, "@",
"edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> >", payloadCode, "@",
"edm::ValueMap<reco::FitQuality>", payloadCode, "@",
"edm::ValueMap<reco::IsoDeposit>", payloadCode, "@",
"edm::ValueMap<reco::IsoDeposit>::const_iterator", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<edm::View<reco::Track>,vector<TrackingParticle>,double,unsigned int,edm::RefToBaseProd<reco::Track>,edm::RefProd<vector<TrackingParticle> >,edm::RefToBase<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> > > > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQualityGeneric<vector<TrackingParticle>,edm::View<reco::Track>,double,unsigned int,edm::RefProd<vector<TrackingParticle> >,edm::RefToBaseProd<reco::Track>,edm::Ref<vector<TrackingParticle>,TrackingParticle,edm::refhelper::FindUsingAdvance<vector<TrackingParticle>,TrackingParticle> >,edm::RefToBase<reco::Track> > > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> >,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoChargedCandidate>,float,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::RecoEcalCandidate>,float,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::OwnVector<reco::RecoCandidate,edm::ClonePolicy<reco::RecoCandidate> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<std::vector<reco::RecoEcalCandidate> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::FitQuality> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::IsoDeposit> >", payloadCode, "@",
"edm::Wrapper<reco::RecoToSimCollection>", payloadCode, "@",
"edm::Wrapper<reco::SimToRecoCollection>", payloadCode, "@",
"edm::Wrapper<std::vector<reco::RecoChargedCandidate> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::RecoChargedRefCandidate> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::RecoEcalCandidate> >", payloadCode, "@",
"edm::Wrapper<vector<reco::RecoChargedCandidate> >", payloadCode, "@",
"edm::Wrapper<vector<reco::RecoChargedRefCandidate> >", payloadCode, "@",
"edm::Wrapper<vector<reco::RecoEcalCandidate> >", payloadCode, "@",
"edm::helpers::Key<edm::RefProd<std::vector<reco::RecoChargedCandidate> > >", payloadCode, "@",
"edm::helpers::Key<edm::RefProd<std::vector<reco::RecoEcalCandidate> > >", payloadCode, "@",
"edm::helpers::Key<edm::RefProd<vector<reco::RecoChargedCandidate> > >", payloadCode, "@",
"edm::helpers::Key<edm::RefProd<vector<reco::RecoEcalCandidate> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<edm::OwnVector<reco::Candidate,edm::ClonePolicy<reco::Candidate> > > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,reco::RecoStandAloneMuonCandidateRef>", payloadCode, "@",
"edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", payloadCode, "@",
"edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", payloadCode, "@",
"edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", payloadCode, "@",
"edm::reftobase::RefHolder<edm::Ref<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >", payloadCode, "@",
"edm::reftobase::RefHolder<reco::RecoChargedCandidateRef>", payloadCode, "@",
"edm::reftobase::RefHolder<reco::RecoChargedRefCandidateRef>", payloadCode, "@",
"edm::reftobase::RefHolder<reco::RecoEcalCandidateRef>", payloadCode, "@",
"edm::reftobase::RefHolder<reco::RecoStandAloneMuonCandidateRef>", payloadCode, "@",
"edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", payloadCode, "@",
"edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", payloadCode, "@",
"edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", payloadCode, "@",
"edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >", payloadCode, "@",
"edm::reftobase::RefVectorHolder<reco::RecoChargedCandidateRefVector>", payloadCode, "@",
"edm::reftobase::RefVectorHolder<reco::RecoChargedRefCandidateRefVector>", payloadCode, "@",
"edm::reftobase::RefVectorHolder<reco::RecoEcalCandidateRefVector>", payloadCode, "@",
"edm::reftobase::RefVectorHolder<reco::RecoStandAloneMuonCandidateRefVector>", payloadCode, "@",
"edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", payloadCode, "@",
"edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedRefCandidate>,reco::RecoChargedRefCandidate> > >", payloadCode, "@",
"edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", payloadCode, "@",
"edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoStandAloneMuonCandidate>,reco::RecoStandAloneMuonCandidate> > >", payloadCode, "@",
"edm::reftobase::VectorHolder<reco::Candidate,reco::RecoChargedCandidateRefVector>", payloadCode, "@",
"edm::reftobase::VectorHolder<reco::Candidate,reco::RecoChargedRefCandidateRefVector>", payloadCode, "@",
"edm::reftobase::VectorHolder<reco::Candidate,reco::RecoEcalCandidateRefVector>", payloadCode, "@",
"edm::reftobase::VectorHolder<reco::Candidate,reco::RecoStandAloneMuonCandidateRefVector>", payloadCode, "@",
"reco::CaloRecHitCandidate", payloadCode, "@",
"reco::FitQuality", payloadCode, "@",
"reco::FitResultCollection", payloadCode, "@",
"reco::IsoDeposit", payloadCode, "@",
"reco::IsoDeposit::Veto", payloadCode, "@",
"reco::IsoDeposit::const_iterator", payloadCode, "@",
"reco::RecoCaloTowerCandidate", payloadCode, "@",
"reco::RecoCandidate", payloadCode, "@",
"reco::RecoChargedCandidate", payloadCode, "@",
"reco::RecoChargedRefCandidate", payloadCode, "@",
"reco::RecoEcalCandidate", payloadCode, "@",
"reco::RecoToSimCollection", payloadCode, "@",
"reco::SimToRecoCollection", payloadCode, "@",
"reco::isodeposit::Direction", payloadCode, "@",
"reco::isodeposit::Direction::Distance", payloadCode, "@",
"vector<reco::IsoDeposit>::const_iterator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsRecoCandidate_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsRecoCandidate_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsRecoCandidate_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsRecoCandidate_xr() {
  TriggerDictionaryInitialization_DataFormatsRecoCandidate_xr_Impl();
}
