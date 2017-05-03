#include <EventLoop/Job.h>
#include <EventLoop/StatusCode.h>
#include <EventLoop/Worker.h>
#include <ytEWK23LAnalysis/ytEventSelection.h>

// this is needed to distribute the algorithm to the workers
ClassImp(ytEventSelection)



ytEventSelection :: ytEventSelection ()
{
    // Here you put any code for the base initialization of variables,
    // e.g. initialize all pointers to 0.  Note that you should only put
    // the most basic initialization here, since this method will be
    // called on both the submission and the worker node.  Most of your
    // initialization code will go into histInitialize() and
    // initialize().
}



EL::StatusCode ytEventSelection :: setupJob (EL::Job& job)
{
    // Here you put code that sets up the job on the submission object
    // so that it is ready to work with your algorithm, e.g. you can
    // request the D3PDReader service or add output files.  Any code you
    // put here could instead also go into the submission script.  The
    // sole advantage of putting it here is that it gets automatically
    // activated/deactivated when you add/remove the algorithm from your
    // job, which may or may not be of value to you.
    return EL::StatusCode::SUCCESS;
}



EL::StatusCode ytEventSelection :: histInitialize ()
{
    // Here you do everything that needs to be done at the very
    // beginning on each worker node, e.g. create histograms and output
    // trees.  This method gets called before any input files are
    // connected.
    return EL::StatusCode::SUCCESS;
}



EL::StatusCode ytEventSelection :: fileExecute ()
{
    // Here you do everything that needs to be done exactly once for every
    // single file, e.g. collect a list of all lumi-blocks processed
    return EL::StatusCode::SUCCESS;
}



EL::StatusCode ytEventSelection :: changeInput (bool firstFile)
{
    // Here you do everything you need to do when we change input files,
    // e.g. resetting branch addresses on trees.  If you are using
    // D3PDReader or a similar service this method is not needed.

    // Set branch addresses and branch pointers
    fChain = wk()->tree();
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
    fChain->SetBranchAddress("syst_EL_EFF_TriggerEff_down", &syst_EL_EFF_TriggerEff_down, &b_syst_EL_EFF_TriggerEff_down);
    fChain->SetBranchAddress("syst_EL_EFF_TriggerEff_up", &syst_EL_EFF_TriggerEff_up, &b_syst_EL_EFF_TriggerEff_up);
    fChain->SetBranchAddress("syst_MUON_EFF_STAT_LOWPT_down", &syst_MUON_EFF_STAT_LOWPT_down, &b_syst_MUON_EFF_STAT_LOWPT_down);
    fChain->SetBranchAddress("syst_MUON_EFF_STAT_LOWPT_up", &syst_MUON_EFF_STAT_LOWPT_up, &b_syst_MUON_EFF_STAT_LOWPT_up);
    fChain->SetBranchAddress("syst_MUON_EFF_SYS_LOWPT_down", &syst_MUON_EFF_SYS_LOWPT_down, &b_syst_MUON_EFF_SYS_LOWPT_down);
    fChain->SetBranchAddress("syst_MUON_EFF_SYS_LOWPT_up", &syst_MUON_EFF_SYS_LOWPT_up, &b_syst_MUON_EFF_SYS_LOWPT_up);
    fChain->SetBranchAddress("syst_MUON_TTVA_STAT_down", &syst_MUON_TTVA_STAT_down, &b_syst_MUON_TTVA_STAT_down);
    fChain->SetBranchAddress("syst_MUON_TTVA_STAT_up", &syst_MUON_TTVA_STAT_up, &b_syst_MUON_TTVA_STAT_up);
    fChain->SetBranchAddress("syst_MUON_TTVA_SYS_down", &syst_MUON_TTVA_SYS_down, &b_syst_MUON_TTVA_SYS_down);
    fChain->SetBranchAddress("syst_MUON_TTVA_SYS_up", &syst_MUON_TTVA_SYS_up, &b_syst_MUON_TTVA_SYS_up);
    fChain->SetBranchAddress("syst_jvtSF_up", &syst_jvtSF_up, &b_syst_jvtSF_up);
    fChain->SetBranchAddress("syst_jvtSF_down", &syst_jvtSF_down, &b_syst_jvtSF_down);

    return EL::StatusCode::SUCCESS;
}



EL::StatusCode ytEventSelection :: initialize ()
{
    // Here you do everything that you need to do after the first input
    // file has been connected and before the first event is processed,
    // e.g. create additional histograms based on which variables are
    // available in the input files.  You can also create all of your
    // histograms and trees in here, but be aware that this method
    // doesn't get called if no events are processed.  So any objects
    // you create here won't be available in the output if you have no
    // input events.
    return EL::StatusCode::SUCCESS;
}



EL::StatusCode ytEventSelection :: execute ()
{
    // Here you do everything that needs to be done on every single
    // events, e.g. read input variables, apply cuts, and fill
    // histograms and trees.  This is where most of your actual analysis
    // code will go.

    wk()->tree()->GetEntry(wk()->treeEntry());

    return EL::StatusCode::SUCCESS;
}



EL::StatusCode ytEventSelection :: postExecute ()
{
    // Here you do everything that needs to be done after the main event
    // processing.  This is typically very rare, particularly in user
    // code.  It is mainly used in implementing the NTupleSvc.
    return EL::StatusCode::SUCCESS;
}



EL::StatusCode ytEventSelection :: finalize ()
{
    // This method is the mirror image of initialize(), meaning it gets
    // called after the last event has been processed on the worker node
    // and allows you to finish up any objects you created in
    // initialize() before they are written to disk.  This is actually
    // fairly rare, since this happens separately for each worker node.
    // Most of the time you want to do your post-processing on the
    // submission node after all your histogram outputs have been
    // merged.  This is different from histFinalize() in that it only
    // gets called on worker nodes that processed input events.
    return EL::StatusCode::SUCCESS;
}



EL::StatusCode ytEventSelection :: histFinalize ()
{
    // This method is the mirror image of histInitialize(), meaning it
    // gets called after the last event has been processed on the worker
    // node and allows you to finish up any objects you created in
    // histInitialize() before they are written to disk.  This is
    // actually fairly rare, since this happens separately for each
    // worker node.  Most of the time you want to do your
    // post-processing on the submission node after all your histogram
    // outputs have been merged.  This is different from finalize() in
    // that it gets called on all worker nodes regardless of whether
    // they processed input events.
    return EL::StatusCode::SUCCESS;
}
