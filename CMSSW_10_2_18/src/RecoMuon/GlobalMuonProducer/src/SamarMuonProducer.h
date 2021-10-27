#ifndef RecoMuon_GlobalMuonProducer_GlobalMuonProducer_H
#define RecoMuon_GlobalMuonProducer_GlobalMuonProducer_H

/**  \class SamarMuonProducer
 * 
 *   Global muon reconstructor:
 *   reconstructs muons using DT, CSC, RPC and tracker
 *   information,<BR>
 *   starting from a standalone reonstructed muon.
 *
 *
 *
 *   \author  R.Bellan - INFN TO
 */

#include "FWCore/Framework/interface/stream/EDProducer.h"

// Input and output collection
#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/TrackReco/interface/TrackFwd.h"

#include "DataFormats/MuonReco/interface/MuonTrackLinks.h"
#include "DataFormats/MuonReco/interface/MuonFwd.h"
#include "TrackingTools/PatternTools/interface/TrajTrackAssociation.h"
#include "DataFormats/TrackReco/interface/TrackToTrackMap.h"

namespace edm {class ParameterSet; class Event; class EventSetup;}

class MuonTrackFinder;
class MuonServiceProxy;

class SamarMuonProducer : public edm::stream::EDProducer<> {

 public:

  /// constructor with config
  SamarMuonProducer(const edm::ParameterSet&);
  
  /// destructor
  ~SamarMuonProducer() override; 
  
  /// reconstruct muons
  void produce(edm::Event&, const edm::EventSetup&) override;
  
 private:


  edm::InputTag theSTACollectionLabel    ;

 // edm::InputTag testCollectionLabel_glb    ; //samar
 // edm::InputTag testCollectionLabel_sam    ;
  edm::InputTag testCollectionLabel_   ; //samar
  edm::EDGetTokenT<reco::TrackCollection> testToken;


  /// STA Tokens
  edm::EDGetTokenT<reco::TrackCollection> staMuonsToken;
  edm::EDGetTokenT<std::vector<Trajectory> > staMuonsTrajToken;
  edm::EDGetTokenT<TrajTrackAssociationCollection> staAssoMapToken;
  edm::EDGetTokenT<reco::TrackToTrackMap> updatedStaAssoMapToken;




  MuonTrackFinder* theTrackFinder;
    
  /// the event setup proxy, it takes care the services update
  MuonServiceProxy* theService;
    
  std::string theAlias;

  void setAlias( std::string alias ){
    alias.erase( alias.size() - 1, alias.size() );
    theAlias=alias;
  }

};

#endif
