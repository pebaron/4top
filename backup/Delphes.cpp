#define Delphes_cxx
#include "Delphes.h"
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



class Event 
{ 
    public: 
    MyLorentzVector WHadron, BJet1, BJet2, Jet3, Jet4, PseudoTop, PseudoTopPair;
    MyLorentzVector Top;
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

    Event():m_PreSelected(false), m_FinalSelected(false) {
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

    void SetTop(MyLorentzVector a) 
    { 
       Top = a; 
    }
    MyLorentzVector GetTop()
    {
       return Top;
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


void Delphes::Loop(TString Output, TString Tag, int NEvents)
{

   cout << "SIGN: Start of the function Loop()." << endl;
   if (fChain == 0) return;
   TFile *outfile = new TFile(Output, "recreate");
   TDirectory *Particle = outfile->mkdir("Part");
   TDirectory *Generated = outfile->mkdir("Gen");

   cout << "Output file is named: " << Output << endl;
   
   //BASIC HISTOGRAMS

   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   if (NEvents > 0){
      nentries = NEvents;
   }

   Particle->cd();

   TH1D *TopEta = new TH1D("TopEta", "TopEta; #eta [-]; Events", 100, -6.28, 6.28);
   TH1D *TopPhi = new TH1D("TopPhi", "TopPhi; #phi [-]; Events", 100, -6.28, 6.28);
   TH1D *TopPt = new TH1D("TopPt", "TopPt; p_{T} [GeV]; Events", 500, 0, 1000);
   TH1D *TopMass = new TH1D("TopMass", "TopMass; Mass [GeV]; Events", 500, 0, 1000);
   TH1D *TopCharge = new TH1D("TopCharge", "TopCharge; charge; Events", 20, -10, 10);
   TH2D *TopEtaPhi = new TH2D("TopEtaPhi", "TopEtaPhi; #eta [-]; #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);


   TH1D *WEta = new TH1D("WEta", "WEta; #eta [-]; Events", 100, -6.28, 6.28);
   TH1D *WPhi = new TH1D("WPhi", "WPhi; #phi [-]; Events", 100, -6.28, 6.28);
   TH1D *WPt = new TH1D("WPt", "WPt; p_{T} [GeV]; Events", 500, 0, 1000);
   TH1D *WMass = new TH1D("WMass", "WMass; Mass [GeV]; Events", 500, 0, 1000);
   TH2D *WEtaPhi = new TH2D("WEtaPhi", "WEtaPhi; #eta [-]; #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);

   TH1D *BJetEta = new TH1D("BJetEta", "BJetEta; #eta [-]; Events", 100, -6.28, 6.28);
   TH1D *BJetPhi = new TH1D("BJetPhi", "BJetPhi; #phi [-]; Events", 100, -6.28, 6.28);
   TH1D *BJetPt = new TH1D("BJetPt", "BJetPt; p_{T} [GeV]; Events", 500, 0, 1000);
   TH1D *BJetMass = new TH1D("BJetMass", "BJetMass; Mass [GeV]; Events", 500, 0, 1000);
   TH2D *BJetEtaPhi = new TH2D("BJetEtaPhi", "BJetEtaPhi; #eta [-]; #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);

   TH2D *BJet_vs_W_Delta_EtaPhi = new TH2D("BJet_vs_W_Delta_EtaPhi", "BJet_vs_W_Delta_EtaPhi; #Delta #eta [-]; #Delta #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);
   TH2D *BJet_vs_BJet_Delta_EtaPhi = new TH2D("BJet_vs_BJet_Delta_EtaPhi", "BJet_vs_BJet_Delta_EtaPhi; #Delta #eta [-]; #Delta #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);
   TH2D *W_vs_W_Delta_EtaPhi = new TH2D("W_vs_W_Delta_EtaPhi", "W_vs_W_Delta_EtaPhi; #Delta #eta [-]; #Delta #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);
   TH2D *Top_vs_Top_Delta_EtaPhi = new TH2D("Top_vs_Top_Delta_EtaPhi", "Top_vs_Top_Delta_EtaPhi; #Delta #eta [-]; #Delta #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);

   Generated->cd();

   TH1D *GenTopEta = new TH1D("GenTopEta", "GenTopEta; #eta [-]; Events", 100, -6.28, 6.28);
   TH1D *GenTopPhi = new TH1D("GenTopPhi", "GenTopPhi; #phi [-]; Events", 100, -6.28, 6.28);
   TH1D *GenTopPt = new TH1D("GenTopPt", "GenTopPt; p_{T} [GeV]; Events", 500, 0, 1000);
   TH1D *GenTopMass = new TH1D("GenTopMass", "GenTopMass; Mass [GeV]; Events", 500, 0, 1000);
   TH2D *GenTopEtaPhi = new TH2D("GenTopEtaPhi", "GenTopEtaPhi; #eta [-]; #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);

   TH1D *GenWEta = new TH1D("GenWEta", "GenWEta; #eta [-]; Events", 100, -6.28, 6.28);
   TH1D *GenWPhi = new TH1D("GenWPhi", "GenWPhi; #phi [-]; Events", 100, -6.28, 6.28);
   TH1D *GenWPt = new TH1D("GenWPt", "GenWPt; p_{T} [GeV]; Events", 500, 0, 1000);
   TH1D *GenWMass = new TH1D("GenWMass", "GenWMass; Mass [GeV]; Events", 500, 0, 1000);
   TH2D *GenWEtaPhi = new TH2D("GenWEtaPhi", "GenWEtaPhi; #eta [-]; #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);

   TH1D *GenBJetEta = new TH1D("GenBJetEta", "GenBJetEta; #eta [-]; Events", 100, -6.28, 6.28);
   TH1D *GenBJetPhi = new TH1D("GenBJetPhi", "GenBJetPhi; #phi [-]; Events", 100, -6.28, 6.28);
   TH1D *GenBJetPt = new TH1D("GenBJetPt", "GenBJetPt; p_{T} [GeV]; Events", 500, 0, 1000);
   TH1D *GenBJetMass = new TH1D("GenBJetMass", "GenBJetMass; Mass [GeV]; Events", 500, 0, 1000);
   TH2D *GenBJetEtaPhi = new TH2D("GenBJetEtaPhi", "GenBJetEtaPhi; #eta [-]; #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);

   TH2D *GenBJet_vs_W_Delta_EtaPhi = new TH2D("GenBJet_vs_W_Delta_EtaPhi", "GenBJet_vs_W_Delta_EtaPhi; #Delta #eta [-]; #Delta #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);
   TH2D *GenBJet_vs_BJet_Delta_EtaPhi = new TH2D("GenBJet_vs_BJet_Delta_EtaPhi", "GenBJet_vs_BJet_Delta_EtaPhi; #Delta #eta [-]; #Delta #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);
   TH2D *GenW_vs_W_Delta_EtaPhi = new TH2D("GenW_vs_W_Delta_EtaPhi", "GenW_vs_W_Delta_EtaPhi; #Delta #eta [-]; #Delta #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);
   TH2D *GenTop_vs_Top_Delta_EtaPhi = new TH2D("GenTop_vs_Top_Delta_EtaPhi", "GenTop_vs_Top_Delta_EtaPhi; #Delta #eta [-]; #Delta #phi [-]; Events", 100, -6.28, 6.28, 100, -6.28, 6.28);
   
   bool MCBTag;
   int counts = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      if (jentry % 10000 == 0){
         cout << "Processing: " << jentry/10000 << " \%"<< endl;
      }
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      
      if (Event_Weight[0] < 1e-20) continue;
      if (GenJet_size < 12) continue;

      vector<MyLorentzVector> Jets;  
      vector<MyLorentzVector> BJets;  
      MyLorentzVector Jet; 
      MyLorentzVector BJet;         
      vector<MyLorentzVector> WBosons;  
      MyLorentzVector WJet1;         
      MyLorentzVector WJet2;         
      vector<MyLorentzVector> Tops;  
      counts = 0;
      for (int i=0; i<GenJet_size;i++){ 
         for (int j=0; j<GenJet_size;j++){ 
            for (int m=0; m<GenJet_size;m++){ 
               if(i > j){
                  if(j > m){
               //if ((i!=j)&&(i!=m)&&(j!=m)){
                     cout << i << " " << j << " " << m << endl;
                     counts++;
                     //}
                  }
               }   
            }
            if(i > j){
               MyLorentzVector WCandidate;
               if (GenJet_Charge[i]*GenJet_Charge[j] > 0) continue;
               WJet1.SetPtEtaPhiM(GenJet_PT[i], GenJet_Eta[i], GenJet_Phi[i], GenJet_Mass[i]);
               WJet2.SetPtEtaPhiM(GenJet_PT[j], GenJet_Eta[j], GenJet_Phi[j], GenJet_Mass[j]);
               WCandidate = WJet1 + WJet2;
               //if ((WCandidate.M() < 70)||(WCandidate.M() > 90)) continue;
               
               for (int k=0; k<GenJet_size;k++){ 
                  if (j > k){
                     //cout << i << " " << j << " " << k << endl;

                     MCBTag = false;
                     
                        for (int l = 0; l < GenBhadrons_size; l++){
                           if ((sqrt((GenJet_Phi[k]-GenBhadrons_Phi[l])*(GenJet_Phi[k]-GenBhadrons_Phi[l]) + (GenJet_Eta[k]-GenBhadrons_Eta[l])*(GenJet_Eta[k]-GenBhadrons_Eta[l])) < 0.4) && (GenBhadrons_PT[l] > 5.0)){
                              MCBTag = true;
                           }       
                        }   

                     if (MCBTag){
                        BJet.SetPtEtaPhiM(GenJet_PT[k], GenJet_Eta[k], GenJet_Phi[k], GenJet_Mass[k]);
                        //if (abs(BJet.Phi() - WCandidate.Phi()) > 1.0) continue;
                        //if (abs(BJet.Eta() - WCandidate.Eta()) > 1.0) continue;
                        MyLorentzVector Top;       
                        Top = BJet + WCandidate;
                        //if ((Top.M() > 158)&&(Top.M() < 188)){
                           Top.SetCharge(GenJet_Charge[i] + GenJet_Charge[j] + GenJet_Charge[k]);
                           //cout << i << " " << j << " " << k << endl;
                           Tops.push_back(Top);
                           BJets.push_back(BJet);
                           WBosons.push_back(WCandidate);
                        //}
                     } 
                  }
               }
               
            }
         }
      }

      if (Tops.size() < 4) continue;
      //cout << Tops.size() << endl;
      //float FinalCharge = 0.;
      //for (int i = 0 ; i < Tops.size() ; i++){
      //   FinalCharge += Tops[i].GetCharge();
      //}
      //if (FinalCharge != 0.) continue;
      Particle->cd();

      double DeltaPhi;
      double DeltaEta;
      cout << "Gen jet size:" << GenJet_size  << endl;
      cout << "tops size:" << Tops.size()  << endl;
      cout << "counts" << counts  << endl;
      for (int i = 0 ; i < Tops.size() ; i++){
            //if (abs(Tops[i].GetCharge()) > 1.) continue;
            TopEta->Fill(Tops[i].Eta());
            TopPhi->Fill(Tops[i].Phi());
            TopEtaPhi->Fill(Tops[i].Eta(), Tops[i].Phi());
            TopPt->Fill(Tops[i].Pt());
            TopCharge->Fill(Tops[i].GetCharge());
            TopMass->Fill(Tops[i].M());

      }
      cout << "--------" << endl;

      for (int i = 0 ; i < WBosons.size() ; i++){
         WEta->Fill(WBosons[i].Eta());
         WPhi->Fill(WBosons[i].Phi());
         WEtaPhi->Fill(WBosons[i].Eta(), WBosons[i].Phi());
         WPt->Fill(WBosons[i].Pt());
         WMass->Fill(WBosons[i].M());
         if (i==0){
            for (int j = 1 ; j < WBosons.size() ; j++){
               //if (i>j){
               W_vs_W_Delta_EtaPhi->Fill(WBosons[i].Eta()-WBosons[j].Eta(), WBosons[i].Phi()-WBosons[j].Phi());
               //}
            }
         }
      }

      for (int i = 0 ; i < BJets.size() ; i++){
         BJetEta->Fill(BJets[i].Eta());
         BJetPhi->Fill(BJets[i].Phi());
         BJetEtaPhi->Fill(BJets[i].Eta(), BJets[i].Phi());
         BJetPt->Fill(BJets[i].Pt());
         BJetMass->Fill(BJets[i].M());
         if (i==0){
            for (int j = 1 ; j < BJets.size() ; j++){
               //if (i>j){
               BJet_vs_BJet_Delta_EtaPhi->Fill(BJets[i].Eta()-BJets[j].Eta(), BJets[i].Phi()-BJets[j].Phi());
               //}
            }
         }
         
         if (i==0){
            for (int k = 1 ; k < WBosons.size() ; k++){
               //if (i>k){
               BJet_vs_W_Delta_EtaPhi->Fill(BJets[i].Eta()-WBosons[k].Eta(), BJets[i].Phi()-WBosons[k].Phi());
               //}
            }
         }   
      }

      Generated->cd();

      for (int i = 0 ; i < GenTop_size ; i++){
         if (GenTop_Status[i]!=52) continue;
         GenTopEta->Fill(GenTop_Eta[i]);
         GenTopPhi->Fill(GenTop_Phi[i]);
         GenTopEtaPhi->Fill(GenTop_Eta[i],GenTop_Phi[i]);
         GenTopPt->Fill(GenTop_PT[i]);
         GenTopMass->Fill(GenTop_Mass[i]);
         if (i==0){
            for (int j = 1 ; j < GenTop_size ; j++){
               //if (i>j){
               //   cout << i << " " << j << endl;
               GenTop_vs_Top_Delta_EtaPhi->Fill(GenTop_Eta[i]-GenTop_Eta[j], GenTop_Phi[i]-GenTop_Phi[j] );
               //}
            }
         }
      }

      for (int i = 0 ; i < GenW_size ; i++){
         GenWEta->Fill(GenW_Eta[i]);
         GenWPhi->Fill(GenW_Phi[i]);
         GenWEtaPhi->Fill(GenW_Eta[i],GenW_Phi[i]);
         GenWPt->Fill(GenW_PT[i]);
         GenWMass->Fill(GenW_Mass[i]);
         if (i==0){
            for (int j = 1 ; j < GenW_size ; j++){
               //if (i>j){
               GenW_vs_W_Delta_EtaPhi->Fill(GenW_Eta[i]-GenW_Eta[j], GenW_Phi[i]-GenW_Phi[j]);
               //}
            }
         }
      }

      for (int i = 0 ; i < GenBhadrons_size ; i++){
         GenBJetEta->Fill(GenBhadrons_Eta[i]);
         GenBJetPhi->Fill(GenBhadrons_Phi[i]);
         GenBJetEtaPhi->Fill(GenBhadrons_Eta[i],GenBhadrons_Phi[i]);
         GenBJetPt->Fill(GenBhadrons_PT[i]);
         GenBJetMass->Fill(GenBhadrons_Mass[i]);
         if (i==0){
            for (int j = 1 ; j < GenBhadrons_size ; j++){
            //   if (i>j){
               GenBJet_vs_BJet_Delta_EtaPhi->Fill(GenBhadrons_Eta[i]-GenBhadrons_Eta[j],GenBhadrons_Phi[i]-GenBhadrons_Phi[j]);
            //   }
            }
         }

         if (i==0){
            for (int k = 1 ; k < GenW_size ; k++){
               //if (i>k){
               GenBJet_vs_W_Delta_EtaPhi->Fill(GenBhadrons_Eta[i]-GenW_Eta[k], GenBhadrons_Phi[i]-GenW_Phi[k]);
               //}
            }
         }

      }         
      

      
   }
   cout << "Writing output." << endl;
   outfile->Write();
   cout << "Done." << endl;
   
}
