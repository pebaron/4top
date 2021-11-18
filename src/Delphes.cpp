#define Delphes_cxx
#include "Delphes.h"
#include "DelphesClasses.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TLorentzVector.h"
#include "TROOT.h"
#include "TString.h"
#include "TEfficiency.h"
#include "math.h"
#include <iostream>
#include <vector>
using namespace std;

//use mg5analysis :: boosted_gacr/src/DelphesMakeUtils.cpp 
//GenTopy GenTop_Status = 52

class MyLorentzVector : public TLorentzVector
{ 
    public: 
    Bool_t m_IsBTagged, m_PassedSelection;
    string m_Tag; 
    float m_Charge;
    MyLorentzVector():m_IsBTagged(0), m_PassedSelection(0), m_Tag(""), m_Charge(999) // MyLorentzVector :: MyLorentzVector():IsBTagged(0), IsOk(5), Bla(41)
    {
    }

    void SetIsBTagged(bool a) 
    { 
       m_IsBTagged = a; 
    }

    Bool_t GetIsBTagged() 
    { 
       return m_IsBTagged; 
    }

    void SetPassedSelection(bool a) 
    { 
       m_PassedSelection = a; 
    }

    Bool_t GetPassedSelection() 
    { 
       return m_PassedSelection; 
    }

    void SetTag(string a) 
    { 
       m_Tag = a; 
    }

    string GetTag() 
    { 
       return m_Tag; 
    }

    void SetCharge(float a) 
    { 
       m_Charge = a; 
    }

    float GetCharge() 
    { 
       return m_Charge; 
    }

   void Set(TLorentzVector vec)
   {
     this -> SetPtEtaPhiM(vec.Pt(), vec.Eta(), vec.Phi(), vec.M());
   }
   
   MyLorentzVector(double Pt, double Eta, double Phi, double M) 
   {
     this -> Set(Pt, Eta, Phi, M);
   }


   void Set(double Pt, double Eta, double Phi, double M)
   {
     this -> SetPtEtaPhiM(Pt, Eta, Phi, M);
   }


   TLorentzVector GetTLorentzVector()
   {
        TLorentzVector vec;
        vec.SetPtEtaPhiM(this->Pt(), this->Eta(), this->Phi(), this->M());
        return vec;
   }

   void Add(TLorentzVector vec)
   {

     TLorentzVector tmp = this->GetTLorentzVector();
     tmp += vec;
     this->Set(tmp);
     return;

   }


   MyLorentzVector operator+ (MyLorentzVector right)
   {

     right.Add(this->GetTLorentzVector());
     return right;
   }

    
}; 



class MyEvent 
{ 
    public: 
    MyLorentzVector PseudoTopPair1, PseudoTopPair2;
    
    MyLorentzVector PseudoTop1;
    MyLorentzVector PseudoTop2;
    MyLorentzVector PseudoTop3;
    MyLorentzVector PseudoTop4;

    MyLorentzVector Jet11;
    MyLorentzVector Jet12;
    MyLorentzVector Jet13;

    MyLorentzVector Jet21;
    MyLorentzVector Jet22;
    MyLorentzVector Jet23;

    MyLorentzVector Jet31;
    MyLorentzVector Jet32;
    MyLorentzVector Jet33;

    MyLorentzVector Jet41;
    MyLorentzVector Jet42;
    MyLorentzVector Jet43;

    bool m_PreSelected, m_FinalSelected;

    MyEvent():m_PreSelected(false), m_FinalSelected(false) {
    }

    void Setm_PreSelected(bool a) 
    { 
       m_PreSelected = a; 
    }

    bool Getm_PreSelected()
    {
       return m_PreSelected;
    }

    void Setm_FinalSelected(bool a) 
     { 
        m_FinalSelected = a; 
     }
 
     bool Getm_FinalSelected()
     {
        return m_FinalSelected;
     }

    void SetPseudoTopPair1(MyLorentzVector a) 
    { 
       PseudoTopPair1 = a; 
    }
    MyLorentzVector GetPseudoTopPair1()
    {
       return PseudoTopPair1;
    }

    void SetPseudoTopPair2(MyLorentzVector a) 
    { 
       PseudoTopPair2 = a; 
    }
    MyLorentzVector GetPseudoTopPair2()
    {
       return PseudoTopPair2;
    }

    void SetPseudoTop1(MyLorentzVector a) 
    { 
       PseudoTop1 = a; 
    }
    MyLorentzVector GetPseudoTop1()
    {
       return PseudoTop1;
    }

    void SetPseudoTop2(MyLorentzVector a) 
    { 
       PseudoTop2 = a; 
    }
    MyLorentzVector GetPseudoTop2()
    {
       return PseudoTop2;
    }

    void SetPseudoTop3(MyLorentzVector a) 
    { 
       PseudoTop3 = a; 
    }
    MyLorentzVector GetPseudoTop3()
    {
       return PseudoTop3;
    }

    void SetPseudoTop4(MyLorentzVector a) 
    { 
       PseudoTop4 = a; 
    }
    MyLorentzVector GetPseudoTop4()
    {
       return PseudoTop4;
    }

    void SetJet11(MyLorentzVector a) 
    { 
       Jet11 = a; 
    }
    MyLorentzVector GetJet11()
    {
       return Jet11;
    }

    void SetJet12(MyLorentzVector a) 
    { 
       Jet12 = a; 
    }
    MyLorentzVector GetJet12()
    {
       return Jet12;
    }
    
    void SetJet13(MyLorentzVector a) 
    { 
       Jet13 = a; 
    }
    MyLorentzVector GetJet13()
    {
       return Jet13;
    }

    void SetJet21(MyLorentzVector a) 
    { 
       Jet21 = a; 
    }
    MyLorentzVector GetJet21()
    {
       return Jet21;
    }

    void SetJet22(MyLorentzVector a) 
    { 
       Jet22 = a; 
    }
    MyLorentzVector GetJet22()
    {
       return Jet22;
    }

    void SetJet23(MyLorentzVector a) 
    { 
       Jet23 = a; 
    }
    MyLorentzVector GetJet23()
    {
       return Jet23;
    }

    void SetJet31(MyLorentzVector a) 
    { 
       Jet31 = a; 
    }
    MyLorentzVector GetJet31()
    {
       return Jet31;
    }

    void SetJet32(MyLorentzVector a) 
    { 
       Jet32 = a; 
    }
    MyLorentzVector GetJet32()
    {
       return Jet32;
    }

    void SetJet33(MyLorentzVector a) 
    { 
       Jet33 = a; 
    }
    MyLorentzVector GetJet33()
    {
       return Jet33;
    }

    void SetJet41(MyLorentzVector a) 
    { 
       Jet41 = a; 
    }
    MyLorentzVector GetJet41()
    {
       return Jet41;
    }

    void SetJet42(MyLorentzVector a) 
    { 
       Jet42 = a; 
    }
    MyLorentzVector GetJet42()
    {
       return Jet42;
    }

    void SetJet43(MyLorentzVector a) 
    { 
       Jet43 = a; 
    }
    MyLorentzVector GetJet43()
    {
       return Jet43;
    }
}; 

float DeltaR(MyLorentzVector a, MyLorentzVector b){
   return a.DeltaR(b);
   //return sqrt((a.Phi() - b.Phi())*(a.Phi() - b.Phi()) + (a.Eta() - b.Eta())*(a.Eta() - b.Eta()));
}


////////from header

Delphes::Delphes(TTree *tree, TString Input, TString NameOfTree, TString PathToTree): fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(Input);
      if (!f || !f->IsOpen()) {
         f = new TFile(Input);
      }
      f->GetObject(NameOfTree,tree);

   }
   Init(tree);
}

Delphes::~Delphes()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Delphes::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Delphes::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Delphes::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

    m_treeReader = new ExRootTreeReader(tree);
    m_branchEvent = m_treeReader->UseBranch("Event");
    //m_branchParticle = m_treeReader->UseBranch("Particle");
    m_branchElectron = m_treeReader->UseBranch("Electron");
    m_branchPhoton = m_treeReader->UseBranch("Photon");
    m_branchMuon = m_treeReader->UseBranch("Muon");
    m_branchJetJES = m_treeReader->UseBranch("JetJES");
    m_branchLJet = m_treeReader->UseBranch("LJet");
    m_branchGenJet = m_treeReader->UseBranch("GenJet");
    m_branchGenLJet = m_treeReader->UseBranch("GenLJet");

    m_branchMet = m_treeReader->UseBranch("MissingET");
    m_branchGenMet = m_treeReader->UseBranch("GenMissingET");

    m_branchGenElectron = m_treeReader->UseBranch("GenElectron");
    m_branchGenPhoton = m_treeReader->UseBranch("GenPhoton");
    m_branchGenMuon = m_treeReader->UseBranch("GenMuon");

    m_branchGenBhadrons = m_treeReader->UseBranch("GenBhadrons");
    m_branchGenTop = m_treeReader->UseBranch("GenTop");
    m_branchGenW = m_treeReader->UseBranch("GenW");

   fChain->SetBranchAddress("Event", &Event_, &b_Event_);
   fChain->SetBranchAddress("Event.fUniqueID", Event_fUniqueID, &b_Event_fUniqueID);
   fChain->SetBranchAddress("Event.fBits", Event_fBits, &b_Event_fBits);
   fChain->SetBranchAddress("Event.Number", Event_Number, &b_Event_Number);
   fChain->SetBranchAddress("Event.ReadTime", Event_ReadTime, &b_Event_ReadTime);
   fChain->SetBranchAddress("Event.ProcTime", Event_ProcTime, &b_Event_ProcTime);
   fChain->SetBranchAddress("Event.ProcessID", Event_ProcessID, &b_Event_ProcessID);
   fChain->SetBranchAddress("Event.MPI", Event_MPI, &b_Event_MPI);
   fChain->SetBranchAddress("Event.Weight", Event_Weight, &b_Event_Weight);
   fChain->SetBranchAddress("Event.CrossSection", Event_CrossSection, &b_Event_CrossSection);
   fChain->SetBranchAddress("Event.CrossSectionError", Event_CrossSectionError, &b_Event_CrossSectionError);
   fChain->SetBranchAddress("Event.Scale", Event_Scale, &b_Event_Scale);
   fChain->SetBranchAddress("Event.AlphaQED", Event_AlphaQED, &b_Event_AlphaQED);
   fChain->SetBranchAddress("Event.AlphaQCD", Event_AlphaQCD, &b_Event_AlphaQCD);
   fChain->SetBranchAddress("Event.ID1", Event_ID1, &b_Event_ID1);
   fChain->SetBranchAddress("Event.ID2", Event_ID2, &b_Event_ID2);
   fChain->SetBranchAddress("Event.X1", Event_X1, &b_Event_X1);
   fChain->SetBranchAddress("Event.X2", Event_X2, &b_Event_X2);
   fChain->SetBranchAddress("Event.ScalePDF", Event_ScalePDF, &b_Event_ScalePDF);
   fChain->SetBranchAddress("Event.PDF1", Event_PDF1, &b_Event_PDF1);
   fChain->SetBranchAddress("Event.PDF2", Event_PDF2, &b_Event_PDF2);
   fChain->SetBranchAddress("Event_size", &Event_size, &b_Event_size);
   fChain->SetBranchAddress("Weight", &Weight_, &b_Weight_);
   fChain->SetBranchAddress("Weight.fUniqueID", Weight_fUniqueID, &b_Weight_fUniqueID);
   fChain->SetBranchAddress("Weight.fBits", Weight_fBits, &b_Weight_fBits);
   fChain->SetBranchAddress("Weight.Weight", Weight_Weight, &b_Weight_Weight);
   fChain->SetBranchAddress("Weight_size", &Weight_size, &b_Weight_size);
   fChain->SetBranchAddress("GenLJet", &GenLJet_, &b_GenLJet_);
   fChain->SetBranchAddress("GenLJet.fUniqueID", GenLJet_fUniqueID, &b_GenLJet_fUniqueID);
   fChain->SetBranchAddress("GenLJet.fBits", GenLJet_fBits, &b_GenLJet_fBits);
   fChain->SetBranchAddress("GenLJet.PT", GenLJet_PT, &b_GenLJet_PT);
   fChain->SetBranchAddress("GenLJet.Eta", GenLJet_Eta, &b_GenLJet_Eta);
   fChain->SetBranchAddress("GenLJet.Phi", GenLJet_Phi, &b_GenLJet_Phi);
   fChain->SetBranchAddress("GenLJet.T", GenLJet_T, &b_GenLJet_T);
   fChain->SetBranchAddress("GenLJet.Mass", GenLJet_Mass, &b_GenLJet_Mass);
   fChain->SetBranchAddress("GenLJet.DeltaEta", GenLJet_DeltaEta, &b_GenLJet_DeltaEta);
   fChain->SetBranchAddress("GenLJet.DeltaPhi", GenLJet_DeltaPhi, &b_GenLJet_DeltaPhi);
   fChain->SetBranchAddress("GenLJet.Flavor", GenLJet_Flavor, &b_GenLJet_Flavor);
   fChain->SetBranchAddress("GenLJet.FlavorAlgo", GenLJet_FlavorAlgo, &b_GenLJet_FlavorAlgo);
   fChain->SetBranchAddress("GenLJet.FlavorPhys", GenLJet_FlavorPhys, &b_GenLJet_FlavorPhys);
   fChain->SetBranchAddress("GenLJet.BTag", GenLJet_BTag, &b_GenLJet_BTag);
   fChain->SetBranchAddress("GenLJet.BTagAlgo", GenLJet_BTagAlgo, &b_GenLJet_BTagAlgo);
   fChain->SetBranchAddress("GenLJet.BTagPhys", GenLJet_BTagPhys, &b_GenLJet_BTagPhys);
   fChain->SetBranchAddress("GenLJet.TauTag", GenLJet_TauTag, &b_GenLJet_TauTag);
   fChain->SetBranchAddress("GenLJet.TauWeight", GenLJet_TauWeight, &b_GenLJet_TauWeight);
   fChain->SetBranchAddress("GenLJet.Charge", GenLJet_Charge, &b_GenLJet_Charge);
   fChain->SetBranchAddress("GenLJet.EhadOverEem", GenLJet_EhadOverEem, &b_GenLJet_EhadOverEem);
   fChain->SetBranchAddress("GenLJet.NCharged", GenLJet_NCharged, &b_GenLJet_NCharged);
   fChain->SetBranchAddress("GenLJet.NNeutrals", GenLJet_NNeutrals, &b_GenLJet_NNeutrals);
   fChain->SetBranchAddress("GenLJet.Beta", GenLJet_Beta, &b_GenLJet_Beta);
   fChain->SetBranchAddress("GenLJet.BetaStar", GenLJet_BetaStar, &b_GenLJet_BetaStar);
   fChain->SetBranchAddress("GenLJet.MeanSqDeltaR", GenLJet_MeanSqDeltaR, &b_GenLJet_MeanSqDeltaR);
   fChain->SetBranchAddress("GenLJet.PTD", GenLJet_PTD, &b_GenLJet_PTD);
   fChain->SetBranchAddress("GenLJet.FracPt[5]", GenLJet_FracPt, &b_GenLJet_FracPt);
   fChain->SetBranchAddress("GenLJet.Tau[5]", GenLJet_Tau, &b_GenLJet_Tau);
   fChain->SetBranchAddress("GenLJet.SoftDroppedJet", GenLJet_SoftDroppedJet, &b_GenLJet_SoftDroppedJet);
   fChain->SetBranchAddress("GenLJet.SoftDroppedSubJet1", GenLJet_SoftDroppedSubJet1, &b_GenLJet_SoftDroppedSubJet1);
   fChain->SetBranchAddress("GenLJet.SoftDroppedSubJet2", GenLJet_SoftDroppedSubJet2, &b_GenLJet_SoftDroppedSubJet2);
   fChain->SetBranchAddress("GenLJet.TrimmedP4[5]", GenLJet_TrimmedP4, &b_GenLJet_TrimmedP4);
   fChain->SetBranchAddress("GenLJet.PrunedP4[5]", GenLJet_PrunedP4, &b_GenLJet_PrunedP4);
   fChain->SetBranchAddress("GenLJet.SoftDroppedP4[5]", GenLJet_SoftDroppedP4, &b_GenLJet_SoftDroppedP4);
   fChain->SetBranchAddress("GenLJet.NSubJetsTrimmed", GenLJet_NSubJetsTrimmed, &b_GenLJet_NSubJetsTrimmed);
   fChain->SetBranchAddress("GenLJet.NSubJetsPruned", GenLJet_NSubJetsPruned, &b_GenLJet_NSubJetsPruned);
   fChain->SetBranchAddress("GenLJet.NSubJetsSoftDropped", GenLJet_NSubJetsSoftDropped, &b_GenLJet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("GenLJet.ExclYmerge23", GenLJet_ExclYmerge23, &b_GenLJet_ExclYmerge23);
   fChain->SetBranchAddress("GenLJet.ExclYmerge34", GenLJet_ExclYmerge34, &b_GenLJet_ExclYmerge34);
   fChain->SetBranchAddress("GenLJet.ExclYmerge45", GenLJet_ExclYmerge45, &b_GenLJet_ExclYmerge45);
   fChain->SetBranchAddress("GenLJet.ExclYmerge56", GenLJet_ExclYmerge56, &b_GenLJet_ExclYmerge56);
   fChain->SetBranchAddress("GenLJet.Constituents", GenLJet_Constituents, &b_GenLJet_Constituents);
   fChain->SetBranchAddress("GenLJet.Particles", GenLJet_Particles, &b_GenLJet_Particles);
   fChain->SetBranchAddress("GenLJet.Area", GenLJet_Area, &b_GenLJet_Area);
   fChain->SetBranchAddress("GenLJet_size", &GenLJet_size, &b_GenLJet_size);
   fChain->SetBranchAddress("GenJet", &GenJet_, &b_GenJet_);
   fChain->SetBranchAddress("GenJet.fUniqueID", GenJet_fUniqueID, &b_GenJet_fUniqueID);
   fChain->SetBranchAddress("GenJet.fBits", GenJet_fBits, &b_GenJet_fBits);
   fChain->SetBranchAddress("GenJet.PT", GenJet_PT, &b_GenJet_PT);
   fChain->SetBranchAddress("GenJet.Eta", GenJet_Eta, &b_GenJet_Eta);
   fChain->SetBranchAddress("GenJet.Phi", GenJet_Phi, &b_GenJet_Phi);
   fChain->SetBranchAddress("GenJet.T", GenJet_T, &b_GenJet_T);
   fChain->SetBranchAddress("GenJet.Mass", GenJet_Mass, &b_GenJet_Mass);
   fChain->SetBranchAddress("GenJet.DeltaEta", GenJet_DeltaEta, &b_GenJet_DeltaEta);
   fChain->SetBranchAddress("GenJet.DeltaPhi", GenJet_DeltaPhi, &b_GenJet_DeltaPhi);
   fChain->SetBranchAddress("GenJet.Flavor", GenJet_Flavor, &b_GenJet_Flavor);
   fChain->SetBranchAddress("GenJet.FlavorAlgo", GenJet_FlavorAlgo, &b_GenJet_FlavorAlgo);
   fChain->SetBranchAddress("GenJet.FlavorPhys", GenJet_FlavorPhys, &b_GenJet_FlavorPhys);
   fChain->SetBranchAddress("GenJet.BTag", GenJet_BTag, &b_GenJet_BTag);
   fChain->SetBranchAddress("GenJet.BTagAlgo", GenJet_BTagAlgo, &b_GenJet_BTagAlgo);
   fChain->SetBranchAddress("GenJet.BTagPhys", GenJet_BTagPhys, &b_GenJet_BTagPhys);
   fChain->SetBranchAddress("GenJet.TauTag", GenJet_TauTag, &b_GenJet_TauTag);
   fChain->SetBranchAddress("GenJet.TauWeight", GenJet_TauWeight, &b_GenJet_TauWeight);
   fChain->SetBranchAddress("GenJet.Charge", GenJet_Charge, &b_GenJet_Charge);
   fChain->SetBranchAddress("GenJet.EhadOverEem", GenJet_EhadOverEem, &b_GenJet_EhadOverEem);
   fChain->SetBranchAddress("GenJet.NCharged", GenJet_NCharged, &b_GenJet_NCharged);
   fChain->SetBranchAddress("GenJet.NNeutrals", GenJet_NNeutrals, &b_GenJet_NNeutrals);
   fChain->SetBranchAddress("GenJet.Beta", GenJet_Beta, &b_GenJet_Beta);
   fChain->SetBranchAddress("GenJet.BetaStar", GenJet_BetaStar, &b_GenJet_BetaStar);
   fChain->SetBranchAddress("GenJet.MeanSqDeltaR", GenJet_MeanSqDeltaR, &b_GenJet_MeanSqDeltaR);
   fChain->SetBranchAddress("GenJet.PTD", GenJet_PTD, &b_GenJet_PTD);
   fChain->SetBranchAddress("GenJet.FracPt[5]", GenJet_FracPt, &b_GenJet_FracPt);
   fChain->SetBranchAddress("GenJet.Tau[5]", GenJet_Tau, &b_GenJet_Tau);
   fChain->SetBranchAddress("GenJet.SoftDroppedJet", GenJet_SoftDroppedJet, &b_GenJet_SoftDroppedJet);
   fChain->SetBranchAddress("GenJet.SoftDroppedSubJet1", GenJet_SoftDroppedSubJet1, &b_GenJet_SoftDroppedSubJet1);
   fChain->SetBranchAddress("GenJet.SoftDroppedSubJet2", GenJet_SoftDroppedSubJet2, &b_GenJet_SoftDroppedSubJet2);
   fChain->SetBranchAddress("GenJet.TrimmedP4[5]", GenJet_TrimmedP4, &b_GenJet_TrimmedP4);
   fChain->SetBranchAddress("GenJet.PrunedP4[5]", GenJet_PrunedP4, &b_GenJet_PrunedP4);
   fChain->SetBranchAddress("GenJet.SoftDroppedP4[5]", GenJet_SoftDroppedP4, &b_GenJet_SoftDroppedP4);
   fChain->SetBranchAddress("GenJet.NSubJetsTrimmed", GenJet_NSubJetsTrimmed, &b_GenJet_NSubJetsTrimmed);
   fChain->SetBranchAddress("GenJet.NSubJetsPruned", GenJet_NSubJetsPruned, &b_GenJet_NSubJetsPruned);
   fChain->SetBranchAddress("GenJet.NSubJetsSoftDropped", GenJet_NSubJetsSoftDropped, &b_GenJet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("GenJet.ExclYmerge23", GenJet_ExclYmerge23, &b_GenJet_ExclYmerge23);
   fChain->SetBranchAddress("GenJet.ExclYmerge34", GenJet_ExclYmerge34, &b_GenJet_ExclYmerge34);
   fChain->SetBranchAddress("GenJet.ExclYmerge45", GenJet_ExclYmerge45, &b_GenJet_ExclYmerge45);
   fChain->SetBranchAddress("GenJet.ExclYmerge56", GenJet_ExclYmerge56, &b_GenJet_ExclYmerge56);
   fChain->SetBranchAddress("GenJet.Constituents", GenJet_Constituents, &b_GenJet_Constituents);
   fChain->SetBranchAddress("GenJet.Particles", GenJet_Particles, &b_GenJet_Particles);
   fChain->SetBranchAddress("GenJet.Area", GenJet_Area, &b_GenJet_Area);
   fChain->SetBranchAddress("GenJet_size", &GenJet_size, &b_GenJet_size);
   fChain->SetBranchAddress("GenPhoton", &GenPhoton_, &b_GenPhoton_);
   fChain->SetBranchAddress("GenPhoton.fUniqueID", GenPhoton_fUniqueID, &b_GenPhoton_fUniqueID);
   fChain->SetBranchAddress("GenPhoton.fBits", GenPhoton_fBits, &b_GenPhoton_fBits);
   fChain->SetBranchAddress("GenPhoton.PT", GenPhoton_PT, &b_GenPhoton_PT);
   fChain->SetBranchAddress("GenPhoton.Eta", GenPhoton_Eta, &b_GenPhoton_Eta);
   fChain->SetBranchAddress("GenPhoton.Phi", GenPhoton_Phi, &b_GenPhoton_Phi);
   fChain->SetBranchAddress("GenPhoton.E", GenPhoton_E, &b_GenPhoton_E);
   fChain->SetBranchAddress("GenPhoton.T", GenPhoton_T, &b_GenPhoton_T);
   fChain->SetBranchAddress("GenPhoton.EhadOverEem", GenPhoton_EhadOverEem, &b_GenPhoton_EhadOverEem);
   fChain->SetBranchAddress("GenPhoton.Particles", GenPhoton_Particles, &b_GenPhoton_Particles);
   fChain->SetBranchAddress("GenPhoton.IsolationVar", GenPhoton_IsolationVar, &b_GenPhoton_IsolationVar);
   fChain->SetBranchAddress("GenPhoton.IsolationVarRhoCorr", GenPhoton_IsolationVarRhoCorr, &b_GenPhoton_IsolationVarRhoCorr);
   fChain->SetBranchAddress("GenPhoton.SumPtCharged", GenPhoton_SumPtCharged, &b_GenPhoton_SumPtCharged);
   fChain->SetBranchAddress("GenPhoton.SumPtNeutral", GenPhoton_SumPtNeutral, &b_GenPhoton_SumPtNeutral);
   fChain->SetBranchAddress("GenPhoton.SumPtChargedPU", GenPhoton_SumPtChargedPU, &b_GenPhoton_SumPtChargedPU);
   fChain->SetBranchAddress("GenPhoton.SumPt", GenPhoton_SumPt, &b_GenPhoton_SumPt);
   fChain->SetBranchAddress("GenPhoton.Status", GenPhoton_Status, &b_GenPhoton_Status);
   fChain->SetBranchAddress("GenPhoton_size", &GenPhoton_size, &b_GenPhoton_size);
   fChain->SetBranchAddress("GenBhadrons", &GenBhadrons_, &b_GenBhadrons_);
   fChain->SetBranchAddress("GenBhadrons.fUniqueID", GenBhadrons_fUniqueID, &b_GenBhadrons_fUniqueID);
   fChain->SetBranchAddress("GenBhadrons.fBits", GenBhadrons_fBits, &b_GenBhadrons_fBits);
   fChain->SetBranchAddress("GenBhadrons.PID", GenBhadrons_PID, &b_GenBhadrons_PID);
   fChain->SetBranchAddress("GenBhadrons.Status", GenBhadrons_Status, &b_GenBhadrons_Status);
   fChain->SetBranchAddress("GenBhadrons.IsPU", GenBhadrons_IsPU, &b_GenBhadrons_IsPU);
   fChain->SetBranchAddress("GenBhadrons.M1", GenBhadrons_M1, &b_GenBhadrons_M1);
   fChain->SetBranchAddress("GenBhadrons.M2", GenBhadrons_M2, &b_GenBhadrons_M2);
   fChain->SetBranchAddress("GenBhadrons.D1", GenBhadrons_D1, &b_GenBhadrons_D1);
   fChain->SetBranchAddress("GenBhadrons.D2", GenBhadrons_D2, &b_GenBhadrons_D2);
   fChain->SetBranchAddress("GenBhadrons.Charge", GenBhadrons_Charge, &b_GenBhadrons_Charge);
   fChain->SetBranchAddress("GenBhadrons.Mass", GenBhadrons_Mass, &b_GenBhadrons_Mass);
   fChain->SetBranchAddress("GenBhadrons.E", GenBhadrons_E, &b_GenBhadrons_E);
   fChain->SetBranchAddress("GenBhadrons.Px", GenBhadrons_Px, &b_GenBhadrons_Px);
   fChain->SetBranchAddress("GenBhadrons.Py", GenBhadrons_Py, &b_GenBhadrons_Py);
   fChain->SetBranchAddress("GenBhadrons.Pz", GenBhadrons_Pz, &b_GenBhadrons_Pz);
   fChain->SetBranchAddress("GenBhadrons.P", GenBhadrons_P, &b_GenBhadrons_P);
   fChain->SetBranchAddress("GenBhadrons.PT", GenBhadrons_PT, &b_GenBhadrons_PT);
   fChain->SetBranchAddress("GenBhadrons.Eta", GenBhadrons_Eta, &b_GenBhadrons_Eta);
   fChain->SetBranchAddress("GenBhadrons.Phi", GenBhadrons_Phi, &b_GenBhadrons_Phi);
   fChain->SetBranchAddress("GenBhadrons.Rapidity", GenBhadrons_Rapidity, &b_GenBhadrons_Rapidity);
   fChain->SetBranchAddress("GenBhadrons.CtgTheta", GenBhadrons_CtgTheta, &b_GenBhadrons_CtgTheta);
   fChain->SetBranchAddress("GenBhadrons.D0", GenBhadrons_D0, &b_GenBhadrons_D0);
   fChain->SetBranchAddress("GenBhadrons.DZ", GenBhadrons_DZ, &b_GenBhadrons_DZ);
   fChain->SetBranchAddress("GenBhadrons.T", GenBhadrons_T, &b_GenBhadrons_T);
   fChain->SetBranchAddress("GenBhadrons.X", GenBhadrons_X, &b_GenBhadrons_X);
   fChain->SetBranchAddress("GenBhadrons.Y", GenBhadrons_Y, &b_GenBhadrons_Y);
   fChain->SetBranchAddress("GenBhadrons.Z", GenBhadrons_Z, &b_GenBhadrons_Z);
   fChain->SetBranchAddress("GenBhadrons_size", &GenBhadrons_size, &b_GenBhadrons_size);
   fChain->SetBranchAddress("GenElectron", &GenElectron_, &b_GenElectron_);
   fChain->SetBranchAddress("GenElectron.fUniqueID", GenElectron_fUniqueID, &b_GenElectron_fUniqueID);
   fChain->SetBranchAddress("GenElectron.fBits", GenElectron_fBits, &b_GenElectron_fBits);
   fChain->SetBranchAddress("GenElectron.PT", GenElectron_PT, &b_GenElectron_PT);
   fChain->SetBranchAddress("GenElectron.Eta", GenElectron_Eta, &b_GenElectron_Eta);
   fChain->SetBranchAddress("GenElectron.Phi", GenElectron_Phi, &b_GenElectron_Phi);
   fChain->SetBranchAddress("GenElectron.T", GenElectron_T, &b_GenElectron_T);
   fChain->SetBranchAddress("GenElectron.Charge", GenElectron_Charge, &b_GenElectron_Charge);
   fChain->SetBranchAddress("GenElectron.EhadOverEem", GenElectron_EhadOverEem, &b_GenElectron_EhadOverEem);
   fChain->SetBranchAddress("GenElectron.Particle", GenElectron_Particle, &b_GenElectron_Particle);
   fChain->SetBranchAddress("GenElectron.IsolationVar", GenElectron_IsolationVar, &b_GenElectron_IsolationVar);
   fChain->SetBranchAddress("GenElectron.IsolationVarRhoCorr", GenElectron_IsolationVarRhoCorr, &b_GenElectron_IsolationVarRhoCorr);
   fChain->SetBranchAddress("GenElectron.SumPtCharged", GenElectron_SumPtCharged, &b_GenElectron_SumPtCharged);
   fChain->SetBranchAddress("GenElectron.SumPtNeutral", GenElectron_SumPtNeutral, &b_GenElectron_SumPtNeutral);
   fChain->SetBranchAddress("GenElectron.SumPtChargedPU", GenElectron_SumPtChargedPU, &b_GenElectron_SumPtChargedPU);
   fChain->SetBranchAddress("GenElectron.SumPt", GenElectron_SumPt, &b_GenElectron_SumPt);
   fChain->SetBranchAddress("GenElectron.D0", GenElectron_D0, &b_GenElectron_D0);
   fChain->SetBranchAddress("GenElectron.DZ", GenElectron_DZ, &b_GenElectron_DZ);
   fChain->SetBranchAddress("GenElectron.ErrorD0", GenElectron_ErrorD0, &b_GenElectron_ErrorD0);
   fChain->SetBranchAddress("GenElectron.ErrorDZ", GenElectron_ErrorDZ, &b_GenElectron_ErrorDZ);
   fChain->SetBranchAddress("GenElectron_size", &GenElectron_size, &b_GenElectron_size);
   fChain->SetBranchAddress("GenMuon", &GenMuon_, &b_GenMuon_);
   fChain->SetBranchAddress("GenMuon.fUniqueID", GenMuon_fUniqueID, &b_GenMuon_fUniqueID);
   fChain->SetBranchAddress("GenMuon.fBits", GenMuon_fBits, &b_GenMuon_fBits);
   fChain->SetBranchAddress("GenMuon.PT", GenMuon_PT, &b_GenMuon_PT);
   fChain->SetBranchAddress("GenMuon.Eta", GenMuon_Eta, &b_GenMuon_Eta);
   fChain->SetBranchAddress("GenMuon.Phi", GenMuon_Phi, &b_GenMuon_Phi);
   fChain->SetBranchAddress("GenMuon.T", GenMuon_T, &b_GenMuon_T);
   fChain->SetBranchAddress("GenMuon.Charge", GenMuon_Charge, &b_GenMuon_Charge);
   fChain->SetBranchAddress("GenMuon.Particle", GenMuon_Particle, &b_GenMuon_Particle);
   fChain->SetBranchAddress("GenMuon.IsolationVar", GenMuon_IsolationVar, &b_GenMuon_IsolationVar);
   fChain->SetBranchAddress("GenMuon.IsolationVarRhoCorr", GenMuon_IsolationVarRhoCorr, &b_GenMuon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("GenMuon.SumPtCharged", GenMuon_SumPtCharged, &b_GenMuon_SumPtCharged);
   fChain->SetBranchAddress("GenMuon.SumPtNeutral", GenMuon_SumPtNeutral, &b_GenMuon_SumPtNeutral);
   fChain->SetBranchAddress("GenMuon.SumPtChargedPU", GenMuon_SumPtChargedPU, &b_GenMuon_SumPtChargedPU);
   fChain->SetBranchAddress("GenMuon.SumPt", GenMuon_SumPt, &b_GenMuon_SumPt);
   fChain->SetBranchAddress("GenMuon.D0", GenMuon_D0, &b_GenMuon_D0);
   fChain->SetBranchAddress("GenMuon.DZ", GenMuon_DZ, &b_GenMuon_DZ);
   fChain->SetBranchAddress("GenMuon.ErrorD0", GenMuon_ErrorD0, &b_GenMuon_ErrorD0);
   fChain->SetBranchAddress("GenMuon.ErrorDZ", GenMuon_ErrorDZ, &b_GenMuon_ErrorDZ);
   fChain->SetBranchAddress("GenMuon_size", &GenMuon_size, &b_GenMuon_size);
   fChain->SetBranchAddress("GenTop", &GenTop_, &b_GenTop_);
   fChain->SetBranchAddress("GenTop.fUniqueID", GenTop_fUniqueID, &b_GenTop_fUniqueID);
   fChain->SetBranchAddress("GenTop.fBits", GenTop_fBits, &b_GenTop_fBits);
   fChain->SetBranchAddress("GenTop.PID", GenTop_PID, &b_GenTop_PID);
   fChain->SetBranchAddress("GenTop.Status", GenTop_Status, &b_GenTop_Status);
   fChain->SetBranchAddress("GenTop.IsPU", GenTop_IsPU, &b_GenTop_IsPU);
   fChain->SetBranchAddress("GenTop.M1", GenTop_M1, &b_GenTop_M1);
   fChain->SetBranchAddress("GenTop.M2", GenTop_M2, &b_GenTop_M2);
   fChain->SetBranchAddress("GenTop.D1", GenTop_D1, &b_GenTop_D1);
   fChain->SetBranchAddress("GenTop.D2", GenTop_D2, &b_GenTop_D2);
   fChain->SetBranchAddress("GenTop.Charge", GenTop_Charge, &b_GenTop_Charge);
   fChain->SetBranchAddress("GenTop.Mass", GenTop_Mass, &b_GenTop_Mass);
   fChain->SetBranchAddress("GenTop.E", GenTop_E, &b_GenTop_E);
   fChain->SetBranchAddress("GenTop.Px", GenTop_Px, &b_GenTop_Px);
   fChain->SetBranchAddress("GenTop.Py", GenTop_Py, &b_GenTop_Py);
   fChain->SetBranchAddress("GenTop.Pz", GenTop_Pz, &b_GenTop_Pz);
   fChain->SetBranchAddress("GenTop.P", GenTop_P, &b_GenTop_P);
   fChain->SetBranchAddress("GenTop.PT", GenTop_PT, &b_GenTop_PT);
   fChain->SetBranchAddress("GenTop.Eta", GenTop_Eta, &b_GenTop_Eta);
   fChain->SetBranchAddress("GenTop.Phi", GenTop_Phi, &b_GenTop_Phi);
   fChain->SetBranchAddress("GenTop.Rapidity", GenTop_Rapidity, &b_GenTop_Rapidity);
   fChain->SetBranchAddress("GenTop.CtgTheta", GenTop_CtgTheta, &b_GenTop_CtgTheta);
   fChain->SetBranchAddress("GenTop.D0", GenTop_D0, &b_GenTop_D0);
   fChain->SetBranchAddress("GenTop.DZ", GenTop_DZ, &b_GenTop_DZ);
   fChain->SetBranchAddress("GenTop.T", GenTop_T, &b_GenTop_T);
   fChain->SetBranchAddress("GenTop.X", GenTop_X, &b_GenTop_X);
   fChain->SetBranchAddress("GenTop.Y", GenTop_Y, &b_GenTop_Y);
   fChain->SetBranchAddress("GenTop.Z", GenTop_Z, &b_GenTop_Z);
   fChain->SetBranchAddress("GenTop_size", &GenTop_size, &b_GenTop_size);
   fChain->SetBranchAddress("GenMissingET", &GenMissingET_, &b_GenMissingET_);
   fChain->SetBranchAddress("GenMissingET.fUniqueID", GenMissingET_fUniqueID, &b_GenMissingET_fUniqueID);
   fChain->SetBranchAddress("GenMissingET.fBits", GenMissingET_fBits, &b_GenMissingET_fBits);
   fChain->SetBranchAddress("GenMissingET.MET", GenMissingET_MET, &b_GenMissingET_MET);
   fChain->SetBranchAddress("GenMissingET.Eta", GenMissingET_Eta, &b_GenMissingET_Eta);
   fChain->SetBranchAddress("GenMissingET.Phi", GenMissingET_Phi, &b_GenMissingET_Phi);
   fChain->SetBranchAddress("GenMissingET_size", &GenMissingET_size, &b_GenMissingET_size);
   fChain->SetBranchAddress("GenZPrime", &GenZPrime_, &b_GenZPrime_);
   fChain->SetBranchAddress("GenZPrime.fUniqueID", &GenZPrime_fUniqueID, &b_GenZPrime_fUniqueID);
   fChain->SetBranchAddress("GenZPrime.fBits", &GenZPrime_fBits, &b_GenZPrime_fBits);
   fChain->SetBranchAddress("GenZPrime.PID", &GenZPrime_PID, &b_GenZPrime_PID);
   fChain->SetBranchAddress("GenZPrime.Status", &GenZPrime_Status, &b_GenZPrime_Status);
   fChain->SetBranchAddress("GenZPrime.IsPU", &GenZPrime_IsPU, &b_GenZPrime_IsPU);
   fChain->SetBranchAddress("GenZPrime.M1", &GenZPrime_M1, &b_GenZPrime_M1);
   fChain->SetBranchAddress("GenZPrime.M2", &GenZPrime_M2, &b_GenZPrime_M2);
   fChain->SetBranchAddress("GenZPrime.D1", &GenZPrime_D1, &b_GenZPrime_D1);
   fChain->SetBranchAddress("GenZPrime.D2", &GenZPrime_D2, &b_GenZPrime_D2);
   fChain->SetBranchAddress("GenZPrime.Charge", &GenZPrime_Charge, &b_GenZPrime_Charge);
   fChain->SetBranchAddress("GenZPrime.Mass", &GenZPrime_Mass, &b_GenZPrime_Mass);
   fChain->SetBranchAddress("GenZPrime.E", &GenZPrime_E, &b_GenZPrime_E);
   fChain->SetBranchAddress("GenZPrime.Px", &GenZPrime_Px, &b_GenZPrime_Px);
   fChain->SetBranchAddress("GenZPrime.Py", &GenZPrime_Py, &b_GenZPrime_Py);
   fChain->SetBranchAddress("GenZPrime.Pz", &GenZPrime_Pz, &b_GenZPrime_Pz);
   fChain->SetBranchAddress("GenZPrime.P", &GenZPrime_P, &b_GenZPrime_P);
   fChain->SetBranchAddress("GenZPrime.PT", &GenZPrime_PT, &b_GenZPrime_PT);
   fChain->SetBranchAddress("GenZPrime.Eta", &GenZPrime_Eta, &b_GenZPrime_Eta);
   fChain->SetBranchAddress("GenZPrime.Phi", &GenZPrime_Phi, &b_GenZPrime_Phi);
   fChain->SetBranchAddress("GenZPrime.Rapidity", &GenZPrime_Rapidity, &b_GenZPrime_Rapidity);
   fChain->SetBranchAddress("GenZPrime.CtgTheta", &GenZPrime_CtgTheta, &b_GenZPrime_CtgTheta);
   fChain->SetBranchAddress("GenZPrime.D0", &GenZPrime_D0, &b_GenZPrime_D0);
   fChain->SetBranchAddress("GenZPrime.DZ", &GenZPrime_DZ, &b_GenZPrime_DZ);
   fChain->SetBranchAddress("GenZPrime.T", &GenZPrime_T, &b_GenZPrime_T);
   fChain->SetBranchAddress("GenZPrime.X", &GenZPrime_X, &b_GenZPrime_X);
   fChain->SetBranchAddress("GenZPrime.Y", &GenZPrime_Y, &b_GenZPrime_Y);
   fChain->SetBranchAddress("GenZPrime.Z", &GenZPrime_Z, &b_GenZPrime_Z);
   fChain->SetBranchAddress("GenZPrime_size", &GenZPrime_size, &b_GenZPrime_size);
   fChain->SetBranchAddress("GenW", &GenW_, &b_GenW_);
   fChain->SetBranchAddress("GenW.fUniqueID", GenW_fUniqueID, &b_GenW_fUniqueID);
   fChain->SetBranchAddress("GenW.fBits", GenW_fBits, &b_GenW_fBits);
   fChain->SetBranchAddress("GenW.PID", GenW_PID, &b_GenW_PID);
   fChain->SetBranchAddress("GenW.Status", GenW_Status, &b_GenW_Status);
   fChain->SetBranchAddress("GenW.IsPU", GenW_IsPU, &b_GenW_IsPU);
   fChain->SetBranchAddress("GenW.M1", GenW_M1, &b_GenW_M1);
   fChain->SetBranchAddress("GenW.M2", GenW_M2, &b_GenW_M2);
   fChain->SetBranchAddress("GenW.D1", GenW_D1, &b_GenW_D1);
   fChain->SetBranchAddress("GenW.D2", GenW_D2, &b_GenW_D2);
   fChain->SetBranchAddress("GenW.Charge", GenW_Charge, &b_GenW_Charge);
   fChain->SetBranchAddress("GenW.Mass", GenW_Mass, &b_GenW_Mass);
   fChain->SetBranchAddress("GenW.E", GenW_E, &b_GenW_E);
   fChain->SetBranchAddress("GenW.Px", GenW_Px, &b_GenW_Px);
   fChain->SetBranchAddress("GenW.Py", GenW_Py, &b_GenW_Py);
   fChain->SetBranchAddress("GenW.Pz", GenW_Pz, &b_GenW_Pz);
   fChain->SetBranchAddress("GenW.P", GenW_P, &b_GenW_P);
   fChain->SetBranchAddress("GenW.PT", GenW_PT, &b_GenW_PT);
   fChain->SetBranchAddress("GenW.Eta", GenW_Eta, &b_GenW_Eta);
   fChain->SetBranchAddress("GenW.Phi", GenW_Phi, &b_GenW_Phi);
   fChain->SetBranchAddress("GenW.Rapidity", GenW_Rapidity, &b_GenW_Rapidity);
   fChain->SetBranchAddress("GenW.CtgTheta", GenW_CtgTheta, &b_GenW_CtgTheta);
   fChain->SetBranchAddress("GenW.D0", GenW_D0, &b_GenW_D0);
   fChain->SetBranchAddress("GenW.DZ", GenW_DZ, &b_GenW_DZ);
   fChain->SetBranchAddress("GenW.T", GenW_T, &b_GenW_T);
   fChain->SetBranchAddress("GenW.X", GenW_X, &b_GenW_X);
   fChain->SetBranchAddress("GenW.Y", GenW_Y, &b_GenW_Y);
   fChain->SetBranchAddress("GenW.Z", GenW_Z, &b_GenW_Z);
   fChain->SetBranchAddress("GenW_size", &GenW_size, &b_GenW_size);
   fChain->SetBranchAddress("Jet", &Jet_, &b_Jet_);
   fChain->SetBranchAddress("Jet.fUniqueID", Jet_fUniqueID, &b_Jet_fUniqueID);
   fChain->SetBranchAddress("Jet.fBits", Jet_fBits, &b_Jet_fBits);
   fChain->SetBranchAddress("Jet.PT", Jet_PT, &b_Jet_PT);
   fChain->SetBranchAddress("Jet.Eta", Jet_Eta, &b_Jet_Eta);
   fChain->SetBranchAddress("Jet.Phi", Jet_Phi, &b_Jet_Phi);
   fChain->SetBranchAddress("Jet.T", Jet_T, &b_Jet_T);
   fChain->SetBranchAddress("Jet.Mass", Jet_Mass, &b_Jet_Mass);
   fChain->SetBranchAddress("Jet.DeltaEta", Jet_DeltaEta, &b_Jet_DeltaEta);
   fChain->SetBranchAddress("Jet.DeltaPhi", Jet_DeltaPhi, &b_Jet_DeltaPhi);
   fChain->SetBranchAddress("Jet.Flavor", Jet_Flavor, &b_Jet_Flavor);
   fChain->SetBranchAddress("Jet.FlavorAlgo", Jet_FlavorAlgo, &b_Jet_FlavorAlgo);
   fChain->SetBranchAddress("Jet.FlavorPhys", Jet_FlavorPhys, &b_Jet_FlavorPhys);
   fChain->SetBranchAddress("Jet.BTag", Jet_BTag, &b_Jet_BTag);
   fChain->SetBranchAddress("Jet.BTagAlgo", Jet_BTagAlgo, &b_Jet_BTagAlgo);
   fChain->SetBranchAddress("Jet.BTagPhys", Jet_BTagPhys, &b_Jet_BTagPhys);
   fChain->SetBranchAddress("Jet.TauTag", Jet_TauTag, &b_Jet_TauTag);
   fChain->SetBranchAddress("Jet.TauWeight", Jet_TauWeight, &b_Jet_TauWeight);
   fChain->SetBranchAddress("Jet.Charge", Jet_Charge, &b_Jet_Charge);
   fChain->SetBranchAddress("Jet.EhadOverEem", Jet_EhadOverEem, &b_Jet_EhadOverEem);
   fChain->SetBranchAddress("Jet.NCharged", Jet_NCharged, &b_Jet_NCharged);
   fChain->SetBranchAddress("Jet.NNeutrals", Jet_NNeutrals, &b_Jet_NNeutrals);
   fChain->SetBranchAddress("Jet.Beta", Jet_Beta, &b_Jet_Beta);
   fChain->SetBranchAddress("Jet.BetaStar", Jet_BetaStar, &b_Jet_BetaStar);
   fChain->SetBranchAddress("Jet.MeanSqDeltaR", Jet_MeanSqDeltaR, &b_Jet_MeanSqDeltaR);
   fChain->SetBranchAddress("Jet.PTD", Jet_PTD, &b_Jet_PTD);
   fChain->SetBranchAddress("Jet.FracPt[5]", Jet_FracPt, &b_Jet_FracPt);
   fChain->SetBranchAddress("Jet.Tau[5]", Jet_Tau, &b_Jet_Tau);
   fChain->SetBranchAddress("Jet.SoftDroppedJet", Jet_SoftDroppedJet, &b_Jet_SoftDroppedJet);
   fChain->SetBranchAddress("Jet.SoftDroppedSubJet1", Jet_SoftDroppedSubJet1, &b_Jet_SoftDroppedSubJet1);
   fChain->SetBranchAddress("Jet.SoftDroppedSubJet2", Jet_SoftDroppedSubJet2, &b_Jet_SoftDroppedSubJet2);
   fChain->SetBranchAddress("Jet.TrimmedP4[5]", Jet_TrimmedP4, &b_Jet_TrimmedP4);
   fChain->SetBranchAddress("Jet.PrunedP4[5]", Jet_PrunedP4, &b_Jet_PrunedP4);
   fChain->SetBranchAddress("Jet.SoftDroppedP4[5]", Jet_SoftDroppedP4, &b_Jet_SoftDroppedP4);
   fChain->SetBranchAddress("Jet.NSubJetsTrimmed", Jet_NSubJetsTrimmed, &b_Jet_NSubJetsTrimmed);
   fChain->SetBranchAddress("Jet.NSubJetsPruned", Jet_NSubJetsPruned, &b_Jet_NSubJetsPruned);
   fChain->SetBranchAddress("Jet.NSubJetsSoftDropped", Jet_NSubJetsSoftDropped, &b_Jet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("Jet.ExclYmerge23", Jet_ExclYmerge23, &b_Jet_ExclYmerge23);
   fChain->SetBranchAddress("Jet.ExclYmerge34", Jet_ExclYmerge34, &b_Jet_ExclYmerge34);
   fChain->SetBranchAddress("Jet.ExclYmerge45", Jet_ExclYmerge45, &b_Jet_ExclYmerge45);
   fChain->SetBranchAddress("Jet.ExclYmerge56", Jet_ExclYmerge56, &b_Jet_ExclYmerge56);
   fChain->SetBranchAddress("Jet.Constituents", Jet_Constituents, &b_Jet_Constituents);
   fChain->SetBranchAddress("Jet.Particles", Jet_Particles, &b_Jet_Particles);
   fChain->SetBranchAddress("Jet.Area", Jet_Area, &b_Jet_Area);
   fChain->SetBranchAddress("Jet_size", &Jet_size, &b_Jet_size);
   fChain->SetBranchAddress("LJet", &LJet_, &b_LJet_);
   fChain->SetBranchAddress("LJet.fUniqueID", LJet_fUniqueID, &b_LJet_fUniqueID);
   fChain->SetBranchAddress("LJet.fBits", LJet_fBits, &b_LJet_fBits);
   fChain->SetBranchAddress("LJet.PT", LJet_PT, &b_LJet_PT);
   fChain->SetBranchAddress("LJet.Eta", LJet_Eta, &b_LJet_Eta);
   fChain->SetBranchAddress("LJet.Phi", LJet_Phi, &b_LJet_Phi);
   fChain->SetBranchAddress("LJet.T", LJet_T, &b_LJet_T);
   fChain->SetBranchAddress("LJet.Mass", LJet_Mass, &b_LJet_Mass);
   fChain->SetBranchAddress("LJet.DeltaEta", LJet_DeltaEta, &b_LJet_DeltaEta);
   fChain->SetBranchAddress("LJet.DeltaPhi", LJet_DeltaPhi, &b_LJet_DeltaPhi);
   fChain->SetBranchAddress("LJet.Flavor", LJet_Flavor, &b_LJet_Flavor);
   fChain->SetBranchAddress("LJet.FlavorAlgo", LJet_FlavorAlgo, &b_LJet_FlavorAlgo);
   fChain->SetBranchAddress("LJet.FlavorPhys", LJet_FlavorPhys, &b_LJet_FlavorPhys);
   fChain->SetBranchAddress("LJet.BTag", LJet_BTag, &b_LJet_BTag);
   fChain->SetBranchAddress("LJet.BTagAlgo", LJet_BTagAlgo, &b_LJet_BTagAlgo);
   fChain->SetBranchAddress("LJet.BTagPhys", LJet_BTagPhys, &b_LJet_BTagPhys);
   fChain->SetBranchAddress("LJet.TauTag", LJet_TauTag, &b_LJet_TauTag);
   fChain->SetBranchAddress("LJet.TauWeight", LJet_TauWeight, &b_LJet_TauWeight);
   fChain->SetBranchAddress("LJet.Charge", LJet_Charge, &b_LJet_Charge);
   fChain->SetBranchAddress("LJet.EhadOverEem", LJet_EhadOverEem, &b_LJet_EhadOverEem);
   fChain->SetBranchAddress("LJet.NCharged", LJet_NCharged, &b_LJet_NCharged);
   fChain->SetBranchAddress("LJet.NNeutrals", LJet_NNeutrals, &b_LJet_NNeutrals);
   fChain->SetBranchAddress("LJet.Beta", LJet_Beta, &b_LJet_Beta);
   fChain->SetBranchAddress("LJet.BetaStar", LJet_BetaStar, &b_LJet_BetaStar);
   fChain->SetBranchAddress("LJet.MeanSqDeltaR", LJet_MeanSqDeltaR, &b_LJet_MeanSqDeltaR);
   fChain->SetBranchAddress("LJet.PTD", LJet_PTD, &b_LJet_PTD);
   fChain->SetBranchAddress("LJet.FracPt[5]", LJet_FracPt, &b_LJet_FracPt);
   fChain->SetBranchAddress("LJet.Tau[5]", LJet_Tau, &b_LJet_Tau);
   fChain->SetBranchAddress("LJet.SoftDroppedJet", LJet_SoftDroppedJet, &b_LJet_SoftDroppedJet);
   fChain->SetBranchAddress("LJet.SoftDroppedSubJet1", LJet_SoftDroppedSubJet1, &b_LJet_SoftDroppedSubJet1);
   fChain->SetBranchAddress("LJet.SoftDroppedSubJet2", LJet_SoftDroppedSubJet2, &b_LJet_SoftDroppedSubJet2);
   fChain->SetBranchAddress("LJet.TrimmedP4[5]", LJet_TrimmedP4, &b_LJet_TrimmedP4);
   fChain->SetBranchAddress("LJet.PrunedP4[5]", LJet_PrunedP4, &b_LJet_PrunedP4);
   fChain->SetBranchAddress("LJet.SoftDroppedP4[5]", LJet_SoftDroppedP4, &b_LJet_SoftDroppedP4);
   fChain->SetBranchAddress("LJet.NSubJetsTrimmed", LJet_NSubJetsTrimmed, &b_LJet_NSubJetsTrimmed);
   fChain->SetBranchAddress("LJet.NSubJetsPruned", LJet_NSubJetsPruned, &b_LJet_NSubJetsPruned);
   fChain->SetBranchAddress("LJet.NSubJetsSoftDropped", LJet_NSubJetsSoftDropped, &b_LJet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("LJet.ExclYmerge23", LJet_ExclYmerge23, &b_LJet_ExclYmerge23);
   fChain->SetBranchAddress("LJet.ExclYmerge34", LJet_ExclYmerge34, &b_LJet_ExclYmerge34);
   fChain->SetBranchAddress("LJet.ExclYmerge45", LJet_ExclYmerge45, &b_LJet_ExclYmerge45);
   fChain->SetBranchAddress("LJet.ExclYmerge56", LJet_ExclYmerge56, &b_LJet_ExclYmerge56);
   fChain->SetBranchAddress("LJet.Constituents", LJet_Constituents, &b_LJet_Constituents);
   fChain->SetBranchAddress("LJet.Particles", LJet_Particles, &b_LJet_Particles);
   fChain->SetBranchAddress("LJet.Area", LJet_Area, &b_LJet_Area);
   fChain->SetBranchAddress("LJet_size", &LJet_size, &b_LJet_size);
   fChain->SetBranchAddress("JetJES", &JetJES_, &b_JetJES_);
   fChain->SetBranchAddress("JetJES.fUniqueID", JetJES_fUniqueID, &b_JetJES_fUniqueID);
   fChain->SetBranchAddress("JetJES.fBits", JetJES_fBits, &b_JetJES_fBits);
   fChain->SetBranchAddress("JetJES.PT", JetJES_PT, &b_JetJES_PT);
   fChain->SetBranchAddress("JetJES.Eta", JetJES_Eta, &b_JetJES_Eta);
   fChain->SetBranchAddress("JetJES.Phi", JetJES_Phi, &b_JetJES_Phi);
   fChain->SetBranchAddress("JetJES.T", JetJES_T, &b_JetJES_T);
   fChain->SetBranchAddress("JetJES.Mass", JetJES_Mass, &b_JetJES_Mass);
   fChain->SetBranchAddress("JetJES.DeltaEta", JetJES_DeltaEta, &b_JetJES_DeltaEta);
   fChain->SetBranchAddress("JetJES.DeltaPhi", JetJES_DeltaPhi, &b_JetJES_DeltaPhi);
   fChain->SetBranchAddress("JetJES.Flavor", JetJES_Flavor, &b_JetJES_Flavor);
   fChain->SetBranchAddress("JetJES.FlavorAlgo", JetJES_FlavorAlgo, &b_JetJES_FlavorAlgo);
   fChain->SetBranchAddress("JetJES.FlavorPhys", JetJES_FlavorPhys, &b_JetJES_FlavorPhys);
   fChain->SetBranchAddress("JetJES.BTag", JetJES_BTag, &b_JetJES_BTag);
   fChain->SetBranchAddress("JetJES.BTagAlgo", JetJES_BTagAlgo, &b_JetJES_BTagAlgo);
   fChain->SetBranchAddress("JetJES.BTagPhys", JetJES_BTagPhys, &b_JetJES_BTagPhys);
   fChain->SetBranchAddress("JetJES.TauTag", JetJES_TauTag, &b_JetJES_TauTag);
   fChain->SetBranchAddress("JetJES.TauWeight", JetJES_TauWeight, &b_JetJES_TauWeight);
   fChain->SetBranchAddress("JetJES.Charge", JetJES_Charge, &b_JetJES_Charge);
   fChain->SetBranchAddress("JetJES.EhadOverEem", JetJES_EhadOverEem, &b_JetJES_EhadOverEem);
   fChain->SetBranchAddress("JetJES.NCharged", JetJES_NCharged, &b_JetJES_NCharged);
   fChain->SetBranchAddress("JetJES.NNeutrals", JetJES_NNeutrals, &b_JetJES_NNeutrals);
   fChain->SetBranchAddress("JetJES.Beta", JetJES_Beta, &b_JetJES_Beta);
   fChain->SetBranchAddress("JetJES.BetaStar", JetJES_BetaStar, &b_JetJES_BetaStar);
   fChain->SetBranchAddress("JetJES.MeanSqDeltaR", JetJES_MeanSqDeltaR, &b_JetJES_MeanSqDeltaR);
   fChain->SetBranchAddress("JetJES.PTD", JetJES_PTD, &b_JetJES_PTD);
   fChain->SetBranchAddress("JetJES.FracPt[5]", JetJES_FracPt, &b_JetJES_FracPt);
   fChain->SetBranchAddress("JetJES.Tau[5]", JetJES_Tau, &b_JetJES_Tau);
   fChain->SetBranchAddress("JetJES.SoftDroppedJet", JetJES_SoftDroppedJet, &b_JetJES_SoftDroppedJet);
   fChain->SetBranchAddress("JetJES.SoftDroppedSubJet1", JetJES_SoftDroppedSubJet1, &b_JetJES_SoftDroppedSubJet1);
   fChain->SetBranchAddress("JetJES.SoftDroppedSubJet2", JetJES_SoftDroppedSubJet2, &b_JetJES_SoftDroppedSubJet2);
   fChain->SetBranchAddress("JetJES.TrimmedP4[5]", JetJES_TrimmedP4, &b_JetJES_TrimmedP4);
   fChain->SetBranchAddress("JetJES.PrunedP4[5]", JetJES_PrunedP4, &b_JetJES_PrunedP4);
   fChain->SetBranchAddress("JetJES.SoftDroppedP4[5]", JetJES_SoftDroppedP4, &b_JetJES_SoftDroppedP4);
   fChain->SetBranchAddress("JetJES.NSubJetsTrimmed", JetJES_NSubJetsTrimmed, &b_JetJES_NSubJetsTrimmed);
   fChain->SetBranchAddress("JetJES.NSubJetsPruned", JetJES_NSubJetsPruned, &b_JetJES_NSubJetsPruned);
   fChain->SetBranchAddress("JetJES.NSubJetsSoftDropped", JetJES_NSubJetsSoftDropped, &b_JetJES_NSubJetsSoftDropped);
   fChain->SetBranchAddress("JetJES.ExclYmerge23", JetJES_ExclYmerge23, &b_JetJES_ExclYmerge23);
   fChain->SetBranchAddress("JetJES.ExclYmerge34", JetJES_ExclYmerge34, &b_JetJES_ExclYmerge34);
   fChain->SetBranchAddress("JetJES.ExclYmerge45", JetJES_ExclYmerge45, &b_JetJES_ExclYmerge45);
   fChain->SetBranchAddress("JetJES.ExclYmerge56", JetJES_ExclYmerge56, &b_JetJES_ExclYmerge56);
   fChain->SetBranchAddress("JetJES.Constituents", JetJES_Constituents, &b_JetJES_Constituents);
   fChain->SetBranchAddress("JetJES.Particles", JetJES_Particles, &b_JetJES_Particles);
   fChain->SetBranchAddress("JetJES.Area", JetJES_Area, &b_JetJES_Area);
   fChain->SetBranchAddress("JetJES_size", &JetJES_size, &b_JetJES_size);
   fChain->SetBranchAddress("LJetJES", &LJetJES_, &b_LJetJES_);
   fChain->SetBranchAddress("LJetJES.fUniqueID", LJetJES_fUniqueID, &b_LJetJES_fUniqueID);
   fChain->SetBranchAddress("LJetJES.fBits", LJetJES_fBits, &b_LJetJES_fBits);
   fChain->SetBranchAddress("LJetJES.PT", LJetJES_PT, &b_LJetJES_PT);
   fChain->SetBranchAddress("LJetJES.Eta", LJetJES_Eta, &b_LJetJES_Eta);
   fChain->SetBranchAddress("LJetJES.Phi", LJetJES_Phi, &b_LJetJES_Phi);
   fChain->SetBranchAddress("LJetJES.T", LJetJES_T, &b_LJetJES_T);
   fChain->SetBranchAddress("LJetJES.Mass", LJetJES_Mass, &b_LJetJES_Mass);
   fChain->SetBranchAddress("LJetJES.DeltaEta", LJetJES_DeltaEta, &b_LJetJES_DeltaEta);
   fChain->SetBranchAddress("LJetJES.DeltaPhi", LJetJES_DeltaPhi, &b_LJetJES_DeltaPhi);
   fChain->SetBranchAddress("LJetJES.Flavor", LJetJES_Flavor, &b_LJetJES_Flavor);
   fChain->SetBranchAddress("LJetJES.FlavorAlgo", LJetJES_FlavorAlgo, &b_LJetJES_FlavorAlgo);
   fChain->SetBranchAddress("LJetJES.FlavorPhys", LJetJES_FlavorPhys, &b_LJetJES_FlavorPhys);
   fChain->SetBranchAddress("LJetJES.BTag", LJetJES_BTag, &b_LJetJES_BTag);
   fChain->SetBranchAddress("LJetJES.BTagAlgo", LJetJES_BTagAlgo, &b_LJetJES_BTagAlgo);
   fChain->SetBranchAddress("LJetJES.BTagPhys", LJetJES_BTagPhys, &b_LJetJES_BTagPhys);
   fChain->SetBranchAddress("LJetJES.TauTag", LJetJES_TauTag, &b_LJetJES_TauTag);
   fChain->SetBranchAddress("LJetJES.TauWeight", LJetJES_TauWeight, &b_LJetJES_TauWeight);
   fChain->SetBranchAddress("LJetJES.Charge", LJetJES_Charge, &b_LJetJES_Charge);
   fChain->SetBranchAddress("LJetJES.EhadOverEem", LJetJES_EhadOverEem, &b_LJetJES_EhadOverEem);
   fChain->SetBranchAddress("LJetJES.NCharged", LJetJES_NCharged, &b_LJetJES_NCharged);
   fChain->SetBranchAddress("LJetJES.NNeutrals", LJetJES_NNeutrals, &b_LJetJES_NNeutrals);
   fChain->SetBranchAddress("LJetJES.Beta", LJetJES_Beta, &b_LJetJES_Beta);
   fChain->SetBranchAddress("LJetJES.BetaStar", LJetJES_BetaStar, &b_LJetJES_BetaStar);
   fChain->SetBranchAddress("LJetJES.MeanSqDeltaR", LJetJES_MeanSqDeltaR, &b_LJetJES_MeanSqDeltaR);
   fChain->SetBranchAddress("LJetJES.PTD", LJetJES_PTD, &b_LJetJES_PTD);
   fChain->SetBranchAddress("LJetJES.FracPt[5]", LJetJES_FracPt, &b_LJetJES_FracPt);
   fChain->SetBranchAddress("LJetJES.Tau[5]", LJetJES_Tau, &b_LJetJES_Tau);
   fChain->SetBranchAddress("LJetJES.SoftDroppedJet", LJetJES_SoftDroppedJet, &b_LJetJES_SoftDroppedJet);
   fChain->SetBranchAddress("LJetJES.SoftDroppedSubJet1", LJetJES_SoftDroppedSubJet1, &b_LJetJES_SoftDroppedSubJet1);
   fChain->SetBranchAddress("LJetJES.SoftDroppedSubJet2", LJetJES_SoftDroppedSubJet2, &b_LJetJES_SoftDroppedSubJet2);
   fChain->SetBranchAddress("LJetJES.TrimmedP4[5]", LJetJES_TrimmedP4, &b_LJetJES_TrimmedP4);
   fChain->SetBranchAddress("LJetJES.PrunedP4[5]", LJetJES_PrunedP4, &b_LJetJES_PrunedP4);
   fChain->SetBranchAddress("LJetJES.SoftDroppedP4[5]", LJetJES_SoftDroppedP4, &b_LJetJES_SoftDroppedP4);
   fChain->SetBranchAddress("LJetJES.NSubJetsTrimmed", LJetJES_NSubJetsTrimmed, &b_LJetJES_NSubJetsTrimmed);
   fChain->SetBranchAddress("LJetJES.NSubJetsPruned", LJetJES_NSubJetsPruned, &b_LJetJES_NSubJetsPruned);
   fChain->SetBranchAddress("LJetJES.NSubJetsSoftDropped", LJetJES_NSubJetsSoftDropped, &b_LJetJES_NSubJetsSoftDropped);
   fChain->SetBranchAddress("LJetJES.ExclYmerge23", LJetJES_ExclYmerge23, &b_LJetJES_ExclYmerge23);
   fChain->SetBranchAddress("LJetJES.ExclYmerge34", LJetJES_ExclYmerge34, &b_LJetJES_ExclYmerge34);
   fChain->SetBranchAddress("LJetJES.ExclYmerge45", LJetJES_ExclYmerge45, &b_LJetJES_ExclYmerge45);
   fChain->SetBranchAddress("LJetJES.ExclYmerge56", LJetJES_ExclYmerge56, &b_LJetJES_ExclYmerge56);
   fChain->SetBranchAddress("LJetJES.Constituents", LJetJES_Constituents, &b_LJetJES_Constituents);
   fChain->SetBranchAddress("LJetJES.Particles", LJetJES_Particles, &b_LJetJES_Particles);
   fChain->SetBranchAddress("LJetJES.Area", LJetJES_Area, &b_LJetJES_Area);
   fChain->SetBranchAddress("LJetJES_size", &LJetJES_size, &b_LJetJES_size);
   fChain->SetBranchAddress("Electron", &Electron_, &b_Electron_);
   fChain->SetBranchAddress("Electron.fUniqueID", Electron_fUniqueID, &b_Electron_fUniqueID);
   fChain->SetBranchAddress("Electron.fBits", Electron_fBits, &b_Electron_fBits);
   fChain->SetBranchAddress("Electron.PT", Electron_PT, &b_Electron_PT);
   fChain->SetBranchAddress("Electron.Eta", Electron_Eta, &b_Electron_Eta);
   fChain->SetBranchAddress("Electron.Phi", Electron_Phi, &b_Electron_Phi);
   fChain->SetBranchAddress("Electron.T", Electron_T, &b_Electron_T);
   fChain->SetBranchAddress("Electron.Charge", Electron_Charge, &b_Electron_Charge);
   fChain->SetBranchAddress("Electron.EhadOverEem", Electron_EhadOverEem, &b_Electron_EhadOverEem);
   fChain->SetBranchAddress("Electron.Particle", Electron_Particle, &b_Electron_Particle);
   fChain->SetBranchAddress("Electron.IsolationVar", Electron_IsolationVar, &b_Electron_IsolationVar);
   fChain->SetBranchAddress("Electron.IsolationVarRhoCorr", Electron_IsolationVarRhoCorr, &b_Electron_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Electron.SumPtCharged", Electron_SumPtCharged, &b_Electron_SumPtCharged);
   fChain->SetBranchAddress("Electron.SumPtNeutral", Electron_SumPtNeutral, &b_Electron_SumPtNeutral);
   fChain->SetBranchAddress("Electron.SumPtChargedPU", Electron_SumPtChargedPU, &b_Electron_SumPtChargedPU);
   fChain->SetBranchAddress("Electron.SumPt", Electron_SumPt, &b_Electron_SumPt);
   fChain->SetBranchAddress("Electron.D0", Electron_D0, &b_Electron_D0);
   fChain->SetBranchAddress("Electron.DZ", Electron_DZ, &b_Electron_DZ);
   fChain->SetBranchAddress("Electron.ErrorD0", Electron_ErrorD0, &b_Electron_ErrorD0);
   fChain->SetBranchAddress("Electron.ErrorDZ", Electron_ErrorDZ, &b_Electron_ErrorDZ);
   fChain->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
   fChain->SetBranchAddress("Photon", &Photon_, &b_Photon_);
   fChain->SetBranchAddress("Photon.fUniqueID", Photon_fUniqueID, &b_Photon_fUniqueID);
   fChain->SetBranchAddress("Photon.fBits", Photon_fBits, &b_Photon_fBits);
   fChain->SetBranchAddress("Photon.PT", Photon_PT, &b_Photon_PT);
   fChain->SetBranchAddress("Photon.Eta", Photon_Eta, &b_Photon_Eta);
   fChain->SetBranchAddress("Photon.Phi", Photon_Phi, &b_Photon_Phi);
   fChain->SetBranchAddress("Photon.E", Photon_E, &b_Photon_E);
   fChain->SetBranchAddress("Photon.T", Photon_T, &b_Photon_T);
   fChain->SetBranchAddress("Photon.EhadOverEem", Photon_EhadOverEem, &b_Photon_EhadOverEem);
   fChain->SetBranchAddress("Photon.Particles", Photon_Particles, &b_Photon_Particles);
   fChain->SetBranchAddress("Photon.IsolationVar", Photon_IsolationVar, &b_Photon_IsolationVar);
   fChain->SetBranchAddress("Photon.IsolationVarRhoCorr", Photon_IsolationVarRhoCorr, &b_Photon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Photon.SumPtCharged", Photon_SumPtCharged, &b_Photon_SumPtCharged);
   fChain->SetBranchAddress("Photon.SumPtNeutral", Photon_SumPtNeutral, &b_Photon_SumPtNeutral);
   fChain->SetBranchAddress("Photon.SumPtChargedPU", Photon_SumPtChargedPU, &b_Photon_SumPtChargedPU);
   fChain->SetBranchAddress("Photon.SumPt", Photon_SumPt, &b_Photon_SumPt);
   fChain->SetBranchAddress("Photon.Status", Photon_Status, &b_Photon_Status);
   fChain->SetBranchAddress("Photon_size", &Photon_size, &b_Photon_size);
   fChain->SetBranchAddress("Muon", &Muon_, &b_Muon_);
   fChain->SetBranchAddress("Muon.fUniqueID", Muon_fUniqueID, &b_Muon_fUniqueID);
   fChain->SetBranchAddress("Muon.fBits", Muon_fBits, &b_Muon_fBits);
   fChain->SetBranchAddress("Muon.PT", Muon_PT, &b_Muon_PT);
   fChain->SetBranchAddress("Muon.Eta", Muon_Eta, &b_Muon_Eta);
   fChain->SetBranchAddress("Muon.Phi", Muon_Phi, &b_Muon_Phi);
   fChain->SetBranchAddress("Muon.T", Muon_T, &b_Muon_T);
   fChain->SetBranchAddress("Muon.Charge", Muon_Charge, &b_Muon_Charge);
   fChain->SetBranchAddress("Muon.Particle", Muon_Particle, &b_Muon_Particle);
   fChain->SetBranchAddress("Muon.IsolationVar", Muon_IsolationVar, &b_Muon_IsolationVar);
   fChain->SetBranchAddress("Muon.IsolationVarRhoCorr", Muon_IsolationVarRhoCorr, &b_Muon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Muon.SumPtCharged", Muon_SumPtCharged, &b_Muon_SumPtCharged);
   fChain->SetBranchAddress("Muon.SumPtNeutral", Muon_SumPtNeutral, &b_Muon_SumPtNeutral);
   fChain->SetBranchAddress("Muon.SumPtChargedPU", Muon_SumPtChargedPU, &b_Muon_SumPtChargedPU);
   fChain->SetBranchAddress("Muon.SumPt", Muon_SumPt, &b_Muon_SumPt);
   fChain->SetBranchAddress("Muon.D0", Muon_D0, &b_Muon_D0);
   fChain->SetBranchAddress("Muon.DZ", Muon_DZ, &b_Muon_DZ);
   fChain->SetBranchAddress("Muon.ErrorD0", Muon_ErrorD0, &b_Muon_ErrorD0);
   fChain->SetBranchAddress("Muon.ErrorDZ", Muon_ErrorDZ, &b_Muon_ErrorDZ);
   fChain->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
   fChain->SetBranchAddress("MissingET", &MissingET_, &b_MissingET_);
   fChain->SetBranchAddress("MissingET.fUniqueID", MissingET_fUniqueID, &b_MissingET_fUniqueID);
   fChain->SetBranchAddress("MissingET.fBits", MissingET_fBits, &b_MissingET_fBits);
   fChain->SetBranchAddress("MissingET.MET", MissingET_MET, &b_MissingET_MET);
   fChain->SetBranchAddress("MissingET.Eta", MissingET_Eta, &b_MissingET_Eta);
   fChain->SetBranchAddress("MissingET.Phi", MissingET_Phi, &b_MissingET_Phi);
   fChain->SetBranchAddress("MissingET_size", &MissingET_size, &b_MissingET_size);
   fChain->SetBranchAddress("ScalarHT", &ScalarHT_, &b_ScalarHT_);
   fChain->SetBranchAddress("ScalarHT.fUniqueID", ScalarHT_fUniqueID, &b_ScalarHT_fUniqueID);
   fChain->SetBranchAddress("ScalarHT.fBits", ScalarHT_fBits, &b_ScalarHT_fBits);
   fChain->SetBranchAddress("ScalarHT.HT", ScalarHT_HT, &b_ScalarHT_HT);
   fChain->SetBranchAddress("ScalarHT_size", &ScalarHT_size, &b_ScalarHT_size);

   Notify();
}

Bool_t Delphes::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Delphes::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Delphes::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}

////////end from header 

void Delphes::Loop(TString Output, TString Tag, int NMyEvents)
{

   cout << "SIGN: Start of the function Loop()." << endl;
   if (fChain == 0) return;
   TFile *outfile = new TFile(Output, "recreate");

   cout << "Output file is named: " << Output << endl;
   
   //BASIC HISTOGRAMS

   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   //m_treeReader = new ExRootTreeReader(fChain);
   //m_branchGenJet = m_treeReader->UseBranch("JetJES");

   cout << "tree_Reader entries: " << m_treeReader->GetEntries() << endl;//= new ExRootTreeReader(fChain);
   cout << "m_branchGenJet entries: " << m_branchGenJet->GetEntries() << endl;//= new ExRootTreeReader(fChain);

   //cout << m_branchGenJet << endl;//= m_treeReader->UseBranch("GenJet");
   
   cout << m_branchGenW->GetEntries() << endl;
   //Jet *GenJet;// = (Jet*)m_branchGenJet->At(i);

   //cout << GenJet->TrimmedP4[5].Pt() << endl;
   //cout << "Now: " << m_branchGenJet->GetEntriesFast() << endl;

   if ((NMyEvents > 0) && (NMyEvents<=nentries)){
      nentries = NMyEvents;
   }

   TH1D *h_inv_mass = new TH1D("h_inv_mass", "h_inv_mass; [GeV]; MyEvents", 500, 0, 2000);

   MyLorentzVector inv_mass;
   MyLorentzVector inv_mass_temp1;
   MyLorentzVector inv_mass_temp2;
   
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      if (jentry % 10000 == 0){
         cout << "Processing: " << jentry/10000 << " \%"<< endl;
      }
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      
      if (Event_Weight[0] < 1e-20) continue;

      m_treeReader->ReadEntry(jentry);
      
      
      //GenJet = (Jet*)m_branchGenJet -> At(0);
      //cout << GenJet << endl;

      
      for (int i = 0; i <=GenJet_size; i++){
            for (int j = 0; j <=GenJet_size; j++){
               if (i>j){
                     
                     //inv_mass_temp1.SetPtEtaPhiM(GenTop_PT[i], GenTop_Eta[i], GenTop_Phi[i], GenTop_Mass[i]);
                     //inv_mass_temp2.SetPtEtaPhiM(GenTop_PT[j], GenTop_Eta[j], GenTop_Phi[j], GenTop_Mass[j]);
                     //GenLJet = (Jet*)m_branchGenJet -> At(0);
                     ////GenJet = (Jet*)m_branchGenJet;
                     ////cout << GenJet << endl;
                     ////cout << GenJet_PT[i] << endl;
                     //cout << "Pt : " << GenTop_PT[i] << endl;
                     //cout << "Eta : " << GenTop_Eta[i] << endl;
                     //cout << "Phi : " << GenTop_Phi[i] << endl;
                     //cout << "M : " << GenTop_Mass[i] << endl;

                     inv_mass_temp1.SetPtEtaPhiM(GenJet_TrimmedP4[0][i].Pt(), GenJet_TrimmedP4[0][i].Eta(), GenJet_TrimmedP4[0][i].Phi(), GenJet_TrimmedP4[0][i].M() );
                     inv_mass_temp2.SetPtEtaPhiM(GenJet_TrimmedP4[0][j].Pt(), GenJet_TrimmedP4[0][j].Eta(), GenJet_TrimmedP4[0][j].Phi(), GenJet_TrimmedP4[0][j].M() );
                     inv_mass = inv_mass_temp1 + inv_mass_temp2;      
                     h_inv_mass->Fill( inv_mass.M() );
               }
            
            }
      }
      
         
   }
   h_inv_mass->Write();
   cout << "Writing output." << endl;
   outfile->Write();
   cout << "Done." << endl;

}
