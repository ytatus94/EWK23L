//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr 24 19:51:39 2017 by ROOT version 6.04/16
// from TTree SMAwnoslep_2L2J_700_100_CENTRAL/baseline tree
// found on file: CentralSignals.root
//////////////////////////////////////////////////////////

#ifndef SMAwnoslep_2L2J_700_100_CENTRAL_h
#define SMAwnoslep_2L2J_700_100_CENTRAL_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.

class SMAwnoslep_2L2J_700_100_CENTRAL : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           SASR2LI;
   Int_t           SASR2LH;
   Int_t           SASR2LC2j;
   Int_t           SASR2LC3j;
   Int_t           SACRVVI;
   Int_t           SACRVVC;
   Double_t        eventweight;

   // List of branches
   TBranch        *b_SASR2LI;   //!
   TBranch        *b_SASR2LH;   //!
   TBranch        *b_SASR2LC2j;   //!
   TBranch        *b_SASR2LC3j;   //!
   TBranch        *b_SACRVVI;   //!
   TBranch        *b_SACRVVC;   //!
   TBranch        *b_eventweight;   //!

   SMAwnoslep_2L2J_700_100_CENTRAL(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~SMAwnoslep_2L2J_700_100_CENTRAL() { }
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

   ClassDef(SMAwnoslep_2L2J_700_100_CENTRAL,0);
};

#endif

#ifdef SMAwnoslep_2L2J_700_100_CENTRAL_cxx
void SMAwnoslep_2L2J_700_100_CENTRAL::Init(TTree *tree)
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

   fChain->SetBranchAddress("SASR2LI", &SASR2LI, &b_SASR2LI);
   fChain->SetBranchAddress("SASR2LH", &SASR2LH, &b_SASR2LH);
   fChain->SetBranchAddress("SASR2LC2j", &SASR2LC2j, &b_SASR2LC2j);
   fChain->SetBranchAddress("SASR2LC3j", &SASR2LC3j, &b_SASR2LC3j);
   fChain->SetBranchAddress("SACRVVI", &SACRVVI, &b_SACRVVI);
   fChain->SetBranchAddress("SACRVVC", &SACRVVC, &b_SACRVVC);
   fChain->SetBranchAddress("eventweight", &eventweight, &b_eventweight);
}

Bool_t SMAwnoslep_2L2J_700_100_CENTRAL::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef SMAwnoslep_2L2J_700_100_CENTRAL_cxx
