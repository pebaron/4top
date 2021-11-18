//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Nov 18 08:43:24 2021 by ROOT version 6.16/00
// from TTree Delphes/Analysis tree
// found on file: tag_1_delphes_events.root
//////////////////////////////////////////////////////////

#ifndef Delphes_h
#define Delphes_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TObject.h"
#include "TLorentzVector.h"
#include "TRefArray.h"
#include "TRef.h"

#include "DelphesClasses.h"
#include "ExRootTreeReader.h"

class Delphes {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxEvent = 1;
   static constexpr Int_t kMaxWeight = 151;
   static constexpr Int_t kMaxGenLJet = 12;
   static constexpr Int_t kMaxGenJet = 24;
   static constexpr Int_t kMaxGenPhoton = 724;
   static constexpr Int_t kMaxGenBhadrons = 19;
   static constexpr Int_t kMaxGenElectron = 11;
   static constexpr Int_t kMaxGenMuon = 7;
   static constexpr Int_t kMaxGenTop = 46;
   static constexpr Int_t kMaxGenMissingET = 1;
   static constexpr Int_t kMaxGenZPrime = 1;
   static constexpr Int_t kMaxGenW = 12;
   static constexpr Int_t kMaxJet = 24;
   static constexpr Int_t kMaxLJet = 12;
   static constexpr Int_t kMaxJetJES = 24;
   static constexpr Int_t kMaxLJetJES = 1;
   static constexpr Int_t kMaxElectron = 2;
   static constexpr Int_t kMaxPhoton = 2;
   static constexpr Int_t kMaxMuon = 2;
   static constexpr Int_t kMaxMissingET = 1;
   static constexpr Int_t kMaxScalarHT = 1;

   // Declaration of leaf types
   Int_t           Event_;
   UInt_t          Event_fUniqueID[kMaxEvent];   //[Event_]
   UInt_t          Event_fBits[kMaxEvent];   //[Event_]
   Long64_t        Event_Number[kMaxEvent];   //[Event_]
   Float_t         Event_ReadTime[kMaxEvent];   //[Event_]
   Float_t         Event_ProcTime[kMaxEvent];   //[Event_]
   Int_t           Event_ProcessID[kMaxEvent];   //[Event_]
   Int_t           Event_MPI[kMaxEvent];   //[Event_]
   Float_t         Event_Weight[kMaxEvent];   //[Event_]
   Float_t         Event_CrossSection[kMaxEvent];   //[Event_]
   Float_t         Event_CrossSectionError[kMaxEvent];   //[Event_]
   Float_t         Event_Scale[kMaxEvent];   //[Event_]
   Float_t         Event_AlphaQED[kMaxEvent];   //[Event_]
   Float_t         Event_AlphaQCD[kMaxEvent];   //[Event_]
   Int_t           Event_ID1[kMaxEvent];   //[Event_]
   Int_t           Event_ID2[kMaxEvent];   //[Event_]
   Float_t         Event_X1[kMaxEvent];   //[Event_]
   Float_t         Event_X2[kMaxEvent];   //[Event_]
   Float_t         Event_ScalePDF[kMaxEvent];   //[Event_]
   Float_t         Event_PDF1[kMaxEvent];   //[Event_]
   Float_t         Event_PDF2[kMaxEvent];   //[Event_]
   Int_t           Event_size;
   Int_t           Weight_;
   UInt_t          Weight_fUniqueID[kMaxWeight];   //[Weight_]
   UInt_t          Weight_fBits[kMaxWeight];   //[Weight_]
   Float_t         Weight_Weight[kMaxWeight];   //[Weight_]
   Int_t           Weight_size;
   Int_t           GenLJet_;
   UInt_t          GenLJet_fUniqueID[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_fBits[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_PT[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_Eta[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_Phi[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_T[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_Mass[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_DeltaEta[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_DeltaPhi[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_Flavor[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_FlavorAlgo[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_FlavorPhys[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_BTag[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_BTagAlgo[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_BTagPhys[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_TauTag[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_TauWeight[kMaxGenLJet];   //[GenLJet_]
   Int_t           GenLJet_Charge[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_EhadOverEem[kMaxGenLJet];   //[GenLJet_]
   Int_t           GenLJet_NCharged[kMaxGenLJet];   //[GenLJet_]
   Int_t           GenLJet_NNeutrals[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_Beta[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_BetaStar[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_MeanSqDeltaR[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_PTD[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_FracPt[kMaxGenLJet][5];   //[GenLJet_]
   Float_t         GenLJet_Tau[kMaxGenLJet][5];   //[GenLJet_]
   TLorentzVector  GenLJet_SoftDroppedJet[kMaxGenLJet];
   TLorentzVector  GenLJet_SoftDroppedSubJet1[kMaxGenLJet];
   TLorentzVector  GenLJet_SoftDroppedSubJet2[kMaxGenLJet];
   TLorentzVector  GenLJet_TrimmedP4[5][kMaxGenLJet];
   TLorentzVector  GenLJet_PrunedP4[5][kMaxGenLJet];
   TLorentzVector  GenLJet_SoftDroppedP4[5][kMaxGenLJet];
   Int_t           GenLJet_NSubJetsTrimmed[kMaxGenLJet];   //[GenLJet_]
   Int_t           GenLJet_NSubJetsPruned[kMaxGenLJet];   //[GenLJet_]
   Int_t           GenLJet_NSubJetsSoftDropped[kMaxGenLJet];   //[GenLJet_]
   Double_t        GenLJet_ExclYmerge23[kMaxGenLJet];   //[GenLJet_]
   Double_t        GenLJet_ExclYmerge34[kMaxGenLJet];   //[GenLJet_]
   Double_t        GenLJet_ExclYmerge45[kMaxGenLJet];   //[GenLJet_]
   Double_t        GenLJet_ExclYmerge56[kMaxGenLJet];   //[GenLJet_]
   TRefArray       GenLJet_Constituents[kMaxGenLJet];
   TRefArray       GenLJet_Particles[kMaxGenLJet];
   TLorentzVector  GenLJet_Area[kMaxGenLJet];
   Int_t           GenLJet_size;
   Int_t           GenJet_;
   UInt_t          GenJet_fUniqueID[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_fBits[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_PT[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Eta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Phi[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_T[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Mass[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_DeltaEta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_DeltaPhi[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_Flavor[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_FlavorAlgo[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_FlavorPhys[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTag[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTagAlgo[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTagPhys[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_TauTag[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_TauWeight[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_Charge[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_EhadOverEem[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NCharged[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NNeutrals[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Beta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_BetaStar[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_MeanSqDeltaR[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_PTD[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_FracPt[kMaxGenJet][5];   //[GenJet_]
   Float_t         GenJet_Tau[kMaxGenJet][5];   //[GenJet_]
   TLorentzVector  GenJet_SoftDroppedJet[kMaxGenJet];
   TLorentzVector  GenJet_SoftDroppedSubJet1[kMaxGenJet];
   TLorentzVector  GenJet_SoftDroppedSubJet2[kMaxGenJet];
   TLorentzVector  GenJet_TrimmedP4[5][kMaxGenJet];
   TLorentzVector  GenJet_PrunedP4[5][kMaxGenJet];
   TLorentzVector  GenJet_SoftDroppedP4[5][kMaxGenJet];
   Int_t           GenJet_NSubJetsTrimmed[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NSubJetsPruned[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NSubJetsSoftDropped[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge23[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge34[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge45[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge56[kMaxGenJet];   //[GenJet_]
   TRefArray       GenJet_Constituents[kMaxGenJet];
   TRefArray       GenJet_Particles[kMaxGenJet];
   TLorentzVector  GenJet_Area[kMaxGenJet];
   Int_t           GenJet_size;
   Int_t           GenPhoton_;
   UInt_t          GenPhoton_fUniqueID[kMaxGenPhoton];   //[GenPhoton_]
   UInt_t          GenPhoton_fBits[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_PT[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_Eta[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_Phi[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_E[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_T[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_EhadOverEem[kMaxGenPhoton];   //[GenPhoton_]
   TRefArray       GenPhoton_Particles[kMaxGenPhoton];
   Float_t         GenPhoton_IsolationVar[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_IsolationVarRhoCorr[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_SumPtCharged[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_SumPtNeutral[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_SumPtChargedPU[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_SumPt[kMaxGenPhoton];   //[GenPhoton_]
   Int_t           GenPhoton_Status[kMaxGenPhoton];   //[GenPhoton_]
   Int_t           GenPhoton_size;
   Int_t           GenBhadrons_;
   UInt_t          GenBhadrons_fUniqueID[kMaxGenBhadrons];   //[GenBhadrons_]
   UInt_t          GenBhadrons_fBits[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_PID[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_Status[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_IsPU[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_M1[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_M2[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_D1[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_D2[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_Charge[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Mass[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_E[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Px[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Py[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Pz[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_P[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_PT[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Eta[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Phi[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Rapidity[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_CtgTheta[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_D0[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_DZ[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_T[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_X[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Y[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Z[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_size;
   Int_t           GenElectron_;
   UInt_t          GenElectron_fUniqueID[kMaxGenElectron];   //[GenElectron_]
   UInt_t          GenElectron_fBits[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_PT[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_Eta[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_Phi[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_T[kMaxGenElectron];   //[GenElectron_]
   Int_t           GenElectron_Charge[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_EhadOverEem[kMaxGenElectron];   //[GenElectron_]
   TRef            GenElectron_Particle[kMaxGenElectron];
   Float_t         GenElectron_IsolationVar[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_IsolationVarRhoCorr[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_SumPtCharged[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_SumPtNeutral[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_SumPtChargedPU[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_SumPt[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_D0[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_DZ[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_ErrorD0[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_ErrorDZ[kMaxGenElectron];   //[GenElectron_]
   Int_t           GenElectron_size;
   Int_t           GenMuon_;
   UInt_t          GenMuon_fUniqueID[kMaxGenMuon];   //[GenMuon_]
   UInt_t          GenMuon_fBits[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_PT[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_Eta[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_Phi[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_T[kMaxGenMuon];   //[GenMuon_]
   Int_t           GenMuon_Charge[kMaxGenMuon];   //[GenMuon_]
   TRef            GenMuon_Particle[kMaxGenMuon];
   Float_t         GenMuon_IsolationVar[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_IsolationVarRhoCorr[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_SumPtCharged[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_SumPtNeutral[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_SumPtChargedPU[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_SumPt[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_D0[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_DZ[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_ErrorD0[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_ErrorDZ[kMaxGenMuon];   //[GenMuon_]
   Int_t           GenMuon_size;
   Int_t           GenTop_;
   UInt_t          GenTop_fUniqueID[kMaxGenTop];   //[GenTop_]
   UInt_t          GenTop_fBits[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_PID[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_Status[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_IsPU[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_M1[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_M2[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_D1[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_D2[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_Charge[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Mass[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_E[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Px[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Py[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Pz[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_P[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_PT[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Eta[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Phi[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Rapidity[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_CtgTheta[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_D0[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_DZ[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_T[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_X[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Y[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Z[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_size;
   Int_t           GenMissingET_;
   UInt_t          GenMissingET_fUniqueID[kMaxGenMissingET];   //[GenMissingET_]
   UInt_t          GenMissingET_fBits[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_MET[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_Eta[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_Phi[kMaxGenMissingET];   //[GenMissingET_]
   Int_t           GenMissingET_size;
   Int_t           GenZPrime_;
   UInt_t          GenZPrime_fUniqueID[kMaxGenZPrime];   //[GenZPrime_]
   UInt_t          GenZPrime_fBits[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_PID[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_Status[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_IsPU[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_M1[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_M2[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_D1[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_D2[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_Charge[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Mass[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_E[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Px[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Py[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Pz[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_P[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_PT[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Eta[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Phi[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Rapidity[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_CtgTheta[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_D0[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_DZ[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_T[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_X[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Y[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Z[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_size;
   Int_t           GenW_;
   UInt_t          GenW_fUniqueID[kMaxGenW];   //[GenW_]
   UInt_t          GenW_fBits[kMaxGenW];   //[GenW_]
   Int_t           GenW_PID[kMaxGenW];   //[GenW_]
   Int_t           GenW_Status[kMaxGenW];   //[GenW_]
   Int_t           GenW_IsPU[kMaxGenW];   //[GenW_]
   Int_t           GenW_M1[kMaxGenW];   //[GenW_]
   Int_t           GenW_M2[kMaxGenW];   //[GenW_]
   Int_t           GenW_D1[kMaxGenW];   //[GenW_]
   Int_t           GenW_D2[kMaxGenW];   //[GenW_]
   Int_t           GenW_Charge[kMaxGenW];   //[GenW_]
   Float_t         GenW_Mass[kMaxGenW];   //[GenW_]
   Float_t         GenW_E[kMaxGenW];   //[GenW_]
   Float_t         GenW_Px[kMaxGenW];   //[GenW_]
   Float_t         GenW_Py[kMaxGenW];   //[GenW_]
   Float_t         GenW_Pz[kMaxGenW];   //[GenW_]
   Float_t         GenW_P[kMaxGenW];   //[GenW_]
   Float_t         GenW_PT[kMaxGenW];   //[GenW_]
   Float_t         GenW_Eta[kMaxGenW];   //[GenW_]
   Float_t         GenW_Phi[kMaxGenW];   //[GenW_]
   Float_t         GenW_Rapidity[kMaxGenW];   //[GenW_]
   Float_t         GenW_CtgTheta[kMaxGenW];   //[GenW_]
   Float_t         GenW_D0[kMaxGenW];   //[GenW_]
   Float_t         GenW_DZ[kMaxGenW];   //[GenW_]
   Float_t         GenW_T[kMaxGenW];   //[GenW_]
   Float_t         GenW_X[kMaxGenW];   //[GenW_]
   Float_t         GenW_Y[kMaxGenW];   //[GenW_]
   Float_t         GenW_Z[kMaxGenW];   //[GenW_]
   Int_t           GenW_size;
   Int_t           Jet_;
   UInt_t          Jet_fUniqueID[kMaxJet];   //[Jet_]
   UInt_t          Jet_fBits[kMaxJet];   //[Jet_]
   Float_t         Jet_PT[kMaxJet];   //[Jet_]
   Float_t         Jet_Eta[kMaxJet];   //[Jet_]
   Float_t         Jet_Phi[kMaxJet];   //[Jet_]
   Float_t         Jet_T[kMaxJet];   //[Jet_]
   Float_t         Jet_Mass[kMaxJet];   //[Jet_]
   Float_t         Jet_DeltaEta[kMaxJet];   //[Jet_]
   Float_t         Jet_DeltaPhi[kMaxJet];   //[Jet_]
   UInt_t          Jet_Flavor[kMaxJet];   //[Jet_]
   UInt_t          Jet_FlavorAlgo[kMaxJet];   //[Jet_]
   UInt_t          Jet_FlavorPhys[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTag[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTagAlgo[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTagPhys[kMaxJet];   //[Jet_]
   UInt_t          Jet_TauTag[kMaxJet];   //[Jet_]
   Float_t         Jet_TauWeight[kMaxJet];   //[Jet_]
   Int_t           Jet_Charge[kMaxJet];   //[Jet_]
   Float_t         Jet_EhadOverEem[kMaxJet];   //[Jet_]
   Int_t           Jet_NCharged[kMaxJet];   //[Jet_]
   Int_t           Jet_NNeutrals[kMaxJet];   //[Jet_]
   Float_t         Jet_Beta[kMaxJet];   //[Jet_]
   Float_t         Jet_BetaStar[kMaxJet];   //[Jet_]
   Float_t         Jet_MeanSqDeltaR[kMaxJet];   //[Jet_]
   Float_t         Jet_PTD[kMaxJet];   //[Jet_]
   Float_t         Jet_FracPt[kMaxJet][5];   //[Jet_]
   Float_t         Jet_Tau[kMaxJet][5];   //[Jet_]
   TLorentzVector  Jet_SoftDroppedJet[kMaxJet];
   TLorentzVector  Jet_SoftDroppedSubJet1[kMaxJet];
   TLorentzVector  Jet_SoftDroppedSubJet2[kMaxJet];
   TLorentzVector  Jet_TrimmedP4[5][kMaxJet];
   TLorentzVector  Jet_PrunedP4[5][kMaxJet];
   TLorentzVector  Jet_SoftDroppedP4[5][kMaxJet];
   Int_t           Jet_NSubJetsTrimmed[kMaxJet];   //[Jet_]
   Int_t           Jet_NSubJetsPruned[kMaxJet];   //[Jet_]
   Int_t           Jet_NSubJetsSoftDropped[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge23[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge34[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge45[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge56[kMaxJet];   //[Jet_]
   TRefArray       Jet_Constituents[kMaxJet];
   TRefArray       Jet_Particles[kMaxJet];
   TLorentzVector  Jet_Area[kMaxJet];
   Int_t           Jet_size;
   Int_t           LJet_;
   UInt_t          LJet_fUniqueID[kMaxLJet];   //[LJet_]
   UInt_t          LJet_fBits[kMaxLJet];   //[LJet_]
   Float_t         LJet_PT[kMaxLJet];   //[LJet_]
   Float_t         LJet_Eta[kMaxLJet];   //[LJet_]
   Float_t         LJet_Phi[kMaxLJet];   //[LJet_]
   Float_t         LJet_T[kMaxLJet];   //[LJet_]
   Float_t         LJet_Mass[kMaxLJet];   //[LJet_]
   Float_t         LJet_DeltaEta[kMaxLJet];   //[LJet_]
   Float_t         LJet_DeltaPhi[kMaxLJet];   //[LJet_]
   UInt_t          LJet_Flavor[kMaxLJet];   //[LJet_]
   UInt_t          LJet_FlavorAlgo[kMaxLJet];   //[LJet_]
   UInt_t          LJet_FlavorPhys[kMaxLJet];   //[LJet_]
   UInt_t          LJet_BTag[kMaxLJet];   //[LJet_]
   UInt_t          LJet_BTagAlgo[kMaxLJet];   //[LJet_]
   UInt_t          LJet_BTagPhys[kMaxLJet];   //[LJet_]
   UInt_t          LJet_TauTag[kMaxLJet];   //[LJet_]
   Float_t         LJet_TauWeight[kMaxLJet];   //[LJet_]
   Int_t           LJet_Charge[kMaxLJet];   //[LJet_]
   Float_t         LJet_EhadOverEem[kMaxLJet];   //[LJet_]
   Int_t           LJet_NCharged[kMaxLJet];   //[LJet_]
   Int_t           LJet_NNeutrals[kMaxLJet];   //[LJet_]
   Float_t         LJet_Beta[kMaxLJet];   //[LJet_]
   Float_t         LJet_BetaStar[kMaxLJet];   //[LJet_]
   Float_t         LJet_MeanSqDeltaR[kMaxLJet];   //[LJet_]
   Float_t         LJet_PTD[kMaxLJet];   //[LJet_]
   Float_t         LJet_FracPt[kMaxLJet][5];   //[LJet_]
   Float_t         LJet_Tau[kMaxLJet][5];   //[LJet_]
   TLorentzVector  LJet_SoftDroppedJet[kMaxLJet];
   TLorentzVector  LJet_SoftDroppedSubJet1[kMaxLJet];
   TLorentzVector  LJet_SoftDroppedSubJet2[kMaxLJet];
   TLorentzVector  LJet_TrimmedP4[5][kMaxLJet];
   TLorentzVector  LJet_PrunedP4[5][kMaxLJet];
   TLorentzVector  LJet_SoftDroppedP4[5][kMaxLJet];
   Int_t           LJet_NSubJetsTrimmed[kMaxLJet];   //[LJet_]
   Int_t           LJet_NSubJetsPruned[kMaxLJet];   //[LJet_]
   Int_t           LJet_NSubJetsSoftDropped[kMaxLJet];   //[LJet_]
   Double_t        LJet_ExclYmerge23[kMaxLJet];   //[LJet_]
   Double_t        LJet_ExclYmerge34[kMaxLJet];   //[LJet_]
   Double_t        LJet_ExclYmerge45[kMaxLJet];   //[LJet_]
   Double_t        LJet_ExclYmerge56[kMaxLJet];   //[LJet_]
   TRefArray       LJet_Constituents[kMaxLJet];
   TRefArray       LJet_Particles[kMaxLJet];
   TLorentzVector  LJet_Area[kMaxLJet];
   Int_t           LJet_size;
   Int_t           JetJES_;
   UInt_t          JetJES_fUniqueID[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_fBits[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_PT[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_Eta[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_Phi[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_T[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_Mass[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_DeltaEta[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_DeltaPhi[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_Flavor[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_FlavorAlgo[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_FlavorPhys[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_BTag[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_BTagAlgo[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_BTagPhys[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_TauTag[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_TauWeight[kMaxJetJES];   //[JetJES_]
   Int_t           JetJES_Charge[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_EhadOverEem[kMaxJetJES];   //[JetJES_]
   Int_t           JetJES_NCharged[kMaxJetJES];   //[JetJES_]
   Int_t           JetJES_NNeutrals[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_Beta[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_BetaStar[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_MeanSqDeltaR[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_PTD[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_FracPt[kMaxJetJES][5];   //[JetJES_]
   Float_t         JetJES_Tau[kMaxJetJES][5];   //[JetJES_]
   TLorentzVector  JetJES_SoftDroppedJet[kMaxJetJES];
   TLorentzVector  JetJES_SoftDroppedSubJet1[kMaxJetJES];
   TLorentzVector  JetJES_SoftDroppedSubJet2[kMaxJetJES];
   TLorentzVector  JetJES_TrimmedP4[5][kMaxJetJES];
   TLorentzVector  JetJES_PrunedP4[5][kMaxJetJES];
   TLorentzVector  JetJES_SoftDroppedP4[5][kMaxJetJES];
   Int_t           JetJES_NSubJetsTrimmed[kMaxJetJES];   //[JetJES_]
   Int_t           JetJES_NSubJetsPruned[kMaxJetJES];   //[JetJES_]
   Int_t           JetJES_NSubJetsSoftDropped[kMaxJetJES];   //[JetJES_]
   Double_t        JetJES_ExclYmerge23[kMaxJetJES];   //[JetJES_]
   Double_t        JetJES_ExclYmerge34[kMaxJetJES];   //[JetJES_]
   Double_t        JetJES_ExclYmerge45[kMaxJetJES];   //[JetJES_]
   Double_t        JetJES_ExclYmerge56[kMaxJetJES];   //[JetJES_]
   TRefArray       JetJES_Constituents[kMaxJetJES];
   TRefArray       JetJES_Particles[kMaxJetJES];
   TLorentzVector  JetJES_Area[kMaxJetJES];
   Int_t           JetJES_size;
   Int_t           LJetJES_;
   UInt_t          LJetJES_fUniqueID[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_fBits[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_PT[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_Eta[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_Phi[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_T[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_Mass[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_DeltaEta[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_DeltaPhi[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_Flavor[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_FlavorAlgo[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_FlavorPhys[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_BTag[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_BTagAlgo[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_BTagPhys[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_TauTag[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_TauWeight[kMaxLJetJES];   //[LJetJES_]
   Int_t           LJetJES_Charge[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_EhadOverEem[kMaxLJetJES];   //[LJetJES_]
   Int_t           LJetJES_NCharged[kMaxLJetJES];   //[LJetJES_]
   Int_t           LJetJES_NNeutrals[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_Beta[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_BetaStar[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_MeanSqDeltaR[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_PTD[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_FracPt[kMaxLJetJES][5];   //[LJetJES_]
   Float_t         LJetJES_Tau[kMaxLJetJES][5];   //[LJetJES_]
   TLorentzVector  LJetJES_SoftDroppedJet[kMaxLJetJES];
   TLorentzVector  LJetJES_SoftDroppedSubJet1[kMaxLJetJES];
   TLorentzVector  LJetJES_SoftDroppedSubJet2[kMaxLJetJES];
   TLorentzVector  LJetJES_TrimmedP4[5][kMaxLJetJES];
   TLorentzVector  LJetJES_PrunedP4[5][kMaxLJetJES];
   TLorentzVector  LJetJES_SoftDroppedP4[5][kMaxLJetJES];
   Int_t           LJetJES_NSubJetsTrimmed[kMaxLJetJES];   //[LJetJES_]
   Int_t           LJetJES_NSubJetsPruned[kMaxLJetJES];   //[LJetJES_]
   Int_t           LJetJES_NSubJetsSoftDropped[kMaxLJetJES];   //[LJetJES_]
   Double_t        LJetJES_ExclYmerge23[kMaxLJetJES];   //[LJetJES_]
   Double_t        LJetJES_ExclYmerge34[kMaxLJetJES];   //[LJetJES_]
   Double_t        LJetJES_ExclYmerge45[kMaxLJetJES];   //[LJetJES_]
   Double_t        LJetJES_ExclYmerge56[kMaxLJetJES];   //[LJetJES_]
   TRefArray       LJetJES_Constituents[kMaxLJetJES];
   TRefArray       LJetJES_Particles[kMaxLJetJES];
   TLorentzVector  LJetJES_Area[kMaxLJetJES];
   Int_t           LJetJES_size;
   Int_t           Electron_;
   UInt_t          Electron_fUniqueID[kMaxElectron];   //[Electron_]
   UInt_t          Electron_fBits[kMaxElectron];   //[Electron_]
   Float_t         Electron_PT[kMaxElectron];   //[Electron_]
   Float_t         Electron_Eta[kMaxElectron];   //[Electron_]
   Float_t         Electron_Phi[kMaxElectron];   //[Electron_]
   Float_t         Electron_T[kMaxElectron];   //[Electron_]
   Int_t           Electron_Charge[kMaxElectron];   //[Electron_]
   Float_t         Electron_EhadOverEem[kMaxElectron];   //[Electron_]
   TRef            Electron_Particle[kMaxElectron];
   Float_t         Electron_IsolationVar[kMaxElectron];   //[Electron_]
   Float_t         Electron_IsolationVarRhoCorr[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtCharged[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtNeutral[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtChargedPU[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPt[kMaxElectron];   //[Electron_]
   Float_t         Electron_D0[kMaxElectron];   //[Electron_]
   Float_t         Electron_DZ[kMaxElectron];   //[Electron_]
   Float_t         Electron_ErrorD0[kMaxElectron];   //[Electron_]
   Float_t         Electron_ErrorDZ[kMaxElectron];   //[Electron_]
   Int_t           Electron_size;
   Int_t           Photon_;
   UInt_t          Photon_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_fBits[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PT[kMaxPhoton];   //[Photon_]
   Float_t         Photon_Eta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_Phi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_E[kMaxPhoton];   //[Photon_]
   Float_t         Photon_T[kMaxPhoton];   //[Photon_]
   Float_t         Photon_EhadOverEem[kMaxPhoton];   //[Photon_]
   TRefArray       Photon_Particles[kMaxPhoton];
   Float_t         Photon_IsolationVar[kMaxPhoton];   //[Photon_]
   Float_t         Photon_IsolationVarRhoCorr[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtCharged[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtNeutral[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtChargedPU[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPt[kMaxPhoton];   //[Photon_]
   Int_t           Photon_Status[kMaxPhoton];   //[Photon_]
   Int_t           Photon_size;
   Int_t           Muon_;
   UInt_t          Muon_fUniqueID[kMaxMuon];   //[Muon_]
   UInt_t          Muon_fBits[kMaxMuon];   //[Muon_]
   Float_t         Muon_PT[kMaxMuon];   //[Muon_]
   Float_t         Muon_Eta[kMaxMuon];   //[Muon_]
   Float_t         Muon_Phi[kMaxMuon];   //[Muon_]
   Float_t         Muon_T[kMaxMuon];   //[Muon_]
   Int_t           Muon_Charge[kMaxMuon];   //[Muon_]
   TRef            Muon_Particle[kMaxMuon];
   Float_t         Muon_IsolationVar[kMaxMuon];   //[Muon_]
   Float_t         Muon_IsolationVarRhoCorr[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtCharged[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtNeutral[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtChargedPU[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPt[kMaxMuon];   //[Muon_]
   Float_t         Muon_D0[kMaxMuon];   //[Muon_]
   Float_t         Muon_DZ[kMaxMuon];   //[Muon_]
   Float_t         Muon_ErrorD0[kMaxMuon];   //[Muon_]
   Float_t         Muon_ErrorDZ[kMaxMuon];   //[Muon_]
   Int_t           Muon_size;
   Int_t           MissingET_;
   UInt_t          MissingET_fUniqueID[kMaxMissingET];   //[MissingET_]
   UInt_t          MissingET_fBits[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_MET[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_Eta[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_Phi[kMaxMissingET];   //[MissingET_]
   Int_t           MissingET_size;
   Int_t           ScalarHT_;
   UInt_t          ScalarHT_fUniqueID[kMaxScalarHT];   //[ScalarHT_]
   UInt_t          ScalarHT_fBits[kMaxScalarHT];   //[ScalarHT_]
   Float_t         ScalarHT_HT[kMaxScalarHT];   //[ScalarHT_]
   Int_t           ScalarHT_size;

   // List of branches
   TBranch        *b_Event_;   //!
   TBranch        *b_Event_fUniqueID;   //!
   TBranch        *b_Event_fBits;   //!
   TBranch        *b_Event_Number;   //!
   TBranch        *b_Event_ReadTime;   //!
   TBranch        *b_Event_ProcTime;   //!
   TBranch        *b_Event_ProcessID;   //!
   TBranch        *b_Event_MPI;   //!
   TBranch        *b_Event_Weight;   //!
   TBranch        *b_Event_CrossSection;   //!
   TBranch        *b_Event_CrossSectionError;   //!
   TBranch        *b_Event_Scale;   //!
   TBranch        *b_Event_AlphaQED;   //!
   TBranch        *b_Event_AlphaQCD;   //!
   TBranch        *b_Event_ID1;   //!
   TBranch        *b_Event_ID2;   //!
   TBranch        *b_Event_X1;   //!
   TBranch        *b_Event_X2;   //!
   TBranch        *b_Event_ScalePDF;   //!
   TBranch        *b_Event_PDF1;   //!
   TBranch        *b_Event_PDF2;   //!
   TBranch        *b_Event_size;   //!
   TBranch        *b_Weight_;   //!
   TBranch        *b_Weight_fUniqueID;   //!
   TBranch        *b_Weight_fBits;   //!
   TBranch        *b_Weight_Weight;   //!
   TBranch        *b_Weight_size;   //!
   TBranch        *b_GenLJet_;   //!
   TBranch        *b_GenLJet_fUniqueID;   //!
   TBranch        *b_GenLJet_fBits;   //!
   TBranch        *b_GenLJet_PT;   //!
   TBranch        *b_GenLJet_Eta;   //!
   TBranch        *b_GenLJet_Phi;   //!
   TBranch        *b_GenLJet_T;   //!
   TBranch        *b_GenLJet_Mass;   //!
   TBranch        *b_GenLJet_DeltaEta;   //!
   TBranch        *b_GenLJet_DeltaPhi;   //!
   TBranch        *b_GenLJet_Flavor;   //!
   TBranch        *b_GenLJet_FlavorAlgo;   //!
   TBranch        *b_GenLJet_FlavorPhys;   //!
   TBranch        *b_GenLJet_BTag;   //!
   TBranch        *b_GenLJet_BTagAlgo;   //!
   TBranch        *b_GenLJet_BTagPhys;   //!
   TBranch        *b_GenLJet_TauTag;   //!
   TBranch        *b_GenLJet_TauWeight;   //!
   TBranch        *b_GenLJet_Charge;   //!
   TBranch        *b_GenLJet_EhadOverEem;   //!
   TBranch        *b_GenLJet_NCharged;   //!
   TBranch        *b_GenLJet_NNeutrals;   //!
   TBranch        *b_GenLJet_Beta;   //!
   TBranch        *b_GenLJet_BetaStar;   //!
   TBranch        *b_GenLJet_MeanSqDeltaR;   //!
   TBranch        *b_GenLJet_PTD;   //!
   TBranch        *b_GenLJet_FracPt;   //!
   TBranch        *b_GenLJet_Tau;   //!
   TBranch        *b_GenLJet_SoftDroppedJet;   //!
   TBranch        *b_GenLJet_SoftDroppedSubJet1;   //!
   TBranch        *b_GenLJet_SoftDroppedSubJet2;   //!
   TBranch        *b_GenLJet_TrimmedP4;   //!
   TBranch        *b_GenLJet_PrunedP4;   //!
   TBranch        *b_GenLJet_SoftDroppedP4;   //!
   TBranch        *b_GenLJet_NSubJetsTrimmed;   //!
   TBranch        *b_GenLJet_NSubJetsPruned;   //!
   TBranch        *b_GenLJet_NSubJetsSoftDropped;   //!
   TBranch        *b_GenLJet_ExclYmerge23;   //!
   TBranch        *b_GenLJet_ExclYmerge34;   //!
   TBranch        *b_GenLJet_ExclYmerge45;   //!
   TBranch        *b_GenLJet_ExclYmerge56;   //!
   TBranch        *b_GenLJet_Constituents;   //!
   TBranch        *b_GenLJet_Particles;   //!
   TBranch        *b_GenLJet_Area;   //!
   TBranch        *b_GenLJet_size;   //!
   TBranch        *b_GenJet_;   //!
   TBranch        *b_GenJet_fUniqueID;   //!
   TBranch        *b_GenJet_fBits;   //!
   TBranch        *b_GenJet_PT;   //!
   TBranch        *b_GenJet_Eta;   //!
   TBranch        *b_GenJet_Phi;   //!
   TBranch        *b_GenJet_T;   //!
   TBranch        *b_GenJet_Mass;   //!
   TBranch        *b_GenJet_DeltaEta;   //!
   TBranch        *b_GenJet_DeltaPhi;   //!
   TBranch        *b_GenJet_Flavor;   //!
   TBranch        *b_GenJet_FlavorAlgo;   //!
   TBranch        *b_GenJet_FlavorPhys;   //!
   TBranch        *b_GenJet_BTag;   //!
   TBranch        *b_GenJet_BTagAlgo;   //!
   TBranch        *b_GenJet_BTagPhys;   //!
   TBranch        *b_GenJet_TauTag;   //!
   TBranch        *b_GenJet_TauWeight;   //!
   TBranch        *b_GenJet_Charge;   //!
   TBranch        *b_GenJet_EhadOverEem;   //!
   TBranch        *b_GenJet_NCharged;   //!
   TBranch        *b_GenJet_NNeutrals;   //!
   TBranch        *b_GenJet_Beta;   //!
   TBranch        *b_GenJet_BetaStar;   //!
   TBranch        *b_GenJet_MeanSqDeltaR;   //!
   TBranch        *b_GenJet_PTD;   //!
   TBranch        *b_GenJet_FracPt;   //!
   TBranch        *b_GenJet_Tau;   //!
   TBranch        *b_GenJet_SoftDroppedJet;   //!
   TBranch        *b_GenJet_SoftDroppedSubJet1;   //!
   TBranch        *b_GenJet_SoftDroppedSubJet2;   //!
   TBranch        *b_GenJet_TrimmedP4;   //!
   TBranch        *b_GenJet_PrunedP4;   //!
   TBranch        *b_GenJet_SoftDroppedP4;   //!
   TBranch        *b_GenJet_NSubJetsTrimmed;   //!
   TBranch        *b_GenJet_NSubJetsPruned;   //!
   TBranch        *b_GenJet_NSubJetsSoftDropped;   //!
   TBranch        *b_GenJet_ExclYmerge23;   //!
   TBranch        *b_GenJet_ExclYmerge34;   //!
   TBranch        *b_GenJet_ExclYmerge45;   //!
   TBranch        *b_GenJet_ExclYmerge56;   //!
   TBranch        *b_GenJet_Constituents;   //!
   TBranch        *b_GenJet_Particles;   //!
   TBranch        *b_GenJet_Area;   //!
   TBranch        *b_GenJet_size;   //!
   TBranch        *b_GenPhoton_;   //!
   TBranch        *b_GenPhoton_fUniqueID;   //!
   TBranch        *b_GenPhoton_fBits;   //!
   TBranch        *b_GenPhoton_PT;   //!
   TBranch        *b_GenPhoton_Eta;   //!
   TBranch        *b_GenPhoton_Phi;   //!
   TBranch        *b_GenPhoton_E;   //!
   TBranch        *b_GenPhoton_T;   //!
   TBranch        *b_GenPhoton_EhadOverEem;   //!
   TBranch        *b_GenPhoton_Particles;   //!
   TBranch        *b_GenPhoton_IsolationVar;   //!
   TBranch        *b_GenPhoton_IsolationVarRhoCorr;   //!
   TBranch        *b_GenPhoton_SumPtCharged;   //!
   TBranch        *b_GenPhoton_SumPtNeutral;   //!
   TBranch        *b_GenPhoton_SumPtChargedPU;   //!
   TBranch        *b_GenPhoton_SumPt;   //!
   TBranch        *b_GenPhoton_Status;   //!
   TBranch        *b_GenPhoton_size;   //!
   TBranch        *b_GenBhadrons_;   //!
   TBranch        *b_GenBhadrons_fUniqueID;   //!
   TBranch        *b_GenBhadrons_fBits;   //!
   TBranch        *b_GenBhadrons_PID;   //!
   TBranch        *b_GenBhadrons_Status;   //!
   TBranch        *b_GenBhadrons_IsPU;   //!
   TBranch        *b_GenBhadrons_M1;   //!
   TBranch        *b_GenBhadrons_M2;   //!
   TBranch        *b_GenBhadrons_D1;   //!
   TBranch        *b_GenBhadrons_D2;   //!
   TBranch        *b_GenBhadrons_Charge;   //!
   TBranch        *b_GenBhadrons_Mass;   //!
   TBranch        *b_GenBhadrons_E;   //!
   TBranch        *b_GenBhadrons_Px;   //!
   TBranch        *b_GenBhadrons_Py;   //!
   TBranch        *b_GenBhadrons_Pz;   //!
   TBranch        *b_GenBhadrons_P;   //!
   TBranch        *b_GenBhadrons_PT;   //!
   TBranch        *b_GenBhadrons_Eta;   //!
   TBranch        *b_GenBhadrons_Phi;   //!
   TBranch        *b_GenBhadrons_Rapidity;   //!
   TBranch        *b_GenBhadrons_CtgTheta;   //!
   TBranch        *b_GenBhadrons_D0;   //!
   TBranch        *b_GenBhadrons_DZ;   //!
   TBranch        *b_GenBhadrons_T;   //!
   TBranch        *b_GenBhadrons_X;   //!
   TBranch        *b_GenBhadrons_Y;   //!
   TBranch        *b_GenBhadrons_Z;   //!
   TBranch        *b_GenBhadrons_size;   //!
   TBranch        *b_GenElectron_;   //!
   TBranch        *b_GenElectron_fUniqueID;   //!
   TBranch        *b_GenElectron_fBits;   //!
   TBranch        *b_GenElectron_PT;   //!
   TBranch        *b_GenElectron_Eta;   //!
   TBranch        *b_GenElectron_Phi;   //!
   TBranch        *b_GenElectron_T;   //!
   TBranch        *b_GenElectron_Charge;   //!
   TBranch        *b_GenElectron_EhadOverEem;   //!
   TBranch        *b_GenElectron_Particle;   //!
   TBranch        *b_GenElectron_IsolationVar;   //!
   TBranch        *b_GenElectron_IsolationVarRhoCorr;   //!
   TBranch        *b_GenElectron_SumPtCharged;   //!
   TBranch        *b_GenElectron_SumPtNeutral;   //!
   TBranch        *b_GenElectron_SumPtChargedPU;   //!
   TBranch        *b_GenElectron_SumPt;   //!
   TBranch        *b_GenElectron_D0;   //!
   TBranch        *b_GenElectron_DZ;   //!
   TBranch        *b_GenElectron_ErrorD0;   //!
   TBranch        *b_GenElectron_ErrorDZ;   //!
   TBranch        *b_GenElectron_size;   //!
   TBranch        *b_GenMuon_;   //!
   TBranch        *b_GenMuon_fUniqueID;   //!
   TBranch        *b_GenMuon_fBits;   //!
   TBranch        *b_GenMuon_PT;   //!
   TBranch        *b_GenMuon_Eta;   //!
   TBranch        *b_GenMuon_Phi;   //!
   TBranch        *b_GenMuon_T;   //!
   TBranch        *b_GenMuon_Charge;   //!
   TBranch        *b_GenMuon_Particle;   //!
   TBranch        *b_GenMuon_IsolationVar;   //!
   TBranch        *b_GenMuon_IsolationVarRhoCorr;   //!
   TBranch        *b_GenMuon_SumPtCharged;   //!
   TBranch        *b_GenMuon_SumPtNeutral;   //!
   TBranch        *b_GenMuon_SumPtChargedPU;   //!
   TBranch        *b_GenMuon_SumPt;   //!
   TBranch        *b_GenMuon_D0;   //!
   TBranch        *b_GenMuon_DZ;   //!
   TBranch        *b_GenMuon_ErrorD0;   //!
   TBranch        *b_GenMuon_ErrorDZ;   //!
   TBranch        *b_GenMuon_size;   //!
   TBranch        *b_GenTop_;   //!
   TBranch        *b_GenTop_fUniqueID;   //!
   TBranch        *b_GenTop_fBits;   //!
   TBranch        *b_GenTop_PID;   //!
   TBranch        *b_GenTop_Status;   //!
   TBranch        *b_GenTop_IsPU;   //!
   TBranch        *b_GenTop_M1;   //!
   TBranch        *b_GenTop_M2;   //!
   TBranch        *b_GenTop_D1;   //!
   TBranch        *b_GenTop_D2;   //!
   TBranch        *b_GenTop_Charge;   //!
   TBranch        *b_GenTop_Mass;   //!
   TBranch        *b_GenTop_E;   //!
   TBranch        *b_GenTop_Px;   //!
   TBranch        *b_GenTop_Py;   //!
   TBranch        *b_GenTop_Pz;   //!
   TBranch        *b_GenTop_P;   //!
   TBranch        *b_GenTop_PT;   //!
   TBranch        *b_GenTop_Eta;   //!
   TBranch        *b_GenTop_Phi;   //!
   TBranch        *b_GenTop_Rapidity;   //!
   TBranch        *b_GenTop_CtgTheta;   //!
   TBranch        *b_GenTop_D0;   //!
   TBranch        *b_GenTop_DZ;   //!
   TBranch        *b_GenTop_T;   //!
   TBranch        *b_GenTop_X;   //!
   TBranch        *b_GenTop_Y;   //!
   TBranch        *b_GenTop_Z;   //!
   TBranch        *b_GenTop_size;   //!
   TBranch        *b_GenMissingET_;   //!
   TBranch        *b_GenMissingET_fUniqueID;   //!
   TBranch        *b_GenMissingET_fBits;   //!
   TBranch        *b_GenMissingET_MET;   //!
   TBranch        *b_GenMissingET_Eta;   //!
   TBranch        *b_GenMissingET_Phi;   //!
   TBranch        *b_GenMissingET_size;   //!
   TBranch        *b_GenZPrime_;   //!
   TBranch        *b_GenZPrime_fUniqueID;   //!
   TBranch        *b_GenZPrime_fBits;   //!
   TBranch        *b_GenZPrime_PID;   //!
   TBranch        *b_GenZPrime_Status;   //!
   TBranch        *b_GenZPrime_IsPU;   //!
   TBranch        *b_GenZPrime_M1;   //!
   TBranch        *b_GenZPrime_M2;   //!
   TBranch        *b_GenZPrime_D1;   //!
   TBranch        *b_GenZPrime_D2;   //!
   TBranch        *b_GenZPrime_Charge;   //!
   TBranch        *b_GenZPrime_Mass;   //!
   TBranch        *b_GenZPrime_E;   //!
   TBranch        *b_GenZPrime_Px;   //!
   TBranch        *b_GenZPrime_Py;   //!
   TBranch        *b_GenZPrime_Pz;   //!
   TBranch        *b_GenZPrime_P;   //!
   TBranch        *b_GenZPrime_PT;   //!
   TBranch        *b_GenZPrime_Eta;   //!
   TBranch        *b_GenZPrime_Phi;   //!
   TBranch        *b_GenZPrime_Rapidity;   //!
   TBranch        *b_GenZPrime_CtgTheta;   //!
   TBranch        *b_GenZPrime_D0;   //!
   TBranch        *b_GenZPrime_DZ;   //!
   TBranch        *b_GenZPrime_T;   //!
   TBranch        *b_GenZPrime_X;   //!
   TBranch        *b_GenZPrime_Y;   //!
   TBranch        *b_GenZPrime_Z;   //!
   TBranch        *b_GenZPrime_size;   //!
   TBranch        *b_GenW_;   //!
   TBranch        *b_GenW_fUniqueID;   //!
   TBranch        *b_GenW_fBits;   //!
   TBranch        *b_GenW_PID;   //!
   TBranch        *b_GenW_Status;   //!
   TBranch        *b_GenW_IsPU;   //!
   TBranch        *b_GenW_M1;   //!
   TBranch        *b_GenW_M2;   //!
   TBranch        *b_GenW_D1;   //!
   TBranch        *b_GenW_D2;   //!
   TBranch        *b_GenW_Charge;   //!
   TBranch        *b_GenW_Mass;   //!
   TBranch        *b_GenW_E;   //!
   TBranch        *b_GenW_Px;   //!
   TBranch        *b_GenW_Py;   //!
   TBranch        *b_GenW_Pz;   //!
   TBranch        *b_GenW_P;   //!
   TBranch        *b_GenW_PT;   //!
   TBranch        *b_GenW_Eta;   //!
   TBranch        *b_GenW_Phi;   //!
   TBranch        *b_GenW_Rapidity;   //!
   TBranch        *b_GenW_CtgTheta;   //!
   TBranch        *b_GenW_D0;   //!
   TBranch        *b_GenW_DZ;   //!
   TBranch        *b_GenW_T;   //!
   TBranch        *b_GenW_X;   //!
   TBranch        *b_GenW_Y;   //!
   TBranch        *b_GenW_Z;   //!
   TBranch        *b_GenW_size;   //!
   TBranch        *b_Jet_;   //!
   TBranch        *b_Jet_fUniqueID;   //!
   TBranch        *b_Jet_fBits;   //!
   TBranch        *b_Jet_PT;   //!
   TBranch        *b_Jet_Eta;   //!
   TBranch        *b_Jet_Phi;   //!
   TBranch        *b_Jet_T;   //!
   TBranch        *b_Jet_Mass;   //!
   TBranch        *b_Jet_DeltaEta;   //!
   TBranch        *b_Jet_DeltaPhi;   //!
   TBranch        *b_Jet_Flavor;   //!
   TBranch        *b_Jet_FlavorAlgo;   //!
   TBranch        *b_Jet_FlavorPhys;   //!
   TBranch        *b_Jet_BTag;   //!
   TBranch        *b_Jet_BTagAlgo;   //!
   TBranch        *b_Jet_BTagPhys;   //!
   TBranch        *b_Jet_TauTag;   //!
   TBranch        *b_Jet_TauWeight;   //!
   TBranch        *b_Jet_Charge;   //!
   TBranch        *b_Jet_EhadOverEem;   //!
   TBranch        *b_Jet_NCharged;   //!
   TBranch        *b_Jet_NNeutrals;   //!
   TBranch        *b_Jet_Beta;   //!
   TBranch        *b_Jet_BetaStar;   //!
   TBranch        *b_Jet_MeanSqDeltaR;   //!
   TBranch        *b_Jet_PTD;   //!
   TBranch        *b_Jet_FracPt;   //!
   TBranch        *b_Jet_Tau;   //!
   TBranch        *b_Jet_SoftDroppedJet;   //!
   TBranch        *b_Jet_SoftDroppedSubJet1;   //!
   TBranch        *b_Jet_SoftDroppedSubJet2;   //!
   TBranch        *b_Jet_TrimmedP4;   //!
   TBranch        *b_Jet_PrunedP4;   //!
   TBranch        *b_Jet_SoftDroppedP4;   //!
   TBranch        *b_Jet_NSubJetsTrimmed;   //!
   TBranch        *b_Jet_NSubJetsPruned;   //!
   TBranch        *b_Jet_NSubJetsSoftDropped;   //!
   TBranch        *b_Jet_ExclYmerge23;   //!
   TBranch        *b_Jet_ExclYmerge34;   //!
   TBranch        *b_Jet_ExclYmerge45;   //!
   TBranch        *b_Jet_ExclYmerge56;   //!
   TBranch        *b_Jet_Constituents;   //!
   TBranch        *b_Jet_Particles;   //!
   TBranch        *b_Jet_Area;   //!
   TBranch        *b_Jet_size;   //!
   TBranch        *b_LJet_;   //!
   TBranch        *b_LJet_fUniqueID;   //!
   TBranch        *b_LJet_fBits;   //!
   TBranch        *b_LJet_PT;   //!
   TBranch        *b_LJet_Eta;   //!
   TBranch        *b_LJet_Phi;   //!
   TBranch        *b_LJet_T;   //!
   TBranch        *b_LJet_Mass;   //!
   TBranch        *b_LJet_DeltaEta;   //!
   TBranch        *b_LJet_DeltaPhi;   //!
   TBranch        *b_LJet_Flavor;   //!
   TBranch        *b_LJet_FlavorAlgo;   //!
   TBranch        *b_LJet_FlavorPhys;   //!
   TBranch        *b_LJet_BTag;   //!
   TBranch        *b_LJet_BTagAlgo;   //!
   TBranch        *b_LJet_BTagPhys;   //!
   TBranch        *b_LJet_TauTag;   //!
   TBranch        *b_LJet_TauWeight;   //!
   TBranch        *b_LJet_Charge;   //!
   TBranch        *b_LJet_EhadOverEem;   //!
   TBranch        *b_LJet_NCharged;   //!
   TBranch        *b_LJet_NNeutrals;   //!
   TBranch        *b_LJet_Beta;   //!
   TBranch        *b_LJet_BetaStar;   //!
   TBranch        *b_LJet_MeanSqDeltaR;   //!
   TBranch        *b_LJet_PTD;   //!
   TBranch        *b_LJet_FracPt;   //!
   TBranch        *b_LJet_Tau;   //!
   TBranch        *b_LJet_SoftDroppedJet;   //!
   TBranch        *b_LJet_SoftDroppedSubJet1;   //!
   TBranch        *b_LJet_SoftDroppedSubJet2;   //!
   TBranch        *b_LJet_TrimmedP4;   //!
   TBranch        *b_LJet_PrunedP4;   //!
   TBranch        *b_LJet_SoftDroppedP4;   //!
   TBranch        *b_LJet_NSubJetsTrimmed;   //!
   TBranch        *b_LJet_NSubJetsPruned;   //!
   TBranch        *b_LJet_NSubJetsSoftDropped;   //!
   TBranch        *b_LJet_ExclYmerge23;   //!
   TBranch        *b_LJet_ExclYmerge34;   //!
   TBranch        *b_LJet_ExclYmerge45;   //!
   TBranch        *b_LJet_ExclYmerge56;   //!
   TBranch        *b_LJet_Constituents;   //!
   TBranch        *b_LJet_Particles;   //!
   TBranch        *b_LJet_Area;   //!
   TBranch        *b_LJet_size;   //!
   TBranch        *b_JetJES_;   //!
   TBranch        *b_JetJES_fUniqueID;   //!
   TBranch        *b_JetJES_fBits;   //!
   TBranch        *b_JetJES_PT;   //!
   TBranch        *b_JetJES_Eta;   //!
   TBranch        *b_JetJES_Phi;   //!
   TBranch        *b_JetJES_T;   //!
   TBranch        *b_JetJES_Mass;   //!
   TBranch        *b_JetJES_DeltaEta;   //!
   TBranch        *b_JetJES_DeltaPhi;   //!
   TBranch        *b_JetJES_Flavor;   //!
   TBranch        *b_JetJES_FlavorAlgo;   //!
   TBranch        *b_JetJES_FlavorPhys;   //!
   TBranch        *b_JetJES_BTag;   //!
   TBranch        *b_JetJES_BTagAlgo;   //!
   TBranch        *b_JetJES_BTagPhys;   //!
   TBranch        *b_JetJES_TauTag;   //!
   TBranch        *b_JetJES_TauWeight;   //!
   TBranch        *b_JetJES_Charge;   //!
   TBranch        *b_JetJES_EhadOverEem;   //!
   TBranch        *b_JetJES_NCharged;   //!
   TBranch        *b_JetJES_NNeutrals;   //!
   TBranch        *b_JetJES_Beta;   //!
   TBranch        *b_JetJES_BetaStar;   //!
   TBranch        *b_JetJES_MeanSqDeltaR;   //!
   TBranch        *b_JetJES_PTD;   //!
   TBranch        *b_JetJES_FracPt;   //!
   TBranch        *b_JetJES_Tau;   //!
   TBranch        *b_JetJES_SoftDroppedJet;   //!
   TBranch        *b_JetJES_SoftDroppedSubJet1;   //!
   TBranch        *b_JetJES_SoftDroppedSubJet2;   //!
   TBranch        *b_JetJES_TrimmedP4;   //!
   TBranch        *b_JetJES_PrunedP4;   //!
   TBranch        *b_JetJES_SoftDroppedP4;   //!
   TBranch        *b_JetJES_NSubJetsTrimmed;   //!
   TBranch        *b_JetJES_NSubJetsPruned;   //!
   TBranch        *b_JetJES_NSubJetsSoftDropped;   //!
   TBranch        *b_JetJES_ExclYmerge23;   //!
   TBranch        *b_JetJES_ExclYmerge34;   //!
   TBranch        *b_JetJES_ExclYmerge45;   //!
   TBranch        *b_JetJES_ExclYmerge56;   //!
   TBranch        *b_JetJES_Constituents;   //!
   TBranch        *b_JetJES_Particles;   //!
   TBranch        *b_JetJES_Area;   //!
   TBranch        *b_JetJES_size;   //!
   TBranch        *b_LJetJES_;   //!
   TBranch        *b_LJetJES_fUniqueID;   //!
   TBranch        *b_LJetJES_fBits;   //!
   TBranch        *b_LJetJES_PT;   //!
   TBranch        *b_LJetJES_Eta;   //!
   TBranch        *b_LJetJES_Phi;   //!
   TBranch        *b_LJetJES_T;   //!
   TBranch        *b_LJetJES_Mass;   //!
   TBranch        *b_LJetJES_DeltaEta;   //!
   TBranch        *b_LJetJES_DeltaPhi;   //!
   TBranch        *b_LJetJES_Flavor;   //!
   TBranch        *b_LJetJES_FlavorAlgo;   //!
   TBranch        *b_LJetJES_FlavorPhys;   //!
   TBranch        *b_LJetJES_BTag;   //!
   TBranch        *b_LJetJES_BTagAlgo;   //!
   TBranch        *b_LJetJES_BTagPhys;   //!
   TBranch        *b_LJetJES_TauTag;   //!
   TBranch        *b_LJetJES_TauWeight;   //!
   TBranch        *b_LJetJES_Charge;   //!
   TBranch        *b_LJetJES_EhadOverEem;   //!
   TBranch        *b_LJetJES_NCharged;   //!
   TBranch        *b_LJetJES_NNeutrals;   //!
   TBranch        *b_LJetJES_Beta;   //!
   TBranch        *b_LJetJES_BetaStar;   //!
   TBranch        *b_LJetJES_MeanSqDeltaR;   //!
   TBranch        *b_LJetJES_PTD;   //!
   TBranch        *b_LJetJES_FracPt;   //!
   TBranch        *b_LJetJES_Tau;   //!
   TBranch        *b_LJetJES_SoftDroppedJet;   //!
   TBranch        *b_LJetJES_SoftDroppedSubJet1;   //!
   TBranch        *b_LJetJES_SoftDroppedSubJet2;   //!
   TBranch        *b_LJetJES_TrimmedP4;   //!
   TBranch        *b_LJetJES_PrunedP4;   //!
   TBranch        *b_LJetJES_SoftDroppedP4;   //!
   TBranch        *b_LJetJES_NSubJetsTrimmed;   //!
   TBranch        *b_LJetJES_NSubJetsPruned;   //!
   TBranch        *b_LJetJES_NSubJetsSoftDropped;   //!
   TBranch        *b_LJetJES_ExclYmerge23;   //!
   TBranch        *b_LJetJES_ExclYmerge34;   //!
   TBranch        *b_LJetJES_ExclYmerge45;   //!
   TBranch        *b_LJetJES_ExclYmerge56;   //!
   TBranch        *b_LJetJES_Constituents;   //!
   TBranch        *b_LJetJES_Particles;   //!
   TBranch        *b_LJetJES_Area;   //!
   TBranch        *b_LJetJES_size;   //!
   TBranch        *b_Electron_;   //!
   TBranch        *b_Electron_fUniqueID;   //!
   TBranch        *b_Electron_fBits;   //!
   TBranch        *b_Electron_PT;   //!
   TBranch        *b_Electron_Eta;   //!
   TBranch        *b_Electron_Phi;   //!
   TBranch        *b_Electron_T;   //!
   TBranch        *b_Electron_Charge;   //!
   TBranch        *b_Electron_EhadOverEem;   //!
   TBranch        *b_Electron_Particle;   //!
   TBranch        *b_Electron_IsolationVar;   //!
   TBranch        *b_Electron_IsolationVarRhoCorr;   //!
   TBranch        *b_Electron_SumPtCharged;   //!
   TBranch        *b_Electron_SumPtNeutral;   //!
   TBranch        *b_Electron_SumPtChargedPU;   //!
   TBranch        *b_Electron_SumPt;   //!
   TBranch        *b_Electron_D0;   //!
   TBranch        *b_Electron_DZ;   //!
   TBranch        *b_Electron_ErrorD0;   //!
   TBranch        *b_Electron_ErrorDZ;   //!
   TBranch        *b_Electron_size;   //!
   TBranch        *b_Photon_;   //!
   TBranch        *b_Photon_fUniqueID;   //!
   TBranch        *b_Photon_fBits;   //!
   TBranch        *b_Photon_PT;   //!
   TBranch        *b_Photon_Eta;   //!
   TBranch        *b_Photon_Phi;   //!
   TBranch        *b_Photon_E;   //!
   TBranch        *b_Photon_T;   //!
   TBranch        *b_Photon_EhadOverEem;   //!
   TBranch        *b_Photon_Particles;   //!
   TBranch        *b_Photon_IsolationVar;   //!
   TBranch        *b_Photon_IsolationVarRhoCorr;   //!
   TBranch        *b_Photon_SumPtCharged;   //!
   TBranch        *b_Photon_SumPtNeutral;   //!
   TBranch        *b_Photon_SumPtChargedPU;   //!
   TBranch        *b_Photon_SumPt;   //!
   TBranch        *b_Photon_Status;   //!
   TBranch        *b_Photon_size;   //!
   TBranch        *b_Muon_;   //!
   TBranch        *b_Muon_fUniqueID;   //!
   TBranch        *b_Muon_fBits;   //!
   TBranch        *b_Muon_PT;   //!
   TBranch        *b_Muon_Eta;   //!
   TBranch        *b_Muon_Phi;   //!
   TBranch        *b_Muon_T;   //!
   TBranch        *b_Muon_Charge;   //!
   TBranch        *b_Muon_Particle;   //!
   TBranch        *b_Muon_IsolationVar;   //!
   TBranch        *b_Muon_IsolationVarRhoCorr;   //!
   TBranch        *b_Muon_SumPtCharged;   //!
   TBranch        *b_Muon_SumPtNeutral;   //!
   TBranch        *b_Muon_SumPtChargedPU;   //!
   TBranch        *b_Muon_SumPt;   //!
   TBranch        *b_Muon_D0;   //!
   TBranch        *b_Muon_DZ;   //!
   TBranch        *b_Muon_ErrorD0;   //!
   TBranch        *b_Muon_ErrorDZ;   //!
   TBranch        *b_Muon_size;   //!
   TBranch        *b_MissingET_;   //!
   TBranch        *b_MissingET_fUniqueID;   //!
   TBranch        *b_MissingET_fBits;   //!
   TBranch        *b_MissingET_MET;   //!
   TBranch        *b_MissingET_Eta;   //!
   TBranch        *b_MissingET_Phi;   //!
   TBranch        *b_MissingET_size;   //!
   TBranch        *b_ScalarHT_;   //!
   TBranch        *b_ScalarHT_fUniqueID;   //!
   TBranch        *b_ScalarHT_fBits;   //!
   TBranch        *b_ScalarHT_HT;   //!
   TBranch        *b_ScalarHT_size;   //!

   ExRootTreeReader *m_treeReader;
   TClonesArray *m_branchEvent;
   //TClonesArray *m_branchParticle;
   TClonesArray *m_branchElectron;
   TClonesArray *m_branchPhoton;
   TClonesArray *m_branchMuon;
   TClonesArray *m_branchJetJES;
   TClonesArray *m_branchLJet;
   TClonesArray *m_branchGenJet;
   TClonesArray *m_branchGenLJet;
   TClonesArray *m_branchMet;
   TClonesArray *m_branchGenMet;
   TClonesArray *m_branchGenElectron;
   TClonesArray *m_branchGenPhoton;
   TClonesArray *m_branchGenMuon;
   TClonesArray *m_branchGenBhadrons;
   TClonesArray *m_branchGenTop;
   TClonesArray *m_branchGenW;

   Delphes(TTree *tree=0, TString Input="/home/petr/4top/rootfiles/y0tt_hadr/tag_1_delphes_events.root", TString NameOfTree="Delphes", TString PathToTree="");
   virtual ~Delphes();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString Output="out.root", TString Tag="", int NEvetns = 0);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Delphes_cxx

#endif // #ifdef Delphes_cxx
