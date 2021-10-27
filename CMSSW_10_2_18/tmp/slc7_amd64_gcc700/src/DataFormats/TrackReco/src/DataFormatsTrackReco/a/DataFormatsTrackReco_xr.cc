// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc7_amd64_gcc700dIsrcdIDataFormatsdITrackRecodIsrcdIDataFormatsTrackRecodIadIDataFormatsTrackReco_xr

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

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"

#include <DataFormats/MuonDetId/interface/CSCDetId.h>
#include <DataFormats/MuonDetId/interface/DTLayerId.h>
#include <DataFormats/MuonDetId/interface/RPCDetId.h>
#include <DataFormats/TrackReco/interface/HitPattern.h>
#include <utility>

// Header files passed as explicit arguments
#include "src/DataFormats/TrackReco/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR_Dictionary();
   static void pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR_TClassManip(TClass*);
   static void *new_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR(void *p = 0);
   static void *newArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR(Long_t size, void *p);
   static void delete_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR(void *p);
   static void deleteArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR(void *p);
   static void destruct_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>*)
   {
      pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>", "string", 198,
                  typeid(pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>) );
      instance.SetNew(&new_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR);
      instance.SetNewArray(&newArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR);
      instance.SetDelete(&delete_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR);
      instance.SetDeleteArray(&deleteArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR);
      instance.SetDestructor(&destruct_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR);

      ::ROOT::AddClassAlternate("pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>","pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,float>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>*)0x0)->GetClass();
      pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR_Dictionary();
   static void pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR_TClassManip(TClass*);
   static void *new_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR(void *p = 0);
   static void *newArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR(Long_t size, void *p);
   static void delete_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR(void *p);
   static void deleteArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR(void *p);
   static void destruct_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>*)
   {
      pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>", "string", 198,
                  typeid(pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>) );
      instance.SetNew(&new_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR);
      instance.SetNewArray(&newArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR);
      instance.SetDelete(&delete_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR);
      instance.SetDeleteArray(&deleteArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR);
      instance.SetDestructor(&destruct_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR);

      ::ROOT::AddClassAlternate("pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>","pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,int>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>*)0x0)->GetClass();
      pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR_Dictionary();
   static void pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR_TClassManip(TClass*);
   static void *new_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR(void *p = 0);
   static void *newArray_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR(Long_t size, void *p);
   static void delete_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR(void *p);
   static void deleteArray_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR(void *p);
   static void destruct_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<edm::RefToBase<reco::Track>,double>*)
   {
      pair<edm::RefToBase<reco::Track>,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<edm::RefToBase<reco::Track>,double>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<edm::RefToBase<reco::Track>,double>", "string", 198,
                  typeid(pair<edm::RefToBase<reco::Track>,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(pair<edm::RefToBase<reco::Track>,double>) );
      instance.SetNew(&new_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR);
      instance.SetNewArray(&newArray_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR);
      instance.SetDelete(&delete_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR);
      instance.SetDeleteArray(&deleteArray_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR);
      instance.SetDestructor(&destruct_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<edm::RefToBase<reco::Track>,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<edm::RefToBase<reco::Track>,double>*)0x0)->GetClass();
      pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlErecocLcLTrackcOrecocLcLTrackgR_Dictionary();
   static void pairlErecocLcLTrackcOrecocLcLTrackgR_TClassManip(TClass*);
   static void *new_pairlErecocLcLTrackcOrecocLcLTrackgR(void *p = 0);
   static void *newArray_pairlErecocLcLTrackcOrecocLcLTrackgR(Long_t size, void *p);
   static void delete_pairlErecocLcLTrackcOrecocLcLTrackgR(void *p);
   static void deleteArray_pairlErecocLcLTrackcOrecocLcLTrackgR(void *p);
   static void destruct_pairlErecocLcLTrackcOrecocLcLTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<reco::Track,reco::Track>*)
   {
      pair<reco::Track,reco::Track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<reco::Track,reco::Track>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<reco::Track,reco::Track>", "string", 198,
                  typeid(pair<reco::Track,reco::Track>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlErecocLcLTrackcOrecocLcLTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<reco::Track,reco::Track>) );
      instance.SetNew(&new_pairlErecocLcLTrackcOrecocLcLTrackgR);
      instance.SetNewArray(&newArray_pairlErecocLcLTrackcOrecocLcLTrackgR);
      instance.SetDelete(&delete_pairlErecocLcLTrackcOrecocLcLTrackgR);
      instance.SetDeleteArray(&deleteArray_pairlErecocLcLTrackcOrecocLcLTrackgR);
      instance.SetDestructor(&destruct_pairlErecocLcLTrackcOrecocLcLTrackgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<reco::Track,reco::Track>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlErecocLcLTrackcOrecocLcLTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<reco::Track,reco::Track>*)0x0)->GetClass();
      pairlErecocLcLTrackcOrecocLcLTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlErecocLcLTrackcOrecocLcLTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_Dictionary();
   static void pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_TClassManip(TClass*);
   static void *new_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p = 0);
   static void *newArray_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(Long_t size, void *p);
   static void delete_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p);
   static void deleteArray_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p);
   static void destruct_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<TrackCandidate,pair<reco::Track,reco::Track> >*)
   {
      pair<TrackCandidate,pair<reco::Track,reco::Track> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<TrackCandidate,pair<reco::Track,reco::Track> >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<TrackCandidate,pair<reco::Track,reco::Track> >", "string", 198,
                  typeid(pair<TrackCandidate,pair<reco::Track,reco::Track> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<TrackCandidate,pair<reco::Track,reco::Track> >) );
      instance.SetNew(&new_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR);
      instance.SetNewArray(&newArray_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR);
      instance.SetDelete(&delete_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR);
      instance.SetDestructor(&destruct_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR);

      ::ROOT::AddClassAlternate("pair<TrackCandidate,pair<reco::Track,reco::Track> >","pair<TrackCandidate,std::pair<reco::Track,reco::Track> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<TrackCandidate,pair<reco::Track,reco::Track> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<TrackCandidate,pair<reco::Track,reco::Track> >*)0x0)->GetClass();
      pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary();
   static void pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", "string", 198,
                  typeid(pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >) );
      instance.SetNew(&new_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >","pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0)->GetClass();
      pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary();
   static void pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);
   static void deleteArray_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);
   static void destruct_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)
   {
      pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >", "string", 198,
                  typeid(pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >) );
      instance.SetNew(&new_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >","pair<TrackCandidate,std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)0x0)->GetClass();
      pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)
   {
      ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >", ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >","edm::Ref<std::vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<std::vector<reco::TrackExtra>,reco::TrackExtra> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)
   {
      ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >", ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >","edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)
   {
      ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >", ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >","reco::DeDxHitInfoRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefToBaselErecocLcLTrackgR_Dictionary();
   static void edmcLcLRefToBaselErecocLcLTrackgR_TClassManip(TClass*);
   static void *new_edmcLcLRefToBaselErecocLcLTrackgR(void *p = 0);
   static void *newArray_edmcLcLRefToBaselErecocLcLTrackgR(Long_t size, void *p);
   static void delete_edmcLcLRefToBaselErecocLcLTrackgR(void *p);
   static void deleteArray_edmcLcLRefToBaselErecocLcLTrackgR(void *p);
   static void destruct_edmcLcLRefToBaselErecocLcLTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefToBase<reco::Track>*)
   {
      ::edm::RefToBase<reco::Track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefToBase<reco::Track>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefToBase<reco::Track>", ::edm::RefToBase<reco::Track>::Class_Version(), "DataFormats/Common/interface/RefToBase.h", 65,
                  typeid(::edm::RefToBase<reco::Track>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefToBaselErecocLcLTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefToBase<reco::Track>) );
      instance.SetNew(&new_edmcLcLRefToBaselErecocLcLTrackgR);
      instance.SetNewArray(&newArray_edmcLcLRefToBaselErecocLcLTrackgR);
      instance.SetDelete(&delete_edmcLcLRefToBaselErecocLcLTrackgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefToBaselErecocLcLTrackgR);
      instance.SetDestructor(&destruct_edmcLcLRefToBaselErecocLcLTrackgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefToBase<reco::Track>*)
   {
      return GenerateInitInstanceLocal((::edm::RefToBase<reco::Track>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefToBase<reco::Track>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefToBaselErecocLcLTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefToBase<reco::Track>*)0x0)->GetClass();
      edmcLcLRefToBaselErecocLcLTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefToBaselErecocLcLTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::TrackExtra> >*)
   {
      ::edm::RefProd<vector<reco::TrackExtra> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::TrackExtra> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::TrackExtra> >", ::edm::RefProd<vector<reco::TrackExtra> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::TrackExtra> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::TrackExtra> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::TrackExtra> >","edm::RefProd<std::vector<reco::TrackExtra> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::TrackExtra> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::TrackExtra> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::TrackExtra> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::TrackExtra> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::Track> >*)
   {
      ::edm::RefProd<vector<reco::Track> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::Track> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::Track> >", ::edm::RefProd<vector<reco::Track> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::Track> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::Track> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::Track> >","edm::RefProd<std::vector<reco::Track> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::Track> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::Track> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::Track> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::Track> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::DeDxHitInfo> >*)
   {
      ::edm::RefProd<vector<reco::DeDxHitInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::DeDxHitInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::DeDxHitInfo> >", ::edm::RefProd<vector<reco::DeDxHitInfo> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::DeDxHitInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::DeDxHitInfo> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::DeDxHitInfo> >","reco::DeDxHitInfoRefProd");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::DeDxHitInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::DeDxHitInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::DeDxHitInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::DeDxHitInfo> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)
   {
      ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >", ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >","edm::RefVector<std::vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<std::vector<reco::TrackExtra>,reco::TrackExtra> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)
   {
      ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >", ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >","edm::RefVector<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)
   {
      ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >", ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >","reco::DeDxHitInfoRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefToBaseVectorlErecocLcLTrackgR_Dictionary();
   static void edmcLcLRefToBaseVectorlErecocLcLTrackgR_TClassManip(TClass*);
   static void *new_edmcLcLRefToBaseVectorlErecocLcLTrackgR(void *p = 0);
   static void *newArray_edmcLcLRefToBaseVectorlErecocLcLTrackgR(Long_t size, void *p);
   static void delete_edmcLcLRefToBaseVectorlErecocLcLTrackgR(void *p);
   static void deleteArray_edmcLcLRefToBaseVectorlErecocLcLTrackgR(void *p);
   static void destruct_edmcLcLRefToBaseVectorlErecocLcLTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefToBaseVector<reco::Track>*)
   {
      ::edm::RefToBaseVector<reco::Track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefToBaseVector<reco::Track>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefToBaseVector<reco::Track>", ::edm::RefToBaseVector<reco::Track>::Class_Version(), "DataFormats/Common/interface/RefToBaseVector.h", 27,
                  typeid(::edm::RefToBaseVector<reco::Track>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefToBaseVectorlErecocLcLTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefToBaseVector<reco::Track>) );
      instance.SetNew(&new_edmcLcLRefToBaseVectorlErecocLcLTrackgR);
      instance.SetNewArray(&newArray_edmcLcLRefToBaseVectorlErecocLcLTrackgR);
      instance.SetDelete(&delete_edmcLcLRefToBaseVectorlErecocLcLTrackgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefToBaseVectorlErecocLcLTrackgR);
      instance.SetDestructor(&destruct_edmcLcLRefToBaseVectorlErecocLcLTrackgR);

      ::ROOT::AddClassAlternate("edm::RefToBaseVector<reco::Track>","reco::TrackBaseRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefToBaseVector<reco::Track>*)
   {
      return GenerateInitInstanceLocal((::edm::RefToBaseVector<reco::Track>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefToBaseVector<reco::Track>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefToBaseVectorlErecocLcLTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefToBaseVector<reco::Track>*)0x0)->GetClass();
      edmcLcLRefToBaseVectorlErecocLcLTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefToBaseVectorlErecocLcLTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::TrackExtra> >*)
   {
      ::edm::Wrapper<vector<reco::TrackExtra> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::TrackExtra> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::TrackExtra> >", ::edm::Wrapper<vector<reco::TrackExtra> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::TrackExtra> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::TrackExtra> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::TrackExtra> >","edm::Wrapper<std::vector<reco::TrackExtra> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::TrackExtra> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::TrackExtra> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::TrackExtra> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::TrackExtra> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::Track> >*)
   {
      ::edm::Wrapper<vector<reco::Track> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::Track> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::Track> >", ::edm::Wrapper<vector<reco::Track> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::Track> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::Track> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::Track> >","edm::Wrapper<std::vector<reco::Track> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::Track> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::Track> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::Track> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::Track> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >","edm::Wrapper<edm::RefVector<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >*)
   {
      ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >", ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >","edm::Wrapper<reco::TrackDeDxHitsCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::DeDxData> >*)
   {
      ::edm::Wrapper<vector<reco::DeDxData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::DeDxData> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::DeDxData> >", ::edm::Wrapper<vector<reco::DeDxData> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::DeDxData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::DeDxData> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::DeDxData> >","edm::Wrapper<reco::DeDxDataCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::DeDxData> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::DeDxData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::DeDxData> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::DeDxData> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<reco::DeDxData> >*)
   {
      ::edm::Wrapper<edm::ValueMap<reco::DeDxData> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<reco::DeDxData> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<reco::DeDxData> >", ::edm::Wrapper<edm::ValueMap<reco::DeDxData> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<reco::DeDxData> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<reco::DeDxData> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::ValueMap<reco::DeDxData> >","edm::Wrapper<reco::DeDxDataValueMap>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<reco::DeDxData> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<reco::DeDxData> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::DeDxData> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<reco::DeDxData> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefToBaseVector<reco::Track> >*)
   {
      ::edm::Wrapper<edm::RefToBaseVector<reco::Track> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefToBaseVector<reco::Track> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefToBaseVector<reco::Track> >", ::edm::Wrapper<edm::RefToBaseVector<reco::Track> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefToBaseVector<reco::Track> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::RefToBaseVector<reco::Track> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefToBaseVector<reco::Track> >","edm::Wrapper<reco::TrackBaseRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefToBaseVector<reco::Track> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefToBaseVector<reco::Track> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefToBaseVector<reco::Track> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefToBaseVector<reco::Track> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)
   {
      ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >", ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >","edm::Wrapper<edm::ValueMap<reco::TrackRefVector> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_Dictionary();
   static void edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<pair<reco::Track,reco::Track> >*)
   {
      ::edm::Wrapper<pair<reco::Track,reco::Track> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<pair<reco::Track,reco::Track> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<pair<reco::Track,reco::Track> >", ::edm::Wrapper<pair<reco::Track,reco::Track> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<pair<reco::Track,reco::Track> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<pair<reco::Track,reco::Track> >) );
      instance.SetNew(&new_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<pair<reco::Track,reco::Track> >","edm::Wrapper<std::pair<reco::Track,reco::Track> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<pair<reco::Track,reco::Track> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<pair<reco::Track,reco::Track> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<pair<reco::Track,reco::Track> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<pair<reco::Track,reco::Track> >*)0x0)->GetClass();
      edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >*)
   {
      ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >", ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >","edm::Wrapper<std::vector<std::pair<TrackCandidate,std::pair<reco::Track,reco::Track> > > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)
   {
      ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >", ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >","edm::Wrapper<std::pair<TrackCandidate,std::pair<reco::Track,reco::Track> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)0x0)->GetClass();
      edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)
   {
      ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >", ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >","edm::Wrapper<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >*)
   {
      ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >", ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >","edm::Wrapper<std::vector<std::pair<TrackCandidate,std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > > > > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)
   {
      ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >", ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >","edm::Wrapper<std::pair<TrackCandidate,std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > > > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)0x0)->GetClass();
      edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlErecocLcLDeDxHitInfogR_Dictionary();
   static void edmcLcLWrapperlErecocLcLDeDxHitInfogR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlErecocLcLDeDxHitInfogR(void *p = 0);
   static void *newArray_edmcLcLWrapperlErecocLcLDeDxHitInfogR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlErecocLcLDeDxHitInfogR(void *p);
   static void deleteArray_edmcLcLWrapperlErecocLcLDeDxHitInfogR(void *p);
   static void destruct_edmcLcLWrapperlErecocLcLDeDxHitInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<reco::DeDxHitInfo>*)
   {
      ::edm::Wrapper<reco::DeDxHitInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<reco::DeDxHitInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<reco::DeDxHitInfo>", ::edm::Wrapper<reco::DeDxHitInfo>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<reco::DeDxHitInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlErecocLcLDeDxHitInfogR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<reco::DeDxHitInfo>) );
      instance.SetNew(&new_edmcLcLWrapperlErecocLcLDeDxHitInfogR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlErecocLcLDeDxHitInfogR);
      instance.SetDelete(&delete_edmcLcLWrapperlErecocLcLDeDxHitInfogR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlErecocLcLDeDxHitInfogR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlErecocLcLDeDxHitInfogR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<reco::DeDxHitInfo>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<reco::DeDxHitInfo>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<reco::DeDxHitInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlErecocLcLDeDxHitInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<reco::DeDxHitInfo>*)0x0)->GetClass();
      edmcLcLWrapperlErecocLcLDeDxHitInfogR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlErecocLcLDeDxHitInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::DeDxHitInfo> >*)
   {
      ::edm::Wrapper<vector<reco::DeDxHitInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::DeDxHitInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::DeDxHitInfo> >", ::edm::Wrapper<vector<reco::DeDxHitInfo> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::DeDxHitInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::DeDxHitInfo> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::DeDxHitInfo> >","edm::Wrapper<reco::DeDxHitInfoCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::DeDxHitInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::DeDxHitInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::DeDxHitInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::DeDxHitInfo> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >*)
   {
      ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >", ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >","edm::Wrapper<reco::DeDxHitInfoAss>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlESeedStopInfogRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlESeedStopInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<SeedStopInfo> >*)
   {
      ::edm::Wrapper<vector<SeedStopInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<SeedStopInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<SeedStopInfo> >", ::edm::Wrapper<vector<SeedStopInfo> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<SeedStopInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlESeedStopInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<SeedStopInfo> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<SeedStopInfo> >","edm::Wrapper<std::vector<SeedStopInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<SeedStopInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<SeedStopInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<SeedStopInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlESeedStopInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<SeedStopInfo> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlESeedStopInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlESeedStopInfogRsPgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("persistent","false");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Association<vector<reco::Track> > >*)
   {
      ::edm::Wrapper<edm::Association<vector<reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Association<vector<reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Association<vector<reco::Track> > >", ::edm::Wrapper<edm::Association<vector<reco::Track> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Association<vector<reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::Association<vector<reco::Track> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Association<vector<reco::Track> > >","edm::Wrapper<edm::Association<reco::TrackCollection> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Association<vector<reco::Track> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Association<vector<reco::Track> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::Track> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR_Dictionary();
   static void edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR_TClassManip(TClass*);
   static void delete_edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR(void *p);
   static void destruct_edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::BaseHolder<reco::Track>*)
   {
      ::edm::reftobase::BaseHolder<reco::Track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::BaseHolder<reco::Track>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::BaseHolder<reco::Track>", ::edm::reftobase::BaseHolder<reco::Track>::Class_Version(), "DataFormats/Common/interface/BaseHolder.h", 28,
                  typeid(::edm::reftobase::BaseHolder<reco::Track>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::BaseHolder<reco::Track>) );
      instance.SetDelete(&delete_edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::BaseHolder<reco::Track>*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::BaseHolder<reco::Track>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::BaseHolder<reco::Track>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::BaseHolder<reco::Track>*)0x0)->GetClass();
      edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >","edm::reftobase::Holder<reco::Track,reco::TrackRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR_Dictionary();
   static void edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR(void *p);
   static void destruct_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::IndirectHolder<reco::Track>*)
   {
      ::edm::reftobase::IndirectHolder<reco::Track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::IndirectHolder<reco::Track>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::IndirectHolder<reco::Track>", ::edm::reftobase::IndirectHolder<reco::Track>::Class_Version(), "DataFormats/Common/interface/IndirectHolder.h", 24,
                  typeid(::edm::reftobase::IndirectHolder<reco::Track>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::IndirectHolder<reco::Track>) );
      instance.SetNew(&new_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::IndirectHolder<reco::Track>*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::IndirectHolder<reco::Track>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::IndirectHolder<reco::Track>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::IndirectHolder<reco::Track>*)0x0)->GetClass();
      edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >::Class_Version(), "DataFormats/Common/interface/RefHolder_.h", 20,
                  typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >","edm::reftobase::RefHolder<reco::TrackRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >*)
   {
      ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefHolder<edm::Ptr<reco::Track> >", ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >::Class_Version(), "DataFormats/Common/interface/RefHolder_.h", 20,
                  typeid(::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR_Dictionary();
   static void edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR_TClassManip(TClass*);
   static void delete_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR(void *p);
   static void destruct_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::BaseVectorHolder<reco::Track>*)
   {
      ::edm::reftobase::BaseVectorHolder<reco::Track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::BaseVectorHolder<reco::Track>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::BaseVectorHolder<reco::Track>", ::edm::reftobase::BaseVectorHolder<reco::Track>::Class_Version(), "DataFormats/Common/interface/BaseVectorHolder.h", 14,
                  typeid(::edm::reftobase::BaseVectorHolder<reco::Track>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::BaseVectorHolder<reco::Track>) );
      instance.SetDelete(&delete_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::BaseVectorHolder<reco::Track>*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::BaseVectorHolder<reco::Track>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::BaseVectorHolder<reco::Track>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::BaseVectorHolder<reco::Track>*)0x0)->GetClass();
      edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLPtrlErecocLcLTrackgR_Dictionary();
   static void edmcLcLPtrlErecocLcLTrackgR_TClassManip(TClass*);
   static void *new_edmcLcLPtrlErecocLcLTrackgR(void *p = 0);
   static void *newArray_edmcLcLPtrlErecocLcLTrackgR(Long_t size, void *p);
   static void delete_edmcLcLPtrlErecocLcLTrackgR(void *p);
   static void deleteArray_edmcLcLPtrlErecocLcLTrackgR(void *p);
   static void destruct_edmcLcLPtrlErecocLcLTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ptr<reco::Track>*)
   {
      ::edm::Ptr<reco::Track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ptr<reco::Track>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ptr<reco::Track>", ::edm::Ptr<reco::Track>::Class_Version(), "DataFormats/Common/interface/Ptr.h", 40,
                  typeid(::edm::Ptr<reco::Track>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLPtrlErecocLcLTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ptr<reco::Track>) );
      instance.SetNew(&new_edmcLcLPtrlErecocLcLTrackgR);
      instance.SetNewArray(&newArray_edmcLcLPtrlErecocLcLTrackgR);
      instance.SetDelete(&delete_edmcLcLPtrlErecocLcLTrackgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLPtrlErecocLcLTrackgR);
      instance.SetDestructor(&destruct_edmcLcLPtrlErecocLcLTrackgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ptr<reco::Track>*)
   {
      return GenerateInitInstanceLocal((::edm::Ptr<reco::Track>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ptr<reco::Track>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLPtrlErecocLcLTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ptr<reco::Track>*)0x0)->GetClass();
      edmcLcLPtrlErecocLcLTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLPtrlErecocLcLTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLHitPattern_Dictionary();
   static void recocLcLHitPattern_TClassManip(TClass*);
   static void *new_recocLcLHitPattern(void *p = 0);
   static void *newArray_recocLcLHitPattern(Long_t size, void *p);
   static void delete_recocLcLHitPattern(void *p);
   static void deleteArray_recocLcLHitPattern(void *p);
   static void destruct_recocLcLHitPattern(void *p);

   // Schema evolution read functions
   static void read_recocLcLHitPattern_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_hitPattern_ = oldObj->GetId("hitPattern_");
#endif
      struct recocLcLHitPattern_Onfile {
         typedef uint32_t onfile_hitPattern__t[25];
         onfile_hitPattern__t &hitPattern_;
         recocLcLHitPattern_Onfile( onfile_hitPattern__t &onfile_hitPattern_ ): hitPattern_(onfile_hitPattern_) {}
      };
      static Long_t offset_Onfile_recocLcLHitPattern_hitPattern_ = oldObj->GetClass()->GetDataMemberOffset("hitPattern_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLHitPattern_Onfile onfile(
         *(recocLcLHitPattern_Onfile::onfile_hitPattern__t*)(onfile_add+offset_Onfile_recocLcLHitPattern_hitPattern_) );

      static TClassRef cls("reco::HitPattern");
      static Long_t offset_hitPattern = cls->GetDataMemberOffset("hitPattern");
      typedef uint16_t hitPattern_t[50];
      hitPattern_t& hitPattern = *(hitPattern_t *)(target+offset_hitPattern);
      reco::HitPattern* newObj = (reco::HitPattern*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
            using namespace reco;

            const unsigned short HitSize = 11;
            const unsigned short PatternSize = 25;
            const int MaxHits = (PatternSize * sizeof(uint32_t) * 8) / HitSize;

            auto getHitFromOldHitPattern = [HitSize](const uint32_t hitPattern[], const int position) {
                uint16_t bitEndOffset = (position + 1) * HitSize;
                uint8_t secondWord   = (bitEndOffset >> 5);
                uint8_t secondWordBits = bitEndOffset & (32 - 1); // that is, bitEndOffset % 32
                if (secondWordBits >= HitSize) {
                    // full block is in this word
                    uint8_t lowBitsToTrash = secondWordBits - HitSize;
                    return (hitPattern[secondWord] >> lowBitsToTrash) & ((1 << HitSize) - 1);
                } else {
                    uint8_t  firstWordBits   = HitSize - secondWordBits;
                    uint32_t firstWordBlock  = hitPattern[secondWord - 1] >> (32 - firstWordBits);
                    uint32_t secondWordBlock = hitPattern[secondWord] & ((1 << secondWordBits) - 1);
                    return firstWordBlock + (secondWordBlock << firstWordBits);
                }
            };

            auto appendOldHitPattern = [&](const uint32_t pattern) {
                // value used for those parameters needed by XXXDetId constructors
                // but that we do not care about because they are not stored in the
                // HitPattern.
                const uint8_t DONT_CARE = 1;

                const static unsigned short HitTypeMask = 0x3;
                const static unsigned short HitTypeOffset = 0;
                
                const static unsigned short SideMask = 0x1;
                const static unsigned short SideOffset = 2;
                
                const static unsigned short LayerMask = 0xF;
                const static unsigned short LayerOffset = 3;

                const static unsigned short SubstrMask = 0x7;
                const static unsigned short SubstrOffset = 7;

                const static unsigned short SubDetectorMask = 0x1;
                const static unsigned short SubDetectorOffset = 10;

                const uint32_t VALID_CONST = (uint32_t) TrackingRecHit::valid;
                const uint32_t MISSING_CONST = (uint32_t) TrackingRecHit::missing;
                const uint32_t INACTIVE_CONST = (uint32_t) TrackingRecHit::inactive;
                const uint32_t BAD_CONST = (uint32_t) TrackingRecHit::bad;

                uint32_t rawHitType = (pattern >> HitTypeOffset) & HitTypeMask;
                uint32_t layer = (pattern >> LayerOffset) & LayerMask;
                uint32_t subdet = (pattern >> SubstrOffset) & SubstrMask;
                uint32_t detector = (pattern >> SubDetectorOffset) & SubDetectorMask;
                uint32_t stereo = (pattern >> SideOffset) & SideMask;

                // DetId::Tracker = 1 and DetId::Muon = 2 but
                // in HitPattern Tracker = 1 and Muon = 0 so a conversion is needed:
                if (detector == 0) {
                    detector = DetId::Muon;
                }

                TrackingRecHit::Type hitType = TrackingRecHit::valid;
                switch (rawHitType) {
                case VALID_CONST:
                    hitType = TrackingRecHit::valid;
                    break;
                case MISSING_CONST:
                    hitType = TrackingRecHit::missing;
                    break;
                case INACTIVE_CONST:
                    hitType = TrackingRecHit::inactive;
                    break;
                case BAD_CONST:
                    hitType = TrackingRecHit::bad;
                    break;
                }

                DetId detId;
                if (detector == DetId::Tracker) {
                    return newObj->appendTrackerHit(subdet, layer, stereo, hitType);
                } else if (detector == DetId::Muon) {
                    switch (subdet) {
                    case MuonSubdetId::DT: {
                        uint32_t station = 1 + ((layer >> 2) & 0x3);
                        uint32_t superLayer = (layer & 0x3);
                        detId = DTLayerId(DONT_CARE, station, DONT_CARE, superLayer, DONT_CARE);
                    }
                    break;
                    case MuonSubdetId::CSC: {
                        uint32_t station = 1 + ((layer >> 2) & 0x3);
                        uint32_t ring = 1 + (layer & 0x3);
                        detId = CSCDetId(DONT_CARE, station, ring, DONT_CARE, DONT_CARE);
                    }
                    break;
                    case MuonSubdetId::RPC: {
                        uint32_t station =  1 + ((layer >> 2) & 0x3);
                        uint32_t region  = layer & 0x1;
                        uint32_t layer_muon = 1 + ((station <= 2) ? ((layer >> 1) & 0x1) : 0);
                        detId = RPCDetId(region, DONT_CARE, station, DONT_CARE, layer_muon, DONT_CARE, DONT_CARE);
                    }
                    break;
                    }
                    return newObj->appendMuonHit(detId, hitType);
                }
                return false;
            };

            auto fillNewHitPatternWithOldHitPattern = [&](const uint32_t oldHitPattern[]) {
                newObj->clear();
                for (int i = 0; i < MaxHits; i++) {
                    uint32_t pattern = getHitFromOldHitPattern(oldHitPattern, i);
                    if (pattern == 0) {
                        break;
                    }
                    if(!appendOldHitPattern(pattern)) {
                        return false;
                    }
                }
                return true;
            };

            fillNewHitPatternWithOldHitPattern(onfile.hitPattern_);
      
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::HitPattern*)
   {
      ::reco::HitPattern *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::HitPattern));
      static ::ROOT::TGenericClassInfo 
         instance("reco::HitPattern", 12, "DataFormats/TrackReco/interface/HitPattern.h", 146,
                  typeid(::reco::HitPattern), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLHitPattern_Dictionary, isa_proxy, 12,
                  sizeof(::reco::HitPattern) );
      instance.SetNew(&new_recocLcLHitPattern);
      instance.SetNewArray(&newArray_recocLcLHitPattern);
      instance.SetDelete(&delete_recocLcLHitPattern);
      instance.SetDeleteArray(&deleteArray_recocLcLHitPattern);
      instance.SetDestructor(&destruct_recocLcLHitPattern);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "reco::HitPattern";
      rule->fTarget      = "hitPattern";
      rule->fSource      = "uint32_t hitPattern_[25]";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLHitPattern_0);
      rule->fCode        = "\n            using namespace reco;\n\n            const unsigned short HitSize = 11;\n            const unsigned short PatternSize = 25;\n            const int MaxHits = (PatternSize * sizeof(uint32_t) * 8) / HitSize;\n\n            auto getHitFromOldHitPattern = [HitSize](const uint32_t hitPattern[], const int position) {\n                uint16_t bitEndOffset = (position + 1) * HitSize;\n                uint8_t secondWord   = (bitEndOffset >> 5);\n                uint8_t secondWordBits = bitEndOffset & (32 - 1); // that is, bitEndOffset % 32\n                if (secondWordBits >= HitSize) {\n                    // full block is in this word\n                    uint8_t lowBitsToTrash = secondWordBits - HitSize;\n                    return (hitPattern[secondWord] >> lowBitsToTrash) & ((1 << HitSize) - 1);\n                } else {\n                    uint8_t  firstWordBits   = HitSize - secondWordBits;\n                    uint32_t firstWordBlock  = hitPattern[secondWord - 1] >> (32 - firstWordBits);\n                    uint32_t secondWordBlock = hitPattern[secondWord] & ((1 << secondWordBits) - 1);\n                    return firstWordBlock + (secondWordBlock << firstWordBits);\n                }\n            };\n\n            auto appendOldHitPattern = [&](const uint32_t pattern) {\n                // value used for those parameters needed by XXXDetId constructors\n                // but that we do not care about because they are not stored in the\n                // HitPattern.\n                const uint8_t DONT_CARE = 1;\n\n                const static unsigned short HitTypeMask = 0x3;\n                const static unsigned short HitTypeOffset = 0;\n                \n                const static unsigned short SideMask = 0x1;\n                const static unsigned short SideOffset = 2;\n                \n                const static unsigned short LayerMask = 0xF;\n                const static unsigned short LayerOffset = 3;\n\n                const static unsigned short SubstrMask = 0x7;\n                const static unsigned short SubstrOffset = 7;\n\n                const static unsigned short SubDetectorMask = 0x1;\n                const static unsigned short SubDetectorOffset = 10;\n\n                const uint32_t VALID_CONST = (uint32_t) TrackingRecHit::valid;\n                const uint32_t MISSING_CONST = (uint32_t) TrackingRecHit::missing;\n                const uint32_t INACTIVE_CONST = (uint32_t) TrackingRecHit::inactive;\n                const uint32_t BAD_CONST = (uint32_t) TrackingRecHit::bad;\n\n                uint32_t rawHitType = (pattern >> HitTypeOffset) & HitTypeMask;\n                uint32_t layer = (pattern >> LayerOffset) & LayerMask;\n                uint32_t subdet = (pattern >> SubstrOffset) & SubstrMask;\n                uint32_t detector = (pattern >> SubDetectorOffset) & SubDetectorMask;\n                uint32_t stereo = (pattern >> SideOffset) & SideMask;\n\n                // DetId::Tracker = 1 and DetId::Muon = 2 but\n                // in HitPattern Tracker = 1 and Muon = 0 so a conversion is needed:\n                if (detector == 0) {\n                    detector = DetId::Muon;\n                }\n\n                TrackingRecHit::Type hitType = TrackingRecHit::valid;\n                switch (rawHitType) {\n                case VALID_CONST:\n                    hitType = TrackingRecHit::valid;\n                    break;\n                case MISSING_CONST:\n                    hitType = TrackingRecHit::missing;\n                    break;\n                case INACTIVE_CONST:\n                    hitType = TrackingRecHit::inactive;\n                    break;\n                case BAD_CONST:\n                    hitType = TrackingRecHit::bad;\n                    break;\n                }\n\n                DetId detId;\n                if (detector == DetId::Tracker) {\n                    return newObj->appendTrackerHit(subdet, layer, stereo, hitType);\n                } else if (detector == DetId::Muon) {\n                    switch (subdet) {\n                    case MuonSubdetId::DT: {\n                        uint32_t station = 1 + ((layer >> 2) & 0x3);\n                        uint32_t superLayer = (layer & 0x3);\n                        detId = DTLayerId(DONT_CARE, station, DONT_CARE, superLayer, DONT_CARE);\n                    }\n                    break;\n                    case MuonSubdetId::CSC: {\n                        uint32_t station = 1 + ((layer >> 2) & 0x3);\n                        uint32_t ring = 1 + (layer & 0x3);\n                        detId = CSCDetId(DONT_CARE, station, ring, DONT_CARE, DONT_CARE);\n                    }\n                    break;\n                    case MuonSubdetId::RPC: {\n                        uint32_t station =  1 + ((layer >> 2) & 0x3);\n                        uint32_t region  = layer & 0x1;\n                        uint32_t layer_muon = 1 + ((station <= 2) ? ((layer >> 1) & 0x1) : 0);\n                        detId = RPCDetId(region, DONT_CARE, station, DONT_CARE, layer_muon, DONT_CARE, DONT_CARE);\n                    }\n                    break;\n                    }\n                    return newObj->appendMuonHit(detId, hitType);\n                }\n                return false;\n            };\n\n            auto fillNewHitPatternWithOldHitPattern = [&](const uint32_t oldHitPattern[]) {\n                newObj->clear();\n                for (int i = 0; i < MaxHits; i++) {\n                    uint32_t pattern = getHitFromOldHitPattern(oldHitPattern, i);\n                    if (pattern == 0) {\n                        break;\n                    }\n                    if(!appendOldHitPattern(pattern)) {\n                        return false;\n                    }\n                }\n                return true;\n            };\n\n            fillNewHitPatternWithOldHitPattern(onfile.hitPattern_);\n      ";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "utility,DataFormats/MuonDetId/interface/DTLayerId.h,DataFormats/MuonDetId/interface/CSCDetId.h,DataFormats/MuonDetId/interface/RPCDetId.h";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::HitPattern*)
   {
      return GenerateInitInstanceLocal((::reco::HitPattern*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::HitPattern*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLHitPattern_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::HitPattern*)0x0)->GetClass();
      recocLcLHitPattern_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLHitPattern_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLTrackBase_Dictionary();
   static void recocLcLTrackBase_TClassManip(TClass*);
   static void *new_recocLcLTrackBase(void *p = 0);
   static void *newArray_recocLcLTrackBase(Long_t size, void *p);
   static void delete_recocLcLTrackBase(void *p);
   static void deleteArray_recocLcLTrackBase(void *p);
   static void destruct_recocLcLTrackBase(void *p);

   // Schema evolution read functions
   static void read_recocLcLTrackBase_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_hitPattern_ = oldObj->GetId("hitPattern_");
      static Int_t id_trackerExpectedHitsInner_ = oldObj->GetId("trackerExpectedHitsInner_");
      static Int_t id_trackerExpectedHitsOuter_ = oldObj->GetId("trackerExpectedHitsOuter_");
#endif
      struct recocLcLTrackBase_Onfile {
         reco::HitPattern &hitPattern_;
         reco::HitPattern &trackerExpectedHitsInner_;
         reco::HitPattern &trackerExpectedHitsOuter_;
         recocLcLTrackBase_Onfile(reco::HitPattern &onfile_hitPattern_, reco::HitPattern &onfile_trackerExpectedHitsInner_, reco::HitPattern &onfile_trackerExpectedHitsOuter_ ): hitPattern_(onfile_hitPattern_), trackerExpectedHitsInner_(onfile_trackerExpectedHitsInner_), trackerExpectedHitsOuter_(onfile_trackerExpectedHitsOuter_) {}
      };
      static Long_t offset_Onfile_recocLcLTrackBase_hitPattern_ = oldObj->GetClass()->GetDataMemberOffset("hitPattern_");
      static Long_t offset_Onfile_recocLcLTrackBase_trackerExpectedHitsInner_ = oldObj->GetClass()->GetDataMemberOffset("trackerExpectedHitsInner_");
      static Long_t offset_Onfile_recocLcLTrackBase_trackerExpectedHitsOuter_ = oldObj->GetClass()->GetDataMemberOffset("trackerExpectedHitsOuter_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLTrackBase_Onfile onfile(
         *(reco::HitPattern*)(onfile_add+offset_Onfile_recocLcLTrackBase_hitPattern_),
         *(reco::HitPattern*)(onfile_add+offset_Onfile_recocLcLTrackBase_trackerExpectedHitsInner_),
         *(reco::HitPattern*)(onfile_add+offset_Onfile_recocLcLTrackBase_trackerExpectedHitsOuter_) );

      static TClassRef cls("reco::TrackBase");
      static Long_t offset_hitPattern_ = cls->GetDataMemberOffset("hitPattern_");
      reco::HitPattern& hitPattern_ = *(reco::HitPattern*)(target+offset_hitPattern_);
      reco::TrackBase* newObj = (reco::TrackBase*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
            using namespace reco;

            auto appendNewHitPattern = [&](const uint16_t pattern, const HitPattern::HitCategory category) {
                // value used for those parameters needed by XXXDetId constructors
                // but that we do not care about.
                const uint8_t DONT_CARE = 1;

                const uint16_t VALID_CONST = (uint16_t) TrackingRecHit::valid;
                const uint16_t MISSING_CONST = (uint16_t) TrackingRecHit::missing;
                const uint16_t INACTIVE_CONST = (uint16_t) TrackingRecHit::inactive;
                const uint16_t BAD_CONST = (uint16_t) TrackingRecHit::bad;

                // 3 bits for hit type
                const static unsigned short HitTypeMask = 0x3;
                const static unsigned short HitTypeOffset = 0;

                // 1 bit for mono/stereo
                const static unsigned short SideMask = 0x1;
                const static unsigned short SideOffset = 2;

                // 4 bits to identify the layer/disk/wheel within the substructure
                const static unsigned short LayerMask = 0xF;
                const static unsigned short LayerOffset = 3;

                // 3 bits to identify the tracker/muon detector substructure
                const static unsigned short SubstrMask = 0x7;
                const static unsigned short SubstrOffset = 7;

                // 1 bit to distinguish tracker and muon subsystems
                const static unsigned short SubDetectorMask = 0x1;
                const static unsigned short SubDetectorOffset = 10;

                uint16_t rawHitType = (pattern >> HitTypeOffset) & HitTypeMask;
                uint16_t layer = (pattern >> LayerOffset) & LayerMask;
                uint16_t subdet = (pattern >> SubstrOffset) & SubstrMask;
                uint16_t detector = ((pattern >> SubDetectorOffset) & SubDetectorMask);
                uint16_t stereo = (pattern >> SideOffset) & SideMask;
                
                // DetId::Tracker = 1 and DetId::Muon = 2 but
                // in HitPattern Tracker = 1 and Muon = 0 so a conversion is needed:
                if (detector == 0) {
                    detector = DetId::Muon;
                }

                TrackingRecHit::Type hitType = TrackingRecHit::valid;
                switch (rawHitType) {
                case VALID_CONST:
                    hitType = TrackingRecHit::valid;
                    break;
                case MISSING_CONST:
                    hitType = TrackingRecHit::missing;
                    break;
                case INACTIVE_CONST:
                    hitType = TrackingRecHit::inactive;
                    break;
                case BAD_CONST:
                    hitType = TrackingRecHit::bad;
                    break;
                }

                if (category == HitPattern::MISSING_INNER_HITS) {
                    hitType = TrackingRecHit::missing_inner;
                } else if (category == HitPattern::MISSING_OUTER_HITS) {
                    hitType = TrackingRecHit::missing_outer;
                }

                DetId detId;
                if (detector == DetId::Tracker) {
                    return newObj->appendTrackerHitPattern(subdet, layer, stereo, hitType);
                } else if (detector == DetId::Muon) {
                    switch (subdet) {
                    case MuonSubdetId::DT: {
                        uint16_t station = 1 + (layer >> 2);
                        uint16_t superLayer = (layer & 0x3);
                        detId = DTLayerId(DONT_CARE, station, DONT_CARE, superLayer, DONT_CARE);
                    }
                    break;
                    case MuonSubdetId::CSC: {
                        uint16_t station = 1 + (layer >> 2);
                        uint16_t ring = 1 + (layer & 0x3);
                        detId = CSCDetId(DONT_CARE, station, ring, DONT_CARE, DONT_CARE);
                    }
                    break;
                    case MuonSubdetId::RPC: {
                        uint16_t station = 1 + ((layer >> 2) & 0x3);
                        uint16_t region  = layer & 0x1;
                        uint16_t layer_muon = 1 + ((station <= 2) ? ((layer >> 1) & 0x1) : 0);
                        detId = RPCDetId(region, DONT_CARE, station, DONT_CARE, layer_muon, DONT_CARE, DONT_CARE);
                    }
                    break;
                    }
                    return newObj->appendMuonHitPattern(detId, hitType);
                }
                return false;
            };

            auto fillNewHitPatternFromNewHitPattern = [&](const HitPattern hitPattern, const HitPattern::HitCategory category) {
                uint8_t hitCount = hitPattern.numberOfAllHits(HitPattern::TRACK_HITS);
                for (int i = 0; i < hitCount; i++) {
                    uint16_t pattern = hitPattern.getHitPattern(HitPattern::TRACK_HITS, i);
                    if(!appendNewHitPattern(pattern, category)) {
                        return false;
                    }
                }
                return true;
            };

            auto mergeNewHitPatternsIntoOneNewHitPattern = [&](void) {
                newObj->resetHitPattern();
                fillNewHitPatternFromNewHitPattern(onfile.hitPattern_, HitPattern::TRACK_HITS);
                fillNewHitPatternFromNewHitPattern(onfile.trackerExpectedHitsInner_, HitPattern::MISSING_INNER_HITS);
                fillNewHitPatternFromNewHitPattern(onfile.trackerExpectedHitsOuter_, HitPattern::MISSING_OUTER_HITS);
            };

            mergeNewHitPatternsIntoOneNewHitPattern();
      
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::TrackBase*)
   {
      ::reco::TrackBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::TrackBase));
      static ::ROOT::TGenericClassInfo 
         instance("reco::TrackBase", 19, "DataFormats/TrackReco/interface/TrackBase.h", 63,
                  typeid(::reco::TrackBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLTrackBase_Dictionary, isa_proxy, 12,
                  sizeof(::reco::TrackBase) );
      instance.SetNew(&new_recocLcLTrackBase);
      instance.SetNewArray(&newArray_recocLcLTrackBase);
      instance.SetDelete(&delete_recocLcLTrackBase);
      instance.SetDeleteArray(&deleteArray_recocLcLTrackBase);
      instance.SetDestructor(&destruct_recocLcLTrackBase);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "reco::TrackBase";
      rule->fTarget      = "hitPattern_";
      rule->fSource      = "reco::HitPattern hitPattern_; reco::HitPattern trackerExpectedHitsInner_; reco::HitPattern trackerExpectedHitsOuter_";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLTrackBase_0);
      rule->fCode        = "\n            using namespace reco;\n\n            auto appendNewHitPattern = [&](const uint16_t pattern, const HitPattern::HitCategory category) {\n                // value used for those parameters needed by XXXDetId constructors\n                // but that we do not care about.\n                const uint8_t DONT_CARE = 1;\n\n                const uint16_t VALID_CONST = (uint16_t) TrackingRecHit::valid;\n                const uint16_t MISSING_CONST = (uint16_t) TrackingRecHit::missing;\n                const uint16_t INACTIVE_CONST = (uint16_t) TrackingRecHit::inactive;\n                const uint16_t BAD_CONST = (uint16_t) TrackingRecHit::bad;\n\n                // 3 bits for hit type\n                const static unsigned short HitTypeMask = 0x3;\n                const static unsigned short HitTypeOffset = 0;\n\n                // 1 bit for mono/stereo\n                const static unsigned short SideMask = 0x1;\n                const static unsigned short SideOffset = 2;\n\n                // 4 bits to identify the layer/disk/wheel within the substructure\n                const static unsigned short LayerMask = 0xF;\n                const static unsigned short LayerOffset = 3;\n\n                // 3 bits to identify the tracker/muon detector substructure\n                const static unsigned short SubstrMask = 0x7;\n                const static unsigned short SubstrOffset = 7;\n\n                // 1 bit to distinguish tracker and muon subsystems\n                const static unsigned short SubDetectorMask = 0x1;\n                const static unsigned short SubDetectorOffset = 10;\n\n                uint16_t rawHitType = (pattern >> HitTypeOffset) & HitTypeMask;\n                uint16_t layer = (pattern >> LayerOffset) & LayerMask;\n                uint16_t subdet = (pattern >> SubstrOffset) & SubstrMask;\n                uint16_t detector = ((pattern >> SubDetectorOffset) & SubDetectorMask);\n                uint16_t stereo = (pattern >> SideOffset) & SideMask;\n                \n                // DetId::Tracker = 1 and DetId::Muon = 2 but\n                // in HitPattern Tracker = 1 and Muon = 0 so a conversion is needed:\n                if (detector == 0) {\n                    detector = DetId::Muon;\n                }\n\n                TrackingRecHit::Type hitType = TrackingRecHit::valid;\n                switch (rawHitType) {\n                case VALID_CONST:\n                    hitType = TrackingRecHit::valid;\n                    break;\n                case MISSING_CONST:\n                    hitType = TrackingRecHit::missing;\n                    break;\n                case INACTIVE_CONST:\n                    hitType = TrackingRecHit::inactive;\n                    break;\n                case BAD_CONST:\n                    hitType = TrackingRecHit::bad;\n                    break;\n                }\n\n                if (category == HitPattern::MISSING_INNER_HITS) {\n                    hitType = TrackingRecHit::missing_inner;\n                } else if (category == HitPattern::MISSING_OUTER_HITS) {\n                    hitType = TrackingRecHit::missing_outer;\n                }\n\n                DetId detId;\n                if (detector == DetId::Tracker) {\n                    return newObj->appendTrackerHitPattern(subdet, layer, stereo, hitType);\n                } else if (detector == DetId::Muon) {\n                    switch (subdet) {\n                    case MuonSubdetId::DT: {\n                        uint16_t station = 1 + (layer >> 2);\n                        uint16_t superLayer = (layer & 0x3);\n                        detId = DTLayerId(DONT_CARE, station, DONT_CARE, superLayer, DONT_CARE);\n                    }\n                    break;\n                    case MuonSubdetId::CSC: {\n                        uint16_t station = 1 + (layer >> 2);\n                        uint16_t ring = 1 + (layer & 0x3);\n                        detId = CSCDetId(DONT_CARE, station, ring, DONT_CARE, DONT_CARE);\n                    }\n                    break;\n                    case MuonSubdetId::RPC: {\n                        uint16_t station = 1 + ((layer >> 2) & 0x3);\n                        uint16_t region  = layer & 0x1;\n                        uint16_t layer_muon = 1 + ((station <= 2) ? ((layer >> 1) & 0x1) : 0);\n                        detId = RPCDetId(region, DONT_CARE, station, DONT_CARE, layer_muon, DONT_CARE, DONT_CARE);\n                    }\n                    break;\n                    }\n                    return newObj->appendMuonHitPattern(detId, hitType);\n                }\n                return false;\n            };\n\n            auto fillNewHitPatternFromNewHitPattern = [&](const HitPattern hitPattern, const HitPattern::HitCategory category) {\n                uint8_t hitCount = hitPattern.numberOfAllHits(HitPattern::TRACK_HITS);\n                for (int i = 0; i < hitCount; i++) {\n                    uint16_t pattern = hitPattern.getHitPattern(HitPattern::TRACK_HITS, i);\n                    if(!appendNewHitPattern(pattern, category)) {\n                        return false;\n                    }\n                }\n                return true;\n            };\n\n            auto mergeNewHitPatternsIntoOneNewHitPattern = [&](void) {\n                newObj->resetHitPattern();\n                fillNewHitPatternFromNewHitPattern(onfile.hitPattern_, HitPattern::TRACK_HITS);\n                fillNewHitPatternFromNewHitPattern(onfile.trackerExpectedHitsInner_, HitPattern::MISSING_INNER_HITS);\n                fillNewHitPatternFromNewHitPattern(onfile.trackerExpectedHitsOuter_, HitPattern::MISSING_OUTER_HITS);\n            };\n\n            mergeNewHitPatternsIntoOneNewHitPattern();\n      ";
      rule->fVersion     = "[-12]";
      rule->fInclude     = "DataFormats/TrackReco/interface/HitPattern.h";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::TrackBase*)
   {
      return GenerateInitInstanceLocal((::reco::TrackBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::TrackBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLTrackBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::TrackBase*)0x0)->GetClass();
      recocLcLTrackBase_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLTrackBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefToBaseProdlErecocLcLTrackgR_Dictionary();
   static void edmcLcLRefToBaseProdlErecocLcLTrackgR_TClassManip(TClass*);
   static void *new_edmcLcLRefToBaseProdlErecocLcLTrackgR(void *p = 0);
   static void *newArray_edmcLcLRefToBaseProdlErecocLcLTrackgR(Long_t size, void *p);
   static void delete_edmcLcLRefToBaseProdlErecocLcLTrackgR(void *p);
   static void deleteArray_edmcLcLRefToBaseProdlErecocLcLTrackgR(void *p);
   static void destruct_edmcLcLRefToBaseProdlErecocLcLTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefToBaseProd<reco::Track>*)
   {
      ::edm::RefToBaseProd<reco::Track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefToBaseProd<reco::Track>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefToBaseProd<reco::Track>", ::edm::RefToBaseProd<reco::Track>::Class_Version(), "DataFormats/Common/interface/RefToBaseProd.h", 29,
                  typeid(::edm::RefToBaseProd<reco::Track>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefToBaseProdlErecocLcLTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefToBaseProd<reco::Track>) );
      instance.SetNew(&new_edmcLcLRefToBaseProdlErecocLcLTrackgR);
      instance.SetNewArray(&newArray_edmcLcLRefToBaseProdlErecocLcLTrackgR);
      instance.SetDelete(&delete_edmcLcLRefToBaseProdlErecocLcLTrackgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefToBaseProdlErecocLcLTrackgR);
      instance.SetDestructor(&destruct_edmcLcLRefToBaseProdlErecocLcLTrackgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefToBaseProd<reco::Track>*)
   {
      return GenerateInitInstanceLocal((::edm::RefToBaseProd<reco::Track>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefToBaseProd<reco::Track>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefToBaseProdlErecocLcLTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefToBaseProd<reco::Track>*)0x0)->GetClass();
      edmcLcLRefToBaseProdlErecocLcLTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefToBaseProdlErecocLcLTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLTrackExtraBase_Dictionary();
   static void recocLcLTrackExtraBase_TClassManip(TClass*);
   static void *new_recocLcLTrackExtraBase(void *p = 0);
   static void *newArray_recocLcLTrackExtraBase(Long_t size, void *p);
   static void delete_recocLcLTrackExtraBase(void *p);
   static void deleteArray_recocLcLTrackExtraBase(void *p);
   static void destruct_recocLcLTrackExtraBase(void *p);

   // Schema evolution read functions
   static void read_recocLcLTrackExtraBase_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_recHits_ = oldObj->GetId("recHits_");
#endif
      struct recocLcLTrackExtraBase_Onfile {
         TrackingRecHitRefVector &recHits_;
         recocLcLTrackExtraBase_Onfile(TrackingRecHitRefVector &onfile_recHits_ ): recHits_(onfile_recHits_) {}
      };
      static Long_t offset_Onfile_recocLcLTrackExtraBase_recHits_ = oldObj->GetClass()->GetDataMemberOffset("recHits_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLTrackExtraBase_Onfile onfile(
         *(TrackingRecHitRefVector*)(onfile_add+offset_Onfile_recocLcLTrackExtraBase_recHits_) );

      static TClassRef cls("reco::TrackExtraBase");
      static Long_t offset_m_hitCollection = cls->GetDataMemberOffset("m_hitCollection");
      edm::RefCore& m_hitCollection = *(edm::RefCore*)(target+offset_m_hitCollection);
      reco::TrackExtraBase* newObj = (reco::TrackExtraBase*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     m_hitCollection=onfile.recHits_.refVector().refCore();
   }
   static void read_recocLcLTrackExtraBase_1( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_recHits_ = oldObj->GetId("recHits_");
#endif
      struct recocLcLTrackExtraBase_Onfile {
         TrackingRecHitRefVector &recHits_;
         recocLcLTrackExtraBase_Onfile(TrackingRecHitRefVector &onfile_recHits_ ): recHits_(onfile_recHits_) {}
      };
      static Long_t offset_Onfile_recocLcLTrackExtraBase_recHits_ = oldObj->GetClass()->GetDataMemberOffset("recHits_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLTrackExtraBase_Onfile onfile(
         *(TrackingRecHitRefVector*)(onfile_add+offset_Onfile_recocLcLTrackExtraBase_recHits_) );

      static TClassRef cls("reco::TrackExtraBase");
      static Long_t offset_m_firstHit = cls->GetDataMemberOffset("m_firstHit");
      unsigned int& m_firstHit = *(unsigned int*)(target+offset_m_firstHit);
      reco::TrackExtraBase* newObj = (reco::TrackExtraBase*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     m_firstHit = onfile.recHits_.refVector().keys()[0];
   }
   static void read_recocLcLTrackExtraBase_2( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_recHits_ = oldObj->GetId("recHits_");
#endif
      struct recocLcLTrackExtraBase_Onfile {
         TrackingRecHitRefVector &recHits_;
         recocLcLTrackExtraBase_Onfile(TrackingRecHitRefVector &onfile_recHits_ ): recHits_(onfile_recHits_) {}
      };
      static Long_t offset_Onfile_recocLcLTrackExtraBase_recHits_ = oldObj->GetClass()->GetDataMemberOffset("recHits_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLTrackExtraBase_Onfile onfile(
         *(TrackingRecHitRefVector*)(onfile_add+offset_Onfile_recocLcLTrackExtraBase_recHits_) );

      static TClassRef cls("reco::TrackExtraBase");
      static Long_t offset_m_nHits = cls->GetDataMemberOffset("m_nHits");
      unsigned int& m_nHits = *(unsigned int*)(target+offset_m_nHits);
      reco::TrackExtraBase* newObj = (reco::TrackExtraBase*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     m_nHits=onfile.recHits_.size();
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::TrackExtraBase*)
   {
      ::reco::TrackExtraBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::TrackExtraBase));
      static ::ROOT::TGenericClassInfo 
         instance("reco::TrackExtraBase", 12, "DataFormats/TrackReco/interface/TrackExtraBase.h", 21,
                  typeid(::reco::TrackExtraBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLTrackExtraBase_Dictionary, isa_proxy, 12,
                  sizeof(::reco::TrackExtraBase) );
      instance.SetNew(&new_recocLcLTrackExtraBase);
      instance.SetNewArray(&newArray_recocLcLTrackExtraBase);
      instance.SetDelete(&delete_recocLcLTrackExtraBase);
      instance.SetDeleteArray(&deleteArray_recocLcLTrackExtraBase);
      instance.SetDestructor(&destruct_recocLcLTrackExtraBase);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(3);
      rule = &readrules[0];
      rule->fSourceClass = "reco::TrackExtraBase";
      rule->fTarget      = "m_hitCollection";
      rule->fSource      = "TrackingRecHitRefVector recHits_";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLTrackExtraBase_0);
      rule->fCode        = "m_hitCollection=onfile.recHits_.refVector().refCore();";
      rule->fVersion     = "[-10]";
      rule = &readrules[1];
      rule->fSourceClass = "reco::TrackExtraBase";
      rule->fTarget      = "m_firstHit";
      rule->fSource      = "TrackingRecHitRefVector recHits_";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLTrackExtraBase_1);
      rule->fCode        = "m_firstHit = onfile.recHits_.refVector().keys()[0];";
      rule->fVersion     = "[-10]";
      rule = &readrules[2];
      rule->fSourceClass = "reco::TrackExtraBase";
      rule->fTarget      = "m_nHits";
      rule->fSource      = "TrackingRecHitRefVector recHits_";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLTrackExtraBase_2);
      rule->fCode        = "m_nHits=onfile.recHits_.size();";
      rule->fVersion     = "[-10]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::TrackExtraBase*)
   {
      return GenerateInitInstanceLocal((::reco::TrackExtraBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::TrackExtraBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLTrackExtraBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::TrackExtraBase*)0x0)->GetClass();
      recocLcLTrackExtraBase_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLTrackExtraBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLTrackResiduals_Dictionary();
   static void recocLcLTrackResiduals_TClassManip(TClass*);
   static void *new_recocLcLTrackResiduals(void *p = 0);
   static void *newArray_recocLcLTrackResiduals(Long_t size, void *p);
   static void delete_recocLcLTrackResiduals(void *p);
   static void deleteArray_recocLcLTrackResiduals(void *p);
   static void destruct_recocLcLTrackResiduals(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::TrackResiduals*)
   {
      ::reco::TrackResiduals *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::TrackResiduals));
      static ::ROOT::TGenericClassInfo 
         instance("reco::TrackResiduals", 11, "DataFormats/TrackReco/interface/TrackResiduals.h", 9,
                  typeid(::reco::TrackResiduals), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLTrackResiduals_Dictionary, isa_proxy, 12,
                  sizeof(::reco::TrackResiduals) );
      instance.SetNew(&new_recocLcLTrackResiduals);
      instance.SetNewArray(&newArray_recocLcLTrackResiduals);
      instance.SetDelete(&delete_recocLcLTrackResiduals);
      instance.SetDeleteArray(&deleteArray_recocLcLTrackResiduals);
      instance.SetDestructor(&destruct_recocLcLTrackResiduals);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::TrackResiduals*)
   {
      return GenerateInitInstanceLocal((::reco::TrackResiduals*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::TrackResiduals*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLTrackResiduals_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::TrackResiduals*)0x0)->GetClass();
      recocLcLTrackResiduals_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLTrackResiduals_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLTrackExtra_Dictionary();
   static void recocLcLTrackExtra_TClassManip(TClass*);
   static void *new_recocLcLTrackExtra(void *p = 0);
   static void *newArray_recocLcLTrackExtra(Long_t size, void *p);
   static void delete_recocLcLTrackExtra(void *p);
   static void deleteArray_recocLcLTrackExtra(void *p);
   static void destruct_recocLcLTrackExtra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::TrackExtra*)
   {
      ::reco::TrackExtra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::TrackExtra));
      static ::ROOT::TGenericClassInfo 
         instance("reco::TrackExtra", 14, "DataFormats/TrackReco/interface/TrackExtra.h", 27,
                  typeid(::reco::TrackExtra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLTrackExtra_Dictionary, isa_proxy, 12,
                  sizeof(::reco::TrackExtra) );
      instance.SetNew(&new_recocLcLTrackExtra);
      instance.SetNewArray(&newArray_recocLcLTrackExtra);
      instance.SetDelete(&delete_recocLcLTrackExtra);
      instance.SetDeleteArray(&deleteArray_recocLcLTrackExtra);
      instance.SetDestructor(&destruct_recocLcLTrackExtra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::TrackExtra*)
   {
      return GenerateInitInstanceLocal((::reco::TrackExtra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::TrackExtra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLTrackExtra_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::TrackExtra*)0x0)->GetClass();
      recocLcLTrackExtra_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLTrackExtra_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLTrack_Dictionary();
   static void recocLcLTrack_TClassManip(TClass*);
   static void *new_recocLcLTrack(void *p = 0);
   static void *newArray_recocLcLTrack(Long_t size, void *p);
   static void delete_recocLcLTrack(void *p);
   static void deleteArray_recocLcLTrack(void *p);
   static void destruct_recocLcLTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::Track*)
   {
      ::reco::Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::Track));
      static ::ROOT::TGenericClassInfo 
         instance("reco::Track", 19, "DataFormats/TrackReco/interface/Track.h", 28,
                  typeid(::reco::Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLTrack_Dictionary, isa_proxy, 12,
                  sizeof(::reco::Track) );
      instance.SetNew(&new_recocLcLTrack);
      instance.SetNewArray(&newArray_recocLcLTrack);
      instance.SetDelete(&delete_recocLcLTrack);
      instance.SetDeleteArray(&deleteArray_recocLcLTrack);
      instance.SetDestructor(&destruct_recocLcLTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::Track*)
   {
      return GenerateInitInstanceLocal((::reco::Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLTrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::Track*)0x0)->GetClass();
      recocLcLTrack_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLTrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplErecocLcLDeDxDatagR_Dictionary();
   static void edmcLcLValueMaplErecocLcLDeDxDatagR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplErecocLcLDeDxDatagR(void *p = 0);
   static void *newArray_edmcLcLValueMaplErecocLcLDeDxDatagR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplErecocLcLDeDxDatagR(void *p);
   static void deleteArray_edmcLcLValueMaplErecocLcLDeDxDatagR(void *p);
   static void destruct_edmcLcLValueMaplErecocLcLDeDxDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<reco::DeDxData>*)
   {
      ::edm::ValueMap<reco::DeDxData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<reco::DeDxData>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<reco::DeDxData>", ::edm::ValueMap<reco::DeDxData>::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<reco::DeDxData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplErecocLcLDeDxDatagR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<reco::DeDxData>) );
      instance.SetNew(&new_edmcLcLValueMaplErecocLcLDeDxDatagR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplErecocLcLDeDxDatagR);
      instance.SetDelete(&delete_edmcLcLValueMaplErecocLcLDeDxDatagR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplErecocLcLDeDxDatagR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplErecocLcLDeDxDatagR);

      ::ROOT::AddClassAlternate("edm::ValueMap<reco::DeDxData>","reco::DeDxDataValueMap");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<reco::DeDxData>*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<reco::DeDxData>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<reco::DeDxData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplErecocLcLDeDxDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<reco::DeDxData>*)0x0)->GetClass();
      edmcLcLValueMaplErecocLcLDeDxDatagR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplErecocLcLDeDxDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary();
   static void edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >::Class_Version(), "DataFormats/Common/interface/ValueMap.h", 105,
                  typeid(::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >) );
      instance.SetNew(&new_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >","edm::ValueMap<reco::TrackRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      return GenerateInitInstanceLocal((::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0)->GetClass();
      edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR_Dictionary();
   static void edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR(void *p);
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Association<vector<reco::Track> >*)
   {
      ::edm::Association<vector<reco::Track> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Association<vector<reco::Track> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Association<vector<reco::Track> >", ::edm::Association<vector<reco::Track> >::Class_Version(), "DataFormats/Common/interface/Association.h", 18,
                  typeid(::edm::Association<vector<reco::Track> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Association<vector<reco::Track> >) );
      instance.SetNew(&new_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR);

      ::ROOT::AddClassAlternate("edm::Association<vector<reco::Track> >","edm::Association<reco::TrackCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Association<vector<reco::Track> >*)
   {
      return GenerateInitInstanceLocal((::edm::Association<vector<reco::Track> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Association<vector<reco::Track> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Association<vector<reco::Track> >*)0x0)->GetClass();
      edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR_Dictionary();
   static void edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p);
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Association<vector<reco::DeDxHitInfo> >*)
   {
      ::edm::Association<vector<reco::DeDxHitInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Association<vector<reco::DeDxHitInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Association<vector<reco::DeDxHitInfo> >", ::edm::Association<vector<reco::DeDxHitInfo> >::Class_Version(), "DataFormats/Common/interface/Association.h", 18,
                  typeid(::edm::Association<vector<reco::DeDxHitInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Association<vector<reco::DeDxHitInfo> >) );
      instance.SetNew(&new_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::Association<vector<reco::DeDxHitInfo> >","reco::DeDxHitInfoAss");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Association<vector<reco::DeDxHitInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Association<vector<reco::DeDxHitInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Association<vector<reco::DeDxHitInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Association<vector<reco::DeDxHitInfo> >*)0x0)->GetClass();
      edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 22,
                  typeid(::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >","edm::helpers::KeyVal<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >*)
   {
      ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 22,
                  typeid(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >","edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Track> >,edm::RefProd<std::vector<reco::Track> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >*)
   {
      ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 22,
                  typeid(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >","edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Track> >,edm::RefProd<std::vector<TrajectorySeed> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >*)
   {
      ::edm::helpers::Key<edm::RefProd<vector<reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::Key<edm::RefProd<vector<reco::Track> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 37,
                  typeid(::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::Key<edm::RefProd<vector<reco::Track> > >","edm::helpers::Key<edm::RefProd<std::vector<reco::Track> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >", ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >","edm::AssociationMap<edm::OneToOne<std::vector<reco::Track>,std::vector<reco::Track>,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >", ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >","edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>,double,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >", ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >","edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>,float,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >", ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >","edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>,int,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >", ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >","edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>,bool,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >", ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >","edm::AssociationMap<edm::OneToMany<std::vector<reco::Track>,std::vector<TrajectorySeed>,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary();
   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p = 0);
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t size, void *p);
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>::Class_Version(), "DataFormats/Common/interface/AssociationVector.h", 62,
                  typeid(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>) );
      instance.SetNew(&new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetNewArray(&newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDelete(&delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDestructor(&destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0)->GetClass();
      edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary();
   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p = 0);
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t size, void *p);
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>::Class_Version(), "DataFormats/Common/interface/AssociationVector.h", 62,
                  typeid(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>) );
      instance.SetNew(&new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetNewArray(&newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDelete(&delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDestructor(&destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0)->GetClass();
      edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary();
   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p = 0);
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t size, void *p);
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>::Class_Version(), "DataFormats/Common/interface/AssociationVector.h", 62,
                  typeid(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>) );
      instance.SetNew(&new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetNewArray(&newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDelete(&delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDestructor(&destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0)->GetClass();
      edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary();
   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p = 0);
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t size, void *p);
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>::Class_Version(), "DataFormats/Common/interface/AssociationVector.h", 62,
                  typeid(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>) );
      instance.SetNew(&new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetNewArray(&newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDelete(&delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDestructor(&destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0)->GetClass();
      edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary();
   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p = 0);
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t size, void *p);
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>::Class_Version(), "DataFormats/Common/interface/AssociationVector.h", 62,
                  typeid(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>) );
      instance.SetNew(&new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetNewArray(&newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDelete(&delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDestructor(&destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0)->GetClass();
      edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLDeDxHit_Dictionary();
   static void recocLcLDeDxHit_TClassManip(TClass*);
   static void *new_recocLcLDeDxHit(void *p = 0);
   static void *newArray_recocLcLDeDxHit(Long_t size, void *p);
   static void delete_recocLcLDeDxHit(void *p);
   static void deleteArray_recocLcLDeDxHit(void *p);
   static void destruct_recocLcLDeDxHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::DeDxHit*)
   {
      ::reco::DeDxHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::DeDxHit));
      static ::ROOT::TGenericClassInfo 
         instance("reco::DeDxHit", 12, "DataFormats/TrackReco/interface/DeDxHit.h", 12,
                  typeid(::reco::DeDxHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLDeDxHit_Dictionary, isa_proxy, 12,
                  sizeof(::reco::DeDxHit) );
      instance.SetNew(&new_recocLcLDeDxHit);
      instance.SetNewArray(&newArray_recocLcLDeDxHit);
      instance.SetDelete(&delete_recocLcLDeDxHit);
      instance.SetDeleteArray(&deleteArray_recocLcLDeDxHit);
      instance.SetDestructor(&destruct_recocLcLDeDxHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::DeDxHit*)
   {
      return GenerateInitInstanceLocal((::reco::DeDxHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::DeDxHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLDeDxHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::DeDxHit*)0x0)->GetClass();
      recocLcLDeDxHit_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLDeDxHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLDeDxData_Dictionary();
   static void recocLcLDeDxData_TClassManip(TClass*);
   static void *new_recocLcLDeDxData(void *p = 0);
   static void *newArray_recocLcLDeDxData(Long_t size, void *p);
   static void delete_recocLcLDeDxData(void *p);
   static void deleteArray_recocLcLDeDxData(void *p);
   static void destruct_recocLcLDeDxData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::DeDxData*)
   {
      ::reco::DeDxData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::DeDxData));
      static ::ROOT::TGenericClassInfo 
         instance("reco::DeDxData", 10, "DataFormats/TrackReco/interface/DeDxData.h", 9,
                  typeid(::reco::DeDxData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLDeDxData_Dictionary, isa_proxy, 12,
                  sizeof(::reco::DeDxData) );
      instance.SetNew(&new_recocLcLDeDxData);
      instance.SetNewArray(&newArray_recocLcLDeDxData);
      instance.SetDelete(&delete_recocLcLDeDxData);
      instance.SetDeleteArray(&deleteArray_recocLcLDeDxData);
      instance.SetDestructor(&destruct_recocLcLDeDxData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::DeDxData*)
   {
      return GenerateInitInstanceLocal((::reco::DeDxData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::DeDxData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLDeDxData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::DeDxData*)0x0)->GetClass();
      recocLcLDeDxData_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLDeDxData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLDeDxHitInfo_Dictionary();
   static void recocLcLDeDxHitInfo_TClassManip(TClass*);
   static void *new_recocLcLDeDxHitInfo(void *p = 0);
   static void *newArray_recocLcLDeDxHitInfo(Long_t size, void *p);
   static void delete_recocLcLDeDxHitInfo(void *p);
   static void deleteArray_recocLcLDeDxHitInfo(void *p);
   static void destruct_recocLcLDeDxHitInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::DeDxHitInfo*)
   {
      ::reco::DeDxHitInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::DeDxHitInfo));
      static ::ROOT::TGenericClassInfo 
         instance("reco::DeDxHitInfo", 3, "DataFormats/TrackReco/interface/DeDxHitInfo.h", 14,
                  typeid(::reco::DeDxHitInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLDeDxHitInfo_Dictionary, isa_proxy, 12,
                  sizeof(::reco::DeDxHitInfo) );
      instance.SetNew(&new_recocLcLDeDxHitInfo);
      instance.SetNewArray(&newArray_recocLcLDeDxHitInfo);
      instance.SetDelete(&delete_recocLcLDeDxHitInfo);
      instance.SetDeleteArray(&deleteArray_recocLcLDeDxHitInfo);
      instance.SetDestructor(&destruct_recocLcLDeDxHitInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::DeDxHitInfo*)
   {
      return GenerateInitInstanceLocal((::reco::DeDxHitInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::DeDxHitInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLDeDxHitInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::DeDxHitInfo*)0x0)->GetClass();
      recocLcLDeDxHitInfo_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLDeDxHitInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLDeDxHitInfocLcLDeDxHitInfoContainer_Dictionary();
   static void recocLcLDeDxHitInfocLcLDeDxHitInfoContainer_TClassManip(TClass*);
   static void *new_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer(void *p = 0);
   static void *newArray_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer(Long_t size, void *p);
   static void delete_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer(void *p);
   static void deleteArray_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer(void *p);
   static void destruct_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::DeDxHitInfo::DeDxHitInfoContainer*)
   {
      ::reco::DeDxHitInfo::DeDxHitInfoContainer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::DeDxHitInfo::DeDxHitInfoContainer));
      static ::ROOT::TGenericClassInfo 
         instance("reco::DeDxHitInfo::DeDxHitInfoContainer", 2, "DataFormats/TrackReco/interface/DeDxHitInfo.h", 17,
                  typeid(::reco::DeDxHitInfo::DeDxHitInfoContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLDeDxHitInfocLcLDeDxHitInfoContainer_Dictionary, isa_proxy, 12,
                  sizeof(::reco::DeDxHitInfo::DeDxHitInfoContainer) );
      instance.SetNew(&new_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer);
      instance.SetNewArray(&newArray_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer);
      instance.SetDelete(&delete_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer);
      instance.SetDeleteArray(&deleteArray_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer);
      instance.SetDestructor(&destruct_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::DeDxHitInfo::DeDxHitInfoContainer*)
   {
      return GenerateInitInstanceLocal((::reco::DeDxHitInfo::DeDxHitInfoContainer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::DeDxHitInfo::DeDxHitInfoContainer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLDeDxHitInfocLcLDeDxHitInfoContainer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::DeDxHitInfo::DeDxHitInfoContainer*)0x0)->GetClass();
      recocLcLDeDxHitInfocLcLDeDxHitInfoContainer_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLDeDxHitInfocLcLDeDxHitInfoContainer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *SeedStopInfo_Dictionary();
   static void SeedStopInfo_TClassManip(TClass*);
   static void *new_SeedStopInfo(void *p = 0);
   static void *newArray_SeedStopInfo(Long_t size, void *p);
   static void delete_SeedStopInfo(void *p);
   static void deleteArray_SeedStopInfo(void *p);
   static void destruct_SeedStopInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SeedStopInfo*)
   {
      ::SeedStopInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SeedStopInfo));
      static ::ROOT::TGenericClassInfo 
         instance("SeedStopInfo", "DataFormats/TrackReco/interface/SeedStopInfo.h", 6,
                  typeid(::SeedStopInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SeedStopInfo_Dictionary, isa_proxy, 4,
                  sizeof(::SeedStopInfo) );
      instance.SetNew(&new_SeedStopInfo);
      instance.SetNewArray(&newArray_SeedStopInfo);
      instance.SetDelete(&delete_SeedStopInfo);
      instance.SetDeleteArray(&deleteArray_SeedStopInfo);
      instance.SetDestructor(&destruct_SeedStopInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SeedStopInfo*)
   {
      return GenerateInitInstanceLocal((::SeedStopInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SeedStopInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SeedStopInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::SeedStopInfo*)0x0)->GetClass();
      SeedStopInfo_TClassManip(theClass);
   return theClass;
   }

   static void SeedStopInfo_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("persistent","false");
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> : new pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>;
   }
   static void *newArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>[nElements] : new pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR(void *p) {
      delete ((pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>*)p);
   }
   static void deleteArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR(void *p) {
      delete [] ((pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>*)p);
   }
   static void destruct_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgR(void *p) {
      typedef pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> : new pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>;
   }
   static void *newArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>[nElements] : new pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR(void *p) {
      delete ((pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>*)p);
   }
   static void deleteArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR(void *p) {
      delete [] ((pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>*)p);
   }
   static void destruct_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgR(void *p) {
      typedef pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<edm::RefToBase<reco::Track>,double> : new pair<edm::RefToBase<reco::Track>,double>;
   }
   static void *newArray_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<edm::RefToBase<reco::Track>,double>[nElements] : new pair<edm::RefToBase<reco::Track>,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR(void *p) {
      delete ((pair<edm::RefToBase<reco::Track>,double>*)p);
   }
   static void deleteArray_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR(void *p) {
      delete [] ((pair<edm::RefToBase<reco::Track>,double>*)p);
   }
   static void destruct_pairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegR(void *p) {
      typedef pair<edm::RefToBase<reco::Track>,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<edm::RefToBase<reco::Track>,double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlErecocLcLTrackcOrecocLcLTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<reco::Track,reco::Track> : new pair<reco::Track,reco::Track>;
   }
   static void *newArray_pairlErecocLcLTrackcOrecocLcLTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<reco::Track,reco::Track>[nElements] : new pair<reco::Track,reco::Track>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlErecocLcLTrackcOrecocLcLTrackgR(void *p) {
      delete ((pair<reco::Track,reco::Track>*)p);
   }
   static void deleteArray_pairlErecocLcLTrackcOrecocLcLTrackgR(void *p) {
      delete [] ((pair<reco::Track,reco::Track>*)p);
   }
   static void destruct_pairlErecocLcLTrackcOrecocLcLTrackgR(void *p) {
      typedef pair<reco::Track,reco::Track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<reco::Track,reco::Track>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<TrackCandidate,pair<reco::Track,reco::Track> > : new pair<TrackCandidate,pair<reco::Track,reco::Track> >;
   }
   static void *newArray_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<TrackCandidate,pair<reco::Track,reco::Track> >[nElements] : new pair<TrackCandidate,pair<reco::Track,reco::Track> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p) {
      delete ((pair<TrackCandidate,pair<reco::Track,reco::Track> >*)p);
   }
   static void deleteArray_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p) {
      delete [] ((pair<TrackCandidate,pair<reco::Track,reco::Track> >*)p);
   }
   static void destruct_pairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p) {
      typedef pair<TrackCandidate,pair<reco::Track,reco::Track> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<TrackCandidate,pair<reco::Track,reco::Track> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > : new pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >;
   }
   static void *newArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements] : new pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void deleteArray_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void destruct_pairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      typedef pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > : new pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >;
   }
   static void *newArray_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >[nElements] : new pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      delete ((pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)p);
   }
   static void deleteArray_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      delete [] ((pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)p);
   }
   static void destruct_pairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      typedef pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> > : new ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >[nElements] : new ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > : new ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >[nElements] : new ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> > : new ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >[nElements] : new ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefToBaselErecocLcLTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBase<reco::Track> : new ::edm::RefToBase<reco::Track>;
   }
   static void *newArray_edmcLcLRefToBaselErecocLcLTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBase<reco::Track>[nElements] : new ::edm::RefToBase<reco::Track>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefToBaselErecocLcLTrackgR(void *p) {
      delete ((::edm::RefToBase<reco::Track>*)p);
   }
   static void deleteArray_edmcLcLRefToBaselErecocLcLTrackgR(void *p) {
      delete [] ((::edm::RefToBase<reco::Track>*)p);
   }
   static void destruct_edmcLcLRefToBaselErecocLcLTrackgR(void *p) {
      typedef ::edm::RefToBase<reco::Track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefToBase<reco::Track>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::TrackExtra> > : new ::edm::RefProd<vector<reco::TrackExtra> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::TrackExtra> >[nElements] : new ::edm::RefProd<vector<reco::TrackExtra> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::TrackExtra> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::TrackExtra> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLTrackExtragRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::TrackExtra> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::TrackExtra> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::Track> > : new ::edm::RefProd<vector<reco::Track> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::Track> >[nElements] : new ::edm::RefProd<vector<reco::Track> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::Track> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::Track> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLTrackgRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::Track> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::Track> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::DeDxHitInfo> > : new ::edm::RefProd<vector<reco::DeDxHitInfo> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::DeDxHitInfo> >[nElements] : new ::edm::RefProd<vector<reco::DeDxHitInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::DeDxHitInfo> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::DeDxHitInfo> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::DeDxHitInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::DeDxHitInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> > : new ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >[nElements] : new ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtracOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackExtragRcOrecocLcLTrackExtragRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > : new ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >[nElements] : new ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> > : new ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >[nElements] : new ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLDeDxHitInfogRcOrecocLcLDeDxHitInfogRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefToBaseVectorlErecocLcLTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseVector<reco::Track> : new ::edm::RefToBaseVector<reco::Track>;
   }
   static void *newArray_edmcLcLRefToBaseVectorlErecocLcLTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseVector<reco::Track>[nElements] : new ::edm::RefToBaseVector<reco::Track>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefToBaseVectorlErecocLcLTrackgR(void *p) {
      delete ((::edm::RefToBaseVector<reco::Track>*)p);
   }
   static void deleteArray_edmcLcLRefToBaseVectorlErecocLcLTrackgR(void *p) {
      delete [] ((::edm::RefToBaseVector<reco::Track>*)p);
   }
   static void destruct_edmcLcLRefToBaseVectorlErecocLcLTrackgR(void *p) {
      typedef ::edm::RefToBaseVector<reco::Track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefToBaseVector<reco::Track>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::TrackExtra> > : new ::edm::Wrapper<vector<reco::TrackExtra> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::TrackExtra> >[nElements] : new ::edm::Wrapper<vector<reco::TrackExtra> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::TrackExtra> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::TrackExtra> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLTrackExtragRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::TrackExtra> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::TrackExtra> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::Track> > : new ::edm::Wrapper<vector<reco::Track> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::Track> >[nElements] : new ::edm::Wrapper<vector<reco::Track> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::Track> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::Track> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLTrackgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::Track> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::Track> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > : new ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements] : new ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> > : new ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >[nElements] : new ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::DeDxData> > : new ::edm::Wrapper<vector<reco::DeDxData> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::DeDxData> >[nElements] : new ::edm::Wrapper<vector<reco::DeDxData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::DeDxData> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::DeDxData> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLDeDxDatagRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::DeDxData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::DeDxData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::DeDxData> > : new ::edm::Wrapper<edm::ValueMap<reco::DeDxData> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<reco::DeDxData> >[nElements] : new ::edm::Wrapper<edm::ValueMap<reco::DeDxData> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<reco::DeDxData> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<reco::DeDxData> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplErecocLcLDeDxDatagRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<reco::DeDxData> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<reco::DeDxData> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefToBaseVector<reco::Track> > : new ::edm::Wrapper<edm::RefToBaseVector<reco::Track> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefToBaseVector<reco::Track> >[nElements] : new ::edm::Wrapper<edm::RefToBaseVector<reco::Track> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefToBaseVector<reco::Track> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefToBaseVector<reco::Track> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLTrackgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefToBaseVector<reco::Track> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefToBaseVector<reco::Track> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > : new ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >[nElements] : new ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<pair<reco::Track,reco::Track> > : new ::edm::Wrapper<pair<reco::Track,reco::Track> >;
   }
   static void *newArray_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<pair<reco::Track,reco::Track> >[nElements] : new ::edm::Wrapper<pair<reco::Track,reco::Track> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p) {
      delete ((::edm::Wrapper<pair<reco::Track,reco::Track> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<pair<reco::Track,reco::Track> >*)p);
   }
   static void destruct_edmcLcLWrapperlEpairlErecocLcLTrackcOrecocLcLTrackgRsPgR(void *p) {
      typedef ::edm::Wrapper<pair<reco::Track,reco::Track> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<pair<reco::Track,reco::Track> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > > : new ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >[nElements] : new ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > > : new ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >;
   }
   static void *newArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >[nElements] : new ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > : new ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >;
   }
   static void *newArray_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >[nElements] : new ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > > : new ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >[nElements] : new ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > : new ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >;
   }
   static void *newArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >[nElements] : new ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlErecocLcLDeDxHitInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<reco::DeDxHitInfo> : new ::edm::Wrapper<reco::DeDxHitInfo>;
   }
   static void *newArray_edmcLcLWrapperlErecocLcLDeDxHitInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<reco::DeDxHitInfo>[nElements] : new ::edm::Wrapper<reco::DeDxHitInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlErecocLcLDeDxHitInfogR(void *p) {
      delete ((::edm::Wrapper<reco::DeDxHitInfo>*)p);
   }
   static void deleteArray_edmcLcLWrapperlErecocLcLDeDxHitInfogR(void *p) {
      delete [] ((::edm::Wrapper<reco::DeDxHitInfo>*)p);
   }
   static void destruct_edmcLcLWrapperlErecocLcLDeDxHitInfogR(void *p) {
      typedef ::edm::Wrapper<reco::DeDxHitInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<reco::DeDxHitInfo>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::DeDxHitInfo> > : new ::edm::Wrapper<vector<reco::DeDxHitInfo> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::DeDxHitInfo> >[nElements] : new ::edm::Wrapper<vector<reco::DeDxHitInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::DeDxHitInfo> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::DeDxHitInfo> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::DeDxHitInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::DeDxHitInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > > : new ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >[nElements] : new ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<SeedStopInfo> > : new ::edm::Wrapper<vector<SeedStopInfo> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<SeedStopInfo> >[nElements] : new ::edm::Wrapper<vector<SeedStopInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<SeedStopInfo> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<SeedStopInfo> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlESeedStopInfogRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<SeedStopInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<SeedStopInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::Track> > > : new ::edm::Wrapper<edm::Association<vector<reco::Track> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::Track> > >[nElements] : new ::edm::Wrapper<edm::Association<vector<reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Association<vector<reco::Track> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Association<vector<reco::Track> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Association<vector<reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Association<vector<reco::Track> > >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR(void *p) {
      delete ((::edm::reftobase::BaseHolder<reco::Track>*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR(void *p) {
      delete [] ((::edm::reftobase::BaseHolder<reco::Track>*)p);
   }
   static void destruct_edmcLcLreftobasecLcLBaseHolderlErecocLcLTrackgR(void *p) {
      typedef ::edm::reftobase::BaseHolder<reco::Track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::BaseHolder<reco::Track>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > : new ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements] : new ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLTrackcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::IndirectHolder<reco::Track> : new ::edm::reftobase::IndirectHolder<reco::Track>;
   }
   static void *newArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::IndirectHolder<reco::Track>[nElements] : new ::edm::reftobase::IndirectHolder<reco::Track>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR(void *p) {
      delete ((::edm::reftobase::IndirectHolder<reco::Track>*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR(void *p) {
      delete [] ((::edm::reftobase::IndirectHolder<reco::Track>*)p);
   }
   static void destruct_edmcLcLreftobasecLcLIndirectHolderlErecocLcLTrackgR(void *p) {
      typedef ::edm::reftobase::IndirectHolder<reco::Track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::IndirectHolder<reco::Track>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements] : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> > : new ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >[nElements] : new ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p) {
      delete ((::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p) {
      typedef ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefHolder<edm::Ptr<reco::Track> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR(void *p) {
      delete ((::edm::reftobase::BaseVectorHolder<reco::Track>*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR(void *p) {
      delete [] ((::edm::reftobase::BaseVectorHolder<reco::Track>*)p);
   }
   static void destruct_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLTrackgR(void *p) {
      typedef ::edm::reftobase::BaseVectorHolder<reco::Track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::BaseVectorHolder<reco::Track>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLPtrlErecocLcLTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ptr<reco::Track> : new ::edm::Ptr<reco::Track>;
   }
   static void *newArray_edmcLcLPtrlErecocLcLTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ptr<reco::Track>[nElements] : new ::edm::Ptr<reco::Track>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLPtrlErecocLcLTrackgR(void *p) {
      delete ((::edm::Ptr<reco::Track>*)p);
   }
   static void deleteArray_edmcLcLPtrlErecocLcLTrackgR(void *p) {
      delete [] ((::edm::Ptr<reco::Track>*)p);
   }
   static void destruct_edmcLcLPtrlErecocLcLTrackgR(void *p) {
      typedef ::edm::Ptr<reco::Track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ptr<reco::Track>

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLHitPattern(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::HitPattern : new ::reco::HitPattern;
   }
   static void *newArray_recocLcLHitPattern(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::HitPattern[nElements] : new ::reco::HitPattern[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLHitPattern(void *p) {
      delete ((::reco::HitPattern*)p);
   }
   static void deleteArray_recocLcLHitPattern(void *p) {
      delete [] ((::reco::HitPattern*)p);
   }
   static void destruct_recocLcLHitPattern(void *p) {
      typedef ::reco::HitPattern current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::HitPattern

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLTrackBase(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::TrackBase : new ::reco::TrackBase;
   }
   static void *newArray_recocLcLTrackBase(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::TrackBase[nElements] : new ::reco::TrackBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLTrackBase(void *p) {
      delete ((::reco::TrackBase*)p);
   }
   static void deleteArray_recocLcLTrackBase(void *p) {
      delete [] ((::reco::TrackBase*)p);
   }
   static void destruct_recocLcLTrackBase(void *p) {
      typedef ::reco::TrackBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::TrackBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefToBaseProdlErecocLcLTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseProd<reco::Track> : new ::edm::RefToBaseProd<reco::Track>;
   }
   static void *newArray_edmcLcLRefToBaseProdlErecocLcLTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseProd<reco::Track>[nElements] : new ::edm::RefToBaseProd<reco::Track>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefToBaseProdlErecocLcLTrackgR(void *p) {
      delete ((::edm::RefToBaseProd<reco::Track>*)p);
   }
   static void deleteArray_edmcLcLRefToBaseProdlErecocLcLTrackgR(void *p) {
      delete [] ((::edm::RefToBaseProd<reco::Track>*)p);
   }
   static void destruct_edmcLcLRefToBaseProdlErecocLcLTrackgR(void *p) {
      typedef ::edm::RefToBaseProd<reco::Track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefToBaseProd<reco::Track>

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLTrackExtraBase(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::TrackExtraBase : new ::reco::TrackExtraBase;
   }
   static void *newArray_recocLcLTrackExtraBase(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::TrackExtraBase[nElements] : new ::reco::TrackExtraBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLTrackExtraBase(void *p) {
      delete ((::reco::TrackExtraBase*)p);
   }
   static void deleteArray_recocLcLTrackExtraBase(void *p) {
      delete [] ((::reco::TrackExtraBase*)p);
   }
   static void destruct_recocLcLTrackExtraBase(void *p) {
      typedef ::reco::TrackExtraBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::TrackExtraBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLTrackResiduals(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::TrackResiduals : new ::reco::TrackResiduals;
   }
   static void *newArray_recocLcLTrackResiduals(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::TrackResiduals[nElements] : new ::reco::TrackResiduals[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLTrackResiduals(void *p) {
      delete ((::reco::TrackResiduals*)p);
   }
   static void deleteArray_recocLcLTrackResiduals(void *p) {
      delete [] ((::reco::TrackResiduals*)p);
   }
   static void destruct_recocLcLTrackResiduals(void *p) {
      typedef ::reco::TrackResiduals current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::TrackResiduals

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLTrackExtra(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::TrackExtra : new ::reco::TrackExtra;
   }
   static void *newArray_recocLcLTrackExtra(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::TrackExtra[nElements] : new ::reco::TrackExtra[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLTrackExtra(void *p) {
      delete ((::reco::TrackExtra*)p);
   }
   static void deleteArray_recocLcLTrackExtra(void *p) {
      delete [] ((::reco::TrackExtra*)p);
   }
   static void destruct_recocLcLTrackExtra(void *p) {
      typedef ::reco::TrackExtra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::TrackExtra

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLTrack(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::Track : new ::reco::Track;
   }
   static void *newArray_recocLcLTrack(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::Track[nElements] : new ::reco::Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLTrack(void *p) {
      delete ((::reco::Track*)p);
   }
   static void deleteArray_recocLcLTrack(void *p) {
      delete [] ((::reco::Track*)p);
   }
   static void destruct_recocLcLTrack(void *p) {
      typedef ::reco::Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::Track

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplErecocLcLDeDxDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::DeDxData> : new ::edm::ValueMap<reco::DeDxData>;
   }
   static void *newArray_edmcLcLValueMaplErecocLcLDeDxDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<reco::DeDxData>[nElements] : new ::edm::ValueMap<reco::DeDxData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplErecocLcLDeDxDatagR(void *p) {
      delete ((::edm::ValueMap<reco::DeDxData>*)p);
   }
   static void deleteArray_edmcLcLValueMaplErecocLcLDeDxDatagR(void *p) {
      delete [] ((::edm::ValueMap<reco::DeDxData>*)p);
   }
   static void destruct_edmcLcLValueMaplErecocLcLDeDxDatagR(void *p) {
      typedef ::edm::ValueMap<reco::DeDxData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<reco::DeDxData>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > : new ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >;
   }
   static void *newArray_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements] : new ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void deleteArray_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void destruct_edmcLcLValueMaplEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      typedef ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::Track> > : new ::edm::Association<vector<reco::Track> >;
   }
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::Track> >[nElements] : new ::edm::Association<vector<reco::Track> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR(void *p) {
      delete ((::edm::Association<vector<reco::Track> >*)p);
   }
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR(void *p) {
      delete [] ((::edm::Association<vector<reco::Track> >*)p);
   }
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLTrackgRsPgR(void *p) {
      typedef ::edm::Association<vector<reco::Track> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Association<vector<reco::Track> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::DeDxHitInfo> > : new ::edm::Association<vector<reco::DeDxHitInfo> >;
   }
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::DeDxHitInfo> >[nElements] : new ::edm::Association<vector<reco::DeDxHitInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      delete ((::edm::Association<vector<reco::DeDxHitInfo> >*)p);
   }
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      delete [] ((::edm::Association<vector<reco::DeDxHitInfo> >*)p);
   }
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLDeDxHitInfogRsPgR(void *p) {
      typedef ::edm::Association<vector<reco::DeDxHitInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Association<vector<reco::DeDxHitInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > : new ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements] : new ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      typedef ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > > : new ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >[nElements] : new ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      typedef ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > > : new ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >[nElements] : new ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR(void *p) {
      delete ((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlETrajectorySeedgRsPgRsPgR(void *p) {
      typedef ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::Key<edm::RefProd<vector<reco::Track> > > : new ::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >[nElements] : new ::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeylEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      typedef ::edm::helpers::Key<edm::RefProd<vector<reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::Key<edm::RefProd<vector<reco::Track> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > : new ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToOnelEvectorlErecocLcLTrackgRcOvectorlErecocLcLTrackgRcOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > : new ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOdoublecOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > : new ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > : new ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > : new ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLTrackgRcOboolcOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > : new ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManylEvectorlErecocLcLTrackgRcOvectorlETrajectorySeedgRcOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> : new ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>;
   }
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements] : new ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete ((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete [] ((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEvectorlErecocLcLDeDxHitgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      typedef ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> : new ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>;
   }
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements] : new ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete ((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete [] ((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEdoublegRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      typedef ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> : new ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>;
   }
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements] : new ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete ((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete [] ((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      typedef ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> : new ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>;
   }
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements] : new ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete ((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete [] ((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      typedef ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> : new ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>;
   }
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements] : new ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete ((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete [] ((::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOvectorlEboolgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      typedef ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLDeDxHit(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::DeDxHit : new ::reco::DeDxHit;
   }
   static void *newArray_recocLcLDeDxHit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::DeDxHit[nElements] : new ::reco::DeDxHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLDeDxHit(void *p) {
      delete ((::reco::DeDxHit*)p);
   }
   static void deleteArray_recocLcLDeDxHit(void *p) {
      delete [] ((::reco::DeDxHit*)p);
   }
   static void destruct_recocLcLDeDxHit(void *p) {
      typedef ::reco::DeDxHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::DeDxHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLDeDxData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::DeDxData : new ::reco::DeDxData;
   }
   static void *newArray_recocLcLDeDxData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::DeDxData[nElements] : new ::reco::DeDxData[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLDeDxData(void *p) {
      delete ((::reco::DeDxData*)p);
   }
   static void deleteArray_recocLcLDeDxData(void *p) {
      delete [] ((::reco::DeDxData*)p);
   }
   static void destruct_recocLcLDeDxData(void *p) {
      typedef ::reco::DeDxData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::DeDxData

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLDeDxHitInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::DeDxHitInfo : new ::reco::DeDxHitInfo;
   }
   static void *newArray_recocLcLDeDxHitInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::DeDxHitInfo[nElements] : new ::reco::DeDxHitInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLDeDxHitInfo(void *p) {
      delete ((::reco::DeDxHitInfo*)p);
   }
   static void deleteArray_recocLcLDeDxHitInfo(void *p) {
      delete [] ((::reco::DeDxHitInfo*)p);
   }
   static void destruct_recocLcLDeDxHitInfo(void *p) {
      typedef ::reco::DeDxHitInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::DeDxHitInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::DeDxHitInfo::DeDxHitInfoContainer : new ::reco::DeDxHitInfo::DeDxHitInfoContainer;
   }
   static void *newArray_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::DeDxHitInfo::DeDxHitInfoContainer[nElements] : new ::reco::DeDxHitInfo::DeDxHitInfoContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer(void *p) {
      delete ((::reco::DeDxHitInfo::DeDxHitInfoContainer*)p);
   }
   static void deleteArray_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer(void *p) {
      delete [] ((::reco::DeDxHitInfo::DeDxHitInfoContainer*)p);
   }
   static void destruct_recocLcLDeDxHitInfocLcLDeDxHitInfoContainer(void *p) {
      typedef ::reco::DeDxHitInfo::DeDxHitInfoContainer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::DeDxHitInfo::DeDxHitInfoContainer

namespace ROOT {
   // Wrappers around operator new
   static void *new_SeedStopInfo(void *p) {
      return  p ? new(p) ::SeedStopInfo : new ::SeedStopInfo;
   }
   static void *newArray_SeedStopInfo(Long_t nElements, void *p) {
      return p ? new(p) ::SeedStopInfo[nElements] : new ::SeedStopInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_SeedStopInfo(void *p) {
      delete ((::SeedStopInfo*)p);
   }
   static void deleteArray_SeedStopInfo(void *p) {
      delete [] ((::SeedStopInfo*)p);
   }
   static void destruct_SeedStopInfo(void *p) {
      typedef ::SeedStopInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SeedStopInfo

namespace ROOT {
   static TClass *vectorlErecocLcLTrackExtragR_Dictionary();
   static void vectorlErecocLcLTrackExtragR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLTrackExtragR(void *p = 0);
   static void *newArray_vectorlErecocLcLTrackExtragR(Long_t size, void *p);
   static void delete_vectorlErecocLcLTrackExtragR(void *p);
   static void deleteArray_vectorlErecocLcLTrackExtragR(void *p);
   static void destruct_vectorlErecocLcLTrackExtragR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::TrackExtra>*)
   {
      vector<reco::TrackExtra> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::TrackExtra>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::TrackExtra>", -2, "vector", 216,
                  typeid(vector<reco::TrackExtra>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLTrackExtragR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::TrackExtra>) );
      instance.SetNew(&new_vectorlErecocLcLTrackExtragR);
      instance.SetNewArray(&newArray_vectorlErecocLcLTrackExtragR);
      instance.SetDelete(&delete_vectorlErecocLcLTrackExtragR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLTrackExtragR);
      instance.SetDestructor(&destruct_vectorlErecocLcLTrackExtragR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::TrackExtra> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::TrackExtra>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLTrackExtragR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::TrackExtra>*)0x0)->GetClass();
      vectorlErecocLcLTrackExtragR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLTrackExtragR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLTrackExtragR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::TrackExtra> : new vector<reco::TrackExtra>;
   }
   static void *newArray_vectorlErecocLcLTrackExtragR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::TrackExtra>[nElements] : new vector<reco::TrackExtra>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLTrackExtragR(void *p) {
      delete ((vector<reco::TrackExtra>*)p);
   }
   static void deleteArray_vectorlErecocLcLTrackExtragR(void *p) {
      delete [] ((vector<reco::TrackExtra>*)p);
   }
   static void destruct_vectorlErecocLcLTrackExtragR(void *p) {
      typedef vector<reco::TrackExtra> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::TrackExtra>

namespace ROOT {
   static TClass *vectorlErecocLcLTrackgR_Dictionary();
   static void vectorlErecocLcLTrackgR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLTrackgR(void *p = 0);
   static void *newArray_vectorlErecocLcLTrackgR(Long_t size, void *p);
   static void delete_vectorlErecocLcLTrackgR(void *p);
   static void deleteArray_vectorlErecocLcLTrackgR(void *p);
   static void destruct_vectorlErecocLcLTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::Track>*)
   {
      vector<reco::Track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::Track>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::Track>", -2, "vector", 216,
                  typeid(vector<reco::Track>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLTrackgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::Track>) );
      instance.SetNew(&new_vectorlErecocLcLTrackgR);
      instance.SetNewArray(&newArray_vectorlErecocLcLTrackgR);
      instance.SetDelete(&delete_vectorlErecocLcLTrackgR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLTrackgR);
      instance.SetDestructor(&destruct_vectorlErecocLcLTrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::Track> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::Track>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::Track>*)0x0)->GetClass();
      vectorlErecocLcLTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::Track> : new vector<reco::Track>;
   }
   static void *newArray_vectorlErecocLcLTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::Track>[nElements] : new vector<reco::Track>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLTrackgR(void *p) {
      delete ((vector<reco::Track>*)p);
   }
   static void deleteArray_vectorlErecocLcLTrackgR(void *p) {
      delete [] ((vector<reco::Track>*)p);
   }
   static void destruct_vectorlErecocLcLTrackgR(void *p) {
      typedef vector<reco::Track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::Track>

namespace ROOT {
   static TClass *vectorlErecocLcLDeDxHitInfogR_Dictionary();
   static void vectorlErecocLcLDeDxHitInfogR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLDeDxHitInfogR(void *p = 0);
   static void *newArray_vectorlErecocLcLDeDxHitInfogR(Long_t size, void *p);
   static void delete_vectorlErecocLcLDeDxHitInfogR(void *p);
   static void deleteArray_vectorlErecocLcLDeDxHitInfogR(void *p);
   static void destruct_vectorlErecocLcLDeDxHitInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::DeDxHitInfo>*)
   {
      vector<reco::DeDxHitInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::DeDxHitInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::DeDxHitInfo>", -2, "vector", 216,
                  typeid(vector<reco::DeDxHitInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLDeDxHitInfogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::DeDxHitInfo>) );
      instance.SetNew(&new_vectorlErecocLcLDeDxHitInfogR);
      instance.SetNewArray(&newArray_vectorlErecocLcLDeDxHitInfogR);
      instance.SetDelete(&delete_vectorlErecocLcLDeDxHitInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLDeDxHitInfogR);
      instance.SetDestructor(&destruct_vectorlErecocLcLDeDxHitInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::DeDxHitInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::DeDxHitInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLDeDxHitInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::DeDxHitInfo>*)0x0)->GetClass();
      vectorlErecocLcLDeDxHitInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLDeDxHitInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLDeDxHitInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::DeDxHitInfo> : new vector<reco::DeDxHitInfo>;
   }
   static void *newArray_vectorlErecocLcLDeDxHitInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::DeDxHitInfo>[nElements] : new vector<reco::DeDxHitInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLDeDxHitInfogR(void *p) {
      delete ((vector<reco::DeDxHitInfo>*)p);
   }
   static void deleteArray_vectorlErecocLcLDeDxHitInfogR(void *p) {
      delete [] ((vector<reco::DeDxHitInfo>*)p);
   }
   static void destruct_vectorlErecocLcLDeDxHitInfogR(void *p) {
      typedef vector<reco::DeDxHitInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::DeDxHitInfo>

namespace ROOT {
   static TClass *vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR_Dictionary();
   static void vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR(void *p = 0);
   static void *newArray_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR(Long_t size, void *p);
   static void delete_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR(void *p);
   static void deleteArray_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR(void *p);
   static void destruct_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::DeDxHitInfo::DeDxHitInfoContainer>*)
   {
      vector<reco::DeDxHitInfo::DeDxHitInfoContainer> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::DeDxHitInfo::DeDxHitInfoContainer>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::DeDxHitInfo::DeDxHitInfoContainer>", -2, "vector", 216,
                  typeid(vector<reco::DeDxHitInfo::DeDxHitInfoContainer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::DeDxHitInfo::DeDxHitInfoContainer>) );
      instance.SetNew(&new_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR);
      instance.SetNewArray(&newArray_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR);
      instance.SetDelete(&delete_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR);
      instance.SetDestructor(&destruct_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::DeDxHitInfo::DeDxHitInfoContainer> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::DeDxHitInfo::DeDxHitInfoContainer>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::DeDxHitInfo::DeDxHitInfoContainer>*)0x0)->GetClass();
      vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::DeDxHitInfo::DeDxHitInfoContainer> : new vector<reco::DeDxHitInfo::DeDxHitInfoContainer>;
   }
   static void *newArray_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::DeDxHitInfo::DeDxHitInfoContainer>[nElements] : new vector<reco::DeDxHitInfo::DeDxHitInfoContainer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR(void *p) {
      delete ((vector<reco::DeDxHitInfo::DeDxHitInfoContainer>*)p);
   }
   static void deleteArray_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR(void *p) {
      delete [] ((vector<reco::DeDxHitInfo::DeDxHitInfoContainer>*)p);
   }
   static void destruct_vectorlErecocLcLDeDxHitInfocLcLDeDxHitInfoContainergR(void *p) {
      typedef vector<reco::DeDxHitInfo::DeDxHitInfoContainer> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::DeDxHitInfo::DeDxHitInfoContainer>

namespace ROOT {
   static TClass *vectorlErecocLcLDeDxHitgR_Dictionary();
   static void vectorlErecocLcLDeDxHitgR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLDeDxHitgR(void *p = 0);
   static void *newArray_vectorlErecocLcLDeDxHitgR(Long_t size, void *p);
   static void delete_vectorlErecocLcLDeDxHitgR(void *p);
   static void deleteArray_vectorlErecocLcLDeDxHitgR(void *p);
   static void destruct_vectorlErecocLcLDeDxHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::DeDxHit>*)
   {
      vector<reco::DeDxHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::DeDxHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::DeDxHit>", -2, "vector", 216,
                  typeid(vector<reco::DeDxHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLDeDxHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::DeDxHit>) );
      instance.SetNew(&new_vectorlErecocLcLDeDxHitgR);
      instance.SetNewArray(&newArray_vectorlErecocLcLDeDxHitgR);
      instance.SetDelete(&delete_vectorlErecocLcLDeDxHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLDeDxHitgR);
      instance.SetDestructor(&destruct_vectorlErecocLcLDeDxHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::DeDxHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::DeDxHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLDeDxHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::DeDxHit>*)0x0)->GetClass();
      vectorlErecocLcLDeDxHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLDeDxHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLDeDxHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::DeDxHit> : new vector<reco::DeDxHit>;
   }
   static void *newArray_vectorlErecocLcLDeDxHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::DeDxHit>[nElements] : new vector<reco::DeDxHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLDeDxHitgR(void *p) {
      delete ((vector<reco::DeDxHit>*)p);
   }
   static void deleteArray_vectorlErecocLcLDeDxHitgR(void *p) {
      delete [] ((vector<reco::DeDxHit>*)p);
   }
   static void destruct_vectorlErecocLcLDeDxHitgR(void *p) {
      typedef vector<reco::DeDxHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::DeDxHit>

namespace ROOT {
   static TClass *vectorlErecocLcLDeDxDatagR_Dictionary();
   static void vectorlErecocLcLDeDxDatagR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLDeDxDatagR(void *p = 0);
   static void *newArray_vectorlErecocLcLDeDxDatagR(Long_t size, void *p);
   static void delete_vectorlErecocLcLDeDxDatagR(void *p);
   static void deleteArray_vectorlErecocLcLDeDxDatagR(void *p);
   static void destruct_vectorlErecocLcLDeDxDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::DeDxData>*)
   {
      vector<reco::DeDxData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::DeDxData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::DeDxData>", -2, "vector", 216,
                  typeid(vector<reco::DeDxData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLDeDxDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::DeDxData>) );
      instance.SetNew(&new_vectorlErecocLcLDeDxDatagR);
      instance.SetNewArray(&newArray_vectorlErecocLcLDeDxDatagR);
      instance.SetDelete(&delete_vectorlErecocLcLDeDxDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLDeDxDatagR);
      instance.SetDestructor(&destruct_vectorlErecocLcLDeDxDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::DeDxData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::DeDxData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLDeDxDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::DeDxData>*)0x0)->GetClass();
      vectorlErecocLcLDeDxDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLDeDxDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLDeDxDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::DeDxData> : new vector<reco::DeDxData>;
   }
   static void *newArray_vectorlErecocLcLDeDxDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::DeDxData>[nElements] : new vector<reco::DeDxData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLDeDxDatagR(void *p) {
      delete ((vector<reco::DeDxData>*)p);
   }
   static void deleteArray_vectorlErecocLcLDeDxDatagR(void *p) {
      delete [] ((vector<reco::DeDxData>*)p);
   }
   static void destruct_vectorlErecocLcLDeDxDatagR(void *p) {
      typedef vector<reco::DeDxData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::DeDxData>

namespace ROOT {
   static TClass *vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR_Dictionary();
   static void vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR(void *p);
   static void deleteArray_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR(void *p);
   static void destruct_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<edm::RefToBase<reco::Track>,double> >*)
   {
      vector<pair<edm::RefToBase<reco::Track>,double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<edm::RefToBase<reco::Track>,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<edm::RefToBase<reco::Track>,double> >", -2, "vector", 216,
                  typeid(vector<pair<edm::RefToBase<reco::Track>,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<edm::RefToBase<reco::Track>,double> >) );
      instance.SetNew(&new_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<edm::RefToBase<reco::Track>,double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<edm::RefToBase<reco::Track>,double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<edm::RefToBase<reco::Track>,double> >*)0x0)->GetClass();
      vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<edm::RefToBase<reco::Track>,double> > : new vector<pair<edm::RefToBase<reco::Track>,double> >;
   }
   static void *newArray_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<edm::RefToBase<reco::Track>,double> >[nElements] : new vector<pair<edm::RefToBase<reco::Track>,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR(void *p) {
      delete ((vector<pair<edm::RefToBase<reco::Track>,double> >*)p);
   }
   static void deleteArray_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR(void *p) {
      delete [] ((vector<pair<edm::RefToBase<reco::Track>,double> >*)p);
   }
   static void destruct_vectorlEpairlEedmcLcLRefToBaselErecocLcLTrackgRcOdoublegRsPgR(void *p) {
      typedef vector<pair<edm::RefToBase<reco::Track>,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<edm::RefToBase<reco::Track>,double> >

namespace ROOT {
   static TClass *vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR_Dictionary();
   static void vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR(void *p);
   static void destruct_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >*)
   {
      vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >", -2, "vector", 216,
                  typeid(vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >) );
      instance.SetNew(&new_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >*)0x0)->GetClass();
      vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > : new vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >;
   }
   static void *newArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >[nElements] : new vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR(void *p) {
      delete ((vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >*)p);
   }
   static void deleteArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR(void *p) {
      delete [] ((vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >*)p);
   }
   static void destruct_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgR(void *p) {
      typedef vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> >

namespace ROOT {
   static TClass *vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR_Dictionary();
   static void vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR(void *p);
   static void destruct_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >*)
   {
      vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >", -2, "vector", 216,
                  typeid(vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >) );
      instance.SetNew(&new_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >*)0x0)->GetClass();
      vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > : new vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >;
   }
   static void *newArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >[nElements] : new vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR(void *p) {
      delete ((vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >*)p);
   }
   static void deleteArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR(void *p) {
      delete [] ((vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >*)p);
   }
   static void destruct_vectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgR(void *p) {
      typedef vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> >

namespace ROOT {
   static TClass *vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_Dictionary();
   static void vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)
   {
      vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >", -2, "vector", 216,
                  typeid(vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >) );
      instance.SetNew(&new_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)0x0)->GetClass();
      vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > : new vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >;
   }
   static void *newArray_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >[nElements] : new vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)p);
   }
   static void deleteArray_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >*)p);
   }
   static void destruct_vectorlEpairlETrackCandidatecOpairlErecocLcLTrackcOrecocLcLTrackgRsPgRsPgR(void *p) {
      typedef vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > >

namespace ROOT {
   static TClass *vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_Dictionary();
   static void vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p);
   static void destruct_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)
   {
      vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >", -2, "vector", 216,
                  typeid(vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >) );
      instance.SetNew(&new_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)0x0)->GetClass();
      vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > : new vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >;
   }
   static void *newArray_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >[nElements] : new vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p) {
      delete ((vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)p);
   }
   static void deleteArray_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p) {
      delete [] ((vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >*)p);
   }
   static void destruct_vectorlEpairlETrackCandidatecOpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgRsPgRsPgR(void *p) {
      typedef vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >

namespace ROOT {
   static TClass *vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", -2, "vector", 216,
                  typeid(vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >) );
      instance.SetNew(&new_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0)->GetClass();
      vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > : new vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >;
   }
   static void *newArray_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements] : new vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void destruct_vectorlEedmcLcLRefVectorlEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      typedef vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR_Dictionary();
   static void vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::RefToBase<reco::Track> >*)
   {
      vector<edm::RefToBase<reco::Track> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::RefToBase<reco::Track> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::RefToBase<reco::Track> >", -2, "vector", 216,
                  typeid(vector<edm::RefToBase<reco::Track> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::RefToBase<reco::Track> >) );
      instance.SetNew(&new_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::RefToBase<reco::Track> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<edm::RefToBase<reco::Track> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::RefToBase<reco::Track> >*)0x0)->GetClass();
      vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::RefToBase<reco::Track> > : new vector<edm::RefToBase<reco::Track> >;
   }
   static void *newArray_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::RefToBase<reco::Track> >[nElements] : new vector<edm::RefToBase<reco::Track> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR(void *p) {
      delete ((vector<edm::RefToBase<reco::Track> >*)p);
   }
   static void deleteArray_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR(void *p) {
      delete [] ((vector<edm::RefToBase<reco::Track> >*)p);
   }
   static void destruct_vectorlEedmcLcLRefToBaselErecocLcLTrackgRsPgR(void *p) {
      typedef vector<edm::RefToBase<reco::Track> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::RefToBase<reco::Track> >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)
   {
      vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", -2, "vector", 216,
                  typeid(vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > : new vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements] : new vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR_Dictionary();
   static void vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ptr<reco::Track> >*)
   {
      vector<edm::Ptr<reco::Track> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ptr<reco::Track> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ptr<reco::Track> >", -2, "vector", 216,
                  typeid(vector<edm::Ptr<reco::Track> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ptr<reco::Track> >) );
      instance.SetNew(&new_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ptr<reco::Track> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<edm::Ptr<reco::Track> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ptr<reco::Track> >*)0x0)->GetClass();
      vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ptr<reco::Track> > : new vector<edm::Ptr<reco::Track> >;
   }
   static void *newArray_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ptr<reco::Track> >[nElements] : new vector<edm::Ptr<reco::Track> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p) {
      delete ((vector<edm::Ptr<reco::Track> >*)p);
   }
   static void deleteArray_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p) {
      delete [] ((vector<edm::Ptr<reco::Track> >*)p);
   }
   static void destruct_vectorlEedmcLcLPtrlErecocLcLTrackgRsPgR(void *p) {
      typedef vector<edm::Ptr<reco::Track> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ptr<reco::Track> >

namespace ROOT {
   static TClass *vectorlESeedStopInfogR_Dictionary();
   static void vectorlESeedStopInfogR_TClassManip(TClass*);
   static void *new_vectorlESeedStopInfogR(void *p = 0);
   static void *newArray_vectorlESeedStopInfogR(Long_t size, void *p);
   static void delete_vectorlESeedStopInfogR(void *p);
   static void deleteArray_vectorlESeedStopInfogR(void *p);
   static void destruct_vectorlESeedStopInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SeedStopInfo>*)
   {
      vector<SeedStopInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SeedStopInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SeedStopInfo>", -2, "vector", 216,
                  typeid(vector<SeedStopInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESeedStopInfogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<SeedStopInfo>) );
      instance.SetNew(&new_vectorlESeedStopInfogR);
      instance.SetNewArray(&newArray_vectorlESeedStopInfogR);
      instance.SetDelete(&delete_vectorlESeedStopInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlESeedStopInfogR);
      instance.SetDestructor(&destruct_vectorlESeedStopInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SeedStopInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SeedStopInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESeedStopInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SeedStopInfo>*)0x0)->GetClass();
      vectorlESeedStopInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESeedStopInfogR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("persistent","false");
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESeedStopInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SeedStopInfo> : new vector<SeedStopInfo>;
   }
   static void *newArray_vectorlESeedStopInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SeedStopInfo>[nElements] : new vector<SeedStopInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESeedStopInfogR(void *p) {
      delete ((vector<SeedStopInfo>*)p);
   }
   static void deleteArray_vectorlESeedStopInfogR(void *p) {
      delete [] ((vector<SeedStopInfo>*)p);
   }
   static void destruct_vectorlESeedStopInfogR(void *p) {
      typedef vector<SeedStopInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SeedStopInfo>

namespace ROOT {
   static TClass *bitsetlE46gR_Dictionary();
   static void bitsetlE46gR_TClassManip(TClass*);
   static void *new_bitsetlE46gR(void *p = 0);
   static void *newArray_bitsetlE46gR(Long_t size, void *p);
   static void delete_bitsetlE46gR(void *p);
   static void deleteArray_bitsetlE46gR(void *p);
   static void destruct_bitsetlE46gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const bitset<46>*)
   {
      bitset<46> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(bitset<46>));
      static ::ROOT::TGenericClassInfo 
         instance("bitset<46>", 2, "bitset", 747,
                  typeid(bitset<46>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bitsetlE46gR_Dictionary, isa_proxy, 4,
                  sizeof(bitset<46>) );
      instance.SetNew(&new_bitsetlE46gR);
      instance.SetNewArray(&newArray_bitsetlE46gR);
      instance.SetDelete(&delete_bitsetlE46gR);
      instance.SetDeleteArray(&deleteArray_bitsetlE46gR);
      instance.SetDestructor(&destruct_bitsetlE46gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback<Internal::TStdBitsetHelper< bitset<46> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const bitset<46>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bitsetlE46gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const bitset<46>*)0x0)->GetClass();
      bitsetlE46gR_TClassManip(theClass);
   return theClass;
   }

   static void bitsetlE46gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_bitsetlE46gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) bitset<46> : new bitset<46>;
   }
   static void *newArray_bitsetlE46gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) bitset<46>[nElements] : new bitset<46>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bitsetlE46gR(void *p) {
      delete ((bitset<46>*)p);
   }
   static void deleteArray_bitsetlE46gR(void *p) {
      delete [] ((bitset<46>*)p);
   }
   static void destruct_bitsetlE46gR(void *p) {
      typedef bitset<46> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class bitset<46>

namespace {
  void TriggerDictionaryInitialization_DataFormatsTrackReco_xr_Impl() {
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
#line 1 "DataFormatsTrackReco_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  Track;}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  FindUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename REFV> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  FindRefVectorUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  FindTrait;
}}
namespace edm{namespace refhelper{template <typename C> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  ValueTrait;
}}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefToBaseVector.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/TrackFwd.h")))  RefToBase;
}
class __attribute__((annotate("$clingAutoload$DataFormats/TrackCandidate/interface/TrackCandidate.h")))  TrackCandidate;
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/TrackExtra.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  TrackExtra;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/DeDxHitInfo.h")))  DeDxHitInfo;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Ref.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  RefToBaseVector;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/DeDxData.h")))  DeDxData;}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/ValueMap.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/TrackFwd.h")))  ValueMap;
}
class __attribute__((annotate(R"ATTRDUMP(persistent@@@false)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/SeedStopInfo.h")))  SeedStopInfo;
namespace edm{namespace reftobase{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/BaseHolder.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  BaseHolder;
}}
namespace edm{namespace reftobase{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/IndirectHolder.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  IndirectHolder;
}}
namespace edm{template <class T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  Ptr;
}
namespace edm{namespace reftobase{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/BaseHolder.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  BaseVectorHolder;
}}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/DeDxHit.h")))  DeDxHit;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/HitPattern.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  HitPattern;}
namespace std{template <std::size_t _Nb> class __attribute__((annotate("$clingAutoload$bitset")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  bitset;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/TrackBase.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  TrackBase;}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefToBase.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  RefToBaseProd;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/TrackExtraBase.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  TrackExtraBase;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/TrackResiduals.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  TrackResiduals;}
namespace reco{typedef edm::RefToBaseVector<reco::Track> TrackBaseRefVector __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/TrackFwd.h"))) ;}
namespace reco{typedef edm::ValueMap<reco::DeDxData> DeDxDataValueMap __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/DeDxData.h"))) ;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsTrackReco_xr dictionary payload"

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
#include "Rtypes.h" 
#include "Math/Cartesian3D.h" 
#include "Math/Polar3D.h" 
#include "Math/CylindricalEta3D.h" 
#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/TrackReco/interface/TrackFwd.h" 
#include "DataFormats/TrackReco/interface/TrackExtra.h"
#include "DataFormats/TrackReco/interface/TrackExtraFwd.h" 
#include "DataFormats/TrackReco/interface/TrackResiduals.h"
#include "DataFormats/Common/interface/AssociationMap.h"
#include "DataFormats/Common/interface/AssociationVector.h"
#include "DataFormats/Common/interface/Ref.h"
#include "DataFormats/Common/interface/RefHolder.h"
#include "DataFormats/Common/interface/RefProd.h"
#include "DataFormats/Common/interface/RefVector.h"
#include "DataFormats/Common/interface/OneToValue.h"
#include "DataFormats/Common/interface/Ptr.h"
#include "DataFormats/Common/interface/ValueMap.h"
#include "DataFormats/TrackReco/interface/TrackToTrackMap.h"
//#include "DataFormats/TrackReco/interface/DeDxHitFwd.h"
#include "DataFormats/TrackReco/interface/DeDxHit.h"
#include "DataFormats/TrackReco/interface/TrackDeDxHits.h"
#include "DataFormats/TrackReco/interface/DeDxData.h"
#include "DataFormats/Common/interface/Handle.h"
#include "DataFormats/Common/interface/OneToManyWithQuality.h"
#include "DataFormats/Common/interface/OneToManyWithQualityGeneric.h"
#include "DataFormats/Common/interface/View.h"
#include "DataFormats/Candidate/interface/Candidate.h"
#include "DataFormats/TrackCandidate/interface/TrackCandidate.h"
#include "DataFormats/TrackReco/interface/DeDxHitInfo.h"
#include "DataFormats/TrackReco/interface/SeedStopInfo.h"

#include <vector>

namespace DataFormats_TrackReco {
  struct dictionary {
    std::bitset<reco::TrackBase::algoSize> ba;
    reco::TrackExtraCollection v3;
    edm::Wrapper<reco::TrackExtraCollection> c3;
    edm::Ref<reco::TrackExtraCollection> r3;
    edm::RefProd<reco::TrackExtraCollection> rp3;
    edm::RefVector<reco::TrackExtraCollection> rv3;

    std::vector<edm::RefVector<std::vector<reco::Track> > > vrv3;
    edm::Ptr<reco::Track> ptrt;
    std::vector<edm::Ptr<reco::Track> > vptrt;

    reco::TrackCollection v1;
    edm::Wrapper<reco::TrackCollection> c1;
    reco::TrackRef r1;
    reco::TrackRefProd rp1;
    reco::TrackRefVector rv1;
    edm::Wrapper<reco::TrackRefVector> wv1;
    std::vector<reco::TrackRef> vr1;

    edm::helpers::Key<edm::RefProd<std::vector<reco::Track> > > rpt1;
    edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>, double, unsigned int> > am1;
    edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>, float, unsigned int> > am2;
    edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>, int, unsigned int> > am3;
    edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>, bool, unsigned int> > am4;
    edm::Wrapper<edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>, double, unsigned int> > > wam1;
    edm::Wrapper<edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>, float, unsigned int> > > wam2;
    edm::Wrapper<edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>, int, unsigned int> > >  wam3;
    edm::Wrapper<edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>, bool, unsigned int> > > wam4;

    edm::Wrapper<edm::AssociationVector<reco::TrackRefProd,std::vector<double> > > wav1;
    edm::Wrapper<edm::AssociationVector<reco::TrackRefProd,std::vector<float> > > wav2;
    edm::Wrapper<edm::AssociationVector<reco::TrackRefProd,std::vector<int> > > wav3;
    edm::Wrapper<edm::AssociationVector<reco::TrackRefProd,std::vector<bool> > > wav4;

    edm::helpers::KeyVal<reco::TrackRef,reco::TrackRef> kvtttmap1;
    reco::TrackToTrackMap tttmap1;
    edm::Wrapper<reco::TrackToTrackMap> wtttmap1;

    // DEDX containers    
    reco::DeDxDataCollection dedxe1;
    reco::DeDxData dedxe2;
    reco::DeDxDataValueMap dedxe3;
 
    edm::Wrapper<reco::TrackDeDxHitsCollection> dedxw1; 
    edm::Wrapper<reco::DeDxDataCollection> dedxw2; 
    edm::Wrapper<reco::DeDxDataValueMap> dedxw3;

    // RefToBase Holders for Tracks
    edm::RefToBase<reco::Track>                         rtb_tk;
    edm::reftobase::IndirectHolder<reco::Track>         ih_tk;
    //edm::reftobase::BaseHolder<reco::Track>             bh_tk;
    edm::reftobase::RefHolder<reco::TrackRef>           rf_tkr;
    edm::reftobase::RefHolder<edm::Ptr<reco::Track> > rfh_ptr_tkr;
    edm::reftobase::Holder<reco::Track, reco::TrackRef> h_tk_tkr;
    std::vector< edm::RefToBase<reco::Track> >		rtb_tk_vect;

    reco::TrackBaseRefVector tbrv;
    edm::Wrapper<reco::TrackBaseRefVector> wtbrv;

    edm::RefToBaseProd<reco::Track> aaaaaa;
    std::vector<std::pair<edm::RefToBase<reco::Track>,double> > aaaaaaaaaa;
    std::pair<edm::RefToBase<reco::Track>,double> aaaaaaaaaaaa;

    edm::ValueMap<reco::TrackRefVector> vm_trv;
    edm::Wrapper<edm::ValueMap<reco::TrackRefVector> > w_vm_trv;

    edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Track> >,edm::RefProd<std::vector<TrajectorySeed> > > x1;
    edm::AssociationMap<edm::OneToMany<std::vector<reco::Track>,std::vector<TrajectorySeed>,unsigned int> > x2;
    edm::Wrapper<edm::AssociationMap<edm::OneToMany<std::vector<reco::Track>,std::vector<TrajectorySeed>,unsigned int> > > x3;
    std::vector<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,float> > amf5;
    std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,float> amf6;


    std::vector<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,int> > am5;
    std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,int> am6;

    std::pair<reco::Track,reco::Track> trackPair;
    std::pair<TrackCandidate, std::pair<reco::Track,reco::Track> > ctpair;
    std::vector<std::pair<TrackCandidate, std::pair<reco::Track,reco::Track> > > candidateMap;
    edm::Wrapper<std::pair<reco::Track,reco::Track> > w1;
    edm::Wrapper<std::vector<std::pair<TrackCandidate, std::pair<reco::Track,reco::Track> > > > w2;
    edm::Wrapper<std::pair<TrackCandidate, std::pair<reco::Track,reco::Track> > > w3;

    std::pair<reco::TrackRef,reco::TrackRef> trackRefPair;
    std::pair<TrackCandidate, std::pair<reco::TrackRef,reco::TrackRef> > ctrpair;
    std::vector<std::pair<TrackCandidate, std::pair<reco::TrackRef,reco::TrackRef> > > candidateRefMap;
    edm::Wrapper<std::pair<reco::TrackRef,reco::TrackRef> > ww1;
    edm::Wrapper<std::vector<std::pair<TrackCandidate, std::pair<reco::TrackRef,reco::TrackRef> > > > ww2;
    edm::Wrapper<std::pair<TrackCandidate, std::pair<reco::TrackRef,reco::TrackRef> > > ww3;


    reco::DeDxHitInfo hitInfoDEDX;
    reco::DeDxHitInfoCollection hitInfoDEDXc;
    reco::DeDxHitInfoRef hitInfoDEDXr;
    reco::DeDxHitInfoRefProd hitInfoDEDXp;
    reco::DeDxHitInfoRefVector hitInfoDEDXv;
    reco::DeDxHitInfoAss hitInfoDEDXam;
    edm::Wrapper<reco::DeDxHitInfo> hitInfoDEDXW;
    edm::Wrapper<reco::DeDxHitInfoCollection> hitInfoDEDXcW;
    edm::Wrapper<reco::DeDxHitInfoAss> hitInfoDEDXamW;

    reco::DeDxHitInfo::DeDxHitInfoContainer hitInfoContainerDEDX;
    reco::DeDxHitInfo::DeDxHitInfoContainerCollection hitInfoContainerDEDXc;

    SeedStopInfo ssi;
    std::vector<SeedStopInfo> vssi;
    edm::Wrapper<std::vector<SeedStopInfo> > wvssi;
  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"", payloadCode, "@",
"SeedStopInfo", payloadCode, "@",
"edm::Association<reco::TrackCollection>", payloadCode, "@",
"edm::Association<vector<reco::DeDxHitInfo> >", payloadCode, "@",
"edm::Association<vector<reco::Track> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToMany<std::vector<reco::Track>,std::vector<TrajectorySeed>,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToOne<std::vector<reco::Track>,std::vector<reco::Track>,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>,bool,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>,double,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>,float,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<std::vector<reco::Track>,int,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> >", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<std::vector<reco::Track, std::allocator<reco::Track> > >, std::vector<bool, std::allocator<bool> >, edm::Ref<std::vector<reco::Track, std::allocator<reco::Track> >, reco::Track, edm::refhelper::FindUsingAdvance<std::vector<reco::Track, std::allocator<reco::Track> >, reco::Track> >, unsigned int, edm::helper::AssociationIdenticalKeyReference>::CacheState", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<std::vector<reco::Track, std::allocator<reco::Track> > >, std::vector<double, std::allocator<double> >, edm::Ref<std::vector<reco::Track, std::allocator<reco::Track> >, reco::Track, edm::refhelper::FindUsingAdvance<std::vector<reco::Track, std::allocator<reco::Track> >, reco::Track> >, unsigned int, edm::helper::AssociationIdenticalKeyReference>::CacheState", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<std::vector<reco::Track, std::allocator<reco::Track> > >, std::vector<float, std::allocator<float> >, edm::Ref<std::vector<reco::Track, std::allocator<reco::Track> >, reco::Track, edm::refhelper::FindUsingAdvance<std::vector<reco::Track, std::allocator<reco::Track> >, reco::Track> >, unsigned int, edm::helper::AssociationIdenticalKeyReference>::CacheState", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<std::vector<reco::Track, std::allocator<reco::Track> > >, std::vector<int, std::allocator<int> >, edm::Ref<std::vector<reco::Track, std::allocator<reco::Track> >, reco::Track, edm::refhelper::FindUsingAdvance<std::vector<reco::Track, std::allocator<reco::Track> >, reco::Track> >, unsigned int, edm::helper::AssociationIdenticalKeyReference>::CacheState", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<std::vector<reco::Track, std::allocator<reco::Track> > >, std::vector<std::vector<reco::DeDxHit, std::allocator<reco::DeDxHit> >, std::allocator<std::vector<reco::DeDxHit, std::allocator<reco::DeDxHit> > > >, edm::Ref<std::vector<reco::Track, std::allocator<reco::Track> >, reco::Track, edm::refhelper::FindUsingAdvance<std::vector<reco::Track, std::allocator<reco::Track> >, reco::Track> >, unsigned int, edm::helper::AssociationIdenticalKeyReference>::CacheState", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<bool>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<double>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<float>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<int>,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", payloadCode, "@",
"edm::Ptr<reco::Track>", payloadCode, "@",
"edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >", payloadCode, "@",
"edm::Ref<std::vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<std::vector<reco::TrackExtra>,reco::TrackExtra> >", payloadCode, "@",
"edm::Ref<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >", payloadCode, "@",
"edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >", payloadCode, "@",
"edm::Ref<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::Track> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::TrackExtra> >", payloadCode, "@",
"edm::RefProd<vector<reco::DeDxHitInfo> >", payloadCode, "@",
"edm::RefProd<vector<reco::Track> >", payloadCode, "@",
"edm::RefProd<vector<reco::TrackExtra> >", payloadCode, "@",
"edm::RefToBase<reco::Track>", payloadCode, "@",
"edm::RefToBaseProd<reco::Track>", payloadCode, "@",
"edm::RefToBaseVector<reco::Track>", payloadCode, "@",
"edm::RefVector<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<std::vector<reco::TrackExtra>,reco::TrackExtra> >", payloadCode, "@",
"edm::RefVector<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo,edm::refhelper::FindUsingAdvance<vector<reco::DeDxHitInfo>,reco::DeDxHitInfo> >", payloadCode, "@",
"edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >", payloadCode, "@",
"edm::RefVector<vector<reco::TrackExtra>,reco::TrackExtra,edm::refhelper::FindUsingAdvance<vector<reco::TrackExtra>,reco::TrackExtra> >", payloadCode, "@",
"edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", payloadCode, "@",
"edm::ValueMap<reco::DeDxData>", payloadCode, "@",
"edm::ValueMap<reco::TrackRefVector>", payloadCode, "@",
"edm::Wrapper<edm::Association<reco::TrackCollection> >", payloadCode, "@",
"edm::Wrapper<edm::Association<vector<reco::DeDxHitInfo> > >", payloadCode, "@",
"edm::Wrapper<edm::Association<vector<reco::Track> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToMany<vector<reco::Track>,vector<TrajectorySeed>,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToOne<vector<reco::Track>,vector<reco::Track>,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,bool,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,double,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,float,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::Track>,int,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationVector<edm::RefProd<vector<reco::Track> >,vector<vector<reco::DeDxHit> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> >", payloadCode, "@",
"edm::Wrapper<edm::RefToBaseVector<reco::Track> >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<edm::RefVector<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::DeDxData> >", payloadCode, "@",
"edm::Wrapper<edm::ValueMap<reco::TrackRefVector> >", payloadCode, "@",
"edm::Wrapper<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > >", payloadCode, "@",
"edm::Wrapper<pair<TrackCandidate,pair<reco::Track,reco::Track> > >", payloadCode, "@",
"edm::Wrapper<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > >", payloadCode, "@",
"edm::Wrapper<pair<reco::Track,reco::Track> >", payloadCode, "@",
"edm::Wrapper<reco::DeDxDataCollection>", payloadCode, "@",
"edm::Wrapper<reco::DeDxDataValueMap>", payloadCode, "@",
"edm::Wrapper<reco::DeDxHitInfo>", payloadCode, "@",
"edm::Wrapper<reco::DeDxHitInfoAss>", payloadCode, "@",
"edm::Wrapper<reco::DeDxHitInfoCollection>", payloadCode, "@",
"edm::Wrapper<reco::TrackBaseRefVector>", payloadCode, "@",
"edm::Wrapper<reco::TrackDeDxHitsCollection>", payloadCode, "@",
"edm::Wrapper<std::pair<TrackCandidate,std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > > > >", payloadCode, "@",
"edm::Wrapper<std::pair<TrackCandidate,std::pair<reco::Track,reco::Track> > >", payloadCode, "@",
"edm::Wrapper<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > > >", payloadCode, "@",
"edm::Wrapper<std::pair<reco::Track,reco::Track> >", payloadCode, "@",
"edm::Wrapper<std::vector<SeedStopInfo> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::Track> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::TrackExtra> >", payloadCode, "@",
"edm::Wrapper<std::vector<std::pair<TrackCandidate,std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > > > > >", payloadCode, "@",
"edm::Wrapper<std::vector<std::pair<TrackCandidate,std::pair<reco::Track,reco::Track> > > >", payloadCode, "@",
"edm::Wrapper<vector<SeedStopInfo> >", payloadCode, "@",
"edm::Wrapper<vector<pair<TrackCandidate,pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > > > > >", payloadCode, "@",
"edm::Wrapper<vector<pair<TrackCandidate,pair<reco::Track,reco::Track> > > >", payloadCode, "@",
"edm::Wrapper<vector<reco::DeDxData> >", payloadCode, "@",
"edm::Wrapper<vector<reco::DeDxHitInfo> >", payloadCode, "@",
"edm::Wrapper<vector<reco::Track> >", payloadCode, "@",
"edm::Wrapper<vector<reco::TrackExtra> >", payloadCode, "@",
"edm::helpers::Key<edm::RefProd<std::vector<reco::Track> > >", payloadCode, "@",
"edm::helpers::Key<edm::RefProd<vector<reco::Track> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Track> >,edm::RefProd<std::vector<TrajectorySeed> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Track> >,edm::RefProd<std::vector<reco::Track> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<TrajectorySeed> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Track> > >", payloadCode, "@",
"edm::reftobase::BaseHolder<reco::Track>", payloadCode, "@",
"edm::reftobase::BaseVectorHolder<reco::Track>", payloadCode, "@",
"edm::reftobase::Holder<reco::Track,edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Track,reco::TrackRef>", payloadCode, "@",
"edm::reftobase::IndirectHolder<reco::Track>", payloadCode, "@",
"edm::reftobase::RefHolder<edm::Ptr<reco::Track> >", payloadCode, "@",
"edm::reftobase::RefHolder<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> > >", payloadCode, "@",
"edm::reftobase::RefHolder<reco::TrackRef>", payloadCode, "@",
"reco::DeDxData", payloadCode, "@",
"reco::DeDxDataCollection", payloadCode, "@",
"reco::DeDxDataValueMap", payloadCode, "@",
"reco::DeDxHit", payloadCode, "@",
"reco::DeDxHitCollection", payloadCode, "@",
"reco::DeDxHitInfo", payloadCode, "@",
"reco::DeDxHitInfo::DeDxHitInfoContainer", payloadCode, "@",
"reco::DeDxHitInfoAss", payloadCode, "@",
"reco::DeDxHitInfoCollection", payloadCode, "@",
"reco::DeDxHitInfoRef", payloadCode, "@",
"reco::DeDxHitInfoRefProd", payloadCode, "@",
"reco::DeDxHitInfoRefVector", payloadCode, "@",
"reco::HitPattern", payloadCode, "@",
"reco::Track", payloadCode, "@",
"reco::TrackBase", payloadCode, "@",
"reco::TrackBaseRefVector", payloadCode, "@",
"reco::TrackExtra", payloadCode, "@",
"reco::TrackExtraBase", payloadCode, "@",
"reco::TrackResiduals", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsTrackReco_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsTrackReco_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsTrackReco_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsTrackReco_xr() {
  TriggerDictionaryInitialization_DataFormatsTrackReco_xr_Impl();
}
