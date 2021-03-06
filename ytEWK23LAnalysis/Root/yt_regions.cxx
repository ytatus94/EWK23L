#define YT_REGIONS_CXX
#include "ytEWK23LAnalysis/yt_regions.h"

ClassImp(yt_regions)

yt_regions::yt_regions()
{}

yt_regions::~yt_regions()
{}


//
// Basic cuts
//

bool yt_regions::pass_baseTwoLepCuts(float lept1Pt, float lept2Pt,
                                     bool isEMU, bool isEE, bool isMUMU,
                                     float Mll,
                                     float lept1q, float lept2q)
{
    if (lept1Pt > 25. * GeV && lept2Pt > 20. * GeV &&
        (isEMU || isEE || isMUMU) && 
        Mll > 40. * GeV && // a dilepton invariant mass of at least 40 GeV is required
        (lept1q + lept2q) == 0)
        return true;
    else
        return false;
}

bool yt_regions::pass_sameFlavorLep(bool isEMU, bool isEE, bool isMUMU)
{
    bool pass_sameFlavorLep = false;
    // Direct-Slepton require same flavor
    if (isEE || isMUMU)
        pass_sameFlavorLep = true;
    else if (isEMU) // Chagino pairs accept different flavor
        pass_sameFlavorLep = false;
    return pass_sameFlavorLep;
}

bool yt_regions::pass_ZVeto(float Mll)
{
    if (fabs(Mll / 1000. - 91.2) > 20.) // in GeV
        return true;
    else
        return false;
}

bool yt_regions::pass_JetVeto(int nCentralBJets, int nCentralLightJets60)
{
    // events are required to have zero b-tagged jets and zero central light jets
    if (nCentralBJets == 0 && nCentralLightJets60 == 0)
        return true;
    else
        return false;
}

bool yt_regions::pass_bjet_veto(int nCentralBJets)
{
    if (nCentralBJets == 0)
        return true;
    else
        return false;
}

bool yt_regions::pass_at_least_two_jets30(int nCentralLightJets30)
{
    if (nCentralLightJets30 >= 2)
        return true;
    else
        return false;
}

bool yt_regions::pass_thrid_jet_pT(float pT)
{
    if (pT > 30 * GeV)
        return true;
    else
        return false;
}

bool yt_regions::pass_mll(string s, float Mll)
{
    bool pass_mll = false;
    if (s == "medium" || s == "high" || s == "low_2jets") {
        // 81 < mll < 101
        if (fabs(Mll / 1000. - 91.2) < 10.) // in GeV
            pass_mll = true;
        else
            pass_mll = false;
    }
    else if (s == "low_3-5jets") {
        // 86 < mll < 96
        if (fabs(Mll / 1000. - 91.2) < 5.) // in GeV
            pass_mll = true;
        else
            pass_mll = false;
    }
    return pass_mll;
    
}

bool yt_regions::pass_Z_pT(string s, float Z_pT)
{
    bool pass_Z_pT = false;
    if (s == "medium" || s == "high") {
        if (Z_pT > 80. * GeV)
            pass_Z_pT = true;
        else
            pass_Z_pT = false;
    }
    else if (s == "low_2jets") {
        if (Z_pT > 60. * GeV)
            pass_Z_pT = true;
        else
            pass_Z_pT = false;
    }
    else if (s == "low_3-5jets") {
        if (Z_pT > 40. * GeV)
            pass_Z_pT = true;
        else
            pass_Z_pT = false;
    }
    return pass_Z_pT;
}

bool yt_regions::pass_W_pT(float W_pT)
{
    if (W_pT > 100. * GeV)
        return true;
    else
        return false;
}

bool yt_regions::pass_Z_eta(float Z_eta)
{
    if (Z_eta < 1.6)
        return true;
    else
        return false;
}

bool yt_regions::pass_MET(string s, float MET)
{
    bool pass_MET = false;
    if (s == "high") {
        if (MET > 250. * GeV)
            pass_MET = true;
        else
            pass_MET = false;
    }
    else if (s == "medium") {
        if (MET > 150. * GeV)
            pass_MET = true;
        else
            pass_MET = false;
    }
    else if (s == "low") {
        if (MET > 100. * GeV)
            pass_MET = true;
        else
            pass_MET = false;
    }
    return pass_MET;
}

bool yt_regions::pass_MT2(float MT2)
{
    if (MT2 > 100. * GeV)
        return true;
    else
        return false;
}

bool yt_regions::pass_deltaR_jj(string s, float dR_JJ)
{
    bool pass_deltaR_jj = false;
    if (s == "medium" || s == "high") {
        if (dR_JJ < 1.5)
            pass_deltaR_jj = true;
        else
            pass_deltaR_jj = false;
    }
    else if (s == "low") {
        if (dR_JJ < 2.2)
            pass_deltaR_jj = true;
        else
            pass_deltaR_jj = false;
    }
    return pass_deltaR_jj;
}

bool yt_regions::pass_deltaR_ll(float dR_LL)
{
    if (dR_LL < 1.8)
        return true;
    else
        return false;
}

bool yt_regions::pass_deltaPhi_MET_Z(float dPhi_MET_Z)
{
    if (dPhi_MET_Z < 0.8)
        return true;
    else
        return false;
}

bool yt_regions::pass_deltaPhi_MET_W(string s, float dPhi_MET_W)
{
    bool pass_deltaPhi_MET_W = false;
    if (s == "medium" || s == "high") {
        if (dPhi_MET_W > 0.5 && dPhi_MET_W < 3.0)
            pass_deltaPhi_MET_W = true;
        else
            pass_deltaPhi_MET_W = false;
    }
    else if (s == "low_2jets") {
        if (dPhi_MET_W > 1.5)
            pass_deltaPhi_MET_W = true;
        else
            pass_deltaPhi_MET_W = false;
    }
    else if (s == "low_3-5jets") {
        if (dPhi_MET_W < 2.2)
            pass_deltaPhi_MET_W = true;
        else
            pass_deltaPhi_MET_W = false;
    }
    return pass_deltaPhi_MET_W;
        
}

bool yt_regions::pass_deltaPhi_MET_ISR(float dPhi_MET_ISR)
{
    if (dPhi_MET_ISR > 2.4)
        return true;
    else
        return false;
}

bool yt_regions::pass_deltaPhi_MET_J0(float dPhi_MET_J0)
{
    if (dPhi_MET_J0 > 2.6)
        return true;
    else
        return false;
}

bool yt_regions::pass_mjj(string s, float MJJ)
{
    bool pass_mjj = false;
    if (s == "medium" || s == "high") {
        if (MJJ > 70. * GeV && MJJ < 100. * GeV)
            pass_mjj = true;
        else
            pass_mjj =  false;
    }
    else if (s == "low") {
        if (MJJ > 70. * GeV && MJJ < 90. * GeV)
            pass_mjj =  true;
        else
            pass_mjj =  false;
    }
    return pass_mjj;
}

bool yt_regions::pass_MET_over_Z_pT(float MET_over_Z_pT)
{
    if (MET_over_Z_pT > 0.6 && MET_over_Z_pT < 1.6)
        return true;
    else
        return false;
}

bool yt_regions::pass_MET_over_W_pT(float MET_over_W_pT)
{
    if (MET_over_W_pT < 0.8)
        return true;
    else
        return false;
}

bool yt_regions::pass_MET_over_ISR(float MET_over_ISR)
{
    if (MET_over_ISR > 0.4 && MET_over_ISR < 0.8)
        return true;
    else
        return false;   
}


//
//
//

bool yt_regions::pass_SR2LLoose(float MT2, float Mll)
{
    if (MT2 > 100. * GeV && Mll > 111. * GeV)
        return true;
    else
        return false;
}

bool yt_regions::pass_SR2LTight(float MT2, float Mll)
{
    if (MT2 > 130. * GeV && Mll > 300. * GeV)
        return true;
    else
        return false;
}

bool yt_regions::pass_SR2LbinA(float MT2, float Mll)
{
    if (MT2 > 100. * 1000. && MT2 < 150. * 1000. && Mll > 111. * 1000)
        return true;
    else
        return false;
}

bool yt_regions::pass_SR2LbinB(float MT2, float Mll)
{
    if (MT2 > 150. * 1000. && MT2 < 200. * 1000. && Mll > 111. * 1000.)
        return true;
    else
        return false;
}

bool yt_regions::pass_SR2LbinC(float MT2, float Mll)
{
    if (MT2 > 200. * 1000. && MT2 < 300. * 1000. && Mll > 111. * 1000.)
        return true;
    else
        return false;
}

bool yt_regions::pass_SR2LbinD(float MT2, float Mll)
{
    if (MT2 > 300. * 1000. && Mll > 111. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin1(float MT2, float Mll)
{
    if (MT2 > 100. * 1000. && MT2 < 150. * 1000. && Mll > 111. * 1000. && Mll < 150. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin2(float MT2, float Mll)
{
    if (MT2 > 100. * 1000. && MT2 < 150. * 1000. && Mll > 150. * 1000. && Mll < 200. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin3(float MT2, float Mll)
{
    if (MT2 > 100. * 1000. && MT2 < 150. * 1000. && Mll > 200. * 1000. && Mll < 300. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin4(float MT2, float Mll)
{
    if (MT2 > 100. * 1000. && MT2 < 150. * 1000. && Mll > 300. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin5(float MT2, float Mll)
{
    if (MT2 > 150. * 1000. && MT2 < 200. * 1000. && Mll > 111. * 1000. && Mll < 150. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin6(float MT2, float Mll)
{
    if (MT2 > 150. * 1000. && MT2 < 200. * 1000. && Mll > 150. * 1000. && Mll < 200. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin7(float MT2, float Mll)
{
    if (MT2 > 150. * 1000. && MT2 < 200. * 1000. && Mll > 200. * 1000. && Mll < 300. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin8(float MT2, float Mll)
{
    if (MT2 > 150. * 1000. && MT2 < 200. * 1000. && Mll > 300. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin9(float MT2, float Mll)
{
    if (MT2 > 200. * 1000. && MT2 < 300. * 1000. && Mll > 111. * 1000. && Mll < 150. * 1000)
        return true;
    else
        return false;
}

bool pass_SR2Lbin10(float MT2, float Mll)
{
    if (MT2 > 200. * 1000. && MT2 < 300. * 1000. && Mll > 150. * 1000. && Mll < 200. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin11(float MT2, float Mll)
{
    if (MT2 > 200. * 1000. && MT2 < 300. * 1000. && Mll > 200. * 1000. && Mll < 300. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin12(float MT2, float Mll)
{
    if (MT2 > 200. * 1000. && MT2 < 300. * 1000. && Mll > 300. * 1000.)
        return true;
    else
        return false;
}

bool pass_SR2Lbin13(float MT2, float Mll)
{
    if (MT2 > 300. * 1000. && Mll > 111. * 1000.)
        return true;
    else
        return false;
}
