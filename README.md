# EWK23L
This is for the EWK 2/3L study.

### v04.
1. In `ytEventSelection.h`
  * Add `yt_regions` object and three data members `isOptimization`, `analysis_type`, and `weighted_event_counts`
  * Add two methods `set_isOptimization()` and `set_analysis_type()`
  * Add histograms `h_SR2L0J_DirSlep`, h_SR2L0J`, and `h_SR2L2J_Conv_High_Med_Low`
  * Add Sarah's ntuple variables
2. In `ytEventSelection.cxx`
  * Initialize `m_region`, `weighted_event_counts`, and histograms
  * Add 2L0J_DirSlep, 2L0J, 2L2J_Conv_High, 2L2J_Conv_Med, and 2L2J_Conv_Med SR cuts
  * Print `weighted_event_counts` results.

### v03. Add new class yt_regions
1. Use AnalysisBase,2.4.29
2. Add EventLoopGrid and SampleHandler packages in the dependency
3. Add `yt_regions` class header and implementation files. Also add in `LinkDef.h`
4. Add steering macro `Run.cxx`


### v02. Change ytEWK23LAnalysis to ytEventSelection
1. Change `ytEWK23LAnalysis.h` to `ytEventSelection.h`.
2. Change `ytEWK23LAnalysis.cxx` to `ytEventSelection.cxx`.
3. In `LinkDef.h`: modify `ytEWK23LAnalysis` to `ytEventSelection`


### v01. Create the EventLoop structure
1. Create the EL structure
2. Add Sarah's ntuples
3. Add Nicky's ntuples
