//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Apr 25 12:07:47 2017 by ROOT version 6.04/16
// from TTree Data_CENTRAL/Data_CENTRAL
// found on file: L_DATA13TeV.root
//////////////////////////////////////////////////////////

#ifndef Data_CENTRAL_h
#define Data_CENTRAL_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.

class Data_CENTRAL : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         lept1Pt;
   Float_t         lept2Pt;
   Float_t         lept3Pt;
   Float_t         lept4Pt;
   Float_t         lept1Eta;
   Float_t         lept2Eta;
   Float_t         lept3Eta;
   Float_t         lept4Eta;
   Float_t         lept1Phi;
   Float_t         lept2Phi;
   Float_t         lept3Phi;
   Float_t         lept4Phi;
   Float_t         lept1q;
   Float_t         lept2q;
   Float_t         lept3q;
   Float_t         lept4q;
   Int_t           lept1Flav;
   Int_t           lept2Flav;
   Int_t           lept3Flav;
   Int_t           lept4Flav;
   Float_t         jet1Pt;
   Float_t         jet2Pt;
   Float_t         jet3Pt;
   Float_t         bJet1Pt;
   Float_t         bJet2Pt;
   Float_t         MET;
   Float_t         Mt;
   Float_t         Meff;
   Int_t           njets;
   Int_t           nCentralLightJets;
   Int_t           nbjets;
   Int_t           nVtx;
   Int_t           nSigLep;
   Double_t        eventweight;
   Int_t           SR;
   Int_t           runNumber;
   Int_t           eventNumber;
   Int_t           mcChannel;
   Bool_t          passtrigger;
   Bool_t          passtriggermatch;
   Float_t         L2MT2;
   Float_t         L2Mll;
   Int_t           L2nCentralLightJets;
   Int_t           L2nCentralLightJets30;
   Int_t           L2nCentralLightJets60;
   Int_t           L2nCentralBJets;
   Int_t           L2nForwardJets;
   Float_t         L2mJJ;
   Float_t         L2dileptonpt;
   Float_t         L2dPhiLL;
   Float_t         L2dRLL;
   Float_t         L2dPhiWZ;
   Float_t         L2dPhimetW;
   Float_t         L2dPhimetZ;
   Float_t         L2dRJJ;
   Float_t         L2dPhimetjets;
   Double_t        L2dPhimetLL;
   Float_t         leptPtSumVec;
   Float_t         Mlll;
   Float_t         bestZcandidate;
   Float_t         L3Mll;
   Float_t         L3Mt;
   Int_t           RJSR2L1H;
   Int_t           RJSR2L2I;
   Int_t           RJSR2L3C;
   Int_t           RJSR2L4C;
   Int_t           RJCR2LVVH;
   Int_t           RJVR2LVVH;
   Int_t           RJCR2LTopH;
   Int_t           RJVR2LTopH;
   Int_t           RJCR2LVVC;
   Int_t           RJVR2LVVC;
   Int_t           RJCR2LTopC;
   Int_t           RJVR2LTopC;
   Int_t           RJVR2LZ2jC;
   Int_t           RJVR2LZ3jC;
   Int_t           RJSR3L1H;
   Int_t           RJSR3L2I;
   Int_t           RJSR3L3C;
   Int_t           RJSR3L4C;
   Int_t           RJCR3LVVH;
   Int_t           RJVR3LVVH;
   Int_t           RJCR3LVVC;
   Int_t           RJVR3LVVC;
   Float_t         RJPTCM;
   Float_t         RJPTISR;
   Float_t         RJPTI;
   Float_t         RJRISR;
   Float_t         RJdphiISRI;
   Float_t         RJMZ;
   Float_t         RJMJ;
   Int_t           RJNjS;
   Int_t           RJNjISR;
   Float_t         RJPTCM_VR;
   Float_t         RJPTISR_VR;
   Float_t         RJPTI_VR;
   Float_t         RJRISR_VR;
   Float_t         RJdphiISRI_VR;
   Float_t         RJMZ_VR;
   Float_t         RJMJ_VR;
   Int_t           RJNjS_VR;
   Int_t           RJNjISR_VR;
   Float_t         RJH2PP;
   Float_t         RJH2PP_VR;
   Float_t         RJH4PP;
   Float_t         RJHT4PP;
   Float_t         RJH5PP;
   Float_t         RJH5PP_VR;
   Float_t         RJHT5PP;
   Float_t         RJHT5PP_VR;
   Float_t         RJR_minH2P_minH3P;
   Float_t         RJR_minH2P_minH3P_VR;
   Float_t         RJR_HT4PP_H4PP;
   Float_t         RJRPT_HT5PP;
   Float_t         RJRPT_HT5PP_VR;
   Float_t         RJdphiVP;
   Float_t         RJdphiVP_VR;
   Float_t         RJdphiPPV;
   Float_t         syst_FT_EFF_B_down;
   Float_t         syst_FT_EFF_B_up;
   Float_t         syst_FT_EFF_C_down;
   Float_t         syst_FT_EFF_C_up;
   Float_t         syst_FT_EFF_Light_down;
   Float_t         syst_FT_EFF_Light_up;
   Float_t         syst_FT_EFF_extrapolation_down;
   Float_t         syst_FT_EFF_extrapolation_up;
   Float_t         syst_FT_EFF_extrapolationFromCharm_down;
   Float_t         syst_FT_EFF_extrapolationFromCharm_up;
   Float_t         syst_EL_EFF_ID_TOTAL_UncorrUncertainty_down;
   Float_t         syst_EL_EFF_ID_TOTAL_UncorrUncertainty_up;
   Float_t         syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_down;
   Float_t         syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_up;
   Float_t         syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_down;
   Float_t         syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_up;
   Float_t         syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_down;
   Float_t         syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_up;
   Float_t         syst_MUON_EFF_STAT_down;
   Float_t         syst_MUON_EFF_STAT_up;
   Float_t         syst_MUON_EFF_SYS_down;
   Float_t         syst_MUON_EFF_SYS_up;
   Float_t         syst_MUON_EFF_TrigStatUncertainty_down;
   Float_t         syst_MUON_EFF_TrigStatUncertainty_up;
   Float_t         syst_MUON_EFF_TrigSystUncertainty_down;
   Float_t         syst_MUON_EFF_TrigSystUncertainty_up;
   Float_t         syst_MUON_ISO_STAT_down;
   Float_t         syst_MUON_ISO_STAT_up;
   Float_t         syst_MUON_ISO_SYS_down;
   Float_t         syst_MUON_ISO_SYS_up;

   // List of branches
   TBranch        *b_lept1Pt;   //!
   TBranch        *b_lept2Pt;   //!
   TBranch        *b_lept3Pt;   //!
   TBranch        *b_lept4Pt;   //!
   TBranch        *b_lept1Eta;   //!
   TBranch        *b_lept2Eta;   //!
   TBranch        *b_lept3Eta;   //!
   TBranch        *b_lept4Eta;   //!
   TBranch        *b_lept1Phi;   //!
   TBranch        *b_lept2Phi;   //!
   TBranch        *b_lept3Phi;   //!
   TBranch        *b_lept4Phi;   //!
   TBranch        *b_lept1q;   //!
   TBranch        *b_lept2q;   //!
   TBranch        *b_lept3q;   //!
   TBranch        *b_lept4q;   //!
   TBranch        *b_lept1Flav;   //!
   TBranch        *b_lept2Flav;   //!
   TBranch        *b_lept3Flav;   //!
   TBranch        *b_lept4Flav;   //!
   TBranch        *b_jet1Pt;   //!
   TBranch        *b_jet2Pt;   //!
   TBranch        *b_jet3Pt;   //!
   TBranch        *b_bJet1Pt;   //!
   TBranch        *b_bJet2Pt;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_Mt;   //!
   TBranch        *b_Meff;   //!
   TBranch        *b_njets;   //!
   TBranch        *b_nCentralLightJets;   //!
   TBranch        *b_nbjets;   //!
   TBranch        *b_nVtx;   //!
   TBranch        *b_nSigLep;   //!
   TBranch        *b_eventweight;   //!
   TBranch        *b_SR;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_mcChannel;   //!
   TBranch        *b_passtrigger;   //!
   TBranch        *b_passtriggermatch;   //!
   TBranch        *b_L2MT2;   //!
   TBranch        *b_L2Mll;   //!
   TBranch        *b_L2nCentralLightJets;   //!
   TBranch        *b_L2nCentralLightJets30;   //!
   TBranch        *b_L2nCentralLightJets60;   //!
   TBranch        *b_L2nCentralBJets;   //!
   TBranch        *b_L2nForwardJets;   //!
   TBranch        *b_L2mJJ;   //!
   TBranch        *b_L2dileptonpt;   //!
   TBranch        *b_L2dPhiLL;   //!
   TBranch        *b_L2dRLL;   //!
   TBranch        *b_L2dPhiWZ;   //!
   TBranch        *b_L2dPhimetW;   //!
   TBranch        *b_L2dPhimetZ;   //!
   TBranch        *b_L2dRJJ;   //!
   TBranch        *b_L2dPhimetjets;   //!
   TBranch        *b_L2dPhimetLL;   //!
   TBranch        *b_leptPtSumVec;   //!
   TBranch        *b_Mlll;   //!
   TBranch        *b_bestZcandidate;   //!
   TBranch        *b_L3Mll;   //!
   TBranch        *b_L3Mt;   //!
   TBranch        *b_RJSR2L1H;   //!
   TBranch        *b_RJSR2L2I;   //!
   TBranch        *b_RJSR2L3C;   //!
   TBranch        *b_RJSR2L4C;   //!
   TBranch        *b_RJCR2LVVH;   //!
   TBranch        *b_RJVR2LVVH;   //!
   TBranch        *b_RJCR2LTopH;   //!
   TBranch        *b_RJVR2LTopH;   //!
   TBranch        *b_RJCR2LVVC;   //!
   TBranch        *b_RJVR2LVVC;   //!
   TBranch        *b_RJCR2LTopC;   //!
   TBranch        *b_RJVR2LTopC;   //!
   TBranch        *b_RJVR2LZ2jC;   //!
   TBranch        *b_RJVR2LZ3jC;   //!
   TBranch        *b_RJSR3L1H;   //!
   TBranch        *b_RJSR3L2I;   //!
   TBranch        *b_RJSR3L3C;   //!
   TBranch        *b_RJSR3L4C;   //!
   TBranch        *b_RJCR3LVVH;   //!
   TBranch        *b_RJVR3LVVH;   //!
   TBranch        *b_RJCR3LVVC;   //!
   TBranch        *b_RJVR3LVVC;   //!
   TBranch        *b_RJPTCM;   //!
   TBranch        *b_RJPTISR;   //!
   TBranch        *b_RJPTI;   //!
   TBranch        *b_RJRISR;   //!
   TBranch        *b_RJdphiISRI;   //!
   TBranch        *b_RJMZ;   //!
   TBranch        *b_RJMJ;   //!
   TBranch        *b_RJNjS;   //!
   TBranch        *b_RJNjISR;   //!
   TBranch        *b_RJPTCM_VR;   //!
   TBranch        *b_RJPTISR_VR;   //!
   TBranch        *b_RJPTI_VR;   //!
   TBranch        *b_RJRISR_VR;   //!
   TBranch        *b_RJdphiISRI_VR;   //!
   TBranch        *b_RJMZ_VR;   //!
   TBranch        *b_RJMJ_VR;   //!
   TBranch        *b_RJNjS_VR;   //!
   TBranch        *b_RJNjISR_VR;   //!
   TBranch        *b_RJH2PP;   //!
   TBranch        *b_RJH2PP_VR;   //!
   TBranch        *b_RJH4PP;   //!
   TBranch        *b_RJHT4PP;   //!
   TBranch        *b_RJH5PP;   //!
   TBranch        *b_RJH5PP_VR;   //!
   TBranch        *b_RJHT5PP;   //!
   TBranch        *b_RJHT5PP_VR;   //!
   TBranch        *b_RJR_minH2P_minH3P;   //!
   TBranch        *b_RJR_minH2P_minH3P_VR;   //!
   TBranch        *b_RJR_HT4PP_H4PP;   //!
   TBranch        *b_RJRPT_HT5PP;   //!
   TBranch        *b_RJRPT_HT5PP_VR;   //!
   TBranch        *b_RJdphiVP;   //!
   TBranch        *b_RJdphiVP_VR;   //!
   TBranch        *b_RJdphiPPV;   //!
   TBranch        *b_syst_FT_EFF_B_down;   //!
   TBranch        *b_syst_FT_EFF_B_up;   //!
   TBranch        *b_syst_FT_EFF_C_down;   //!
   TBranch        *b_syst_FT_EFF_C_up;   //!
   TBranch        *b_syst_FT_EFF_Light_down;   //!
   TBranch        *b_syst_FT_EFF_Light_up;   //!
   TBranch        *b_syst_FT_EFF_extrapolation_down;   //!
   TBranch        *b_syst_FT_EFF_extrapolation_up;   //!
   TBranch        *b_syst_FT_EFF_extrapolationFromCharm_down;   //!
   TBranch        *b_syst_FT_EFF_extrapolationFromCharm_up;   //!
   TBranch        *b_syst_EL_EFF_ID_TOTAL_UncorrUncertainty_down;   //!
   TBranch        *b_syst_EL_EFF_ID_TOTAL_UncorrUncertainty_up;   //!
   TBranch        *b_syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_down;   //!
   TBranch        *b_syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_up;   //!
   TBranch        *b_syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_down;   //!
   TBranch        *b_syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_up;   //!
   TBranch        *b_syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_down;   //!
   TBranch        *b_syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_up;   //!
   TBranch        *b_syst_MUON_EFF_STAT_down;   //!
   TBranch        *b_syst_MUON_EFF_STAT_up;   //!
   TBranch        *b_syst_MUON_EFF_SYS_down;   //!
   TBranch        *b_syst_MUON_EFF_SYS_up;   //!
   TBranch        *b_syst_MUON_EFF_TrigStatUncertainty_down;   //!
   TBranch        *b_syst_MUON_EFF_TrigStatUncertainty_up;   //!
   TBranch        *b_syst_MUON_EFF_TrigSystUncertainty_down;   //!
   TBranch        *b_syst_MUON_EFF_TrigSystUncertainty_up;   //!
   TBranch        *b_syst_MUON_ISO_STAT_down;   //!
   TBranch        *b_syst_MUON_ISO_STAT_up;   //!
   TBranch        *b_syst_MUON_ISO_SYS_down;   //!
   TBranch        *b_syst_MUON_ISO_SYS_up;   //!

   Data_CENTRAL(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~Data_CENTRAL() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(Data_CENTRAL,0);
};

#endif

#ifdef Data_CENTRAL_cxx
void Data_CENTRAL::Init(TTree *tree)
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
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("lept1Pt", &lept1Pt, &b_lept1Pt);
   fChain->SetBranchAddress("lept2Pt", &lept2Pt, &b_lept2Pt);
   fChain->SetBranchAddress("lept3Pt", &lept3Pt, &b_lept3Pt);
   fChain->SetBranchAddress("lept4Pt", &lept4Pt, &b_lept4Pt);
   fChain->SetBranchAddress("lept1Eta", &lept1Eta, &b_lept1Eta);
   fChain->SetBranchAddress("lept2Eta", &lept2Eta, &b_lept2Eta);
   fChain->SetBranchAddress("lept3Eta", &lept3Eta, &b_lept3Eta);
   fChain->SetBranchAddress("lept4Eta", &lept4Eta, &b_lept4Eta);
   fChain->SetBranchAddress("lept1Phi", &lept1Phi, &b_lept1Phi);
   fChain->SetBranchAddress("lept2Phi", &lept2Phi, &b_lept2Phi);
   fChain->SetBranchAddress("lept3Phi", &lept3Phi, &b_lept3Phi);
   fChain->SetBranchAddress("lept4Phi", &lept4Phi, &b_lept4Phi);
   fChain->SetBranchAddress("lept1q", &lept1q, &b_lept1q);
   fChain->SetBranchAddress("lept2q", &lept2q, &b_lept2q);
   fChain->SetBranchAddress("lept3q", &lept3q, &b_lept3q);
   fChain->SetBranchAddress("lept4q", &lept4q, &b_lept4q);
   fChain->SetBranchAddress("lept1Flav", &lept1Flav, &b_lept1Flav);
   fChain->SetBranchAddress("lept2Flav", &lept2Flav, &b_lept2Flav);
   fChain->SetBranchAddress("lept3Flav", &lept3Flav, &b_lept3Flav);
   fChain->SetBranchAddress("lept4Flav", &lept4Flav, &b_lept4Flav);
   fChain->SetBranchAddress("jet1Pt", &jet1Pt, &b_jet1Pt);
   fChain->SetBranchAddress("jet2Pt", &jet2Pt, &b_jet2Pt);
   fChain->SetBranchAddress("jet3Pt", &jet3Pt, &b_jet3Pt);
   fChain->SetBranchAddress("bJet1Pt", &bJet1Pt, &b_bJet1Pt);
   fChain->SetBranchAddress("bJet2Pt", &bJet2Pt, &b_bJet2Pt);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("Mt", &Mt, &b_Mt);
   fChain->SetBranchAddress("Meff", &Meff, &b_Meff);
   fChain->SetBranchAddress("njets", &njets, &b_njets);
   fChain->SetBranchAddress("nCentralLightJets", &nCentralLightJets, &b_nCentralLightJets);
   fChain->SetBranchAddress("nbjets", &nbjets, &b_nbjets);
   fChain->SetBranchAddress("nVtx", &nVtx, &b_nVtx);
   fChain->SetBranchAddress("nSigLep", &nSigLep, &b_nSigLep);
   fChain->SetBranchAddress("eventweight", &eventweight, &b_eventweight);
   fChain->SetBranchAddress("SR", &SR, &b_SR);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("mcChannel", &mcChannel, &b_mcChannel);
   fChain->SetBranchAddress("passtrigger", &passtrigger, &b_passtrigger);
   fChain->SetBranchAddress("passtriggermatch", &passtriggermatch, &b_passtriggermatch);
   fChain->SetBranchAddress("L2MT2", &L2MT2, &b_L2MT2);
   fChain->SetBranchAddress("L2Mll", &L2Mll, &b_L2Mll);
   fChain->SetBranchAddress("L2nCentralLightJets", &L2nCentralLightJets, &b_L2nCentralLightJets);
   fChain->SetBranchAddress("L2nCentralLightJets30", &L2nCentralLightJets30, &b_L2nCentralLightJets30);
   fChain->SetBranchAddress("L2nCentralLightJets60", &L2nCentralLightJets60, &b_L2nCentralLightJets60);
   fChain->SetBranchAddress("L2nCentralBJets", &L2nCentralBJets, &b_L2nCentralBJets);
   fChain->SetBranchAddress("L2nForwardJets", &L2nForwardJets, &b_L2nForwardJets);
   fChain->SetBranchAddress("L2mJJ", &L2mJJ, &b_L2mJJ);
   fChain->SetBranchAddress("L2dileptonpt", &L2dileptonpt, &b_L2dileptonpt);
   fChain->SetBranchAddress("L2dPhiLL", &L2dPhiLL, &b_L2dPhiLL);
   fChain->SetBranchAddress("L2dRLL", &L2dRLL, &b_L2dRLL);
   fChain->SetBranchAddress("L2dPhiWZ", &L2dPhiWZ, &b_L2dPhiWZ);
   fChain->SetBranchAddress("L2dPhimetW", &L2dPhimetW, &b_L2dPhimetW);
   fChain->SetBranchAddress("L2dPhimetZ", &L2dPhimetZ, &b_L2dPhimetZ);
   fChain->SetBranchAddress("L2dRJJ", &L2dRJJ, &b_L2dRJJ);
   fChain->SetBranchAddress("L2dPhimetjets", &L2dPhimetjets, &b_L2dPhimetjets);
   fChain->SetBranchAddress("L2dPhimetLL", &L2dPhimetLL, &b_L2dPhimetLL);
   fChain->SetBranchAddress("leptPtSumVec", &leptPtSumVec, &b_leptPtSumVec);
   fChain->SetBranchAddress("Mlll", &Mlll, &b_Mlll);
   fChain->SetBranchAddress("bestZcandidate", &bestZcandidate, &b_bestZcandidate);
   fChain->SetBranchAddress("L3Mll", &L3Mll, &b_L3Mll);
   fChain->SetBranchAddress("L3Mt", &L3Mt, &b_L3Mt);
   fChain->SetBranchAddress("RJSR2L1H", &RJSR2L1H, &b_RJSR2L1H);
   fChain->SetBranchAddress("RJSR2L2I", &RJSR2L2I, &b_RJSR2L2I);
   fChain->SetBranchAddress("RJSR2L3C", &RJSR2L3C, &b_RJSR2L3C);
   fChain->SetBranchAddress("RJSR2L4C", &RJSR2L4C, &b_RJSR2L4C);
   fChain->SetBranchAddress("RJCR2LVVH", &RJCR2LVVH, &b_RJCR2LVVH);
   fChain->SetBranchAddress("RJVR2LVVH", &RJVR2LVVH, &b_RJVR2LVVH);
   fChain->SetBranchAddress("RJCR2LTopH", &RJCR2LTopH, &b_RJCR2LTopH);
   fChain->SetBranchAddress("RJVR2LTopH", &RJVR2LTopH, &b_RJVR2LTopH);
   fChain->SetBranchAddress("RJCR2LVVC", &RJCR2LVVC, &b_RJCR2LVVC);
   fChain->SetBranchAddress("RJVR2LVVC", &RJVR2LVVC, &b_RJVR2LVVC);
   fChain->SetBranchAddress("RJCR2LTopC", &RJCR2LTopC, &b_RJCR2LTopC);
   fChain->SetBranchAddress("RJVR2LTopC", &RJVR2LTopC, &b_RJVR2LTopC);
   fChain->SetBranchAddress("RJVR2LZ2jC", &RJVR2LZ2jC, &b_RJVR2LZ2jC);
   fChain->SetBranchAddress("RJVR2LZ3jC", &RJVR2LZ3jC, &b_RJVR2LZ3jC);
   fChain->SetBranchAddress("RJSR3L1H", &RJSR3L1H, &b_RJSR3L1H);
   fChain->SetBranchAddress("RJSR3L2I", &RJSR3L2I, &b_RJSR3L2I);
   fChain->SetBranchAddress("RJSR3L3C", &RJSR3L3C, &b_RJSR3L3C);
   fChain->SetBranchAddress("RJSR3L4C", &RJSR3L4C, &b_RJSR3L4C);
   fChain->SetBranchAddress("RJCR3LVVH", &RJCR3LVVH, &b_RJCR3LVVH);
   fChain->SetBranchAddress("RJVR3LVVH", &RJVR3LVVH, &b_RJVR3LVVH);
   fChain->SetBranchAddress("RJCR3LVVC", &RJCR3LVVC, &b_RJCR3LVVC);
   fChain->SetBranchAddress("RJVR3LVVC", &RJVR3LVVC, &b_RJVR3LVVC);
   fChain->SetBranchAddress("RJPTCM", &RJPTCM, &b_RJPTCM);
   fChain->SetBranchAddress("RJPTISR", &RJPTISR, &b_RJPTISR);
   fChain->SetBranchAddress("RJPTI", &RJPTI, &b_RJPTI);
   fChain->SetBranchAddress("RJRISR", &RJRISR, &b_RJRISR);
   fChain->SetBranchAddress("RJdphiISRI", &RJdphiISRI, &b_RJdphiISRI);
   fChain->SetBranchAddress("RJMZ", &RJMZ, &b_RJMZ);
   fChain->SetBranchAddress("RJMJ", &RJMJ, &b_RJMJ);
   fChain->SetBranchAddress("RJNjS", &RJNjS, &b_RJNjS);
   fChain->SetBranchAddress("RJNjISR", &RJNjISR, &b_RJNjISR);
   fChain->SetBranchAddress("RJPTCM_VR", &RJPTCM_VR, &b_RJPTCM_VR);
   fChain->SetBranchAddress("RJPTISR_VR", &RJPTISR_VR, &b_RJPTISR_VR);
   fChain->SetBranchAddress("RJPTI_VR", &RJPTI_VR, &b_RJPTI_VR);
   fChain->SetBranchAddress("RJRISR_VR", &RJRISR_VR, &b_RJRISR_VR);
   fChain->SetBranchAddress("RJdphiISRI_VR", &RJdphiISRI_VR, &b_RJdphiISRI_VR);
   fChain->SetBranchAddress("RJMZ_VR", &RJMZ_VR, &b_RJMZ_VR);
   fChain->SetBranchAddress("RJMJ_VR", &RJMJ_VR, &b_RJMJ_VR);
   fChain->SetBranchAddress("RJNjS_VR", &RJNjS_VR, &b_RJNjS_VR);
   fChain->SetBranchAddress("RJNjISR_VR", &RJNjISR_VR, &b_RJNjISR_VR);
   fChain->SetBranchAddress("RJH2PP", &RJH2PP, &b_RJH2PP);
   fChain->SetBranchAddress("RJH2PP_VR", &RJH2PP_VR, &b_RJH2PP_VR);
   fChain->SetBranchAddress("RJH4PP", &RJH4PP, &b_RJH4PP);
   fChain->SetBranchAddress("RJHT4PP", &RJHT4PP, &b_RJHT4PP);
   fChain->SetBranchAddress("RJH5PP", &RJH5PP, &b_RJH5PP);
   fChain->SetBranchAddress("RJH5PP_VR", &RJH5PP_VR, &b_RJH5PP_VR);
   fChain->SetBranchAddress("RJHT5PP", &RJHT5PP, &b_RJHT5PP);
   fChain->SetBranchAddress("RJHT5PP_VR", &RJHT5PP_VR, &b_RJHT5PP_VR);
   fChain->SetBranchAddress("RJR_minH2P_minH3P", &RJR_minH2P_minH3P, &b_RJR_minH2P_minH3P);
   fChain->SetBranchAddress("RJR_minH2P_minH3P_VR", &RJR_minH2P_minH3P_VR, &b_RJR_minH2P_minH3P_VR);
   fChain->SetBranchAddress("RJR_HT4PP_H4PP", &RJR_HT4PP_H4PP, &b_RJR_HT4PP_H4PP);
   fChain->SetBranchAddress("RJRPT_HT5PP", &RJRPT_HT5PP, &b_RJRPT_HT5PP);
   fChain->SetBranchAddress("RJRPT_HT5PP_VR", &RJRPT_HT5PP_VR, &b_RJRPT_HT5PP_VR);
   fChain->SetBranchAddress("RJdphiVP", &RJdphiVP, &b_RJdphiVP);
   fChain->SetBranchAddress("RJdphiVP_VR", &RJdphiVP_VR, &b_RJdphiVP_VR);
   fChain->SetBranchAddress("RJdphiPPV", &RJdphiPPV, &b_RJdphiPPV);
   fChain->SetBranchAddress("syst_FT_EFF_B_down", &syst_FT_EFF_B_down, &b_syst_FT_EFF_B_down);
   fChain->SetBranchAddress("syst_FT_EFF_B_up", &syst_FT_EFF_B_up, &b_syst_FT_EFF_B_up);
   fChain->SetBranchAddress("syst_FT_EFF_C_down", &syst_FT_EFF_C_down, &b_syst_FT_EFF_C_down);
   fChain->SetBranchAddress("syst_FT_EFF_C_up", &syst_FT_EFF_C_up, &b_syst_FT_EFF_C_up);
   fChain->SetBranchAddress("syst_FT_EFF_Light_down", &syst_FT_EFF_Light_down, &b_syst_FT_EFF_Light_down);
   fChain->SetBranchAddress("syst_FT_EFF_Light_up", &syst_FT_EFF_Light_up, &b_syst_FT_EFF_Light_up);
   fChain->SetBranchAddress("syst_FT_EFF_extrapolation_down", &syst_FT_EFF_extrapolation_down, &b_syst_FT_EFF_extrapolation_down);
   fChain->SetBranchAddress("syst_FT_EFF_extrapolation_up", &syst_FT_EFF_extrapolation_up, &b_syst_FT_EFF_extrapolation_up);
   fChain->SetBranchAddress("syst_FT_EFF_extrapolationFromCharm_down", &syst_FT_EFF_extrapolationFromCharm_down, &b_syst_FT_EFF_extrapolationFromCharm_down);
   fChain->SetBranchAddress("syst_FT_EFF_extrapolationFromCharm_up", &syst_FT_EFF_extrapolationFromCharm_up, &b_syst_FT_EFF_extrapolationFromCharm_up);
   fChain->SetBranchAddress("syst_EL_EFF_ID_TOTAL_UncorrUncertainty_down", &syst_EL_EFF_ID_TOTAL_UncorrUncertainty_down, &b_syst_EL_EFF_ID_TOTAL_UncorrUncertainty_down);
   fChain->SetBranchAddress("syst_EL_EFF_ID_TOTAL_UncorrUncertainty_up", &syst_EL_EFF_ID_TOTAL_UncorrUncertainty_up, &b_syst_EL_EFF_ID_TOTAL_UncorrUncertainty_up);
   fChain->SetBranchAddress("syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_down", &syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_down, &b_syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_down);
   fChain->SetBranchAddress("syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_up", &syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_up, &b_syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_up);
   fChain->SetBranchAddress("syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_down", &syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_down, &b_syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_down);
   fChain->SetBranchAddress("syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_up", &syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_up, &b_syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_up);
   fChain->SetBranchAddress("syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_down", &syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_down, &b_syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_down);
   fChain->SetBranchAddress("syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_up", &syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_up, &b_syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_up);
   fChain->SetBranchAddress("syst_MUON_EFF_STAT_down", &syst_MUON_EFF_STAT_down, &b_syst_MUON_EFF_STAT_down);
   fChain->SetBranchAddress("syst_MUON_EFF_STAT_up", &syst_MUON_EFF_STAT_up, &b_syst_MUON_EFF_STAT_up);
   fChain->SetBranchAddress("syst_MUON_EFF_SYS_down", &syst_MUON_EFF_SYS_down, &b_syst_MUON_EFF_SYS_down);
   fChain->SetBranchAddress("syst_MUON_EFF_SYS_up", &syst_MUON_EFF_SYS_up, &b_syst_MUON_EFF_SYS_up);
   fChain->SetBranchAddress("syst_MUON_EFF_TrigStatUncertainty_down", &syst_MUON_EFF_TrigStatUncertainty_down, &b_syst_MUON_EFF_TrigStatUncertainty_down);
   fChain->SetBranchAddress("syst_MUON_EFF_TrigStatUncertainty_up", &syst_MUON_EFF_TrigStatUncertainty_up, &b_syst_MUON_EFF_TrigStatUncertainty_up);
   fChain->SetBranchAddress("syst_MUON_EFF_TrigSystUncertainty_down", &syst_MUON_EFF_TrigSystUncertainty_down, &b_syst_MUON_EFF_TrigSystUncertainty_down);
   fChain->SetBranchAddress("syst_MUON_EFF_TrigSystUncertainty_up", &syst_MUON_EFF_TrigSystUncertainty_up, &b_syst_MUON_EFF_TrigSystUncertainty_up);
   fChain->SetBranchAddress("syst_MUON_ISO_STAT_down", &syst_MUON_ISO_STAT_down, &b_syst_MUON_ISO_STAT_down);
   fChain->SetBranchAddress("syst_MUON_ISO_STAT_up", &syst_MUON_ISO_STAT_up, &b_syst_MUON_ISO_STAT_up);
   fChain->SetBranchAddress("syst_MUON_ISO_SYS_down", &syst_MUON_ISO_SYS_down, &b_syst_MUON_ISO_SYS_down);
   fChain->SetBranchAddress("syst_MUON_ISO_SYS_up", &syst_MUON_ISO_SYS_up, &b_syst_MUON_ISO_SYS_up);
}

Bool_t Data_CENTRAL::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef Data_CENTRAL_cxx
