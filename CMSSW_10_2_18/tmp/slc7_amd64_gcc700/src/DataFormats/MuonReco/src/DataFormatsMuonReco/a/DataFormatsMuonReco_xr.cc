// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc7_amd64_gcc700dIsrcdIDataFormatsdIMuonRecodIsrcdIDataFormatsMuonRecodIadIDataFormatsMuonReco_xr

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
#include "src/DataFormats/MuonReco/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >*)
   {
      ::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >", "string", 760,
                  typeid(::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >","vector<reco::MuonMETCorrectionData>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >*)
   {
      ::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >", "string", 760,
                  typeid(::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >","vector<reco::MuonQuality>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >*)
   {
      ::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >", "string", 760,
                  typeid(::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >","vector<reco::MuonCosmicCompatibility>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)
   {
      ::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >", "string", 760,
                  typeid(::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >","vector<reco::MuonRef>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >*)
   {
      ::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >", "string", 760,
                  typeid(::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >","vector<reco::MuonShower>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >*)
   {
      ::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >", "string", 760,
                  typeid(::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >","vector<reco::DYTInfo>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)
   {
      ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >", ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >","edm::Ref<std::vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<std::vector<reco::Muon>,reco::Muon> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >*)
   {
      ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >", ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >","edm::Ref<std::vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<std::vector<EmulatedME0Segment>,EmulatedME0Segment> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >*)
   {
      ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >", ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >","edm::Ref<std::vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<std::vector<reco::ME0Muon>,reco::ME0Muon> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)
   {
      ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >", ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >","edm::Ref<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefToBaselErecocLcLMuongR_Dictionary();
   static void edmcLcLRefToBaselErecocLcLMuongR_TClassManip(TClass*);
   static void *new_edmcLcLRefToBaselErecocLcLMuongR(void *p = 0);
   static void *newArray_edmcLcLRefToBaselErecocLcLMuongR(Long_t size, void *p);
   static void delete_edmcLcLRefToBaselErecocLcLMuongR(void *p);
   static void deleteArray_edmcLcLRefToBaselErecocLcLMuongR(void *p);
   static void destruct_edmcLcLRefToBaselErecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefToBase<reco::Muon>*)
   {
      ::edm::RefToBase<reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefToBase<reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefToBase<reco::Muon>", ::edm::RefToBase<reco::Muon>::Class_Version(), "DataFormats/Common/interface/RefToBase.h", 65,
                  typeid(::edm::RefToBase<reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefToBaselErecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefToBase<reco::Muon>) );
      instance.SetNew(&new_edmcLcLRefToBaselErecocLcLMuongR);
      instance.SetNewArray(&newArray_edmcLcLRefToBaselErecocLcLMuongR);
      instance.SetDelete(&delete_edmcLcLRefToBaselErecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefToBaselErecocLcLMuongR);
      instance.SetDestructor(&destruct_edmcLcLRefToBaselErecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefToBase<reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::edm::RefToBase<reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefToBase<reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefToBaselErecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefToBase<reco::Muon>*)0x0)->GetClass();
      edmcLcLRefToBaselErecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefToBaselErecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::Muon> >*)
   {
      ::edm::RefProd<vector<reco::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::Muon> >", ::edm::RefProd<vector<reco::Muon> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::Muon> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::Muon> >","edm::RefProd<std::vector<reco::Muon> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::Muon> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::MuonTrackLinks> >*)
   {
      ::edm::RefProd<vector<reco::MuonTrackLinks> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::MuonTrackLinks> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::MuonTrackLinks> >", ::edm::RefProd<vector<reco::MuonTrackLinks> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::MuonTrackLinks> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::MuonTrackLinks> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::MuonTrackLinks> >","edm::RefProd<std::vector<reco::MuonTrackLinks> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::MuonTrackLinks> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::MuonTrackLinks> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::MuonTrackLinks> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::MuonTrackLinks> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)
   {
      ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >", ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >","edm::RefVector<std::vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<std::vector<reco::Muon>,reco::Muon> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)
   {
      ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >", ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >","edm::RefVector<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefToBaseVectorlErecocLcLMuongR_Dictionary();
   static void edmcLcLRefToBaseVectorlErecocLcLMuongR_TClassManip(TClass*);
   static void *new_edmcLcLRefToBaseVectorlErecocLcLMuongR(void *p = 0);
   static void *newArray_edmcLcLRefToBaseVectorlErecocLcLMuongR(Long_t size, void *p);
   static void delete_edmcLcLRefToBaseVectorlErecocLcLMuongR(void *p);
   static void deleteArray_edmcLcLRefToBaseVectorlErecocLcLMuongR(void *p);
   static void destruct_edmcLcLRefToBaseVectorlErecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefToBaseVector<reco::Muon>*)
   {
      ::edm::RefToBaseVector<reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefToBaseVector<reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefToBaseVector<reco::Muon>", ::edm::RefToBaseVector<reco::Muon>::Class_Version(), "DataFormats/Common/interface/RefToBaseVector.h", 27,
                  typeid(::edm::RefToBaseVector<reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefToBaseVectorlErecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefToBaseVector<reco::Muon>) );
      instance.SetNew(&new_edmcLcLRefToBaseVectorlErecocLcLMuongR);
      instance.SetNewArray(&newArray_edmcLcLRefToBaseVectorlErecocLcLMuongR);
      instance.SetDelete(&delete_edmcLcLRefToBaseVectorlErecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefToBaseVectorlErecocLcLMuongR);
      instance.SetDestructor(&destruct_edmcLcLRefToBaseVectorlErecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefToBaseVector<reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::edm::RefToBaseVector<reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefToBaseVector<reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefToBaseVectorlErecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefToBaseVector<reco::Muon>*)0x0)->GetClass();
      edmcLcLRefToBaseVectorlErecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefToBaseVectorlErecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::Muon> >*)
   {
      ::edm::Wrapper<vector<reco::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::Muon> >", ::edm::Wrapper<vector<reco::Muon> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::Muon> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::Muon> >","edm::Wrapper<std::vector<reco::Muon> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::Muon> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >","edm::Wrapper<edm::RefVector<std::vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<std::vector<reco::Muon>,reco::Muon> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::MuonTimeExtra> >*)
   {
      ::edm::Wrapper<vector<reco::MuonTimeExtra> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::MuonTimeExtra> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::MuonTimeExtra> >", ::edm::Wrapper<vector<reco::MuonTimeExtra> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::MuonTimeExtra> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::MuonTimeExtra> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::MuonTimeExtra> >","edm::Wrapper<std::vector<reco::MuonTimeExtra> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::MuonTimeExtra> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::MuonTimeExtra> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonTimeExtra> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonTimeExtra> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >*)
   {
      ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >", ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >","edm::Wrapper<reco::MuonTimeExtraMap>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::MuonTrackLinks> >*)
   {
      ::edm::Wrapper<vector<reco::MuonTrackLinks> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::MuonTrackLinks> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::MuonTrackLinks> >", ::edm::Wrapper<vector<reco::MuonTrackLinks> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::MuonTrackLinks> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::MuonTrackLinks> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::MuonTrackLinks> >","edm::Wrapper<std::vector<reco::MuonTrackLinks> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::MuonTrackLinks> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::MuonTrackLinks> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonTrackLinks> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonTrackLinks> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >*)
   {
      ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >", ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >","edm::Wrapper<edm::RefVector<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::CaloMuon> >*)
   {
      ::edm::Wrapper<vector<reco::CaloMuon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::CaloMuon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::CaloMuon> >", ::edm::Wrapper<vector<reco::CaloMuon> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::CaloMuon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::CaloMuon> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::CaloMuon> >","edm::Wrapper<std::vector<reco::CaloMuon> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::CaloMuon> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::CaloMuon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::CaloMuon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::CaloMuon> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >*)
   {
      ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefToBaseVector<reco::Muon> >", ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::MuonMETCorrectionData> >*)
   {
      ::edm::Wrapper<vector<reco::MuonMETCorrectionData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::MuonMETCorrectionData> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::MuonMETCorrectionData> >", ::edm::Wrapper<vector<reco::MuonMETCorrectionData> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::MuonMETCorrectionData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::MuonMETCorrectionData> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::MuonMETCorrectionData> >","edm::Wrapper<std::vector<reco::MuonMETCorrectionData> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::MuonMETCorrectionData> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::MuonMETCorrectionData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonMETCorrectionData> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonMETCorrectionData> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >*)
   {
      ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >", ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::MuonQuality> >*)
   {
      ::edm::Wrapper<vector<reco::MuonQuality> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::MuonQuality> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::MuonQuality> >", ::edm::Wrapper<vector<reco::MuonQuality> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::MuonQuality> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::MuonQuality> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::MuonQuality> >","edm::Wrapper<std::vector<reco::MuonQuality> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::MuonQuality> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::MuonQuality> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonQuality> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonQuality> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >*)
   {
      ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<reco::MuonQuality> >", ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >*)
   {
      ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::MuonCosmicCompatibility> >", ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::MuonCosmicCompatibility> >","edm::Wrapper<std::vector<reco::MuonCosmicCompatibility> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >*)
   {
      ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >", ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)
   {
      ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >", ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >","edm::Wrapper<edm::ValueMap<reco::MuonRef> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Association<vector<reco::Muon> > >*)
   {
      ::edm::Wrapper<edm::Association<vector<reco::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Association<vector<reco::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Association<vector<reco::Muon> > >", ::edm::Wrapper<edm::Association<vector<reco::Muon> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Association<vector<reco::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::Association<vector<reco::Muon> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Association<vector<reco::Muon> > >","edm::Wrapper<edm::Association<reco::MuonCollection> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Association<vector<reco::Muon> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Association<vector<reco::Muon> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::Muon> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::MuonShower> >*)
   {
      ::edm::Wrapper<vector<reco::MuonShower> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::MuonShower> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::MuonShower> >", ::edm::Wrapper<vector<reco::MuonShower> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::MuonShower> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::MuonShower> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::MuonShower> >","edm::Wrapper<std::vector<reco::MuonShower> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::MuonShower> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::MuonShower> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonShower> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonShower> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<reco::MuonShower> >*)
   {
      ::edm::Wrapper<edm::ValueMap<reco::MuonShower> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<reco::MuonShower> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<reco::MuonShower> >", ::edm::Wrapper<edm::ValueMap<reco::MuonShower> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<reco::MuonShower> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<reco::MuonShower> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<reco::MuonShower> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<reco::MuonShower> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonShower> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonShower> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >*)
   {
      ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<reco::DYTInfo> >", ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Ptr<reco::Muon> >*)
   {
      ::edm::Wrapper<edm::Ptr<reco::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Ptr<reco::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Ptr<reco::Muon> >", ::edm::Wrapper<edm::Ptr<reco::Muon> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Ptr<reco::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::Ptr<reco::Muon> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Ptr<reco::Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Ptr<reco::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ptr<reco::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ptr<reco::Muon> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::PtrVector<reco::Muon> >*)
   {
      ::edm::Wrapper<edm::PtrVector<reco::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::PtrVector<reco::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::PtrVector<reco::Muon> >", ::edm::Wrapper<edm::PtrVector<reco::Muon> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::PtrVector<reco::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::PtrVector<reco::Muon> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::PtrVector<reco::Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::PtrVector<reco::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::PtrVector<reco::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::PtrVector<reco::Muon> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<EmulatedME0Segment> >*)
   {
      ::edm::Wrapper<vector<EmulatedME0Segment> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<EmulatedME0Segment> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<EmulatedME0Segment> >", ::edm::Wrapper<vector<EmulatedME0Segment> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<EmulatedME0Segment> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<EmulatedME0Segment> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<EmulatedME0Segment> >","edm::Wrapper<std::vector<EmulatedME0Segment> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<EmulatedME0Segment> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<EmulatedME0Segment> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<EmulatedME0Segment> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<EmulatedME0Segment> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::ME0Muon> >*)
   {
      ::edm::Wrapper<vector<reco::ME0Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::ME0Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::ME0Muon> >", ::edm::Wrapper<vector<reco::ME0Muon> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::ME0Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::ME0Muon> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::ME0Muon> >","edm::Wrapper<std::vector<reco::ME0Muon> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::ME0Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::ME0Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::ME0Muon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::ME0Muon> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::MuonSimInfo> >*)
   {
      ::edm::Wrapper<vector<reco::MuonSimInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::MuonSimInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::MuonSimInfo> >", ::edm::Wrapper<vector<reco::MuonSimInfo> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::MuonSimInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::MuonSimInfo> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::MuonSimInfo> >","edm::Wrapper<std::vector<reco::MuonSimInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::MuonSimInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::MuonSimInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonSimInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::MuonSimInfo> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >*)
   {
      ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >", ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR_Dictionary();
   static void edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR_TClassManip(TClass*);
   static void delete_edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR(void *p);
   static void destruct_edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::BaseHolder<reco::Muon>*)
   {
      ::edm::reftobase::BaseHolder<reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::BaseHolder<reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::BaseHolder<reco::Muon>", ::edm::reftobase::BaseHolder<reco::Muon>::Class_Version(), "DataFormats/Common/interface/BaseHolder.h", 28,
                  typeid(::edm::reftobase::BaseHolder<reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::BaseHolder<reco::Muon>) );
      instance.SetDelete(&delete_edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::BaseHolder<reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::BaseHolder<reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::BaseHolder<reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::BaseHolder<reco::Muon>*)0x0)->GetClass();
      edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >","edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<std::vector<reco::Muon>,reco::Muon> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR_Dictionary();
   static void edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR(void *p);
   static void destruct_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::IndirectHolder<reco::Muon>*)
   {
      ::edm::reftobase::IndirectHolder<reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::IndirectHolder<reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::IndirectHolder<reco::Muon>", ::edm::reftobase::IndirectHolder<reco::Muon>::Class_Version(), "DataFormats/Common/interface/IndirectHolder.h", 24,
                  typeid(::edm::reftobase::IndirectHolder<reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::IndirectHolder<reco::Muon>) );
      instance.SetNew(&new_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::IndirectHolder<reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::IndirectHolder<reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::IndirectHolder<reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::IndirectHolder<reco::Muon>*)0x0)->GetClass();
      edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::Class_Version(), "DataFormats/Common/interface/RefHolder_.h", 20,
                  typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >","edm::reftobase::RefHolder<reco::MuonRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR_Dictionary();
   static void edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR_TClassManip(TClass*);
   static void delete_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR(void *p);
   static void destruct_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::BaseVectorHolder<reco::Muon>*)
   {
      ::edm::reftobase::BaseVectorHolder<reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::BaseVectorHolder<reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::BaseVectorHolder<reco::Muon>", ::edm::reftobase::BaseVectorHolder<reco::Muon>::Class_Version(), "DataFormats/Common/interface/BaseVectorHolder.h", 14,
                  typeid(::edm::reftobase::BaseVectorHolder<reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::BaseVectorHolder<reco::Muon>) );
      instance.SetDelete(&delete_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::BaseVectorHolder<reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::BaseVectorHolder<reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::BaseVectorHolder<reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::BaseVectorHolder<reco::Muon>*)0x0)->GetClass();
      edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::Class_Version(), "DataFormats/Common/interface/VectorHolder.h", 15,
                  typeid(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >","edm::reftobase::VectorHolder<reco::Candidate,reco::MuonRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLPtrlErecocLcLMuongR_Dictionary();
   static void edmcLcLPtrlErecocLcLMuongR_TClassManip(TClass*);
   static void *new_edmcLcLPtrlErecocLcLMuongR(void *p = 0);
   static void *newArray_edmcLcLPtrlErecocLcLMuongR(Long_t size, void *p);
   static void delete_edmcLcLPtrlErecocLcLMuongR(void *p);
   static void deleteArray_edmcLcLPtrlErecocLcLMuongR(void *p);
   static void destruct_edmcLcLPtrlErecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ptr<reco::Muon>*)
   {
      ::edm::Ptr<reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ptr<reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ptr<reco::Muon>", ::edm::Ptr<reco::Muon>::Class_Version(), "DataFormats/Common/interface/Ptr.h", 40,
                  typeid(::edm::Ptr<reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLPtrlErecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ptr<reco::Muon>) );
      instance.SetNew(&new_edmcLcLPtrlErecocLcLMuongR);
      instance.SetNewArray(&newArray_edmcLcLPtrlErecocLcLMuongR);
      instance.SetDelete(&delete_edmcLcLPtrlErecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_edmcLcLPtrlErecocLcLMuongR);
      instance.SetDestructor(&destruct_edmcLcLPtrlErecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ptr<reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::edm::Ptr<reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ptr<reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLPtrlErecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ptr<reco::Muon>*)0x0)->GetClass();
      edmcLcLPtrlErecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLPtrlErecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLPtrVectorlErecocLcLMuongR_Dictionary();
   static void edmcLcLPtrVectorlErecocLcLMuongR_TClassManip(TClass*);
   static void *new_edmcLcLPtrVectorlErecocLcLMuongR(void *p = 0);
   static void *newArray_edmcLcLPtrVectorlErecocLcLMuongR(Long_t size, void *p);
   static void delete_edmcLcLPtrVectorlErecocLcLMuongR(void *p);
   static void deleteArray_edmcLcLPtrVectorlErecocLcLMuongR(void *p);
   static void destruct_edmcLcLPtrVectorlErecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::PtrVector<reco::Muon>*)
   {
      ::edm::PtrVector<reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::PtrVector<reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::PtrVector<reco::Muon>", ::edm::PtrVector<reco::Muon>::Class_Version(), "DataFormats/Common/interface/PtrVector.h", 103,
                  typeid(::edm::PtrVector<reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLPtrVectorlErecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::PtrVector<reco::Muon>) );
      instance.SetNew(&new_edmcLcLPtrVectorlErecocLcLMuongR);
      instance.SetNewArray(&newArray_edmcLcLPtrVectorlErecocLcLMuongR);
      instance.SetDelete(&delete_edmcLcLPtrVectorlErecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_edmcLcLPtrVectorlErecocLcLMuongR);
      instance.SetDestructor(&destruct_edmcLcLPtrVectorlErecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::PtrVector<reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::edm::PtrVector<reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::PtrVector<reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLPtrVectorlErecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::PtrVector<reco::Muon>*)0x0)->GetClass();
      edmcLcLPtrVectorlErecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLPtrVectorlErecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLMuonTimeExtragR_Dictionary();
   static void edmcLcLValueMaplErecocLcLMuonTimeExtragR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLMuonTimeExtragR(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLMuonTimeExtragR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLMuonTimeExtragR(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonTimeExtragR(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLMuonTimeExtragR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::MuonTimeExtra>*)
   {
      ::edm::ValueMap<reco::MuonTimeExtra> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::MuonTimeExtra>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::MuonTimeExtra>", ::edm::ValueMap<reco::MuonTimeExtra>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<reco::MuonTimeExtra>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLMuonTimeExtragR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::MuonTimeExtra>) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLMuonTimeExtragR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLMuonTimeExtragR);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLMuonTimeExtragR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLMuonTimeExtragR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLMuonTimeExtragR);

      ::ROOT::AddClassAlternate("edm::ValueMap<reco::MuonTimeExtra>","reco::MuonTimeExtraMap");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::MuonTimeExtra>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::MuonTimeExtra>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonTimeExtra>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLMuonTimeExtragR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonTimeExtra>*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLMuonTimeExtragR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLMuonTimeExtragR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary();
   static void edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void destruct_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >) );
      instance.SetNew(&new_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >","edm::ValueMap<reco::MuonRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0)->GetClass();
      edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator_Dictionary();
   static void edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator(void *p = 0);
   static void *newArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator(Long_t size, void *p);
   static void delete_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator(void *p);
   static void deleteArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator(void *p);
   static void destruct_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator*)
   {
      ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator", "DataFormats/Common/interface/ValueMap.h", 171,
                  typeid(::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator) );
      instance.SetNew(&new_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator);
      instance.SetNewArray(&newArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator);
      instance.SetDelete(&delete_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator);
      instance.SetDestructor(&destruct_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator);

      ::ROOT::AddClassAlternate("edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator","edm::ValueMap<reco::MuonRef>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator*)0x0)->GetClass();
      edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR_Dictionary();
   static void edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::MuonMETCorrectionData>*)
   {
      ::edm::ValueMap<reco::MuonMETCorrectionData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::MuonMETCorrectionData>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::MuonMETCorrectionData>", ::edm::ValueMap<reco::MuonMETCorrectionData>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<reco::MuonMETCorrectionData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::MuonMETCorrectionData>) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::MuonMETCorrectionData>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::MuonMETCorrectionData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonMETCorrectionData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonMETCorrectionData>*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator_Dictionary();
   static void edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator*)
   {
      ::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator", "DataFormats/Common/interface/ValueMap.h", 171,
                  typeid(::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLMuonQualitygR_Dictionary();
   static void edmcLcLValueMaplErecocLcLMuonQualitygR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLMuonQualitygR(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLMuonQualitygR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLMuonQualitygR(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonQualitygR(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLMuonQualitygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::MuonQuality>*)
   {
      ::edm::ValueMap<reco::MuonQuality> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::MuonQuality>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::MuonQuality>", ::edm::ValueMap<reco::MuonQuality>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<reco::MuonQuality>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLMuonQualitygR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::MuonQuality>) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLMuonQualitygR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLMuonQualitygR);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLMuonQualitygR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLMuonQualitygR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLMuonQualitygR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::MuonQuality>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::MuonQuality>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonQuality>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLMuonQualitygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonQuality>*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLMuonQualitygR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLMuonQualitygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator_Dictionary();
   static void edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::MuonQuality>::const_iterator*)
   {
      ::edm::ValueMap<reco::MuonQuality>::const_iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::MuonQuality>::const_iterator));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::MuonQuality>::const_iterator", "DataFormats/Common/interface/ValueMap.h", 171,
                  typeid(::edm::ValueMap<reco::MuonQuality>::const_iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::MuonQuality>::const_iterator) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::MuonQuality>::const_iterator*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::MuonQuality>::const_iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonQuality>::const_iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonQuality>::const_iterator*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR_Dictionary();
   static void edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::MuonCosmicCompatibility>*)
   {
      ::edm::ValueMap<reco::MuonCosmicCompatibility> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::MuonCosmicCompatibility>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::MuonCosmicCompatibility>", ::edm::ValueMap<reco::MuonCosmicCompatibility>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<reco::MuonCosmicCompatibility>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::MuonCosmicCompatibility>) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::MuonCosmicCompatibility>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::MuonCosmicCompatibility>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonCosmicCompatibility>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonCosmicCompatibility>*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator_Dictionary();
   static void edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator*)
   {
      ::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator", "DataFormats/Common/interface/ValueMap.h", 171,
                  typeid(::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLMuonShowergR_Dictionary();
   static void edmcLcLValueMaplErecocLcLMuonShowergR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLMuonShowergR(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLMuonShowergR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLMuonShowergR(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonShowergR(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLMuonShowergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::MuonShower>*)
   {
      ::edm::ValueMap<reco::MuonShower> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::MuonShower>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::MuonShower>", ::edm::ValueMap<reco::MuonShower>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<reco::MuonShower>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLMuonShowergR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::MuonShower>) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLMuonShowergR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLMuonShowergR);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLMuonShowergR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLMuonShowergR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLMuonShowergR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::MuonShower>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::MuonShower>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonShower>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLMuonShowergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonShower>*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLMuonShowergR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLMuonShowergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator_Dictionary();
   static void edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::MuonShower>::const_iterator*)
   {
      ::edm::ValueMap<reco::MuonShower>::const_iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::MuonShower>::const_iterator));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::MuonShower>::const_iterator", "DataFormats/Common/interface/ValueMap.h", 171,
                  typeid(::edm::ValueMap<reco::MuonShower>::const_iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::MuonShower>::const_iterator) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::MuonShower>::const_iterator*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::MuonShower>::const_iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonShower>::const_iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonShower>::const_iterator*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLDYTInfogR_Dictionary();
   static void edmcLcLValueMaplErecocLcLDYTInfogR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLDYTInfogR(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLDYTInfogR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLDYTInfogR(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLDYTInfogR(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLDYTInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::DYTInfo>*)
   {
      ::edm::ValueMap<reco::DYTInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::DYTInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::DYTInfo>", ::edm::ValueMap<reco::DYTInfo>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<reco::DYTInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLDYTInfogR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::DYTInfo>) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLDYTInfogR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLDYTInfogR);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLDYTInfogR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLDYTInfogR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLDYTInfogR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::DYTInfo>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::DYTInfo>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::DYTInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLDYTInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::DYTInfo>*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLDYTInfogR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLDYTInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator_Dictionary();
   static void edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::DYTInfo>::const_iterator*)
   {
      ::edm::ValueMap<reco::DYTInfo>::const_iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::DYTInfo>::const_iterator));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::DYTInfo>::const_iterator", "DataFormats/Common/interface/ValueMap.h", 171,
                  typeid(::edm::ValueMap<reco::DYTInfo>::const_iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::DYTInfo>::const_iterator) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::DYTInfo>::const_iterator*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::DYTInfo>::const_iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::DYTInfo>::const_iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::DYTInfo>::const_iterator*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLMuonSimInfogR_Dictionary();
   static void edmcLcLValueMaplErecocLcLMuonSimInfogR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLMuonSimInfogR(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLMuonSimInfogR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLMuonSimInfogR(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonSimInfogR(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLMuonSimInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::MuonSimInfo>*)
   {
      ::edm::ValueMap<reco::MuonSimInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::MuonSimInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::MuonSimInfo>", ::edm::ValueMap<reco::MuonSimInfo>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<reco::MuonSimInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLMuonSimInfogR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::MuonSimInfo>) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLMuonSimInfogR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLMuonSimInfogR);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLMuonSimInfogR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLMuonSimInfogR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLMuonSimInfogR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::MuonSimInfo>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::MuonSimInfo>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonSimInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLMuonSimInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::MuonSimInfo>*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLMuonSimInfogR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLMuonSimInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR_Dictionary();
   static void edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR(void *p);
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Association<vector<reco::Muon> >*)
   {
      ::edm::Association<vector<reco::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Association<vector<reco::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Association<vector<reco::Muon> >", ::edm::Association<vector<reco::Muon> >::Class_Version(), "DataFormats/Common/interface/Association.h", 18,
                  typeid(::edm::Association<vector<reco::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Association<vector<reco::Muon> >) );
      instance.SetNew(&new_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR);

      ::ROOT::AddClassAlternate("edm::Association<vector<reco::Muon> >","edm::Association<reco::MuonCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Association<vector<reco::Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::Association<vector<reco::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Association<vector<reco::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Association<vector<reco::Muon> >*)0x0)->GetClass();
      edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::Class_Version(), "DataFormats/Common/interface/RefVectorHolder.h", 15,
                  typeid(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >","edm::reftobase::RefVectorHolder<reco::MuonRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefToBaseProdlErecocLcLMuongR_Dictionary();
   static void edmcLcLRefToBaseProdlErecocLcLMuongR_TClassManip(TClass*);
   static void *new_edmcLcLRefToBaseProdlErecocLcLMuongR(void *p = 0);
   static void *newArray_edmcLcLRefToBaseProdlErecocLcLMuongR(Long_t size, void *p);
   static void delete_edmcLcLRefToBaseProdlErecocLcLMuongR(void *p);
   static void deleteArray_edmcLcLRefToBaseProdlErecocLcLMuongR(void *p);
   static void destruct_edmcLcLRefToBaseProdlErecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefToBaseProd<reco::Muon>*)
   {
      ::edm::RefToBaseProd<reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefToBaseProd<reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefToBaseProd<reco::Muon>", ::edm::RefToBaseProd<reco::Muon>::Class_Version(), "DataFormats/Common/interface/RefToBaseProd.h", 29,
                  typeid(::edm::RefToBaseProd<reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefToBaseProdlErecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefToBaseProd<reco::Muon>) );
      instance.SetNew(&new_edmcLcLRefToBaseProdlErecocLcLMuongR);
      instance.SetNewArray(&newArray_edmcLcLRefToBaseProdlErecocLcLMuongR);
      instance.SetDelete(&delete_edmcLcLRefToBaseProdlErecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefToBaseProdlErecocLcLMuongR);
      instance.SetDestructor(&destruct_edmcLcLRefToBaseProdlErecocLcLMuongR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefToBaseProd<reco::Muon>*)
   {
      return GenerateInitInstanceLocal((::edm::RefToBaseProd<reco::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefToBaseProd<reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefToBaseProdlErecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefToBaseProd<reco::Muon>*)0x0)->GetClass();
      edmcLcLRefToBaseProdlErecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefToBaseProdlErecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonSegmentMatch_Dictionary();
   static void recocLcLMuonSegmentMatch_TClassManip(TClass*);
   static void *new_recocLcLMuonSegmentMatch(void *p = 0);
   static void *newArray_recocLcLMuonSegmentMatch(Long_t size, void *p);
   static void delete_recocLcLMuonSegmentMatch(void *p);
   static void deleteArray_recocLcLMuonSegmentMatch(void *p);
   static void destruct_recocLcLMuonSegmentMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonSegmentMatch*)
   {
      ::reco::MuonSegmentMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonSegmentMatch));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonSegmentMatch", 11, "DataFormats/MuonReco/interface/MuonSegmentMatch.h", 12,
                  typeid(::reco::MuonSegmentMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonSegmentMatch_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonSegmentMatch) );
      instance.SetNew(&new_recocLcLMuonSegmentMatch);
      instance.SetNewArray(&newArray_recocLcLMuonSegmentMatch);
      instance.SetDelete(&delete_recocLcLMuonSegmentMatch);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonSegmentMatch);
      instance.SetDestructor(&destruct_recocLcLMuonSegmentMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonSegmentMatch*)
   {
      return GenerateInitInstanceLocal((::reco::MuonSegmentMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonSegmentMatch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonSegmentMatch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonSegmentMatch*)0x0)->GetClass();
      recocLcLMuonSegmentMatch_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonSegmentMatch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonRPCHitMatch_Dictionary();
   static void recocLcLMuonRPCHitMatch_TClassManip(TClass*);
   static void *new_recocLcLMuonRPCHitMatch(void *p = 0);
   static void *newArray_recocLcLMuonRPCHitMatch(Long_t size, void *p);
   static void delete_recocLcLMuonRPCHitMatch(void *p);
   static void deleteArray_recocLcLMuonRPCHitMatch(void *p);
   static void destruct_recocLcLMuonRPCHitMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonRPCHitMatch*)
   {
      ::reco::MuonRPCHitMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonRPCHitMatch));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonRPCHitMatch", 10, "DataFormats/MuonReco/interface/MuonRPCHitMatch.h", 7,
                  typeid(::reco::MuonRPCHitMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonRPCHitMatch_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonRPCHitMatch) );
      instance.SetNew(&new_recocLcLMuonRPCHitMatch);
      instance.SetNewArray(&newArray_recocLcLMuonRPCHitMatch);
      instance.SetDelete(&delete_recocLcLMuonRPCHitMatch);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonRPCHitMatch);
      instance.SetDestructor(&destruct_recocLcLMuonRPCHitMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonRPCHitMatch*)
   {
      return GenerateInitInstanceLocal((::reco::MuonRPCHitMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonRPCHitMatch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonRPCHitMatch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonRPCHitMatch*)0x0)->GetClass();
      recocLcLMuonRPCHitMatch_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonRPCHitMatch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonChamberMatch_Dictionary();
   static void recocLcLMuonChamberMatch_TClassManip(TClass*);
   static void *new_recocLcLMuonChamberMatch(void *p = 0);
   static void *newArray_recocLcLMuonChamberMatch(Long_t size, void *p);
   static void delete_recocLcLMuonChamberMatch(void *p);
   static void deleteArray_recocLcLMuonChamberMatch(void *p);
   static void destruct_recocLcLMuonChamberMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonChamberMatch*)
   {
      ::reco::MuonChamberMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonChamberMatch));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonChamberMatch", 12, "DataFormats/MuonReco/interface/MuonChamberMatch.h", 10,
                  typeid(::reco::MuonChamberMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonChamberMatch_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonChamberMatch) );
      instance.SetNew(&new_recocLcLMuonChamberMatch);
      instance.SetNewArray(&newArray_recocLcLMuonChamberMatch);
      instance.SetDelete(&delete_recocLcLMuonChamberMatch);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonChamberMatch);
      instance.SetDestructor(&destruct_recocLcLMuonChamberMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonChamberMatch*)
   {
      return GenerateInitInstanceLocal((::reco::MuonChamberMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonChamberMatch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonChamberMatch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonChamberMatch*)0x0)->GetClass();
      recocLcLMuonChamberMatch_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonChamberMatch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonIsolation_Dictionary();
   static void recocLcLMuonIsolation_TClassManip(TClass*);
   static void *new_recocLcLMuonIsolation(void *p = 0);
   static void *newArray_recocLcLMuonIsolation(Long_t size, void *p);
   static void delete_recocLcLMuonIsolation(void *p);
   static void deleteArray_recocLcLMuonIsolation(void *p);
   static void destruct_recocLcLMuonIsolation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonIsolation*)
   {
      ::reco::MuonIsolation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonIsolation));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonIsolation", 10, "DataFormats/MuonReco/interface/MuonIsolation.h", 6,
                  typeid(::reco::MuonIsolation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonIsolation_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonIsolation) );
      instance.SetNew(&new_recocLcLMuonIsolation);
      instance.SetNewArray(&newArray_recocLcLMuonIsolation);
      instance.SetDelete(&delete_recocLcLMuonIsolation);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonIsolation);
      instance.SetDestructor(&destruct_recocLcLMuonIsolation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonIsolation*)
   {
      return GenerateInitInstanceLocal((::reco::MuonIsolation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonIsolation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonIsolation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonIsolation*)0x0)->GetClass();
      recocLcLMuonIsolation_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonIsolation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonPFIsolation_Dictionary();
   static void recocLcLMuonPFIsolation_TClassManip(TClass*);
   static void *new_recocLcLMuonPFIsolation(void *p = 0);
   static void *newArray_recocLcLMuonPFIsolation(Long_t size, void *p);
   static void delete_recocLcLMuonPFIsolation(void *p);
   static void deleteArray_recocLcLMuonPFIsolation(void *p);
   static void destruct_recocLcLMuonPFIsolation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonPFIsolation*)
   {
      ::reco::MuonPFIsolation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonPFIsolation));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonPFIsolation", 15, "DataFormats/MuonReco/interface/MuonPFIsolation.h", 6,
                  typeid(::reco::MuonPFIsolation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonPFIsolation_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonPFIsolation) );
      instance.SetNew(&new_recocLcLMuonPFIsolation);
      instance.SetNewArray(&newArray_recocLcLMuonPFIsolation);
      instance.SetDelete(&delete_recocLcLMuonPFIsolation);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonPFIsolation);
      instance.SetDestructor(&destruct_recocLcLMuonPFIsolation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonPFIsolation*)
   {
      return GenerateInitInstanceLocal((::reco::MuonPFIsolation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonPFIsolation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonPFIsolation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonPFIsolation*)0x0)->GetClass();
      recocLcLMuonPFIsolation_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonPFIsolation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonEnergy_Dictionary();
   static void recocLcLMuonEnergy_TClassManip(TClass*);
   static void *new_recocLcLMuonEnergy(void *p = 0);
   static void *newArray_recocLcLMuonEnergy(Long_t size, void *p);
   static void delete_recocLcLMuonEnergy(void *p);
   static void deleteArray_recocLcLMuonEnergy(void *p);
   static void destruct_recocLcLMuonEnergy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonEnergy*)
   {
      ::reco::MuonEnergy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonEnergy));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonEnergy", 10, "DataFormats/MuonReco/interface/MuonEnergy.h", 7,
                  typeid(::reco::MuonEnergy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonEnergy_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonEnergy) );
      instance.SetNew(&new_recocLcLMuonEnergy);
      instance.SetNewArray(&newArray_recocLcLMuonEnergy);
      instance.SetDelete(&delete_recocLcLMuonEnergy);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonEnergy);
      instance.SetDestructor(&destruct_recocLcLMuonEnergy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonEnergy*)
   {
      return GenerateInitInstanceLocal((::reco::MuonEnergy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonEnergy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonEnergy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonEnergy*)0x0)->GetClass();
      recocLcLMuonEnergy_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonEnergy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonTime_Dictionary();
   static void recocLcLMuonTime_TClassManip(TClass*);
   static void *new_recocLcLMuonTime(void *p = 0);
   static void *newArray_recocLcLMuonTime(Long_t size, void *p);
   static void delete_recocLcLMuonTime(void *p);
   static void deleteArray_recocLcLMuonTime(void *p);
   static void destruct_recocLcLMuonTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonTime*)
   {
      ::reco::MuonTime *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonTime));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonTime", 10, "DataFormats/MuonReco/interface/MuonTime.h", 6,
                  typeid(::reco::MuonTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonTime_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonTime) );
      instance.SetNew(&new_recocLcLMuonTime);
      instance.SetNewArray(&newArray_recocLcLMuonTime);
      instance.SetDelete(&delete_recocLcLMuonTime);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonTime);
      instance.SetDestructor(&destruct_recocLcLMuonTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonTime*)
   {
      return GenerateInitInstanceLocal((::reco::MuonTime*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonTime*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonTime_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonTime*)0x0)->GetClass();
      recocLcLMuonTime_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonTime_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonQuality_Dictionary();
   static void recocLcLMuonQuality_TClassManip(TClass*);
   static void *new_recocLcLMuonQuality(void *p = 0);
   static void *newArray_recocLcLMuonQuality(Long_t size, void *p);
   static void delete_recocLcLMuonQuality(void *p);
   static void deleteArray_recocLcLMuonQuality(void *p);
   static void destruct_recocLcLMuonQuality(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonQuality*)
   {
      ::reco::MuonQuality *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonQuality));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonQuality", 10, "DataFormats/MuonReco/interface/MuonQuality.h", 6,
                  typeid(::reco::MuonQuality), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonQuality_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonQuality) );
      instance.SetNew(&new_recocLcLMuonQuality);
      instance.SetNewArray(&newArray_recocLcLMuonQuality);
      instance.SetDelete(&delete_recocLcLMuonQuality);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonQuality);
      instance.SetDestructor(&destruct_recocLcLMuonQuality);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonQuality*)
   {
      return GenerateInitInstanceLocal((::reco::MuonQuality*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonQuality*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonQuality_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonQuality*)0x0)->GetClass();
      recocLcLMuonQuality_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonQuality_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuon_Dictionary();
   static void recocLcLMuon_TClassManip(TClass*);
   static void *new_recocLcLMuon(void *p = 0);
   static void *newArray_recocLcLMuon(Long_t size, void *p);
   static void delete_recocLcLMuon(void *p);
   static void deleteArray_recocLcLMuon(void *p);
   static void destruct_recocLcLMuon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::Muon*)
   {
      ::reco::Muon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::Muon));
      static ::ROOT::TGenericClassInfo 
         instance("reco::Muon", 19, "DataFormats/MuonReco/interface/Muon.h", 27,
                  typeid(::reco::Muon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuon_Dictionary, isa_proxy, 12,
                  sizeof(::reco::Muon) );
      instance.SetNew(&new_recocLcLMuon);
      instance.SetNewArray(&newArray_recocLcLMuon);
      instance.SetDelete(&delete_recocLcLMuon);
      instance.SetDeleteArray(&deleteArray_recocLcLMuon);
      instance.SetDestructor(&destruct_recocLcLMuon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::Muon*)
   {
      return GenerateInitInstanceLocal((::reco::Muon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::Muon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuon_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::Muon*)0x0)->GetClass();
      recocLcLMuon_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuon_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLCaloMuon_Dictionary();
   static void recocLcLCaloMuon_TClassManip(TClass*);
   static void *new_recocLcLCaloMuon(void *p = 0);
   static void *newArray_recocLcLCaloMuon(Long_t size, void *p);
   static void delete_recocLcLCaloMuon(void *p);
   static void deleteArray_recocLcLCaloMuon(void *p);
   static void destruct_recocLcLCaloMuon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::CaloMuon*)
   {
      ::reco::CaloMuon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::CaloMuon));
      static ::ROOT::TGenericClassInfo 
         instance("reco::CaloMuon", 10, "DataFormats/MuonReco/interface/CaloMuon.h", 21,
                  typeid(::reco::CaloMuon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLCaloMuon_Dictionary, isa_proxy, 12,
                  sizeof(::reco::CaloMuon) );
      instance.SetNew(&new_recocLcLCaloMuon);
      instance.SetNewArray(&newArray_recocLcLCaloMuon);
      instance.SetDelete(&delete_recocLcLCaloMuon);
      instance.SetDeleteArray(&deleteArray_recocLcLCaloMuon);
      instance.SetDestructor(&destruct_recocLcLCaloMuon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::CaloMuon*)
   {
      return GenerateInitInstanceLocal((::reco::CaloMuon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::CaloMuon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLCaloMuon_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::CaloMuon*)0x0)->GetClass();
      recocLcLCaloMuon_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLCaloMuon_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonTrackLinks_Dictionary();
   static void recocLcLMuonTrackLinks_TClassManip(TClass*);
   static void *new_recocLcLMuonTrackLinks(void *p = 0);
   static void *newArray_recocLcLMuonTrackLinks(Long_t size, void *p);
   static void delete_recocLcLMuonTrackLinks(void *p);
   static void deleteArray_recocLcLMuonTrackLinks(void *p);
   static void destruct_recocLcLMuonTrackLinks(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonTrackLinks*)
   {
      ::reco::MuonTrackLinks *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonTrackLinks));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonTrackLinks", 10, "DataFormats/MuonReco/interface/MuonTrackLinks.h", 16,
                  typeid(::reco::MuonTrackLinks), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonTrackLinks_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonTrackLinks) );
      instance.SetNew(&new_recocLcLMuonTrackLinks);
      instance.SetNewArray(&newArray_recocLcLMuonTrackLinks);
      instance.SetDelete(&delete_recocLcLMuonTrackLinks);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonTrackLinks);
      instance.SetDestructor(&destruct_recocLcLMuonTrackLinks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonTrackLinks*)
   {
      return GenerateInitInstanceLocal((::reco::MuonTrackLinks*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonTrackLinks*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonTrackLinks_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonTrackLinks*)0x0)->GetClass();
      recocLcLMuonTrackLinks_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonTrackLinks_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonTimeExtra_Dictionary();
   static void recocLcLMuonTimeExtra_TClassManip(TClass*);
   static void *new_recocLcLMuonTimeExtra(void *p = 0);
   static void *newArray_recocLcLMuonTimeExtra(Long_t size, void *p);
   static void delete_recocLcLMuonTimeExtra(void *p);
   static void deleteArray_recocLcLMuonTimeExtra(void *p);
   static void destruct_recocLcLMuonTimeExtra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonTimeExtra*)
   {
      ::reco::MuonTimeExtra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonTimeExtra));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonTimeExtra", 10, "DataFormats/MuonReco/interface/MuonTimeExtra.h", 15,
                  typeid(::reco::MuonTimeExtra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonTimeExtra_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonTimeExtra) );
      instance.SetNew(&new_recocLcLMuonTimeExtra);
      instance.SetNewArray(&newArray_recocLcLMuonTimeExtra);
      instance.SetDelete(&delete_recocLcLMuonTimeExtra);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonTimeExtra);
      instance.SetDestructor(&destruct_recocLcLMuonTimeExtra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonTimeExtra*)
   {
      return GenerateInitInstanceLocal((::reco::MuonTimeExtra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonTimeExtra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonTimeExtra_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonTimeExtra*)0x0)->GetClass();
      recocLcLMuonTimeExtra_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonTimeExtra_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonMETCorrectionData_Dictionary();
   static void recocLcLMuonMETCorrectionData_TClassManip(TClass*);
   static void *new_recocLcLMuonMETCorrectionData(void *p = 0);
   static void *newArray_recocLcLMuonMETCorrectionData(Long_t size, void *p);
   static void delete_recocLcLMuonMETCorrectionData(void *p);
   static void deleteArray_recocLcLMuonMETCorrectionData(void *p);
   static void destruct_recocLcLMuonMETCorrectionData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonMETCorrectionData*)
   {
      ::reco::MuonMETCorrectionData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonMETCorrectionData));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonMETCorrectionData", 10, "DataFormats/MuonReco/interface/MuonMETCorrectionData.h", 7,
                  typeid(::reco::MuonMETCorrectionData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonMETCorrectionData_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonMETCorrectionData) );
      instance.SetNew(&new_recocLcLMuonMETCorrectionData);
      instance.SetNewArray(&newArray_recocLcLMuonMETCorrectionData);
      instance.SetDelete(&delete_recocLcLMuonMETCorrectionData);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonMETCorrectionData);
      instance.SetDestructor(&destruct_recocLcLMuonMETCorrectionData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonMETCorrectionData*)
   {
      return GenerateInitInstanceLocal((::reco::MuonMETCorrectionData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonMETCorrectionData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonMETCorrectionData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonMETCorrectionData*)0x0)->GetClass();
      recocLcLMuonMETCorrectionData_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonMETCorrectionData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonCosmicCompatibility_Dictionary();
   static void recocLcLMuonCosmicCompatibility_TClassManip(TClass*);
   static void *new_recocLcLMuonCosmicCompatibility(void *p = 0);
   static void *newArray_recocLcLMuonCosmicCompatibility(Long_t size, void *p);
   static void delete_recocLcLMuonCosmicCompatibility(void *p);
   static void deleteArray_recocLcLMuonCosmicCompatibility(void *p);
   static void destruct_recocLcLMuonCosmicCompatibility(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonCosmicCompatibility*)
   {
      ::reco::MuonCosmicCompatibility *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonCosmicCompatibility));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonCosmicCompatibility", 10, "DataFormats/MuonReco/interface/MuonCosmicCompatibility.h", 5,
                  typeid(::reco::MuonCosmicCompatibility), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonCosmicCompatibility_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonCosmicCompatibility) );
      instance.SetNew(&new_recocLcLMuonCosmicCompatibility);
      instance.SetNewArray(&newArray_recocLcLMuonCosmicCompatibility);
      instance.SetDelete(&delete_recocLcLMuonCosmicCompatibility);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonCosmicCompatibility);
      instance.SetDestructor(&destruct_recocLcLMuonCosmicCompatibility);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonCosmicCompatibility*)
   {
      return GenerateInitInstanceLocal((::reco::MuonCosmicCompatibility*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonCosmicCompatibility*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonCosmicCompatibility_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonCosmicCompatibility*)0x0)->GetClass();
      recocLcLMuonCosmicCompatibility_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonCosmicCompatibility_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonShower_Dictionary();
   static void recocLcLMuonShower_TClassManip(TClass*);
   static void *new_recocLcLMuonShower(void *p = 0);
   static void *newArray_recocLcLMuonShower(Long_t size, void *p);
   static void delete_recocLcLMuonShower(void *p);
   static void deleteArray_recocLcLMuonShower(void *p);
   static void destruct_recocLcLMuonShower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonShower*)
   {
      ::reco::MuonShower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonShower));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonShower", 10, "DataFormats/MuonReco/interface/MuonShower.h", 7,
                  typeid(::reco::MuonShower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonShower_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonShower) );
      instance.SetNew(&new_recocLcLMuonShower);
      instance.SetNewArray(&newArray_recocLcLMuonShower);
      instance.SetDelete(&delete_recocLcLMuonShower);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonShower);
      instance.SetDestructor(&destruct_recocLcLMuonShower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonShower*)
   {
      return GenerateInitInstanceLocal((::reco::MuonShower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonShower*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonShower_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonShower*)0x0)->GetClass();
      recocLcLMuonShower_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonShower_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >*)
   {
      ::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 37,
                  typeid(::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >","edm::helpers::Key<edm::RefProd<std::vector<reco::Muon> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLDYTInfo_Dictionary();
   static void recocLcLDYTInfo_TClassManip(TClass*);
   static void *new_recocLcLDYTInfo(void *p = 0);
   static void *newArray_recocLcLDYTInfo(Long_t size, void *p);
   static void delete_recocLcLDYTInfo(void *p);
   static void deleteArray_recocLcLDYTInfo(void *p);
   static void destruct_recocLcLDYTInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::DYTInfo*)
   {
      ::reco::DYTInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::DYTInfo));
      static ::ROOT::TGenericClassInfo 
         instance("reco::DYTInfo", 10, "DataFormats/MuonReco/interface/DYTInfo.h", 11,
                  typeid(::reco::DYTInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLDYTInfo_Dictionary, isa_proxy, 12,
                  sizeof(::reco::DYTInfo) );
      instance.SetNew(&new_recocLcLDYTInfo);
      instance.SetNewArray(&newArray_recocLcLDYTInfo);
      instance.SetDelete(&delete_recocLcLDYTInfo);
      instance.SetDeleteArray(&deleteArray_recocLcLDYTInfo);
      instance.SetDestructor(&destruct_recocLcLDYTInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::DYTInfo*)
   {
      return GenerateInitInstanceLocal((::reco::DYTInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::DYTInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLDYTInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::DYTInfo*)0x0)->GetClass();
      recocLcLDYTInfo_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLDYTInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EmulatedME0Segment_Dictionary();
   static void EmulatedME0Segment_TClassManip(TClass*);
   static void *new_EmulatedME0Segment(void *p = 0);
   static void *newArray_EmulatedME0Segment(Long_t size, void *p);
   static void delete_EmulatedME0Segment(void *p);
   static void deleteArray_EmulatedME0Segment(void *p);
   static void destruct_EmulatedME0Segment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EmulatedME0Segment*)
   {
      ::EmulatedME0Segment *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EmulatedME0Segment));
      static ::ROOT::TGenericClassInfo 
         instance("EmulatedME0Segment", 2, "DataFormats/MuonReco/interface/EmulatedME0Segment.h", 17,
                  typeid(::EmulatedME0Segment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EmulatedME0Segment_Dictionary, isa_proxy, 12,
                  sizeof(::EmulatedME0Segment) );
      instance.SetNew(&new_EmulatedME0Segment);
      instance.SetNewArray(&newArray_EmulatedME0Segment);
      instance.SetDelete(&delete_EmulatedME0Segment);
      instance.SetDeleteArray(&deleteArray_EmulatedME0Segment);
      instance.SetDestructor(&destruct_EmulatedME0Segment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EmulatedME0Segment*)
   {
      return GenerateInitInstanceLocal((::EmulatedME0Segment*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EmulatedME0Segment*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EmulatedME0Segment_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::EmulatedME0Segment*)0x0)->GetClass();
      EmulatedME0Segment_TClassManip(theClass);
   return theClass;
   }

   static void EmulatedME0Segment_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLME0Muon_Dictionary();
   static void recocLcLME0Muon_TClassManip(TClass*);
   static void *new_recocLcLME0Muon(void *p = 0);
   static void *newArray_recocLcLME0Muon(Long_t size, void *p);
   static void delete_recocLcLME0Muon(void *p);
   static void deleteArray_recocLcLME0Muon(void *p);
   static void destruct_recocLcLME0Muon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::ME0Muon*)
   {
      ::reco::ME0Muon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::ME0Muon));
      static ::ROOT::TGenericClassInfo 
         instance("reco::ME0Muon", 2, "DataFormats/MuonReco/interface/ME0Muon.h", 21,
                  typeid(::reco::ME0Muon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLME0Muon_Dictionary, isa_proxy, 12,
                  sizeof(::reco::ME0Muon) );
      instance.SetNew(&new_recocLcLME0Muon);
      instance.SetNewArray(&newArray_recocLcLME0Muon);
      instance.SetDelete(&delete_recocLcLME0Muon);
      instance.SetDeleteArray(&deleteArray_recocLcLME0Muon);
      instance.SetDestructor(&destruct_recocLcLME0Muon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::ME0Muon*)
   {
      return GenerateInitInstanceLocal((::reco::ME0Muon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::ME0Muon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLME0Muon_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::ME0Muon*)0x0)->GetClass();
      recocLcLME0Muon_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLME0Muon_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLMuonSimInfo_Dictionary();
   static void recocLcLMuonSimInfo_TClassManip(TClass*);
   static void *new_recocLcLMuonSimInfo(void *p = 0);
   static void *newArray_recocLcLMuonSimInfo(Long_t size, void *p);
   static void delete_recocLcLMuonSimInfo(void *p);
   static void deleteArray_recocLcLMuonSimInfo(void *p);
   static void destruct_recocLcLMuonSimInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::MuonSimInfo*)
   {
      ::reco::MuonSimInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::MuonSimInfo));
      static ::ROOT::TGenericClassInfo 
         instance("reco::MuonSimInfo", 3, "DataFormats/MuonReco/interface/MuonSimInfo.h", 75,
                  typeid(::reco::MuonSimInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLMuonSimInfo_Dictionary, isa_proxy, 12,
                  sizeof(::reco::MuonSimInfo) );
      instance.SetNew(&new_recocLcLMuonSimInfo);
      instance.SetNewArray(&newArray_recocLcLMuonSimInfo);
      instance.SetDelete(&delete_recocLcLMuonSimInfo);
      instance.SetDeleteArray(&deleteArray_recocLcLMuonSimInfo);
      instance.SetDestructor(&destruct_recocLcLMuonSimInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::MuonSimInfo*)
   {
      return GenerateInitInstanceLocal((::reco::MuonSimInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::MuonSimInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLMuonSimInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::MuonSimInfo*)0x0)->GetClass();
      recocLcLMuonSimInfo_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLMuonSimInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> > : new ::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >[nElements] : new ::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonMETCorrectionDatamUcOvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> > : new ::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >[nElements] : new ::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonQualitymUcOvectorlErecocLcLMuonQualitygRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> > : new ::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >[nElements] : new ::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonCosmicCompatibilitymUcOvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > > : new ::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >[nElements] : new ::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRmUcOvectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> > : new ::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >[nElements] : new ::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLMuonShowermUcOvectorlErecocLcLMuonShowergRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> > : new ::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >[nElements] : new ::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPrecocLcLDYTInfomUcOvectorlErecocLcLDYTInfogRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > : new ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >[nElements] : new ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> > : new ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >;
   }
   static void *newArray_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >[nElements] : new ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR(void *p) {
      delete ((::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEEmulatedME0SegmentgRcOEmulatedME0SegmentgRsPgR(void *p) {
      typedef ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> > : new ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >[nElements] : new ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLME0MuongRcOrecocLcLME0MuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLME0MuongRcOrecocLcLME0MuongRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > : new ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >[nElements] : new ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefToBaselErecocLcLMuongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBase<reco::Muon> : new ::edm::RefToBase<reco::Muon>;
   }
   static void *newArray_edmcLcLRefToBaselErecocLcLMuongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBase<reco::Muon>[nElements] : new ::edm::RefToBase<reco::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefToBaselErecocLcLMuongR(void *p) {
      delete ((::edm::RefToBase<reco::Muon>*)p);
   }
   static void deleteArray_edmcLcLRefToBaselErecocLcLMuongR(void *p) {
      delete [] ((::edm::RefToBase<reco::Muon>*)p);
   }
   static void destruct_edmcLcLRefToBaselErecocLcLMuongR(void *p) {
      typedef ::edm::RefToBase<reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefToBase<reco::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::Muon> > : new ::edm::RefProd<vector<reco::Muon> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::Muon> >[nElements] : new ::edm::RefProd<vector<reco::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::Muon> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::Muon> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLMuongRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::MuonTrackLinks> > : new ::edm::RefProd<vector<reco::MuonTrackLinks> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::MuonTrackLinks> >[nElements] : new ::edm::RefProd<vector<reco::MuonTrackLinks> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::MuonTrackLinks> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::MuonTrackLinks> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::MuonTrackLinks> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::MuonTrackLinks> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > : new ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >[nElements] : new ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > : new ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >[nElements] : new ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefToBaseVectorlErecocLcLMuongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseVector<reco::Muon> : new ::edm::RefToBaseVector<reco::Muon>;
   }
   static void *newArray_edmcLcLRefToBaseVectorlErecocLcLMuongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseVector<reco::Muon>[nElements] : new ::edm::RefToBaseVector<reco::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefToBaseVectorlErecocLcLMuongR(void *p) {
      delete ((::edm::RefToBaseVector<reco::Muon>*)p);
   }
   static void deleteArray_edmcLcLRefToBaseVectorlErecocLcLMuongR(void *p) {
      delete [] ((::edm::RefToBaseVector<reco::Muon>*)p);
   }
   static void destruct_edmcLcLRefToBaseVectorlErecocLcLMuongR(void *p) {
      typedef ::edm::RefToBaseVector<reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefToBaseVector<reco::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::Muon> > : new ::edm::Wrapper<vector<reco::Muon> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::Muon> >[nElements] : new ::edm::Wrapper<vector<reco::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::Muon> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::Muon> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuongRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > : new ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements] : new ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonTimeExtra> > : new ::edm::Wrapper<vector<reco::MuonTimeExtra> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonTimeExtra> >[nElements] : new ::edm::Wrapper<vector<reco::MuonTimeExtra> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::MuonTimeExtra> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::MuonTimeExtra> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonTimeExtragRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::MuonTimeExtra> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::MuonTimeExtra> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> > : new ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >[nElements] : new ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonTimeExtragRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonTrackLinks> > : new ::edm::Wrapper<vector<reco::MuonTrackLinks> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonTrackLinks> >[nElements] : new ::edm::Wrapper<vector<reco::MuonTrackLinks> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::MuonTrackLinks> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::MuonTrackLinks> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonTrackLinksgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::MuonTrackLinks> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::MuonTrackLinks> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > > : new ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >[nElements] : new ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinkscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuonTrackLinksgRcOrecocLcLMuonTrackLinksgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::CaloMuon> > : new ::edm::Wrapper<vector<reco::CaloMuon> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::CaloMuon> >[nElements] : new ::edm::Wrapper<vector<reco::CaloMuon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::CaloMuon> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::CaloMuon> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLCaloMuongRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::CaloMuon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::CaloMuon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> > : new ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >[nElements] : new ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLMuongRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefToBaseVector<reco::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonMETCorrectionData> > : new ::edm::Wrapper<vector<reco::MuonMETCorrectionData> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonMETCorrectionData> >[nElements] : new ::edm::Wrapper<vector<reco::MuonMETCorrectionData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::MuonMETCorrectionData> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::MuonMETCorrectionData> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::MuonMETCorrectionData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::MuonMETCorrectionData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> > : new ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >[nElements] : new ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonQuality> > : new ::edm::Wrapper<vector<reco::MuonQuality> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonQuality> >[nElements] : new ::edm::Wrapper<vector<reco::MuonQuality> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::MuonQuality> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::MuonQuality> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonQualitygRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::MuonQuality> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::MuonQuality> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> > : new ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >[nElements] : new ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonQualitygRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<reco::MuonQuality> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> > : new ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >[nElements] : new ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::MuonCosmicCompatibility> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> > : new ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >[nElements] : new ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > > : new ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >[nElements] : new ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::Muon> > > : new ::edm::Wrapper<edm::Association<vector<reco::Muon> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::Muon> > >[nElements] : new ::edm::Wrapper<edm::Association<vector<reco::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Association<vector<reco::Muon> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Association<vector<reco::Muon> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLMuongRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Association<vector<reco::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Association<vector<reco::Muon> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonShower> > : new ::edm::Wrapper<vector<reco::MuonShower> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonShower> >[nElements] : new ::edm::Wrapper<vector<reco::MuonShower> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::MuonShower> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::MuonShower> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonShowergRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::MuonShower> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::MuonShower> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonShower> > : new ::edm::Wrapper<edm::ValueMap<reco::MuonShower> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonShower> >[nElements] : new ::edm::Wrapper<edm::ValueMap<reco::MuonShower> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<reco::MuonShower> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<reco::MuonShower> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonShowergRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<reco::MuonShower> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<reco::MuonShower> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> > : new ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >[nElements] : new ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDYTInfogRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<reco::DYTInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ptr<reco::Muon> > : new ::edm::Wrapper<edm::Ptr<reco::Muon> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ptr<reco::Muon> >[nElements] : new ::edm::Wrapper<edm::Ptr<reco::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Ptr<reco::Muon> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Ptr<reco::Muon> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLPtrlErecocLcLMuongRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Ptr<reco::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Ptr<reco::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::PtrVector<reco::Muon> > : new ::edm::Wrapper<edm::PtrVector<reco::Muon> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::PtrVector<reco::Muon> >[nElements] : new ::edm::Wrapper<edm::PtrVector<reco::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::PtrVector<reco::Muon> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::PtrVector<reco::Muon> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLPtrVectorlErecocLcLMuongRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::PtrVector<reco::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::PtrVector<reco::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<EmulatedME0Segment> > : new ::edm::Wrapper<vector<EmulatedME0Segment> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<EmulatedME0Segment> >[nElements] : new ::edm::Wrapper<vector<EmulatedME0Segment> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<EmulatedME0Segment> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<EmulatedME0Segment> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEEmulatedME0SegmentgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<EmulatedME0Segment> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<EmulatedME0Segment> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::ME0Muon> > : new ::edm::Wrapper<vector<reco::ME0Muon> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::ME0Muon> >[nElements] : new ::edm::Wrapper<vector<reco::ME0Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::ME0Muon> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::ME0Muon> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLME0MuongRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::ME0Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::ME0Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonSimInfo> > : new ::edm::Wrapper<vector<reco::MuonSimInfo> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::MuonSimInfo> >[nElements] : new ::edm::Wrapper<vector<reco::MuonSimInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::MuonSimInfo> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::MuonSimInfo> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLMuonSimInfogRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::MuonSimInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::MuonSimInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> > : new ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >[nElements] : new ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLMuonSimInfogRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR(void *p) {
      delete ((::edm::reftobase::BaseHolder<reco::Muon>*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR(void *p) {
      delete [] ((::edm::reftobase::BaseHolder<reco::Muon>*)p);
   }
   static void destruct_edmcLcLreftobasecLcLBaseHolderlErecocLcLMuongR(void *p) {
      typedef ::edm::reftobase::BaseHolder<reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::BaseHolder<reco::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::IndirectHolder<reco::Muon> : new ::edm::reftobase::IndirectHolder<reco::Muon>;
   }
   static void *newArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::IndirectHolder<reco::Muon>[nElements] : new ::edm::reftobase::IndirectHolder<reco::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR(void *p) {
      delete ((::edm::reftobase::IndirectHolder<reco::Muon>*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR(void *p) {
      delete [] ((::edm::reftobase::IndirectHolder<reco::Muon>*)p);
   }
   static void destruct_edmcLcLreftobasecLcLIndirectHolderlErecocLcLMuongR(void *p) {
      typedef ::edm::reftobase::IndirectHolder<reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::IndirectHolder<reco::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements] : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR(void *p) {
      delete ((::edm::reftobase::BaseVectorHolder<reco::Muon>*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR(void *p) {
      delete [] ((::edm::reftobase::BaseVectorHolder<reco::Muon>*)p);
   }
   static void destruct_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLMuongR(void *p) {
      typedef ::edm::reftobase::BaseVectorHolder<reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::BaseVectorHolder<reco::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > : new ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements] : new ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLVectorHolderlErecocLcLCandidatecOedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLPtrlErecocLcLMuongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ptr<reco::Muon> : new ::edm::Ptr<reco::Muon>;
   }
   static void *newArray_edmcLcLPtrlErecocLcLMuongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ptr<reco::Muon>[nElements] : new ::edm::Ptr<reco::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLPtrlErecocLcLMuongR(void *p) {
      delete ((::edm::Ptr<reco::Muon>*)p);
   }
   static void deleteArray_edmcLcLPtrlErecocLcLMuongR(void *p) {
      delete [] ((::edm::Ptr<reco::Muon>*)p);
   }
   static void destruct_edmcLcLPtrlErecocLcLMuongR(void *p) {
      typedef ::edm::Ptr<reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ptr<reco::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLPtrVectorlErecocLcLMuongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::PtrVector<reco::Muon> : new ::edm::PtrVector<reco::Muon>;
   }
   static void *newArray_edmcLcLPtrVectorlErecocLcLMuongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::PtrVector<reco::Muon>[nElements] : new ::edm::PtrVector<reco::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLPtrVectorlErecocLcLMuongR(void *p) {
      delete ((::edm::PtrVector<reco::Muon>*)p);
   }
   static void deleteArray_edmcLcLPtrVectorlErecocLcLMuongR(void *p) {
      delete [] ((::edm::PtrVector<reco::Muon>*)p);
   }
   static void destruct_edmcLcLPtrVectorlErecocLcLMuongR(void *p) {
      typedef ::edm::PtrVector<reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::PtrVector<reco::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLMuonTimeExtragR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonTimeExtra> : new ::edm::ValueMap<reco::MuonTimeExtra>;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLMuonTimeExtragR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonTimeExtra>[nElements] : new ::edm::ValueMap<reco::MuonTimeExtra>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLMuonTimeExtragR(void *p) {
      delete ((::edm::ValueMap<reco::MuonTimeExtra>*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonTimeExtragR(void *p) {
      delete [] ((::edm::ValueMap<reco::MuonTimeExtra>*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLMuonTimeExtragR(void *p) {
      typedef ::edm::ValueMap<reco::MuonTimeExtra> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::MuonTimeExtra>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > : new ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >;
   }
   static void *newArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements] : new ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete ((::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void deleteArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete [] ((::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void destruct_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      typedef ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator : new ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator;
   }
   static void *newArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator[nElements] : new ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator(void *p) {
      delete ((::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator*)p);
   }
   static void deleteArray_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator(void *p) {
      delete [] ((::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator*)p);
   }
   static void destruct_edmcLcLValueMaplEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgRcLcLconst_iterator(void *p) {
      typedef ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >::const_iterator

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonMETCorrectionData> : new ::edm::ValueMap<reco::MuonMETCorrectionData>;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonMETCorrectionData>[nElements] : new ::edm::ValueMap<reco::MuonMETCorrectionData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR(void *p) {
      delete ((::edm::ValueMap<reco::MuonMETCorrectionData>*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR(void *p) {
      delete [] ((::edm::ValueMap<reco::MuonMETCorrectionData>*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagR(void *p) {
      typedef ::edm::ValueMap<reco::MuonMETCorrectionData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::MuonMETCorrectionData>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator : new ::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator[nElements] : new ::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator(void *p) {
      delete ((::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator(void *p) {
      delete [] ((::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLMuonMETCorrectionDatagRcLcLconst_iterator(void *p) {
      typedef ::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLMuonQualitygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonQuality> : new ::edm::ValueMap<reco::MuonQuality>;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLMuonQualitygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonQuality>[nElements] : new ::edm::ValueMap<reco::MuonQuality>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLMuonQualitygR(void *p) {
      delete ((::edm::ValueMap<reco::MuonQuality>*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonQualitygR(void *p) {
      delete [] ((::edm::ValueMap<reco::MuonQuality>*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLMuonQualitygR(void *p) {
      typedef ::edm::ValueMap<reco::MuonQuality> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::MuonQuality>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonQuality>::const_iterator : new ::edm::ValueMap<reco::MuonQuality>::const_iterator;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonQuality>::const_iterator[nElements] : new ::edm::ValueMap<reco::MuonQuality>::const_iterator[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator(void *p) {
      delete ((::edm::ValueMap<reco::MuonQuality>::const_iterator*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator(void *p) {
      delete [] ((::edm::ValueMap<reco::MuonQuality>::const_iterator*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLMuonQualitygRcLcLconst_iterator(void *p) {
      typedef ::edm::ValueMap<reco::MuonQuality>::const_iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::MuonQuality>::const_iterator

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonCosmicCompatibility> : new ::edm::ValueMap<reco::MuonCosmicCompatibility>;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonCosmicCompatibility>[nElements] : new ::edm::ValueMap<reco::MuonCosmicCompatibility>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR(void *p) {
      delete ((::edm::ValueMap<reco::MuonCosmicCompatibility>*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR(void *p) {
      delete [] ((::edm::ValueMap<reco::MuonCosmicCompatibility>*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygR(void *p) {
      typedef ::edm::ValueMap<reco::MuonCosmicCompatibility> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::MuonCosmicCompatibility>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator : new ::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator[nElements] : new ::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator(void *p) {
      delete ((::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator(void *p) {
      delete [] ((::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLMuonCosmicCompatibilitygRcLcLconst_iterator(void *p) {
      typedef ::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLMuonShowergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonShower> : new ::edm::ValueMap<reco::MuonShower>;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLMuonShowergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonShower>[nElements] : new ::edm::ValueMap<reco::MuonShower>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLMuonShowergR(void *p) {
      delete ((::edm::ValueMap<reco::MuonShower>*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonShowergR(void *p) {
      delete [] ((::edm::ValueMap<reco::MuonShower>*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLMuonShowergR(void *p) {
      typedef ::edm::ValueMap<reco::MuonShower> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::MuonShower>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonShower>::const_iterator : new ::edm::ValueMap<reco::MuonShower>::const_iterator;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonShower>::const_iterator[nElements] : new ::edm::ValueMap<reco::MuonShower>::const_iterator[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator(void *p) {
      delete ((::edm::ValueMap<reco::MuonShower>::const_iterator*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator(void *p) {
      delete [] ((::edm::ValueMap<reco::MuonShower>::const_iterator*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLMuonShowergRcLcLconst_iterator(void *p) {
      typedef ::edm::ValueMap<reco::MuonShower>::const_iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::MuonShower>::const_iterator

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLDYTInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::DYTInfo> : new ::edm::ValueMap<reco::DYTInfo>;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLDYTInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::DYTInfo>[nElements] : new ::edm::ValueMap<reco::DYTInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLDYTInfogR(void *p) {
      delete ((::edm::ValueMap<reco::DYTInfo>*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLDYTInfogR(void *p) {
      delete [] ((::edm::ValueMap<reco::DYTInfo>*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLDYTInfogR(void *p) {
      typedef ::edm::ValueMap<reco::DYTInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::DYTInfo>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::DYTInfo>::const_iterator : new ::edm::ValueMap<reco::DYTInfo>::const_iterator;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::DYTInfo>::const_iterator[nElements] : new ::edm::ValueMap<reco::DYTInfo>::const_iterator[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator(void *p) {
      delete ((::edm::ValueMap<reco::DYTInfo>::const_iterator*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator(void *p) {
      delete [] ((::edm::ValueMap<reco::DYTInfo>::const_iterator*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLDYTInfogRcLcLconst_iterator(void *p) {
      typedef ::edm::ValueMap<reco::DYTInfo>::const_iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::DYTInfo>::const_iterator

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLMuonSimInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonSimInfo> : new ::edm::ValueMap<reco::MuonSimInfo>;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLMuonSimInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::MuonSimInfo>[nElements] : new ::edm::ValueMap<reco::MuonSimInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLMuonSimInfogR(void *p) {
      delete ((::edm::ValueMap<reco::MuonSimInfo>*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLMuonSimInfogR(void *p) {
      delete [] ((::edm::ValueMap<reco::MuonSimInfo>*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLMuonSimInfogR(void *p) {
      typedef ::edm::ValueMap<reco::MuonSimInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::MuonSimInfo>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::Muon> > : new ::edm::Association<vector<reco::Muon> >;
   }
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::Muon> >[nElements] : new ::edm::Association<vector<reco::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR(void *p) {
      delete ((::edm::Association<vector<reco::Muon> >*)p);
   }
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR(void *p) {
      delete [] ((::edm::Association<vector<reco::Muon> >*)p);
   }
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLMuongRsPgR(void *p) {
      typedef ::edm::Association<vector<reco::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Association<vector<reco::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > : new ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements] : new ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefVectorHolderlEedmcLcLRefVectorlEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefToBaseProdlErecocLcLMuongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseProd<reco::Muon> : new ::edm::RefToBaseProd<reco::Muon>;
   }
   static void *newArray_edmcLcLRefToBaseProdlErecocLcLMuongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseProd<reco::Muon>[nElements] : new ::edm::RefToBaseProd<reco::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefToBaseProdlErecocLcLMuongR(void *p) {
      delete ((::edm::RefToBaseProd<reco::Muon>*)p);
   }
   static void deleteArray_edmcLcLRefToBaseProdlErecocLcLMuongR(void *p) {
      delete [] ((::edm::RefToBaseProd<reco::Muon>*)p);
   }
   static void destruct_edmcLcLRefToBaseProdlErecocLcLMuongR(void *p) {
      typedef ::edm::RefToBaseProd<reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefToBaseProd<reco::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonSegmentMatch(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonSegmentMatch : new ::reco::MuonSegmentMatch;
   }
   static void *newArray_recocLcLMuonSegmentMatch(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonSegmentMatch[nElements] : new ::reco::MuonSegmentMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonSegmentMatch(void *p) {
      delete ((::reco::MuonSegmentMatch*)p);
   }
   static void deleteArray_recocLcLMuonSegmentMatch(void *p) {
      delete [] ((::reco::MuonSegmentMatch*)p);
   }
   static void destruct_recocLcLMuonSegmentMatch(void *p) {
      typedef ::reco::MuonSegmentMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonSegmentMatch

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonRPCHitMatch(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonRPCHitMatch : new ::reco::MuonRPCHitMatch;
   }
   static void *newArray_recocLcLMuonRPCHitMatch(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonRPCHitMatch[nElements] : new ::reco::MuonRPCHitMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonRPCHitMatch(void *p) {
      delete ((::reco::MuonRPCHitMatch*)p);
   }
   static void deleteArray_recocLcLMuonRPCHitMatch(void *p) {
      delete [] ((::reco::MuonRPCHitMatch*)p);
   }
   static void destruct_recocLcLMuonRPCHitMatch(void *p) {
      typedef ::reco::MuonRPCHitMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonRPCHitMatch

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonChamberMatch(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonChamberMatch : new ::reco::MuonChamberMatch;
   }
   static void *newArray_recocLcLMuonChamberMatch(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonChamberMatch[nElements] : new ::reco::MuonChamberMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonChamberMatch(void *p) {
      delete ((::reco::MuonChamberMatch*)p);
   }
   static void deleteArray_recocLcLMuonChamberMatch(void *p) {
      delete [] ((::reco::MuonChamberMatch*)p);
   }
   static void destruct_recocLcLMuonChamberMatch(void *p) {
      typedef ::reco::MuonChamberMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonChamberMatch

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonIsolation(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonIsolation : new ::reco::MuonIsolation;
   }
   static void *newArray_recocLcLMuonIsolation(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonIsolation[nElements] : new ::reco::MuonIsolation[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonIsolation(void *p) {
      delete ((::reco::MuonIsolation*)p);
   }
   static void deleteArray_recocLcLMuonIsolation(void *p) {
      delete [] ((::reco::MuonIsolation*)p);
   }
   static void destruct_recocLcLMuonIsolation(void *p) {
      typedef ::reco::MuonIsolation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonIsolation

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonPFIsolation(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonPFIsolation : new ::reco::MuonPFIsolation;
   }
   static void *newArray_recocLcLMuonPFIsolation(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonPFIsolation[nElements] : new ::reco::MuonPFIsolation[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonPFIsolation(void *p) {
      delete ((::reco::MuonPFIsolation*)p);
   }
   static void deleteArray_recocLcLMuonPFIsolation(void *p) {
      delete [] ((::reco::MuonPFIsolation*)p);
   }
   static void destruct_recocLcLMuonPFIsolation(void *p) {
      typedef ::reco::MuonPFIsolation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonPFIsolation

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonEnergy(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonEnergy : new ::reco::MuonEnergy;
   }
   static void *newArray_recocLcLMuonEnergy(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonEnergy[nElements] : new ::reco::MuonEnergy[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonEnergy(void *p) {
      delete ((::reco::MuonEnergy*)p);
   }
   static void deleteArray_recocLcLMuonEnergy(void *p) {
      delete [] ((::reco::MuonEnergy*)p);
   }
   static void destruct_recocLcLMuonEnergy(void *p) {
      typedef ::reco::MuonEnergy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonEnergy

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonTime(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonTime : new ::reco::MuonTime;
   }
   static void *newArray_recocLcLMuonTime(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonTime[nElements] : new ::reco::MuonTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonTime(void *p) {
      delete ((::reco::MuonTime*)p);
   }
   static void deleteArray_recocLcLMuonTime(void *p) {
      delete [] ((::reco::MuonTime*)p);
   }
   static void destruct_recocLcLMuonTime(void *p) {
      typedef ::reco::MuonTime current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonTime

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonQuality(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonQuality : new ::reco::MuonQuality;
   }
   static void *newArray_recocLcLMuonQuality(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonQuality[nElements] : new ::reco::MuonQuality[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonQuality(void *p) {
      delete ((::reco::MuonQuality*)p);
   }
   static void deleteArray_recocLcLMuonQuality(void *p) {
      delete [] ((::reco::MuonQuality*)p);
   }
   static void destruct_recocLcLMuonQuality(void *p) {
      typedef ::reco::MuonQuality current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonQuality

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuon(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::Muon : new ::reco::Muon;
   }
   static void *newArray_recocLcLMuon(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::Muon[nElements] : new ::reco::Muon[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuon(void *p) {
      delete ((::reco::Muon*)p);
   }
   static void deleteArray_recocLcLMuon(void *p) {
      delete [] ((::reco::Muon*)p);
   }
   static void destruct_recocLcLMuon(void *p) {
      typedef ::reco::Muon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::Muon

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLCaloMuon(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloMuon : new ::reco::CaloMuon;
   }
   static void *newArray_recocLcLCaloMuon(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloMuon[nElements] : new ::reco::CaloMuon[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLCaloMuon(void *p) {
      delete ((::reco::CaloMuon*)p);
   }
   static void deleteArray_recocLcLCaloMuon(void *p) {
      delete [] ((::reco::CaloMuon*)p);
   }
   static void destruct_recocLcLCaloMuon(void *p) {
      typedef ::reco::CaloMuon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::CaloMuon

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonTrackLinks(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonTrackLinks : new ::reco::MuonTrackLinks;
   }
   static void *newArray_recocLcLMuonTrackLinks(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonTrackLinks[nElements] : new ::reco::MuonTrackLinks[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonTrackLinks(void *p) {
      delete ((::reco::MuonTrackLinks*)p);
   }
   static void deleteArray_recocLcLMuonTrackLinks(void *p) {
      delete [] ((::reco::MuonTrackLinks*)p);
   }
   static void destruct_recocLcLMuonTrackLinks(void *p) {
      typedef ::reco::MuonTrackLinks current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonTrackLinks

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonTimeExtra(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonTimeExtra : new ::reco::MuonTimeExtra;
   }
   static void *newArray_recocLcLMuonTimeExtra(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonTimeExtra[nElements] : new ::reco::MuonTimeExtra[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonTimeExtra(void *p) {
      delete ((::reco::MuonTimeExtra*)p);
   }
   static void deleteArray_recocLcLMuonTimeExtra(void *p) {
      delete [] ((::reco::MuonTimeExtra*)p);
   }
   static void destruct_recocLcLMuonTimeExtra(void *p) {
      typedef ::reco::MuonTimeExtra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonTimeExtra

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonMETCorrectionData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonMETCorrectionData : new ::reco::MuonMETCorrectionData;
   }
   static void *newArray_recocLcLMuonMETCorrectionData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonMETCorrectionData[nElements] : new ::reco::MuonMETCorrectionData[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonMETCorrectionData(void *p) {
      delete ((::reco::MuonMETCorrectionData*)p);
   }
   static void deleteArray_recocLcLMuonMETCorrectionData(void *p) {
      delete [] ((::reco::MuonMETCorrectionData*)p);
   }
   static void destruct_recocLcLMuonMETCorrectionData(void *p) {
      typedef ::reco::MuonMETCorrectionData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonMETCorrectionData

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonCosmicCompatibility(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonCosmicCompatibility : new ::reco::MuonCosmicCompatibility;
   }
   static void *newArray_recocLcLMuonCosmicCompatibility(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonCosmicCompatibility[nElements] : new ::reco::MuonCosmicCompatibility[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonCosmicCompatibility(void *p) {
      delete ((::reco::MuonCosmicCompatibility*)p);
   }
   static void deleteArray_recocLcLMuonCosmicCompatibility(void *p) {
      delete [] ((::reco::MuonCosmicCompatibility*)p);
   }
   static void destruct_recocLcLMuonCosmicCompatibility(void *p) {
      typedef ::reco::MuonCosmicCompatibility current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonCosmicCompatibility

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonShower(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonShower : new ::reco::MuonShower;
   }
   static void *newArray_recocLcLMuonShower(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonShower[nElements] : new ::reco::MuonShower[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonShower(void *p) {
      delete ((::reco::MuonShower*)p);
   }
   static void deleteArray_recocLcLMuonShower(void *p) {
      delete [] ((::reco::MuonShower*)p);
   }
   static void destruct_recocLcLMuonShower(void *p) {
      typedef ::reco::MuonShower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonShower

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > > : new ::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >[nElements] : new ::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR(void *p) {
      delete ((::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLMuongRsPgRsPgR(void *p) {
      typedef ::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLDYTInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::DYTInfo : new ::reco::DYTInfo;
   }
   static void *newArray_recocLcLDYTInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::DYTInfo[nElements] : new ::reco::DYTInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLDYTInfo(void *p) {
      delete ((::reco::DYTInfo*)p);
   }
   static void deleteArray_recocLcLDYTInfo(void *p) {
      delete [] ((::reco::DYTInfo*)p);
   }
   static void destruct_recocLcLDYTInfo(void *p) {
      typedef ::reco::DYTInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::DYTInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_EmulatedME0Segment(void *p) {
      return  p ? new(p) ::EmulatedME0Segment : new ::EmulatedME0Segment;
   }
   static void *newArray_EmulatedME0Segment(Long_t nElements, void *p) {
      return p ? new(p) ::EmulatedME0Segment[nElements] : new ::EmulatedME0Segment[nElements];
   }
   // Wrapper around operator delete
   static void delete_EmulatedME0Segment(void *p) {
      delete ((::EmulatedME0Segment*)p);
   }
   static void deleteArray_EmulatedME0Segment(void *p) {
      delete [] ((::EmulatedME0Segment*)p);
   }
   static void destruct_EmulatedME0Segment(void *p) {
      typedef ::EmulatedME0Segment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EmulatedME0Segment

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLME0Muon(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::ME0Muon : new ::reco::ME0Muon;
   }
   static void *newArray_recocLcLME0Muon(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::ME0Muon[nElements] : new ::reco::ME0Muon[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLME0Muon(void *p) {
      delete ((::reco::ME0Muon*)p);
   }
   static void deleteArray_recocLcLME0Muon(void *p) {
      delete [] ((::reco::ME0Muon*)p);
   }
   static void destruct_recocLcLME0Muon(void *p) {
      typedef ::reco::ME0Muon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::ME0Muon

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLMuonSimInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonSimInfo : new ::reco::MuonSimInfo;
   }
   static void *newArray_recocLcLMuonSimInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::MuonSimInfo[nElements] : new ::reco::MuonSimInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLMuonSimInfo(void *p) {
      delete ((::reco::MuonSimInfo*)p);
   }
   static void deleteArray_recocLcLMuonSimInfo(void *p) {
      delete [] ((::reco::MuonSimInfo*)p);
   }
   static void destruct_recocLcLMuonSimInfo(void *p) {
      typedef ::reco::MuonSimInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::MuonSimInfo

namespace ROOT {
   static TClass *vectorlErecocLcLMuonTrackLinksgR_Dictionary();
   static void vectorlErecocLcLMuonTrackLinksgR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLMuonTrackLinksgR(void *p = 0);
   static void *newArray_vectorlErecocLcLMuonTrackLinksgR(Long_t size, void *p);
   static void delete_vectorlErecocLcLMuonTrackLinksgR(void *p);
   static void deleteArray_vectorlErecocLcLMuonTrackLinksgR(void *p);
   static void destruct_vectorlErecocLcLMuonTrackLinksgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::MuonTrackLinks>*)
   {
      vector<reco::MuonTrackLinks> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::MuonTrackLinks>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::MuonTrackLinks>", -2, "vector", 216,
                  typeid(vector<reco::MuonTrackLinks>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLMuonTrackLinksgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::MuonTrackLinks>) );
      instance.SetNew(&new_vectorlErecocLcLMuonTrackLinksgR);
      instance.SetNewArray(&newArray_vectorlErecocLcLMuonTrackLinksgR);
      instance.SetDelete(&delete_vectorlErecocLcLMuonTrackLinksgR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLMuonTrackLinksgR);
      instance.SetDestructor(&destruct_vectorlErecocLcLMuonTrackLinksgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::MuonTrackLinks> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::MuonTrackLinks>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLMuonTrackLinksgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::MuonTrackLinks>*)0x0)->GetClass();
      vectorlErecocLcLMuonTrackLinksgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLMuonTrackLinksgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLMuonTrackLinksgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonTrackLinks> : new vector<reco::MuonTrackLinks>;
   }
   static void *newArray_vectorlErecocLcLMuonTrackLinksgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonTrackLinks>[nElements] : new vector<reco::MuonTrackLinks>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLMuonTrackLinksgR(void *p) {
      delete ((vector<reco::MuonTrackLinks>*)p);
   }
   static void deleteArray_vectorlErecocLcLMuonTrackLinksgR(void *p) {
      delete [] ((vector<reco::MuonTrackLinks>*)p);
   }
   static void destruct_vectorlErecocLcLMuonTrackLinksgR(void *p) {
      typedef vector<reco::MuonTrackLinks> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::MuonTrackLinks>

namespace ROOT {
   static TClass *vectorlErecocLcLMuonTimeExtragR_Dictionary();
   static void vectorlErecocLcLMuonTimeExtragR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLMuonTimeExtragR(void *p = 0);
   static void *newArray_vectorlErecocLcLMuonTimeExtragR(Long_t size, void *p);
   static void delete_vectorlErecocLcLMuonTimeExtragR(void *p);
   static void deleteArray_vectorlErecocLcLMuonTimeExtragR(void *p);
   static void destruct_vectorlErecocLcLMuonTimeExtragR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::MuonTimeExtra>*)
   {
      vector<reco::MuonTimeExtra> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::MuonTimeExtra>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::MuonTimeExtra>", -2, "vector", 216,
                  typeid(vector<reco::MuonTimeExtra>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLMuonTimeExtragR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::MuonTimeExtra>) );
      instance.SetNew(&new_vectorlErecocLcLMuonTimeExtragR);
      instance.SetNewArray(&newArray_vectorlErecocLcLMuonTimeExtragR);
      instance.SetDelete(&delete_vectorlErecocLcLMuonTimeExtragR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLMuonTimeExtragR);
      instance.SetDestructor(&destruct_vectorlErecocLcLMuonTimeExtragR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::MuonTimeExtra> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::MuonTimeExtra>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLMuonTimeExtragR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::MuonTimeExtra>*)0x0)->GetClass();
      vectorlErecocLcLMuonTimeExtragR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLMuonTimeExtragR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLMuonTimeExtragR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonTimeExtra> : new vector<reco::MuonTimeExtra>;
   }
   static void *newArray_vectorlErecocLcLMuonTimeExtragR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonTimeExtra>[nElements] : new vector<reco::MuonTimeExtra>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLMuonTimeExtragR(void *p) {
      delete ((vector<reco::MuonTimeExtra>*)p);
   }
   static void deleteArray_vectorlErecocLcLMuonTimeExtragR(void *p) {
      delete [] ((vector<reco::MuonTimeExtra>*)p);
   }
   static void destruct_vectorlErecocLcLMuonTimeExtragR(void *p) {
      typedef vector<reco::MuonTimeExtra> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::MuonTimeExtra>

namespace ROOT {
   static TClass *vectorlErecocLcLMuonSimInfogR_Dictionary();
   static void vectorlErecocLcLMuonSimInfogR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLMuonSimInfogR(void *p = 0);
   static void *newArray_vectorlErecocLcLMuonSimInfogR(Long_t size, void *p);
   static void delete_vectorlErecocLcLMuonSimInfogR(void *p);
   static void deleteArray_vectorlErecocLcLMuonSimInfogR(void *p);
   static void destruct_vectorlErecocLcLMuonSimInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::MuonSimInfo>*)
   {
      vector<reco::MuonSimInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::MuonSimInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::MuonSimInfo>", -2, "vector", 216,
                  typeid(vector<reco::MuonSimInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLMuonSimInfogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::MuonSimInfo>) );
      instance.SetNew(&new_vectorlErecocLcLMuonSimInfogR);
      instance.SetNewArray(&newArray_vectorlErecocLcLMuonSimInfogR);
      instance.SetDelete(&delete_vectorlErecocLcLMuonSimInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLMuonSimInfogR);
      instance.SetDestructor(&destruct_vectorlErecocLcLMuonSimInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::MuonSimInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::MuonSimInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLMuonSimInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::MuonSimInfo>*)0x0)->GetClass();
      vectorlErecocLcLMuonSimInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLMuonSimInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLMuonSimInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonSimInfo> : new vector<reco::MuonSimInfo>;
   }
   static void *newArray_vectorlErecocLcLMuonSimInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonSimInfo>[nElements] : new vector<reco::MuonSimInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLMuonSimInfogR(void *p) {
      delete ((vector<reco::MuonSimInfo>*)p);
   }
   static void deleteArray_vectorlErecocLcLMuonSimInfogR(void *p) {
      delete [] ((vector<reco::MuonSimInfo>*)p);
   }
   static void destruct_vectorlErecocLcLMuonSimInfogR(void *p) {
      typedef vector<reco::MuonSimInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::MuonSimInfo>

namespace ROOT {
   static TClass *vectorlErecocLcLMuonShowergR_Dictionary();
   static void vectorlErecocLcLMuonShowergR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLMuonShowergR(void *p = 0);
   static void *newArray_vectorlErecocLcLMuonShowergR(Long_t size, void *p);
   static void delete_vectorlErecocLcLMuonShowergR(void *p);
   static void deleteArray_vectorlErecocLcLMuonShowergR(void *p);
   static void destruct_vectorlErecocLcLMuonShowergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::MuonShower>*)
   {
      vector<reco::MuonShower> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::MuonShower>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::MuonShower>", -2, "vector", 216,
                  typeid(vector<reco::MuonShower>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLMuonShowergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::MuonShower>) );
      instance.SetNew(&new_vectorlErecocLcLMuonShowergR);
      instance.SetNewArray(&newArray_vectorlErecocLcLMuonShowergR);
      instance.SetDelete(&delete_vectorlErecocLcLMuonShowergR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLMuonShowergR);
      instance.SetDestructor(&destruct_vectorlErecocLcLMuonShowergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::MuonShower> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::MuonShower>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLMuonShowergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::MuonShower>*)0x0)->GetClass();
      vectorlErecocLcLMuonShowergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLMuonShowergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLMuonShowergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonShower> : new vector<reco::MuonShower>;
   }
   static void *newArray_vectorlErecocLcLMuonShowergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonShower>[nElements] : new vector<reco::MuonShower>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLMuonShowergR(void *p) {
      delete ((vector<reco::MuonShower>*)p);
   }
   static void deleteArray_vectorlErecocLcLMuonShowergR(void *p) {
      delete [] ((vector<reco::MuonShower>*)p);
   }
   static void destruct_vectorlErecocLcLMuonShowergR(void *p) {
      typedef vector<reco::MuonShower> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::MuonShower>

namespace ROOT {
   static TClass *vectorlErecocLcLMuonSegmentMatchgR_Dictionary();
   static void vectorlErecocLcLMuonSegmentMatchgR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLMuonSegmentMatchgR(void *p = 0);
   static void *newArray_vectorlErecocLcLMuonSegmentMatchgR(Long_t size, void *p);
   static void delete_vectorlErecocLcLMuonSegmentMatchgR(void *p);
   static void deleteArray_vectorlErecocLcLMuonSegmentMatchgR(void *p);
   static void destruct_vectorlErecocLcLMuonSegmentMatchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::MuonSegmentMatch>*)
   {
      vector<reco::MuonSegmentMatch> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::MuonSegmentMatch>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::MuonSegmentMatch>", -2, "vector", 216,
                  typeid(vector<reco::MuonSegmentMatch>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLMuonSegmentMatchgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::MuonSegmentMatch>) );
      instance.SetNew(&new_vectorlErecocLcLMuonSegmentMatchgR);
      instance.SetNewArray(&newArray_vectorlErecocLcLMuonSegmentMatchgR);
      instance.SetDelete(&delete_vectorlErecocLcLMuonSegmentMatchgR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLMuonSegmentMatchgR);
      instance.SetDestructor(&destruct_vectorlErecocLcLMuonSegmentMatchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::MuonSegmentMatch> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::MuonSegmentMatch>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLMuonSegmentMatchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::MuonSegmentMatch>*)0x0)->GetClass();
      vectorlErecocLcLMuonSegmentMatchgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLMuonSegmentMatchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLMuonSegmentMatchgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonSegmentMatch> : new vector<reco::MuonSegmentMatch>;
   }
   static void *newArray_vectorlErecocLcLMuonSegmentMatchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonSegmentMatch>[nElements] : new vector<reco::MuonSegmentMatch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLMuonSegmentMatchgR(void *p) {
      delete ((vector<reco::MuonSegmentMatch>*)p);
   }
   static void deleteArray_vectorlErecocLcLMuonSegmentMatchgR(void *p) {
      delete [] ((vector<reco::MuonSegmentMatch>*)p);
   }
   static void destruct_vectorlErecocLcLMuonSegmentMatchgR(void *p) {
      typedef vector<reco::MuonSegmentMatch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::MuonSegmentMatch>

namespace ROOT {
   static TClass *vectorlErecocLcLMuonRPCHitMatchgR_Dictionary();
   static void vectorlErecocLcLMuonRPCHitMatchgR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLMuonRPCHitMatchgR(void *p = 0);
   static void *newArray_vectorlErecocLcLMuonRPCHitMatchgR(Long_t size, void *p);
   static void delete_vectorlErecocLcLMuonRPCHitMatchgR(void *p);
   static void deleteArray_vectorlErecocLcLMuonRPCHitMatchgR(void *p);
   static void destruct_vectorlErecocLcLMuonRPCHitMatchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::MuonRPCHitMatch>*)
   {
      vector<reco::MuonRPCHitMatch> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::MuonRPCHitMatch>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::MuonRPCHitMatch>", -2, "vector", 216,
                  typeid(vector<reco::MuonRPCHitMatch>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLMuonRPCHitMatchgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::MuonRPCHitMatch>) );
      instance.SetNew(&new_vectorlErecocLcLMuonRPCHitMatchgR);
      instance.SetNewArray(&newArray_vectorlErecocLcLMuonRPCHitMatchgR);
      instance.SetDelete(&delete_vectorlErecocLcLMuonRPCHitMatchgR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLMuonRPCHitMatchgR);
      instance.SetDestructor(&destruct_vectorlErecocLcLMuonRPCHitMatchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::MuonRPCHitMatch> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::MuonRPCHitMatch>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLMuonRPCHitMatchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::MuonRPCHitMatch>*)0x0)->GetClass();
      vectorlErecocLcLMuonRPCHitMatchgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLMuonRPCHitMatchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLMuonRPCHitMatchgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonRPCHitMatch> : new vector<reco::MuonRPCHitMatch>;
   }
   static void *newArray_vectorlErecocLcLMuonRPCHitMatchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonRPCHitMatch>[nElements] : new vector<reco::MuonRPCHitMatch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLMuonRPCHitMatchgR(void *p) {
      delete ((vector<reco::MuonRPCHitMatch>*)p);
   }
   static void deleteArray_vectorlErecocLcLMuonRPCHitMatchgR(void *p) {
      delete [] ((vector<reco::MuonRPCHitMatch>*)p);
   }
   static void destruct_vectorlErecocLcLMuonRPCHitMatchgR(void *p) {
      typedef vector<reco::MuonRPCHitMatch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::MuonRPCHitMatch>

namespace ROOT {
   static TClass *vectorlErecocLcLMuonQualitygR_Dictionary();
   static void vectorlErecocLcLMuonQualitygR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLMuonQualitygR(void *p = 0);
   static void *newArray_vectorlErecocLcLMuonQualitygR(Long_t size, void *p);
   static void delete_vectorlErecocLcLMuonQualitygR(void *p);
   static void deleteArray_vectorlErecocLcLMuonQualitygR(void *p);
   static void destruct_vectorlErecocLcLMuonQualitygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::MuonQuality>*)
   {
      vector<reco::MuonQuality> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::MuonQuality>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::MuonQuality>", -2, "vector", 216,
                  typeid(vector<reco::MuonQuality>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLMuonQualitygR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::MuonQuality>) );
      instance.SetNew(&new_vectorlErecocLcLMuonQualitygR);
      instance.SetNewArray(&newArray_vectorlErecocLcLMuonQualitygR);
      instance.SetDelete(&delete_vectorlErecocLcLMuonQualitygR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLMuonQualitygR);
      instance.SetDestructor(&destruct_vectorlErecocLcLMuonQualitygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::MuonQuality> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::MuonQuality>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLMuonQualitygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::MuonQuality>*)0x0)->GetClass();
      vectorlErecocLcLMuonQualitygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLMuonQualitygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLMuonQualitygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonQuality> : new vector<reco::MuonQuality>;
   }
   static void *newArray_vectorlErecocLcLMuonQualitygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonQuality>[nElements] : new vector<reco::MuonQuality>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLMuonQualitygR(void *p) {
      delete ((vector<reco::MuonQuality>*)p);
   }
   static void deleteArray_vectorlErecocLcLMuonQualitygR(void *p) {
      delete [] ((vector<reco::MuonQuality>*)p);
   }
   static void destruct_vectorlErecocLcLMuonQualitygR(void *p) {
      typedef vector<reco::MuonQuality> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::MuonQuality>

namespace ROOT {
   static TClass *vectorlErecocLcLMuonMETCorrectionDatagR_Dictionary();
   static void vectorlErecocLcLMuonMETCorrectionDatagR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLMuonMETCorrectionDatagR(void *p = 0);
   static void *newArray_vectorlErecocLcLMuonMETCorrectionDatagR(Long_t size, void *p);
   static void delete_vectorlErecocLcLMuonMETCorrectionDatagR(void *p);
   static void deleteArray_vectorlErecocLcLMuonMETCorrectionDatagR(void *p);
   static void destruct_vectorlErecocLcLMuonMETCorrectionDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::MuonMETCorrectionData>*)
   {
      vector<reco::MuonMETCorrectionData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::MuonMETCorrectionData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::MuonMETCorrectionData>", -2, "vector", 216,
                  typeid(vector<reco::MuonMETCorrectionData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLMuonMETCorrectionDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::MuonMETCorrectionData>) );
      instance.SetNew(&new_vectorlErecocLcLMuonMETCorrectionDatagR);
      instance.SetNewArray(&newArray_vectorlErecocLcLMuonMETCorrectionDatagR);
      instance.SetDelete(&delete_vectorlErecocLcLMuonMETCorrectionDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLMuonMETCorrectionDatagR);
      instance.SetDestructor(&destruct_vectorlErecocLcLMuonMETCorrectionDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::MuonMETCorrectionData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::MuonMETCorrectionData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLMuonMETCorrectionDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::MuonMETCorrectionData>*)0x0)->GetClass();
      vectorlErecocLcLMuonMETCorrectionDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLMuonMETCorrectionDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLMuonMETCorrectionDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonMETCorrectionData> : new vector<reco::MuonMETCorrectionData>;
   }
   static void *newArray_vectorlErecocLcLMuonMETCorrectionDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonMETCorrectionData>[nElements] : new vector<reco::MuonMETCorrectionData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLMuonMETCorrectionDatagR(void *p) {
      delete ((vector<reco::MuonMETCorrectionData>*)p);
   }
   static void deleteArray_vectorlErecocLcLMuonMETCorrectionDatagR(void *p) {
      delete [] ((vector<reco::MuonMETCorrectionData>*)p);
   }
   static void destruct_vectorlErecocLcLMuonMETCorrectionDatagR(void *p) {
      typedef vector<reco::MuonMETCorrectionData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::MuonMETCorrectionData>

namespace ROOT {
   static TClass *vectorlErecocLcLMuonCosmicCompatibilitygR_Dictionary();
   static void vectorlErecocLcLMuonCosmicCompatibilitygR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLMuonCosmicCompatibilitygR(void *p = 0);
   static void *newArray_vectorlErecocLcLMuonCosmicCompatibilitygR(Long_t size, void *p);
   static void delete_vectorlErecocLcLMuonCosmicCompatibilitygR(void *p);
   static void deleteArray_vectorlErecocLcLMuonCosmicCompatibilitygR(void *p);
   static void destruct_vectorlErecocLcLMuonCosmicCompatibilitygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::MuonCosmicCompatibility>*)
   {
      vector<reco::MuonCosmicCompatibility> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::MuonCosmicCompatibility>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::MuonCosmicCompatibility>", -2, "vector", 216,
                  typeid(vector<reco::MuonCosmicCompatibility>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLMuonCosmicCompatibilitygR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::MuonCosmicCompatibility>) );
      instance.SetNew(&new_vectorlErecocLcLMuonCosmicCompatibilitygR);
      instance.SetNewArray(&newArray_vectorlErecocLcLMuonCosmicCompatibilitygR);
      instance.SetDelete(&delete_vectorlErecocLcLMuonCosmicCompatibilitygR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLMuonCosmicCompatibilitygR);
      instance.SetDestructor(&destruct_vectorlErecocLcLMuonCosmicCompatibilitygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::MuonCosmicCompatibility> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::MuonCosmicCompatibility>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLMuonCosmicCompatibilitygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::MuonCosmicCompatibility>*)0x0)->GetClass();
      vectorlErecocLcLMuonCosmicCompatibilitygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLMuonCosmicCompatibilitygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLMuonCosmicCompatibilitygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonCosmicCompatibility> : new vector<reco::MuonCosmicCompatibility>;
   }
   static void *newArray_vectorlErecocLcLMuonCosmicCompatibilitygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonCosmicCompatibility>[nElements] : new vector<reco::MuonCosmicCompatibility>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLMuonCosmicCompatibilitygR(void *p) {
      delete ((vector<reco::MuonCosmicCompatibility>*)p);
   }
   static void deleteArray_vectorlErecocLcLMuonCosmicCompatibilitygR(void *p) {
      delete [] ((vector<reco::MuonCosmicCompatibility>*)p);
   }
   static void destruct_vectorlErecocLcLMuonCosmicCompatibilitygR(void *p) {
      typedef vector<reco::MuonCosmicCompatibility> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::MuonCosmicCompatibility>

namespace ROOT {
   static TClass *vectorlErecocLcLMuonChamberMatchgR_Dictionary();
   static void vectorlErecocLcLMuonChamberMatchgR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLMuonChamberMatchgR(void *p = 0);
   static void *newArray_vectorlErecocLcLMuonChamberMatchgR(Long_t size, void *p);
   static void delete_vectorlErecocLcLMuonChamberMatchgR(void *p);
   static void deleteArray_vectorlErecocLcLMuonChamberMatchgR(void *p);
   static void destruct_vectorlErecocLcLMuonChamberMatchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::MuonChamberMatch>*)
   {
      vector<reco::MuonChamberMatch> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::MuonChamberMatch>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::MuonChamberMatch>", -2, "vector", 216,
                  typeid(vector<reco::MuonChamberMatch>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLMuonChamberMatchgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::MuonChamberMatch>) );
      instance.SetNew(&new_vectorlErecocLcLMuonChamberMatchgR);
      instance.SetNewArray(&newArray_vectorlErecocLcLMuonChamberMatchgR);
      instance.SetDelete(&delete_vectorlErecocLcLMuonChamberMatchgR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLMuonChamberMatchgR);
      instance.SetDestructor(&destruct_vectorlErecocLcLMuonChamberMatchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::MuonChamberMatch> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::MuonChamberMatch>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLMuonChamberMatchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::MuonChamberMatch>*)0x0)->GetClass();
      vectorlErecocLcLMuonChamberMatchgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLMuonChamberMatchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLMuonChamberMatchgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonChamberMatch> : new vector<reco::MuonChamberMatch>;
   }
   static void *newArray_vectorlErecocLcLMuonChamberMatchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::MuonChamberMatch>[nElements] : new vector<reco::MuonChamberMatch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLMuonChamberMatchgR(void *p) {
      delete ((vector<reco::MuonChamberMatch>*)p);
   }
   static void deleteArray_vectorlErecocLcLMuonChamberMatchgR(void *p) {
      delete [] ((vector<reco::MuonChamberMatch>*)p);
   }
   static void destruct_vectorlErecocLcLMuonChamberMatchgR(void *p) {
      typedef vector<reco::MuonChamberMatch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::MuonChamberMatch>

namespace ROOT {
   static TClass *vectorlErecocLcLMuongR_Dictionary();
   static void vectorlErecocLcLMuongR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLMuongR(void *p = 0);
   static void *newArray_vectorlErecocLcLMuongR(Long_t size, void *p);
   static void delete_vectorlErecocLcLMuongR(void *p);
   static void deleteArray_vectorlErecocLcLMuongR(void *p);
   static void destruct_vectorlErecocLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::Muon>*)
   {
      vector<reco::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::Muon>", -2, "vector", 216,
                  typeid(vector<reco::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::Muon>) );
      instance.SetNew(&new_vectorlErecocLcLMuongR);
      instance.SetNewArray(&newArray_vectorlErecocLcLMuongR);
      instance.SetDelete(&delete_vectorlErecocLcLMuongR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLMuongR);
      instance.SetDestructor(&destruct_vectorlErecocLcLMuongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::Muon> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::Muon>*)0x0)->GetClass();
      vectorlErecocLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLMuongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::Muon> : new vector<reco::Muon>;
   }
   static void *newArray_vectorlErecocLcLMuongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::Muon>[nElements] : new vector<reco::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLMuongR(void *p) {
      delete ((vector<reco::Muon>*)p);
   }
   static void deleteArray_vectorlErecocLcLMuongR(void *p) {
      delete [] ((vector<reco::Muon>*)p);
   }
   static void destruct_vectorlErecocLcLMuongR(void *p) {
      typedef vector<reco::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::Muon>

namespace ROOT {
   static TClass *vectorlErecocLcLME0MuongR_Dictionary();
   static void vectorlErecocLcLME0MuongR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLME0MuongR(void *p = 0);
   static void *newArray_vectorlErecocLcLME0MuongR(Long_t size, void *p);
   static void delete_vectorlErecocLcLME0MuongR(void *p);
   static void deleteArray_vectorlErecocLcLME0MuongR(void *p);
   static void destruct_vectorlErecocLcLME0MuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::ME0Muon>*)
   {
      vector<reco::ME0Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::ME0Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::ME0Muon>", -2, "vector", 216,
                  typeid(vector<reco::ME0Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLME0MuongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::ME0Muon>) );
      instance.SetNew(&new_vectorlErecocLcLME0MuongR);
      instance.SetNewArray(&newArray_vectorlErecocLcLME0MuongR);
      instance.SetDelete(&delete_vectorlErecocLcLME0MuongR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLME0MuongR);
      instance.SetDestructor(&destruct_vectorlErecocLcLME0MuongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::ME0Muon> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::ME0Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLME0MuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::ME0Muon>*)0x0)->GetClass();
      vectorlErecocLcLME0MuongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLME0MuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLME0MuongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::ME0Muon> : new vector<reco::ME0Muon>;
   }
   static void *newArray_vectorlErecocLcLME0MuongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::ME0Muon>[nElements] : new vector<reco::ME0Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLME0MuongR(void *p) {
      delete ((vector<reco::ME0Muon>*)p);
   }
   static void deleteArray_vectorlErecocLcLME0MuongR(void *p) {
      delete [] ((vector<reco::ME0Muon>*)p);
   }
   static void destruct_vectorlErecocLcLME0MuongR(void *p) {
      typedef vector<reco::ME0Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::ME0Muon>

namespace ROOT {
   static TClass *vectorlErecocLcLDYTInfogR_Dictionary();
   static void vectorlErecocLcLDYTInfogR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLDYTInfogR(void *p = 0);
   static void *newArray_vectorlErecocLcLDYTInfogR(Long_t size, void *p);
   static void delete_vectorlErecocLcLDYTInfogR(void *p);
   static void deleteArray_vectorlErecocLcLDYTInfogR(void *p);
   static void destruct_vectorlErecocLcLDYTInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::DYTInfo>*)
   {
      vector<reco::DYTInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::DYTInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::DYTInfo>", -2, "vector", 216,
                  typeid(vector<reco::DYTInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLDYTInfogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::DYTInfo>) );
      instance.SetNew(&new_vectorlErecocLcLDYTInfogR);
      instance.SetNewArray(&newArray_vectorlErecocLcLDYTInfogR);
      instance.SetDelete(&delete_vectorlErecocLcLDYTInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLDYTInfogR);
      instance.SetDestructor(&destruct_vectorlErecocLcLDYTInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::DYTInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::DYTInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLDYTInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::DYTInfo>*)0x0)->GetClass();
      vectorlErecocLcLDYTInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLDYTInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLDYTInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::DYTInfo> : new vector<reco::DYTInfo>;
   }
   static void *newArray_vectorlErecocLcLDYTInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::DYTInfo>[nElements] : new vector<reco::DYTInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLDYTInfogR(void *p) {
      delete ((vector<reco::DYTInfo>*)p);
   }
   static void deleteArray_vectorlErecocLcLDYTInfogR(void *p) {
      delete [] ((vector<reco::DYTInfo>*)p);
   }
   static void destruct_vectorlErecocLcLDYTInfogR(void *p) {
      typedef vector<reco::DYTInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::DYTInfo>

namespace ROOT {
   static TClass *vectorlErecocLcLCaloMuongR_Dictionary();
   static void vectorlErecocLcLCaloMuongR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLCaloMuongR(void *p = 0);
   static void *newArray_vectorlErecocLcLCaloMuongR(Long_t size, void *p);
   static void delete_vectorlErecocLcLCaloMuongR(void *p);
   static void deleteArray_vectorlErecocLcLCaloMuongR(void *p);
   static void destruct_vectorlErecocLcLCaloMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::CaloMuon>*)
   {
      vector<reco::CaloMuon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::CaloMuon>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::CaloMuon>", -2, "vector", 216,
                  typeid(vector<reco::CaloMuon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLCaloMuongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::CaloMuon>) );
      instance.SetNew(&new_vectorlErecocLcLCaloMuongR);
      instance.SetNewArray(&newArray_vectorlErecocLcLCaloMuongR);
      instance.SetDelete(&delete_vectorlErecocLcLCaloMuongR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLCaloMuongR);
      instance.SetDestructor(&destruct_vectorlErecocLcLCaloMuongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::CaloMuon> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::CaloMuon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLCaloMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::CaloMuon>*)0x0)->GetClass();
      vectorlErecocLcLCaloMuongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLCaloMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLCaloMuongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::CaloMuon> : new vector<reco::CaloMuon>;
   }
   static void *newArray_vectorlErecocLcLCaloMuongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::CaloMuon>[nElements] : new vector<reco::CaloMuon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLCaloMuongR(void *p) {
      delete ((vector<reco::CaloMuon>*)p);
   }
   static void deleteArray_vectorlErecocLcLCaloMuongR(void *p) {
      delete [] ((vector<reco::CaloMuon>*)p);
   }
   static void destruct_vectorlErecocLcLCaloMuongR(void *p) {
      typedef vector<reco::CaloMuon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::CaloMuon>

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)
   {
      vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", -2, "vector", 216,
                  typeid(vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > : new vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements] : new vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLMuongRcOrecocLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLMuongRcOrecocLcLMuongRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >

namespace ROOT {
   static TClass *vectorlEEmulatedME0SegmentgR_Dictionary();
   static void vectorlEEmulatedME0SegmentgR_TClassManip(TClass*);
   static void *new_vectorlEEmulatedME0SegmentgR(void *p = 0);
   static void *newArray_vectorlEEmulatedME0SegmentgR(Long_t size, void *p);
   static void delete_vectorlEEmulatedME0SegmentgR(void *p);
   static void deleteArray_vectorlEEmulatedME0SegmentgR(void *p);
   static void destruct_vectorlEEmulatedME0SegmentgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EmulatedME0Segment>*)
   {
      vector<EmulatedME0Segment> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EmulatedME0Segment>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EmulatedME0Segment>", -2, "vector", 216,
                  typeid(vector<EmulatedME0Segment>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEmulatedME0SegmentgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<EmulatedME0Segment>) );
      instance.SetNew(&new_vectorlEEmulatedME0SegmentgR);
      instance.SetNewArray(&newArray_vectorlEEmulatedME0SegmentgR);
      instance.SetDelete(&delete_vectorlEEmulatedME0SegmentgR);
      instance.SetDeleteArray(&deleteArray_vectorlEEmulatedME0SegmentgR);
      instance.SetDestructor(&destruct_vectorlEEmulatedME0SegmentgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EmulatedME0Segment> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<EmulatedME0Segment>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEmulatedME0SegmentgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<EmulatedME0Segment>*)0x0)->GetClass();
      vectorlEEmulatedME0SegmentgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEmulatedME0SegmentgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEmulatedME0SegmentgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EmulatedME0Segment> : new vector<EmulatedME0Segment>;
   }
   static void *newArray_vectorlEEmulatedME0SegmentgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EmulatedME0Segment>[nElements] : new vector<EmulatedME0Segment>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEmulatedME0SegmentgR(void *p) {
      delete ((vector<EmulatedME0Segment>*)p);
   }
   static void deleteArray_vectorlEEmulatedME0SegmentgR(void *p) {
      delete [] ((vector<EmulatedME0Segment>*)p);
   }
   static void destruct_vectorlEEmulatedME0SegmentgR(void *p) {
      typedef vector<EmulatedME0Segment> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<EmulatedME0Segment>

namespace ROOT {
   static TClass *maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary();
   static void maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", -2, "map", 99,
                  typeid(map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >) );
      instance.SetNew(&new_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0)->GetClass();
      maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > : new map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >;
   }
   static void *newArray_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements] : new map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void deleteArray_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void destruct_maplErecocLcLMuoncLcLMuonTrackTypecOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      typedef map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<reco::Muon::MuonTrackType,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >

namespace {
  void TriggerDictionaryInitialization_DataFormatsMuonReco_xr_Impl() {
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
#line 1 "DataFormatsMuonReco_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonMETCorrectionData.h")))  MuonMETCorrectionData;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace reco{struct __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonQuality.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  MuonQuality;}
namespace reco{struct __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonCosmicCompatibility.h")))  MuonCosmicCompatibility;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  Muon;}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Association.h")))  FindUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename REFV> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Association.h")))  FindRefVectorUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Association.h")))  FindTrait;
}}
namespace edm{namespace refhelper{template <typename C> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Association.h")))  ValueTrait;
}}
namespace reco{struct __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonShower.h")))  MuonShower;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/DYTInfo.h")))  DYTInfo;}
class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/EmulatedME0Segment.h")))  EmulatedME0Segment;
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/ME0Muon.h")))  ME0Muon;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonTrackLinks.h")))  MuonTrackLinks;}
namespace edm{template <typename B> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefToBase.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  RefToBase;
}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Ref.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Association.h")))  RefToBaseVector;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonTimeExtra.h")))  MuonTimeExtra;}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/ValueMap.h")))  ValueMap;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/CaloMuon.h")))  CaloMuon;}
namespace edm{template <class T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonTimeExtraMap.h")))  Ptr;
}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/HolderToVectorTrait_Ptr_specialization.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  PtrVector;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonSimInfo.h")))  MuonSimInfo;}
namespace edm{namespace reftobase{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/BaseHolder.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  BaseHolder;
}}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/Candidate/interface/Candidate.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  Candidate;}
namespace edm{namespace reftobase{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/IndirectHolder.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  IndirectHolder;
}}
namespace edm{namespace reftobase{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/BaseHolder.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  BaseVectorHolder;
}}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonSegmentMatch.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  MuonSegmentMatch;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonRPCHitMatch.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  MuonRPCHitMatch;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonChamberMatch.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  MuonChamberMatch;}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefToBase.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  RefToBaseProd;
}
namespace reco{struct __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonIsolation.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  MuonIsolation;}
namespace reco{struct __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonPFIsolation.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  MuonPFIsolation;}
namespace reco{struct __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonEnergy.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  MuonEnergy;}
namespace reco{struct __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonTime.h")))  __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/Muon.h")))  MuonTime;}
namespace reco{typedef edm::ValueMap<reco::MuonTimeExtra> MuonTimeExtraMap __attribute__((annotate("$clingAutoload$DataFormats/MuonReco/interface/MuonTimeExtraFwd.h"))) ;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsMuonReco_xr dictionary payload"

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
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/ValueMap.h"
#include "DataFormats/Common/interface/Association.h"
#include "DataFormats/MuonReco/interface/Muon.h"
#include "DataFormats/MuonReco/interface/CaloMuon.h"
#include "Rtypes.h" 
#include "Math/Cartesian3D.h" 
#include "Math/Polar3D.h" 
#include "Math/CylindricalEta3D.h" 
#include "Math/PxPyPzE4D.h" 
#include <boost/cstdint.hpp> 
#include "DataFormats/MuonReco/interface/MuonFwd.h" 
#include "DataFormats/MuonReco/interface/MuonIsolation.h"
#include "DataFormats/MuonReco/interface/MuonPFIsolation.h"
#include "DataFormats/MuonReco/interface/MuonTrackLinks.h"
#include "DataFormats/MuonReco/interface/MuonTimeExtra.h"
#include "DataFormats/MuonReco/interface/MuonTimeExtraFwd.h"
#include "DataFormats/MuonReco/interface/MuonTimeExtraMap.h"
#include "DataFormats/MuonReco/interface/MuonTime.h"
#include "DataFormats/MuonReco/interface/MuonMETCorrectionData.h"
#include "DataFormats/MuonReco/interface/MuonQuality.h"
#include "DataFormats/MuonReco/interface/MuonCosmicCompatibility.h"
#include "DataFormats/MuonReco/interface/MuonShower.h"
#include "DataFormats/MuonReco/interface/MuonToMuonMap.h"
#include "DataFormats/TrackReco/interface/Track.h" 
#include "DataFormats/Common/interface/AssociationMap.h"
#include "DataFormats/MuonReco/interface/DYTInfo.h"
#include <DataFormats/MuonReco/interface/EmulatedME0Segment.h>
#include <DataFormats/MuonReco/interface/ME0Muon.h>

#include <DataFormats/MuonReco/interface/EmulatedME0SegmentCollection.h>
#include <DataFormats/MuonReco/interface/ME0MuonCollection.h>
#include "DataFormats/MuonReco/interface/MuonSimInfo.h"

#include <vector>
#include <map>

namespace DataFormats_MuonReco {
  struct dictionary {
    std::vector<reco::Muon> v1;
    edm::Wrapper<std::vector<reco::Muon> > c1;
    edm::Ref<std::vector<reco::Muon> > r1;
    edm::RefProd<std::vector<reco::Muon> > rp1;
    edm::Wrapper<edm::RefVector<std::vector<reco::Muon> > > wrv1;
    edm::reftobase::Holder<reco::Candidate, reco::MuonRef> rb1;
    edm::helpers::Key<edm::RefProd<std::vector<reco::Muon> > > hkrv1;

    reco::MuonIsolation rmi;
    reco::MuonPFIsolation rmi2;
    reco::MuonTime rmt;
    reco::MuonTimeExtra rmt1;
    
    reco::Muon::MuonTrackType rmmttype;
    reco::Muon::MuonTrackRefMap rmmrrmap;

    std::vector<reco::MuonTimeExtra> rmt2;
//    edm::RefProd<std::vector<reco::MuonTimeExtra> > rmt3;
    edm::Wrapper<std::vector<reco::MuonTimeExtra> > wrmt2;
//    edm::helpers::Key<edm::RefProd<std::vector<reco::MuonTimeExtra> > > rmt4;

    reco::MuonTimeExtraMap rmtm;
    edm::Wrapper<reco::MuonTimeExtraMap> wrmtm;

    std::vector<reco::MuonChamberMatch> vmm1;
    std::vector<reco::MuonSegmentMatch> vmm2;
    std::vector<reco::MuonRPCHitMatch>  vmm3;

    std::vector<reco::MuonTrackLinks> tl1;
    edm::Wrapper<std::vector<reco::MuonTrackLinks> > tl2;
    edm::Ref<std::vector<reco::MuonTrackLinks> > tl3;
    edm::RefProd<std::vector<reco::MuonTrackLinks> > tl4;
    edm::Wrapper<edm::RefVector<std::vector<reco::MuonTrackLinks> > > wtl5;

    std::vector<reco::CaloMuon> smv1;
    edm::Wrapper<std::vector<reco::CaloMuon> > smc1;

    edm::reftobase::Holder<reco::Candidate, reco::MuonRef> hcc1;
    edm::reftobase::RefHolder<reco::MuonRef> hcc2;
    edm::reftobase::VectorHolder<reco::Candidate, reco::MuonRefVector> hcc3;
    edm::reftobase::RefVectorHolder<reco::MuonRefVector> hcc4;

    edm::RefToBase<reco::Muon> rtbm;
    edm::reftobase::IndirectHolder<reco::Muon> ihm;
    edm::RefToBaseProd<reco::Muon> rtbpm;
    edm::RefToBaseVector<reco::Muon> rtbvm;
    edm::Wrapper<edm::RefToBaseVector<reco::Muon> > rtbvm_w;
    edm::reftobase::BaseVectorHolder<reco::Muon> *bvhm_p;

    reco::MuonMETCorrectionData rmcd;
    std::vector<reco::MuonMETCorrectionData> rmcd_v;
    std::vector<reco::MuonMETCorrectionData>::const_iterator rmcd_vci;
    edm::Wrapper<std::vector<reco::MuonMETCorrectionData> > rmcd_wv;
    edm::ValueMap<reco::MuonMETCorrectionData> rmcd_vm;
    edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator rmcd_vmci;
    edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> > rmcd_wvm;
    

    reco::MuonQuality rmq;
    std::vector<reco::MuonQuality> rmq_v;
    std::vector<reco::MuonQuality>::const_iterator rmq_vci;
    edm::Wrapper<std::vector<reco::MuonQuality> > rmq_wv;
    edm::ValueMap<reco::MuonQuality> rmq_vm;
    edm::ValueMap<reco::MuonQuality>::const_iterator rmq_vmci;
    edm::Wrapper<edm::ValueMap<reco::MuonQuality> > rmq_wvm;

    reco::MuonCosmicCompatibility rmcc;
    std::vector<reco::MuonCosmicCompatibility> rmcc_v;
    std::vector<reco::MuonCosmicCompatibility>::const_iterator rmcc_vci;
    edm::Wrapper<std::vector<reco::MuonCosmicCompatibility> > rmcc_wv;
    edm::ValueMap<reco::MuonCosmicCompatibility> rmcc_vm;
    edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator rmcc_vmci;
    edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> > rmcc_wvm;


    edm::ValueMap<reco::MuonRef> rmref_vm;
    edm::ValueMap<reco::MuonRef>::const_iterator rmref_vmci;
    edm::Wrapper<edm::ValueMap<reco::MuonRef> > rmref_wvm;

    edm::Wrapper<edm::Association<reco::MuonCollection> > wrap_ass_mc;

    //shower block
    reco::MuonShower rms;
    std::vector<reco::MuonShower> rms_v;
    std::vector<reco::MuonShower>::const_iterator rms_vci;
    edm::Wrapper<std::vector<reco::MuonShower> > rms_wv;
    edm::ValueMap<reco::MuonShower> rms_vm;
    edm::ValueMap<reco::MuonShower>::const_iterator rms_vmci;
    edm::Wrapper<edm::ValueMap<reco::MuonShower> > rms_wvm;

    // DYT part
    reco::DYTInfo rdyt;
    std::vector<reco::DYTInfo> rdyt_v;
    std::vector<reco::DYTInfo>::const_iterator rdyt_vci;
    edm::Wrapper<std::vector<reco::DYTInfo> > rdyt_wv;
    edm::ValueMap<reco::DYTInfo> rdyt_vm;
    edm::ValueMap<reco::DYTInfo>::const_iterator rdyt_vmci;
    edm::Wrapper<edm::ValueMap<reco::DYTInfo> > rdyt_wvm;
    
    //Ptrs
#include "DataFormats/Common/interface/Ptr.h"
#include "DataFormats/Common/interface/PtrVector.h"
    edm::Ptr<reco::Muon>                         p_muon;
    edm::Wrapper<edm::Ptr<reco::Muon> >          w_p_muon;

    edm::PtrVector<reco::Muon>                   pv_muon;
    edm::Wrapper<edm::PtrVector<reco::Muon> >    w_pv_muon;

    //ME0 block
    EmulatedME0Segment seg;
    std::vector<EmulatedME0Segment> segs;
    edm::Wrapper< std::vector<EmulatedME0Segment> > dwc1;
    
    reco::ME0Muon muon;
    std::vector<reco::ME0Muon> muons;
    edm::Wrapper< std::vector<reco::ME0Muon> > dwc2;

    ME0MuonCollection muoncol;
    edm::Wrapper<ME0MuonCollection> mcw1;
    edm::Ref<ME0MuonCollection> mcr1;

    EmulatedME0SegmentCollection segcol;
    edm::Wrapper<EmulatedME0SegmentCollection> scw1;
    edm::Ref<EmulatedME0SegmentCollection> scr1;    

    reco::MuonSimInfo MSI;
    std::vector<reco::MuonSimInfo> vMSI;
    edm::Wrapper<std::vector<reco::MuonSimInfo> > wvMSI;
    edm::ValueMap<reco::MuonSimInfo> vmMSI;
    edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> > wvmMSI;
  };
}


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"EmulatedME0Segment", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >*,vector<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const reco::DYTInfo*,vector<reco::DYTInfo> >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const reco::MuonCosmicCompatibility*,vector<reco::MuonCosmicCompatibility> >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const reco::MuonMETCorrectionData*,vector<reco::MuonMETCorrectionData> >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const reco::MuonQuality*,vector<reco::MuonQuality> >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const reco::MuonShower*,vector<reco::MuonShower> >", payloadCode, "@",
"edm::Association<reco::MuonCollection>", payloadCode, "@",
"edm::Association<vector<reco::Muon> >", payloadCode, "@",
"edm::Ptr<reco::Muon>", payloadCode, "@",
"edm::PtrVector<reco::Muon>", payloadCode, "@",
"edm::Ref<std::vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<std::vector<EmulatedME0Segment>,EmulatedME0Segment> >", payloadCode, "@",
"edm::Ref<std::vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<std::vector<reco::ME0Muon>,reco::ME0Muon> >", payloadCode, "@",
"edm::Ref<std::vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<std::vector<reco::Muon>,reco::Muon> >", payloadCode, "@",
"edm::Ref<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >", payloadCode, "@",
"edm::Ref<vector<EmulatedME0Segment>,EmulatedME0Segment,edm::refhelper::FindUsingAdvance<vector<EmulatedME0Segment>,EmulatedME0Segment> >", payloadCode, "@",
"edm::Ref<vector<reco::ME0Muon>,reco::ME0Muon,edm::refhelper::FindUsingAdvance<vector<reco::ME0Muon>,reco::ME0Muon> >", payloadCode, "@",
"edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >", payloadCode, "@",
"edm::Ref<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::Muon> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::MuonTrackLinks> >", payloadCode, "@",
"edm::RefProd<vector<reco::Muon> >", payloadCode, "@",
"edm::RefProd<vector<reco::MuonTrackLinks> >", payloadCode, "@",
"edm::RefToBase<reco::Muon>", payloadCode, "@",
"edm::RefToBaseProd<reco::Muon>", payloadCode, "@",
"edm::RefToBaseVector<reco::Muon>", payloadCode, "@",
"edm::RefVector<std::vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<std::vector<reco::Muon>,reco::Muon> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >", payloadCode, "@",
"edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> >", payloadCode, "@",
"edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> >", payloadCode, "@",
"edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", payloadCode, "@",
"edm::ValueMap<reco::DYTInfo>", payloadCode, "@",
"edm::ValueMap<reco::DYTInfo>::const_iterator", payloadCode, "@",
"edm::ValueMap<reco::MuonCosmicCompatibility>", payloadCode, "@",
"edm::ValueMap<reco::MuonCosmicCompatibility>::const_iterator", payloadCode, "@",
"edm::ValueMap<reco::MuonMETCorrectionData>", payloadCode, "@",
"edm::ValueMap<reco::MuonMETCorrectionData>::const_iterator", payloadCode, "@",
"edm::ValueMap<reco::MuonQuality>", payloadCode, "@",
"edm::ValueMap<reco::MuonQuality>::const_iterator", payloadCode, "@",
"edm::ValueMap<reco::MuonRef>", payloadCode, "@",
"edm::ValueMap<reco::MuonRef>::const_iterator", payloadCode, "@",
"edm::ValueMap<reco::MuonShower>", payloadCode, "@",
"edm::ValueMap<reco::MuonShower>::const_iterator", payloadCode, "@",
"edm::ValueMap<reco::MuonSimInfo>", payloadCode, "@",
"edm::ValueMap<reco::MuonTimeExtra>", payloadCode, "@",
"edm::Wrapper<edm::Association<reco::MuonCollection> >", payloadCode, "@",
"edm::Wrapper<edm::Association<vector<reco::Muon> > >", payloadCode, "@",
"edm::Wrapper<edm::Ptr<reco::Muon> >", payloadCode, "@",
"edm::Wrapper<edm::PtrVector<reco::Muon> >", payloadCode, "@",
"edm::Wrapper<edm::RefToBaseVector<reco::Muon> >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<std::vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<std::vector<reco::Muon>,reco::Muon> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<std::vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks,edm::refhelper::FindUsingAdvance<vector<reco::MuonTrackLinks>,reco::MuonTrackLinks> > >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > > >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::DYTInfo> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::MuonCosmicCompatibility> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::MuonMETCorrectionData> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::MuonQuality> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::MuonRef> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::MuonShower> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::MuonSimInfo> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::MuonTimeExtra> >", payloadCode, "@",
"edm::Wrapper<reco::MuonTimeExtraMap>", payloadCode, "@",
"edm::Wrapper<std::vector<EmulatedME0Segment> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::CaloMuon> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::ME0Muon> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::Muon> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::MuonCosmicCompatibility> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::MuonMETCorrectionData> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::MuonQuality> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::MuonShower> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::MuonSimInfo> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::MuonTimeExtra> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::MuonTrackLinks> >", payloadCode, "@",
"edm::Wrapper<vector<EmulatedME0Segment> >", payloadCode, "@",
"edm::Wrapper<vector<reco::CaloMuon> >", payloadCode, "@",
"edm::Wrapper<vector<reco::ME0Muon> >", payloadCode, "@",
"edm::Wrapper<vector<reco::Muon> >", payloadCode, "@",
"edm::Wrapper<vector<reco::MuonCosmicCompatibility> >", payloadCode, "@",
"edm::Wrapper<vector<reco::MuonMETCorrectionData> >", payloadCode, "@",
"edm::Wrapper<vector<reco::MuonQuality> >", payloadCode, "@",
"edm::Wrapper<vector<reco::MuonShower> >", payloadCode, "@",
"edm::Wrapper<vector<reco::MuonSimInfo> >", payloadCode, "@",
"edm::Wrapper<vector<reco::MuonTimeExtra> >", payloadCode, "@",
"edm::Wrapper<vector<reco::MuonTrackLinks> >", payloadCode, "@",
"edm::helpers::Key<edm::RefProd<std::vector<reco::Muon> > >", payloadCode, "@",
"edm::helpers::Key<edm::RefProd<vector<reco::Muon> > >", payloadCode, "@",
"edm::reftobase::BaseHolder<reco::Muon>", payloadCode, "@",
"edm::reftobase::BaseVectorHolder<reco::Muon>", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<std::vector<reco::Muon>,reco::Muon> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", payloadCode, "@",
"edm::reftobase::IndirectHolder<reco::Muon>", payloadCode, "@",
"edm::reftobase::RefHolder<edm::Ref<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", payloadCode, "@",
"edm::reftobase::RefHolder<reco::MuonRef>", payloadCode, "@",
"edm::reftobase::RefVectorHolder<edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", payloadCode, "@",
"edm::reftobase::RefVectorHolder<reco::MuonRefVector>", payloadCode, "@",
"edm::reftobase::VectorHolder<reco::Candidate,edm::RefVector<vector<reco::Muon>,reco::Muon,edm::refhelper::FindUsingAdvance<vector<reco::Muon>,reco::Muon> > >", payloadCode, "@",
"edm::reftobase::VectorHolder<reco::Candidate,reco::MuonRefVector>", payloadCode, "@",
"reco::CaloMuon", payloadCode, "@",
"reco::DYTInfo", payloadCode, "@",
"reco::ME0Muon", payloadCode, "@",
"reco::Muon", payloadCode, "@",
"reco::MuonChamberMatch", payloadCode, "@",
"reco::MuonCosmicCompatibility", payloadCode, "@",
"reco::MuonEnergy", payloadCode, "@",
"reco::MuonIsolation", payloadCode, "@",
"reco::MuonMETCorrectionData", payloadCode, "@",
"reco::MuonPFIsolation", payloadCode, "@",
"reco::MuonQuality", payloadCode, "@",
"reco::MuonRPCHitMatch", payloadCode, "@",
"reco::MuonSegmentMatch", payloadCode, "@",
"reco::MuonShower", payloadCode, "@",
"reco::MuonSimInfo", payloadCode, "@",
"reco::MuonTime", payloadCode, "@",
"reco::MuonTimeExtra", payloadCode, "@",
"reco::MuonTimeExtraMap", payloadCode, "@",
"reco::MuonTrackLinks", payloadCode, "@",
"vector<reco::DYTInfo>::const_iterator", payloadCode, "@",
"vector<reco::MuonCosmicCompatibility>::const_iterator", payloadCode, "@",
"vector<reco::MuonMETCorrectionData>::const_iterator", payloadCode, "@",
"vector<reco::MuonQuality>::const_iterator", payloadCode, "@",
"vector<reco::MuonRef>::const_iterator", payloadCode, "@",
"vector<reco::MuonShower>::const_iterator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsMuonReco_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsMuonReco_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsMuonReco_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsMuonReco_xr() {
  TriggerDictionaryInitialization_DataFormatsMuonReco_xr_Impl();
}
