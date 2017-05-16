# EWK23L
This is for the EWK 2/3L study.

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
