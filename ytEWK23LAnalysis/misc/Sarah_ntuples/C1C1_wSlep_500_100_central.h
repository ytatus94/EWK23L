//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr 24 14:53:47 2017 by ROOT version 6.04/14
// from TTree C1C1_wSlep_500_100_central/C1C1_wSlep_500_100_central
// found on file: C1C1_wSlep_central.root
//////////////////////////////////////////////////////////

#ifndef C1C1_wSlep_500_100_central_h
#define C1C1_wSlep_500_100_central_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.

class C1C1_wSlep_500_100_central : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         lept1Pt;
   Float_t         lept2Pt;
   Float_t         lept3Pt;
   Float_t         lept4Pt;
   Float_t         lept5Pt;
   Float_t         lept1Eta;
   Float_t         lept2Eta;
   Float_t         lept3Eta;
   Float_t         lept4Eta;
   Float_t         lept5Eta;
   Float_t         lept1Phi;
   Float_t         lept2Phi;
   Float_t         lept3Phi;
   Float_t         lept4Phi;
   Float_t         lept5Phi;
   Int_t           lept1q;
   Int_t           lept2q;
   Int_t           lept3q;
   Int_t           lept4q;
   Int_t           lept5q;
   Int_t           lept1Flav;
   Int_t           lept2Flav;
   Int_t           lept3Flav;
   Int_t           lept4Flav;
   Int_t           lept5Flav;
   Float_t         tau1Pt;
   Float_t         tau2Pt;
   Int_t           tau1Prong;
   Int_t           tau2Prong;
   Float_t         tau1Eta;
   Float_t         tau2Eta;
   Float_t         dPhiLL;
   Float_t         dPhiWZ;
   Float_t         jet1Pt;
   Float_t         jet2Pt;
   Float_t         jet3Pt;
   Float_t         bJet1Pt;
   Float_t         bJet2Pt;
   Float_t         bestZcandidate;
   Float_t         bestZcandidateSFOSl;
   Float_t         bestZcandidateSFOSSFOS;
   Float_t         MET;
   Float_t         Mt;
   Float_t         MtAll;
   Float_t         Mleptau;
   Float_t         Mtautau;
   Float_t         Mlll;
   Float_t         Meff;
   Float_t         Meff_nolep;
   Float_t         eld0Sig1;
   Float_t         eld0Sig2;
   Int_t           njets;
   Int_t           nbjets;
   Int_t           njets40;
   Int_t           nbjets40;
   Int_t           nVtx;
   Int_t           nSigLep;
   Double_t        eventweight;
   Int_t           SR;
   Int_t           runNumber;
   Int_t           eventNumber;
   Int_t           mcChannel;
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
   Float_t         L2dPhib;
   Float_t         L2MT2;
   Float_t         L2Mll;
   Bool_t          L2isEMU;
   Bool_t          L2isMUMU;
   Bool_t          L2isEE;
   Int_t           L2nCentralLightJets;
   Int_t           L2nCentralLightJets30;
   Int_t           L2nCentralLightJets60;
   Float_t         L2dPhiMetL1;
   Float_t         L2dPhiMetL2;
   Float_t         L2MtL1;
   Float_t         L2MtL2;
   Int_t           L2nCentralBJets;
   Int_t           L2nForwardJets;
   Float_t         L2mJJ;
   Float_t         L2dileptonpt;
   Float_t         L2dPhiLL;
   Float_t         L2dRLL;
   Double_t        L2dPhimetLL;
   Float_t         L2mTmetLL;
   Int_t           L2finalState;
   Float_t         L2cjet1pt;
   Float_t         L2cjet2pt;
   Float_t         L2dRJJ;
   Float_t         L2dPhiMetJJ;
   Bool_t          is2tau;
   Bool_t          isinc2tau;
   Bool_t          isZVeto;
   Bool_t          isOST2;
   Float_t         T2MT2;
   Float_t         T2mT12;
   Float_t         T2Meff;
   Float_t         deltaEtaLl;
   Float_t         Ht;
   Float_t         mlj;
   Float_t         mljj;
   Float_t         mtmax;
   Float_t         mtllmet;
   Float_t         met;
   Float_t         metPhi;
   Float_t         jet1Eta;
   Float_t         jet1Phi;
   Float_t         jet2Eta;
   Float_t         jet2Phi;
   Float_t         jet3Eta;
   Float_t         jet3Phi;

   // List of branches
   TBranch        *b_lept1Pt;   //!
   TBranch        *b_lept2Pt;   //!
   TBranch        *b_lept3Pt;   //!
   TBranch        *b_lept4Pt;   //!
   TBranch        *b_lept5Pt;   //!
   TBranch        *b_lept1Eta;   //!
   TBranch        *b_lept2Eta;   //!
   TBranch        *b_lept3Eta;   //!
   TBranch        *b_lept4Eta;   //!
   TBranch        *b_lept5Eta;   //!
   TBranch        *b_lept1Phi;   //!
   TBranch        *b_lept2Phi;   //!
   TBranch        *b_lept3Phi;   //!
   TBranch        *b_lept4Phi;   //!
   TBranch        *b_lept5Phi;   //!
   TBranch        *b_lept1q;   //!
   TBranch        *b_lept2q;   //!
   TBranch        *b_lept3q;   //!
   TBranch        *b_lept4q;   //!
   TBranch        *b_lept5q;   //!
   TBranch        *b_lept1Flav;   //!
   TBranch        *b_lept2Flav;   //!
   TBranch        *b_lept3Flav;   //!
   TBranch        *b_lept4Flav;   //!
   TBranch        *b_lept5Flav;   //!
   TBranch        *b_tau1Pt;   //!
   TBranch        *b_tau2Pt;   //!
   TBranch        *b_tau1Prong;   //!
   TBranch        *b_tau2Prong;   //!
   TBranch        *b_tau1Eta;   //!
   TBranch        *b_tau2Eta;   //!
   TBranch        *b_dPhiLL;   //!
   TBranch        *b_dPhiWZ;   //!
   TBranch        *b_jet1Pt;   //!
   TBranch        *b_jet2Pt;   //!
   TBranch        *b_jet3Pt;   //!
   TBranch        *b_bJet1Pt;   //!
   TBranch        *b_bJet2Pt;   //!
   TBranch        *b_bestZcandidate;   //!
   TBranch        *b_bestZcandidateSFOSl;   //!
   TBranch        *b_bestZcandidateSFOSSFOS;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_Mt;   //!
   TBranch        *b_MtAll;   //!
   TBranch        *b_Mleptau;   //!
   TBranch        *b_Mtautau;   //!
   TBranch        *b_Mlll;   //!
   TBranch        *b_Meff;   //!
   TBranch        *b_Meff_nolep;   //!
   TBranch        *b_eld0Sig1;   //!
   TBranch        *b_eld0Sig2;   //!
   TBranch        *b_njets;   //!
   TBranch        *b_nbjets;   //!
   TBranch        *b_njets40;   //!
   TBranch        *b_nbjets40;   //!
   TBranch        *b_nVtx;   //!
   TBranch        *b_nSigLep;   //!
   TBranch        *b_eventweight;   //!
   TBranch        *b_SR;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_mcChannel;   //!
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
   TBranch        *b_L2dPhib;   //!
   TBranch        *b_L2MT2;   //!
   TBranch        *b_L2Mll;   //!
   TBranch        *b_L2isEMU;   //!
   TBranch        *b_L2isMUMU;   //!
   TBranch        *b_L2isEE;   //!
   TBranch        *b_L2nCentralLightJets;   //!
   TBranch        *b_L2nCentralLightJets30;   //!
   TBranch        *b_L2nCentralLightJets60;   //!
   TBranch        *b_L2dPhiMetL1;   //!
   TBranch        *b_L2dPhiMetL2;   //!
   TBranch        *b_L2MtL1;   //!
   TBranch        *b_L2MtL2;   //!
   TBranch        *b_L2nCentralBJets;   //!
   TBranch        *b_L2nForwardJets;   //!
   TBranch        *b_L2mJJ;   //!
   TBranch        *b_L2dileptonpt;   //!
   TBranch        *b_L2dPhiLL;   //!
   TBranch        *b_L2dRLL;   //!
   TBranch        *b_L2dPhimetLL;   //!
   TBranch        *b_L2mTmetLL;   //!
   TBranch        *b_L2finalState;   //!
   TBranch        *b_L2cjet1pt;   //!
   TBranch        *b_L2cjet2pt;   //!
   TBranch        *b_L2dRJJ;   //!
   TBranch        *b_L2dPhiMetJJ;   //!
   TBranch        *b_is2tau;   //!
   TBranch        *b_isinc2tau;   //!
   TBranch        *b_isZVeto;   //!
   TBranch        *b_isOST2;   //!
   TBranch        *b_T2MT2;   //!
   TBranch        *b_T2mT12;   //!
   TBranch        *b_T2Meff;   //!
   TBranch        *b_deltaEtaLl;   //!
   TBranch        *b_Ht;   //!
   TBranch        *b_mlj;   //!
   TBranch        *b_mljj;   //!
   TBranch        *b_mtmax;   //!
   TBranch        *b_mtllmet;   //!
   TBranch        *b_met;   //!
   TBranch        *b_metPhi;   //!
   TBranch        *b_jet1Eta;   //!
   TBranch        *b_jet1Phi;   //!
   TBranch        *b_jet2Eta;   //!
   TBranch        *b_jet2Phi;   //!
   TBranch        *b_jet3Eta;   //!
   TBranch        *b_jet3Phi;   //!

   C1C1_wSlep_500_100_central(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~C1C1_wSlep_500_100_central() { }
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

   ClassDef(C1C1_wSlep_500_100_central,0);
};

#endif

#ifdef C1C1_wSlep_500_100_central_cxx
void C1C1_wSlep_500_100_central::Init(TTree *tree)
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
   fChain->SetBranchAddress("lept5Pt", &lept5Pt, &b_lept5Pt);
   fChain->SetBranchAddress("lept1Eta", &lept1Eta, &b_lept1Eta);
   fChain->SetBranchAddress("lept2Eta", &lept2Eta, &b_lept2Eta);
   fChain->SetBranchAddress("lept3Eta", &lept3Eta, &b_lept3Eta);
   fChain->SetBranchAddress("lept4Eta", &lept4Eta, &b_lept4Eta);
   fChain->SetBranchAddress("lept5Eta", &lept5Eta, &b_lept5Eta);
   fChain->SetBranchAddress("lept1Phi", &lept1Phi, &b_lept1Phi);
   fChain->SetBranchAddress("lept2Phi", &lept2Phi, &b_lept2Phi);
   fChain->SetBranchAddress("lept3Phi", &lept3Phi, &b_lept3Phi);
   fChain->SetBranchAddress("lept4Phi", &lept4Phi, &b_lept4Phi);
   fChain->SetBranchAddress("lept5Phi", &lept5Phi, &b_lept5Phi);
   fChain->SetBranchAddress("lept1q", &lept1q, &b_lept1q);
   fChain->SetBranchAddress("lept2q", &lept2q, &b_lept2q);
   fChain->SetBranchAddress("lept3q", &lept3q, &b_lept3q);
   fChain->SetBranchAddress("lept4q", &lept4q, &b_lept4q);
   fChain->SetBranchAddress("lept5q", &lept5q, &b_lept5q);
   fChain->SetBranchAddress("lept1Flav", &lept1Flav, &b_lept1Flav);
   fChain->SetBranchAddress("lept2Flav", &lept2Flav, &b_lept2Flav);
   fChain->SetBranchAddress("lept3Flav", &lept3Flav, &b_lept3Flav);
   fChain->SetBranchAddress("lept4Flav", &lept4Flav, &b_lept4Flav);
   fChain->SetBranchAddress("lept5Flav", &lept5Flav, &b_lept5Flav);
   fChain->SetBranchAddress("tau1Pt", &tau1Pt, &b_tau1Pt);
   fChain->SetBranchAddress("tau2Pt", &tau2Pt, &b_tau2Pt);
   fChain->SetBranchAddress("tau1Prong", &tau1Prong, &b_tau1Prong);
   fChain->SetBranchAddress("tau2Prong", &tau2Prong, &b_tau2Prong);
   fChain->SetBranchAddress("tau1Eta", &tau1Eta, &b_tau1Eta);
   fChain->SetBranchAddress("tau2Eta", &tau2Eta, &b_tau2Eta);
   fChain->SetBranchAddress("dPhiLL", &dPhiLL, &b_dPhiLL);
   fChain->SetBranchAddress("dPhiWZ", &dPhiWZ, &b_dPhiWZ);
   fChain->SetBranchAddress("jet1Pt", &jet1Pt, &b_jet1Pt);
   fChain->SetBranchAddress("jet2Pt", &jet2Pt, &b_jet2Pt);
   fChain->SetBranchAddress("jet3Pt", &jet3Pt, &b_jet3Pt);
   fChain->SetBranchAddress("bJet1Pt", &bJet1Pt, &b_bJet1Pt);
   fChain->SetBranchAddress("bJet2Pt", &bJet2Pt, &b_bJet2Pt);
   fChain->SetBranchAddress("bestZcandidate", &bestZcandidate, &b_bestZcandidate);
   fChain->SetBranchAddress("bestZcandidateSFOSl", &bestZcandidateSFOSl, &b_bestZcandidateSFOSl);
   fChain->SetBranchAddress("bestZcandidateSFOSSFOS", &bestZcandidateSFOSSFOS, &b_bestZcandidateSFOSSFOS);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("Mt", &Mt, &b_Mt);
   fChain->SetBranchAddress("MtAll", &MtAll, &b_MtAll);
   fChain->SetBranchAddress("Mleptau", &Mleptau, &b_Mleptau);
   fChain->SetBranchAddress("Mtautau", &Mtautau, &b_Mtautau);
   fChain->SetBranchAddress("Mlll", &Mlll, &b_Mlll);
   fChain->SetBranchAddress("Meff", &Meff, &b_Meff);
   fChain->SetBranchAddress("Meff_nolep", &Meff_nolep, &b_Meff_nolep);
   fChain->SetBranchAddress("eld0Sig1", &eld0Sig1, &b_eld0Sig1);
   fChain->SetBranchAddress("eld0Sig2", &eld0Sig2, &b_eld0Sig2);
   fChain->SetBranchAddress("njets", &njets, &b_njets);
   fChain->SetBranchAddress("nbjets", &nbjets, &b_nbjets);
   fChain->SetBranchAddress("njets40", &njets40, &b_njets40);
   fChain->SetBranchAddress("nbjets40", &nbjets40, &b_nbjets40);
   fChain->SetBranchAddress("nVtx", &nVtx, &b_nVtx);
   fChain->SetBranchAddress("nSigLep", &nSigLep, &b_nSigLep);
   fChain->SetBranchAddress("eventweight", &eventweight, &b_eventweight);
   fChain->SetBranchAddress("SR", &SR, &b_SR);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("mcChannel", &mcChannel, &b_mcChannel);
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
   fChain->SetBranchAddress("L2dPhib", &L2dPhib, &b_L2dPhib);
   fChain->SetBranchAddress("L2MT2", &L2MT2, &b_L2MT2);
   fChain->SetBranchAddress("L2Mll", &L2Mll, &b_L2Mll);
   fChain->SetBranchAddress("L2isEMU", &L2isEMU, &b_L2isEMU);
   fChain->SetBranchAddress("L2isMUMU", &L2isMUMU, &b_L2isMUMU);
   fChain->SetBranchAddress("L2isEE", &L2isEE, &b_L2isEE);
   fChain->SetBranchAddress("L2nCentralLightJets", &L2nCentralLightJets, &b_L2nCentralLightJets);
   fChain->SetBranchAddress("L2nCentralLightJets30", &L2nCentralLightJets30, &b_L2nCentralLightJets30);
   fChain->SetBranchAddress("L2nCentralLightJets60", &L2nCentralLightJets60, &b_L2nCentralLightJets60);
   fChain->SetBranchAddress("L2dPhiMetL1", &L2dPhiMetL1, &b_L2dPhiMetL1);
   fChain->SetBranchAddress("L2dPhiMetL2", &L2dPhiMetL2, &b_L2dPhiMetL2);
   fChain->SetBranchAddress("L2MtL1", &L2MtL1, &b_L2MtL1);
   fChain->SetBranchAddress("L2MtL2", &L2MtL2, &b_L2MtL2);
   fChain->SetBranchAddress("L2nCentralBJets", &L2nCentralBJets, &b_L2nCentralBJets);
   fChain->SetBranchAddress("L2nForwardJets", &L2nForwardJets, &b_L2nForwardJets);
   fChain->SetBranchAddress("L2mJJ", &L2mJJ, &b_L2mJJ);
   fChain->SetBranchAddress("L2dileptonpt", &L2dileptonpt, &b_L2dileptonpt);
   fChain->SetBranchAddress("L2dPhiLL", &L2dPhiLL, &b_L2dPhiLL);
   fChain->SetBranchAddress("L2dRLL", &L2dRLL, &b_L2dRLL);
   fChain->SetBranchAddress("L2dPhimetLL", &L2dPhimetLL, &b_L2dPhimetLL);
   fChain->SetBranchAddress("L2mTmetLL", &L2mTmetLL, &b_L2mTmetLL);
   fChain->SetBranchAddress("L2finalState", &L2finalState, &b_L2finalState);
   fChain->SetBranchAddress("L2cjet1pt", &L2cjet1pt, &b_L2cjet1pt);
   fChain->SetBranchAddress("L2cjet2pt", &L2cjet2pt, &b_L2cjet2pt);
   fChain->SetBranchAddress("L2dRJJ", &L2dRJJ, &b_L2dRJJ);
   fChain->SetBranchAddress("L2dPhiMetJJ", &L2dPhiMetJJ, &b_L2dPhiMetJJ);
   fChain->SetBranchAddress("is2tau", &is2tau, &b_is2tau);
   fChain->SetBranchAddress("isinc2tau", &isinc2tau, &b_isinc2tau);
   fChain->SetBranchAddress("isZVeto", &isZVeto, &b_isZVeto);
   fChain->SetBranchAddress("isOST2", &isOST2, &b_isOST2);
   fChain->SetBranchAddress("T2MT2", &T2MT2, &b_T2MT2);
   fChain->SetBranchAddress("T2mT12", &T2mT12, &b_T2mT12);
   fChain->SetBranchAddress("T2Meff", &T2Meff, &b_T2Meff);
   fChain->SetBranchAddress("deltaEtaLl", &deltaEtaLl, &b_deltaEtaLl);
   fChain->SetBranchAddress("Ht", &Ht, &b_Ht);
   fChain->SetBranchAddress("mlj", &mlj, &b_mlj);
   fChain->SetBranchAddress("mljj", &mljj, &b_mljj);
   fChain->SetBranchAddress("mtmax", &mtmax, &b_mtmax);
   fChain->SetBranchAddress("mtllmet", &mtllmet, &b_mtllmet);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("metPhi", &metPhi, &b_metPhi);
   fChain->SetBranchAddress("jet1Eta", &jet1Eta, &b_jet1Eta);
   fChain->SetBranchAddress("jet1Phi", &jet1Phi, &b_jet1Phi);
   fChain->SetBranchAddress("jet2Eta", &jet2Eta, &b_jet2Eta);
   fChain->SetBranchAddress("jet2Phi", &jet2Phi, &b_jet2Phi);
   fChain->SetBranchAddress("jet3Eta", &jet3Eta, &b_jet3Eta);
   fChain->SetBranchAddress("jet3Phi", &jet3Phi, &b_jet3Phi);
}

Bool_t C1C1_wSlep_500_100_central::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef C1C1_wSlep_500_100_central_cxx
