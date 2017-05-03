#ifndef ytEventSelection_ytEventSelection_H
#define ytEventSelection_ytEventSelection_H

#include <EventLoop/Algorithm.h>

#include <TROOT.h>
#include <TChain.h>
// #include <TFile.h>
// #include <TString.h>
// #include <TCanvas.h>
// #include <TLegend.h>
// #include <TH1.h>

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <typeinfo>
#include <algorithm>
using namespace std;

class ytEventSelection : public EL::Algorithm
{
    // put your configuration variables here as public variables.
    // that way they can be set directly from CINT and python.
public:
    // float cutValue;



    // variables that don't get filled at submission time should be
    // protected from being send from the submission node to the worker
    // node (done by the //!)
public:
    // Tree *myTree; //!
    // TH1 *myHist; //!
    //
    // Tree and branches copy from TSelector
    //
    TTree          *fChain;   //!pointer to the analyzed TTree or TChain

    // Declaration of leaf types
    Float_t         lept1Pt; //!
    Float_t         lept2Pt; //!
    Float_t         lept3Pt; //!
    Float_t         lept4Pt; //!
    Float_t         lept1Eta; //!
    Float_t         lept2Eta; //!
    Float_t         lept3Eta; //!
    Float_t         lept4Eta; //!
    Float_t         lept1Phi; //!
    Float_t         lept2Phi; //!
    Float_t         lept3Phi; //!
    Float_t         lept4Phi; //!
    Float_t         lept1q; //!
    Float_t         lept2q; //!
    Float_t         lept3q; //!
    Float_t         lept4q; //!
    Int_t           lept1Flav; //!
    Int_t           lept2Flav; //!
    Int_t           lept3Flav; //!
    Int_t           lept4Flav; //!
    Float_t         jet1Pt; //!
    Float_t         jet2Pt; //!
    Float_t         jet3Pt; //!
    Float_t         bJet1Pt; //!
    Float_t         bJet2Pt; //!
    Float_t         MET; //!
    Float_t         Mt; //!
    Float_t         Meff; //!
    Int_t           njets; //!
    Int_t           nCentralLightJets; //!
    Int_t           nbjets; //!
    Int_t           nVtx; //!
    Int_t           nSigLep; //!
    Double_t        eventweight; //!
    Int_t           SR; //!
    Int_t           runNumber; //!
    Int_t           eventNumber; //!
    Int_t           mcChannel; //!
    Bool_t          passtrigger; //!
    Bool_t          passtriggermatch; //!
    Float_t         L2MT2; //!
    Float_t         L2Mll; //!
    Int_t           L2nCentralLightJets; //!
    Int_t           L2nCentralLightJets30; //!
    Int_t           L2nCentralLightJets60; //!
    Int_t           L2nCentralBJets; //!
    Int_t           L2nForwardJets; //!
    Float_t         L2mJJ; //!
    Float_t         L2dileptonpt; //!
    Float_t         L2dPhiLL; //!
    Float_t         L2dRLL; //!
    Float_t         L2dPhiWZ; //!
    Float_t         L2dPhimetW; //!
    Float_t         L2dPhimetZ; //!
    Float_t         L2dRJJ; //!
    Float_t         L2dPhimetjets; //!
    Double_t        L2dPhimetLL; //!
    Float_t         leptPtSumVec; //!
    Float_t         Mlll; //!
    Float_t         bestZcandidate; //!
    Float_t         L3Mll; //!
    Float_t         L3Mt; //!
    Int_t           RJSR2L1H; //!
    Int_t           RJSR2L2I; //!
    Int_t           RJSR2L3C; //!
    Int_t           RJSR2L4C; //!
    Int_t           RJCR2LVVH; //!
    Int_t           RJVR2LVVH; //!
    Int_t           RJCR2LTopH; //!
    Int_t           RJVR2LTopH; //!
    Int_t           RJCR2LVVC; //!
    Int_t           RJVR2LVVC; //!
    Int_t           RJCR2LTopC; //!
    Int_t           RJVR2LTopC; //!
    Int_t           RJVR2LZ2jC; //!
    Int_t           RJVR2LZ3jC; //!
    Int_t           RJSR3L1H; //!
    Int_t           RJSR3L2I; //!
    Int_t           RJSR3L3C; //!
    Int_t           RJSR3L4C; //!
    Int_t           RJCR3LVVH; //!
    Int_t           RJVR3LVVH; //!
    Int_t           RJCR3LVVC; //!
    Int_t           RJVR3LVVC; //!
    Float_t         RJPTCM; //!
    Float_t         RJPTISR; //!
    Float_t         RJPTI; //!
    Float_t         RJRISR; //!
    Float_t         RJdphiISRI; //!
    Float_t         RJMZ; //!
    Float_t         RJMJ; //!
    Int_t           RJNjS; //!
    Int_t           RJNjISR; //!
    Float_t         RJPTCM_VR; //!
    Float_t         RJPTISR_VR; //!
    Float_t         RJPTI_VR; //!
    Float_t         RJRISR_VR; //!
    Float_t         RJdphiISRI_VR; //!
    Float_t         RJMZ_VR; //!
    Float_t         RJMJ_VR; //!
    Int_t           RJNjS_VR; //!
    Int_t           RJNjISR_VR; //!
    Float_t         RJH2PP; //!
    Float_t         RJH2PP_VR; //!
    Float_t         RJH4PP; //!
    Float_t         RJHT4PP; //!
    Float_t         RJH5PP; //!
    Float_t         RJH5PP_VR; //!
    Float_t         RJHT5PP; //!
    Float_t         RJHT5PP_VR; //!
    Float_t         RJR_minH2P_minH3P; //!
    Float_t         RJR_minH2P_minH3P_VR; //!
    Float_t         RJR_HT4PP_H4PP; //!
    Float_t         RJRPT_HT5PP; //!
    Float_t         RJRPT_HT5PP_VR; //!
    Float_t         RJdphiVP; //!
    Float_t         RJdphiVP_VR; //!
    Float_t         RJdphiPPV; //!
    Float_t         syst_FT_EFF_B_down; //!
    Float_t         syst_FT_EFF_B_up; //!
    Float_t         syst_FT_EFF_C_down; //!
    Float_t         syst_FT_EFF_C_up; //!
    Float_t         syst_FT_EFF_Light_down; //!
    Float_t         syst_FT_EFF_Light_up; //!
    Float_t         syst_FT_EFF_extrapolation_down; //!
    Float_t         syst_FT_EFF_extrapolation_up; //!
    Float_t         syst_FT_EFF_extrapolationFromCharm_down; //!
    Float_t         syst_FT_EFF_extrapolationFromCharm_up; //!
    Float_t         syst_EL_EFF_ID_TOTAL_UncorrUncertainty_down; //!
    Float_t         syst_EL_EFF_ID_TOTAL_UncorrUncertainty_up; //!
    Float_t         syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_down; //!
    Float_t         syst_EL_EFF_Iso_TOTAL_UncorrUncertainty_up; //!
    Float_t         syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_down; //!
    Float_t         syst_EL_EFF_Reco_TOTAL_UncorrUncertainty_up; //!
    Float_t         syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_down; //!
    Float_t         syst_EL_EFF_Trigger_TOTAL_UncorrUncertainty_up; //!
    Float_t         syst_MUON_EFF_STAT_down; //!
    Float_t         syst_MUON_EFF_STAT_up; //!
    Float_t         syst_MUON_EFF_SYS_down; //!
    Float_t         syst_MUON_EFF_SYS_up; //!
    Float_t         syst_MUON_EFF_TrigStatUncertainty_down; //!
    Float_t         syst_MUON_EFF_TrigStatUncertainty_up; //!
    Float_t         syst_MUON_EFF_TrigSystUncertainty_down; //!
    Float_t         syst_MUON_EFF_TrigSystUncertainty_up; //!
    Float_t         syst_MUON_ISO_STAT_down; //!
    Float_t         syst_MUON_ISO_STAT_up; //!
    Float_t         syst_MUON_ISO_SYS_down; //!
    Float_t         syst_MUON_ISO_SYS_up; //!
    Float_t         syst_EL_EFF_TriggerEff_down; //!
    Float_t         syst_EL_EFF_TriggerEff_up; //!
    Float_t         syst_MUON_EFF_STAT_LOWPT_down; //!
    Float_t         syst_MUON_EFF_STAT_LOWPT_up; //!
    Float_t         syst_MUON_EFF_SYS_LOWPT_down; //!
    Float_t         syst_MUON_EFF_SYS_LOWPT_up; //!
    Float_t         syst_MUON_TTVA_STAT_down; //!
    Float_t         syst_MUON_TTVA_STAT_up; //!
    Float_t         syst_MUON_TTVA_SYS_down; //!
    Float_t         syst_MUON_TTVA_SYS_up; //!
    Float_t         syst_jvtSF_up; //!
    Float_t         syst_jvtSF_down; //!

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
    TBranch        *b_syst_EL_EFF_TriggerEff_down;   //!
    TBranch        *b_syst_EL_EFF_TriggerEff_up;   //!
    TBranch        *b_syst_MUON_EFF_STAT_LOWPT_down;   //!
    TBranch        *b_syst_MUON_EFF_STAT_LOWPT_up;   //!
    TBranch        *b_syst_MUON_EFF_SYS_LOWPT_down;   //!
    TBranch        *b_syst_MUON_EFF_SYS_LOWPT_up;   //!
    TBranch        *b_syst_MUON_TTVA_STAT_down;   //!
    TBranch        *b_syst_MUON_TTVA_STAT_up;   //!
    TBranch        *b_syst_MUON_TTVA_SYS_down;   //!
    TBranch        *b_syst_MUON_TTVA_SYS_up;   //!
    TBranch        *b_syst_jvtSF_up;   //!
    TBranch        *b_syst_jvtSF_down;   //!

    // this is a standard constructor
    ytEventSelection ();

    // these are the functions inherited from Algorithm
    virtual EL::StatusCode setupJob (EL::Job& job);
    virtual EL::StatusCode fileExecute ();
    virtual EL::StatusCode histInitialize ();
    virtual EL::StatusCode changeInput (bool firstFile);
    virtual EL::StatusCode initialize ();
    virtual EL::StatusCode execute ();
    virtual EL::StatusCode postExecute ();
    virtual EL::StatusCode finalize ();
    virtual EL::StatusCode histFinalize ();

    // this is needed to distribute the algorithm to the workers
    ClassDef(ytEventSelection, 1);
};

#endif
