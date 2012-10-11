//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Oct  9 16:30:21 2012 by ROOT version 5.34/01
// from TChain llp/
//////////////////////////////////////////////////////////

#ifndef DataClass_h
#define DataClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>
#include <vector>
#include <vector>
#include <vector>
#include <vector>
#include <vector>
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class DataClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Bool_t          EF_2e12Tvh_loose1;
   Bool_t          EF_2e5_tight1_Jpsi;
   Bool_t          EF_2e7T_loose1_mu6;
   Bool_t          EF_2e7T_medium1_mu6;
   Bool_t          EF_2mu10;
   Bool_t          EF_2mu10_MSonly_g10_loose;
   Bool_t          EF_2mu13;
   Bool_t          EF_2mu13_Zmumu_IDTrkNoCut;
   Bool_t          EF_2mu13_l2muonSA;
   Bool_t          EF_2mu15;
   Bool_t          EF_2mu4T;
   Bool_t          EF_2mu4T_2e5_tight1;
   Bool_t          EF_2mu4T_Bmumu;
   Bool_t          EF_2mu4T_Bmumu_Barrel;
   Bool_t          EF_2mu4T_Bmumu_BarrelOnly;
   Bool_t          EF_2mu4T_Bmumux;
   Bool_t          EF_2mu4T_Bmumux_Barrel;
   Bool_t          EF_2mu4T_Bmumux_BarrelOnly;
   Bool_t          EF_2mu4T_DiMu;
   Bool_t          EF_2mu4T_DiMu_Barrel;
   Bool_t          EF_2mu4T_DiMu_BarrelOnly;
   Bool_t          EF_2mu4T_DiMu_L2StarB;
   Bool_t          EF_2mu4T_DiMu_L2StarC;
   Bool_t          EF_2mu4T_DiMu_e5_tight1;
   Bool_t          EF_2mu4T_DiMu_l2muonSA;
   Bool_t          EF_2mu4T_DiMu_noVtx_noOS;
   Bool_t          EF_2mu4T_Jpsimumu;
   Bool_t          EF_2mu4T_Jpsimumu_Barrel;
   Bool_t          EF_2mu4T_Jpsimumu_BarrelOnly;
   Bool_t          EF_2mu4T_Jpsimumu_IDTrkNoCut;
   Bool_t          EF_2mu4T_Upsimumu;
   Bool_t          EF_2mu4T_Upsimumu_Barrel;
   Bool_t          EF_2mu4T_Upsimumu_BarrelOnly;
   Bool_t          EF_2mu4T_xe60;
   Bool_t          EF_2mu4T_xe60_tclcw;
   Bool_t          EF_2mu6;
   Bool_t          EF_2mu6_Bmumu;
   Bool_t          EF_2mu6_Bmumux;
   Bool_t          EF_2mu6_DiMu;
   Bool_t          EF_2mu6_DiMu_DY20;
   Bool_t          EF_2mu6_DiMu_DY25;
   Bool_t          EF_2mu6_DiMu_noVtx_noOS;
   Bool_t          EF_2mu6_Jpsimumu;
   Bool_t          EF_2mu6_Upsimumu;
   Bool_t          EF_2mu6i_DiMu_DY;
   Bool_t          EF_2mu6i_DiMu_DY_2j25_a4tchad;
   Bool_t          EF_2mu6i_DiMu_DY_noVtx_noOS;
   Bool_t          EF_2mu6i_DiMu_DY_noVtx_noOS_2j25_a4tchad;
   Bool_t          EF_2mu8_EFxe30;
   Bool_t          EF_2mu8_EFxe30_tclcw;
   Bool_t          EF_e11_etcut;
   Bool_t          EF_e12Tvh_loose1;
   Bool_t          EF_e12Tvh_medium1;
   Bool_t          EF_e12Tvh_medium1_mu6_topo_medium;
   Bool_t          EF_e12Tvh_medium1_mu8;
   Bool_t          EF_e13_etcutTrk_xs60;
   Bool_t          EF_e13_etcutTrk_xs60_dphi2j15xe20;
   Bool_t          EF_e14_tight1_e4_etcut_Jpsi;
   Bool_t          EF_e18_loose1;
   Bool_t          EF_e18_loose1_g25_medium;
   Bool_t          EF_e18_medium1;
   Bool_t          EF_e18_medium1_g25_loose;
   Bool_t          EF_e18vh_medium1_2e7T_medium1;
   Bool_t          EF_e20_etcutTrk_xe30_dphi2j15xe20;
   Bool_t          EF_e20_etcutTrk_xs60_dphi2j15xe20;
   Bool_t          EF_e20vhT_medium1_g6T_etcut_Upsi;
   Bool_t          EF_e20vhT_tight1_g6T_etcut_Upsi;
   Bool_t          EF_e22vh_loose;
   Bool_t          EF_e22vh_loose0;
   Bool_t          EF_e22vh_loose1;
   Bool_t          EF_e22vh_medium1;
   Bool_t          EF_e22vh_medium1_IDTrkNoCut;
   Bool_t          EF_e22vhi_medium1;
   Bool_t          EF_e24vh_loose;
   Bool_t          EF_e24vh_loose0;
   Bool_t          EF_e24vh_loose1;
   Bool_t          EF_e24vh_medium1;
   Bool_t          EF_e24vh_medium1_EFxe30;
   Bool_t          EF_e24vh_medium1_EFxe30_tcem;
   Bool_t          EF_e24vh_medium1_EFxe35_tcem;
   Bool_t          EF_e24vh_medium1_EFxe35_tclcw;
   Bool_t          EF_e24vh_medium1_EFxe40;
   Bool_t          EF_e24vh_medium1_IDTrkNoCut;
   Bool_t          EF_e24vh_medium1_IdScan;
   Bool_t          EF_e24vh_medium1_L2StarB;
   Bool_t          EF_e24vh_medium1_L2StarC;
   Bool_t          EF_e24vh_medium1_SiTrk;
   Bool_t          EF_e24vh_medium1_TRT;
   Bool_t          EF_e24vh_medium1_b35_mediumEF_j35_a4tchad;
   Bool_t          EF_e24vh_medium1_e7_medium1;
   Bool_t          EF_e24vh_tight1_e15_NoCut_Zee;
   Bool_t          EF_e24vhi_loose1_mu8;
   Bool_t          EF_e24vhi_medium1;
   Bool_t          EF_e45_medium1;
   Bool_t          EF_e5_tight1;
   Bool_t          EF_e5_tight1_e14_etcut_Jpsi;
   Bool_t          EF_e5_tight1_e4_etcut_Jpsi;
   Bool_t          EF_e5_tight1_e4_etcut_Jpsi_L2StarB;
   Bool_t          EF_e5_tight1_e4_etcut_Jpsi_L2StarC;
   Bool_t          EF_e5_tight1_e5_NoCut;
   Bool_t          EF_e5_tight1_e9_etcut_Jpsi;
   Bool_t          EF_e60_medium1;
   Bool_t          EF_e7T_loose1;
   Bool_t          EF_e7T_loose1_2mu6;
   Bool_t          EF_e7T_medium1;
   Bool_t          EF_e7T_medium1_2mu6;
   Bool_t          EF_e9_tight1_e4_etcut_Jpsi;
   Bool_t          EF_eb_physics;
   Bool_t          EF_eb_physics_empty;
   Bool_t          EF_eb_physics_firstempty;
   Bool_t          EF_eb_physics_noL1PS;
   Bool_t          EF_eb_physics_unpaired_iso;
   Bool_t          EF_eb_physics_unpaired_noniso;
   Bool_t          EF_eb_random;
   Bool_t          EF_eb_random_empty;
   Bool_t          EF_eb_random_firstempty;
   Bool_t          EF_eb_random_unpaired_iso;
   Bool_t          EF_j110_a4tchad_xe100_tclcw_veryloose;
   Bool_t          EF_j110_a4tchad_xe75_tclcw;
   Bool_t          EF_j110_a4tchad_xe90_tclcw_loose;
   Bool_t          EF_j110_a4tchad_xe90_tclcw_veryloose;
   Bool_t          EF_j110_a4tclcw_xe100_tclcw_veryloose;
   Bool_t          EF_j30_a4tcem_eta13_xe30_empty;
   Bool_t          EF_j30_a4tcem_eta13_xe30_firstempty;
   Bool_t          EF_j50_a4tcem_eta13_xe50_empty;
   Bool_t          EF_j50_a4tcem_eta13_xe50_firstempty;
   Bool_t          EF_j50_a4tcem_eta25_xe50_empty;
   Bool_t          EF_j50_a4tcem_eta25_xe50_firstempty;
   Bool_t          EF_j80_a4tchad_xe100_tclcw_loose;
   Bool_t          EF_j80_a4tchad_xe100_tclcw_veryloose;
   Bool_t          EF_j80_a4tchad_xe70_tclcw_dphi2j45xe10;
   Bool_t          EF_j80_a4tchad_xe85_tclcw_dphi2j45xe10;
   Bool_t          EF_mu10;
   Bool_t          EF_mu10_Jpsimumu;
   Bool_t          EF_mu10_MSonly;
   Bool_t          EF_mu10_Upsimumu_tight_FS;
   Bool_t          EF_mu10i_g10_medium;
   Bool_t          EF_mu10i_g10_medium_TauMass;
   Bool_t          EF_mu10i_loose_g12Tvh_medium;
   Bool_t          EF_mu10i_loose_g12Tvh_medium_TauMass;
   Bool_t          EF_mu11_empty_NoAlg;
   Bool_t          EF_mu13;
   Bool_t          EF_mu15;
   Bool_t          EF_mu18;
   Bool_t          EF_mu18_2g10_loose;
   Bool_t          EF_mu18_2g10_medium;
   Bool_t          EF_mu18_IDTrkNoCut_tight;
   Bool_t          EF_mu18_medium;
   Bool_t          EF_mu18_tight;
   Bool_t          EF_mu18_tight_2mu4_EFFS;
   Bool_t          EF_mu18_tight_e7_medium1;
   Bool_t          EF_mu18_tight_mu8_EFFS;
   Bool_t          EF_mu18i4_tight;
   Bool_t          EF_mu20i_tight_g5_loose_TauMass;
   Bool_t          EF_mu20i_tight_g5_medium;
   Bool_t          EF_mu20i_tight_g5_medium_TauMass;
   Bool_t          EF_mu20it_tight;
   Bool_t          EF_mu22_IDTrkNoCut_tight;
   Bool_t          EF_mu24_g20vh_loose;
   Bool_t          EF_mu24_g20vh_medium;
   Bool_t          EF_mu24_j65_a4tchad_EFxe40_tclcw;
   Bool_t          EF_mu24_j65_a4tchad_EFxe60_tclcw;
   Bool_t          EF_mu24_medium;
   Bool_t          EF_mu24_muCombTag_NoEF_tight;
   Bool_t          EF_mu24_tight;
   Bool_t          EF_mu24_tight_3j35_a4tchad;
   Bool_t          EF_mu24_tight_EFxe40;
   Bool_t          EF_mu24_tight_L2StarB;
   Bool_t          EF_mu24_tight_L2StarC;
   Bool_t          EF_mu24_tight_MG;
   Bool_t          EF_mu24_tight_MuonEF;
   Bool_t          EF_mu24_tight_b35_mediumEF_j35_a4tchad;
   Bool_t          EF_mu24_tight_mu6_EFFS;
   Bool_t          EF_mu24i_tight;
   Bool_t          EF_mu24i_tight_MG;
   Bool_t          EF_mu24i_tight_MuonEF;
   Bool_t          EF_mu24i_tight_l2muonSA;
   Bool_t          EF_mu36_tight;
   Bool_t          EF_mu40_MSonly_barrel_tight;
   Bool_t          EF_mu40_muCombTag_NoEF;
   Bool_t          EF_mu40_slow_outOfTime_tight;
   Bool_t          EF_mu40_slow_tight;
   Bool_t          EF_mu40_tight;
   Bool_t          EF_mu4T;
   Bool_t          EF_mu4T_cosmic;
   Bool_t          EF_mu4T_j65_a4tchad_xe60_tclcw_loose;
   Bool_t          EF_mu4T_j65_a4tchad_xe70_tclcw_veryloose;
   Bool_t          EF_mu4Ti_g20Tvh_medium;
   Bool_t          EF_mu4Ti_g20Tvh_medium_TauMass;
   Bool_t          EF_mu4Tmu6_Bmumu;
   Bool_t          EF_mu4Tmu6_Bmumu_Barrel;
   Bool_t          EF_mu4Tmu6_Bmumux;
   Bool_t          EF_mu4Tmu6_Bmumux_Barrel;
   Bool_t          EF_mu4Tmu6_DiMu;
   Bool_t          EF_mu4Tmu6_DiMu_Barrel;
   Bool_t          EF_mu4Tmu6_DiMu_noVtx_noOS;
   Bool_t          EF_mu4Tmu6_Jpsimumu;
   Bool_t          EF_mu4Tmu6_Jpsimumu_Barrel;
   Bool_t          EF_mu4Tmu6_Jpsimumu_IDTrkNoCut;
   Bool_t          EF_mu4Tmu6_Upsimumu;
   Bool_t          EF_mu4Tmu6_Upsimumu_Barrel;
   Bool_t          EF_mu4_L1MU11_MSonly_cosmic;
   Bool_t          EF_mu4_L1MU11_cosmic;
   Bool_t          EF_mu4_empty_NoAlg;
   Bool_t          EF_mu4_firstempty_NoAlg;
   Bool_t          EF_mu4_unpaired_iso_NoAlg;
   Bool_t          EF_mu50_MSonly_barrel_tight;
   Bool_t          EF_mu6;
   Bool_t          EF_mu60_slow_outOfTime_tight1;
   Bool_t          EF_mu60_slow_tight1;
   Bool_t          EF_mu6_Jpsimumu_tight;
   Bool_t          EF_mu6_MSonly;
   Bool_t          EF_mu6_Trk_Jpsi_loose;
   Bool_t          EF_mu8;
   Bool_t          EF_mu8_4j45_a4tchad_L2FS;
   Bool_t          EF_tau29T_medium1_xe40_tight;
   Bool_t          EF_tau29T_medium1_xe45_tight;
   Bool_t          EF_tau29Ti_medium1_llh_xe40_tight;
   Bool_t          EF_tau29Ti_medium1_llh_xe45_tight;
   Bool_t          EF_tau29Ti_medium1_xe40_tight;
   Bool_t          EF_tau29Ti_medium1_xe45_tight;
   Bool_t          EF_tau29Ti_medium1_xe55_tclcw;
   Bool_t          EF_tau29Ti_medium1_xe55_tclcw_tight;
   Bool_t          EF_tau38T_medium1_xe40_tight;
   Bool_t          EF_tau38T_medium1_xe45_tight;
   Bool_t          EF_tau38T_medium1_xe55_tclcw_tight;
   Bool_t          EF_xe100;
   Bool_t          EF_xe100T_tclcw;
   Bool_t          EF_xe100T_tclcw_loose;
   Bool_t          EF_xe100_tclcw;
   Bool_t          EF_xe100_tclcw_loose;
   Bool_t          EF_xe100_tclcw_verytight;
   Bool_t          EF_xe100_tight;
   Bool_t          EF_xe110;
   Bool_t          EF_xe30;
   Bool_t          EF_xe50;
   Bool_t          EF_xe55_LArNoiseBurst;
   Bool_t          EF_xe60;
   Bool_t          EF_xe60T;
   Bool_t          EF_xe70;
   Bool_t          EF_xe75_tclcw;
   Bool_t          EF_xe80;
   Bool_t          EF_xe80T;
   Bool_t          EF_xe80T_loose;
   Bool_t          EF_xe80T_tclcw;
   Bool_t          EF_xe80T_tclcw_loose;
   Bool_t          EF_xe80_tclcw;
   Bool_t          EF_xe80_tclcw_tight;
   Bool_t          EF_xe80_tclcw_verytight;
   Bool_t          EF_xe80_tight;
   Bool_t          EF_xe90;
   Bool_t          EF_xe90_tclcw;
   Bool_t          EF_xe90_tclcw_tight;
   Bool_t          EF_xe90_tclcw_verytight;
   Bool_t          EF_xe90_tight;
   Bool_t          L1_2EM10VH;
   Bool_t          L1_2EM12;
   Bool_t          L1_2EM12_EM16V;
   Bool_t          L1_2EM3;
   Bool_t          L1_2EM3_EM12;
   Bool_t          L1_2EM3_EM6;
   Bool_t          L1_2EM6;
   Bool_t          L1_2EM6_EM16VH;
   Bool_t          L1_2EM6_MU6;
   Bool_t          L1_2J20_XE20;
   Bool_t          L1_2J30_XE20;
   Bool_t          L1_2MU10;
   Bool_t          L1_2MU4;
   Bool_t          L1_2MU4_2EM3;
   Bool_t          L1_2MU4_BARREL;
   Bool_t          L1_2MU4_BARRELONLY;
   Bool_t          L1_2MU4_EM3;
   Bool_t          L1_2MU4_EMPTY;
   Bool_t          L1_2MU4_FIRSTEMPTY;
   Bool_t          L1_2MU4_MU6;
   Bool_t          L1_2MU4_MU6_BARREL;
   Bool_t          L1_2MU4_XE30;
   Bool_t          L1_2MU4_XE40;
   Bool_t          L1_2MU6;
   Bool_t          L1_2MU6_UNPAIRED_ISO;
   Bool_t          L1_2MU6_UNPAIRED_NONISO;
   Bool_t          L1_EM10VH;
   Bool_t          L1_EM10VH_MU6;
   Bool_t          L1_EM10VH_XE20;
   Bool_t          L1_EM10VH_XE30;
   Bool_t          L1_EM10VH_XE35;
   Bool_t          L1_EM12;
   Bool_t          L1_EM12_3J10;
   Bool_t          L1_EM12_4J10;
   Bool_t          L1_EM12_XE20;
   Bool_t          L1_EM12_XS30;
   Bool_t          L1_EM12_XS45;
   Bool_t          L1_EM14VH;
   Bool_t          L1_EM16V;
   Bool_t          L1_EM16VH;
   Bool_t          L1_EM16VH_MU4;
   Bool_t          L1_EM16V_XE20;
   Bool_t          L1_EM16V_XS45;
   Bool_t          L1_EM18VH;
   Bool_t          L1_EM3;
   Bool_t          L1_EM30;
   Bool_t          L1_EM30_BGRP7;
   Bool_t          L1_EM3_EMPTY;
   Bool_t          L1_EM3_FIRSTEMPTY;
   Bool_t          L1_EM3_MU6;
   Bool_t          L1_EM3_UNPAIRED_ISO;
   Bool_t          L1_EM3_UNPAIRED_NONISO;
   Bool_t          L1_EM6;
   Bool_t          L1_EM6_2MU6;
   Bool_t          L1_EM6_EMPTY;
   Bool_t          L1_EM6_MU10;
   Bool_t          L1_EM6_MU6;
   Bool_t          L1_EM6_XS45;
   Bool_t          L1_J30_XE35;
   Bool_t          L1_J30_XE40;
   Bool_t          L1_J30_XE50;
   Bool_t          L1_J50_XE30;
   Bool_t          L1_J50_XE35;
   Bool_t          L1_J50_XE40;
   Bool_t          L1_MU10;
   Bool_t          L1_MU10_EMPTY;
   Bool_t          L1_MU10_FIRSTEMPTY;
   Bool_t          L1_MU10_J20;
   Bool_t          L1_MU10_UNPAIRED_ISO;
   Bool_t          L1_MU10_XE20;
   Bool_t          L1_MU10_XE25;
   Bool_t          L1_MU11;
   Bool_t          L1_MU11_EMPTY;
   Bool_t          L1_MU15;
   Bool_t          L1_MU20;
   Bool_t          L1_MU20_FIRSTEMPTY;
   Bool_t          L1_MU4;
   Bool_t          L1_MU4_EMPTY;
   Bool_t          L1_MU4_FIRSTEMPTY;
   Bool_t          L1_MU4_J10;
   Bool_t          L1_MU4_J15;
   Bool_t          L1_MU4_J15_EMPTY;
   Bool_t          L1_MU4_J15_UNPAIRED_ISO;
   Bool_t          L1_MU4_J20_XE20;
   Bool_t          L1_MU4_J20_XE35;
   Bool_t          L1_MU4_J30;
   Bool_t          L1_MU4_J50;
   Bool_t          L1_MU4_J75;
   Bool_t          L1_MU4_UNPAIRED_ISO;
   Bool_t          L1_MU4_UNPAIRED_NONISO;
   Bool_t          L1_MU6;
   Bool_t          L1_MU6_2J20;
   Bool_t          L1_MU6_FIRSTEMPTY;
   Bool_t          L1_MU6_J15;
   Bool_t          L1_MUB;
   Bool_t          L1_MUE;
   Bool_t          L1_TAU11_XE20;
   Bool_t          L1_TAU15I_XE35;
   Bool_t          L1_TAU15I_XE40;
   Bool_t          L1_TAU15_XE25_3J10;
   Bool_t          L1_TAU15_XE25_3J10_J30;
   Bool_t          L1_TAU15_XE25_3J15;
   Bool_t          L1_TAU15_XE35;
   Bool_t          L1_TAU15_XE40;
   Bool_t          L1_TAU20_XE35;
   Bool_t          L1_TAU20_XE40;
   Bool_t          L1_XE20;
   Bool_t          L1_XE25;
   Bool_t          L1_XE30;
   Bool_t          L1_XE35;
   Bool_t          L1_XE40;
   Bool_t          L1_XE40_BGRP7;
   Bool_t          L1_XE50;
   Bool_t          L1_XE50_BGRP7;
   Bool_t          L1_XE60;
   Bool_t          L1_XE70;
   Bool_t          L2_2e12Tvh_loose1;
   Bool_t          L2_2e5_tight1_Jpsi;
   Bool_t          L2_2e7T_loose1_mu6;
   Bool_t          L2_2e7T_medium1_mu6;
   Bool_t          L2_2mu10;
   Bool_t          L2_2mu10_MSonly_g10_loose;
   Bool_t          L2_2mu13;
   Bool_t          L2_2mu13_Zmumu_IDTrkNoCut;
   Bool_t          L2_2mu13_l2muonSA;
   Bool_t          L2_2mu15;
   Bool_t          L2_2mu4T;
   Bool_t          L2_2mu4T_2e5_tight1;
   Bool_t          L2_2mu4T_Bmumu;
   Bool_t          L2_2mu4T_Bmumu_Barrel;
   Bool_t          L2_2mu4T_Bmumu_BarrelOnly;
   Bool_t          L2_2mu4T_Bmumux;
   Bool_t          L2_2mu4T_Bmumux_Barrel;
   Bool_t          L2_2mu4T_Bmumux_BarrelOnly;
   Bool_t          L2_2mu4T_DiMu;
   Bool_t          L2_2mu4T_DiMu_Barrel;
   Bool_t          L2_2mu4T_DiMu_BarrelOnly;
   Bool_t          L2_2mu4T_DiMu_L2StarB;
   Bool_t          L2_2mu4T_DiMu_L2StarC;
   Bool_t          L2_2mu4T_DiMu_e5_tight1;
   Bool_t          L2_2mu4T_DiMu_l2muonSA;
   Bool_t          L2_2mu4T_DiMu_noVtx_noOS;
   Bool_t          L2_2mu4T_Jpsimumu;
   Bool_t          L2_2mu4T_Jpsimumu_Barrel;
   Bool_t          L2_2mu4T_Jpsimumu_BarrelOnly;
   Bool_t          L2_2mu4T_Jpsimumu_IDTrkNoCut;
   Bool_t          L2_2mu4T_Upsimumu;
   Bool_t          L2_2mu4T_Upsimumu_Barrel;
   Bool_t          L2_2mu4T_Upsimumu_BarrelOnly;
   Bool_t          L2_2mu4T_xe45;
   Bool_t          L2_2mu4T_xe60;
   Bool_t          L2_2mu6;
   Bool_t          L2_2mu6_Bmumu;
   Bool_t          L2_2mu6_Bmumux;
   Bool_t          L2_2mu6_DiMu;
   Bool_t          L2_2mu6_DiMu_DY20;
   Bool_t          L2_2mu6_DiMu_DY25;
   Bool_t          L2_2mu6_DiMu_noVtx_noOS;
   Bool_t          L2_2mu6_Jpsimumu;
   Bool_t          L2_2mu6_Upsimumu;
   Bool_t          L2_2mu6i_DiMu_DY;
   Bool_t          L2_2mu6i_DiMu_DY_2j25_a4tchad;
   Bool_t          L2_2mu6i_DiMu_DY_noVtx_noOS;
   Bool_t          L2_2mu6i_DiMu_DY_noVtx_noOS_2j25_a4tchad;
   Bool_t          L2_2mu8_EFxe30;
   Bool_t          L2_e11_etcut;
   Bool_t          L2_e12Tvh_loose1;
   Bool_t          L2_e12Tvh_medium1;
   Bool_t          L2_e12Tvh_medium1_mu6_topo_medium;
   Bool_t          L2_e12Tvh_medium1_mu8;
   Bool_t          L2_e13_etcutTrk_xs45;
   Bool_t          L2_e14_tight1_e4_etcut_Jpsi;
   Bool_t          L2_e18_loose1;
   Bool_t          L2_e18_loose1_g25_medium;
   Bool_t          L2_e18_medium1;
   Bool_t          L2_e18_medium1_g25_loose;
   Bool_t          L2_e18vh_medium1_2e7T_medium1;
   Bool_t          L2_e20_etcutTrk_xe25;
   Bool_t          L2_e20_etcutTrk_xs45;
   Bool_t          L2_e20vhT_medium1_g6T_etcut_Upsi;
   Bool_t          L2_e20vhT_tight1_g6T_etcut_Upsi;
   Bool_t          L2_e22vh_loose;
   Bool_t          L2_e22vh_loose0;
   Bool_t          L2_e22vh_loose1;
   Bool_t          L2_e22vh_medium1;
   Bool_t          L2_e22vh_medium1_IDTrkNoCut;
   Bool_t          L2_e22vhi_medium1;
   Bool_t          L2_e24vh_loose;
   Bool_t          L2_e24vh_loose0;
   Bool_t          L2_e24vh_loose1;
   Bool_t          L2_e24vh_medium1;
   Bool_t          L2_e24vh_medium1_EFxe30;
   Bool_t          L2_e24vh_medium1_EFxe35;
   Bool_t          L2_e24vh_medium1_EFxe40;
   Bool_t          L2_e24vh_medium1_IDTrkNoCut;
   Bool_t          L2_e24vh_medium1_IdScan;
   Bool_t          L2_e24vh_medium1_L2StarB;
   Bool_t          L2_e24vh_medium1_L2StarC;
   Bool_t          L2_e24vh_medium1_SiTrk;
   Bool_t          L2_e24vh_medium1_TRT;
   Bool_t          L2_e24vh_medium1_e7_medium1;
   Bool_t          L2_e24vh_tight1_e15_NoCut_Zee;
   Bool_t          L2_e24vhi_loose1_mu8;
   Bool_t          L2_e24vhi_medium1;
   Bool_t          L2_e45_loose1;
   Bool_t          L2_e45_medium1;
   Bool_t          L2_e5_tight1;
   Bool_t          L2_e5_tight1_e14_etcut_Jpsi;
   Bool_t          L2_e5_tight1_e4_etcut_Jpsi;
   Bool_t          L2_e5_tight1_e4_etcut_Jpsi_L2StarB;
   Bool_t          L2_e5_tight1_e4_etcut_Jpsi_L2StarC;
   Bool_t          L2_e5_tight1_e5_NoCut;
   Bool_t          L2_e5_tight1_e9_etcut_Jpsi;
   Bool_t          L2_e60_loose1;
   Bool_t          L2_e60_medium1;
   Bool_t          L2_e7T_loose1;
   Bool_t          L2_e7T_loose1_2mu6;
   Bool_t          L2_e7T_medium1;
   Bool_t          L2_e7T_medium1_2mu6;
   Bool_t          L2_e9_tight1_e4_etcut_Jpsi;
   Bool_t          L2_eb_physics;
   Bool_t          L2_eb_physics_empty;
   Bool_t          L2_eb_physics_firstempty;
   Bool_t          L2_eb_physics_noL1PS;
   Bool_t          L2_eb_physics_unpaired_iso;
   Bool_t          L2_eb_physics_unpaired_noniso;
   Bool_t          L2_eb_random;
   Bool_t          L2_eb_random_empty;
   Bool_t          L2_eb_random_firstempty;
   Bool_t          L2_eb_random_unpaired_iso;
   Bool_t          L2_em3_empty_larcalib;
   Bool_t          L2_em6_empty_larcalib;
   Bool_t          L2_j105_c4cchad_xe40;
   Bool_t          L2_j105_c4cchad_xe45;
   Bool_t          L2_j30_a4tcem_eta13_xe30_empty;
   Bool_t          L2_j30_a4tcem_eta13_xe30_firstempty;
   Bool_t          L2_j50_a4tcem_eta13_xe50_empty;
   Bool_t          L2_j50_a4tcem_eta13_xe50_firstempty;
   Bool_t          L2_j50_a4tcem_eta25_xe50_empty;
   Bool_t          L2_j50_a4tcem_eta25_xe50_firstempty;
   Bool_t          L2_j75_c4cchad_xe45;
   Bool_t          L2_j75_c4cchad_xe55;
   Bool_t          L2_mu10;
   Bool_t          L2_mu10_Jpsimumu;
   Bool_t          L2_mu10_MSonly;
   Bool_t          L2_mu10_Upsimumu_tight_FS;
   Bool_t          L2_mu10i_g10_medium;
   Bool_t          L2_mu10i_g10_medium_TauMass;
   Bool_t          L2_mu10i_loose_g12Tvh_medium;
   Bool_t          L2_mu10i_loose_g12Tvh_medium_TauMass;
   Bool_t          L2_mu11_empty_NoAlg;
   Bool_t          L2_mu13;
   Bool_t          L2_mu15;
   Bool_t          L2_mu15_l2cal;
   Bool_t          L2_mu18;
   Bool_t          L2_mu18_2g10_loose;
   Bool_t          L2_mu18_2g10_medium;
   Bool_t          L2_mu18_IDTrkNoCut_tight;
   Bool_t          L2_mu18_medium;
   Bool_t          L2_mu18_tight;
   Bool_t          L2_mu18_tight_e7_medium1;
   Bool_t          L2_mu18i4_tight;
   Bool_t          L2_mu20i_tight_g5_loose_TauMass;
   Bool_t          L2_mu20i_tight_g5_medium;
   Bool_t          L2_mu20i_tight_g5_medium_TauMass;
   Bool_t          L2_mu20it_tight;
   Bool_t          L2_mu22_IDTrkNoCut_tight;
   Bool_t          L2_mu24_g20vh_loose;
   Bool_t          L2_mu24_g20vh_medium;
   Bool_t          L2_mu24_j60_c4cchad_EFxe40;
   Bool_t          L2_mu24_j60_c4cchad_EFxe60;
   Bool_t          L2_mu24_medium;
   Bool_t          L2_mu24_muCombTag_NoEF_tight;
   Bool_t          L2_mu24_tight;
   Bool_t          L2_mu24_tight_3j35_a4tchad;
   Bool_t          L2_mu24_tight_EFxe40;
   Bool_t          L2_mu24_tight_L2StarB;
   Bool_t          L2_mu24_tight_L2StarC;
   Bool_t          L2_mu24_tight_l2muonSA;
   Bool_t          L2_mu36_tight;
   Bool_t          L2_mu40_MSonly_barrel_tight;
   Bool_t          L2_mu40_muCombTag_NoEF;
   Bool_t          L2_mu40_slow_outOfTime_tight;
   Bool_t          L2_mu40_slow_tight;
   Bool_t          L2_mu40_tight;
   Bool_t          L2_mu4T;
   Bool_t          L2_mu4T_cosmic;
   Bool_t          L2_mu4T_j60_c4cchad_xe40;
   Bool_t          L2_mu4Ti_g20Tvh_medium;
   Bool_t          L2_mu4Ti_g20Tvh_medium_TauMass;
   Bool_t          L2_mu4Tmu6_Bmumu;
   Bool_t          L2_mu4Tmu6_Bmumu_Barrel;
   Bool_t          L2_mu4Tmu6_Bmumux;
   Bool_t          L2_mu4Tmu6_Bmumux_Barrel;
   Bool_t          L2_mu4Tmu6_DiMu;
   Bool_t          L2_mu4Tmu6_DiMu_Barrel;
   Bool_t          L2_mu4Tmu6_DiMu_noVtx_noOS;
   Bool_t          L2_mu4Tmu6_Jpsimumu;
   Bool_t          L2_mu4Tmu6_Jpsimumu_Barrel;
   Bool_t          L2_mu4Tmu6_Jpsimumu_IDTrkNoCut;
   Bool_t          L2_mu4Tmu6_Upsimumu;
   Bool_t          L2_mu4Tmu6_Upsimumu_Barrel;
   Bool_t          L2_mu4_L1MU11_MSonly_cosmic;
   Bool_t          L2_mu4_L1MU11_cosmic;
   Bool_t          L2_mu4_empty_NoAlg;
   Bool_t          L2_mu4_firstempty_NoAlg;
   Bool_t          L2_mu4_l2cal_empty;
   Bool_t          L2_mu4_unpaired_iso_NoAlg;
   Bool_t          L2_mu50_MSonly_barrel_tight;
   Bool_t          L2_mu6;
   Bool_t          L2_mu60_slow_outOfTime_tight1;
   Bool_t          L2_mu60_slow_tight1;
   Bool_t          L2_mu6_Jpsimumu_tight;
   Bool_t          L2_mu6_MSonly;
   Bool_t          L2_mu6_Trk_Jpsi_loose;
   Bool_t          L2_mu8;
   Bool_t          L2_mu8_4j15_a4TTem;
   Bool_t          L2_tau29T_medium1_xe35_tight;
   Bool_t          L2_tau29T_medium1_xe40_tight;
   Bool_t          L2_tau29Ti_medium1_llh_xe35_tight;
   Bool_t          L2_tau29Ti_medium1_llh_xe40_tight;
   Bool_t          L2_tau29Ti_medium1_xe35_tight;
   Bool_t          L2_tau29Ti_medium1_xe40;
   Bool_t          L2_tau29Ti_medium1_xe40_tight;
   Bool_t          L2_tau38T_medium1_xe35_tight;
   Bool_t          L2_tau38T_medium1_xe40_tight;
   Bool_t          L2_xe25;
   Bool_t          L2_xe35;
   Bool_t          L2_xe45;
   Bool_t          L2_xe45T;
   Bool_t          L2_xe55;
   Bool_t          L2_xe55T;
   Bool_t          L2_xe55_LArNoiseBurst;
   Bool_t          L2_xe65;
   Bool_t          L2_xe75;
   Bool_t          L2_xe90;
   Bool_t          L2_xe90_tight;
   UInt_t          RunNumber;
   UInt_t          EventNumber;
   UInt_t          timestamp;
   UInt_t          timestamp_ns;
   UInt_t          lbn;
   UInt_t          bcid;
   UInt_t          detmask0;
   UInt_t          detmask1;
   Float_t         actualIntPerXing;
   Float_t         averageIntPerXing;
   UInt_t          pixelFlags;
   UInt_t          sctFlags;
   UInt_t          trtFlags;
   UInt_t          larFlags;
   UInt_t          tileFlags;
   UInt_t          muonFlags;
   UInt_t          fwdFlags;
   UInt_t          coreFlags;
   UInt_t          pixelError;
   UInt_t          sctError;
   UInt_t          trtError;
   UInt_t          larError;
   UInt_t          tileError;
   UInt_t          muonError;
   UInt_t          fwdError;
   UInt_t          coreError;
   Bool_t          streamDecision_Egamma;
   Bool_t          streamDecision_Muons;
   Bool_t          streamDecision_JetTauEtmiss;
   Bool_t          isSimulation;
   Bool_t          isCalibration;
   Bool_t          isTestBeam;
   vector<string>  *StreamTagNames;
   vector<string>  *StreamTagTypes;
   vector<string>  *SkimDecision_name;
   vector<int>     *SkimDecision_accepted;
   Int_t           el_n;
   vector<float>   *el_E;
   vector<float>   *el_Et;
   vector<float>   *el_pt;
   vector<float>   *el_m;
   vector<float>   *el_eta;
   vector<float>   *el_phi;
   vector<float>   *el_px;
   vector<float>   *el_py;
   vector<float>   *el_pz;
   vector<float>   *el_charge;
   vector<int>     *el_author;
   vector<unsigned int> *el_isEM;
   vector<unsigned int> *el_isEMLoose;
   vector<unsigned int> *el_isEMMedium;
   vector<unsigned int> *el_isEMTight;
   vector<unsigned int> *el_OQ;
   vector<int>     *el_convFlag;
   vector<int>     *el_isConv;
   vector<int>     *el_nConv;
   vector<int>     *el_nSingleTrackConv;
   vector<int>     *el_nDoubleTrackConv;
   vector<int>     *el_mediumWithoutTrack;
   vector<int>     *el_mediumIsoWithoutTrack;
   vector<int>     *el_tightWithoutTrack;
   vector<int>     *el_tightIsoWithoutTrack;
   vector<int>     *el_loose;
   vector<int>     *el_looseIso;
   vector<int>     *el_medium;
   vector<int>     *el_mediumIso;
   vector<int>     *el_tight;
   vector<int>     *el_tightIso;
   vector<int>     *el_loosePP;
   vector<int>     *el_loosePPIso;
   vector<int>     *el_mediumPP;
   vector<int>     *el_mediumPPIso;
   vector<int>     *el_tightPP;
   vector<int>     *el_tightPPIso;
   vector<int>     *el_goodOQ;
   vector<float>   *el_Ethad;
   vector<float>   *el_Ethad1;
   vector<float>   *el_f1;
   vector<float>   *el_f1core;
   vector<float>   *el_Emins1;
   vector<float>   *el_fside;
   vector<float>   *el_Emax2;
   vector<float>   *el_ws3;
   vector<float>   *el_wstot;
   vector<float>   *el_emaxs1;
   vector<float>   *el_deltaEs;
   vector<float>   *el_E233;
   vector<float>   *el_E237;
   vector<float>   *el_E277;
   vector<float>   *el_weta2;
   vector<float>   *el_f3;
   vector<float>   *el_f3core;
   vector<float>   *el_rphiallcalo;
   vector<float>   *el_Etcone45;
   vector<float>   *el_Etcone15;
   vector<float>   *el_Etcone20;
   vector<float>   *el_Etcone25;
   vector<float>   *el_Etcone30;
   vector<float>   *el_Etcone35;
   vector<float>   *el_Etcone40;
   vector<float>   *el_ptcone20;
   vector<float>   *el_ptcone30;
   vector<float>   *el_ptcone40;
   vector<float>   *el_nucone20;
   vector<float>   *el_nucone30;
   vector<float>   *el_nucone40;
   vector<float>   *el_Etcone15_pt_corrected;
   vector<float>   *el_Etcone20_pt_corrected;
   vector<float>   *el_Etcone25_pt_corrected;
   vector<float>   *el_Etcone30_pt_corrected;
   vector<float>   *el_Etcone35_pt_corrected;
   vector<float>   *el_Etcone40_pt_corrected;
   vector<float>   *el_convanglematch;
   vector<float>   *el_convtrackmatch;
   vector<int>     *el_hasconv;
   vector<float>   *el_convvtxx;
   vector<float>   *el_convvtxy;
   vector<float>   *el_convvtxz;
   vector<float>   *el_Rconv;
   vector<float>   *el_zconv;
   vector<float>   *el_convvtxchi2;
   vector<float>   *el_pt1conv;
   vector<int>     *el_convtrk1nBLHits;
   vector<int>     *el_convtrk1nPixHits;
   vector<int>     *el_convtrk1nSCTHits;
   vector<int>     *el_convtrk1nTRTHits;
   vector<float>   *el_pt2conv;
   vector<int>     *el_convtrk2nBLHits;
   vector<int>     *el_convtrk2nPixHits;
   vector<int>     *el_convtrk2nSCTHits;
   vector<int>     *el_convtrk2nTRTHits;
   vector<float>   *el_ptconv;
   vector<float>   *el_pzconv;
   vector<float>   *el_pos7;
   vector<float>   *el_etacorrmag;
   vector<float>   *el_deltaeta1;
   vector<float>   *el_deltaeta2;
   vector<float>   *el_deltaphi2;
   vector<float>   *el_deltaphiRescaled;
   vector<float>   *el_deltaPhiFromLast;
   vector<float>   *el_deltaPhiRot;
   vector<float>   *el_expectHitInBLayer;
   vector<float>   *el_trackd0_physics;
   vector<float>   *el_etaSampling1;
   vector<float>   *el_reta;
   vector<float>   *el_rphi;
   vector<float>   *el_topoEtcone20;
   vector<float>   *el_topoEtcone30;
   vector<float>   *el_topoEtcone40;
   vector<float>   *el_materialTraversed;
   vector<float>   *el_EtringnoisedR03sig2;
   vector<float>   *el_EtringnoisedR03sig3;
   vector<float>   *el_EtringnoisedR03sig4;
   vector<double>  *el_isolationlikelihoodjets;
   vector<double>  *el_isolationlikelihoodhqelectrons;
   vector<double>  *el_electronweight;
   vector<double>  *el_electronbgweight;
   vector<double>  *el_softeweight;
   vector<double>  *el_softebgweight;
   vector<double>  *el_neuralnet;
   vector<double>  *el_Hmatrix;
   vector<double>  *el_Hmatrix5;
   vector<double>  *el_adaboost;
   vector<double>  *el_softeneuralnet;
   vector<double>  *el_ringernn;
   vector<float>   *el_zvertex;
   vector<float>   *el_errz;
   vector<float>   *el_etap;
   vector<float>   *el_depth;
   vector<int>     *el_refittedTrack_n;
   vector<vector<int> > *el_refittedTrack_author;
   vector<vector<float> > *el_refittedTrack_chi2;
   vector<vector<int> > *el_refittedTrack_hasBrem;
   vector<vector<float> > *el_refittedTrack_bremRadius;
   vector<vector<float> > *el_refittedTrack_bremZ;
   vector<vector<float> > *el_refittedTrack_bremRadiusErr;
   vector<vector<float> > *el_refittedTrack_bremZErr;
   vector<vector<int> > *el_refittedTrack_bremFitStatus;
   vector<vector<float> > *el_refittedTrack_qoverp;
   vector<vector<float> > *el_refittedTrack_d0;
   vector<vector<float> > *el_refittedTrack_z0;
   vector<vector<float> > *el_refittedTrack_theta;
   vector<vector<float> > *el_refittedTrack_phi;
   vector<vector<float> > *el_refittedTrack_LMqoverp;
   vector<vector<float> > *el_refittedTrack_covd0;
   vector<vector<float> > *el_refittedTrack_covz0;
   vector<vector<float> > *el_refittedTrack_covphi;
   vector<vector<float> > *el_refittedTrack_covtheta;
   vector<vector<float> > *el_refittedTrack_covqoverp;
   vector<vector<float> > *el_refittedTrack_covd0z0;
   vector<vector<float> > *el_refittedTrack_covz0phi;
   vector<vector<float> > *el_refittedTrack_covz0theta;
   vector<vector<float> > *el_refittedTrack_covz0qoverp;
   vector<vector<float> > *el_refittedTrack_covd0phi;
   vector<vector<float> > *el_refittedTrack_covd0theta;
   vector<vector<float> > *el_refittedTrack_covd0qoverp;
   vector<vector<float> > *el_refittedTrack_covphitheta;
   vector<vector<float> > *el_refittedTrack_covphiqoverp;
   vector<vector<float> > *el_refittedTrack_covthetaqoverp;
   vector<vector<float> > *el_refittedTrack_d0_wrtBL;
   vector<vector<float> > *el_refittedTrack_z0_wrtBL;
   vector<vector<float> > *el_refittedTrack_phi_wrtBL;
   vector<vector<float> > *el_refittedTrack_theta_wrtBL;
   vector<vector<float> > *el_refittedTrack_qoverp_wrtBL;
   vector<vector<float> > *el_refittedTrack_d0_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_z0_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_phi_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_theta_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_qoverp_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_d0_z0_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_d0_phi_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_d0_theta_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_d0_qoverp_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_z0_phi_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_z0_theta_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_z0_qoverp_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_phi_theta_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_phi_qoverp_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_theta_qoverp_err_wrtBL;
   vector<float>   *el_Es0;
   vector<float>   *el_etas0;
   vector<float>   *el_phis0;
   vector<float>   *el_Es1;
   vector<float>   *el_etas1;
   vector<float>   *el_phis1;
   vector<float>   *el_Es2;
   vector<float>   *el_etas2;
   vector<float>   *el_phis2;
   vector<float>   *el_Es3;
   vector<float>   *el_etas3;
   vector<float>   *el_phis3;
   vector<float>   *el_E_PreSamplerB;
   vector<float>   *el_E_EMB1;
   vector<float>   *el_E_EMB2;
   vector<float>   *el_E_EMB3;
   vector<float>   *el_E_PreSamplerE;
   vector<float>   *el_E_EME1;
   vector<float>   *el_E_EME2;
   vector<float>   *el_E_EME3;
   vector<float>   *el_E_HEC0;
   vector<float>   *el_E_HEC1;
   vector<float>   *el_E_HEC2;
   vector<float>   *el_E_HEC3;
   vector<float>   *el_E_TileBar0;
   vector<float>   *el_E_TileBar1;
   vector<float>   *el_E_TileBar2;
   vector<float>   *el_E_TileGap1;
   vector<float>   *el_E_TileGap2;
   vector<float>   *el_E_TileGap3;
   vector<float>   *el_E_TileExt0;
   vector<float>   *el_E_TileExt1;
   vector<float>   *el_E_TileExt2;
   vector<float>   *el_E_FCAL0;
   vector<float>   *el_E_FCAL1;
   vector<float>   *el_E_FCAL2;
   vector<float>   *el_cl_E;
   vector<float>   *el_cl_pt;
   vector<float>   *el_cl_eta;
   vector<float>   *el_cl_phi;
   vector<double>  *el_cl_etaCalo;
   vector<double>  *el_cl_phiCalo;
   vector<float>   *el_firstEdens;
   vector<float>   *el_cellmaxfrac;
   vector<float>   *el_longitudinal;
   vector<float>   *el_secondlambda;
   vector<float>   *el_lateral;
   vector<float>   *el_secondR;
   vector<float>   *el_centerlambda;
   vector<float>   *el_rawcl_Es0;
   vector<float>   *el_rawcl_etas0;
   vector<float>   *el_rawcl_phis0;
   vector<float>   *el_rawcl_Es1;
   vector<float>   *el_rawcl_etas1;
   vector<float>   *el_rawcl_phis1;
   vector<float>   *el_rawcl_Es2;
   vector<float>   *el_rawcl_etas2;
   vector<float>   *el_rawcl_phis2;
   vector<float>   *el_rawcl_Es3;
   vector<float>   *el_rawcl_etas3;
   vector<float>   *el_rawcl_phis3;
   vector<float>   *el_rawcl_E;
   vector<float>   *el_rawcl_pt;
   vector<float>   *el_rawcl_eta;
   vector<float>   *el_rawcl_phi;
   vector<float>   *el_trackd0;
   vector<float>   *el_trackz0;
   vector<float>   *el_trackphi;
   vector<float>   *el_tracktheta;
   vector<float>   *el_trackqoverp;
   vector<float>   *el_trackpt;
   vector<float>   *el_tracketa;
   vector<float>   *el_trackcov_d0;
   vector<float>   *el_trackcov_z0;
   vector<float>   *el_trackcov_phi;
   vector<float>   *el_trackcov_theta;
   vector<float>   *el_trackcov_qoverp;
   vector<float>   *el_trackcov_d0_z0;
   vector<float>   *el_trackcov_d0_phi;
   vector<float>   *el_trackcov_d0_theta;
   vector<float>   *el_trackcov_d0_qoverp;
   vector<float>   *el_trackcov_z0_phi;
   vector<float>   *el_trackcov_z0_theta;
   vector<float>   *el_trackcov_z0_qoverp;
   vector<float>   *el_trackcov_phi_theta;
   vector<float>   *el_trackcov_phi_qoverp;
   vector<float>   *el_trackcov_theta_qoverp;
   vector<float>   *el_trackfitchi2;
   vector<int>     *el_trackfitndof;
   vector<int>     *el_nBLHits;
   vector<int>     *el_nPixHits;
   vector<int>     *el_nSCTHits;
   vector<int>     *el_nTRTHits;
   vector<int>     *el_nTRTHighTHits;
   vector<int>     *el_nPixHoles;
   vector<int>     *el_nSCTHoles;
   vector<int>     *el_nTRTHoles;
   vector<int>     *el_nPixelDeadSensors;
   vector<int>     *el_nSCTDeadSensors;
   vector<int>     *el_nBLSharedHits;
   vector<int>     *el_nPixSharedHits;
   vector<int>     *el_nSCTSharedHits;
   vector<int>     *el_nBLayerSplitHits;
   vector<int>     *el_nPixSplitHits;
   vector<int>     *el_nBLayerOutliers;
   vector<int>     *el_nPixelOutliers;
   vector<int>     *el_nSCTOutliers;
   vector<int>     *el_nTRTOutliers;
   vector<int>     *el_nTRTHighTOutliers;
   vector<int>     *el_nContribPixelLayers;
   vector<int>     *el_nGangedPixels;
   vector<int>     *el_nGangedFlaggedFakes;
   vector<int>     *el_nPixelSpoiltHits;
   vector<int>     *el_nSCTDoubleHoles;
   vector<int>     *el_nSCTSpoiltHits;
   vector<int>     *el_expectBLayerHit;
   vector<int>     *el_nSiHits;
   vector<float>   *el_TRTHighTHitsRatio;
   vector<float>   *el_TRTHighTOutliersRatio;
   vector<float>   *el_pixeldEdx;
   vector<int>     *el_nGoodHitsPixeldEdx;
   vector<float>   *el_massPixeldEdx;
   vector<vector<float> > *el_likelihoodsPixeldEdx;
   vector<float>   *el_eProbabilityComb;
   vector<float>   *el_eProbabilityHT;
   vector<float>   *el_eProbabilityToT;
   vector<float>   *el_eProbabilityBrem;
   vector<float>   *el_vertweight;
   vector<float>   *el_vertx;
   vector<float>   *el_verty;
   vector<float>   *el_vertz;
   vector<float>   *el_trackd0beam;
   vector<float>   *el_trackz0beam;
   vector<float>   *el_tracksigd0beam;
   vector<float>   *el_tracksigz0beam;
   vector<float>   *el_trackd0pv;
   vector<float>   *el_trackz0pv;
   vector<float>   *el_tracksigd0pv;
   vector<float>   *el_tracksigz0pv;
   vector<float>   *el_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *el_trackd0pvunbiased;
   vector<float>   *el_trackz0pvunbiased;
   vector<float>   *el_tracksigd0pvunbiased;
   vector<float>   *el_tracksigz0pvunbiased;
   vector<float>   *el_Unrefittedtrack_d0;
   vector<float>   *el_Unrefittedtrack_z0;
   vector<float>   *el_Unrefittedtrack_phi;
   vector<float>   *el_Unrefittedtrack_theta;
   vector<float>   *el_Unrefittedtrack_qoverp;
   vector<float>   *el_Unrefittedtrack_pt;
   vector<float>   *el_Unrefittedtrack_eta;
   vector<float>   *el_theta_LM;
   vector<float>   *el_qoverp_LM;
   vector<float>   *el_locX_LM;
   vector<float>   *el_locY_LM;
   vector<float>   *el_phi_LM;
   vector<float>   *el_theta_err_LM;
   vector<float>   *el_qoverp_err_LM;
   vector<float>   *el_locX_err_LM;
   vector<float>   *el_locY_err_LM;
   vector<float>   *el_phi_err_LM;
   vector<int>     *el_hastrack;
   vector<float>   *el_deltaEmax2;
   vector<float>   *el_calibHitsShowerDepth;
   vector<unsigned int> *el_isIso;
   vector<float>   *el_mvaptcone20;
   vector<float>   *el_mvaptcone30;
   vector<float>   *el_mvaptcone40;
   vector<float>   *el_CaloPointing_eta;
   vector<float>   *el_CaloPointing_sigma_eta;
   vector<float>   *el_CaloPointing_zvertex;
   vector<float>   *el_CaloPointing_sigma_zvertex;
   vector<float>   *el_HPV_eta;
   vector<float>   *el_HPV_sigma_eta;
   vector<float>   *el_HPV_zvertex;
   vector<float>   *el_HPV_sigma_zvertex;
   vector<float>   *el_topoEtcone60;
   vector<float>   *el_ES0_real;
   vector<float>   *el_ES1_real;
   vector<float>   *el_ES2_real;
   vector<float>   *el_ES3_real;
   vector<float>   *el_EcellS0;
   vector<float>   *el_etacellS0;
   vector<float>   *el_Etcone40_ED_corrected;
   vector<float>   *el_Etcone40_corrected;
   vector<float>   *el_topoEtcone20_corrected;
   vector<float>   *el_topoEtcone30_corrected;
   vector<float>   *el_topoEtcone40_corrected;
   vector<float>   *el_ED_median;
   vector<float>   *el_ED_sigma;
   vector<float>   *el_ED_Njets;
   vector<float>   *el_jet_dr;
   vector<float>   *el_jet_E;
   vector<float>   *el_jet_pt;
   vector<float>   *el_jet_m;
   vector<float>   *el_jet_eta;
   vector<float>   *el_jet_phi;
   vector<int>     *el_jet_matched;
   vector<float>   *el_EF_dr;
   vector<float>   *el_L2_dr;
   vector<float>   *el_L1_dr;
   Int_t           stau_candidate_n;
   vector<int>     *stau_candidate_hasRpcHits;
   vector<int>     *stau_candidate_hasTileCells;
   vector<double>  *stau_candidate_beta;
   vector<double>  *stau_candidate_ann;
   vector<double>  *stau_candidate_mfP_px;
   vector<double>  *stau_candidate_mfP_py;
   vector<double>  *stau_candidate_mfP_pz;
   vector<double>  *stau_candidate_muonP_px;
   vector<double>  *stau_candidate_muonP_py;
   vector<double>  *stau_candidate_muonP_pz;
   vector<double>  *stau_candidate_stauP_px;
   vector<double>  *stau_candidate_stauP_py;
   vector<double>  *stau_candidate_stauP_pz;
   vector<double>  *stau_candidate_idP_px;
   vector<double>  *stau_candidate_idP_py;
   vector<double>  *stau_candidate_idP_pz;
   vector<vector<int> > *stau_candidate_BetaMeasurement_tech;
   vector<vector<double> > *stau_candidate_BetaMeasurement_beta;
   vector<vector<double> > *stau_candidate_BetaMeasurement_chi2;
   vector<vector<double> > *stau_candidate_BetaMeasurement_dof;
   vector<vector<double> > *stau_candidate_BetaMeasurement_avg;
   vector<vector<double> > *stau_candidate_BetaMeasurement_rms;
   vector<vector<int> > *stau_candidate_BetaMeasurement_contr_idx;
   vector<vector<int> > *stau_candidate_BetaMeasurement_contr_tech;
   vector<vector<double> > *stau_candidate_BetaMeasurement_contr_chi2;
   vector<vector<double> > *stau_candidate_BetaMeasurement_contr_dof;
   vector<vector<unsigned int> > *stau_candidate_StauHit_id;
   vector<vector<int> > *stau_candidate_StauHit_eTech;
   vector<vector<int> > *stau_candidate_StauHit_isEta;
   vector<vector<double> > *stau_candidate_StauHit_mToF;
   vector<vector<double> > *stau_candidate_StauHit_x;
   vector<vector<double> > *stau_candidate_StauHit_y;
   vector<vector<double> > *stau_candidate_StauHit_z;
   vector<vector<double> > *stau_candidate_StauHit_e;
   vector<vector<double> > *stau_candidate_StauHit_error;
   vector<vector<double> > *stau_candidate_StauHit_shift;
   Int_t           mu_lowbeta_stau_n;
   vector<int>     *mu_lowbeta_stau_hasRpcHits;
   vector<int>     *mu_lowbeta_stau_hasTileCells;
   vector<double>  *mu_lowbeta_stau_beta;
   vector<double>  *mu_lowbeta_stau_ann;
   vector<double>  *mu_lowbeta_stau_mfP_px;
   vector<double>  *mu_lowbeta_stau_mfP_py;
   vector<double>  *mu_lowbeta_stau_mfP_pz;
   vector<double>  *mu_lowbeta_stau_muonP_px;
   vector<double>  *mu_lowbeta_stau_muonP_py;
   vector<double>  *mu_lowbeta_stau_muonP_pz;
   vector<double>  *mu_lowbeta_stau_stauP_px;
   vector<double>  *mu_lowbeta_stau_stauP_py;
   vector<double>  *mu_lowbeta_stau_stauP_pz;
   vector<double>  *mu_lowbeta_stau_idP_px;
   vector<double>  *mu_lowbeta_stau_idP_py;
   vector<double>  *mu_lowbeta_stau_idP_pz;
   vector<vector<int> > *mu_lowbeta_stau_BetaMeasurement_tech;
   vector<vector<double> > *mu_lowbeta_stau_BetaMeasurement_beta;
   vector<vector<double> > *mu_lowbeta_stau_BetaMeasurement_chi2;
   vector<vector<double> > *mu_lowbeta_stau_BetaMeasurement_dof;
   vector<vector<double> > *mu_lowbeta_stau_BetaMeasurement_avg;
   vector<vector<double> > *mu_lowbeta_stau_BetaMeasurement_rms;
   vector<vector<int> > *mu_lowbeta_stau_BetaMeasurement_contr_idx;
   vector<vector<int> > *mu_lowbeta_stau_BetaMeasurement_contr_tech;
   vector<vector<double> > *mu_lowbeta_stau_BetaMeasurement_contr_chi2;
   vector<vector<double> > *mu_lowbeta_stau_BetaMeasurement_contr_dof;
   vector<vector<unsigned int> > *mu_lowbeta_stau_StauHit_id;
   vector<vector<int> > *mu_lowbeta_stau_StauHit_eTech;
   vector<vector<int> > *mu_lowbeta_stau_StauHit_isEta;
   vector<vector<double> > *mu_lowbeta_stau_StauHit_mToF;
   vector<vector<double> > *mu_lowbeta_stau_StauHit_x;
   vector<vector<double> > *mu_lowbeta_stau_StauHit_y;
   vector<vector<double> > *mu_lowbeta_stau_StauHit_z;
   vector<vector<double> > *mu_lowbeta_stau_StauHit_e;
   vector<vector<double> > *mu_lowbeta_stau_StauHit_error;
   vector<vector<double> > *mu_lowbeta_stau_StauHit_shift;
   Int_t           mu_lowbeta_cont_n;
   vector<float>   *mu_lowbeta_cont_mdt_beta;
   vector<float>   *mu_lowbeta_cont_mdt_chi2;
   vector<float>   *mu_lowbeta_cont_mdt_betaerror;
   vector<int>     *mu_lowbeta_cont_mdt_nhits;
   vector<vector<unsigned int> > *mu_lowbeta_cont_mdt_hit_id;
   vector<vector<float> > *mu_lowbeta_cont_mdt_hit_x;
   vector<vector<float> > *mu_lowbeta_cont_mdt_hit_y;
   vector<vector<float> > *mu_lowbeta_cont_mdt_hit_z;
   vector<vector<float> > *mu_lowbeta_cont_mdt_hit_t;
   vector<vector<float> > *mu_lowbeta_cont_mdt_hit_error;
   vector<vector<float> > *mu_lowbeta_cont_mdt_hit_proptime;
   vector<vector<float> > *mu_lowbeta_cont_mdt_hit_shift;
   vector<float>   *mu_lowbeta_cont_rpc_beta;
   vector<float>   *mu_lowbeta_cont_rpc_chi2;
   vector<float>   *mu_lowbeta_cont_rpc_betaerror;
   vector<int>     *mu_lowbeta_cont_rpc_nhits;
   vector<vector<unsigned int> > *mu_lowbeta_cont_rpc_hit_id;
   vector<vector<float> > *mu_lowbeta_cont_rpc_hit_x;
   vector<vector<float> > *mu_lowbeta_cont_rpc_hit_y;
   vector<vector<float> > *mu_lowbeta_cont_rpc_hit_z;
   vector<vector<float> > *mu_lowbeta_cont_rpc_hit_t;
   vector<vector<float> > *mu_lowbeta_cont_rpc_hit_error;
   vector<vector<float> > *mu_lowbeta_cont_rpc_hit_proptime;
   vector<vector<float> > *mu_lowbeta_cont_rpc_hit_shift;
   vector<int>     *mu_lowbeta_cont_calo_nhits;
   vector<vector<unsigned int> > *mu_lowbeta_cont_calo_hit_id;
   vector<vector<float> > *mu_lowbeta_cont_calo_hit_x;
   vector<vector<float> > *mu_lowbeta_cont_calo_hit_y;
   vector<vector<float> > *mu_lowbeta_cont_calo_hit_z;
   vector<vector<float> > *mu_lowbeta_cont_calo_hit_t;
   vector<vector<float> > *mu_lowbeta_cont_calo_hit_energy;
   vector<vector<float> > *mu_lowbeta_cont_calo_hit_shift;
   vector<int>     *mu_lowbeta_cont_mstrk_ok;
   vector<float>   *mu_lowbeta_cont_mstrk_px;
   vector<float>   *mu_lowbeta_cont_mstrk_py;
   vector<float>   *mu_lowbeta_cont_mstrk_pz;
   vector<int>     *mu_lowbeta_cont_satrk_ok;
   vector<float>   *mu_lowbeta_cont_satrk_px;
   vector<float>   *mu_lowbeta_cont_satrk_py;
   vector<float>   *mu_lowbeta_cont_satrk_pz;
   vector<int>     *mu_lowbeta_cont_cbtrk_ok;
   vector<float>   *mu_lowbeta_cont_cbtrk_px;
   vector<float>   *mu_lowbeta_cont_cbtrk_py;
   vector<float>   *mu_lowbeta_cont_cbtrk_pz;
   vector<int>     *mu_lowbeta_cont_idtrk_ok;
   vector<float>   *mu_lowbeta_cont_idtrk_px;
   vector<float>   *mu_lowbeta_cont_idtrk_py;
   vector<float>   *mu_lowbeta_cont_idtrk_pz;
   Int_t           mu_muid_n;
   vector<float>   *mu_muid_E;
   vector<float>   *mu_muid_pt;
   vector<float>   *mu_muid_m;
   vector<float>   *mu_muid_eta;
   vector<float>   *mu_muid_phi;
   vector<float>   *mu_muid_px;
   vector<float>   *mu_muid_py;
   vector<float>   *mu_muid_pz;
   vector<float>   *mu_muid_charge;
   vector<unsigned short> *mu_muid_allauthor;
   vector<int>     *mu_muid_author;
   vector<float>   *mu_muid_beta;
   vector<float>   *mu_muid_isMuonLikelihood;
   vector<float>   *mu_muid_matchchi2;
   vector<int>     *mu_muid_matchndof;
   vector<float>   *mu_muid_etcone20;
   vector<float>   *mu_muid_etcone30;
   vector<float>   *mu_muid_etcone40;
   vector<float>   *mu_muid_nucone20;
   vector<float>   *mu_muid_nucone30;
   vector<float>   *mu_muid_nucone40;
   vector<float>   *mu_muid_ptcone20;
   vector<float>   *mu_muid_ptcone30;
   vector<float>   *mu_muid_ptcone40;
   vector<float>   *mu_muid_etconeNoEm10;
   vector<float>   *mu_muid_etconeNoEm20;
   vector<float>   *mu_muid_etconeNoEm30;
   vector<float>   *mu_muid_etconeNoEm40;
   vector<float>   *mu_muid_scatteringCurvatureSignificance;
   vector<float>   *mu_muid_scatteringNeighbourSignificance;
   vector<float>   *mu_muid_momentumBalanceSignificance;
   vector<float>   *mu_muid_energyLossPar;
   vector<float>   *mu_muid_energyLossErr;
   vector<float>   *mu_muid_etCore;
   vector<float>   *mu_muid_energyLossType;
   vector<unsigned short> *mu_muid_caloMuonIdTag;
   vector<double>  *mu_muid_caloLRLikelihood;
   vector<int>     *mu_muid_bestMatch;
   vector<int>     *mu_muid_isStandAloneMuon;
   vector<int>     *mu_muid_isCombinedMuon;
   vector<int>     *mu_muid_isLowPtReconstructedMuon;
   vector<int>     *mu_muid_isSegmentTaggedMuon;
   vector<int>     *mu_muid_isCaloMuonId;
   vector<int>     *mu_muid_alsoFoundByLowPt;
   vector<int>     *mu_muid_alsoFoundByCaloMuonId;
   vector<int>     *mu_muid_isSiliconAssociatedForwardMuon;
   vector<int>     *mu_muid_loose;
   vector<int>     *mu_muid_medium;
   vector<int>     *mu_muid_tight;
   vector<float>   *mu_muid_d0_exPV;
   vector<float>   *mu_muid_z0_exPV;
   vector<float>   *mu_muid_phi_exPV;
   vector<float>   *mu_muid_theta_exPV;
   vector<float>   *mu_muid_qoverp_exPV;
   vector<float>   *mu_muid_cb_d0_exPV;
   vector<float>   *mu_muid_cb_z0_exPV;
   vector<float>   *mu_muid_cb_phi_exPV;
   vector<float>   *mu_muid_cb_theta_exPV;
   vector<float>   *mu_muid_cb_qoverp_exPV;
   vector<float>   *mu_muid_id_d0_exPV;
   vector<float>   *mu_muid_id_z0_exPV;
   vector<float>   *mu_muid_id_phi_exPV;
   vector<float>   *mu_muid_id_theta_exPV;
   vector<float>   *mu_muid_id_qoverp_exPV;
   vector<float>   *mu_muid_me_d0_exPV;
   vector<float>   *mu_muid_me_z0_exPV;
   vector<float>   *mu_muid_me_phi_exPV;
   vector<float>   *mu_muid_me_theta_exPV;
   vector<float>   *mu_muid_me_qoverp_exPV;
   vector<float>   *mu_muid_ie_d0_exPV;
   vector<float>   *mu_muid_ie_z0_exPV;
   vector<float>   *mu_muid_ie_phi_exPV;
   vector<float>   *mu_muid_ie_theta_exPV;
   vector<float>   *mu_muid_ie_qoverp_exPV;
   vector<vector<int> > *mu_muid_SpaceTime_detID;
   vector<vector<float> > *mu_muid_SpaceTime_t;
   vector<vector<float> > *mu_muid_SpaceTime_tError;
   vector<vector<float> > *mu_muid_SpaceTime_weight;
   vector<vector<float> > *mu_muid_SpaceTime_x;
   vector<vector<float> > *mu_muid_SpaceTime_y;
   vector<vector<float> > *mu_muid_SpaceTime_z;
   vector<float>   *mu_muid_cov_d0_exPV;
   vector<float>   *mu_muid_cov_z0_exPV;
   vector<float>   *mu_muid_cov_phi_exPV;
   vector<float>   *mu_muid_cov_theta_exPV;
   vector<float>   *mu_muid_cov_qoverp_exPV;
   vector<float>   *mu_muid_cov_d0_z0_exPV;
   vector<float>   *mu_muid_cov_d0_phi_exPV;
   vector<float>   *mu_muid_cov_d0_theta_exPV;
   vector<float>   *mu_muid_cov_d0_qoverp_exPV;
   vector<float>   *mu_muid_cov_z0_phi_exPV;
   vector<float>   *mu_muid_cov_z0_theta_exPV;
   vector<float>   *mu_muid_cov_z0_qoverp_exPV;
   vector<float>   *mu_muid_cov_phi_theta_exPV;
   vector<float>   *mu_muid_cov_phi_qoverp_exPV;
   vector<float>   *mu_muid_cov_theta_qoverp_exPV;
   vector<float>   *mu_muid_id_cov_d0_exPV;
   vector<float>   *mu_muid_id_cov_z0_exPV;
   vector<float>   *mu_muid_id_cov_phi_exPV;
   vector<float>   *mu_muid_id_cov_theta_exPV;
   vector<float>   *mu_muid_id_cov_qoverp_exPV;
   vector<float>   *mu_muid_id_cov_d0_z0_exPV;
   vector<float>   *mu_muid_id_cov_d0_phi_exPV;
   vector<float>   *mu_muid_id_cov_d0_theta_exPV;
   vector<float>   *mu_muid_id_cov_d0_qoverp_exPV;
   vector<float>   *mu_muid_id_cov_z0_phi_exPV;
   vector<float>   *mu_muid_id_cov_z0_theta_exPV;
   vector<float>   *mu_muid_id_cov_z0_qoverp_exPV;
   vector<float>   *mu_muid_id_cov_phi_theta_exPV;
   vector<float>   *mu_muid_id_cov_phi_qoverp_exPV;
   vector<float>   *mu_muid_id_cov_theta_qoverp_exPV;
   vector<float>   *mu_muid_me_cov_d0_exPV;
   vector<float>   *mu_muid_me_cov_z0_exPV;
   vector<float>   *mu_muid_me_cov_phi_exPV;
   vector<float>   *mu_muid_me_cov_theta_exPV;
   vector<float>   *mu_muid_me_cov_qoverp_exPV;
   vector<float>   *mu_muid_me_cov_d0_z0_exPV;
   vector<float>   *mu_muid_me_cov_d0_phi_exPV;
   vector<float>   *mu_muid_me_cov_d0_theta_exPV;
   vector<float>   *mu_muid_me_cov_d0_qoverp_exPV;
   vector<float>   *mu_muid_me_cov_z0_phi_exPV;
   vector<float>   *mu_muid_me_cov_z0_theta_exPV;
   vector<float>   *mu_muid_me_cov_z0_qoverp_exPV;
   vector<float>   *mu_muid_me_cov_phi_theta_exPV;
   vector<float>   *mu_muid_me_cov_phi_qoverp_exPV;
   vector<float>   *mu_muid_me_cov_theta_qoverp_exPV;
   vector<float>   *mu_muid_ms_d0;
   vector<float>   *mu_muid_ms_z0;
   vector<float>   *mu_muid_ms_phi;
   vector<float>   *mu_muid_ms_theta;
   vector<float>   *mu_muid_ms_qoverp;
   vector<float>   *mu_muid_id_d0;
   vector<float>   *mu_muid_id_z0;
   vector<float>   *mu_muid_id_phi;
   vector<float>   *mu_muid_id_theta;
   vector<float>   *mu_muid_id_qoverp;
   vector<float>   *mu_muid_me_d0;
   vector<float>   *mu_muid_me_z0;
   vector<float>   *mu_muid_me_phi;
   vector<float>   *mu_muid_me_theta;
   vector<float>   *mu_muid_me_qoverp;
   vector<float>   *mu_muid_ie_d0;
   vector<float>   *mu_muid_ie_z0;
   vector<float>   *mu_muid_ie_phi;
   vector<float>   *mu_muid_ie_theta;
   vector<float>   *mu_muid_ie_qoverp;
   vector<int>     *mu_muid_nOutliersOnTrack;
   vector<int>     *mu_muid_nBLHits;
   vector<int>     *mu_muid_nPixHits;
   vector<int>     *mu_muid_nSCTHits;
   vector<int>     *mu_muid_nTRTHits;
   vector<int>     *mu_muid_nTRTHighTHits;
   vector<int>     *mu_muid_nBLSharedHits;
   vector<int>     *mu_muid_nPixSharedHits;
   vector<int>     *mu_muid_nPixHoles;
   vector<int>     *mu_muid_nSCTSharedHits;
   vector<int>     *mu_muid_nSCTHoles;
   vector<int>     *mu_muid_nTRTOutliers;
   vector<int>     *mu_muid_nTRTHighTOutliers;
   vector<int>     *mu_muid_nGangedPixels;
   vector<int>     *mu_muid_nPixelDeadSensors;
   vector<int>     *mu_muid_nSCTDeadSensors;
   vector<int>     *mu_muid_nTRTDeadStraws;
   vector<int>     *mu_muid_expectBLayerHit;
   vector<int>     *mu_muid_nMDTHits;
   vector<int>     *mu_muid_nMDTHoles;
   vector<int>     *mu_muid_nCSCEtaHits;
   vector<int>     *mu_muid_nCSCEtaHoles;
   vector<int>     *mu_muid_nCSCUnspoiledEtaHits;
   vector<int>     *mu_muid_nCSCPhiHits;
   vector<int>     *mu_muid_nCSCPhiHoles;
   vector<int>     *mu_muid_nRPCEtaHits;
   vector<int>     *mu_muid_nRPCEtaHoles;
   vector<int>     *mu_muid_nRPCPhiHits;
   vector<int>     *mu_muid_nRPCPhiHoles;
   vector<int>     *mu_muid_nTGCEtaHits;
   vector<int>     *mu_muid_nTGCEtaHoles;
   vector<int>     *mu_muid_nTGCPhiHits;
   vector<int>     *mu_muid_nTGCPhiHoles;
   vector<int>     *mu_muid_nprecisionLayers;
   vector<int>     *mu_muid_nprecisionHoleLayers;
   vector<int>     *mu_muid_nphiLayers;
   vector<int>     *mu_muid_ntrigEtaLayers;
   vector<int>     *mu_muid_nphiHoleLayers;
   vector<int>     *mu_muid_ntrigEtaHoleLayers;
   vector<int>     *mu_muid_nMDTBIHits;
   vector<int>     *mu_muid_nMDTBMHits;
   vector<int>     *mu_muid_nMDTBOHits;
   vector<int>     *mu_muid_nMDTBEEHits;
   vector<int>     *mu_muid_nMDTBIS78Hits;
   vector<int>     *mu_muid_nMDTEIHits;
   vector<int>     *mu_muid_nMDTEMHits;
   vector<int>     *mu_muid_nMDTEOHits;
   vector<int>     *mu_muid_nMDTEEHits;
   vector<int>     *mu_muid_nRPCLayer1EtaHits;
   vector<int>     *mu_muid_nRPCLayer2EtaHits;
   vector<int>     *mu_muid_nRPCLayer3EtaHits;
   vector<int>     *mu_muid_nRPCLayer1PhiHits;
   vector<int>     *mu_muid_nRPCLayer2PhiHits;
   vector<int>     *mu_muid_nRPCLayer3PhiHits;
   vector<int>     *mu_muid_nTGCLayer1EtaHits;
   vector<int>     *mu_muid_nTGCLayer2EtaHits;
   vector<int>     *mu_muid_nTGCLayer3EtaHits;
   vector<int>     *mu_muid_nTGCLayer4EtaHits;
   vector<int>     *mu_muid_nTGCLayer1PhiHits;
   vector<int>     *mu_muid_nTGCLayer2PhiHits;
   vector<int>     *mu_muid_nTGCLayer3PhiHits;
   vector<int>     *mu_muid_nTGCLayer4PhiHits;
   vector<int>     *mu_muid_barrelSectors;
   vector<int>     *mu_muid_endcapSectors;
   vector<float>   *mu_muid_trackd0;
   vector<float>   *mu_muid_trackz0;
   vector<float>   *mu_muid_trackphi;
   vector<float>   *mu_muid_tracktheta;
   vector<float>   *mu_muid_trackqoverp;
   vector<float>   *mu_muid_trackcov_d0;
   vector<float>   *mu_muid_trackcov_z0;
   vector<float>   *mu_muid_trackcov_phi;
   vector<float>   *mu_muid_trackcov_theta;
   vector<float>   *mu_muid_trackcov_qoverp;
   vector<float>   *mu_muid_trackcov_d0_z0;
   vector<float>   *mu_muid_trackcov_d0_phi;
   vector<float>   *mu_muid_trackcov_d0_theta;
   vector<float>   *mu_muid_trackcov_d0_qoverp;
   vector<float>   *mu_muid_trackcov_z0_phi;
   vector<float>   *mu_muid_trackcov_z0_theta;
   vector<float>   *mu_muid_trackcov_z0_qoverp;
   vector<float>   *mu_muid_trackcov_phi_theta;
   vector<float>   *mu_muid_trackcov_phi_qoverp;
   vector<float>   *mu_muid_trackcov_theta_qoverp;
   vector<float>   *mu_muid_trackfitchi2;
   vector<int>     *mu_muid_trackfitndof;
   vector<int>     *mu_muid_hastrack;
   vector<float>   *mu_muid_trackd0beam;
   vector<float>   *mu_muid_trackz0beam;
   vector<float>   *mu_muid_tracksigd0beam;
   vector<float>   *mu_muid_tracksigz0beam;
   vector<float>   *mu_muid_trackd0pv;
   vector<float>   *mu_muid_trackz0pv;
   vector<float>   *mu_muid_tracksigd0pv;
   vector<float>   *mu_muid_tracksigz0pv;
   vector<float>   *mu_muid_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *mu_muid_trackd0pvunbiased;
   vector<float>   *mu_muid_trackz0pvunbiased;
   vector<float>   *mu_muid_tracksigd0pvunbiased;
   vector<float>   *mu_muid_tracksigz0pvunbiased;
   vector<vector<float> > *mu_muid_CaloCell_sampling;
   vector<vector<float> > *mu_muid_CaloCell_eta;
   vector<vector<float> > *mu_muid_CaloCell_phi;
   vector<vector<float> > *mu_muid_CaloCell_dr;
   vector<vector<float> > *mu_muid_CaloCell_E;
   vector<vector<float> > *mu_muid_CaloCell_t;
   vector<vector<float> > *mu_muid_CaloCell_x;
   vector<vector<float> > *mu_muid_CaloCell_y;
   vector<vector<float> > *mu_muid_CaloCell_z;
   vector<float>   *mu_muid_TileBeta;
   vector<float>   *mu_muid_TileBetaMass;
   vector<double>  *mu_muid_meandADC;
   vector<int>     *mu_muid_stau_candidate_assoc_index;
   Int_t           mu_staco_n;
   vector<float>   *mu_staco_E;
   vector<float>   *mu_staco_pt;
   vector<float>   *mu_staco_m;
   vector<float>   *mu_staco_eta;
   vector<float>   *mu_staco_phi;
   vector<float>   *mu_staco_px;
   vector<float>   *mu_staco_py;
   vector<float>   *mu_staco_pz;
   vector<float>   *mu_staco_charge;
   vector<unsigned short> *mu_staco_allauthor;
   vector<int>     *mu_staco_author;
   vector<float>   *mu_staco_beta;
   vector<float>   *mu_staco_isMuonLikelihood;
   vector<float>   *mu_staco_matchchi2;
   vector<int>     *mu_staco_matchndof;
   vector<float>   *mu_staco_etcone20;
   vector<float>   *mu_staco_etcone30;
   vector<float>   *mu_staco_etcone40;
   vector<float>   *mu_staco_nucone20;
   vector<float>   *mu_staco_nucone30;
   vector<float>   *mu_staco_nucone40;
   vector<float>   *mu_staco_ptcone20;
   vector<float>   *mu_staco_ptcone30;
   vector<float>   *mu_staco_ptcone40;
   vector<float>   *mu_staco_etconeNoEm10;
   vector<float>   *mu_staco_etconeNoEm20;
   vector<float>   *mu_staco_etconeNoEm30;
   vector<float>   *mu_staco_etconeNoEm40;
   vector<float>   *mu_staco_scatteringCurvatureSignificance;
   vector<float>   *mu_staco_scatteringNeighbourSignificance;
   vector<float>   *mu_staco_momentumBalanceSignificance;
   vector<float>   *mu_staco_energyLossPar;
   vector<float>   *mu_staco_energyLossErr;
   vector<float>   *mu_staco_etCore;
   vector<float>   *mu_staco_energyLossType;
   vector<unsigned short> *mu_staco_caloMuonIdTag;
   vector<double>  *mu_staco_caloLRLikelihood;
   vector<int>     *mu_staco_bestMatch;
   vector<int>     *mu_staco_isStandAloneMuon;
   vector<int>     *mu_staco_isCombinedMuon;
   vector<int>     *mu_staco_isLowPtReconstructedMuon;
   vector<int>     *mu_staco_isSegmentTaggedMuon;
   vector<int>     *mu_staco_isCaloMuonId;
   vector<int>     *mu_staco_alsoFoundByLowPt;
   vector<int>     *mu_staco_alsoFoundByCaloMuonId;
   vector<int>     *mu_staco_isSiliconAssociatedForwardMuon;
   vector<int>     *mu_staco_loose;
   vector<int>     *mu_staco_medium;
   vector<int>     *mu_staco_tight;
   vector<float>   *mu_staco_d0_exPV;
   vector<float>   *mu_staco_z0_exPV;
   vector<float>   *mu_staco_phi_exPV;
   vector<float>   *mu_staco_theta_exPV;
   vector<float>   *mu_staco_qoverp_exPV;
   vector<float>   *mu_staco_cb_d0_exPV;
   vector<float>   *mu_staco_cb_z0_exPV;
   vector<float>   *mu_staco_cb_phi_exPV;
   vector<float>   *mu_staco_cb_theta_exPV;
   vector<float>   *mu_staco_cb_qoverp_exPV;
   vector<float>   *mu_staco_id_d0_exPV;
   vector<float>   *mu_staco_id_z0_exPV;
   vector<float>   *mu_staco_id_phi_exPV;
   vector<float>   *mu_staco_id_theta_exPV;
   vector<float>   *mu_staco_id_qoverp_exPV;
   vector<float>   *mu_staco_me_d0_exPV;
   vector<float>   *mu_staco_me_z0_exPV;
   vector<float>   *mu_staco_me_phi_exPV;
   vector<float>   *mu_staco_me_theta_exPV;
   vector<float>   *mu_staco_me_qoverp_exPV;
   vector<float>   *mu_staco_ie_d0_exPV;
   vector<float>   *mu_staco_ie_z0_exPV;
   vector<float>   *mu_staco_ie_phi_exPV;
   vector<float>   *mu_staco_ie_theta_exPV;
   vector<float>   *mu_staco_ie_qoverp_exPV;
   vector<vector<int> > *mu_staco_SpaceTime_detID;
   vector<vector<float> > *mu_staco_SpaceTime_t;
   vector<vector<float> > *mu_staco_SpaceTime_tError;
   vector<vector<float> > *mu_staco_SpaceTime_weight;
   vector<vector<float> > *mu_staco_SpaceTime_x;
   vector<vector<float> > *mu_staco_SpaceTime_y;
   vector<vector<float> > *mu_staco_SpaceTime_z;
   vector<float>   *mu_staco_cov_d0_exPV;
   vector<float>   *mu_staco_cov_z0_exPV;
   vector<float>   *mu_staco_cov_phi_exPV;
   vector<float>   *mu_staco_cov_theta_exPV;
   vector<float>   *mu_staco_cov_qoverp_exPV;
   vector<float>   *mu_staco_cov_d0_z0_exPV;
   vector<float>   *mu_staco_cov_d0_phi_exPV;
   vector<float>   *mu_staco_cov_d0_theta_exPV;
   vector<float>   *mu_staco_cov_d0_qoverp_exPV;
   vector<float>   *mu_staco_cov_z0_phi_exPV;
   vector<float>   *mu_staco_cov_z0_theta_exPV;
   vector<float>   *mu_staco_cov_z0_qoverp_exPV;
   vector<float>   *mu_staco_cov_phi_theta_exPV;
   vector<float>   *mu_staco_cov_phi_qoverp_exPV;
   vector<float>   *mu_staco_cov_theta_qoverp_exPV;
   vector<float>   *mu_staco_id_cov_d0_exPV;
   vector<float>   *mu_staco_id_cov_z0_exPV;
   vector<float>   *mu_staco_id_cov_phi_exPV;
   vector<float>   *mu_staco_id_cov_theta_exPV;
   vector<float>   *mu_staco_id_cov_qoverp_exPV;
   vector<float>   *mu_staco_id_cov_d0_z0_exPV;
   vector<float>   *mu_staco_id_cov_d0_phi_exPV;
   vector<float>   *mu_staco_id_cov_d0_theta_exPV;
   vector<float>   *mu_staco_id_cov_d0_qoverp_exPV;
   vector<float>   *mu_staco_id_cov_z0_phi_exPV;
   vector<float>   *mu_staco_id_cov_z0_theta_exPV;
   vector<float>   *mu_staco_id_cov_z0_qoverp_exPV;
   vector<float>   *mu_staco_id_cov_phi_theta_exPV;
   vector<float>   *mu_staco_id_cov_phi_qoverp_exPV;
   vector<float>   *mu_staco_id_cov_theta_qoverp_exPV;
   vector<float>   *mu_staco_me_cov_d0_exPV;
   vector<float>   *mu_staco_me_cov_z0_exPV;
   vector<float>   *mu_staco_me_cov_phi_exPV;
   vector<float>   *mu_staco_me_cov_theta_exPV;
   vector<float>   *mu_staco_me_cov_qoverp_exPV;
   vector<float>   *mu_staco_me_cov_d0_z0_exPV;
   vector<float>   *mu_staco_me_cov_d0_phi_exPV;
   vector<float>   *mu_staco_me_cov_d0_theta_exPV;
   vector<float>   *mu_staco_me_cov_d0_qoverp_exPV;
   vector<float>   *mu_staco_me_cov_z0_phi_exPV;
   vector<float>   *mu_staco_me_cov_z0_theta_exPV;
   vector<float>   *mu_staco_me_cov_z0_qoverp_exPV;
   vector<float>   *mu_staco_me_cov_phi_theta_exPV;
   vector<float>   *mu_staco_me_cov_phi_qoverp_exPV;
   vector<float>   *mu_staco_me_cov_theta_qoverp_exPV;
   vector<float>   *mu_staco_ms_d0;
   vector<float>   *mu_staco_ms_z0;
   vector<float>   *mu_staco_ms_phi;
   vector<float>   *mu_staco_ms_theta;
   vector<float>   *mu_staco_ms_qoverp;
   vector<float>   *mu_staco_id_d0;
   vector<float>   *mu_staco_id_z0;
   vector<float>   *mu_staco_id_phi;
   vector<float>   *mu_staco_id_theta;
   vector<float>   *mu_staco_id_qoverp;
   vector<float>   *mu_staco_me_d0;
   vector<float>   *mu_staco_me_z0;
   vector<float>   *mu_staco_me_phi;
   vector<float>   *mu_staco_me_theta;
   vector<float>   *mu_staco_me_qoverp;
   vector<float>   *mu_staco_ie_d0;
   vector<float>   *mu_staco_ie_z0;
   vector<float>   *mu_staco_ie_phi;
   vector<float>   *mu_staco_ie_theta;
   vector<float>   *mu_staco_ie_qoverp;
   vector<int>     *mu_staco_nOutliersOnTrack;
   vector<int>     *mu_staco_nBLHits;
   vector<int>     *mu_staco_nPixHits;
   vector<int>     *mu_staco_nSCTHits;
   vector<int>     *mu_staco_nTRTHits;
   vector<int>     *mu_staco_nTRTHighTHits;
   vector<int>     *mu_staco_nBLSharedHits;
   vector<int>     *mu_staco_nPixSharedHits;
   vector<int>     *mu_staco_nPixHoles;
   vector<int>     *mu_staco_nSCTSharedHits;
   vector<int>     *mu_staco_nSCTHoles;
   vector<int>     *mu_staco_nTRTOutliers;
   vector<int>     *mu_staco_nTRTHighTOutliers;
   vector<int>     *mu_staco_nGangedPixels;
   vector<int>     *mu_staco_nPixelDeadSensors;
   vector<int>     *mu_staco_nSCTDeadSensors;
   vector<int>     *mu_staco_nTRTDeadStraws;
   vector<int>     *mu_staco_expectBLayerHit;
   vector<int>     *mu_staco_nMDTHits;
   vector<int>     *mu_staco_nMDTHoles;
   vector<int>     *mu_staco_nCSCEtaHits;
   vector<int>     *mu_staco_nCSCEtaHoles;
   vector<int>     *mu_staco_nCSCUnspoiledEtaHits;
   vector<int>     *mu_staco_nCSCPhiHits;
   vector<int>     *mu_staco_nCSCPhiHoles;
   vector<int>     *mu_staco_nRPCEtaHits;
   vector<int>     *mu_staco_nRPCEtaHoles;
   vector<int>     *mu_staco_nRPCPhiHits;
   vector<int>     *mu_staco_nRPCPhiHoles;
   vector<int>     *mu_staco_nTGCEtaHits;
   vector<int>     *mu_staco_nTGCEtaHoles;
   vector<int>     *mu_staco_nTGCPhiHits;
   vector<int>     *mu_staco_nTGCPhiHoles;
   vector<int>     *mu_staco_nprecisionLayers;
   vector<int>     *mu_staco_nprecisionHoleLayers;
   vector<int>     *mu_staco_nphiLayers;
   vector<int>     *mu_staco_ntrigEtaLayers;
   vector<int>     *mu_staco_nphiHoleLayers;
   vector<int>     *mu_staco_ntrigEtaHoleLayers;
   vector<int>     *mu_staco_nMDTBIHits;
   vector<int>     *mu_staco_nMDTBMHits;
   vector<int>     *mu_staco_nMDTBOHits;
   vector<int>     *mu_staco_nMDTBEEHits;
   vector<int>     *mu_staco_nMDTBIS78Hits;
   vector<int>     *mu_staco_nMDTEIHits;
   vector<int>     *mu_staco_nMDTEMHits;
   vector<int>     *mu_staco_nMDTEOHits;
   vector<int>     *mu_staco_nMDTEEHits;
   vector<int>     *mu_staco_nRPCLayer1EtaHits;
   vector<int>     *mu_staco_nRPCLayer2EtaHits;
   vector<int>     *mu_staco_nRPCLayer3EtaHits;
   vector<int>     *mu_staco_nRPCLayer1PhiHits;
   vector<int>     *mu_staco_nRPCLayer2PhiHits;
   vector<int>     *mu_staco_nRPCLayer3PhiHits;
   vector<int>     *mu_staco_nTGCLayer1EtaHits;
   vector<int>     *mu_staco_nTGCLayer2EtaHits;
   vector<int>     *mu_staco_nTGCLayer3EtaHits;
   vector<int>     *mu_staco_nTGCLayer4EtaHits;
   vector<int>     *mu_staco_nTGCLayer1PhiHits;
   vector<int>     *mu_staco_nTGCLayer2PhiHits;
   vector<int>     *mu_staco_nTGCLayer3PhiHits;
   vector<int>     *mu_staco_nTGCLayer4PhiHits;
   vector<int>     *mu_staco_barrelSectors;
   vector<int>     *mu_staco_endcapSectors;
   vector<float>   *mu_staco_trackd0;
   vector<float>   *mu_staco_trackz0;
   vector<float>   *mu_staco_trackphi;
   vector<float>   *mu_staco_tracktheta;
   vector<float>   *mu_staco_trackqoverp;
   vector<float>   *mu_staco_trackcov_d0;
   vector<float>   *mu_staco_trackcov_z0;
   vector<float>   *mu_staco_trackcov_phi;
   vector<float>   *mu_staco_trackcov_theta;
   vector<float>   *mu_staco_trackcov_qoverp;
   vector<float>   *mu_staco_trackcov_d0_z0;
   vector<float>   *mu_staco_trackcov_d0_phi;
   vector<float>   *mu_staco_trackcov_d0_theta;
   vector<float>   *mu_staco_trackcov_d0_qoverp;
   vector<float>   *mu_staco_trackcov_z0_phi;
   vector<float>   *mu_staco_trackcov_z0_theta;
   vector<float>   *mu_staco_trackcov_z0_qoverp;
   vector<float>   *mu_staco_trackcov_phi_theta;
   vector<float>   *mu_staco_trackcov_phi_qoverp;
   vector<float>   *mu_staco_trackcov_theta_qoverp;
   vector<float>   *mu_staco_trackfitchi2;
   vector<int>     *mu_staco_trackfitndof;
   vector<int>     *mu_staco_hastrack;
   vector<float>   *mu_staco_trackd0beam;
   vector<float>   *mu_staco_trackz0beam;
   vector<float>   *mu_staco_tracksigd0beam;
   vector<float>   *mu_staco_tracksigz0beam;
   vector<float>   *mu_staco_trackd0pv;
   vector<float>   *mu_staco_trackz0pv;
   vector<float>   *mu_staco_tracksigd0pv;
   vector<float>   *mu_staco_tracksigz0pv;
   vector<float>   *mu_staco_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackd0pvunbiased;
   vector<float>   *mu_staco_trackz0pvunbiased;
   vector<float>   *mu_staco_tracksigd0pvunbiased;
   vector<float>   *mu_staco_tracksigz0pvunbiased;
   vector<vector<float> > *mu_staco_CaloCell_sampling;
   vector<vector<float> > *mu_staco_CaloCell_eta;
   vector<vector<float> > *mu_staco_CaloCell_phi;
   vector<vector<float> > *mu_staco_CaloCell_dr;
   vector<vector<float> > *mu_staco_CaloCell_E;
   vector<vector<float> > *mu_staco_CaloCell_t;
   vector<vector<float> > *mu_staco_CaloCell_x;
   vector<vector<float> > *mu_staco_CaloCell_y;
   vector<vector<float> > *mu_staco_CaloCell_z;
   vector<float>   *mu_staco_TileBeta;
   vector<float>   *mu_staco_TileBetaMass;
   vector<double>  *mu_staco_meandADC;
   vector<int>     *mu_staco_stau_candidate_assoc_index;
   Int_t           mu_calo_n;
   vector<float>   *mu_calo_E;
   vector<float>   *mu_calo_pt;
   vector<float>   *mu_calo_m;
   vector<float>   *mu_calo_eta;
   vector<float>   *mu_calo_phi;
   vector<float>   *mu_calo_px;
   vector<float>   *mu_calo_py;
   vector<float>   *mu_calo_pz;
   vector<float>   *mu_calo_charge;
   vector<unsigned short> *mu_calo_allauthor;
   vector<int>     *mu_calo_author;
   vector<float>   *mu_calo_beta;
   vector<float>   *mu_calo_isMuonLikelihood;
   vector<float>   *mu_calo_matchchi2;
   vector<int>     *mu_calo_matchndof;
   vector<float>   *mu_calo_etcone20;
   vector<float>   *mu_calo_etcone30;
   vector<float>   *mu_calo_etcone40;
   vector<float>   *mu_calo_nucone20;
   vector<float>   *mu_calo_nucone30;
   vector<float>   *mu_calo_nucone40;
   vector<float>   *mu_calo_ptcone20;
   vector<float>   *mu_calo_ptcone30;
   vector<float>   *mu_calo_ptcone40;
   vector<float>   *mu_calo_etconeNoEm10;
   vector<float>   *mu_calo_etconeNoEm20;
   vector<float>   *mu_calo_etconeNoEm30;
   vector<float>   *mu_calo_etconeNoEm40;
   vector<float>   *mu_calo_scatteringCurvatureSignificance;
   vector<float>   *mu_calo_scatteringNeighbourSignificance;
   vector<float>   *mu_calo_momentumBalanceSignificance;
   vector<float>   *mu_calo_energyLossPar;
   vector<float>   *mu_calo_energyLossErr;
   vector<float>   *mu_calo_etCore;
   vector<float>   *mu_calo_energyLossType;
   vector<unsigned short> *mu_calo_caloMuonIdTag;
   vector<double>  *mu_calo_caloLRLikelihood;
   vector<int>     *mu_calo_bestMatch;
   vector<int>     *mu_calo_isStandAloneMuon;
   vector<int>     *mu_calo_isCombinedMuon;
   vector<int>     *mu_calo_isLowPtReconstructedMuon;
   vector<int>     *mu_calo_isSegmentTaggedMuon;
   vector<int>     *mu_calo_isCaloMuonId;
   vector<int>     *mu_calo_alsoFoundByLowPt;
   vector<int>     *mu_calo_alsoFoundByCaloMuonId;
   vector<int>     *mu_calo_isSiliconAssociatedForwardMuon;
   vector<int>     *mu_calo_loose;
   vector<int>     *mu_calo_medium;
   vector<int>     *mu_calo_tight;
   vector<float>   *mu_calo_d0_exPV;
   vector<float>   *mu_calo_z0_exPV;
   vector<float>   *mu_calo_phi_exPV;
   vector<float>   *mu_calo_theta_exPV;
   vector<float>   *mu_calo_qoverp_exPV;
   vector<float>   *mu_calo_cb_d0_exPV;
   vector<float>   *mu_calo_cb_z0_exPV;
   vector<float>   *mu_calo_cb_phi_exPV;
   vector<float>   *mu_calo_cb_theta_exPV;
   vector<float>   *mu_calo_cb_qoverp_exPV;
   vector<float>   *mu_calo_id_d0_exPV;
   vector<float>   *mu_calo_id_z0_exPV;
   vector<float>   *mu_calo_id_phi_exPV;
   vector<float>   *mu_calo_id_theta_exPV;
   vector<float>   *mu_calo_id_qoverp_exPV;
   vector<float>   *mu_calo_me_d0_exPV;
   vector<float>   *mu_calo_me_z0_exPV;
   vector<float>   *mu_calo_me_phi_exPV;
   vector<float>   *mu_calo_me_theta_exPV;
   vector<float>   *mu_calo_me_qoverp_exPV;
   vector<float>   *mu_calo_ie_d0_exPV;
   vector<float>   *mu_calo_ie_z0_exPV;
   vector<float>   *mu_calo_ie_phi_exPV;
   vector<float>   *mu_calo_ie_theta_exPV;
   vector<float>   *mu_calo_ie_qoverp_exPV;
   vector<vector<int> > *mu_calo_SpaceTime_detID;
   vector<vector<float> > *mu_calo_SpaceTime_t;
   vector<vector<float> > *mu_calo_SpaceTime_tError;
   vector<vector<float> > *mu_calo_SpaceTime_weight;
   vector<vector<float> > *mu_calo_SpaceTime_x;
   vector<vector<float> > *mu_calo_SpaceTime_y;
   vector<vector<float> > *mu_calo_SpaceTime_z;
   vector<float>   *mu_calo_cov_d0_exPV;
   vector<float>   *mu_calo_cov_z0_exPV;
   vector<float>   *mu_calo_cov_phi_exPV;
   vector<float>   *mu_calo_cov_theta_exPV;
   vector<float>   *mu_calo_cov_qoverp_exPV;
   vector<float>   *mu_calo_cov_d0_z0_exPV;
   vector<float>   *mu_calo_cov_d0_phi_exPV;
   vector<float>   *mu_calo_cov_d0_theta_exPV;
   vector<float>   *mu_calo_cov_d0_qoverp_exPV;
   vector<float>   *mu_calo_cov_z0_phi_exPV;
   vector<float>   *mu_calo_cov_z0_theta_exPV;
   vector<float>   *mu_calo_cov_z0_qoverp_exPV;
   vector<float>   *mu_calo_cov_phi_theta_exPV;
   vector<float>   *mu_calo_cov_phi_qoverp_exPV;
   vector<float>   *mu_calo_cov_theta_qoverp_exPV;
   vector<float>   *mu_calo_id_cov_d0_exPV;
   vector<float>   *mu_calo_id_cov_z0_exPV;
   vector<float>   *mu_calo_id_cov_phi_exPV;
   vector<float>   *mu_calo_id_cov_theta_exPV;
   vector<float>   *mu_calo_id_cov_qoverp_exPV;
   vector<float>   *mu_calo_id_cov_d0_z0_exPV;
   vector<float>   *mu_calo_id_cov_d0_phi_exPV;
   vector<float>   *mu_calo_id_cov_d0_theta_exPV;
   vector<float>   *mu_calo_id_cov_d0_qoverp_exPV;
   vector<float>   *mu_calo_id_cov_z0_phi_exPV;
   vector<float>   *mu_calo_id_cov_z0_theta_exPV;
   vector<float>   *mu_calo_id_cov_z0_qoverp_exPV;
   vector<float>   *mu_calo_id_cov_phi_theta_exPV;
   vector<float>   *mu_calo_id_cov_phi_qoverp_exPV;
   vector<float>   *mu_calo_id_cov_theta_qoverp_exPV;
   vector<float>   *mu_calo_me_cov_d0_exPV;
   vector<float>   *mu_calo_me_cov_z0_exPV;
   vector<float>   *mu_calo_me_cov_phi_exPV;
   vector<float>   *mu_calo_me_cov_theta_exPV;
   vector<float>   *mu_calo_me_cov_qoverp_exPV;
   vector<float>   *mu_calo_me_cov_d0_z0_exPV;
   vector<float>   *mu_calo_me_cov_d0_phi_exPV;
   vector<float>   *mu_calo_me_cov_d0_theta_exPV;
   vector<float>   *mu_calo_me_cov_d0_qoverp_exPV;
   vector<float>   *mu_calo_me_cov_z0_phi_exPV;
   vector<float>   *mu_calo_me_cov_z0_theta_exPV;
   vector<float>   *mu_calo_me_cov_z0_qoverp_exPV;
   vector<float>   *mu_calo_me_cov_phi_theta_exPV;
   vector<float>   *mu_calo_me_cov_phi_qoverp_exPV;
   vector<float>   *mu_calo_me_cov_theta_qoverp_exPV;
   vector<float>   *mu_calo_ms_d0;
   vector<float>   *mu_calo_ms_z0;
   vector<float>   *mu_calo_ms_phi;
   vector<float>   *mu_calo_ms_theta;
   vector<float>   *mu_calo_ms_qoverp;
   vector<float>   *mu_calo_id_d0;
   vector<float>   *mu_calo_id_z0;
   vector<float>   *mu_calo_id_phi;
   vector<float>   *mu_calo_id_theta;
   vector<float>   *mu_calo_id_qoverp;
   vector<float>   *mu_calo_me_d0;
   vector<float>   *mu_calo_me_z0;
   vector<float>   *mu_calo_me_phi;
   vector<float>   *mu_calo_me_theta;
   vector<float>   *mu_calo_me_qoverp;
   vector<float>   *mu_calo_ie_d0;
   vector<float>   *mu_calo_ie_z0;
   vector<float>   *mu_calo_ie_phi;
   vector<float>   *mu_calo_ie_theta;
   vector<float>   *mu_calo_ie_qoverp;
   vector<int>     *mu_calo_nOutliersOnTrack;
   vector<int>     *mu_calo_nBLHits;
   vector<int>     *mu_calo_nPixHits;
   vector<int>     *mu_calo_nSCTHits;
   vector<int>     *mu_calo_nTRTHits;
   vector<int>     *mu_calo_nTRTHighTHits;
   vector<int>     *mu_calo_nBLSharedHits;
   vector<int>     *mu_calo_nPixSharedHits;
   vector<int>     *mu_calo_nPixHoles;
   vector<int>     *mu_calo_nSCTSharedHits;
   vector<int>     *mu_calo_nSCTHoles;
   vector<int>     *mu_calo_nTRTOutliers;
   vector<int>     *mu_calo_nTRTHighTOutliers;
   vector<int>     *mu_calo_nGangedPixels;
   vector<int>     *mu_calo_nPixelDeadSensors;
   vector<int>     *mu_calo_nSCTDeadSensors;
   vector<int>     *mu_calo_nTRTDeadStraws;
   vector<int>     *mu_calo_expectBLayerHit;
   vector<int>     *mu_calo_nMDTHits;
   vector<int>     *mu_calo_nMDTHoles;
   vector<int>     *mu_calo_nCSCEtaHits;
   vector<int>     *mu_calo_nCSCEtaHoles;
   vector<int>     *mu_calo_nCSCUnspoiledEtaHits;
   vector<int>     *mu_calo_nCSCPhiHits;
   vector<int>     *mu_calo_nCSCPhiHoles;
   vector<int>     *mu_calo_nRPCEtaHits;
   vector<int>     *mu_calo_nRPCEtaHoles;
   vector<int>     *mu_calo_nRPCPhiHits;
   vector<int>     *mu_calo_nRPCPhiHoles;
   vector<int>     *mu_calo_nTGCEtaHits;
   vector<int>     *mu_calo_nTGCEtaHoles;
   vector<int>     *mu_calo_nTGCPhiHits;
   vector<int>     *mu_calo_nTGCPhiHoles;
   vector<int>     *mu_calo_nprecisionLayers;
   vector<int>     *mu_calo_nprecisionHoleLayers;
   vector<int>     *mu_calo_nphiLayers;
   vector<int>     *mu_calo_ntrigEtaLayers;
   vector<int>     *mu_calo_nphiHoleLayers;
   vector<int>     *mu_calo_ntrigEtaHoleLayers;
   vector<int>     *mu_calo_nMDTBIHits;
   vector<int>     *mu_calo_nMDTBMHits;
   vector<int>     *mu_calo_nMDTBOHits;
   vector<int>     *mu_calo_nMDTBEEHits;
   vector<int>     *mu_calo_nMDTBIS78Hits;
   vector<int>     *mu_calo_nMDTEIHits;
   vector<int>     *mu_calo_nMDTEMHits;
   vector<int>     *mu_calo_nMDTEOHits;
   vector<int>     *mu_calo_nMDTEEHits;
   vector<int>     *mu_calo_nRPCLayer1EtaHits;
   vector<int>     *mu_calo_nRPCLayer2EtaHits;
   vector<int>     *mu_calo_nRPCLayer3EtaHits;
   vector<int>     *mu_calo_nRPCLayer1PhiHits;
   vector<int>     *mu_calo_nRPCLayer2PhiHits;
   vector<int>     *mu_calo_nRPCLayer3PhiHits;
   vector<int>     *mu_calo_nTGCLayer1EtaHits;
   vector<int>     *mu_calo_nTGCLayer2EtaHits;
   vector<int>     *mu_calo_nTGCLayer3EtaHits;
   vector<int>     *mu_calo_nTGCLayer4EtaHits;
   vector<int>     *mu_calo_nTGCLayer1PhiHits;
   vector<int>     *mu_calo_nTGCLayer2PhiHits;
   vector<int>     *mu_calo_nTGCLayer3PhiHits;
   vector<int>     *mu_calo_nTGCLayer4PhiHits;
   vector<int>     *mu_calo_barrelSectors;
   vector<int>     *mu_calo_endcapSectors;
   vector<float>   *mu_calo_trackd0;
   vector<float>   *mu_calo_trackz0;
   vector<float>   *mu_calo_trackphi;
   vector<float>   *mu_calo_tracktheta;
   vector<float>   *mu_calo_trackqoverp;
   vector<float>   *mu_calo_trackcov_d0;
   vector<float>   *mu_calo_trackcov_z0;
   vector<float>   *mu_calo_trackcov_phi;
   vector<float>   *mu_calo_trackcov_theta;
   vector<float>   *mu_calo_trackcov_qoverp;
   vector<float>   *mu_calo_trackcov_d0_z0;
   vector<float>   *mu_calo_trackcov_d0_phi;
   vector<float>   *mu_calo_trackcov_d0_theta;
   vector<float>   *mu_calo_trackcov_d0_qoverp;
   vector<float>   *mu_calo_trackcov_z0_phi;
   vector<float>   *mu_calo_trackcov_z0_theta;
   vector<float>   *mu_calo_trackcov_z0_qoverp;
   vector<float>   *mu_calo_trackcov_phi_theta;
   vector<float>   *mu_calo_trackcov_phi_qoverp;
   vector<float>   *mu_calo_trackcov_theta_qoverp;
   vector<float>   *mu_calo_trackfitchi2;
   vector<int>     *mu_calo_trackfitndof;
   vector<int>     *mu_calo_hastrack;
   vector<float>   *mu_calo_trackd0beam;
   vector<float>   *mu_calo_trackz0beam;
   vector<float>   *mu_calo_tracksigd0beam;
   vector<float>   *mu_calo_tracksigz0beam;
   vector<float>   *mu_calo_trackd0pv;
   vector<float>   *mu_calo_trackz0pv;
   vector<float>   *mu_calo_tracksigd0pv;
   vector<float>   *mu_calo_tracksigz0pv;
   vector<float>   *mu_calo_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *mu_calo_trackd0pvunbiased;
   vector<float>   *mu_calo_trackz0pvunbiased;
   vector<float>   *mu_calo_tracksigd0pvunbiased;
   vector<float>   *mu_calo_tracksigz0pvunbiased;
   vector<vector<float> > *mu_calo_CaloCell_sampling;
   vector<vector<float> > *mu_calo_CaloCell_eta;
   vector<vector<float> > *mu_calo_CaloCell_phi;
   vector<vector<float> > *mu_calo_CaloCell_dr;
   vector<vector<float> > *mu_calo_CaloCell_E;
   vector<vector<float> > *mu_calo_CaloCell_t;
   vector<vector<float> > *mu_calo_CaloCell_x;
   vector<vector<float> > *mu_calo_CaloCell_y;
   vector<vector<float> > *mu_calo_CaloCell_z;
   vector<float>   *mu_calo_TileBeta;
   vector<float>   *mu_calo_TileBetaMass;
   vector<double>  *mu_calo_meandADC;
   vector<int>     *mu_calo_stau_candidate_assoc_index;
   Int_t           mu_mugirl_n;
   vector<float>   *mu_mugirl_E;
   vector<float>   *mu_mugirl_pt;
   vector<float>   *mu_mugirl_m;
   vector<float>   *mu_mugirl_eta;
   vector<float>   *mu_mugirl_phi;
   vector<float>   *mu_mugirl_px;
   vector<float>   *mu_mugirl_py;
   vector<float>   *mu_mugirl_pz;
   vector<float>   *mu_mugirl_charge;
   vector<unsigned short> *mu_mugirl_allauthor;
   vector<int>     *mu_mugirl_author;
   vector<float>   *mu_mugirl_beta;
   vector<float>   *mu_mugirl_isMuonLikelihood;
   vector<float>   *mu_mugirl_matchchi2;
   vector<int>     *mu_mugirl_matchndof;
   vector<float>   *mu_mugirl_etcone20;
   vector<float>   *mu_mugirl_etcone30;
   vector<float>   *mu_mugirl_etcone40;
   vector<float>   *mu_mugirl_nucone20;
   vector<float>   *mu_mugirl_nucone30;
   vector<float>   *mu_mugirl_nucone40;
   vector<float>   *mu_mugirl_ptcone20;
   vector<float>   *mu_mugirl_ptcone30;
   vector<float>   *mu_mugirl_ptcone40;
   vector<float>   *mu_mugirl_etconeNoEm10;
   vector<float>   *mu_mugirl_etconeNoEm20;
   vector<float>   *mu_mugirl_etconeNoEm30;
   vector<float>   *mu_mugirl_etconeNoEm40;
   vector<float>   *mu_mugirl_scatteringCurvatureSignificance;
   vector<float>   *mu_mugirl_scatteringNeighbourSignificance;
   vector<float>   *mu_mugirl_momentumBalanceSignificance;
   vector<float>   *mu_mugirl_energyLossPar;
   vector<float>   *mu_mugirl_energyLossErr;
   vector<float>   *mu_mugirl_etCore;
   vector<float>   *mu_mugirl_energyLossType;
   vector<unsigned short> *mu_mugirl_caloMuonIdTag;
   vector<double>  *mu_mugirl_caloLRLikelihood;
   vector<int>     *mu_mugirl_bestMatch;
   vector<int>     *mu_mugirl_isStandAloneMuon;
   vector<int>     *mu_mugirl_isCombinedMuon;
   vector<int>     *mu_mugirl_isLowPtReconstructedMuon;
   vector<int>     *mu_mugirl_isSegmentTaggedMuon;
   vector<int>     *mu_mugirl_isCaloMuonId;
   vector<int>     *mu_mugirl_alsoFoundByLowPt;
   vector<int>     *mu_mugirl_alsoFoundByCaloMuonId;
   vector<int>     *mu_mugirl_isSiliconAssociatedForwardMuon;
   vector<int>     *mu_mugirl_loose;
   vector<int>     *mu_mugirl_medium;
   vector<int>     *mu_mugirl_tight;
   vector<float>   *mu_mugirl_d0_exPV;
   vector<float>   *mu_mugirl_z0_exPV;
   vector<float>   *mu_mugirl_phi_exPV;
   vector<float>   *mu_mugirl_theta_exPV;
   vector<float>   *mu_mugirl_qoverp_exPV;
   vector<float>   *mu_mugirl_cb_d0_exPV;
   vector<float>   *mu_mugirl_cb_z0_exPV;
   vector<float>   *mu_mugirl_cb_phi_exPV;
   vector<float>   *mu_mugirl_cb_theta_exPV;
   vector<float>   *mu_mugirl_cb_qoverp_exPV;
   vector<float>   *mu_mugirl_id_d0_exPV;
   vector<float>   *mu_mugirl_id_z0_exPV;
   vector<float>   *mu_mugirl_id_phi_exPV;
   vector<float>   *mu_mugirl_id_theta_exPV;
   vector<float>   *mu_mugirl_id_qoverp_exPV;
   vector<float>   *mu_mugirl_me_d0_exPV;
   vector<float>   *mu_mugirl_me_z0_exPV;
   vector<float>   *mu_mugirl_me_phi_exPV;
   vector<float>   *mu_mugirl_me_theta_exPV;
   vector<float>   *mu_mugirl_me_qoverp_exPV;
   vector<float>   *mu_mugirl_ie_d0_exPV;
   vector<float>   *mu_mugirl_ie_z0_exPV;
   vector<float>   *mu_mugirl_ie_phi_exPV;
   vector<float>   *mu_mugirl_ie_theta_exPV;
   vector<float>   *mu_mugirl_ie_qoverp_exPV;
   vector<vector<int> > *mu_mugirl_SpaceTime_detID;
   vector<vector<float> > *mu_mugirl_SpaceTime_t;
   vector<vector<float> > *mu_mugirl_SpaceTime_tError;
   vector<vector<float> > *mu_mugirl_SpaceTime_weight;
   vector<vector<float> > *mu_mugirl_SpaceTime_x;
   vector<vector<float> > *mu_mugirl_SpaceTime_y;
   vector<vector<float> > *mu_mugirl_SpaceTime_z;
   vector<float>   *mu_mugirl_cov_d0_exPV;
   vector<float>   *mu_mugirl_cov_z0_exPV;
   vector<float>   *mu_mugirl_cov_phi_exPV;
   vector<float>   *mu_mugirl_cov_theta_exPV;
   vector<float>   *mu_mugirl_cov_qoverp_exPV;
   vector<float>   *mu_mugirl_cov_d0_z0_exPV;
   vector<float>   *mu_mugirl_cov_d0_phi_exPV;
   vector<float>   *mu_mugirl_cov_d0_theta_exPV;
   vector<float>   *mu_mugirl_cov_d0_qoverp_exPV;
   vector<float>   *mu_mugirl_cov_z0_phi_exPV;
   vector<float>   *mu_mugirl_cov_z0_theta_exPV;
   vector<float>   *mu_mugirl_cov_z0_qoverp_exPV;
   vector<float>   *mu_mugirl_cov_phi_theta_exPV;
   vector<float>   *mu_mugirl_cov_phi_qoverp_exPV;
   vector<float>   *mu_mugirl_cov_theta_qoverp_exPV;
   vector<float>   *mu_mugirl_id_cov_d0_exPV;
   vector<float>   *mu_mugirl_id_cov_z0_exPV;
   vector<float>   *mu_mugirl_id_cov_phi_exPV;
   vector<float>   *mu_mugirl_id_cov_theta_exPV;
   vector<float>   *mu_mugirl_id_cov_qoverp_exPV;
   vector<float>   *mu_mugirl_id_cov_d0_z0_exPV;
   vector<float>   *mu_mugirl_id_cov_d0_phi_exPV;
   vector<float>   *mu_mugirl_id_cov_d0_theta_exPV;
   vector<float>   *mu_mugirl_id_cov_d0_qoverp_exPV;
   vector<float>   *mu_mugirl_id_cov_z0_phi_exPV;
   vector<float>   *mu_mugirl_id_cov_z0_theta_exPV;
   vector<float>   *mu_mugirl_id_cov_z0_qoverp_exPV;
   vector<float>   *mu_mugirl_id_cov_phi_theta_exPV;
   vector<float>   *mu_mugirl_id_cov_phi_qoverp_exPV;
   vector<float>   *mu_mugirl_id_cov_theta_qoverp_exPV;
   vector<float>   *mu_mugirl_me_cov_d0_exPV;
   vector<float>   *mu_mugirl_me_cov_z0_exPV;
   vector<float>   *mu_mugirl_me_cov_phi_exPV;
   vector<float>   *mu_mugirl_me_cov_theta_exPV;
   vector<float>   *mu_mugirl_me_cov_qoverp_exPV;
   vector<float>   *mu_mugirl_me_cov_d0_z0_exPV;
   vector<float>   *mu_mugirl_me_cov_d0_phi_exPV;
   vector<float>   *mu_mugirl_me_cov_d0_theta_exPV;
   vector<float>   *mu_mugirl_me_cov_d0_qoverp_exPV;
   vector<float>   *mu_mugirl_me_cov_z0_phi_exPV;
   vector<float>   *mu_mugirl_me_cov_z0_theta_exPV;
   vector<float>   *mu_mugirl_me_cov_z0_qoverp_exPV;
   vector<float>   *mu_mugirl_me_cov_phi_theta_exPV;
   vector<float>   *mu_mugirl_me_cov_phi_qoverp_exPV;
   vector<float>   *mu_mugirl_me_cov_theta_qoverp_exPV;
   vector<float>   *mu_mugirl_ms_d0;
   vector<float>   *mu_mugirl_ms_z0;
   vector<float>   *mu_mugirl_ms_phi;
   vector<float>   *mu_mugirl_ms_theta;
   vector<float>   *mu_mugirl_ms_qoverp;
   vector<float>   *mu_mugirl_id_d0;
   vector<float>   *mu_mugirl_id_z0;
   vector<float>   *mu_mugirl_id_phi;
   vector<float>   *mu_mugirl_id_theta;
   vector<float>   *mu_mugirl_id_qoverp;
   vector<float>   *mu_mugirl_me_d0;
   vector<float>   *mu_mugirl_me_z0;
   vector<float>   *mu_mugirl_me_phi;
   vector<float>   *mu_mugirl_me_theta;
   vector<float>   *mu_mugirl_me_qoverp;
   vector<float>   *mu_mugirl_ie_d0;
   vector<float>   *mu_mugirl_ie_z0;
   vector<float>   *mu_mugirl_ie_phi;
   vector<float>   *mu_mugirl_ie_theta;
   vector<float>   *mu_mugirl_ie_qoverp;
   vector<int>     *mu_mugirl_nOutliersOnTrack;
   vector<int>     *mu_mugirl_nBLHits;
   vector<int>     *mu_mugirl_nPixHits;
   vector<int>     *mu_mugirl_nSCTHits;
   vector<int>     *mu_mugirl_nTRTHits;
   vector<int>     *mu_mugirl_nTRTHighTHits;
   vector<int>     *mu_mugirl_nBLSharedHits;
   vector<int>     *mu_mugirl_nPixSharedHits;
   vector<int>     *mu_mugirl_nPixHoles;
   vector<int>     *mu_mugirl_nSCTSharedHits;
   vector<int>     *mu_mugirl_nSCTHoles;
   vector<int>     *mu_mugirl_nTRTOutliers;
   vector<int>     *mu_mugirl_nTRTHighTOutliers;
   vector<int>     *mu_mugirl_nGangedPixels;
   vector<int>     *mu_mugirl_nPixelDeadSensors;
   vector<int>     *mu_mugirl_nSCTDeadSensors;
   vector<int>     *mu_mugirl_nTRTDeadStraws;
   vector<int>     *mu_mugirl_expectBLayerHit;
   vector<int>     *mu_mugirl_nMDTHits;
   vector<int>     *mu_mugirl_nMDTHoles;
   vector<int>     *mu_mugirl_nCSCEtaHits;
   vector<int>     *mu_mugirl_nCSCEtaHoles;
   vector<int>     *mu_mugirl_nCSCUnspoiledEtaHits;
   vector<int>     *mu_mugirl_nCSCPhiHits;
   vector<int>     *mu_mugirl_nCSCPhiHoles;
   vector<int>     *mu_mugirl_nRPCEtaHits;
   vector<int>     *mu_mugirl_nRPCEtaHoles;
   vector<int>     *mu_mugirl_nRPCPhiHits;
   vector<int>     *mu_mugirl_nRPCPhiHoles;
   vector<int>     *mu_mugirl_nTGCEtaHits;
   vector<int>     *mu_mugirl_nTGCEtaHoles;
   vector<int>     *mu_mugirl_nTGCPhiHits;
   vector<int>     *mu_mugirl_nTGCPhiHoles;
   vector<int>     *mu_mugirl_nprecisionLayers;
   vector<int>     *mu_mugirl_nprecisionHoleLayers;
   vector<int>     *mu_mugirl_nphiLayers;
   vector<int>     *mu_mugirl_ntrigEtaLayers;
   vector<int>     *mu_mugirl_nphiHoleLayers;
   vector<int>     *mu_mugirl_ntrigEtaHoleLayers;
   vector<int>     *mu_mugirl_nMDTBIHits;
   vector<int>     *mu_mugirl_nMDTBMHits;
   vector<int>     *mu_mugirl_nMDTBOHits;
   vector<int>     *mu_mugirl_nMDTBEEHits;
   vector<int>     *mu_mugirl_nMDTBIS78Hits;
   vector<int>     *mu_mugirl_nMDTEIHits;
   vector<int>     *mu_mugirl_nMDTEMHits;
   vector<int>     *mu_mugirl_nMDTEOHits;
   vector<int>     *mu_mugirl_nMDTEEHits;
   vector<int>     *mu_mugirl_nRPCLayer1EtaHits;
   vector<int>     *mu_mugirl_nRPCLayer2EtaHits;
   vector<int>     *mu_mugirl_nRPCLayer3EtaHits;
   vector<int>     *mu_mugirl_nRPCLayer1PhiHits;
   vector<int>     *mu_mugirl_nRPCLayer2PhiHits;
   vector<int>     *mu_mugirl_nRPCLayer3PhiHits;
   vector<int>     *mu_mugirl_nTGCLayer1EtaHits;
   vector<int>     *mu_mugirl_nTGCLayer2EtaHits;
   vector<int>     *mu_mugirl_nTGCLayer3EtaHits;
   vector<int>     *mu_mugirl_nTGCLayer4EtaHits;
   vector<int>     *mu_mugirl_nTGCLayer1PhiHits;
   vector<int>     *mu_mugirl_nTGCLayer2PhiHits;
   vector<int>     *mu_mugirl_nTGCLayer3PhiHits;
   vector<int>     *mu_mugirl_nTGCLayer4PhiHits;
   vector<int>     *mu_mugirl_barrelSectors;
   vector<int>     *mu_mugirl_endcapSectors;
   vector<float>   *mu_mugirl_trackd0;
   vector<float>   *mu_mugirl_trackz0;
   vector<float>   *mu_mugirl_trackphi;
   vector<float>   *mu_mugirl_tracktheta;
   vector<float>   *mu_mugirl_trackqoverp;
   vector<float>   *mu_mugirl_trackcov_d0;
   vector<float>   *mu_mugirl_trackcov_z0;
   vector<float>   *mu_mugirl_trackcov_phi;
   vector<float>   *mu_mugirl_trackcov_theta;
   vector<float>   *mu_mugirl_trackcov_qoverp;
   vector<float>   *mu_mugirl_trackcov_d0_z0;
   vector<float>   *mu_mugirl_trackcov_d0_phi;
   vector<float>   *mu_mugirl_trackcov_d0_theta;
   vector<float>   *mu_mugirl_trackcov_d0_qoverp;
   vector<float>   *mu_mugirl_trackcov_z0_phi;
   vector<float>   *mu_mugirl_trackcov_z0_theta;
   vector<float>   *mu_mugirl_trackcov_z0_qoverp;
   vector<float>   *mu_mugirl_trackcov_phi_theta;
   vector<float>   *mu_mugirl_trackcov_phi_qoverp;
   vector<float>   *mu_mugirl_trackcov_theta_qoverp;
   vector<float>   *mu_mugirl_trackfitchi2;
   vector<int>     *mu_mugirl_trackfitndof;
   vector<int>     *mu_mugirl_hastrack;
   vector<float>   *mu_mugirl_trackd0beam;
   vector<float>   *mu_mugirl_trackz0beam;
   vector<float>   *mu_mugirl_tracksigd0beam;
   vector<float>   *mu_mugirl_tracksigz0beam;
   vector<float>   *mu_mugirl_trackd0pv;
   vector<float>   *mu_mugirl_trackz0pv;
   vector<float>   *mu_mugirl_tracksigd0pv;
   vector<float>   *mu_mugirl_tracksigz0pv;
   vector<float>   *mu_mugirl_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *mu_mugirl_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *mu_mugirl_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *mu_mugirl_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *mu_mugirl_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *mu_mugirl_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *mu_mugirl_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *mu_mugirl_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *mu_mugirl_trackd0pvunbiased;
   vector<float>   *mu_mugirl_trackz0pvunbiased;
   vector<float>   *mu_mugirl_tracksigd0pvunbiased;
   vector<float>   *mu_mugirl_tracksigz0pvunbiased;
   vector<vector<float> > *mu_mugirl_CaloCell_sampling;
   vector<vector<float> > *mu_mugirl_CaloCell_eta;
   vector<vector<float> > *mu_mugirl_CaloCell_phi;
   vector<vector<float> > *mu_mugirl_CaloCell_dr;
   vector<vector<float> > *mu_mugirl_CaloCell_E;
   vector<vector<float> > *mu_mugirl_CaloCell_t;
   vector<vector<float> > *mu_mugirl_CaloCell_x;
   vector<vector<float> > *mu_mugirl_CaloCell_y;
   vector<vector<float> > *mu_mugirl_CaloCell_z;
   vector<float>   *mu_mugirl_TileBeta;
   vector<float>   *mu_mugirl_TileBetaMass;
   vector<double>  *mu_mugirl_meandADC;
   vector<int>     *mu_mugirl_stau_candidate_assoc_index;
   Int_t           mu_lowbeta_n;
   vector<float>   *mu_lowbeta_E;
   vector<float>   *mu_lowbeta_pt;
   vector<float>   *mu_lowbeta_m;
   vector<float>   *mu_lowbeta_eta;
   vector<float>   *mu_lowbeta_phi;
   vector<float>   *mu_lowbeta_px;
   vector<float>   *mu_lowbeta_py;
   vector<float>   *mu_lowbeta_pz;
   vector<float>   *mu_lowbeta_charge;
   vector<unsigned short> *mu_lowbeta_allauthor;
   vector<int>     *mu_lowbeta_author;
   vector<float>   *mu_lowbeta_beta;
   vector<float>   *mu_lowbeta_isMuonLikelihood;
   vector<float>   *mu_lowbeta_matchchi2;
   vector<int>     *mu_lowbeta_matchndof;
   vector<float>   *mu_lowbeta_etcone20;
   vector<float>   *mu_lowbeta_etcone30;
   vector<float>   *mu_lowbeta_etcone40;
   vector<float>   *mu_lowbeta_nucone20;
   vector<float>   *mu_lowbeta_nucone30;
   vector<float>   *mu_lowbeta_nucone40;
   vector<float>   *mu_lowbeta_ptcone20;
   vector<float>   *mu_lowbeta_ptcone30;
   vector<float>   *mu_lowbeta_ptcone40;
   vector<float>   *mu_lowbeta_etconeNoEm10;
   vector<float>   *mu_lowbeta_etconeNoEm20;
   vector<float>   *mu_lowbeta_etconeNoEm30;
   vector<float>   *mu_lowbeta_etconeNoEm40;
   vector<float>   *mu_lowbeta_scatteringCurvatureSignificance;
   vector<float>   *mu_lowbeta_scatteringNeighbourSignificance;
   vector<float>   *mu_lowbeta_momentumBalanceSignificance;
   vector<float>   *mu_lowbeta_energyLossPar;
   vector<float>   *mu_lowbeta_energyLossErr;
   vector<float>   *mu_lowbeta_etCore;
   vector<float>   *mu_lowbeta_energyLossType;
   vector<unsigned short> *mu_lowbeta_caloMuonIdTag;
   vector<double>  *mu_lowbeta_caloLRLikelihood;
   vector<int>     *mu_lowbeta_bestMatch;
   vector<int>     *mu_lowbeta_isStandAloneMuon;
   vector<int>     *mu_lowbeta_isCombinedMuon;
   vector<int>     *mu_lowbeta_isLowPtReconstructedMuon;
   vector<int>     *mu_lowbeta_isSegmentTaggedMuon;
   vector<int>     *mu_lowbeta_isCaloMuonId;
   vector<int>     *mu_lowbeta_alsoFoundByLowPt;
   vector<int>     *mu_lowbeta_alsoFoundByCaloMuonId;
   vector<int>     *mu_lowbeta_isSiliconAssociatedForwardMuon;
   vector<int>     *mu_lowbeta_loose;
   vector<int>     *mu_lowbeta_medium;
   vector<int>     *mu_lowbeta_tight;
   vector<float>   *mu_lowbeta_d0_exPV;
   vector<float>   *mu_lowbeta_z0_exPV;
   vector<float>   *mu_lowbeta_phi_exPV;
   vector<float>   *mu_lowbeta_theta_exPV;
   vector<float>   *mu_lowbeta_qoverp_exPV;
   vector<float>   *mu_lowbeta_cb_d0_exPV;
   vector<float>   *mu_lowbeta_cb_z0_exPV;
   vector<float>   *mu_lowbeta_cb_phi_exPV;
   vector<float>   *mu_lowbeta_cb_theta_exPV;
   vector<float>   *mu_lowbeta_cb_qoverp_exPV;
   vector<float>   *mu_lowbeta_id_d0_exPV;
   vector<float>   *mu_lowbeta_id_z0_exPV;
   vector<float>   *mu_lowbeta_id_phi_exPV;
   vector<float>   *mu_lowbeta_id_theta_exPV;
   vector<float>   *mu_lowbeta_id_qoverp_exPV;
   vector<float>   *mu_lowbeta_me_d0_exPV;
   vector<float>   *mu_lowbeta_me_z0_exPV;
   vector<float>   *mu_lowbeta_me_phi_exPV;
   vector<float>   *mu_lowbeta_me_theta_exPV;
   vector<float>   *mu_lowbeta_me_qoverp_exPV;
   vector<float>   *mu_lowbeta_ie_d0_exPV;
   vector<float>   *mu_lowbeta_ie_z0_exPV;
   vector<float>   *mu_lowbeta_ie_phi_exPV;
   vector<float>   *mu_lowbeta_ie_theta_exPV;
   vector<float>   *mu_lowbeta_ie_qoverp_exPV;
   vector<vector<int> > *mu_lowbeta_SpaceTime_detID;
   vector<vector<float> > *mu_lowbeta_SpaceTime_t;
   vector<vector<float> > *mu_lowbeta_SpaceTime_tError;
   vector<vector<float> > *mu_lowbeta_SpaceTime_weight;
   vector<vector<float> > *mu_lowbeta_SpaceTime_x;
   vector<vector<float> > *mu_lowbeta_SpaceTime_y;
   vector<vector<float> > *mu_lowbeta_SpaceTime_z;
   vector<float>   *mu_lowbeta_cov_d0_exPV;
   vector<float>   *mu_lowbeta_cov_z0_exPV;
   vector<float>   *mu_lowbeta_cov_phi_exPV;
   vector<float>   *mu_lowbeta_cov_theta_exPV;
   vector<float>   *mu_lowbeta_cov_qoverp_exPV;
   vector<float>   *mu_lowbeta_cov_d0_z0_exPV;
   vector<float>   *mu_lowbeta_cov_d0_phi_exPV;
   vector<float>   *mu_lowbeta_cov_d0_theta_exPV;
   vector<float>   *mu_lowbeta_cov_d0_qoverp_exPV;
   vector<float>   *mu_lowbeta_cov_z0_phi_exPV;
   vector<float>   *mu_lowbeta_cov_z0_theta_exPV;
   vector<float>   *mu_lowbeta_cov_z0_qoverp_exPV;
   vector<float>   *mu_lowbeta_cov_phi_theta_exPV;
   vector<float>   *mu_lowbeta_cov_phi_qoverp_exPV;
   vector<float>   *mu_lowbeta_cov_theta_qoverp_exPV;
   vector<float>   *mu_lowbeta_id_cov_d0_exPV;
   vector<float>   *mu_lowbeta_id_cov_z0_exPV;
   vector<float>   *mu_lowbeta_id_cov_phi_exPV;
   vector<float>   *mu_lowbeta_id_cov_theta_exPV;
   vector<float>   *mu_lowbeta_id_cov_qoverp_exPV;
   vector<float>   *mu_lowbeta_id_cov_d0_z0_exPV;
   vector<float>   *mu_lowbeta_id_cov_d0_phi_exPV;
   vector<float>   *mu_lowbeta_id_cov_d0_theta_exPV;
   vector<float>   *mu_lowbeta_id_cov_d0_qoverp_exPV;
   vector<float>   *mu_lowbeta_id_cov_z0_phi_exPV;
   vector<float>   *mu_lowbeta_id_cov_z0_theta_exPV;
   vector<float>   *mu_lowbeta_id_cov_z0_qoverp_exPV;
   vector<float>   *mu_lowbeta_id_cov_phi_theta_exPV;
   vector<float>   *mu_lowbeta_id_cov_phi_qoverp_exPV;
   vector<float>   *mu_lowbeta_id_cov_theta_qoverp_exPV;
   vector<float>   *mu_lowbeta_me_cov_d0_exPV;
   vector<float>   *mu_lowbeta_me_cov_z0_exPV;
   vector<float>   *mu_lowbeta_me_cov_phi_exPV;
   vector<float>   *mu_lowbeta_me_cov_theta_exPV;
   vector<float>   *mu_lowbeta_me_cov_qoverp_exPV;
   vector<float>   *mu_lowbeta_me_cov_d0_z0_exPV;
   vector<float>   *mu_lowbeta_me_cov_d0_phi_exPV;
   vector<float>   *mu_lowbeta_me_cov_d0_theta_exPV;
   vector<float>   *mu_lowbeta_me_cov_d0_qoverp_exPV;
   vector<float>   *mu_lowbeta_me_cov_z0_phi_exPV;
   vector<float>   *mu_lowbeta_me_cov_z0_theta_exPV;
   vector<float>   *mu_lowbeta_me_cov_z0_qoverp_exPV;
   vector<float>   *mu_lowbeta_me_cov_phi_theta_exPV;
   vector<float>   *mu_lowbeta_me_cov_phi_qoverp_exPV;
   vector<float>   *mu_lowbeta_me_cov_theta_qoverp_exPV;
   vector<float>   *mu_lowbeta_ms_d0;
   vector<float>   *mu_lowbeta_ms_z0;
   vector<float>   *mu_lowbeta_ms_phi;
   vector<float>   *mu_lowbeta_ms_theta;
   vector<float>   *mu_lowbeta_ms_qoverp;
   vector<float>   *mu_lowbeta_id_d0;
   vector<float>   *mu_lowbeta_id_z0;
   vector<float>   *mu_lowbeta_id_phi;
   vector<float>   *mu_lowbeta_id_theta;
   vector<float>   *mu_lowbeta_id_qoverp;
   vector<float>   *mu_lowbeta_me_d0;
   vector<float>   *mu_lowbeta_me_z0;
   vector<float>   *mu_lowbeta_me_phi;
   vector<float>   *mu_lowbeta_me_theta;
   vector<float>   *mu_lowbeta_me_qoverp;
   vector<float>   *mu_lowbeta_ie_d0;
   vector<float>   *mu_lowbeta_ie_z0;
   vector<float>   *mu_lowbeta_ie_phi;
   vector<float>   *mu_lowbeta_ie_theta;
   vector<float>   *mu_lowbeta_ie_qoverp;
   vector<int>     *mu_lowbeta_nOutliersOnTrack;
   vector<int>     *mu_lowbeta_nBLHits;
   vector<int>     *mu_lowbeta_nPixHits;
   vector<int>     *mu_lowbeta_nSCTHits;
   vector<int>     *mu_lowbeta_nTRTHits;
   vector<int>     *mu_lowbeta_nTRTHighTHits;
   vector<int>     *mu_lowbeta_nBLSharedHits;
   vector<int>     *mu_lowbeta_nPixSharedHits;
   vector<int>     *mu_lowbeta_nPixHoles;
   vector<int>     *mu_lowbeta_nSCTSharedHits;
   vector<int>     *mu_lowbeta_nSCTHoles;
   vector<int>     *mu_lowbeta_nTRTOutliers;
   vector<int>     *mu_lowbeta_nTRTHighTOutliers;
   vector<int>     *mu_lowbeta_nGangedPixels;
   vector<int>     *mu_lowbeta_nPixelDeadSensors;
   vector<int>     *mu_lowbeta_nSCTDeadSensors;
   vector<int>     *mu_lowbeta_nTRTDeadStraws;
   vector<int>     *mu_lowbeta_expectBLayerHit;
   vector<int>     *mu_lowbeta_nMDTHits;
   vector<int>     *mu_lowbeta_nMDTHoles;
   vector<int>     *mu_lowbeta_nCSCEtaHits;
   vector<int>     *mu_lowbeta_nCSCEtaHoles;
   vector<int>     *mu_lowbeta_nCSCUnspoiledEtaHits;
   vector<int>     *mu_lowbeta_nCSCPhiHits;
   vector<int>     *mu_lowbeta_nCSCPhiHoles;
   vector<int>     *mu_lowbeta_nRPCEtaHits;
   vector<int>     *mu_lowbeta_nRPCEtaHoles;
   vector<int>     *mu_lowbeta_nRPCPhiHits;
   vector<int>     *mu_lowbeta_nRPCPhiHoles;
   vector<int>     *mu_lowbeta_nTGCEtaHits;
   vector<int>     *mu_lowbeta_nTGCEtaHoles;
   vector<int>     *mu_lowbeta_nTGCPhiHits;
   vector<int>     *mu_lowbeta_nTGCPhiHoles;
   vector<int>     *mu_lowbeta_nprecisionLayers;
   vector<int>     *mu_lowbeta_nprecisionHoleLayers;
   vector<int>     *mu_lowbeta_nphiLayers;
   vector<int>     *mu_lowbeta_ntrigEtaLayers;
   vector<int>     *mu_lowbeta_nphiHoleLayers;
   vector<int>     *mu_lowbeta_ntrigEtaHoleLayers;
   vector<int>     *mu_lowbeta_nMDTBIHits;
   vector<int>     *mu_lowbeta_nMDTBMHits;
   vector<int>     *mu_lowbeta_nMDTBOHits;
   vector<int>     *mu_lowbeta_nMDTBEEHits;
   vector<int>     *mu_lowbeta_nMDTBIS78Hits;
   vector<int>     *mu_lowbeta_nMDTEIHits;
   vector<int>     *mu_lowbeta_nMDTEMHits;
   vector<int>     *mu_lowbeta_nMDTEOHits;
   vector<int>     *mu_lowbeta_nMDTEEHits;
   vector<int>     *mu_lowbeta_nRPCLayer1EtaHits;
   vector<int>     *mu_lowbeta_nRPCLayer2EtaHits;
   vector<int>     *mu_lowbeta_nRPCLayer3EtaHits;
   vector<int>     *mu_lowbeta_nRPCLayer1PhiHits;
   vector<int>     *mu_lowbeta_nRPCLayer2PhiHits;
   vector<int>     *mu_lowbeta_nRPCLayer3PhiHits;
   vector<int>     *mu_lowbeta_nTGCLayer1EtaHits;
   vector<int>     *mu_lowbeta_nTGCLayer2EtaHits;
   vector<int>     *mu_lowbeta_nTGCLayer3EtaHits;
   vector<int>     *mu_lowbeta_nTGCLayer4EtaHits;
   vector<int>     *mu_lowbeta_nTGCLayer1PhiHits;
   vector<int>     *mu_lowbeta_nTGCLayer2PhiHits;
   vector<int>     *mu_lowbeta_nTGCLayer3PhiHits;
   vector<int>     *mu_lowbeta_nTGCLayer4PhiHits;
   vector<int>     *mu_lowbeta_barrelSectors;
   vector<int>     *mu_lowbeta_endcapSectors;
   vector<float>   *mu_lowbeta_trackd0;
   vector<float>   *mu_lowbeta_trackz0;
   vector<float>   *mu_lowbeta_trackphi;
   vector<float>   *mu_lowbeta_tracktheta;
   vector<float>   *mu_lowbeta_trackqoverp;
   vector<float>   *mu_lowbeta_trackcov_d0;
   vector<float>   *mu_lowbeta_trackcov_z0;
   vector<float>   *mu_lowbeta_trackcov_phi;
   vector<float>   *mu_lowbeta_trackcov_theta;
   vector<float>   *mu_lowbeta_trackcov_qoverp;
   vector<float>   *mu_lowbeta_trackcov_d0_z0;
   vector<float>   *mu_lowbeta_trackcov_d0_phi;
   vector<float>   *mu_lowbeta_trackcov_d0_theta;
   vector<float>   *mu_lowbeta_trackcov_d0_qoverp;
   vector<float>   *mu_lowbeta_trackcov_z0_phi;
   vector<float>   *mu_lowbeta_trackcov_z0_theta;
   vector<float>   *mu_lowbeta_trackcov_z0_qoverp;
   vector<float>   *mu_lowbeta_trackcov_phi_theta;
   vector<float>   *mu_lowbeta_trackcov_phi_qoverp;
   vector<float>   *mu_lowbeta_trackcov_theta_qoverp;
   vector<float>   *mu_lowbeta_trackfitchi2;
   vector<int>     *mu_lowbeta_trackfitndof;
   vector<int>     *mu_lowbeta_hastrack;
   vector<float>   *mu_lowbeta_trackd0beam;
   vector<float>   *mu_lowbeta_trackz0beam;
   vector<float>   *mu_lowbeta_tracksigd0beam;
   vector<float>   *mu_lowbeta_tracksigz0beam;
   vector<float>   *mu_lowbeta_trackd0pv;
   vector<float>   *mu_lowbeta_trackz0pv;
   vector<float>   *mu_lowbeta_tracksigd0pv;
   vector<float>   *mu_lowbeta_tracksigz0pv;
   vector<float>   *mu_lowbeta_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *mu_lowbeta_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *mu_lowbeta_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *mu_lowbeta_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *mu_lowbeta_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *mu_lowbeta_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *mu_lowbeta_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *mu_lowbeta_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *mu_lowbeta_trackd0pvunbiased;
   vector<float>   *mu_lowbeta_trackz0pvunbiased;
   vector<float>   *mu_lowbeta_tracksigd0pvunbiased;
   vector<float>   *mu_lowbeta_tracksigz0pvunbiased;
   vector<vector<float> > *mu_lowbeta_CaloCell_sampling;
   vector<vector<float> > *mu_lowbeta_CaloCell_eta;
   vector<vector<float> > *mu_lowbeta_CaloCell_phi;
   vector<vector<float> > *mu_lowbeta_CaloCell_dr;
   vector<vector<float> > *mu_lowbeta_CaloCell_E;
   vector<vector<float> > *mu_lowbeta_CaloCell_t;
   vector<vector<float> > *mu_lowbeta_CaloCell_x;
   vector<vector<float> > *mu_lowbeta_CaloCell_y;
   vector<vector<float> > *mu_lowbeta_CaloCell_z;
   vector<float>   *mu_lowbeta_TileBeta;
   vector<float>   *mu_lowbeta_TileBetaMass;
   vector<double>  *mu_lowbeta_meandADC;
   vector<int>     *mu_lowbeta_stau_candidate_assoc_index;
   Int_t           jet_akt4topoem_n;
   vector<float>   *jet_akt4topoem_E;
   vector<float>   *jet_akt4topoem_pt;
   vector<float>   *jet_akt4topoem_m;
   vector<float>   *jet_akt4topoem_eta;
   vector<float>   *jet_akt4topoem_phi;
   vector<float>   *jet_akt4topoem_EtaOrigin;
   vector<float>   *jet_akt4topoem_PhiOrigin;
   vector<float>   *jet_akt4topoem_MOrigin;
   vector<float>   *jet_akt4topoem_EtaOriginEM;
   vector<float>   *jet_akt4topoem_PhiOriginEM;
   vector<float>   *jet_akt4topoem_MOriginEM;
   vector<float>   *jet_akt4topoem_WIDTH;
   vector<float>   *jet_akt4topoem_n90;
   vector<float>   *jet_akt4topoem_Timing;
   vector<float>   *jet_akt4topoem_LArQuality;
   vector<float>   *jet_akt4topoem_nTrk;
   vector<float>   *jet_akt4topoem_sumPtTrk;
   vector<float>   *jet_akt4topoem_OriginIndex;
   vector<float>   *jet_akt4topoem_HECQuality;
   vector<float>   *jet_akt4topoem_NegativeE;
   vector<float>   *jet_akt4topoem_AverageLArQF;
   vector<float>   *jet_akt4topoem_YFlip12;
   vector<float>   *jet_akt4topoem_YFlip23;
   vector<float>   *jet_akt4topoem_BCH_CORR_CELL;
   vector<float>   *jet_akt4topoem_BCH_CORR_DOTX;
   vector<float>   *jet_akt4topoem_BCH_CORR_JET;
   vector<float>   *jet_akt4topoem_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_akt4topoem_ENG_BAD_CELLS;
   vector<float>   *jet_akt4topoem_N_BAD_CELLS;
   vector<float>   *jet_akt4topoem_N_BAD_CELLS_CORR;
   vector<float>   *jet_akt4topoem_BAD_CELLS_CORR_E;
   vector<float>   *jet_akt4topoem_NumTowers;
   vector<float>   *jet_akt4topoem_ootFracCells5;
   vector<float>   *jet_akt4topoem_ootFracCells10;
   vector<float>   *jet_akt4topoem_ootFracClusters5;
   vector<float>   *jet_akt4topoem_ootFracClusters10;
   vector<int>     *jet_akt4topoem_SamplingMax;
   vector<float>   *jet_akt4topoem_fracSamplingMax;
   vector<float>   *jet_akt4topoem_hecf;
   vector<float>   *jet_akt4topoem_tgap3f;
   vector<int>     *jet_akt4topoem_isUgly;
   vector<int>     *jet_akt4topoem_isBadLooseMinus;
   vector<int>     *jet_akt4topoem_isBadLoose;
   vector<int>     *jet_akt4topoem_isBadMedium;
   vector<int>     *jet_akt4topoem_isBadTight;
   vector<float>   *jet_akt4topoem_emfrac;
   vector<float>   *jet_akt4topoem_Offset;
   vector<float>   *jet_akt4topoem_EMJES;
   vector<float>   *jet_akt4topoem_EMJES_EtaCorr;
   vector<float>   *jet_akt4topoem_EMJESnooffset;
   vector<float>   *jet_akt4topoem_GCWJES;
   vector<float>   *jet_akt4topoem_GCWJES_EtaCorr;
   vector<float>   *jet_akt4topoem_CB;
   vector<float>   *jet_akt4topoem_LCJES;
   vector<float>   *jet_akt4topoem_emscale_E;
   vector<float>   *jet_akt4topoem_emscale_pt;
   vector<float>   *jet_akt4topoem_emscale_m;
   vector<float>   *jet_akt4topoem_emscale_eta;
   vector<float>   *jet_akt4topoem_emscale_phi;
   vector<float>   *jet_akt4topoem_jvtx_x;
   vector<float>   *jet_akt4topoem_jvtx_y;
   vector<float>   *jet_akt4topoem_jvtx_z;
   vector<float>   *jet_akt4topoem_jvtxf;
   vector<float>   *jet_akt4topoem_GSCFactorF;
   vector<float>   *jet_akt4topoem_WidthFraction;
   vector<float>   *jet_akt4topoem_el_dr;
   vector<int>     *jet_akt4topoem_el_matched;
   vector<float>   *jet_akt4topoem_mu_dr;
   vector<int>     *jet_akt4topoem_mu_matched;
   vector<float>   *jet_akt4topoem_L1_dr;
   vector<int>     *jet_akt4topoem_L1_matched;
   vector<float>   *jet_akt4topoem_L2_dr;
   vector<int>     *jet_akt4topoem_L2_matched;
   vector<float>   *jet_akt4topoem_EF_dr;
   vector<int>     *jet_akt4topoem_EF_matched;
   Int_t           jet_akt6topoem_n;
   vector<float>   *jet_akt6topoem_E;
   vector<float>   *jet_akt6topoem_pt;
   vector<float>   *jet_akt6topoem_m;
   vector<float>   *jet_akt6topoem_eta;
   vector<float>   *jet_akt6topoem_phi;
   vector<float>   *jet_akt6topoem_EtaOrigin;
   vector<float>   *jet_akt6topoem_PhiOrigin;
   vector<float>   *jet_akt6topoem_MOrigin;
   vector<float>   *jet_akt6topoem_EtaOriginEM;
   vector<float>   *jet_akt6topoem_PhiOriginEM;
   vector<float>   *jet_akt6topoem_MOriginEM;
   vector<float>   *jet_akt6topoem_WIDTH;
   vector<float>   *jet_akt6topoem_n90;
   vector<float>   *jet_akt6topoem_Timing;
   vector<float>   *jet_akt6topoem_LArQuality;
   vector<float>   *jet_akt6topoem_nTrk;
   vector<float>   *jet_akt6topoem_sumPtTrk;
   vector<float>   *jet_akt6topoem_OriginIndex;
   vector<float>   *jet_akt6topoem_HECQuality;
   vector<float>   *jet_akt6topoem_NegativeE;
   vector<float>   *jet_akt6topoem_AverageLArQF;
   vector<float>   *jet_akt6topoem_YFlip12;
   vector<float>   *jet_akt6topoem_YFlip23;
   vector<float>   *jet_akt6topoem_BCH_CORR_CELL;
   vector<float>   *jet_akt6topoem_BCH_CORR_DOTX;
   vector<float>   *jet_akt6topoem_BCH_CORR_JET;
   vector<float>   *jet_akt6topoem_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_akt6topoem_ENG_BAD_CELLS;
   vector<float>   *jet_akt6topoem_N_BAD_CELLS;
   vector<float>   *jet_akt6topoem_N_BAD_CELLS_CORR;
   vector<float>   *jet_akt6topoem_BAD_CELLS_CORR_E;
   vector<float>   *jet_akt6topoem_NumTowers;
   vector<float>   *jet_akt6topoem_ootFracCells5;
   vector<float>   *jet_akt6topoem_ootFracCells10;
   vector<float>   *jet_akt6topoem_ootFracClusters5;
   vector<float>   *jet_akt6topoem_ootFracClusters10;
   vector<int>     *jet_akt6topoem_SamplingMax;
   vector<float>   *jet_akt6topoem_fracSamplingMax;
   vector<float>   *jet_akt6topoem_hecf;
   vector<float>   *jet_akt6topoem_tgap3f;
   vector<int>     *jet_akt6topoem_isUgly;
   vector<int>     *jet_akt6topoem_isBadLooseMinus;
   vector<int>     *jet_akt6topoem_isBadLoose;
   vector<int>     *jet_akt6topoem_isBadMedium;
   vector<int>     *jet_akt6topoem_isBadTight;
   vector<float>   *jet_akt6topoem_emfrac;
   vector<float>   *jet_akt6topoem_Offset;
   vector<float>   *jet_akt6topoem_EMJES;
   vector<float>   *jet_akt6topoem_EMJES_EtaCorr;
   vector<float>   *jet_akt6topoem_EMJESnooffset;
   vector<float>   *jet_akt6topoem_GCWJES;
   vector<float>   *jet_akt6topoem_GCWJES_EtaCorr;
   vector<float>   *jet_akt6topoem_CB;
   vector<float>   *jet_akt6topoem_LCJES;
   vector<float>   *jet_akt6topoem_emscale_E;
   vector<float>   *jet_akt6topoem_emscale_pt;
   vector<float>   *jet_akt6topoem_emscale_m;
   vector<float>   *jet_akt6topoem_emscale_eta;
   vector<float>   *jet_akt6topoem_emscale_phi;
   vector<float>   *jet_akt6topoem_jvtx_x;
   vector<float>   *jet_akt6topoem_jvtx_y;
   vector<float>   *jet_akt6topoem_jvtx_z;
   vector<float>   *jet_akt6topoem_jvtxf;
   vector<float>   *jet_akt6topoem_GSCFactorF;
   vector<float>   *jet_akt6topoem_WidthFraction;
   vector<float>   *jet_akt6topoem_el_dr;
   vector<int>     *jet_akt6topoem_el_matched;
   vector<float>   *jet_akt6topoem_mu_dr;
   vector<int>     *jet_akt6topoem_mu_matched;
   vector<float>   *jet_akt6topoem_L1_dr;
   vector<int>     *jet_akt6topoem_L1_matched;
   vector<float>   *jet_akt6topoem_L2_dr;
   vector<int>     *jet_akt6topoem_L2_matched;
   vector<float>   *jet_akt6topoem_EF_dr;
   vector<int>     *jet_akt6topoem_EF_matched;
   Int_t           trk_n;
   vector<float>   *trk_pt;
   vector<float>   *trk_eta;
   vector<float>   *trk_d0_wrtPV;
   vector<float>   *trk_z0_wrtPV;
   vector<float>   *trk_phi_wrtPV;
   vector<float>   *trk_theta_wrtPV;
   vector<float>   *trk_qoverp_wrtPV;
   vector<float>   *trk_d0_wrtBL;
   vector<float>   *trk_z0_wrtBL;
   vector<float>   *trk_phi_wrtBL;
   vector<float>   *trk_d0_err_wrtBL;
   vector<float>   *trk_z0_err_wrtBL;
   vector<float>   *trk_phi_err_wrtBL;
   vector<float>   *trk_theta_err_wrtBL;
   vector<float>   *trk_qoverp_err_wrtBL;
   vector<float>   *trk_d0_z0_err_wrtBL;
   vector<float>   *trk_d0_phi_err_wrtBL;
   vector<float>   *trk_d0_theta_err_wrtBL;
   vector<float>   *trk_d0_qoverp_err_wrtBL;
   vector<float>   *trk_z0_phi_err_wrtBL;
   vector<float>   *trk_z0_theta_err_wrtBL;
   vector<float>   *trk_z0_qoverp_err_wrtBL;
   vector<float>   *trk_phi_theta_err_wrtBL;
   vector<float>   *trk_phi_qoverp_err_wrtBL;
   vector<float>   *trk_theta_qoverp_err_wrtBL;
   Int_t           trkpt5_n;
   vector<float>   *trkpt5_d0;
   vector<float>   *trkpt5_z0;
   vector<float>   *trkpt5_phi;
   vector<float>   *trkpt5_theta;
   vector<float>   *trkpt5_qoverp;
   vector<float>   *trkpt5_pt;
   vector<float>   *trkpt5_eta;
   vector<float>   *trkpt5_err_d0;
   vector<float>   *trkpt5_err_z0;
   vector<float>   *trkpt5_err_phi;
   vector<float>   *trkpt5_err_theta;
   vector<float>   *trkpt5_err_qoverp;
   vector<float>   *trkpt5_d0_wrtPV;
   vector<float>   *trkpt5_z0_wrtPV;
   vector<float>   *trkpt5_phi_wrtPV;
   vector<float>   *trkpt5_err_d0_wrtPV;
   vector<float>   *trkpt5_err_z0_wrtPV;
   vector<float>   *trkpt5_err_phi_wrtPV;
   vector<float>   *trkpt5_err_theta_wrtPV;
   vector<float>   *trkpt5_err_qoverp_wrtPV;
   vector<float>   *trkpt5_cov_d0_z0_wrtPV;
   vector<float>   *trkpt5_cov_d0_phi_wrtPV;
   vector<float>   *trkpt5_cov_d0_theta_wrtPV;
   vector<float>   *trkpt5_cov_d0_qoverp_wrtPV;
   vector<float>   *trkpt5_cov_z0_phi_wrtPV;
   vector<float>   *trkpt5_cov_z0_theta_wrtPV;
   vector<float>   *trkpt5_cov_z0_qoverp_wrtPV;
   vector<float>   *trkpt5_cov_phi_theta_wrtPV;
   vector<float>   *trkpt5_cov_phi_qoverp_wrtPV;
   vector<float>   *trkpt5_cov_theta_qoverp_wrtPV;
   vector<float>   *trkpt5_d0_wrtBL;
   vector<float>   *trkpt5_z0_wrtBL;
   vector<float>   *trkpt5_phi_wrtBL;
   vector<float>   *trkpt5_d0_err_wrtBL;
   vector<float>   *trkpt5_z0_err_wrtBL;
   vector<float>   *trkpt5_phi_err_wrtBL;
   vector<float>   *trkpt5_theta_err_wrtBL;
   vector<float>   *trkpt5_qoverp_err_wrtBL;
   vector<float>   *trkpt5_d0_z0_err_wrtBL;
   vector<float>   *trkpt5_d0_phi_err_wrtBL;
   vector<float>   *trkpt5_d0_theta_err_wrtBL;
   vector<float>   *trkpt5_d0_qoverp_err_wrtBL;
   vector<float>   *trkpt5_z0_phi_err_wrtBL;
   vector<float>   *trkpt5_z0_theta_err_wrtBL;
   vector<float>   *trkpt5_z0_qoverp_err_wrtBL;
   vector<float>   *trkpt5_phi_theta_err_wrtBL;
   vector<float>   *trkpt5_phi_qoverp_err_wrtBL;
   vector<float>   *trkpt5_theta_qoverp_err_wrtBL;
   vector<float>   *trkpt5_chi2;
   vector<int>     *trkpt5_ndof;
   vector<int>     *trkpt5_nBLHits;
   vector<int>     *trkpt5_nPixHits;
   vector<int>     *trkpt5_nSCTHits;
   vector<int>     *trkpt5_nTRTHits;
   vector<int>     *trkpt5_nTRTHighTHits;
   vector<int>     *trkpt5_nPixHoles;
   vector<int>     *trkpt5_nSCTHoles;
   vector<int>     *trkpt5_nTRTHoles;
   vector<int>     *trkpt5_nPixelDeadSensors;
   vector<int>     *trkpt5_nSCTDeadSensors;
   vector<int>     *trkpt5_nBLSharedHits;
   vector<int>     *trkpt5_nPixSharedHits;
   vector<int>     *trkpt5_nSCTSharedHits;
   vector<int>     *trkpt5_nBLayerSplitHits;
   vector<int>     *trkpt5_nPixSplitHits;
   vector<int>     *trkpt5_nBLayerOutliers;
   vector<int>     *trkpt5_nPixelOutliers;
   vector<int>     *trkpt5_nSCTOutliers;
   vector<int>     *trkpt5_nTRTOutliers;
   vector<int>     *trkpt5_nTRTHighTOutliers;
   vector<int>     *trkpt5_nContribPixelLayers;
   vector<int>     *trkpt5_nGangedPixels;
   vector<int>     *trkpt5_nGangedFlaggedFakes;
   vector<int>     *trkpt5_nPixelSpoiltHits;
   vector<int>     *trkpt5_nSCTDoubleHoles;
   vector<int>     *trkpt5_nSCTSpoiltHits;
   vector<int>     *trkpt5_nTRTDeadStraws;
   vector<int>     *trkpt5_nTRTTubeHits;
   vector<int>     *trkpt5_expectBLayerHit;
   vector<int>     *trkpt5_nMDTHits;
   vector<int>     *trkpt5_nCSCEtaHits;
   vector<int>     *trkpt5_nCSCPhiHits;
   vector<int>     *trkpt5_nRPCEtaHits;
   vector<int>     *trkpt5_nRPCPhiHits;
   vector<int>     *trkpt5_nTGCEtaHits;
   vector<int>     *trkpt5_nTGCPhiHits;
   vector<int>     *trkpt5_nHits;
   vector<int>     *trkpt5_nHoles;
   vector<int>     *trkpt5_hitPattern;
   vector<float>   *trkpt5_TRTHighTHitsRatio;
   vector<float>   *trkpt5_TRTHighTOutliersRatio;
   vector<float>   *trkpt5_pixeldEdx;
   vector<int>     *trkpt5_nGoodHitsPixeldEdx;
   vector<float>   *trkpt5_massPixeldEdx;
   vector<vector<float> > *trkpt5_likelihoodsPixeldEdx;
   vector<int>     *trkpt5_fitter;
   vector<int>     *trkpt5_patternReco1;
   vector<int>     *trkpt5_patternReco2;
   vector<int>     *trkpt5_trackProperties;
   vector<int>     *trkpt5_particleHypothesis;
   vector<int>     *trkpt5_Pixel_hit_n;
   vector<vector<unsigned int> > *trkpt5_Pixel_hit_id;
   vector<vector<unsigned int> > *trkpt5_Pixel_hit_detElementId;
   vector<vector<int> > *trkpt5_Pixel_hit_detType;
   vector<vector<int> > *trkpt5_Pixel_hit_bec;
   vector<vector<int> > *trkpt5_Pixel_hit_layer;
   vector<vector<float> > *trkpt5_Pixel_hit_charge;
   vector<vector<int> > *trkpt5_Pixel_hit_sizePhi;
   vector<vector<int> > *trkpt5_Pixel_hit_sizeZ;
   vector<vector<int> > *trkpt5_Pixel_hit_size;
   vector<vector<int> > *trkpt5_Pixel_hit_isFake;
   vector<vector<int> > *trkpt5_Pixel_hit_isGanged;
   vector<vector<int> > *trkpt5_Pixel_hit_isSplit;
   vector<vector<float> > *trkpt5_Pixel_hit_splitProb1;
   vector<vector<float> > *trkpt5_Pixel_hit_splitProb2;
   vector<vector<int> > *trkpt5_Pixel_hit_isCompetingRIO;
   vector<vector<float> > *trkpt5_Pixel_hit_locX;
   vector<vector<float> > *trkpt5_Pixel_hit_locY;
   vector<vector<float> > *trkpt5_Pixel_hit_incidencePhi;
   vector<vector<float> > *trkpt5_Pixel_hit_incidenceTheta;
   vector<vector<float> > *trkpt5_Pixel_hit_err_locX;
   vector<vector<float> > *trkpt5_Pixel_hit_err_locY;
   vector<vector<float> > *trkpt5_Pixel_hit_cov_locXY;
   vector<vector<float> > *trkpt5_Pixel_hit_x;
   vector<vector<float> > *trkpt5_Pixel_hit_y;
   vector<vector<float> > *trkpt5_Pixel_hit_z;
   vector<vector<float> > *trkpt5_Pixel_hit_trkLocX;
   vector<vector<float> > *trkpt5_Pixel_hit_trkLocY;
   vector<vector<float> > *trkpt5_Pixel_hit_err_trkLocX;
   vector<vector<float> > *trkpt5_Pixel_hit_err_trkLocY;
   vector<vector<float> > *trkpt5_Pixel_hit_cov_trkLocXY;
   vector<vector<float> > *trkpt5_Pixel_hit_chi2;
   vector<vector<int> > *trkpt5_Pixel_hit_ndof;
   vector<vector<float> > *trkpt5_calodEdx;
   vector<vector<float> > *trkpt5_calodEdx_err;
   vector<vector<float> > *trkpt5_calodEdx_betagamma;
   vector<vector<float> > *trkpt5_calodEdx_betagamma_err;
   vector<float>   *trkpt5_calodEdx_mean_EM;
   vector<float>   *trkpt5_calodEdx_mean_HadrCaloBarrel;
   vector<float>   *trkpt5_calodEdx_mean_HadrCaloEndcaps;
   vector<vector<float> > *trkpt5_raw_calodEdx;
   vector<vector<float> > *trkpt5_raw_calodEdx_err;
   vector<vector<float> > *trkpt5_raw_calodEdx_dE;
   vector<vector<float> > *trkpt5_raw_calodEdx_dE_err;
   vector<vector<float> > *trkpt5_raw_calodEdx_dx;
   vector<vector<float> > *trkpt5_raw_calodEdx_dx_err;
   vector<vector<int> > *trkpt5_raw_calodEdx_dN;
   vector<vector<float> > *trkpt5_CaloCell_sampling;
   vector<vector<float> > *trkpt5_CaloCell_eta;
   vector<vector<float> > *trkpt5_CaloCell_phi;
   vector<vector<float> > *trkpt5_CaloCell_dr;
   vector<vector<float> > *trkpt5_CaloCell_E;
   vector<vector<float> > *trkpt5_CaloCell_t;
   vector<vector<float> > *trkpt5_CaloCell_x;
   vector<vector<float> > *trkpt5_CaloCell_y;
   vector<vector<float> > *trkpt5_CaloCell_z;
   vector<float>   *trkpt5_TileBeta;
   vector<float>   *trkpt5_TileBetaMass;
   vector<float>   *trkpt5_refit_res_pt;
   vector<float>   *trkpt5_refit_res_eta;
   vector<float>   *trkpt5_refit_res_phi;
   vector<int>     *trkpt5_trt_n;
   vector<vector<int> > *trkpt5_trt_barrelendcap;
   vector<vector<int> > *trkpt5_trt_phimodule;
   vector<vector<int> > *trkpt5_trt_layerwheel;
   vector<vector<int> > *trkpt5_trt_strawlayer;
   vector<vector<int> > *trkpt5_trt_strawid;
   vector<vector<float> > *trkpt5_trt_hitx;
   vector<vector<float> > *trkpt5_trt_hity;
   vector<vector<float> > *trkpt5_trt_hitz;
   vector<vector<float> > *trkpt5_trt_t0;
   vector<vector<float> > *trkpt5_trt_tot;
   vector<vector<float> > *trkpt5_trt_rawdrifttime;
   vector<vector<float> > *trkpt5_trt_trackradius;
   vector<vector<float> > *trkpt5_trt_driftradius;
   vector<vector<int> > *trkpt5_trt_risingedge;
   vector<vector<int> > *trkpt5_trt_fallingedge;
   vector<vector<int> > *trkpt5_trt_rawbitpatterns;
   vector<vector<int> > *trkpt5_trt_istube;
   vector<float>   *trkpt5_trt_NBI_dEdxTrtHighThresholdFraction;
   vector<float>   *trkpt5_trt_NBI_dEdxTrtLastBitFraction;
   vector<float>   *trkpt5_trt_Indiana_dEdxTrtBitsOverThreshold;
   vector<float>   *trkpt5_trt_Indiana_dEdxTrtTrailingEdge;
   vector<float>   *trkpt5_trt_Indiana_dEdxTrtLastBitFraction;
   vector<float>   *trkpt5_trt_InDetLowBetaCandidate_BitsOverThr;
   vector<float>   *trkpt5_trt_InDetLowBetaCandidate_TrailingEdge;
   vector<float>   *trkpt5_trt_InDetLowBetaCandidate_TrailingEdgeError;
   vector<int>     *trkpt5_trt_InDetLowBetaCandidate_lastBits;
   vector<float>   *trkpt5_trt_InDetLowBetaCandidate_dEdx;
   vector<float>   *trkpt5_trt_InDetLowBetaCandidate_LikelihoodBeta;
   vector<float>   *trkpt5_trt_InDetLowBetaCandidate_LikelihoodError;
   vector<float>   *trkpt5_trt_InDetLowBetaCandidate_HighTbits;
   vector<float>   *trkpt5_trt_ToT_Tools_usedHits;
   vector<float>   *trkpt5_trt_ToT_Tools_dEdx;
   vector<float>   *trkpt5_trt_ToT_Tools_usedHits_L;
   vector<float>   *trkpt5_trt_ToT_Tools_dEdx_L;
   Float_t         MET_RefFinal_etx;
   Float_t         MET_RefFinal_ety;
   Float_t         MET_RefFinal_phi;
   Float_t         MET_RefFinal_et;
   Float_t         MET_RefFinal_sumet;
   Float_t         MET_RefFinal_etx_CentralReg;
   Float_t         MET_RefFinal_ety_CentralReg;
   Float_t         MET_RefFinal_sumet_CentralReg;
   Float_t         MET_RefFinal_phi_CentralReg;
   Float_t         MET_RefFinal_etx_EndcapRegion;
   Float_t         MET_RefFinal_ety_EndcapRegion;
   Float_t         MET_RefFinal_sumet_EndcapRegion;
   Float_t         MET_RefFinal_phi_EndcapRegion;
   Float_t         MET_RefFinal_etx_ForwardReg;
   Float_t         MET_RefFinal_ety_ForwardReg;
   Float_t         MET_RefFinal_sumet_ForwardReg;
   Float_t         MET_RefFinal_phi_ForwardReg;
   Float_t         MET_RefMuon_etx;
   Float_t         MET_RefMuon_ety;
   Float_t         MET_RefMuon_phi;
   Float_t         MET_RefMuon_et;
   Float_t         MET_RefMuon_sumet;
   Float_t         MET_RefMuon_etx_CentralReg;
   Float_t         MET_RefMuon_ety_CentralReg;
   Float_t         MET_RefMuon_sumet_CentralReg;
   Float_t         MET_RefMuon_phi_CentralReg;
   Float_t         MET_RefMuon_etx_EndcapRegion;
   Float_t         MET_RefMuon_ety_EndcapRegion;
   Float_t         MET_RefMuon_sumet_EndcapRegion;
   Float_t         MET_RefMuon_phi_EndcapRegion;
   Float_t         MET_RefMuon_etx_ForwardReg;
   Float_t         MET_RefMuon_ety_ForwardReg;
   Float_t         MET_RefMuon_sumet_ForwardReg;
   Float_t         MET_RefMuon_phi_ForwardReg;
   Float_t         MET_RefMuons_etx;
   Float_t         MET_RefMuons_ety;
   Float_t         MET_RefMuons_phi;
   Float_t         MET_RefMuons_et;
   Float_t         MET_RefMuons_sumet;
   Float_t         MET_RefMuons_etx_CentralReg;
   Float_t         MET_RefMuons_ety_CentralReg;
   Float_t         MET_RefMuons_sumet_CentralReg;
   Float_t         MET_RefMuons_phi_CentralReg;
   Float_t         MET_RefMuons_etx_EndcapRegion;
   Float_t         MET_RefMuons_ety_EndcapRegion;
   Float_t         MET_RefMuons_sumet_EndcapRegion;
   Float_t         MET_RefMuons_phi_EndcapRegion;
   Float_t         MET_RefMuons_etx_ForwardReg;
   Float_t         MET_RefMuons_ety_ForwardReg;
   Float_t         MET_RefMuons_sumet_ForwardReg;
   Float_t         MET_RefMuons_phi_ForwardReg;
   Float_t         MET_RefFinal_em_etx;
   Float_t         MET_RefFinal_em_ety;
   Float_t         MET_RefFinal_em_phi;
   Float_t         MET_RefFinal_em_et;
   Float_t         MET_RefFinal_em_sumet;
   Float_t         MET_RefFinal_em_etx_CentralReg;
   Float_t         MET_RefFinal_em_ety_CentralReg;
   Float_t         MET_RefFinal_em_sumet_CentralReg;
   Float_t         MET_RefFinal_em_phi_CentralReg;
   Float_t         MET_RefFinal_em_etx_EndcapRegion;
   Float_t         MET_RefFinal_em_ety_EndcapRegion;
   Float_t         MET_RefFinal_em_sumet_EndcapRegion;
   Float_t         MET_RefFinal_em_phi_EndcapRegion;
   Float_t         MET_RefFinal_em_etx_ForwardReg;
   Float_t         MET_RefFinal_em_ety_ForwardReg;
   Float_t         MET_RefFinal_em_sumet_ForwardReg;
   Float_t         MET_RefFinal_em_phi_ForwardReg;
   Float_t         MET_Muons_Isol_etx;
   Float_t         MET_Muons_Isol_ety;
   Float_t         MET_Muons_Isol_phi;
   Float_t         MET_Muons_Isol_et;
   Float_t         MET_Muons_Isol_sumet;
   Float_t         MET_Muons_Isol_etx_CentralReg;
   Float_t         MET_Muons_Isol_ety_CentralReg;
   Float_t         MET_Muons_Isol_sumet_CentralReg;
   Float_t         MET_Muons_Isol_phi_CentralReg;
   Float_t         MET_Muons_Isol_etx_EndcapRegion;
   Float_t         MET_Muons_Isol_ety_EndcapRegion;
   Float_t         MET_Muons_Isol_sumet_EndcapRegion;
   Float_t         MET_Muons_Isol_phi_EndcapRegion;
   Float_t         MET_Muons_Isol_etx_ForwardReg;
   Float_t         MET_Muons_Isol_ety_ForwardReg;
   Float_t         MET_Muons_Isol_sumet_ForwardReg;
   Float_t         MET_Muons_Isol_phi_ForwardReg;
   Float_t         MET_Muons_NonIsol_etx;
   Float_t         MET_Muons_NonIsol_ety;
   Float_t         MET_Muons_NonIsol_phi;
   Float_t         MET_Muons_NonIsol_et;
   Float_t         MET_Muons_NonIsol_sumet;
   Float_t         MET_Muons_NonIsol_etx_CentralReg;
   Float_t         MET_Muons_NonIsol_ety_CentralReg;
   Float_t         MET_Muons_NonIsol_sumet_CentralReg;
   Float_t         MET_Muons_NonIsol_phi_CentralReg;
   Float_t         MET_Muons_NonIsol_etx_EndcapRegion;
   Float_t         MET_Muons_NonIsol_ety_EndcapRegion;
   Float_t         MET_Muons_NonIsol_sumet_EndcapRegion;
   Float_t         MET_Muons_NonIsol_phi_EndcapRegion;
   Float_t         MET_Muons_NonIsol_etx_ForwardReg;
   Float_t         MET_Muons_NonIsol_ety_ForwardReg;
   Float_t         MET_Muons_NonIsol_sumet_ForwardReg;
   Float_t         MET_Muons_NonIsol_phi_ForwardReg;
   Float_t         MET_Muons_Total_etx;
   Float_t         MET_Muons_Total_ety;
   Float_t         MET_Muons_Total_phi;
   Float_t         MET_Muons_Total_et;
   Float_t         MET_Muons_Total_sumet;
   Float_t         MET_Muons_Total_etx_CentralReg;
   Float_t         MET_Muons_Total_ety_CentralReg;
   Float_t         MET_Muons_Total_sumet_CentralReg;
   Float_t         MET_Muons_Total_phi_CentralReg;
   Float_t         MET_Muons_Total_etx_EndcapRegion;
   Float_t         MET_Muons_Total_ety_EndcapRegion;
   Float_t         MET_Muons_Total_sumet_EndcapRegion;
   Float_t         MET_Muons_Total_phi_EndcapRegion;
   Float_t         MET_Muons_Total_etx_ForwardReg;
   Float_t         MET_Muons_Total_ety_ForwardReg;
   Float_t         MET_Muons_Total_sumet_ForwardReg;
   Float_t         MET_Muons_Total_phi_ForwardReg;
   Float_t         MET_MuonBoy_etx;
   Float_t         MET_MuonBoy_ety;
   Float_t         MET_MuonBoy_phi;
   Float_t         MET_MuonBoy_et;
   Float_t         MET_MuonBoy_sumet;
   Float_t         MET_MuonBoy_etx_CentralReg;
   Float_t         MET_MuonBoy_ety_CentralReg;
   Float_t         MET_MuonBoy_sumet_CentralReg;
   Float_t         MET_MuonBoy_phi_CentralReg;
   Float_t         MET_MuonBoy_etx_EndcapRegion;
   Float_t         MET_MuonBoy_ety_EndcapRegion;
   Float_t         MET_MuonBoy_sumet_EndcapRegion;
   Float_t         MET_MuonBoy_phi_EndcapRegion;
   Float_t         MET_MuonBoy_etx_ForwardReg;
   Float_t         MET_MuonBoy_ety_ForwardReg;
   Float_t         MET_MuonBoy_sumet_ForwardReg;
   Float_t         MET_MuonBoy_phi_ForwardReg;
   Float_t         MET_RefFinal_STVF_etx;
   Float_t         MET_RefFinal_STVF_ety;
   Float_t         MET_RefFinal_STVF_phi;
   Float_t         MET_RefFinal_STVF_et;
   Float_t         MET_RefFinal_STVF_sumet;
   Float_t         MET_RefFinal_STVF_etx_CentralReg;
   Float_t         MET_RefFinal_STVF_ety_CentralReg;
   Float_t         MET_RefFinal_STVF_sumet_CentralReg;
   Float_t         MET_RefFinal_STVF_phi_CentralReg;
   Float_t         MET_RefFinal_STVF_etx_EndcapRegion;
   Float_t         MET_RefFinal_STVF_ety_EndcapRegion;
   Float_t         MET_RefFinal_STVF_sumet_EndcapRegion;
   Float_t         MET_RefFinal_STVF_phi_EndcapRegion;
   Float_t         MET_RefFinal_STVF_etx_ForwardReg;
   Float_t         MET_RefFinal_STVF_ety_ForwardReg;
   Float_t         MET_RefFinal_STVF_sumet_ForwardReg;
   Float_t         MET_RefFinal_STVF_phi_ForwardReg;
   Float_t         MET_RefGamma_STVF_etx;
   Float_t         MET_RefGamma_STVF_ety;
   Float_t         MET_RefGamma_STVF_phi;
   Float_t         MET_RefGamma_STVF_et;
   Float_t         MET_RefGamma_STVF_sumet;
   Float_t         MET_RefGamma_STVF_etx_CentralReg;
   Float_t         MET_RefGamma_STVF_ety_CentralReg;
   Float_t         MET_RefGamma_STVF_sumet_CentralReg;
   Float_t         MET_RefGamma_STVF_phi_CentralReg;
   Float_t         MET_RefGamma_STVF_etx_EndcapRegion;
   Float_t         MET_RefGamma_STVF_ety_EndcapRegion;
   Float_t         MET_RefGamma_STVF_sumet_EndcapRegion;
   Float_t         MET_RefGamma_STVF_phi_EndcapRegion;
   Float_t         MET_RefGamma_STVF_etx_ForwardReg;
   Float_t         MET_RefGamma_STVF_ety_ForwardReg;
   Float_t         MET_RefGamma_STVF_sumet_ForwardReg;
   Float_t         MET_RefGamma_STVF_phi_ForwardReg;
   Float_t         MET_RefEle_STVF_etx;
   Float_t         MET_RefEle_STVF_ety;
   Float_t         MET_RefEle_STVF_phi;
   Float_t         MET_RefEle_STVF_et;
   Float_t         MET_RefEle_STVF_sumet;
   Float_t         MET_RefEle_STVF_etx_CentralReg;
   Float_t         MET_RefEle_STVF_ety_CentralReg;
   Float_t         MET_RefEle_STVF_sumet_CentralReg;
   Float_t         MET_RefEle_STVF_phi_CentralReg;
   Float_t         MET_RefEle_STVF_etx_EndcapRegion;
   Float_t         MET_RefEle_STVF_ety_EndcapRegion;
   Float_t         MET_RefEle_STVF_sumet_EndcapRegion;
   Float_t         MET_RefEle_STVF_phi_EndcapRegion;
   Float_t         MET_RefEle_STVF_etx_ForwardReg;
   Float_t         MET_RefEle_STVF_ety_ForwardReg;
   Float_t         MET_RefEle_STVF_sumet_ForwardReg;
   Float_t         MET_RefEle_STVF_phi_ForwardReg;
   Float_t         MET_RefTau_STVF_etx;
   Float_t         MET_RefTau_STVF_ety;
   Float_t         MET_RefTau_STVF_phi;
   Float_t         MET_RefTau_STVF_et;
   Float_t         MET_RefTau_STVF_sumet;
   Float_t         MET_RefTau_STVF_etx_CentralReg;
   Float_t         MET_RefTau_STVF_ety_CentralReg;
   Float_t         MET_RefTau_STVF_sumet_CentralReg;
   Float_t         MET_RefTau_STVF_phi_CentralReg;
   Float_t         MET_RefTau_STVF_etx_EndcapRegion;
   Float_t         MET_RefTau_STVF_ety_EndcapRegion;
   Float_t         MET_RefTau_STVF_sumet_EndcapRegion;
   Float_t         MET_RefTau_STVF_phi_EndcapRegion;
   Float_t         MET_RefTau_STVF_etx_ForwardReg;
   Float_t         MET_RefTau_STVF_ety_ForwardReg;
   Float_t         MET_RefTau_STVF_sumet_ForwardReg;
   Float_t         MET_RefTau_STVF_phi_ForwardReg;
   Float_t         MET_RefJet_STVF_etx;
   Float_t         MET_RefJet_STVF_ety;
   Float_t         MET_RefJet_STVF_phi;
   Float_t         MET_RefJet_STVF_et;
   Float_t         MET_RefJet_STVF_sumet;
   Float_t         MET_RefJet_STVF_etx_CentralReg;
   Float_t         MET_RefJet_STVF_ety_CentralReg;
   Float_t         MET_RefJet_STVF_sumet_CentralReg;
   Float_t         MET_RefJet_STVF_phi_CentralReg;
   Float_t         MET_RefJet_STVF_etx_EndcapRegion;
   Float_t         MET_RefJet_STVF_ety_EndcapRegion;
   Float_t         MET_RefJet_STVF_sumet_EndcapRegion;
   Float_t         MET_RefJet_STVF_phi_EndcapRegion;
   Float_t         MET_RefJet_STVF_etx_ForwardReg;
   Float_t         MET_RefJet_STVF_ety_ForwardReg;
   Float_t         MET_RefJet_STVF_sumet_ForwardReg;
   Float_t         MET_RefJet_STVF_phi_ForwardReg;
   Float_t         MET_RefMuon_Staco_STVF_etx;
   Float_t         MET_RefMuon_Staco_STVF_ety;
   Float_t         MET_RefMuon_Staco_STVF_phi;
   Float_t         MET_RefMuon_Staco_STVF_et;
   Float_t         MET_RefMuon_Staco_STVF_sumet;
   Float_t         MET_RefMuon_Staco_STVF_etx_CentralReg;
   Float_t         MET_RefMuon_Staco_STVF_ety_CentralReg;
   Float_t         MET_RefMuon_Staco_STVF_sumet_CentralReg;
   Float_t         MET_RefMuon_Staco_STVF_phi_CentralReg;
   Float_t         MET_RefMuon_Staco_STVF_etx_EndcapRegion;
   Float_t         MET_RefMuon_Staco_STVF_ety_EndcapRegion;
   Float_t         MET_RefMuon_Staco_STVF_sumet_EndcapRegion;
   Float_t         MET_RefMuon_Staco_STVF_phi_EndcapRegion;
   Float_t         MET_RefMuon_Staco_STVF_etx_ForwardReg;
   Float_t         MET_RefMuon_Staco_STVF_ety_ForwardReg;
   Float_t         MET_RefMuon_Staco_STVF_sumet_ForwardReg;
   Float_t         MET_RefMuon_Staco_STVF_phi_ForwardReg;
   Float_t         MET_Muon_Isol_Staco_STVF_etx;
   Float_t         MET_Muon_Isol_Staco_STVF_ety;
   Float_t         MET_Muon_Isol_Staco_STVF_phi;
   Float_t         MET_Muon_Isol_Staco_STVF_et;
   Float_t         MET_Muon_Isol_Staco_STVF_sumet;
   Float_t         MET_Muon_Isol_Staco_STVF_etx_CentralReg;
   Float_t         MET_Muon_Isol_Staco_STVF_ety_CentralReg;
   Float_t         MET_Muon_Isol_Staco_STVF_sumet_CentralReg;
   Float_t         MET_Muon_Isol_Staco_STVF_phi_CentralReg;
   Float_t         MET_Muon_Isol_Staco_STVF_etx_EndcapRegion;
   Float_t         MET_Muon_Isol_Staco_STVF_ety_EndcapRegion;
   Float_t         MET_Muon_Isol_Staco_STVF_sumet_EndcapRegion;
   Float_t         MET_Muon_Isol_Staco_STVF_phi_EndcapRegion;
   Float_t         MET_Muon_Isol_Staco_STVF_etx_ForwardReg;
   Float_t         MET_Muon_Isol_Staco_STVF_ety_ForwardReg;
   Float_t         MET_Muon_Isol_Staco_STVF_sumet_ForwardReg;
   Float_t         MET_Muon_Isol_Staco_STVF_phi_ForwardReg;
   Float_t         MET_Muon_NonIsol_Staco_STVF_etx;
   Float_t         MET_Muon_NonIsol_Staco_STVF_ety;
   Float_t         MET_Muon_NonIsol_Staco_STVF_phi;
   Float_t         MET_Muon_NonIsol_Staco_STVF_et;
   Float_t         MET_Muon_NonIsol_Staco_STVF_sumet;
   Float_t         MET_Muon_NonIsol_Staco_STVF_etx_CentralReg;
   Float_t         MET_Muon_NonIsol_Staco_STVF_ety_CentralReg;
   Float_t         MET_Muon_NonIsol_Staco_STVF_sumet_CentralReg;
   Float_t         MET_Muon_NonIsol_Staco_STVF_phi_CentralReg;
   Float_t         MET_Muon_NonIsol_Staco_STVF_etx_EndcapRegion;
   Float_t         MET_Muon_NonIsol_Staco_STVF_ety_EndcapRegion;
   Float_t         MET_Muon_NonIsol_Staco_STVF_sumet_EndcapRegion;
   Float_t         MET_Muon_NonIsol_Staco_STVF_phi_EndcapRegion;
   Float_t         MET_Muon_NonIsol_Staco_STVF_etx_ForwardReg;
   Float_t         MET_Muon_NonIsol_Staco_STVF_ety_ForwardReg;
   Float_t         MET_Muon_NonIsol_Staco_STVF_sumet_ForwardReg;
   Float_t         MET_Muon_NonIsol_Staco_STVF_phi_ForwardReg;
   Float_t         MET_Muon_Total_Staco_STVF_etx;
   Float_t         MET_Muon_Total_Staco_STVF_ety;
   Float_t         MET_Muon_Total_Staco_STVF_phi;
   Float_t         MET_Muon_Total_Staco_STVF_et;
   Float_t         MET_Muon_Total_Staco_STVF_sumet;
   Float_t         MET_Muon_Total_Staco_STVF_etx_CentralReg;
   Float_t         MET_Muon_Total_Staco_STVF_ety_CentralReg;
   Float_t         MET_Muon_Total_Staco_STVF_sumet_CentralReg;
   Float_t         MET_Muon_Total_Staco_STVF_phi_CentralReg;
   Float_t         MET_Muon_Total_Staco_STVF_etx_EndcapRegion;
   Float_t         MET_Muon_Total_Staco_STVF_ety_EndcapRegion;
   Float_t         MET_Muon_Total_Staco_STVF_sumet_EndcapRegion;
   Float_t         MET_Muon_Total_Staco_STVF_phi_EndcapRegion;
   Float_t         MET_Muon_Total_Staco_STVF_etx_ForwardReg;
   Float_t         MET_Muon_Total_Staco_STVF_ety_ForwardReg;
   Float_t         MET_Muon_Total_Staco_STVF_sumet_ForwardReg;
   Float_t         MET_Muon_Total_Staco_STVF_phi_ForwardReg;
   Float_t         MET_RefMuon_Track_Staco_STVF_etx;
   Float_t         MET_RefMuon_Track_Staco_STVF_ety;
   Float_t         MET_RefMuon_Track_Staco_STVF_phi;
   Float_t         MET_RefMuon_Track_Staco_STVF_et;
   Float_t         MET_RefMuon_Track_Staco_STVF_sumet;
   Float_t         MET_RefMuon_Track_Staco_STVF_etx_CentralReg;
   Float_t         MET_RefMuon_Track_Staco_STVF_ety_CentralReg;
   Float_t         MET_RefMuon_Track_Staco_STVF_sumet_CentralReg;
   Float_t         MET_RefMuon_Track_Staco_STVF_phi_CentralReg;
   Float_t         MET_RefMuon_Track_Staco_STVF_etx_EndcapRegion;
   Float_t         MET_RefMuon_Track_Staco_STVF_ety_EndcapRegion;
   Float_t         MET_RefMuon_Track_Staco_STVF_sumet_EndcapRegion;
   Float_t         MET_RefMuon_Track_Staco_STVF_phi_EndcapRegion;
   Float_t         MET_RefMuon_Track_Staco_STVF_etx_ForwardReg;
   Float_t         MET_RefMuon_Track_Staco_STVF_ety_ForwardReg;
   Float_t         MET_RefMuon_Track_Staco_STVF_sumet_ForwardReg;
   Float_t         MET_RefMuon_Track_Staco_STVF_phi_ForwardReg;
   Float_t         MET_CellOut_STVF_etx;
   Float_t         MET_CellOut_STVF_ety;
   Float_t         MET_CellOut_STVF_phi;
   Float_t         MET_CellOut_STVF_et;
   Float_t         MET_CellOut_STVF_sumet;
   Float_t         MET_CellOut_STVF_etx_CentralReg;
   Float_t         MET_CellOut_STVF_ety_CentralReg;
   Float_t         MET_CellOut_STVF_sumet_CentralReg;
   Float_t         MET_CellOut_STVF_phi_CentralReg;
   Float_t         MET_CellOut_STVF_etx_EndcapRegion;
   Float_t         MET_CellOut_STVF_ety_EndcapRegion;
   Float_t         MET_CellOut_STVF_sumet_EndcapRegion;
   Float_t         MET_CellOut_STVF_phi_EndcapRegion;
   Float_t         MET_CellOut_STVF_etx_ForwardReg;
   Float_t         MET_CellOut_STVF_ety_ForwardReg;
   Float_t         MET_CellOut_STVF_sumet_ForwardReg;
   Float_t         MET_CellOut_STVF_phi_ForwardReg;
   Float_t         MET_CellOut_Track_STVF_etx;
   Float_t         MET_CellOut_Track_STVF_ety;
   Float_t         MET_CellOut_Track_STVF_phi;
   Float_t         MET_CellOut_Track_STVF_et;
   Float_t         MET_CellOut_Track_STVF_sumet;
   Float_t         MET_CellOut_Track_STVF_etx_CentralReg;
   Float_t         MET_CellOut_Track_STVF_ety_CentralReg;
   Float_t         MET_CellOut_Track_STVF_sumet_CentralReg;
   Float_t         MET_CellOut_Track_STVF_phi_CentralReg;
   Float_t         MET_CellOut_Track_STVF_etx_EndcapRegion;
   Float_t         MET_CellOut_Track_STVF_ety_EndcapRegion;
   Float_t         MET_CellOut_Track_STVF_sumet_EndcapRegion;
   Float_t         MET_CellOut_Track_STVF_phi_EndcapRegion;
   Float_t         MET_CellOut_Track_STVF_etx_ForwardReg;
   Float_t         MET_CellOut_Track_STVF_ety_ForwardReg;
   Float_t         MET_CellOut_Track_STVF_sumet_ForwardReg;
   Float_t         MET_CellOut_Track_STVF_phi_ForwardReg;
   Float_t         MET_CellOut_TrackPV_STVF_etx;
   Float_t         MET_CellOut_TrackPV_STVF_ety;
   Float_t         MET_CellOut_TrackPV_STVF_phi;
   Float_t         MET_CellOut_TrackPV_STVF_et;
   Float_t         MET_CellOut_TrackPV_STVF_sumet;
   Float_t         MET_CellOut_TrackPV_STVF_etx_CentralReg;
   Float_t         MET_CellOut_TrackPV_STVF_ety_CentralReg;
   Float_t         MET_CellOut_TrackPV_STVF_sumet_CentralReg;
   Float_t         MET_CellOut_TrackPV_STVF_phi_CentralReg;
   Float_t         MET_CellOut_TrackPV_STVF_etx_EndcapRegion;
   Float_t         MET_CellOut_TrackPV_STVF_ety_EndcapRegion;
   Float_t         MET_CellOut_TrackPV_STVF_sumet_EndcapRegion;
   Float_t         MET_CellOut_TrackPV_STVF_phi_EndcapRegion;
   Float_t         MET_CellOut_TrackPV_STVF_etx_ForwardReg;
   Float_t         MET_CellOut_TrackPV_STVF_ety_ForwardReg;
   Float_t         MET_CellOut_TrackPV_STVF_sumet_ForwardReg;
   Float_t         MET_CellOut_TrackPV_STVF_phi_ForwardReg;
   Float_t         MET_CellOutCorr_STVF_etx;
   Float_t         MET_CellOutCorr_STVF_ety;
   Float_t         MET_CellOutCorr_STVF_phi;
   Float_t         MET_CellOutCorr_STVF_et;
   Float_t         MET_CellOutCorr_STVF_sumet;
   Float_t         MET_CellOutCorr_STVF_etx_CentralReg;
   Float_t         MET_CellOutCorr_STVF_ety_CentralReg;
   Float_t         MET_CellOutCorr_STVF_sumet_CentralReg;
   Float_t         MET_CellOutCorr_STVF_phi_CentralReg;
   Float_t         MET_CellOutCorr_STVF_etx_EndcapRegion;
   Float_t         MET_CellOutCorr_STVF_ety_EndcapRegion;
   Float_t         MET_CellOutCorr_STVF_sumet_EndcapRegion;
   Float_t         MET_CellOutCorr_STVF_phi_EndcapRegion;
   Float_t         MET_CellOutCorr_STVF_etx_ForwardReg;
   Float_t         MET_CellOutCorr_STVF_ety_ForwardReg;
   Float_t         MET_CellOutCorr_STVF_sumet_ForwardReg;
   Float_t         MET_CellOutCorr_STVF_phi_ForwardReg;
   Float_t         MET_Cryo_STVF_etx;
   Float_t         MET_Cryo_STVF_ety;
   Float_t         MET_Cryo_STVF_phi;
   Float_t         MET_Cryo_STVF_et;
   Float_t         MET_Cryo_STVF_sumet;
   Float_t         MET_Cryo_STVF_etx_CentralReg;
   Float_t         MET_Cryo_STVF_ety_CentralReg;
   Float_t         MET_Cryo_STVF_sumet_CentralReg;
   Float_t         MET_Cryo_STVF_phi_CentralReg;
   Float_t         MET_Cryo_STVF_etx_EndcapRegion;
   Float_t         MET_Cryo_STVF_ety_EndcapRegion;
   Float_t         MET_Cryo_STVF_sumet_EndcapRegion;
   Float_t         MET_Cryo_STVF_phi_EndcapRegion;
   Float_t         MET_Cryo_STVF_etx_ForwardReg;
   Float_t         MET_Cryo_STVF_ety_ForwardReg;
   Float_t         MET_Cryo_STVF_sumet_ForwardReg;
   Float_t         MET_Cryo_STVF_phi_ForwardReg;
   Float_t         MET_CellOut_Eflow_Muid_etx;
   Float_t         MET_CellOut_Eflow_Muid_ety;
   Float_t         MET_CellOut_Eflow_Muid_phi;
   Float_t         MET_CellOut_Eflow_Muid_et;
   Float_t         MET_CellOut_Eflow_Muid_sumet;
   Float_t         MET_CellOut_Eflow_Muid_etx_CentralReg;
   Float_t         MET_CellOut_Eflow_Muid_ety_CentralReg;
   Float_t         MET_CellOut_Eflow_Muid_sumet_CentralReg;
   Float_t         MET_CellOut_Eflow_Muid_phi_CentralReg;
   Float_t         MET_CellOut_Eflow_Muid_etx_EndcapRegion;
   Float_t         MET_CellOut_Eflow_Muid_ety_EndcapRegion;
   Float_t         MET_CellOut_Eflow_Muid_sumet_EndcapRegion;
   Float_t         MET_CellOut_Eflow_Muid_phi_EndcapRegion;
   Float_t         MET_CellOut_Eflow_Muid_etx_ForwardReg;
   Float_t         MET_CellOut_Eflow_Muid_ety_ForwardReg;
   Float_t         MET_CellOut_Eflow_Muid_sumet_ForwardReg;
   Float_t         MET_CellOut_Eflow_Muid_phi_ForwardReg;
   Float_t         MET_CellOut_Eflow_Muons_etx;
   Float_t         MET_CellOut_Eflow_Muons_ety;
   Float_t         MET_CellOut_Eflow_Muons_phi;
   Float_t         MET_CellOut_Eflow_Muons_et;
   Float_t         MET_CellOut_Eflow_Muons_sumet;
   Float_t         MET_CellOut_Eflow_Muons_etx_CentralReg;
   Float_t         MET_CellOut_Eflow_Muons_ety_CentralReg;
   Float_t         MET_CellOut_Eflow_Muons_sumet_CentralReg;
   Float_t         MET_CellOut_Eflow_Muons_phi_CentralReg;
   Float_t         MET_CellOut_Eflow_Muons_etx_EndcapRegion;
   Float_t         MET_CellOut_Eflow_Muons_ety_EndcapRegion;
   Float_t         MET_CellOut_Eflow_Muons_sumet_EndcapRegion;
   Float_t         MET_CellOut_Eflow_Muons_phi_EndcapRegion;
   Float_t         MET_CellOut_Eflow_Muons_etx_ForwardReg;
   Float_t         MET_CellOut_Eflow_Muons_ety_ForwardReg;
   Float_t         MET_CellOut_Eflow_Muons_sumet_ForwardReg;
   Float_t         MET_CellOut_Eflow_Muons_phi_ForwardReg;
   Float_t         MET_RefMuons_Track_etx;
   Float_t         MET_RefMuons_Track_ety;
   Float_t         MET_RefMuons_Track_phi;
   Float_t         MET_RefMuons_Track_et;
   Float_t         MET_RefMuons_Track_sumet;
   Float_t         MET_RefMuons_Track_etx_CentralReg;
   Float_t         MET_RefMuons_Track_ety_CentralReg;
   Float_t         MET_RefMuons_Track_sumet_CentralReg;
   Float_t         MET_RefMuons_Track_phi_CentralReg;
   Float_t         MET_RefMuons_Track_etx_EndcapRegion;
   Float_t         MET_RefMuons_Track_ety_EndcapRegion;
   Float_t         MET_RefMuons_Track_sumet_EndcapRegion;
   Float_t         MET_RefMuons_Track_phi_EndcapRegion;
   Float_t         MET_RefMuons_Track_etx_ForwardReg;
   Float_t         MET_RefMuons_Track_ety_ForwardReg;
   Float_t         MET_RefMuons_Track_sumet_ForwardReg;
   Float_t         MET_RefMuons_Track_phi_ForwardReg;
   Float_t         MET_Final_etx;
   Float_t         MET_Final_ety;
   Float_t         MET_Final_phi;
   Float_t         MET_Final_et;
   Float_t         MET_Final_sumet;
   Float_t         MET_Final_etx_CentralReg;
   Float_t         MET_Final_ety_CentralReg;
   Float_t         MET_Final_sumet_CentralReg;
   Float_t         MET_Final_phi_CentralReg;
   Float_t         MET_Final_etx_EndcapRegion;
   Float_t         MET_Final_ety_EndcapRegion;
   Float_t         MET_Final_sumet_EndcapRegion;
   Float_t         MET_Final_phi_EndcapRegion;
   Float_t         MET_Final_etx_ForwardReg;
   Float_t         MET_Final_ety_ForwardReg;
   Float_t         MET_Final_sumet_ForwardReg;
   Float_t         MET_Final_phi_ForwardReg;
   Float_t         MET_MuonMuons_etx;
   Float_t         MET_MuonMuons_ety;
   Float_t         MET_MuonMuons_phi;
   Float_t         MET_MuonMuons_et;
   Float_t         MET_MuonMuons_sumet;
   Float_t         MET_MuonMuons_etx_CentralReg;
   Float_t         MET_MuonMuons_ety_CentralReg;
   Float_t         MET_MuonMuons_sumet_CentralReg;
   Float_t         MET_MuonMuons_phi_CentralReg;
   Float_t         MET_MuonMuons_etx_EndcapRegion;
   Float_t         MET_MuonMuons_ety_EndcapRegion;
   Float_t         MET_MuonMuons_sumet_EndcapRegion;
   Float_t         MET_MuonMuons_phi_EndcapRegion;
   Float_t         MET_MuonMuons_etx_ForwardReg;
   Float_t         MET_MuonMuons_ety_ForwardReg;
   Float_t         MET_MuonMuons_sumet_ForwardReg;
   Float_t         MET_MuonMuons_phi_ForwardReg;
   Float_t         MET_Muons_etx;
   Float_t         MET_Muons_ety;
   Float_t         MET_Muons_phi;
   Float_t         MET_Muons_et;
   Float_t         MET_Muons_sumet;
   Float_t         MET_Muons_etx_CentralReg;
   Float_t         MET_Muons_ety_CentralReg;
   Float_t         MET_Muons_sumet_CentralReg;
   Float_t         MET_Muons_phi_CentralReg;
   Float_t         MET_Muons_etx_EndcapRegion;
   Float_t         MET_Muons_ety_EndcapRegion;
   Float_t         MET_Muons_sumet_EndcapRegion;
   Float_t         MET_Muons_phi_EndcapRegion;
   Float_t         MET_Muons_etx_ForwardReg;
   Float_t         MET_Muons_ety_ForwardReg;
   Float_t         MET_Muons_sumet_ForwardReg;
   Float_t         MET_Muons_phi_ForwardReg;
   Float_t         MET_Muons_Spectro_etx;
   Float_t         MET_Muons_Spectro_ety;
   Float_t         MET_Muons_Spectro_phi;
   Float_t         MET_Muons_Spectro_et;
   Float_t         MET_Muons_Spectro_sumet;
   Float_t         MET_Muons_Spectro_etx_CentralReg;
   Float_t         MET_Muons_Spectro_ety_CentralReg;
   Float_t         MET_Muons_Spectro_sumet_CentralReg;
   Float_t         MET_Muons_Spectro_phi_CentralReg;
   Float_t         MET_Muons_Spectro_etx_EndcapRegion;
   Float_t         MET_Muons_Spectro_ety_EndcapRegion;
   Float_t         MET_Muons_Spectro_sumet_EndcapRegion;
   Float_t         MET_Muons_Spectro_phi_EndcapRegion;
   Float_t         MET_Muons_Spectro_etx_ForwardReg;
   Float_t         MET_Muons_Spectro_ety_ForwardReg;
   Float_t         MET_Muons_Spectro_sumet_ForwardReg;
   Float_t         MET_Muons_Spectro_phi_ForwardReg;
   Float_t         MET_Muons_Track_etx;
   Float_t         MET_Muons_Track_ety;
   Float_t         MET_Muons_Track_phi;
   Float_t         MET_Muons_Track_et;
   Float_t         MET_Muons_Track_sumet;
   Float_t         MET_Muons_Track_etx_CentralReg;
   Float_t         MET_Muons_Track_ety_CentralReg;
   Float_t         MET_Muons_Track_sumet_CentralReg;
   Float_t         MET_Muons_Track_phi_CentralReg;
   Float_t         MET_Muons_Track_etx_EndcapRegion;
   Float_t         MET_Muons_Track_ety_EndcapRegion;
   Float_t         MET_Muons_Track_sumet_EndcapRegion;
   Float_t         MET_Muons_Track_phi_EndcapRegion;
   Float_t         MET_Muons_Track_etx_ForwardReg;
   Float_t         MET_Muons_Track_ety_ForwardReg;
   Float_t         MET_Muons_Track_sumet_ForwardReg;
   Float_t         MET_Muons_Track_phi_ForwardReg;
   Float_t         MET_LocHadTopo_etx;
   Float_t         MET_LocHadTopo_ety;
   Float_t         MET_LocHadTopo_phi;
   Float_t         MET_LocHadTopo_et;
   Float_t         MET_LocHadTopo_sumet;
   Float_t         MET_LocHadTopo_SUMET_EMFrac;
   Float_t         MET_LocHadTopo_etx_PEMB;
   Float_t         MET_LocHadTopo_ety_PEMB;
   Float_t         MET_LocHadTopo_sumet_PEMB;
   Float_t         MET_LocHadTopo_phi_PEMB;
   Float_t         MET_LocHadTopo_etx_EMB;
   Float_t         MET_LocHadTopo_ety_EMB;
   Float_t         MET_LocHadTopo_sumet_EMB;
   Float_t         MET_LocHadTopo_phi_EMB;
   Float_t         MET_LocHadTopo_etx_PEMEC;
   Float_t         MET_LocHadTopo_ety_PEMEC;
   Float_t         MET_LocHadTopo_sumet_PEMEC;
   Float_t         MET_LocHadTopo_phi_PEMEC;
   Float_t         MET_LocHadTopo_etx_EME;
   Float_t         MET_LocHadTopo_ety_EME;
   Float_t         MET_LocHadTopo_sumet_EME;
   Float_t         MET_LocHadTopo_phi_EME;
   Float_t         MET_LocHadTopo_etx_TILE;
   Float_t         MET_LocHadTopo_ety_TILE;
   Float_t         MET_LocHadTopo_sumet_TILE;
   Float_t         MET_LocHadTopo_phi_TILE;
   Float_t         MET_LocHadTopo_etx_HEC;
   Float_t         MET_LocHadTopo_ety_HEC;
   Float_t         MET_LocHadTopo_sumet_HEC;
   Float_t         MET_LocHadTopo_phi_HEC;
   Float_t         MET_LocHadTopo_etx_FCAL;
   Float_t         MET_LocHadTopo_ety_FCAL;
   Float_t         MET_LocHadTopo_sumet_FCAL;
   Float_t         MET_LocHadTopo_phi_FCAL;
   Float_t         MET_LocHadTopo_nCell_PEMB;
   Float_t         MET_LocHadTopo_nCell_EMB;
   Float_t         MET_LocHadTopo_nCell_PEMEC;
   Float_t         MET_LocHadTopo_nCell_EME;
   Float_t         MET_LocHadTopo_nCell_TILE;
   Float_t         MET_LocHadTopo_nCell_HEC;
   Float_t         MET_LocHadTopo_nCell_FCAL;
   Float_t         MET_LocHadTopo_etx_CentralReg;
   Float_t         MET_LocHadTopo_ety_CentralReg;
   Float_t         MET_LocHadTopo_sumet_CentralReg;
   Float_t         MET_LocHadTopo_phi_CentralReg;
   Float_t         MET_LocHadTopo_etx_EndcapRegion;
   Float_t         MET_LocHadTopo_ety_EndcapRegion;
   Float_t         MET_LocHadTopo_sumet_EndcapRegion;
   Float_t         MET_LocHadTopo_phi_EndcapRegion;
   Float_t         MET_LocHadTopo_etx_ForwardReg;
   Float_t         MET_LocHadTopo_ety_ForwardReg;
   Float_t         MET_LocHadTopo_sumet_ForwardReg;
   Float_t         MET_LocHadTopo_phi_ForwardReg;
   Int_t           el_MET_n;
   vector<vector<float> > *el_MET_wpx;
   vector<vector<float> > *el_MET_wpy;
   vector<vector<float> > *el_MET_wet;
   vector<vector<unsigned int> > *el_MET_statusWord;
   Int_t           ph_MET_n;
   vector<vector<float> > *ph_MET_wpx;
   vector<vector<float> > *ph_MET_wpy;
   vector<vector<float> > *ph_MET_wet;
   vector<vector<unsigned int> > *ph_MET_statusWord;
   Int_t           mu_staco_MET_n;
   vector<vector<float> > *mu_staco_MET_wpx;
   vector<vector<float> > *mu_staco_MET_wpy;
   vector<vector<float> > *mu_staco_MET_wet;
   vector<vector<unsigned int> > *mu_staco_MET_statusWord;
   Int_t           mu_muid_MET_n;
   vector<vector<float> > *mu_muid_MET_wpx;
   vector<vector<float> > *mu_muid_MET_wpy;
   vector<vector<float> > *mu_muid_MET_wet;
   vector<vector<unsigned int> > *mu_muid_MET_statusWord;
   Int_t           mu_MET_n;
   vector<vector<float> > *mu_MET_wpx;
   vector<vector<float> > *mu_MET_wpy;
   vector<vector<float> > *mu_MET_wet;
   vector<vector<unsigned int> > *mu_MET_statusWord;
   Int_t           tau_MET_n;
   vector<vector<float> > *tau_MET_wpx;
   vector<vector<float> > *tau_MET_wpy;
   vector<vector<float> > *tau_MET_wet;
   vector<vector<unsigned int> > *tau_MET_statusWord;
   Int_t           jet_antikt4LCtopo_MET_n;
   vector<vector<float> > *jet_antikt4LCtopo_MET_wpx;
   vector<vector<float> > *jet_antikt4LCtopo_MET_wpy;
   vector<vector<float> > *jet_antikt4LCtopo_MET_wet;
   vector<vector<unsigned int> > *jet_antikt4LCtopo_MET_statusWord;
   Int_t           cl_MET_n;
   vector<vector<float> > *cl_MET_wpx;
   vector<vector<float> > *cl_MET_wpy;
   vector<vector<float> > *cl_MET_wet;
   vector<vector<unsigned int> > *cl_MET_statusWord;
   Int_t           trk_MET_n;
   vector<vector<float> > *trk_MET_wpx;
   vector<vector<float> > *trk_MET_wpy;
   vector<vector<float> > *trk_MET_wet;
   vector<vector<unsigned int> > *trk_MET_statusWord;
   Float_t         METJetsInfo_JetPtWeightedEventEMFraction;
   Float_t         METJetsInfo_JetPtWeightedNumAssociatedTracks;
   Float_t         METJetsInfo_JetPtWeightedSize;
   Float_t         METJetsInfo_LeadingJetEt;
   Float_t         METJetsInfo_LeadingJetEta;
   Int_t           vxp_n;
   vector<float>   *vxp_x;
   vector<float>   *vxp_y;
   vector<float>   *vxp_z;
   vector<float>   *vxp_cov_x;
   vector<float>   *vxp_cov_y;
   vector<float>   *vxp_cov_z;
   vector<float>   *vxp_cov_xy;
   vector<float>   *vxp_cov_xz;
   vector<float>   *vxp_cov_yz;
   vector<int>     *vxp_type;
   vector<float>   *vxp_chi2;
   vector<int>     *vxp_ndof;
   vector<float>   *vxp_px;
   vector<float>   *vxp_py;
   vector<float>   *vxp_pz;
   vector<float>   *vxp_E;
   vector<float>   *vxp_m;
   vector<int>     *vxp_nTracks;
   vector<float>   *vxp_sumPt;
   vector<vector<float> > *vxp_trk_weight;
   vector<int>     *vxp_trk_n;
   vector<vector<int> > *vxp_trk_index;
   vector<unsigned int> *trig_L1_TAV;
   vector<short>   *trig_L2_passedPhysics;
   vector<short>   *trig_EF_passedPhysics;
   vector<unsigned int> *trig_L1_TBP;
   vector<unsigned int> *trig_L1_TAP;
   vector<short>   *trig_L2_passedRaw;
   vector<short>   *trig_EF_passedRaw;
   Bool_t          trig_L2_truncated;
   Bool_t          trig_EF_truncated;
   vector<short>   *trig_L2_resurrected;
   vector<short>   *trig_EF_resurrected;
   vector<short>   *trig_L2_passedThrough;
   vector<short>   *trig_EF_passedThrough;
   vector<short>   *trig_L2_wasPrescaled;
   vector<short>   *trig_L2_wasResurrected;
   vector<short>   *trig_EF_wasPrescaled;
   vector<short>   *trig_EF_wasResurrected;
   UInt_t          trig_DB_SMK;
   UInt_t          trig_DB_L1PSK;
   UInt_t          trig_DB_HLTPSK;
   Bool_t          EF_b110_loose_j110_a4tchad_xe55_tclcw;
   Bool_t          EF_b110_loose_j110_a4tchad_xe60_tclcw;
   Bool_t          EF_b45_mediumEF_j110_j45_xe60_tclcw;
   Bool_t          EF_b55_mediumEF_j110_j55_xe60_tclcw;
   Bool_t          EF_b80_loose_j80_a4tchad_xe55_tclcw;
   Bool_t          EF_b80_loose_j80_a4tchad_xe60_tclcw;
   Bool_t          EF_b80_loose_j80_a4tchad_xe70_tclcw;
   Bool_t          EF_b80_loose_j80_a4tchad_xe75_tclcw;
   Bool_t          EF_e15vh_medium1;
   Bool_t          EF_e18vh_medium1;
   Bool_t          EF_mu24;
   Bool_t          EF_mu24_j65_a4tchad;
   Bool_t          EF_mu24_j65_a4tchad_EFxe40;
   Bool_t          EF_mu4T_j110_a4tchad_L2FS_matched;
   Bool_t          EF_mu4T_j110_a4tchad_matched;
   Bool_t          EF_mu4T_j145_a4tchad_L2FS_matched;
   Bool_t          EF_mu4T_j145_a4tchad_matched;
   Bool_t          EF_mu4T_j15_a4tchad_matched;
   Bool_t          EF_mu4T_j15_a4tchad_matchedZ;
   Bool_t          EF_mu4T_j180_a4tchad_L2FS_matched;
   Bool_t          EF_mu4T_j180_a4tchad_matched;
   Bool_t          EF_mu4T_j220_a4tchad_L2FS_matched;
   Bool_t          EF_mu4T_j220_a4tchad_matched;
   Bool_t          EF_mu4T_j25_a4tchad_matched;
   Bool_t          EF_mu4T_j25_a4tchad_matchedZ;
   Bool_t          EF_mu4T_j280_a4tchad_L2FS_matched;
   Bool_t          EF_mu4T_j280_a4tchad_matched;
   Bool_t          EF_mu4T_j35_a4tchad_matched;
   Bool_t          EF_mu4T_j35_a4tchad_matchedZ;
   Bool_t          EF_mu4T_j45_a4tchad_L2FS_matched;
   Bool_t          EF_mu4T_j45_a4tchad_L2FS_matchedZ;
   Bool_t          EF_mu4T_j45_a4tchad_matched;
   Bool_t          EF_mu4T_j45_a4tchad_matchedZ;
   Bool_t          EF_mu4T_j55_a4tchad_L2FS_matched;
   Bool_t          EF_mu4T_j55_a4tchad_L2FS_matchedZ;
   Bool_t          EF_mu4T_j55_a4tchad_matched;
   Bool_t          EF_mu4T_j55_a4tchad_matchedZ;
   Bool_t          EF_mu4T_j65_a4tchad_L2FS_matched;
   Bool_t          EF_mu4T_j65_a4tchad_matched;
   Bool_t          EF_mu4T_j80_a4tchad_L2FS_matched;
   Bool_t          EF_mu4T_j80_a4tchad_matched;
   Bool_t          L2_b105_loose_j105_c4cchad_xe40;
   Bool_t          L2_b105_loose_j105_c4cchad_xe45;
   Bool_t          L2_b75_loose_j75_c4cchad_xe40;
   Bool_t          L2_b75_loose_j75_c4cchad_xe45;
   Bool_t          L2_b75_loose_j75_c4cchad_xe55;
   Bool_t          L2_e15vh_medium1;
   Bool_t          L2_e18vh_medium1;
   Bool_t          L2_j105_j40_c4cchad_xe40;
   Bool_t          L2_j105_j50_c4cchad_xe40;
   Bool_t          L2_mu24;
   Bool_t          L2_mu24_j60_c4cchad_xe35;
   Bool_t          L2_mu24_j65_c4cchad;
   Bool_t          L2_mu4T_j105_c4cchad;
   Bool_t          L2_mu4T_j10_a4TTem;
   Bool_t          L2_mu4T_j140_c4cchad;
   Bool_t          L2_mu4T_j15_a4TTem;
   Bool_t          L2_mu4T_j165_c4cchad;
   Bool_t          L2_mu4T_j30_a4TTem;
   Bool_t          L2_mu4T_j40_c4cchad;
   Bool_t          L2_mu4T_j50_a4TTem;
   Bool_t          L2_mu4T_j50_c4cchad;
   Bool_t          L2_mu4T_j60_c4cchad;
   Bool_t          L2_mu4T_j75_a4TTem;
   Bool_t          L2_mu4T_j75_c4cchad;

   // List of branches
   TBranch        *b_EF_2e12Tvh_loose1;   //!
   TBranch        *b_EF_2e5_tight1_Jpsi;   //!
   TBranch        *b_EF_2e7T_loose1_mu6;   //!
   TBranch        *b_EF_2e7T_medium1_mu6;   //!
   TBranch        *b_EF_2mu10;   //!
   TBranch        *b_EF_2mu10_MSonly_g10_loose;   //!
   TBranch        *b_EF_2mu13;   //!
   TBranch        *b_EF_2mu13_Zmumu_IDTrkNoCut;   //!
   TBranch        *b_EF_2mu13_l2muonSA;   //!
   TBranch        *b_EF_2mu15;   //!
   TBranch        *b_EF_2mu4T;   //!
   TBranch        *b_EF_2mu4T_2e5_tight1;   //!
   TBranch        *b_EF_2mu4T_Bmumu;   //!
   TBranch        *b_EF_2mu4T_Bmumu_Barrel;   //!
   TBranch        *b_EF_2mu4T_Bmumu_BarrelOnly;   //!
   TBranch        *b_EF_2mu4T_Bmumux;   //!
   TBranch        *b_EF_2mu4T_Bmumux_Barrel;   //!
   TBranch        *b_EF_2mu4T_Bmumux_BarrelOnly;   //!
   TBranch        *b_EF_2mu4T_DiMu;   //!
   TBranch        *b_EF_2mu4T_DiMu_Barrel;   //!
   TBranch        *b_EF_2mu4T_DiMu_BarrelOnly;   //!
   TBranch        *b_EF_2mu4T_DiMu_L2StarB;   //!
   TBranch        *b_EF_2mu4T_DiMu_L2StarC;   //!
   TBranch        *b_EF_2mu4T_DiMu_e5_tight1;   //!
   TBranch        *b_EF_2mu4T_DiMu_l2muonSA;   //!
   TBranch        *b_EF_2mu4T_DiMu_noVtx_noOS;   //!
   TBranch        *b_EF_2mu4T_Jpsimumu;   //!
   TBranch        *b_EF_2mu4T_Jpsimumu_Barrel;   //!
   TBranch        *b_EF_2mu4T_Jpsimumu_BarrelOnly;   //!
   TBranch        *b_EF_2mu4T_Jpsimumu_IDTrkNoCut;   //!
   TBranch        *b_EF_2mu4T_Upsimumu;   //!
   TBranch        *b_EF_2mu4T_Upsimumu_Barrel;   //!
   TBranch        *b_EF_2mu4T_Upsimumu_BarrelOnly;   //!
   TBranch        *b_EF_2mu4T_xe60;   //!
   TBranch        *b_EF_2mu4T_xe60_tclcw;   //!
   TBranch        *b_EF_2mu6;   //!
   TBranch        *b_EF_2mu6_Bmumu;   //!
   TBranch        *b_EF_2mu6_Bmumux;   //!
   TBranch        *b_EF_2mu6_DiMu;   //!
   TBranch        *b_EF_2mu6_DiMu_DY20;   //!
   TBranch        *b_EF_2mu6_DiMu_DY25;   //!
   TBranch        *b_EF_2mu6_DiMu_noVtx_noOS;   //!
   TBranch        *b_EF_2mu6_Jpsimumu;   //!
   TBranch        *b_EF_2mu6_Upsimumu;   //!
   TBranch        *b_EF_2mu6i_DiMu_DY;   //!
   TBranch        *b_EF_2mu6i_DiMu_DY_2j25_a4tchad;   //!
   TBranch        *b_EF_2mu6i_DiMu_DY_noVtx_noOS;   //!
   TBranch        *b_EF_2mu6i_DiMu_DY_noVtx_noOS_2j25_a4tchad;   //!
   TBranch        *b_EF_2mu8_EFxe30;   //!
   TBranch        *b_EF_2mu8_EFxe30_tclcw;   //!
   TBranch        *b_EF_e11_etcut;   //!
   TBranch        *b_EF_e12Tvh_loose1;   //!
   TBranch        *b_EF_e12Tvh_medium1;   //!
   TBranch        *b_EF_e12Tvh_medium1_mu6_topo_medium;   //!
   TBranch        *b_EF_e12Tvh_medium1_mu8;   //!
   TBranch        *b_EF_e13_etcutTrk_xs60;   //!
   TBranch        *b_EF_e13_etcutTrk_xs60_dphi2j15xe20;   //!
   TBranch        *b_EF_e14_tight1_e4_etcut_Jpsi;   //!
   TBranch        *b_EF_e18_loose1;   //!
   TBranch        *b_EF_e18_loose1_g25_medium;   //!
   TBranch        *b_EF_e18_medium1;   //!
   TBranch        *b_EF_e18_medium1_g25_loose;   //!
   TBranch        *b_EF_e18vh_medium1_2e7T_medium1;   //!
   TBranch        *b_EF_e20_etcutTrk_xe30_dphi2j15xe20;   //!
   TBranch        *b_EF_e20_etcutTrk_xs60_dphi2j15xe20;   //!
   TBranch        *b_EF_e20vhT_medium1_g6T_etcut_Upsi;   //!
   TBranch        *b_EF_e20vhT_tight1_g6T_etcut_Upsi;   //!
   TBranch        *b_EF_e22vh_loose;   //!
   TBranch        *b_EF_e22vh_loose0;   //!
   TBranch        *b_EF_e22vh_loose1;   //!
   TBranch        *b_EF_e22vh_medium1;   //!
   TBranch        *b_EF_e22vh_medium1_IDTrkNoCut;   //!
   TBranch        *b_EF_e22vhi_medium1;   //!
   TBranch        *b_EF_e24vh_loose;   //!
   TBranch        *b_EF_e24vh_loose0;   //!
   TBranch        *b_EF_e24vh_loose1;   //!
   TBranch        *b_EF_e24vh_medium1;   //!
   TBranch        *b_EF_e24vh_medium1_EFxe30;   //!
   TBranch        *b_EF_e24vh_medium1_EFxe30_tcem;   //!
   TBranch        *b_EF_e24vh_medium1_EFxe35_tcem;   //!
   TBranch        *b_EF_e24vh_medium1_EFxe35_tclcw;   //!
   TBranch        *b_EF_e24vh_medium1_EFxe40;   //!
   TBranch        *b_EF_e24vh_medium1_IDTrkNoCut;   //!
   TBranch        *b_EF_e24vh_medium1_IdScan;   //!
   TBranch        *b_EF_e24vh_medium1_L2StarB;   //!
   TBranch        *b_EF_e24vh_medium1_L2StarC;   //!
   TBranch        *b_EF_e24vh_medium1_SiTrk;   //!
   TBranch        *b_EF_e24vh_medium1_TRT;   //!
   TBranch        *b_EF_e24vh_medium1_b35_mediumEF_j35_a4tchad;   //!
   TBranch        *b_EF_e24vh_medium1_e7_medium1;   //!
   TBranch        *b_EF_e24vh_tight1_e15_NoCut_Zee;   //!
   TBranch        *b_EF_e24vhi_loose1_mu8;   //!
   TBranch        *b_EF_e24vhi_medium1;   //!
   TBranch        *b_EF_e45_medium1;   //!
   TBranch        *b_EF_e5_tight1;   //!
   TBranch        *b_EF_e5_tight1_e14_etcut_Jpsi;   //!
   TBranch        *b_EF_e5_tight1_e4_etcut_Jpsi;   //!
   TBranch        *b_EF_e5_tight1_e4_etcut_Jpsi_L2StarB;   //!
   TBranch        *b_EF_e5_tight1_e4_etcut_Jpsi_L2StarC;   //!
   TBranch        *b_EF_e5_tight1_e5_NoCut;   //!
   TBranch        *b_EF_e5_tight1_e9_etcut_Jpsi;   //!
   TBranch        *b_EF_e60_medium1;   //!
   TBranch        *b_EF_e7T_loose1;   //!
   TBranch        *b_EF_e7T_loose1_2mu6;   //!
   TBranch        *b_EF_e7T_medium1;   //!
   TBranch        *b_EF_e7T_medium1_2mu6;   //!
   TBranch        *b_EF_e9_tight1_e4_etcut_Jpsi;   //!
   TBranch        *b_EF_eb_physics;   //!
   TBranch        *b_EF_eb_physics_empty;   //!
   TBranch        *b_EF_eb_physics_firstempty;   //!
   TBranch        *b_EF_eb_physics_noL1PS;   //!
   TBranch        *b_EF_eb_physics_unpaired_iso;   //!
   TBranch        *b_EF_eb_physics_unpaired_noniso;   //!
   TBranch        *b_EF_eb_random;   //!
   TBranch        *b_EF_eb_random_empty;   //!
   TBranch        *b_EF_eb_random_firstempty;   //!
   TBranch        *b_EF_eb_random_unpaired_iso;   //!
   TBranch        *b_EF_j110_a4tchad_xe100_tclcw_veryloose;   //!
   TBranch        *b_EF_j110_a4tchad_xe75_tclcw;   //!
   TBranch        *b_EF_j110_a4tchad_xe90_tclcw_loose;   //!
   TBranch        *b_EF_j110_a4tchad_xe90_tclcw_veryloose;   //!
   TBranch        *b_EF_j110_a4tclcw_xe100_tclcw_veryloose;   //!
   TBranch        *b_EF_j30_a4tcem_eta13_xe30_empty;   //!
   TBranch        *b_EF_j30_a4tcem_eta13_xe30_firstempty;   //!
   TBranch        *b_EF_j50_a4tcem_eta13_xe50_empty;   //!
   TBranch        *b_EF_j50_a4tcem_eta13_xe50_firstempty;   //!
   TBranch        *b_EF_j50_a4tcem_eta25_xe50_empty;   //!
   TBranch        *b_EF_j50_a4tcem_eta25_xe50_firstempty;   //!
   TBranch        *b_EF_j80_a4tchad_xe100_tclcw_loose;   //!
   TBranch        *b_EF_j80_a4tchad_xe100_tclcw_veryloose;   //!
   TBranch        *b_EF_j80_a4tchad_xe70_tclcw_dphi2j45xe10;   //!
   TBranch        *b_EF_j80_a4tchad_xe85_tclcw_dphi2j45xe10;   //!
   TBranch        *b_EF_mu10;   //!
   TBranch        *b_EF_mu10_Jpsimumu;   //!
   TBranch        *b_EF_mu10_MSonly;   //!
   TBranch        *b_EF_mu10_Upsimumu_tight_FS;   //!
   TBranch        *b_EF_mu10i_g10_medium;   //!
   TBranch        *b_EF_mu10i_g10_medium_TauMass;   //!
   TBranch        *b_EF_mu10i_loose_g12Tvh_medium;   //!
   TBranch        *b_EF_mu10i_loose_g12Tvh_medium_TauMass;   //!
   TBranch        *b_EF_mu11_empty_NoAlg;   //!
   TBranch        *b_EF_mu13;   //!
   TBranch        *b_EF_mu15;   //!
   TBranch        *b_EF_mu18;   //!
   TBranch        *b_EF_mu18_2g10_loose;   //!
   TBranch        *b_EF_mu18_2g10_medium;   //!
   TBranch        *b_EF_mu18_IDTrkNoCut_tight;   //!
   TBranch        *b_EF_mu18_medium;   //!
   TBranch        *b_EF_mu18_tight;   //!
   TBranch        *b_EF_mu18_tight_2mu4_EFFS;   //!
   TBranch        *b_EF_mu18_tight_e7_medium1;   //!
   TBranch        *b_EF_mu18_tight_mu8_EFFS;   //!
   TBranch        *b_EF_mu18i4_tight;   //!
   TBranch        *b_EF_mu20i_tight_g5_loose_TauMass;   //!
   TBranch        *b_EF_mu20i_tight_g5_medium;   //!
   TBranch        *b_EF_mu20i_tight_g5_medium_TauMass;   //!
   TBranch        *b_EF_mu20it_tight;   //!
   TBranch        *b_EF_mu22_IDTrkNoCut_tight;   //!
   TBranch        *b_EF_mu24_g20vh_loose;   //!
   TBranch        *b_EF_mu24_g20vh_medium;   //!
   TBranch        *b_EF_mu24_j65_a4tchad_EFxe40_tclcw;   //!
   TBranch        *b_EF_mu24_j65_a4tchad_EFxe60_tclcw;   //!
   TBranch        *b_EF_mu24_medium;   //!
   TBranch        *b_EF_mu24_muCombTag_NoEF_tight;   //!
   TBranch        *b_EF_mu24_tight;   //!
   TBranch        *b_EF_mu24_tight_3j35_a4tchad;   //!
   TBranch        *b_EF_mu24_tight_EFxe40;   //!
   TBranch        *b_EF_mu24_tight_L2StarB;   //!
   TBranch        *b_EF_mu24_tight_L2StarC;   //!
   TBranch        *b_EF_mu24_tight_MG;   //!
   TBranch        *b_EF_mu24_tight_MuonEF;   //!
   TBranch        *b_EF_mu24_tight_b35_mediumEF_j35_a4tchad;   //!
   TBranch        *b_EF_mu24_tight_mu6_EFFS;   //!
   TBranch        *b_EF_mu24i_tight;   //!
   TBranch        *b_EF_mu24i_tight_MG;   //!
   TBranch        *b_EF_mu24i_tight_MuonEF;   //!
   TBranch        *b_EF_mu24i_tight_l2muonSA;   //!
   TBranch        *b_EF_mu36_tight;   //!
   TBranch        *b_EF_mu40_MSonly_barrel_tight;   //!
   TBranch        *b_EF_mu40_muCombTag_NoEF;   //!
   TBranch        *b_EF_mu40_slow_outOfTime_tight;   //!
   TBranch        *b_EF_mu40_slow_tight;   //!
   TBranch        *b_EF_mu40_tight;   //!
   TBranch        *b_EF_mu4T;   //!
   TBranch        *b_EF_mu4T_cosmic;   //!
   TBranch        *b_EF_mu4T_j65_a4tchad_xe60_tclcw_loose;   //!
   TBranch        *b_EF_mu4T_j65_a4tchad_xe70_tclcw_veryloose;   //!
   TBranch        *b_EF_mu4Ti_g20Tvh_medium;   //!
   TBranch        *b_EF_mu4Ti_g20Tvh_medium_TauMass;   //!
   TBranch        *b_EF_mu4Tmu6_Bmumu;   //!
   TBranch        *b_EF_mu4Tmu6_Bmumu_Barrel;   //!
   TBranch        *b_EF_mu4Tmu6_Bmumux;   //!
   TBranch        *b_EF_mu4Tmu6_Bmumux_Barrel;   //!
   TBranch        *b_EF_mu4Tmu6_DiMu;   //!
   TBranch        *b_EF_mu4Tmu6_DiMu_Barrel;   //!
   TBranch        *b_EF_mu4Tmu6_DiMu_noVtx_noOS;   //!
   TBranch        *b_EF_mu4Tmu6_Jpsimumu;   //!
   TBranch        *b_EF_mu4Tmu6_Jpsimumu_Barrel;   //!
   TBranch        *b_EF_mu4Tmu6_Jpsimumu_IDTrkNoCut;   //!
   TBranch        *b_EF_mu4Tmu6_Upsimumu;   //!
   TBranch        *b_EF_mu4Tmu6_Upsimumu_Barrel;   //!
   TBranch        *b_EF_mu4_L1MU11_MSonly_cosmic;   //!
   TBranch        *b_EF_mu4_L1MU11_cosmic;   //!
   TBranch        *b_EF_mu4_empty_NoAlg;   //!
   TBranch        *b_EF_mu4_firstempty_NoAlg;   //!
   TBranch        *b_EF_mu4_unpaired_iso_NoAlg;   //!
   TBranch        *b_EF_mu50_MSonly_barrel_tight;   //!
   TBranch        *b_EF_mu6;   //!
   TBranch        *b_EF_mu60_slow_outOfTime_tight1;   //!
   TBranch        *b_EF_mu60_slow_tight1;   //!
   TBranch        *b_EF_mu6_Jpsimumu_tight;   //!
   TBranch        *b_EF_mu6_MSonly;   //!
   TBranch        *b_EF_mu6_Trk_Jpsi_loose;   //!
   TBranch        *b_EF_mu8;   //!
   TBranch        *b_EF_mu8_4j45_a4tchad_L2FS;   //!
   TBranch        *b_EF_tau29T_medium1_xe40_tight;   //!
   TBranch        *b_EF_tau29T_medium1_xe45_tight;   //!
   TBranch        *b_EF_tau29Ti_medium1_llh_xe40_tight;   //!
   TBranch        *b_EF_tau29Ti_medium1_llh_xe45_tight;   //!
   TBranch        *b_EF_tau29Ti_medium1_xe40_tight;   //!
   TBranch        *b_EF_tau29Ti_medium1_xe45_tight;   //!
   TBranch        *b_EF_tau29Ti_medium1_xe55_tclcw;   //!
   TBranch        *b_EF_tau29Ti_medium1_xe55_tclcw_tight;   //!
   TBranch        *b_EF_tau38T_medium1_xe40_tight;   //!
   TBranch        *b_EF_tau38T_medium1_xe45_tight;   //!
   TBranch        *b_EF_tau38T_medium1_xe55_tclcw_tight;   //!
   TBranch        *b_EF_xe100;   //!
   TBranch        *b_EF_xe100T_tclcw;   //!
   TBranch        *b_EF_xe100T_tclcw_loose;   //!
   TBranch        *b_EF_xe100_tclcw;   //!
   TBranch        *b_EF_xe100_tclcw_loose;   //!
   TBranch        *b_EF_xe100_tclcw_verytight;   //!
   TBranch        *b_EF_xe100_tight;   //!
   TBranch        *b_EF_xe110;   //!
   TBranch        *b_EF_xe30;   //!
   TBranch        *b_EF_xe50;   //!
   TBranch        *b_EF_xe55_LArNoiseBurst;   //!
   TBranch        *b_EF_xe60;   //!
   TBranch        *b_EF_xe60T;   //!
   TBranch        *b_EF_xe70;   //!
   TBranch        *b_EF_xe75_tclcw;   //!
   TBranch        *b_EF_xe80;   //!
   TBranch        *b_EF_xe80T;   //!
   TBranch        *b_EF_xe80T_loose;   //!
   TBranch        *b_EF_xe80T_tclcw;   //!
   TBranch        *b_EF_xe80T_tclcw_loose;   //!
   TBranch        *b_EF_xe80_tclcw;   //!
   TBranch        *b_EF_xe80_tclcw_tight;   //!
   TBranch        *b_EF_xe80_tclcw_verytight;   //!
   TBranch        *b_EF_xe80_tight;   //!
   TBranch        *b_EF_xe90;   //!
   TBranch        *b_EF_xe90_tclcw;   //!
   TBranch        *b_EF_xe90_tclcw_tight;   //!
   TBranch        *b_EF_xe90_tclcw_verytight;   //!
   TBranch        *b_EF_xe90_tight;   //!
   TBranch        *b_L1_2EM10VH;   //!
   TBranch        *b_L1_2EM12;   //!
   TBranch        *b_L1_2EM12_EM16V;   //!
   TBranch        *b_L1_2EM3;   //!
   TBranch        *b_L1_2EM3_EM12;   //!
   TBranch        *b_L1_2EM3_EM6;   //!
   TBranch        *b_L1_2EM6;   //!
   TBranch        *b_L1_2EM6_EM16VH;   //!
   TBranch        *b_L1_2EM6_MU6;   //!
   TBranch        *b_L1_2J20_XE20;   //!
   TBranch        *b_L1_2J30_XE20;   //!
   TBranch        *b_L1_2MU10;   //!
   TBranch        *b_L1_2MU4;   //!
   TBranch        *b_L1_2MU4_2EM3;   //!
   TBranch        *b_L1_2MU4_BARREL;   //!
   TBranch        *b_L1_2MU4_BARRELONLY;   //!
   TBranch        *b_L1_2MU4_EM3;   //!
   TBranch        *b_L1_2MU4_EMPTY;   //!
   TBranch        *b_L1_2MU4_FIRSTEMPTY;   //!
   TBranch        *b_L1_2MU4_MU6;   //!
   TBranch        *b_L1_2MU4_MU6_BARREL;   //!
   TBranch        *b_L1_2MU4_XE30;   //!
   TBranch        *b_L1_2MU4_XE40;   //!
   TBranch        *b_L1_2MU6;   //!
   TBranch        *b_L1_2MU6_UNPAIRED_ISO;   //!
   TBranch        *b_L1_2MU6_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_EM10VH;   //!
   TBranch        *b_L1_EM10VH_MU6;   //!
   TBranch        *b_L1_EM10VH_XE20;   //!
   TBranch        *b_L1_EM10VH_XE30;   //!
   TBranch        *b_L1_EM10VH_XE35;   //!
   TBranch        *b_L1_EM12;   //!
   TBranch        *b_L1_EM12_3J10;   //!
   TBranch        *b_L1_EM12_4J10;   //!
   TBranch        *b_L1_EM12_XE20;   //!
   TBranch        *b_L1_EM12_XS30;   //!
   TBranch        *b_L1_EM12_XS45;   //!
   TBranch        *b_L1_EM14VH;   //!
   TBranch        *b_L1_EM16V;   //!
   TBranch        *b_L1_EM16VH;   //!
   TBranch        *b_L1_EM16VH_MU4;   //!
   TBranch        *b_L1_EM16V_XE20;   //!
   TBranch        *b_L1_EM16V_XS45;   //!
   TBranch        *b_L1_EM18VH;   //!
   TBranch        *b_L1_EM3;   //!
   TBranch        *b_L1_EM30;   //!
   TBranch        *b_L1_EM30_BGRP7;   //!
   TBranch        *b_L1_EM3_EMPTY;   //!
   TBranch        *b_L1_EM3_FIRSTEMPTY;   //!
   TBranch        *b_L1_EM3_MU6;   //!
   TBranch        *b_L1_EM3_UNPAIRED_ISO;   //!
   TBranch        *b_L1_EM3_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_EM6;   //!
   TBranch        *b_L1_EM6_2MU6;   //!
   TBranch        *b_L1_EM6_EMPTY;   //!
   TBranch        *b_L1_EM6_MU10;   //!
   TBranch        *b_L1_EM6_MU6;   //!
   TBranch        *b_L1_EM6_XS45;   //!
   TBranch        *b_L1_J30_XE35;   //!
   TBranch        *b_L1_J30_XE40;   //!
   TBranch        *b_L1_J30_XE50;   //!
   TBranch        *b_L1_J50_XE30;   //!
   TBranch        *b_L1_J50_XE35;   //!
   TBranch        *b_L1_J50_XE40;   //!
   TBranch        *b_L1_MU10;   //!
   TBranch        *b_L1_MU10_EMPTY;   //!
   TBranch        *b_L1_MU10_FIRSTEMPTY;   //!
   TBranch        *b_L1_MU10_J20;   //!
   TBranch        *b_L1_MU10_UNPAIRED_ISO;   //!
   TBranch        *b_L1_MU10_XE20;   //!
   TBranch        *b_L1_MU10_XE25;   //!
   TBranch        *b_L1_MU11;   //!
   TBranch        *b_L1_MU11_EMPTY;   //!
   TBranch        *b_L1_MU15;   //!
   TBranch        *b_L1_MU20;   //!
   TBranch        *b_L1_MU20_FIRSTEMPTY;   //!
   TBranch        *b_L1_MU4;   //!
   TBranch        *b_L1_MU4_EMPTY;   //!
   TBranch        *b_L1_MU4_FIRSTEMPTY;   //!
   TBranch        *b_L1_MU4_J10;   //!
   TBranch        *b_L1_MU4_J15;   //!
   TBranch        *b_L1_MU4_J15_EMPTY;   //!
   TBranch        *b_L1_MU4_J15_UNPAIRED_ISO;   //!
   TBranch        *b_L1_MU4_J20_XE20;   //!
   TBranch        *b_L1_MU4_J20_XE35;   //!
   TBranch        *b_L1_MU4_J30;   //!
   TBranch        *b_L1_MU4_J50;   //!
   TBranch        *b_L1_MU4_J75;   //!
   TBranch        *b_L1_MU4_UNPAIRED_ISO;   //!
   TBranch        *b_L1_MU4_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_MU6;   //!
   TBranch        *b_L1_MU6_2J20;   //!
   TBranch        *b_L1_MU6_FIRSTEMPTY;   //!
   TBranch        *b_L1_MU6_J15;   //!
   TBranch        *b_L1_MUB;   //!
   TBranch        *b_L1_MUE;   //!
   TBranch        *b_L1_TAU11_XE20;   //!
   TBranch        *b_L1_TAU15I_XE35;   //!
   TBranch        *b_L1_TAU15I_XE40;   //!
   TBranch        *b_L1_TAU15_XE25_3J10;   //!
   TBranch        *b_L1_TAU15_XE25_3J10_J30;   //!
   TBranch        *b_L1_TAU15_XE25_3J15;   //!
   TBranch        *b_L1_TAU15_XE35;   //!
   TBranch        *b_L1_TAU15_XE40;   //!
   TBranch        *b_L1_TAU20_XE35;   //!
   TBranch        *b_L1_TAU20_XE40;   //!
   TBranch        *b_L1_XE20;   //!
   TBranch        *b_L1_XE25;   //!
   TBranch        *b_L1_XE30;   //!
   TBranch        *b_L1_XE35;   //!
   TBranch        *b_L1_XE40;   //!
   TBranch        *b_L1_XE40_BGRP7;   //!
   TBranch        *b_L1_XE50;   //!
   TBranch        *b_L1_XE50_BGRP7;   //!
   TBranch        *b_L1_XE60;   //!
   TBranch        *b_L1_XE70;   //!
   TBranch        *b_L2_2e12Tvh_loose1;   //!
   TBranch        *b_L2_2e5_tight1_Jpsi;   //!
   TBranch        *b_L2_2e7T_loose1_mu6;   //!
   TBranch        *b_L2_2e7T_medium1_mu6;   //!
   TBranch        *b_L2_2mu10;   //!
   TBranch        *b_L2_2mu10_MSonly_g10_loose;   //!
   TBranch        *b_L2_2mu13;   //!
   TBranch        *b_L2_2mu13_Zmumu_IDTrkNoCut;   //!
   TBranch        *b_L2_2mu13_l2muonSA;   //!
   TBranch        *b_L2_2mu15;   //!
   TBranch        *b_L2_2mu4T;   //!
   TBranch        *b_L2_2mu4T_2e5_tight1;   //!
   TBranch        *b_L2_2mu4T_Bmumu;   //!
   TBranch        *b_L2_2mu4T_Bmumu_Barrel;   //!
   TBranch        *b_L2_2mu4T_Bmumu_BarrelOnly;   //!
   TBranch        *b_L2_2mu4T_Bmumux;   //!
   TBranch        *b_L2_2mu4T_Bmumux_Barrel;   //!
   TBranch        *b_L2_2mu4T_Bmumux_BarrelOnly;   //!
   TBranch        *b_L2_2mu4T_DiMu;   //!
   TBranch        *b_L2_2mu4T_DiMu_Barrel;   //!
   TBranch        *b_L2_2mu4T_DiMu_BarrelOnly;   //!
   TBranch        *b_L2_2mu4T_DiMu_L2StarB;   //!
   TBranch        *b_L2_2mu4T_DiMu_L2StarC;   //!
   TBranch        *b_L2_2mu4T_DiMu_e5_tight1;   //!
   TBranch        *b_L2_2mu4T_DiMu_l2muonSA;   //!
   TBranch        *b_L2_2mu4T_DiMu_noVtx_noOS;   //!
   TBranch        *b_L2_2mu4T_Jpsimumu;   //!
   TBranch        *b_L2_2mu4T_Jpsimumu_Barrel;   //!
   TBranch        *b_L2_2mu4T_Jpsimumu_BarrelOnly;   //!
   TBranch        *b_L2_2mu4T_Jpsimumu_IDTrkNoCut;   //!
   TBranch        *b_L2_2mu4T_Upsimumu;   //!
   TBranch        *b_L2_2mu4T_Upsimumu_Barrel;   //!
   TBranch        *b_L2_2mu4T_Upsimumu_BarrelOnly;   //!
   TBranch        *b_L2_2mu4T_xe45;   //!
   TBranch        *b_L2_2mu4T_xe60;   //!
   TBranch        *b_L2_2mu6;   //!
   TBranch        *b_L2_2mu6_Bmumu;   //!
   TBranch        *b_L2_2mu6_Bmumux;   //!
   TBranch        *b_L2_2mu6_DiMu;   //!
   TBranch        *b_L2_2mu6_DiMu_DY20;   //!
   TBranch        *b_L2_2mu6_DiMu_DY25;   //!
   TBranch        *b_L2_2mu6_DiMu_noVtx_noOS;   //!
   TBranch        *b_L2_2mu6_Jpsimumu;   //!
   TBranch        *b_L2_2mu6_Upsimumu;   //!
   TBranch        *b_L2_2mu6i_DiMu_DY;   //!
   TBranch        *b_L2_2mu6i_DiMu_DY_2j25_a4tchad;   //!
   TBranch        *b_L2_2mu6i_DiMu_DY_noVtx_noOS;   //!
   TBranch        *b_L2_2mu6i_DiMu_DY_noVtx_noOS_2j25_a4tchad;   //!
   TBranch        *b_L2_2mu8_EFxe30;   //!
   TBranch        *b_L2_e11_etcut;   //!
   TBranch        *b_L2_e12Tvh_loose1;   //!
   TBranch        *b_L2_e12Tvh_medium1;   //!
   TBranch        *b_L2_e12Tvh_medium1_mu6_topo_medium;   //!
   TBranch        *b_L2_e12Tvh_medium1_mu8;   //!
   TBranch        *b_L2_e13_etcutTrk_xs45;   //!
   TBranch        *b_L2_e14_tight1_e4_etcut_Jpsi;   //!
   TBranch        *b_L2_e18_loose1;   //!
   TBranch        *b_L2_e18_loose1_g25_medium;   //!
   TBranch        *b_L2_e18_medium1;   //!
   TBranch        *b_L2_e18_medium1_g25_loose;   //!
   TBranch        *b_L2_e18vh_medium1_2e7T_medium1;   //!
   TBranch        *b_L2_e20_etcutTrk_xe25;   //!
   TBranch        *b_L2_e20_etcutTrk_xs45;   //!
   TBranch        *b_L2_e20vhT_medium1_g6T_etcut_Upsi;   //!
   TBranch        *b_L2_e20vhT_tight1_g6T_etcut_Upsi;   //!
   TBranch        *b_L2_e22vh_loose;   //!
   TBranch        *b_L2_e22vh_loose0;   //!
   TBranch        *b_L2_e22vh_loose1;   //!
   TBranch        *b_L2_e22vh_medium1;   //!
   TBranch        *b_L2_e22vh_medium1_IDTrkNoCut;   //!
   TBranch        *b_L2_e22vhi_medium1;   //!
   TBranch        *b_L2_e24vh_loose;   //!
   TBranch        *b_L2_e24vh_loose0;   //!
   TBranch        *b_L2_e24vh_loose1;   //!
   TBranch        *b_L2_e24vh_medium1;   //!
   TBranch        *b_L2_e24vh_medium1_EFxe30;   //!
   TBranch        *b_L2_e24vh_medium1_EFxe35;   //!
   TBranch        *b_L2_e24vh_medium1_EFxe40;   //!
   TBranch        *b_L2_e24vh_medium1_IDTrkNoCut;   //!
   TBranch        *b_L2_e24vh_medium1_IdScan;   //!
   TBranch        *b_L2_e24vh_medium1_L2StarB;   //!
   TBranch        *b_L2_e24vh_medium1_L2StarC;   //!
   TBranch        *b_L2_e24vh_medium1_SiTrk;   //!
   TBranch        *b_L2_e24vh_medium1_TRT;   //!
   TBranch        *b_L2_e24vh_medium1_e7_medium1;   //!
   TBranch        *b_L2_e24vh_tight1_e15_NoCut_Zee;   //!
   TBranch        *b_L2_e24vhi_loose1_mu8;   //!
   TBranch        *b_L2_e24vhi_medium1;   //!
   TBranch        *b_L2_e45_loose1;   //!
   TBranch        *b_L2_e45_medium1;   //!
   TBranch        *b_L2_e5_tight1;   //!
   TBranch        *b_L2_e5_tight1_e14_etcut_Jpsi;   //!
   TBranch        *b_L2_e5_tight1_e4_etcut_Jpsi;   //!
   TBranch        *b_L2_e5_tight1_e4_etcut_Jpsi_L2StarB;   //!
   TBranch        *b_L2_e5_tight1_e4_etcut_Jpsi_L2StarC;   //!
   TBranch        *b_L2_e5_tight1_e5_NoCut;   //!
   TBranch        *b_L2_e5_tight1_e9_etcut_Jpsi;   //!
   TBranch        *b_L2_e60_loose1;   //!
   TBranch        *b_L2_e60_medium1;   //!
   TBranch        *b_L2_e7T_loose1;   //!
   TBranch        *b_L2_e7T_loose1_2mu6;   //!
   TBranch        *b_L2_e7T_medium1;   //!
   TBranch        *b_L2_e7T_medium1_2mu6;   //!
   TBranch        *b_L2_e9_tight1_e4_etcut_Jpsi;   //!
   TBranch        *b_L2_eb_physics;   //!
   TBranch        *b_L2_eb_physics_empty;   //!
   TBranch        *b_L2_eb_physics_firstempty;   //!
   TBranch        *b_L2_eb_physics_noL1PS;   //!
   TBranch        *b_L2_eb_physics_unpaired_iso;   //!
   TBranch        *b_L2_eb_physics_unpaired_noniso;   //!
   TBranch        *b_L2_eb_random;   //!
   TBranch        *b_L2_eb_random_empty;   //!
   TBranch        *b_L2_eb_random_firstempty;   //!
   TBranch        *b_L2_eb_random_unpaired_iso;   //!
   TBranch        *b_L2_em3_empty_larcalib;   //!
   TBranch        *b_L2_em6_empty_larcalib;   //!
   TBranch        *b_L2_j105_c4cchad_xe40;   //!
   TBranch        *b_L2_j105_c4cchad_xe45;   //!
   TBranch        *b_L2_j30_a4tcem_eta13_xe30_empty;   //!
   TBranch        *b_L2_j30_a4tcem_eta13_xe30_firstempty;   //!
   TBranch        *b_L2_j50_a4tcem_eta13_xe50_empty;   //!
   TBranch        *b_L2_j50_a4tcem_eta13_xe50_firstempty;   //!
   TBranch        *b_L2_j50_a4tcem_eta25_xe50_empty;   //!
   TBranch        *b_L2_j50_a4tcem_eta25_xe50_firstempty;   //!
   TBranch        *b_L2_j75_c4cchad_xe45;   //!
   TBranch        *b_L2_j75_c4cchad_xe55;   //!
   TBranch        *b_L2_mu10;   //!
   TBranch        *b_L2_mu10_Jpsimumu;   //!
   TBranch        *b_L2_mu10_MSonly;   //!
   TBranch        *b_L2_mu10_Upsimumu_tight_FS;   //!
   TBranch        *b_L2_mu10i_g10_medium;   //!
   TBranch        *b_L2_mu10i_g10_medium_TauMass;   //!
   TBranch        *b_L2_mu10i_loose_g12Tvh_medium;   //!
   TBranch        *b_L2_mu10i_loose_g12Tvh_medium_TauMass;   //!
   TBranch        *b_L2_mu11_empty_NoAlg;   //!
   TBranch        *b_L2_mu13;   //!
   TBranch        *b_L2_mu15;   //!
   TBranch        *b_L2_mu15_l2cal;   //!
   TBranch        *b_L2_mu18;   //!
   TBranch        *b_L2_mu18_2g10_loose;   //!
   TBranch        *b_L2_mu18_2g10_medium;   //!
   TBranch        *b_L2_mu18_IDTrkNoCut_tight;   //!
   TBranch        *b_L2_mu18_medium;   //!
   TBranch        *b_L2_mu18_tight;   //!
   TBranch        *b_L2_mu18_tight_e7_medium1;   //!
   TBranch        *b_L2_mu18i4_tight;   //!
   TBranch        *b_L2_mu20i_tight_g5_loose_TauMass;   //!
   TBranch        *b_L2_mu20i_tight_g5_medium;   //!
   TBranch        *b_L2_mu20i_tight_g5_medium_TauMass;   //!
   TBranch        *b_L2_mu20it_tight;   //!
   TBranch        *b_L2_mu22_IDTrkNoCut_tight;   //!
   TBranch        *b_L2_mu24_g20vh_loose;   //!
   TBranch        *b_L2_mu24_g20vh_medium;   //!
   TBranch        *b_L2_mu24_j60_c4cchad_EFxe40;   //!
   TBranch        *b_L2_mu24_j60_c4cchad_EFxe60;   //!
   TBranch        *b_L2_mu24_medium;   //!
   TBranch        *b_L2_mu24_muCombTag_NoEF_tight;   //!
   TBranch        *b_L2_mu24_tight;   //!
   TBranch        *b_L2_mu24_tight_3j35_a4tchad;   //!
   TBranch        *b_L2_mu24_tight_EFxe40;   //!
   TBranch        *b_L2_mu24_tight_L2StarB;   //!
   TBranch        *b_L2_mu24_tight_L2StarC;   //!
   TBranch        *b_L2_mu24_tight_l2muonSA;   //!
   TBranch        *b_L2_mu36_tight;   //!
   TBranch        *b_L2_mu40_MSonly_barrel_tight;   //!
   TBranch        *b_L2_mu40_muCombTag_NoEF;   //!
   TBranch        *b_L2_mu40_slow_outOfTime_tight;   //!
   TBranch        *b_L2_mu40_slow_tight;   //!
   TBranch        *b_L2_mu40_tight;   //!
   TBranch        *b_L2_mu4T;   //!
   TBranch        *b_L2_mu4T_cosmic;   //!
   TBranch        *b_L2_mu4T_j60_c4cchad_xe40;   //!
   TBranch        *b_L2_mu4Ti_g20Tvh_medium;   //!
   TBranch        *b_L2_mu4Ti_g20Tvh_medium_TauMass;   //!
   TBranch        *b_L2_mu4Tmu6_Bmumu;   //!
   TBranch        *b_L2_mu4Tmu6_Bmumu_Barrel;   //!
   TBranch        *b_L2_mu4Tmu6_Bmumux;   //!
   TBranch        *b_L2_mu4Tmu6_Bmumux_Barrel;   //!
   TBranch        *b_L2_mu4Tmu6_DiMu;   //!
   TBranch        *b_L2_mu4Tmu6_DiMu_Barrel;   //!
   TBranch        *b_L2_mu4Tmu6_DiMu_noVtx_noOS;   //!
   TBranch        *b_L2_mu4Tmu6_Jpsimumu;   //!
   TBranch        *b_L2_mu4Tmu6_Jpsimumu_Barrel;   //!
   TBranch        *b_L2_mu4Tmu6_Jpsimumu_IDTrkNoCut;   //!
   TBranch        *b_L2_mu4Tmu6_Upsimumu;   //!
   TBranch        *b_L2_mu4Tmu6_Upsimumu_Barrel;   //!
   TBranch        *b_L2_mu4_L1MU11_MSonly_cosmic;   //!
   TBranch        *b_L2_mu4_L1MU11_cosmic;   //!
   TBranch        *b_L2_mu4_empty_NoAlg;   //!
   TBranch        *b_L2_mu4_firstempty_NoAlg;   //!
   TBranch        *b_L2_mu4_l2cal_empty;   //!
   TBranch        *b_L2_mu4_unpaired_iso_NoAlg;   //!
   TBranch        *b_L2_mu50_MSonly_barrel_tight;   //!
   TBranch        *b_L2_mu6;   //!
   TBranch        *b_L2_mu60_slow_outOfTime_tight1;   //!
   TBranch        *b_L2_mu60_slow_tight1;   //!
   TBranch        *b_L2_mu6_Jpsimumu_tight;   //!
   TBranch        *b_L2_mu6_MSonly;   //!
   TBranch        *b_L2_mu6_Trk_Jpsi_loose;   //!
   TBranch        *b_L2_mu8;   //!
   TBranch        *b_L2_mu8_4j15_a4TTem;   //!
   TBranch        *b_L2_tau29T_medium1_xe35_tight;   //!
   TBranch        *b_L2_tau29T_medium1_xe40_tight;   //!
   TBranch        *b_L2_tau29Ti_medium1_llh_xe35_tight;   //!
   TBranch        *b_L2_tau29Ti_medium1_llh_xe40_tight;   //!
   TBranch        *b_L2_tau29Ti_medium1_xe35_tight;   //!
   TBranch        *b_L2_tau29Ti_medium1_xe40;   //!
   TBranch        *b_L2_tau29Ti_medium1_xe40_tight;   //!
   TBranch        *b_L2_tau38T_medium1_xe35_tight;   //!
   TBranch        *b_L2_tau38T_medium1_xe40_tight;   //!
   TBranch        *b_L2_xe25;   //!
   TBranch        *b_L2_xe35;   //!
   TBranch        *b_L2_xe45;   //!
   TBranch        *b_L2_xe45T;   //!
   TBranch        *b_L2_xe55;   //!
   TBranch        *b_L2_xe55T;   //!
   TBranch        *b_L2_xe55_LArNoiseBurst;   //!
   TBranch        *b_L2_xe65;   //!
   TBranch        *b_L2_xe75;   //!
   TBranch        *b_L2_xe90;   //!
   TBranch        *b_L2_xe90_tight;   //!
   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_timestamp;   //!
   TBranch        *b_timestamp_ns;   //!
   TBranch        *b_lbn;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_detmask0;   //!
   TBranch        *b_detmask1;   //!
   TBranch        *b_actualIntPerXing;   //!
   TBranch        *b_averageIntPerXing;   //!
   TBranch        *b_pixelFlags;   //!
   TBranch        *b_sctFlags;   //!
   TBranch        *b_trtFlags;   //!
   TBranch        *b_larFlags;   //!
   TBranch        *b_tileFlags;   //!
   TBranch        *b_muonFlags;   //!
   TBranch        *b_fwdFlags;   //!
   TBranch        *b_coreFlags;   //!
   TBranch        *b_pixelError;   //!
   TBranch        *b_sctError;   //!
   TBranch        *b_trtError;   //!
   TBranch        *b_larError;   //!
   TBranch        *b_tileError;   //!
   TBranch        *b_muonError;   //!
   TBranch        *b_fwdError;   //!
   TBranch        *b_coreError;   //!
   TBranch        *b_streamDecision_Egamma;   //!
   TBranch        *b_streamDecision_Muons;   //!
   TBranch        *b_streamDecision_JetTauEtmiss;   //!
   TBranch        *b_isSimulation;   //!
   TBranch        *b_isCalibration;   //!
   TBranch        *b_isTestBeam;   //!
   TBranch        *b_StreamTagNames;   //!
   TBranch        *b_StreamTagTypes;   //!
   TBranch        *b_SkimDecision_name;   //!
   TBranch        *b_SkimDecision_accepted;   //!
   TBranch        *b_el_n;   //!
   TBranch        *b_el_E;   //!
   TBranch        *b_el_Et;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_m;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_px;   //!
   TBranch        *b_el_py;   //!
   TBranch        *b_el_pz;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_author;   //!
   TBranch        *b_el_isEM;   //!
   TBranch        *b_el_isEMLoose;   //!
   TBranch        *b_el_isEMMedium;   //!
   TBranch        *b_el_isEMTight;   //!
   TBranch        *b_el_OQ;   //!
   TBranch        *b_el_convFlag;   //!
   TBranch        *b_el_isConv;   //!
   TBranch        *b_el_nConv;   //!
   TBranch        *b_el_nSingleTrackConv;   //!
   TBranch        *b_el_nDoubleTrackConv;   //!
   TBranch        *b_el_mediumWithoutTrack;   //!
   TBranch        *b_el_mediumIsoWithoutTrack;   //!
   TBranch        *b_el_tightWithoutTrack;   //!
   TBranch        *b_el_tightIsoWithoutTrack;   //!
   TBranch        *b_el_loose;   //!
   TBranch        *b_el_looseIso;   //!
   TBranch        *b_el_medium;   //!
   TBranch        *b_el_mediumIso;   //!
   TBranch        *b_el_tight;   //!
   TBranch        *b_el_tightIso;   //!
   TBranch        *b_el_loosePP;   //!
   TBranch        *b_el_loosePPIso;   //!
   TBranch        *b_el_mediumPP;   //!
   TBranch        *b_el_mediumPPIso;   //!
   TBranch        *b_el_tightPP;   //!
   TBranch        *b_el_tightPPIso;   //!
   TBranch        *b_el_goodOQ;   //!
   TBranch        *b_el_Ethad;   //!
   TBranch        *b_el_Ethad1;   //!
   TBranch        *b_el_f1;   //!
   TBranch        *b_el_f1core;   //!
   TBranch        *b_el_Emins1;   //!
   TBranch        *b_el_fside;   //!
   TBranch        *b_el_Emax2;   //!
   TBranch        *b_el_ws3;   //!
   TBranch        *b_el_wstot;   //!
   TBranch        *b_el_emaxs1;   //!
   TBranch        *b_el_deltaEs;   //!
   TBranch        *b_el_E233;   //!
   TBranch        *b_el_E237;   //!
   TBranch        *b_el_E277;   //!
   TBranch        *b_el_weta2;   //!
   TBranch        *b_el_f3;   //!
   TBranch        *b_el_f3core;   //!
   TBranch        *b_el_rphiallcalo;   //!
   TBranch        *b_el_Etcone45;   //!
   TBranch        *b_el_Etcone15;   //!
   TBranch        *b_el_Etcone20;   //!
   TBranch        *b_el_Etcone25;   //!
   TBranch        *b_el_Etcone30;   //!
   TBranch        *b_el_Etcone35;   //!
   TBranch        *b_el_Etcone40;   //!
   TBranch        *b_el_ptcone20;   //!
   TBranch        *b_el_ptcone30;   //!
   TBranch        *b_el_ptcone40;   //!
   TBranch        *b_el_nucone20;   //!
   TBranch        *b_el_nucone30;   //!
   TBranch        *b_el_nucone40;   //!
   TBranch        *b_el_Etcone15_pt_corrected;   //!
   TBranch        *b_el_Etcone20_pt_corrected;   //!
   TBranch        *b_el_Etcone25_pt_corrected;   //!
   TBranch        *b_el_Etcone30_pt_corrected;   //!
   TBranch        *b_el_Etcone35_pt_corrected;   //!
   TBranch        *b_el_Etcone40_pt_corrected;   //!
   TBranch        *b_el_convanglematch;   //!
   TBranch        *b_el_convtrackmatch;   //!
   TBranch        *b_el_hasconv;   //!
   TBranch        *b_el_convvtxx;   //!
   TBranch        *b_el_convvtxy;   //!
   TBranch        *b_el_convvtxz;   //!
   TBranch        *b_el_Rconv;   //!
   TBranch        *b_el_zconv;   //!
   TBranch        *b_el_convvtxchi2;   //!
   TBranch        *b_el_pt1conv;   //!
   TBranch        *b_el_convtrk1nBLHits;   //!
   TBranch        *b_el_convtrk1nPixHits;   //!
   TBranch        *b_el_convtrk1nSCTHits;   //!
   TBranch        *b_el_convtrk1nTRTHits;   //!
   TBranch        *b_el_pt2conv;   //!
   TBranch        *b_el_convtrk2nBLHits;   //!
   TBranch        *b_el_convtrk2nPixHits;   //!
   TBranch        *b_el_convtrk2nSCTHits;   //!
   TBranch        *b_el_convtrk2nTRTHits;   //!
   TBranch        *b_el_ptconv;   //!
   TBranch        *b_el_pzconv;   //!
   TBranch        *b_el_pos7;   //!
   TBranch        *b_el_etacorrmag;   //!
   TBranch        *b_el_deltaeta1;   //!
   TBranch        *b_el_deltaeta2;   //!
   TBranch        *b_el_deltaphi2;   //!
   TBranch        *b_el_deltaphiRescaled;   //!
   TBranch        *b_el_deltaPhiFromLast;   //!
   TBranch        *b_el_deltaPhiRot;   //!
   TBranch        *b_el_expectHitInBLayer;   //!
   TBranch        *b_el_trackd0_physics;   //!
   TBranch        *b_el_etaSampling1;   //!
   TBranch        *b_el_reta;   //!
   TBranch        *b_el_rphi;   //!
   TBranch        *b_el_topoEtcone20;   //!
   TBranch        *b_el_topoEtcone30;   //!
   TBranch        *b_el_topoEtcone40;   //!
   TBranch        *b_el_materialTraversed;   //!
   TBranch        *b_el_EtringnoisedR03sig2;   //!
   TBranch        *b_el_EtringnoisedR03sig3;   //!
   TBranch        *b_el_EtringnoisedR03sig4;   //!
   TBranch        *b_el_isolationlikelihoodjets;   //!
   TBranch        *b_el_isolationlikelihoodhqelectrons;   //!
   TBranch        *b_el_electronweight;   //!
   TBranch        *b_el_electronbgweight;   //!
   TBranch        *b_el_softeweight;   //!
   TBranch        *b_el_softebgweight;   //!
   TBranch        *b_el_neuralnet;   //!
   TBranch        *b_el_Hmatrix;   //!
   TBranch        *b_el_Hmatrix5;   //!
   TBranch        *b_el_adaboost;   //!
   TBranch        *b_el_softeneuralnet;   //!
   TBranch        *b_el_ringernn;   //!
   TBranch        *b_el_zvertex;   //!
   TBranch        *b_el_errz;   //!
   TBranch        *b_el_etap;   //!
   TBranch        *b_el_depth;   //!
   TBranch        *b_el_refittedTrack_n;   //!
   TBranch        *b_el_refittedTrack_author;   //!
   TBranch        *b_el_refittedTrack_chi2;   //!
   TBranch        *b_el_refittedTrack_hasBrem;   //!
   TBranch        *b_el_refittedTrack_bremRadius;   //!
   TBranch        *b_el_refittedTrack_bremZ;   //!
   TBranch        *b_el_refittedTrack_bremRadiusErr;   //!
   TBranch        *b_el_refittedTrack_bremZErr;   //!
   TBranch        *b_el_refittedTrack_bremFitStatus;   //!
   TBranch        *b_el_refittedTrack_qoverp;   //!
   TBranch        *b_el_refittedTrack_d0;   //!
   TBranch        *b_el_refittedTrack_z0;   //!
   TBranch        *b_el_refittedTrack_theta;   //!
   TBranch        *b_el_refittedTrack_phi;   //!
   TBranch        *b_el_refittedTrack_LMqoverp;   //!
   TBranch        *b_el_refittedTrack_covd0;   //!
   TBranch        *b_el_refittedTrack_covz0;   //!
   TBranch        *b_el_refittedTrack_covphi;   //!
   TBranch        *b_el_refittedTrack_covtheta;   //!
   TBranch        *b_el_refittedTrack_covqoverp;   //!
   TBranch        *b_el_refittedTrack_covd0z0;   //!
   TBranch        *b_el_refittedTrack_covz0phi;   //!
   TBranch        *b_el_refittedTrack_covz0theta;   //!
   TBranch        *b_el_refittedTrack_covz0qoverp;   //!
   TBranch        *b_el_refittedTrack_covd0phi;   //!
   TBranch        *b_el_refittedTrack_covd0theta;   //!
   TBranch        *b_el_refittedTrack_covd0qoverp;   //!
   TBranch        *b_el_refittedTrack_covphitheta;   //!
   TBranch        *b_el_refittedTrack_covphiqoverp;   //!
   TBranch        *b_el_refittedTrack_covthetaqoverp;   //!
   TBranch        *b_el_refittedTrack_d0_wrtBL;   //!
   TBranch        *b_el_refittedTrack_z0_wrtBL;   //!
   TBranch        *b_el_refittedTrack_phi_wrtBL;   //!
   TBranch        *b_el_refittedTrack_theta_wrtBL;   //!
   TBranch        *b_el_refittedTrack_qoverp_wrtBL;   //!
   TBranch        *b_el_refittedTrack_d0_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_z0_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_phi_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_theta_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_qoverp_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_d0_z0_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_d0_phi_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_d0_theta_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_z0_phi_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_z0_theta_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_phi_theta_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_theta_qoverp_err_wrtBL;   //!
   TBranch        *b_el_Es0;   //!
   TBranch        *b_el_etas0;   //!
   TBranch        *b_el_phis0;   //!
   TBranch        *b_el_Es1;   //!
   TBranch        *b_el_etas1;   //!
   TBranch        *b_el_phis1;   //!
   TBranch        *b_el_Es2;   //!
   TBranch        *b_el_etas2;   //!
   TBranch        *b_el_phis2;   //!
   TBranch        *b_el_Es3;   //!
   TBranch        *b_el_etas3;   //!
   TBranch        *b_el_phis3;   //!
   TBranch        *b_el_E_PreSamplerB;   //!
   TBranch        *b_el_E_EMB1;   //!
   TBranch        *b_el_E_EMB2;   //!
   TBranch        *b_el_E_EMB3;   //!
   TBranch        *b_el_E_PreSamplerE;   //!
   TBranch        *b_el_E_EME1;   //!
   TBranch        *b_el_E_EME2;   //!
   TBranch        *b_el_E_EME3;   //!
   TBranch        *b_el_E_HEC0;   //!
   TBranch        *b_el_E_HEC1;   //!
   TBranch        *b_el_E_HEC2;   //!
   TBranch        *b_el_E_HEC3;   //!
   TBranch        *b_el_E_TileBar0;   //!
   TBranch        *b_el_E_TileBar1;   //!
   TBranch        *b_el_E_TileBar2;   //!
   TBranch        *b_el_E_TileGap1;   //!
   TBranch        *b_el_E_TileGap2;   //!
   TBranch        *b_el_E_TileGap3;   //!
   TBranch        *b_el_E_TileExt0;   //!
   TBranch        *b_el_E_TileExt1;   //!
   TBranch        *b_el_E_TileExt2;   //!
   TBranch        *b_el_E_FCAL0;   //!
   TBranch        *b_el_E_FCAL1;   //!
   TBranch        *b_el_E_FCAL2;   //!
   TBranch        *b_el_cl_E;   //!
   TBranch        *b_el_cl_pt;   //!
   TBranch        *b_el_cl_eta;   //!
   TBranch        *b_el_cl_phi;   //!
   TBranch        *b_el_cl_etaCalo;   //!
   TBranch        *b_el_cl_phiCalo;   //!
   TBranch        *b_el_firstEdens;   //!
   TBranch        *b_el_cellmaxfrac;   //!
   TBranch        *b_el_longitudinal;   //!
   TBranch        *b_el_secondlambda;   //!
   TBranch        *b_el_lateral;   //!
   TBranch        *b_el_secondR;   //!
   TBranch        *b_el_centerlambda;   //!
   TBranch        *b_el_rawcl_Es0;   //!
   TBranch        *b_el_rawcl_etas0;   //!
   TBranch        *b_el_rawcl_phis0;   //!
   TBranch        *b_el_rawcl_Es1;   //!
   TBranch        *b_el_rawcl_etas1;   //!
   TBranch        *b_el_rawcl_phis1;   //!
   TBranch        *b_el_rawcl_Es2;   //!
   TBranch        *b_el_rawcl_etas2;   //!
   TBranch        *b_el_rawcl_phis2;   //!
   TBranch        *b_el_rawcl_Es3;   //!
   TBranch        *b_el_rawcl_etas3;   //!
   TBranch        *b_el_rawcl_phis3;   //!
   TBranch        *b_el_rawcl_E;   //!
   TBranch        *b_el_rawcl_pt;   //!
   TBranch        *b_el_rawcl_eta;   //!
   TBranch        *b_el_rawcl_phi;   //!
   TBranch        *b_el_trackd0;   //!
   TBranch        *b_el_trackz0;   //!
   TBranch        *b_el_trackphi;   //!
   TBranch        *b_el_tracktheta;   //!
   TBranch        *b_el_trackqoverp;   //!
   TBranch        *b_el_trackpt;   //!
   TBranch        *b_el_tracketa;   //!
   TBranch        *b_el_trackcov_d0;   //!
   TBranch        *b_el_trackcov_z0;   //!
   TBranch        *b_el_trackcov_phi;   //!
   TBranch        *b_el_trackcov_theta;   //!
   TBranch        *b_el_trackcov_qoverp;   //!
   TBranch        *b_el_trackcov_d0_z0;   //!
   TBranch        *b_el_trackcov_d0_phi;   //!
   TBranch        *b_el_trackcov_d0_theta;   //!
   TBranch        *b_el_trackcov_d0_qoverp;   //!
   TBranch        *b_el_trackcov_z0_phi;   //!
   TBranch        *b_el_trackcov_z0_theta;   //!
   TBranch        *b_el_trackcov_z0_qoverp;   //!
   TBranch        *b_el_trackcov_phi_theta;   //!
   TBranch        *b_el_trackcov_phi_qoverp;   //!
   TBranch        *b_el_trackcov_theta_qoverp;   //!
   TBranch        *b_el_trackfitchi2;   //!
   TBranch        *b_el_trackfitndof;   //!
   TBranch        *b_el_nBLHits;   //!
   TBranch        *b_el_nPixHits;   //!
   TBranch        *b_el_nSCTHits;   //!
   TBranch        *b_el_nTRTHits;   //!
   TBranch        *b_el_nTRTHighTHits;   //!
   TBranch        *b_el_nPixHoles;   //!
   TBranch        *b_el_nSCTHoles;   //!
   TBranch        *b_el_nTRTHoles;   //!
   TBranch        *b_el_nPixelDeadSensors;   //!
   TBranch        *b_el_nSCTDeadSensors;   //!
   TBranch        *b_el_nBLSharedHits;   //!
   TBranch        *b_el_nPixSharedHits;   //!
   TBranch        *b_el_nSCTSharedHits;   //!
   TBranch        *b_el_nBLayerSplitHits;   //!
   TBranch        *b_el_nPixSplitHits;   //!
   TBranch        *b_el_nBLayerOutliers;   //!
   TBranch        *b_el_nPixelOutliers;   //!
   TBranch        *b_el_nSCTOutliers;   //!
   TBranch        *b_el_nTRTOutliers;   //!
   TBranch        *b_el_nTRTHighTOutliers;   //!
   TBranch        *b_el_nContribPixelLayers;   //!
   TBranch        *b_el_nGangedPixels;   //!
   TBranch        *b_el_nGangedFlaggedFakes;   //!
   TBranch        *b_el_nPixelSpoiltHits;   //!
   TBranch        *b_el_nSCTDoubleHoles;   //!
   TBranch        *b_el_nSCTSpoiltHits;   //!
   TBranch        *b_el_expectBLayerHit;   //!
   TBranch        *b_el_nSiHits;   //!
   TBranch        *b_el_TRTHighTHitsRatio;   //!
   TBranch        *b_el_TRTHighTOutliersRatio;   //!
   TBranch        *b_el_pixeldEdx;   //!
   TBranch        *b_el_nGoodHitsPixeldEdx;   //!
   TBranch        *b_el_massPixeldEdx;   //!
   TBranch        *b_el_likelihoodsPixeldEdx;   //!
   TBranch        *b_el_eProbabilityComb;   //!
   TBranch        *b_el_eProbabilityHT;   //!
   TBranch        *b_el_eProbabilityToT;   //!
   TBranch        *b_el_eProbabilityBrem;   //!
   TBranch        *b_el_vertweight;   //!
   TBranch        *b_el_vertx;   //!
   TBranch        *b_el_verty;   //!
   TBranch        *b_el_vertz;   //!
   TBranch        *b_el_trackd0beam;   //!
   TBranch        *b_el_trackz0beam;   //!
   TBranch        *b_el_tracksigd0beam;   //!
   TBranch        *b_el_tracksigz0beam;   //!
   TBranch        *b_el_trackd0pv;   //!
   TBranch        *b_el_trackz0pv;   //!
   TBranch        *b_el_tracksigd0pv;   //!
   TBranch        *b_el_tracksigz0pv;   //!
   TBranch        *b_el_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackd0pvunbiased;   //!
   TBranch        *b_el_trackz0pvunbiased;   //!
   TBranch        *b_el_tracksigd0pvunbiased;   //!
   TBranch        *b_el_tracksigz0pvunbiased;   //!
   TBranch        *b_el_Unrefittedtrack_d0;   //!
   TBranch        *b_el_Unrefittedtrack_z0;   //!
   TBranch        *b_el_Unrefittedtrack_phi;   //!
   TBranch        *b_el_Unrefittedtrack_theta;   //!
   TBranch        *b_el_Unrefittedtrack_qoverp;   //!
   TBranch        *b_el_Unrefittedtrack_pt;   //!
   TBranch        *b_el_Unrefittedtrack_eta;   //!
   TBranch        *b_el_theta_LM;   //!
   TBranch        *b_el_qoverp_LM;   //!
   TBranch        *b_el_locX_LM;   //!
   TBranch        *b_el_locY_LM;   //!
   TBranch        *b_el_phi_LM;   //!
   TBranch        *b_el_theta_err_LM;   //!
   TBranch        *b_el_qoverp_err_LM;   //!
   TBranch        *b_el_locX_err_LM;   //!
   TBranch        *b_el_locY_err_LM;   //!
   TBranch        *b_el_phi_err_LM;   //!
   TBranch        *b_el_hastrack;   //!
   TBranch        *b_el_deltaEmax2;   //!
   TBranch        *b_el_calibHitsShowerDepth;   //!
   TBranch        *b_el_isIso;   //!
   TBranch        *b_el_mvaptcone20;   //!
   TBranch        *b_el_mvaptcone30;   //!
   TBranch        *b_el_mvaptcone40;   //!
   TBranch        *b_el_CaloPointing_eta;   //!
   TBranch        *b_el_CaloPointing_sigma_eta;   //!
   TBranch        *b_el_CaloPointing_zvertex;   //!
   TBranch        *b_el_CaloPointing_sigma_zvertex;   //!
   TBranch        *b_el_HPV_eta;   //!
   TBranch        *b_el_HPV_sigma_eta;   //!
   TBranch        *b_el_HPV_zvertex;   //!
   TBranch        *b_el_HPV_sigma_zvertex;   //!
   TBranch        *b_el_topoEtcone60;   //!
   TBranch        *b_el_ES0_real;   //!
   TBranch        *b_el_ES1_real;   //!
   TBranch        *b_el_ES2_real;   //!
   TBranch        *b_el_ES3_real;   //!
   TBranch        *b_el_EcellS0;   //!
   TBranch        *b_el_etacellS0;   //!
   TBranch        *b_el_Etcone40_ED_corrected;   //!
   TBranch        *b_el_Etcone40_corrected;   //!
   TBranch        *b_el_topoEtcone20_corrected;   //!
   TBranch        *b_el_topoEtcone30_corrected;   //!
   TBranch        *b_el_topoEtcone40_corrected;   //!
   TBranch        *b_el_ED_median;   //!
   TBranch        *b_el_ED_sigma;   //!
   TBranch        *b_el_ED_Njets;   //!
   TBranch        *b_el_jet_dr;   //!
   TBranch        *b_el_jet_E;   //!
   TBranch        *b_el_jet_pt;   //!
   TBranch        *b_el_jet_m;   //!
   TBranch        *b_el_jet_eta;   //!
   TBranch        *b_el_jet_phi;   //!
   TBranch        *b_el_jet_matched;   //!
   TBranch        *b_el_EF_dr;   //!
   TBranch        *b_el_L2_dr;   //!
   TBranch        *b_el_L1_dr;   //!
   TBranch        *b_stau_candidate_n;   //!
   TBranch        *b_stau_candidate_hasRpcHits;   //!
   TBranch        *b_stau_candidate_hasTileCells;   //!
   TBranch        *b_stau_candidate_beta;   //!
   TBranch        *b_stau_candidate_ann;   //!
   TBranch        *b_stau_candidate_mfP_px;   //!
   TBranch        *b_stau_candidate_mfP_py;   //!
   TBranch        *b_stau_candidate_mfP_pz;   //!
   TBranch        *b_stau_candidate_muonP_px;   //!
   TBranch        *b_stau_candidate_muonP_py;   //!
   TBranch        *b_stau_candidate_muonP_pz;   //!
   TBranch        *b_stau_candidate_stauP_px;   //!
   TBranch        *b_stau_candidate_stauP_py;   //!
   TBranch        *b_stau_candidate_stauP_pz;   //!
   TBranch        *b_stau_candidate_idP_px;   //!
   TBranch        *b_stau_candidate_idP_py;   //!
   TBranch        *b_stau_candidate_idP_pz;   //!
   TBranch        *b_stau_candidate_BetaMeasurement_tech;   //!
   TBranch        *b_stau_candidate_BetaMeasurement_beta;   //!
   TBranch        *b_stau_candidate_BetaMeasurement_chi2;   //!
   TBranch        *b_stau_candidate_BetaMeasurement_dof;   //!
   TBranch        *b_stau_candidate_BetaMeasurement_avg;   //!
   TBranch        *b_stau_candidate_BetaMeasurement_rms;   //!
   TBranch        *b_stau_candidate_BetaMeasurement_contr_idx;   //!
   TBranch        *b_stau_candidate_BetaMeasurement_contr_tech;   //!
   TBranch        *b_stau_candidate_BetaMeasurement_contr_chi2;   //!
   TBranch        *b_stau_candidate_BetaMeasurement_contr_dof;   //!
   TBranch        *b_stau_candidate_StauHit_id;   //!
   TBranch        *b_stau_candidate_StauHit_eTech;   //!
   TBranch        *b_stau_candidate_StauHit_isEta;   //!
   TBranch        *b_stau_candidate_StauHit_mToF;   //!
   TBranch        *b_stau_candidate_StauHit_x;   //!
   TBranch        *b_stau_candidate_StauHit_y;   //!
   TBranch        *b_stau_candidate_StauHit_z;   //!
   TBranch        *b_stau_candidate_StauHit_e;   //!
   TBranch        *b_stau_candidate_StauHit_error;   //!
   TBranch        *b_stau_candidate_StauHit_shift;   //!
   TBranch        *b_mu_lowbeta_stau_n;   //!
   TBranch        *b_mu_lowbeta_stau_hasRpcHits;   //!
   TBranch        *b_mu_lowbeta_stau_hasTileCells;   //!
   TBranch        *b_mu_lowbeta_stau_beta;   //!
   TBranch        *b_mu_lowbeta_stau_ann;   //!
   TBranch        *b_mu_lowbeta_stau_mfP_px;   //!
   TBranch        *b_mu_lowbeta_stau_mfP_py;   //!
   TBranch        *b_mu_lowbeta_stau_mfP_pz;   //!
   TBranch        *b_mu_lowbeta_stau_muonP_px;   //!
   TBranch        *b_mu_lowbeta_stau_muonP_py;   //!
   TBranch        *b_mu_lowbeta_stau_muonP_pz;   //!
   TBranch        *b_mu_lowbeta_stau_stauP_px;   //!
   TBranch        *b_mu_lowbeta_stau_stauP_py;   //!
   TBranch        *b_mu_lowbeta_stau_stauP_pz;   //!
   TBranch        *b_mu_lowbeta_stau_idP_px;   //!
   TBranch        *b_mu_lowbeta_stau_idP_py;   //!
   TBranch        *b_mu_lowbeta_stau_idP_pz;   //!
   TBranch        *b_mu_lowbeta_stau_BetaMeasurement_tech;   //!
   TBranch        *b_mu_lowbeta_stau_BetaMeasurement_beta;   //!
   TBranch        *b_mu_lowbeta_stau_BetaMeasurement_chi2;   //!
   TBranch        *b_mu_lowbeta_stau_BetaMeasurement_dof;   //!
   TBranch        *b_mu_lowbeta_stau_BetaMeasurement_avg;   //!
   TBranch        *b_mu_lowbeta_stau_BetaMeasurement_rms;   //!
   TBranch        *b_mu_lowbeta_stau_BetaMeasurement_contr_idx;   //!
   TBranch        *b_mu_lowbeta_stau_BetaMeasurement_contr_tech;   //!
   TBranch        *b_mu_lowbeta_stau_BetaMeasurement_contr_chi2;   //!
   TBranch        *b_mu_lowbeta_stau_BetaMeasurement_contr_dof;   //!
   TBranch        *b_mu_lowbeta_stau_StauHit_id;   //!
   TBranch        *b_mu_lowbeta_stau_StauHit_eTech;   //!
   TBranch        *b_mu_lowbeta_stau_StauHit_isEta;   //!
   TBranch        *b_mu_lowbeta_stau_StauHit_mToF;   //!
   TBranch        *b_mu_lowbeta_stau_StauHit_x;   //!
   TBranch        *b_mu_lowbeta_stau_StauHit_y;   //!
   TBranch        *b_mu_lowbeta_stau_StauHit_z;   //!
   TBranch        *b_mu_lowbeta_stau_StauHit_e;   //!
   TBranch        *b_mu_lowbeta_stau_StauHit_error;   //!
   TBranch        *b_mu_lowbeta_stau_StauHit_shift;   //!
   TBranch        *b_mu_lowbeta_cont_n;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_beta;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_chi2;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_betaerror;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_nhits;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_hit_id;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_hit_x;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_hit_y;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_hit_z;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_hit_t;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_hit_error;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_hit_proptime;   //!
   TBranch        *b_mu_lowbeta_cont_mdt_hit_shift;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_beta;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_chi2;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_betaerror;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_nhits;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_hit_id;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_hit_x;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_hit_y;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_hit_z;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_hit_t;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_hit_error;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_hit_proptime;   //!
   TBranch        *b_mu_lowbeta_cont_rpc_hit_shift;   //!
   TBranch        *b_mu_lowbeta_cont_calo_nhits;   //!
   TBranch        *b_mu_lowbeta_cont_calo_hit_id;   //!
   TBranch        *b_mu_lowbeta_cont_calo_hit_x;   //!
   TBranch        *b_mu_lowbeta_cont_calo_hit_y;   //!
   TBranch        *b_mu_lowbeta_cont_calo_hit_z;   //!
   TBranch        *b_mu_lowbeta_cont_calo_hit_t;   //!
   TBranch        *b_mu_lowbeta_cont_calo_hit_energy;   //!
   TBranch        *b_mu_lowbeta_cont_calo_hit_shift;   //!
   TBranch        *b_mu_lowbeta_cont_mstrk_ok;   //!
   TBranch        *b_mu_lowbeta_cont_mstrk_px;   //!
   TBranch        *b_mu_lowbeta_cont_mstrk_py;   //!
   TBranch        *b_mu_lowbeta_cont_mstrk_pz;   //!
   TBranch        *b_mu_lowbeta_cont_satrk_ok;   //!
   TBranch        *b_mu_lowbeta_cont_satrk_px;   //!
   TBranch        *b_mu_lowbeta_cont_satrk_py;   //!
   TBranch        *b_mu_lowbeta_cont_satrk_pz;   //!
   TBranch        *b_mu_lowbeta_cont_cbtrk_ok;   //!
   TBranch        *b_mu_lowbeta_cont_cbtrk_px;   //!
   TBranch        *b_mu_lowbeta_cont_cbtrk_py;   //!
   TBranch        *b_mu_lowbeta_cont_cbtrk_pz;   //!
   TBranch        *b_mu_lowbeta_cont_idtrk_ok;   //!
   TBranch        *b_mu_lowbeta_cont_idtrk_px;   //!
   TBranch        *b_mu_lowbeta_cont_idtrk_py;   //!
   TBranch        *b_mu_lowbeta_cont_idtrk_pz;   //!
   TBranch        *b_mu_muid_n;   //!
   TBranch        *b_mu_muid_E;   //!
   TBranch        *b_mu_muid_pt;   //!
   TBranch        *b_mu_muid_m;   //!
   TBranch        *b_mu_muid_eta;   //!
   TBranch        *b_mu_muid_phi;   //!
   TBranch        *b_mu_muid_px;   //!
   TBranch        *b_mu_muid_py;   //!
   TBranch        *b_mu_muid_pz;   //!
   TBranch        *b_mu_muid_charge;   //!
   TBranch        *b_mu_muid_allauthor;   //!
   TBranch        *b_mu_muid_author;   //!
   TBranch        *b_mu_muid_beta;   //!
   TBranch        *b_mu_muid_isMuonLikelihood;   //!
   TBranch        *b_mu_muid_matchchi2;   //!
   TBranch        *b_mu_muid_matchndof;   //!
   TBranch        *b_mu_muid_etcone20;   //!
   TBranch        *b_mu_muid_etcone30;   //!
   TBranch        *b_mu_muid_etcone40;   //!
   TBranch        *b_mu_muid_nucone20;   //!
   TBranch        *b_mu_muid_nucone30;   //!
   TBranch        *b_mu_muid_nucone40;   //!
   TBranch        *b_mu_muid_ptcone20;   //!
   TBranch        *b_mu_muid_ptcone30;   //!
   TBranch        *b_mu_muid_ptcone40;   //!
   TBranch        *b_mu_muid_etconeNoEm10;   //!
   TBranch        *b_mu_muid_etconeNoEm20;   //!
   TBranch        *b_mu_muid_etconeNoEm30;   //!
   TBranch        *b_mu_muid_etconeNoEm40;   //!
   TBranch        *b_mu_muid_scatteringCurvatureSignificance;   //!
   TBranch        *b_mu_muid_scatteringNeighbourSignificance;   //!
   TBranch        *b_mu_muid_momentumBalanceSignificance;   //!
   TBranch        *b_mu_muid_energyLossPar;   //!
   TBranch        *b_mu_muid_energyLossErr;   //!
   TBranch        *b_mu_muid_etCore;   //!
   TBranch        *b_mu_muid_energyLossType;   //!
   TBranch        *b_mu_muid_caloMuonIdTag;   //!
   TBranch        *b_mu_muid_caloLRLikelihood;   //!
   TBranch        *b_mu_muid_bestMatch;   //!
   TBranch        *b_mu_muid_isStandAloneMuon;   //!
   TBranch        *b_mu_muid_isCombinedMuon;   //!
   TBranch        *b_mu_muid_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_muid_isSegmentTaggedMuon;   //!
   TBranch        *b_mu_muid_isCaloMuonId;   //!
   TBranch        *b_mu_muid_alsoFoundByLowPt;   //!
   TBranch        *b_mu_muid_alsoFoundByCaloMuonId;   //!
   TBranch        *b_mu_muid_isSiliconAssociatedForwardMuon;   //!
   TBranch        *b_mu_muid_loose;   //!
   TBranch        *b_mu_muid_medium;   //!
   TBranch        *b_mu_muid_tight;   //!
   TBranch        *b_mu_muid_d0_exPV;   //!
   TBranch        *b_mu_muid_z0_exPV;   //!
   TBranch        *b_mu_muid_phi_exPV;   //!
   TBranch        *b_mu_muid_theta_exPV;   //!
   TBranch        *b_mu_muid_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cb_d0_exPV;   //!
   TBranch        *b_mu_muid_cb_z0_exPV;   //!
   TBranch        *b_mu_muid_cb_phi_exPV;   //!
   TBranch        *b_mu_muid_cb_theta_exPV;   //!
   TBranch        *b_mu_muid_cb_qoverp_exPV;   //!
   TBranch        *b_mu_muid_id_d0_exPV;   //!
   TBranch        *b_mu_muid_id_z0_exPV;   //!
   TBranch        *b_mu_muid_id_phi_exPV;   //!
   TBranch        *b_mu_muid_id_theta_exPV;   //!
   TBranch        *b_mu_muid_id_qoverp_exPV;   //!
   TBranch        *b_mu_muid_me_d0_exPV;   //!
   TBranch        *b_mu_muid_me_z0_exPV;   //!
   TBranch        *b_mu_muid_me_phi_exPV;   //!
   TBranch        *b_mu_muid_me_theta_exPV;   //!
   TBranch        *b_mu_muid_me_qoverp_exPV;   //!
   TBranch        *b_mu_muid_ie_d0_exPV;   //!
   TBranch        *b_mu_muid_ie_z0_exPV;   //!
   TBranch        *b_mu_muid_ie_phi_exPV;   //!
   TBranch        *b_mu_muid_ie_theta_exPV;   //!
   TBranch        *b_mu_muid_ie_qoverp_exPV;   //!
   TBranch        *b_mu_muid_SpaceTime_detID;   //!
   TBranch        *b_mu_muid_SpaceTime_t;   //!
   TBranch        *b_mu_muid_SpaceTime_tError;   //!
   TBranch        *b_mu_muid_SpaceTime_weight;   //!
   TBranch        *b_mu_muid_SpaceTime_x;   //!
   TBranch        *b_mu_muid_SpaceTime_y;   //!
   TBranch        *b_mu_muid_SpaceTime_z;   //!
   TBranch        *b_mu_muid_cov_d0_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_exPV;   //!
   TBranch        *b_mu_muid_cov_phi_exPV;   //!
   TBranch        *b_mu_muid_cov_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_muid_id_cov_d0_exPV;   //!
   TBranch        *b_mu_muid_id_cov_z0_exPV;   //!
   TBranch        *b_mu_muid_id_cov_phi_exPV;   //!
   TBranch        *b_mu_muid_id_cov_theta_exPV;   //!
   TBranch        *b_mu_muid_id_cov_qoverp_exPV;   //!
   TBranch        *b_mu_muid_id_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_muid_id_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_muid_id_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_muid_id_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_muid_id_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_muid_id_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_muid_id_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_muid_id_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_muid_id_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_muid_id_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_muid_me_cov_d0_exPV;   //!
   TBranch        *b_mu_muid_me_cov_z0_exPV;   //!
   TBranch        *b_mu_muid_me_cov_phi_exPV;   //!
   TBranch        *b_mu_muid_me_cov_theta_exPV;   //!
   TBranch        *b_mu_muid_me_cov_qoverp_exPV;   //!
   TBranch        *b_mu_muid_me_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_muid_me_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_muid_me_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_muid_me_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_muid_me_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_muid_me_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_muid_me_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_muid_me_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_muid_me_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_muid_me_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_muid_ms_d0;   //!
   TBranch        *b_mu_muid_ms_z0;   //!
   TBranch        *b_mu_muid_ms_phi;   //!
   TBranch        *b_mu_muid_ms_theta;   //!
   TBranch        *b_mu_muid_ms_qoverp;   //!
   TBranch        *b_mu_muid_id_d0;   //!
   TBranch        *b_mu_muid_id_z0;   //!
   TBranch        *b_mu_muid_id_phi;   //!
   TBranch        *b_mu_muid_id_theta;   //!
   TBranch        *b_mu_muid_id_qoverp;   //!
   TBranch        *b_mu_muid_me_d0;   //!
   TBranch        *b_mu_muid_me_z0;   //!
   TBranch        *b_mu_muid_me_phi;   //!
   TBranch        *b_mu_muid_me_theta;   //!
   TBranch        *b_mu_muid_me_qoverp;   //!
   TBranch        *b_mu_muid_ie_d0;   //!
   TBranch        *b_mu_muid_ie_z0;   //!
   TBranch        *b_mu_muid_ie_phi;   //!
   TBranch        *b_mu_muid_ie_theta;   //!
   TBranch        *b_mu_muid_ie_qoverp;   //!
   TBranch        *b_mu_muid_nOutliersOnTrack;   //!
   TBranch        *b_mu_muid_nBLHits;   //!
   TBranch        *b_mu_muid_nPixHits;   //!
   TBranch        *b_mu_muid_nSCTHits;   //!
   TBranch        *b_mu_muid_nTRTHits;   //!
   TBranch        *b_mu_muid_nTRTHighTHits;   //!
   TBranch        *b_mu_muid_nBLSharedHits;   //!
   TBranch        *b_mu_muid_nPixSharedHits;   //!
   TBranch        *b_mu_muid_nPixHoles;   //!
   TBranch        *b_mu_muid_nSCTSharedHits;   //!
   TBranch        *b_mu_muid_nSCTHoles;   //!
   TBranch        *b_mu_muid_nTRTOutliers;   //!
   TBranch        *b_mu_muid_nTRTHighTOutliers;   //!
   TBranch        *b_mu_muid_nGangedPixels;   //!
   TBranch        *b_mu_muid_nPixelDeadSensors;   //!
   TBranch        *b_mu_muid_nSCTDeadSensors;   //!
   TBranch        *b_mu_muid_nTRTDeadStraws;   //!
   TBranch        *b_mu_muid_expectBLayerHit;   //!
   TBranch        *b_mu_muid_nMDTHits;   //!
   TBranch        *b_mu_muid_nMDTHoles;   //!
   TBranch        *b_mu_muid_nCSCEtaHits;   //!
   TBranch        *b_mu_muid_nCSCEtaHoles;   //!
   TBranch        *b_mu_muid_nCSCUnspoiledEtaHits;   //!
   TBranch        *b_mu_muid_nCSCPhiHits;   //!
   TBranch        *b_mu_muid_nCSCPhiHoles;   //!
   TBranch        *b_mu_muid_nRPCEtaHits;   //!
   TBranch        *b_mu_muid_nRPCEtaHoles;   //!
   TBranch        *b_mu_muid_nRPCPhiHits;   //!
   TBranch        *b_mu_muid_nRPCPhiHoles;   //!
   TBranch        *b_mu_muid_nTGCEtaHits;   //!
   TBranch        *b_mu_muid_nTGCEtaHoles;   //!
   TBranch        *b_mu_muid_nTGCPhiHits;   //!
   TBranch        *b_mu_muid_nTGCPhiHoles;   //!
   TBranch        *b_mu_muid_nprecisionLayers;   //!
   TBranch        *b_mu_muid_nprecisionHoleLayers;   //!
   TBranch        *b_mu_muid_nphiLayers;   //!
   TBranch        *b_mu_muid_ntrigEtaLayers;   //!
   TBranch        *b_mu_muid_nphiHoleLayers;   //!
   TBranch        *b_mu_muid_ntrigEtaHoleLayers;   //!
   TBranch        *b_mu_muid_nMDTBIHits;   //!
   TBranch        *b_mu_muid_nMDTBMHits;   //!
   TBranch        *b_mu_muid_nMDTBOHits;   //!
   TBranch        *b_mu_muid_nMDTBEEHits;   //!
   TBranch        *b_mu_muid_nMDTBIS78Hits;   //!
   TBranch        *b_mu_muid_nMDTEIHits;   //!
   TBranch        *b_mu_muid_nMDTEMHits;   //!
   TBranch        *b_mu_muid_nMDTEOHits;   //!
   TBranch        *b_mu_muid_nMDTEEHits;   //!
   TBranch        *b_mu_muid_nRPCLayer1EtaHits;   //!
   TBranch        *b_mu_muid_nRPCLayer2EtaHits;   //!
   TBranch        *b_mu_muid_nRPCLayer3EtaHits;   //!
   TBranch        *b_mu_muid_nRPCLayer1PhiHits;   //!
   TBranch        *b_mu_muid_nRPCLayer2PhiHits;   //!
   TBranch        *b_mu_muid_nRPCLayer3PhiHits;   //!
   TBranch        *b_mu_muid_nTGCLayer1EtaHits;   //!
   TBranch        *b_mu_muid_nTGCLayer2EtaHits;   //!
   TBranch        *b_mu_muid_nTGCLayer3EtaHits;   //!
   TBranch        *b_mu_muid_nTGCLayer4EtaHits;   //!
   TBranch        *b_mu_muid_nTGCLayer1PhiHits;   //!
   TBranch        *b_mu_muid_nTGCLayer2PhiHits;   //!
   TBranch        *b_mu_muid_nTGCLayer3PhiHits;   //!
   TBranch        *b_mu_muid_nTGCLayer4PhiHits;   //!
   TBranch        *b_mu_muid_barrelSectors;   //!
   TBranch        *b_mu_muid_endcapSectors;   //!
   TBranch        *b_mu_muid_trackd0;   //!
   TBranch        *b_mu_muid_trackz0;   //!
   TBranch        *b_mu_muid_trackphi;   //!
   TBranch        *b_mu_muid_tracktheta;   //!
   TBranch        *b_mu_muid_trackqoverp;   //!
   TBranch        *b_mu_muid_trackcov_d0;   //!
   TBranch        *b_mu_muid_trackcov_z0;   //!
   TBranch        *b_mu_muid_trackcov_phi;   //!
   TBranch        *b_mu_muid_trackcov_theta;   //!
   TBranch        *b_mu_muid_trackcov_qoverp;   //!
   TBranch        *b_mu_muid_trackcov_d0_z0;   //!
   TBranch        *b_mu_muid_trackcov_d0_phi;   //!
   TBranch        *b_mu_muid_trackcov_d0_theta;   //!
   TBranch        *b_mu_muid_trackcov_d0_qoverp;   //!
   TBranch        *b_mu_muid_trackcov_z0_phi;   //!
   TBranch        *b_mu_muid_trackcov_z0_theta;   //!
   TBranch        *b_mu_muid_trackcov_z0_qoverp;   //!
   TBranch        *b_mu_muid_trackcov_phi_theta;   //!
   TBranch        *b_mu_muid_trackcov_phi_qoverp;   //!
   TBranch        *b_mu_muid_trackcov_theta_qoverp;   //!
   TBranch        *b_mu_muid_trackfitchi2;   //!
   TBranch        *b_mu_muid_trackfitndof;   //!
   TBranch        *b_mu_muid_hastrack;   //!
   TBranch        *b_mu_muid_trackd0beam;   //!
   TBranch        *b_mu_muid_trackz0beam;   //!
   TBranch        *b_mu_muid_tracksigd0beam;   //!
   TBranch        *b_mu_muid_tracksigz0beam;   //!
   TBranch        *b_mu_muid_trackd0pv;   //!
   TBranch        *b_mu_muid_trackz0pv;   //!
   TBranch        *b_mu_muid_tracksigd0pv;   //!
   TBranch        *b_mu_muid_tracksigz0pv;   //!
   TBranch        *b_mu_muid_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackd0pvunbiased;   //!
   TBranch        *b_mu_muid_trackz0pvunbiased;   //!
   TBranch        *b_mu_muid_tracksigd0pvunbiased;   //!
   TBranch        *b_mu_muid_tracksigz0pvunbiased;   //!
   TBranch        *b_mu_muid_CaloCell_sampling;   //!
   TBranch        *b_mu_muid_CaloCell_eta;   //!
   TBranch        *b_mu_muid_CaloCell_phi;   //!
   TBranch        *b_mu_muid_CaloCell_dr;   //!
   TBranch        *b_mu_muid_CaloCell_E;   //!
   TBranch        *b_mu_muid_CaloCell_t;   //!
   TBranch        *b_mu_muid_CaloCell_x;   //!
   TBranch        *b_mu_muid_CaloCell_y;   //!
   TBranch        *b_mu_muid_CaloCell_z;   //!
   TBranch        *b_mu_muid_TileBeta;   //!
   TBranch        *b_mu_muid_TileBetaMass;   //!
   TBranch        *b_mu_muid_meandADC;   //!
   TBranch        *b_mu_muid_stau_candidate_assoc_index;   //!
   TBranch        *b_mu_staco_n;   //!
   TBranch        *b_mu_staco_E;   //!
   TBranch        *b_mu_staco_pt;   //!
   TBranch        *b_mu_staco_m;   //!
   TBranch        *b_mu_staco_eta;   //!
   TBranch        *b_mu_staco_phi;   //!
   TBranch        *b_mu_staco_px;   //!
   TBranch        *b_mu_staco_py;   //!
   TBranch        *b_mu_staco_pz;   //!
   TBranch        *b_mu_staco_charge;   //!
   TBranch        *b_mu_staco_allauthor;   //!
   TBranch        *b_mu_staco_author;   //!
   TBranch        *b_mu_staco_beta;   //!
   TBranch        *b_mu_staco_isMuonLikelihood;   //!
   TBranch        *b_mu_staco_matchchi2;   //!
   TBranch        *b_mu_staco_matchndof;   //!
   TBranch        *b_mu_staco_etcone20;   //!
   TBranch        *b_mu_staco_etcone30;   //!
   TBranch        *b_mu_staco_etcone40;   //!
   TBranch        *b_mu_staco_nucone20;   //!
   TBranch        *b_mu_staco_nucone30;   //!
   TBranch        *b_mu_staco_nucone40;   //!
   TBranch        *b_mu_staco_ptcone20;   //!
   TBranch        *b_mu_staco_ptcone30;   //!
   TBranch        *b_mu_staco_ptcone40;   //!
   TBranch        *b_mu_staco_etconeNoEm10;   //!
   TBranch        *b_mu_staco_etconeNoEm20;   //!
   TBranch        *b_mu_staco_etconeNoEm30;   //!
   TBranch        *b_mu_staco_etconeNoEm40;   //!
   TBranch        *b_mu_staco_scatteringCurvatureSignificance;   //!
   TBranch        *b_mu_staco_scatteringNeighbourSignificance;   //!
   TBranch        *b_mu_staco_momentumBalanceSignificance;   //!
   TBranch        *b_mu_staco_energyLossPar;   //!
   TBranch        *b_mu_staco_energyLossErr;   //!
   TBranch        *b_mu_staco_etCore;   //!
   TBranch        *b_mu_staco_energyLossType;   //!
   TBranch        *b_mu_staco_caloMuonIdTag;   //!
   TBranch        *b_mu_staco_caloLRLikelihood;   //!
   TBranch        *b_mu_staco_bestMatch;   //!
   TBranch        *b_mu_staco_isStandAloneMuon;   //!
   TBranch        *b_mu_staco_isCombinedMuon;   //!
   TBranch        *b_mu_staco_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_staco_isSegmentTaggedMuon;   //!
   TBranch        *b_mu_staco_isCaloMuonId;   //!
   TBranch        *b_mu_staco_alsoFoundByLowPt;   //!
   TBranch        *b_mu_staco_alsoFoundByCaloMuonId;   //!
   TBranch        *b_mu_staco_isSiliconAssociatedForwardMuon;   //!
   TBranch        *b_mu_staco_loose;   //!
   TBranch        *b_mu_staco_medium;   //!
   TBranch        *b_mu_staco_tight;   //!
   TBranch        *b_mu_staco_d0_exPV;   //!
   TBranch        *b_mu_staco_z0_exPV;   //!
   TBranch        *b_mu_staco_phi_exPV;   //!
   TBranch        *b_mu_staco_theta_exPV;   //!
   TBranch        *b_mu_staco_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cb_d0_exPV;   //!
   TBranch        *b_mu_staco_cb_z0_exPV;   //!
   TBranch        *b_mu_staco_cb_phi_exPV;   //!
   TBranch        *b_mu_staco_cb_theta_exPV;   //!
   TBranch        *b_mu_staco_cb_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_d0_exPV;   //!
   TBranch        *b_mu_staco_id_z0_exPV;   //!
   TBranch        *b_mu_staco_id_phi_exPV;   //!
   TBranch        *b_mu_staco_id_theta_exPV;   //!
   TBranch        *b_mu_staco_id_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_d0_exPV;   //!
   TBranch        *b_mu_staco_me_z0_exPV;   //!
   TBranch        *b_mu_staco_me_phi_exPV;   //!
   TBranch        *b_mu_staco_me_theta_exPV;   //!
   TBranch        *b_mu_staco_me_qoverp_exPV;   //!
   TBranch        *b_mu_staco_ie_d0_exPV;   //!
   TBranch        *b_mu_staco_ie_z0_exPV;   //!
   TBranch        *b_mu_staco_ie_phi_exPV;   //!
   TBranch        *b_mu_staco_ie_theta_exPV;   //!
   TBranch        *b_mu_staco_ie_qoverp_exPV;   //!
   TBranch        *b_mu_staco_SpaceTime_detID;   //!
   TBranch        *b_mu_staco_SpaceTime_t;   //!
   TBranch        *b_mu_staco_SpaceTime_tError;   //!
   TBranch        *b_mu_staco_SpaceTime_weight;   //!
   TBranch        *b_mu_staco_SpaceTime_x;   //!
   TBranch        *b_mu_staco_SpaceTime_y;   //!
   TBranch        *b_mu_staco_SpaceTime_z;   //!
   TBranch        *b_mu_staco_cov_d0_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_cov_d0_exPV;   //!
   TBranch        *b_mu_staco_id_cov_z0_exPV;   //!
   TBranch        *b_mu_staco_id_cov_phi_exPV;   //!
   TBranch        *b_mu_staco_id_cov_theta_exPV;   //!
   TBranch        *b_mu_staco_id_cov_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_staco_id_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_staco_id_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_staco_id_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_staco_id_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_staco_id_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_staco_id_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_cov_d0_exPV;   //!
   TBranch        *b_mu_staco_me_cov_z0_exPV;   //!
   TBranch        *b_mu_staco_me_cov_phi_exPV;   //!
   TBranch        *b_mu_staco_me_cov_theta_exPV;   //!
   TBranch        *b_mu_staco_me_cov_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_staco_me_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_staco_me_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_staco_me_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_staco_me_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_staco_me_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_staco_me_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_staco_ms_d0;   //!
   TBranch        *b_mu_staco_ms_z0;   //!
   TBranch        *b_mu_staco_ms_phi;   //!
   TBranch        *b_mu_staco_ms_theta;   //!
   TBranch        *b_mu_staco_ms_qoverp;   //!
   TBranch        *b_mu_staco_id_d0;   //!
   TBranch        *b_mu_staco_id_z0;   //!
   TBranch        *b_mu_staco_id_phi;   //!
   TBranch        *b_mu_staco_id_theta;   //!
   TBranch        *b_mu_staco_id_qoverp;   //!
   TBranch        *b_mu_staco_me_d0;   //!
   TBranch        *b_mu_staco_me_z0;   //!
   TBranch        *b_mu_staco_me_phi;   //!
   TBranch        *b_mu_staco_me_theta;   //!
   TBranch        *b_mu_staco_me_qoverp;   //!
   TBranch        *b_mu_staco_ie_d0;   //!
   TBranch        *b_mu_staco_ie_z0;   //!
   TBranch        *b_mu_staco_ie_phi;   //!
   TBranch        *b_mu_staco_ie_theta;   //!
   TBranch        *b_mu_staco_ie_qoverp;   //!
   TBranch        *b_mu_staco_nOutliersOnTrack;   //!
   TBranch        *b_mu_staco_nBLHits;   //!
   TBranch        *b_mu_staco_nPixHits;   //!
   TBranch        *b_mu_staco_nSCTHits;   //!
   TBranch        *b_mu_staco_nTRTHits;   //!
   TBranch        *b_mu_staco_nTRTHighTHits;   //!
   TBranch        *b_mu_staco_nBLSharedHits;   //!
   TBranch        *b_mu_staco_nPixSharedHits;   //!
   TBranch        *b_mu_staco_nPixHoles;   //!
   TBranch        *b_mu_staco_nSCTSharedHits;   //!
   TBranch        *b_mu_staco_nSCTHoles;   //!
   TBranch        *b_mu_staco_nTRTOutliers;   //!
   TBranch        *b_mu_staco_nTRTHighTOutliers;   //!
   TBranch        *b_mu_staco_nGangedPixels;   //!
   TBranch        *b_mu_staco_nPixelDeadSensors;   //!
   TBranch        *b_mu_staco_nSCTDeadSensors;   //!
   TBranch        *b_mu_staco_nTRTDeadStraws;   //!
   TBranch        *b_mu_staco_expectBLayerHit;   //!
   TBranch        *b_mu_staco_nMDTHits;   //!
   TBranch        *b_mu_staco_nMDTHoles;   //!
   TBranch        *b_mu_staco_nCSCEtaHits;   //!
   TBranch        *b_mu_staco_nCSCEtaHoles;   //!
   TBranch        *b_mu_staco_nCSCUnspoiledEtaHits;   //!
   TBranch        *b_mu_staco_nCSCPhiHits;   //!
   TBranch        *b_mu_staco_nCSCPhiHoles;   //!
   TBranch        *b_mu_staco_nRPCEtaHits;   //!
   TBranch        *b_mu_staco_nRPCEtaHoles;   //!
   TBranch        *b_mu_staco_nRPCPhiHits;   //!
   TBranch        *b_mu_staco_nRPCPhiHoles;   //!
   TBranch        *b_mu_staco_nTGCEtaHits;   //!
   TBranch        *b_mu_staco_nTGCEtaHoles;   //!
   TBranch        *b_mu_staco_nTGCPhiHits;   //!
   TBranch        *b_mu_staco_nTGCPhiHoles;   //!
   TBranch        *b_mu_staco_nprecisionLayers;   //!
   TBranch        *b_mu_staco_nprecisionHoleLayers;   //!
   TBranch        *b_mu_staco_nphiLayers;   //!
   TBranch        *b_mu_staco_ntrigEtaLayers;   //!
   TBranch        *b_mu_staco_nphiHoleLayers;   //!
   TBranch        *b_mu_staco_ntrigEtaHoleLayers;   //!
   TBranch        *b_mu_staco_nMDTBIHits;   //!
   TBranch        *b_mu_staco_nMDTBMHits;   //!
   TBranch        *b_mu_staco_nMDTBOHits;   //!
   TBranch        *b_mu_staco_nMDTBEEHits;   //!
   TBranch        *b_mu_staco_nMDTBIS78Hits;   //!
   TBranch        *b_mu_staco_nMDTEIHits;   //!
   TBranch        *b_mu_staco_nMDTEMHits;   //!
   TBranch        *b_mu_staco_nMDTEOHits;   //!
   TBranch        *b_mu_staco_nMDTEEHits;   //!
   TBranch        *b_mu_staco_nRPCLayer1EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer2EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer3EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer1PhiHits;   //!
   TBranch        *b_mu_staco_nRPCLayer2PhiHits;   //!
   TBranch        *b_mu_staco_nRPCLayer3PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer1EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer2EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer3EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer4EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer1PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer2PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer3PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer4PhiHits;   //!
   TBranch        *b_mu_staco_barrelSectors;   //!
   TBranch        *b_mu_staco_endcapSectors;   //!
   TBranch        *b_mu_staco_trackd0;   //!
   TBranch        *b_mu_staco_trackz0;   //!
   TBranch        *b_mu_staco_trackphi;   //!
   TBranch        *b_mu_staco_tracktheta;   //!
   TBranch        *b_mu_staco_trackqoverp;   //!
   TBranch        *b_mu_staco_trackcov_d0;   //!
   TBranch        *b_mu_staco_trackcov_z0;   //!
   TBranch        *b_mu_staco_trackcov_phi;   //!
   TBranch        *b_mu_staco_trackcov_theta;   //!
   TBranch        *b_mu_staco_trackcov_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_d0_z0;   //!
   TBranch        *b_mu_staco_trackcov_d0_phi;   //!
   TBranch        *b_mu_staco_trackcov_d0_theta;   //!
   TBranch        *b_mu_staco_trackcov_d0_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_z0_phi;   //!
   TBranch        *b_mu_staco_trackcov_z0_theta;   //!
   TBranch        *b_mu_staco_trackcov_z0_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_phi_theta;   //!
   TBranch        *b_mu_staco_trackcov_phi_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_theta_qoverp;   //!
   TBranch        *b_mu_staco_trackfitchi2;   //!
   TBranch        *b_mu_staco_trackfitndof;   //!
   TBranch        *b_mu_staco_hastrack;   //!
   TBranch        *b_mu_staco_trackd0beam;   //!
   TBranch        *b_mu_staco_trackz0beam;   //!
   TBranch        *b_mu_staco_tracksigd0beam;   //!
   TBranch        *b_mu_staco_tracksigz0beam;   //!
   TBranch        *b_mu_staco_trackd0pv;   //!
   TBranch        *b_mu_staco_trackz0pv;   //!
   TBranch        *b_mu_staco_tracksigd0pv;   //!
   TBranch        *b_mu_staco_tracksigz0pv;   //!
   TBranch        *b_mu_staco_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackd0pvunbiased;   //!
   TBranch        *b_mu_staco_trackz0pvunbiased;   //!
   TBranch        *b_mu_staco_tracksigd0pvunbiased;   //!
   TBranch        *b_mu_staco_tracksigz0pvunbiased;   //!
   TBranch        *b_mu_staco_CaloCell_sampling;   //!
   TBranch        *b_mu_staco_CaloCell_eta;   //!
   TBranch        *b_mu_staco_CaloCell_phi;   //!
   TBranch        *b_mu_staco_CaloCell_dr;   //!
   TBranch        *b_mu_staco_CaloCell_E;   //!
   TBranch        *b_mu_staco_CaloCell_t;   //!
   TBranch        *b_mu_staco_CaloCell_x;   //!
   TBranch        *b_mu_staco_CaloCell_y;   //!
   TBranch        *b_mu_staco_CaloCell_z;   //!
   TBranch        *b_mu_staco_TileBeta;   //!
   TBranch        *b_mu_staco_TileBetaMass;   //!
   TBranch        *b_mu_staco_meandADC;   //!
   TBranch        *b_mu_staco_stau_candidate_assoc_index;   //!
   TBranch        *b_mu_calo_n;   //!
   TBranch        *b_mu_calo_E;   //!
   TBranch        *b_mu_calo_pt;   //!
   TBranch        *b_mu_calo_m;   //!
   TBranch        *b_mu_calo_eta;   //!
   TBranch        *b_mu_calo_phi;   //!
   TBranch        *b_mu_calo_px;   //!
   TBranch        *b_mu_calo_py;   //!
   TBranch        *b_mu_calo_pz;   //!
   TBranch        *b_mu_calo_charge;   //!
   TBranch        *b_mu_calo_allauthor;   //!
   TBranch        *b_mu_calo_author;   //!
   TBranch        *b_mu_calo_beta;   //!
   TBranch        *b_mu_calo_isMuonLikelihood;   //!
   TBranch        *b_mu_calo_matchchi2;   //!
   TBranch        *b_mu_calo_matchndof;   //!
   TBranch        *b_mu_calo_etcone20;   //!
   TBranch        *b_mu_calo_etcone30;   //!
   TBranch        *b_mu_calo_etcone40;   //!
   TBranch        *b_mu_calo_nucone20;   //!
   TBranch        *b_mu_calo_nucone30;   //!
   TBranch        *b_mu_calo_nucone40;   //!
   TBranch        *b_mu_calo_ptcone20;   //!
   TBranch        *b_mu_calo_ptcone30;   //!
   TBranch        *b_mu_calo_ptcone40;   //!
   TBranch        *b_mu_calo_etconeNoEm10;   //!
   TBranch        *b_mu_calo_etconeNoEm20;   //!
   TBranch        *b_mu_calo_etconeNoEm30;   //!
   TBranch        *b_mu_calo_etconeNoEm40;   //!
   TBranch        *b_mu_calo_scatteringCurvatureSignificance;   //!
   TBranch        *b_mu_calo_scatteringNeighbourSignificance;   //!
   TBranch        *b_mu_calo_momentumBalanceSignificance;   //!
   TBranch        *b_mu_calo_energyLossPar;   //!
   TBranch        *b_mu_calo_energyLossErr;   //!
   TBranch        *b_mu_calo_etCore;   //!
   TBranch        *b_mu_calo_energyLossType;   //!
   TBranch        *b_mu_calo_caloMuonIdTag;   //!
   TBranch        *b_mu_calo_caloLRLikelihood;   //!
   TBranch        *b_mu_calo_bestMatch;   //!
   TBranch        *b_mu_calo_isStandAloneMuon;   //!
   TBranch        *b_mu_calo_isCombinedMuon;   //!
   TBranch        *b_mu_calo_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_calo_isSegmentTaggedMuon;   //!
   TBranch        *b_mu_calo_isCaloMuonId;   //!
   TBranch        *b_mu_calo_alsoFoundByLowPt;   //!
   TBranch        *b_mu_calo_alsoFoundByCaloMuonId;   //!
   TBranch        *b_mu_calo_isSiliconAssociatedForwardMuon;   //!
   TBranch        *b_mu_calo_loose;   //!
   TBranch        *b_mu_calo_medium;   //!
   TBranch        *b_mu_calo_tight;   //!
   TBranch        *b_mu_calo_d0_exPV;   //!
   TBranch        *b_mu_calo_z0_exPV;   //!
   TBranch        *b_mu_calo_phi_exPV;   //!
   TBranch        *b_mu_calo_theta_exPV;   //!
   TBranch        *b_mu_calo_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cb_d0_exPV;   //!
   TBranch        *b_mu_calo_cb_z0_exPV;   //!
   TBranch        *b_mu_calo_cb_phi_exPV;   //!
   TBranch        *b_mu_calo_cb_theta_exPV;   //!
   TBranch        *b_mu_calo_cb_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_d0_exPV;   //!
   TBranch        *b_mu_calo_id_z0_exPV;   //!
   TBranch        *b_mu_calo_id_phi_exPV;   //!
   TBranch        *b_mu_calo_id_theta_exPV;   //!
   TBranch        *b_mu_calo_id_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_d0_exPV;   //!
   TBranch        *b_mu_calo_me_z0_exPV;   //!
   TBranch        *b_mu_calo_me_phi_exPV;   //!
   TBranch        *b_mu_calo_me_theta_exPV;   //!
   TBranch        *b_mu_calo_me_qoverp_exPV;   //!
   TBranch        *b_mu_calo_ie_d0_exPV;   //!
   TBranch        *b_mu_calo_ie_z0_exPV;   //!
   TBranch        *b_mu_calo_ie_phi_exPV;   //!
   TBranch        *b_mu_calo_ie_theta_exPV;   //!
   TBranch        *b_mu_calo_ie_qoverp_exPV;   //!
   TBranch        *b_mu_calo_SpaceTime_detID;   //!
   TBranch        *b_mu_calo_SpaceTime_t;   //!
   TBranch        *b_mu_calo_SpaceTime_tError;   //!
   TBranch        *b_mu_calo_SpaceTime_weight;   //!
   TBranch        *b_mu_calo_SpaceTime_x;   //!
   TBranch        *b_mu_calo_SpaceTime_y;   //!
   TBranch        *b_mu_calo_SpaceTime_z;   //!
   TBranch        *b_mu_calo_cov_d0_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_exPV;   //!
   TBranch        *b_mu_calo_cov_phi_exPV;   //!
   TBranch        *b_mu_calo_cov_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_cov_d0_exPV;   //!
   TBranch        *b_mu_calo_id_cov_z0_exPV;   //!
   TBranch        *b_mu_calo_id_cov_phi_exPV;   //!
   TBranch        *b_mu_calo_id_cov_theta_exPV;   //!
   TBranch        *b_mu_calo_id_cov_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_calo_id_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_calo_id_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_calo_id_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_calo_id_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_calo_id_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_calo_id_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_cov_d0_exPV;   //!
   TBranch        *b_mu_calo_me_cov_z0_exPV;   //!
   TBranch        *b_mu_calo_me_cov_phi_exPV;   //!
   TBranch        *b_mu_calo_me_cov_theta_exPV;   //!
   TBranch        *b_mu_calo_me_cov_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_calo_me_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_calo_me_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_calo_me_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_calo_me_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_calo_me_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_calo_me_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_calo_ms_d0;   //!
   TBranch        *b_mu_calo_ms_z0;   //!
   TBranch        *b_mu_calo_ms_phi;   //!
   TBranch        *b_mu_calo_ms_theta;   //!
   TBranch        *b_mu_calo_ms_qoverp;   //!
   TBranch        *b_mu_calo_id_d0;   //!
   TBranch        *b_mu_calo_id_z0;   //!
   TBranch        *b_mu_calo_id_phi;   //!
   TBranch        *b_mu_calo_id_theta;   //!
   TBranch        *b_mu_calo_id_qoverp;   //!
   TBranch        *b_mu_calo_me_d0;   //!
   TBranch        *b_mu_calo_me_z0;   //!
   TBranch        *b_mu_calo_me_phi;   //!
   TBranch        *b_mu_calo_me_theta;   //!
   TBranch        *b_mu_calo_me_qoverp;   //!
   TBranch        *b_mu_calo_ie_d0;   //!
   TBranch        *b_mu_calo_ie_z0;   //!
   TBranch        *b_mu_calo_ie_phi;   //!
   TBranch        *b_mu_calo_ie_theta;   //!
   TBranch        *b_mu_calo_ie_qoverp;   //!
   TBranch        *b_mu_calo_nOutliersOnTrack;   //!
   TBranch        *b_mu_calo_nBLHits;   //!
   TBranch        *b_mu_calo_nPixHits;   //!
   TBranch        *b_mu_calo_nSCTHits;   //!
   TBranch        *b_mu_calo_nTRTHits;   //!
   TBranch        *b_mu_calo_nTRTHighTHits;   //!
   TBranch        *b_mu_calo_nBLSharedHits;   //!
   TBranch        *b_mu_calo_nPixSharedHits;   //!
   TBranch        *b_mu_calo_nPixHoles;   //!
   TBranch        *b_mu_calo_nSCTSharedHits;   //!
   TBranch        *b_mu_calo_nSCTHoles;   //!
   TBranch        *b_mu_calo_nTRTOutliers;   //!
   TBranch        *b_mu_calo_nTRTHighTOutliers;   //!
   TBranch        *b_mu_calo_nGangedPixels;   //!
   TBranch        *b_mu_calo_nPixelDeadSensors;   //!
   TBranch        *b_mu_calo_nSCTDeadSensors;   //!
   TBranch        *b_mu_calo_nTRTDeadStraws;   //!
   TBranch        *b_mu_calo_expectBLayerHit;   //!
   TBranch        *b_mu_calo_nMDTHits;   //!
   TBranch        *b_mu_calo_nMDTHoles;   //!
   TBranch        *b_mu_calo_nCSCEtaHits;   //!
   TBranch        *b_mu_calo_nCSCEtaHoles;   //!
   TBranch        *b_mu_calo_nCSCUnspoiledEtaHits;   //!
   TBranch        *b_mu_calo_nCSCPhiHits;   //!
   TBranch        *b_mu_calo_nCSCPhiHoles;   //!
   TBranch        *b_mu_calo_nRPCEtaHits;   //!
   TBranch        *b_mu_calo_nRPCEtaHoles;   //!
   TBranch        *b_mu_calo_nRPCPhiHits;   //!
   TBranch        *b_mu_calo_nRPCPhiHoles;   //!
   TBranch        *b_mu_calo_nTGCEtaHits;   //!
   TBranch        *b_mu_calo_nTGCEtaHoles;   //!
   TBranch        *b_mu_calo_nTGCPhiHits;   //!
   TBranch        *b_mu_calo_nTGCPhiHoles;   //!
   TBranch        *b_mu_calo_nprecisionLayers;   //!
   TBranch        *b_mu_calo_nprecisionHoleLayers;   //!
   TBranch        *b_mu_calo_nphiLayers;   //!
   TBranch        *b_mu_calo_ntrigEtaLayers;   //!
   TBranch        *b_mu_calo_nphiHoleLayers;   //!
   TBranch        *b_mu_calo_ntrigEtaHoleLayers;   //!
   TBranch        *b_mu_calo_nMDTBIHits;   //!
   TBranch        *b_mu_calo_nMDTBMHits;   //!
   TBranch        *b_mu_calo_nMDTBOHits;   //!
   TBranch        *b_mu_calo_nMDTBEEHits;   //!
   TBranch        *b_mu_calo_nMDTBIS78Hits;   //!
   TBranch        *b_mu_calo_nMDTEIHits;   //!
   TBranch        *b_mu_calo_nMDTEMHits;   //!
   TBranch        *b_mu_calo_nMDTEOHits;   //!
   TBranch        *b_mu_calo_nMDTEEHits;   //!
   TBranch        *b_mu_calo_nRPCLayer1EtaHits;   //!
   TBranch        *b_mu_calo_nRPCLayer2EtaHits;   //!
   TBranch        *b_mu_calo_nRPCLayer3EtaHits;   //!
   TBranch        *b_mu_calo_nRPCLayer1PhiHits;   //!
   TBranch        *b_mu_calo_nRPCLayer2PhiHits;   //!
   TBranch        *b_mu_calo_nRPCLayer3PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer1EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer2EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer3EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer4EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer1PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer2PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer3PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer4PhiHits;   //!
   TBranch        *b_mu_calo_barrelSectors;   //!
   TBranch        *b_mu_calo_endcapSectors;   //!
   TBranch        *b_mu_calo_trackd0;   //!
   TBranch        *b_mu_calo_trackz0;   //!
   TBranch        *b_mu_calo_trackphi;   //!
   TBranch        *b_mu_calo_tracktheta;   //!
   TBranch        *b_mu_calo_trackqoverp;   //!
   TBranch        *b_mu_calo_trackcov_d0;   //!
   TBranch        *b_mu_calo_trackcov_z0;   //!
   TBranch        *b_mu_calo_trackcov_phi;   //!
   TBranch        *b_mu_calo_trackcov_theta;   //!
   TBranch        *b_mu_calo_trackcov_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_d0_z0;   //!
   TBranch        *b_mu_calo_trackcov_d0_phi;   //!
   TBranch        *b_mu_calo_trackcov_d0_theta;   //!
   TBranch        *b_mu_calo_trackcov_d0_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_z0_phi;   //!
   TBranch        *b_mu_calo_trackcov_z0_theta;   //!
   TBranch        *b_mu_calo_trackcov_z0_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_phi_theta;   //!
   TBranch        *b_mu_calo_trackcov_phi_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_theta_qoverp;   //!
   TBranch        *b_mu_calo_trackfitchi2;   //!
   TBranch        *b_mu_calo_trackfitndof;   //!
   TBranch        *b_mu_calo_hastrack;   //!
   TBranch        *b_mu_calo_trackd0beam;   //!
   TBranch        *b_mu_calo_trackz0beam;   //!
   TBranch        *b_mu_calo_tracksigd0beam;   //!
   TBranch        *b_mu_calo_tracksigz0beam;   //!
   TBranch        *b_mu_calo_trackd0pv;   //!
   TBranch        *b_mu_calo_trackz0pv;   //!
   TBranch        *b_mu_calo_tracksigd0pv;   //!
   TBranch        *b_mu_calo_tracksigz0pv;   //!
   TBranch        *b_mu_calo_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackd0pvunbiased;   //!
   TBranch        *b_mu_calo_trackz0pvunbiased;   //!
   TBranch        *b_mu_calo_tracksigd0pvunbiased;   //!
   TBranch        *b_mu_calo_tracksigz0pvunbiased;   //!
   TBranch        *b_mu_calo_CaloCell_sampling;   //!
   TBranch        *b_mu_calo_CaloCell_eta;   //!
   TBranch        *b_mu_calo_CaloCell_phi;   //!
   TBranch        *b_mu_calo_CaloCell_dr;   //!
   TBranch        *b_mu_calo_CaloCell_E;   //!
   TBranch        *b_mu_calo_CaloCell_t;   //!
   TBranch        *b_mu_calo_CaloCell_x;   //!
   TBranch        *b_mu_calo_CaloCell_y;   //!
   TBranch        *b_mu_calo_CaloCell_z;   //!
   TBranch        *b_mu_calo_TileBeta;   //!
   TBranch        *b_mu_calo_TileBetaMass;   //!
   TBranch        *b_mu_calo_meandADC;   //!
   TBranch        *b_mu_calo_stau_candidate_assoc_index;   //!
   TBranch        *b_mu_mugirl_n;   //!
   TBranch        *b_mu_mugirl_E;   //!
   TBranch        *b_mu_mugirl_pt;   //!
   TBranch        *b_mu_mugirl_m;   //!
   TBranch        *b_mu_mugirl_eta;   //!
   TBranch        *b_mu_mugirl_phi;   //!
   TBranch        *b_mu_mugirl_px;   //!
   TBranch        *b_mu_mugirl_py;   //!
   TBranch        *b_mu_mugirl_pz;   //!
   TBranch        *b_mu_mugirl_charge;   //!
   TBranch        *b_mu_mugirl_allauthor;   //!
   TBranch        *b_mu_mugirl_author;   //!
   TBranch        *b_mu_mugirl_beta;   //!
   TBranch        *b_mu_mugirl_isMuonLikelihood;   //!
   TBranch        *b_mu_mugirl_matchchi2;   //!
   TBranch        *b_mu_mugirl_matchndof;   //!
   TBranch        *b_mu_mugirl_etcone20;   //!
   TBranch        *b_mu_mugirl_etcone30;   //!
   TBranch        *b_mu_mugirl_etcone40;   //!
   TBranch        *b_mu_mugirl_nucone20;   //!
   TBranch        *b_mu_mugirl_nucone30;   //!
   TBranch        *b_mu_mugirl_nucone40;   //!
   TBranch        *b_mu_mugirl_ptcone20;   //!
   TBranch        *b_mu_mugirl_ptcone30;   //!
   TBranch        *b_mu_mugirl_ptcone40;   //!
   TBranch        *b_mu_mugirl_etconeNoEm10;   //!
   TBranch        *b_mu_mugirl_etconeNoEm20;   //!
   TBranch        *b_mu_mugirl_etconeNoEm30;   //!
   TBranch        *b_mu_mugirl_etconeNoEm40;   //!
   TBranch        *b_mu_mugirl_scatteringCurvatureSignificance;   //!
   TBranch        *b_mu_mugirl_scatteringNeighbourSignificance;   //!
   TBranch        *b_mu_mugirl_momentumBalanceSignificance;   //!
   TBranch        *b_mu_mugirl_energyLossPar;   //!
   TBranch        *b_mu_mugirl_energyLossErr;   //!
   TBranch        *b_mu_mugirl_etCore;   //!
   TBranch        *b_mu_mugirl_energyLossType;   //!
   TBranch        *b_mu_mugirl_caloMuonIdTag;   //!
   TBranch        *b_mu_mugirl_caloLRLikelihood;   //!
   TBranch        *b_mu_mugirl_bestMatch;   //!
   TBranch        *b_mu_mugirl_isStandAloneMuon;   //!
   TBranch        *b_mu_mugirl_isCombinedMuon;   //!
   TBranch        *b_mu_mugirl_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_mugirl_isSegmentTaggedMuon;   //!
   TBranch        *b_mu_mugirl_isCaloMuonId;   //!
   TBranch        *b_mu_mugirl_alsoFoundByLowPt;   //!
   TBranch        *b_mu_mugirl_alsoFoundByCaloMuonId;   //!
   TBranch        *b_mu_mugirl_isSiliconAssociatedForwardMuon;   //!
   TBranch        *b_mu_mugirl_loose;   //!
   TBranch        *b_mu_mugirl_medium;   //!
   TBranch        *b_mu_mugirl_tight;   //!
   TBranch        *b_mu_mugirl_d0_exPV;   //!
   TBranch        *b_mu_mugirl_z0_exPV;   //!
   TBranch        *b_mu_mugirl_phi_exPV;   //!
   TBranch        *b_mu_mugirl_theta_exPV;   //!
   TBranch        *b_mu_mugirl_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_cb_d0_exPV;   //!
   TBranch        *b_mu_mugirl_cb_z0_exPV;   //!
   TBranch        *b_mu_mugirl_cb_phi_exPV;   //!
   TBranch        *b_mu_mugirl_cb_theta_exPV;   //!
   TBranch        *b_mu_mugirl_cb_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_id_d0_exPV;   //!
   TBranch        *b_mu_mugirl_id_z0_exPV;   //!
   TBranch        *b_mu_mugirl_id_phi_exPV;   //!
   TBranch        *b_mu_mugirl_id_theta_exPV;   //!
   TBranch        *b_mu_mugirl_id_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_me_d0_exPV;   //!
   TBranch        *b_mu_mugirl_me_z0_exPV;   //!
   TBranch        *b_mu_mugirl_me_phi_exPV;   //!
   TBranch        *b_mu_mugirl_me_theta_exPV;   //!
   TBranch        *b_mu_mugirl_me_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_ie_d0_exPV;   //!
   TBranch        *b_mu_mugirl_ie_z0_exPV;   //!
   TBranch        *b_mu_mugirl_ie_phi_exPV;   //!
   TBranch        *b_mu_mugirl_ie_theta_exPV;   //!
   TBranch        *b_mu_mugirl_ie_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_SpaceTime_detID;   //!
   TBranch        *b_mu_mugirl_SpaceTime_t;   //!
   TBranch        *b_mu_mugirl_SpaceTime_tError;   //!
   TBranch        *b_mu_mugirl_SpaceTime_weight;   //!
   TBranch        *b_mu_mugirl_SpaceTime_x;   //!
   TBranch        *b_mu_mugirl_SpaceTime_y;   //!
   TBranch        *b_mu_mugirl_SpaceTime_z;   //!
   TBranch        *b_mu_mugirl_cov_d0_exPV;   //!
   TBranch        *b_mu_mugirl_cov_z0_exPV;   //!
   TBranch        *b_mu_mugirl_cov_phi_exPV;   //!
   TBranch        *b_mu_mugirl_cov_theta_exPV;   //!
   TBranch        *b_mu_mugirl_cov_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_mugirl_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_mugirl_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_mugirl_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_mugirl_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_mugirl_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_mugirl_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_d0_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_z0_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_phi_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_theta_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_id_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_d0_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_z0_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_phi_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_theta_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_me_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_mugirl_ms_d0;   //!
   TBranch        *b_mu_mugirl_ms_z0;   //!
   TBranch        *b_mu_mugirl_ms_phi;   //!
   TBranch        *b_mu_mugirl_ms_theta;   //!
   TBranch        *b_mu_mugirl_ms_qoverp;   //!
   TBranch        *b_mu_mugirl_id_d0;   //!
   TBranch        *b_mu_mugirl_id_z0;   //!
   TBranch        *b_mu_mugirl_id_phi;   //!
   TBranch        *b_mu_mugirl_id_theta;   //!
   TBranch        *b_mu_mugirl_id_qoverp;   //!
   TBranch        *b_mu_mugirl_me_d0;   //!
   TBranch        *b_mu_mugirl_me_z0;   //!
   TBranch        *b_mu_mugirl_me_phi;   //!
   TBranch        *b_mu_mugirl_me_theta;   //!
   TBranch        *b_mu_mugirl_me_qoverp;   //!
   TBranch        *b_mu_mugirl_ie_d0;   //!
   TBranch        *b_mu_mugirl_ie_z0;   //!
   TBranch        *b_mu_mugirl_ie_phi;   //!
   TBranch        *b_mu_mugirl_ie_theta;   //!
   TBranch        *b_mu_mugirl_ie_qoverp;   //!
   TBranch        *b_mu_mugirl_nOutliersOnTrack;   //!
   TBranch        *b_mu_mugirl_nBLHits;   //!
   TBranch        *b_mu_mugirl_nPixHits;   //!
   TBranch        *b_mu_mugirl_nSCTHits;   //!
   TBranch        *b_mu_mugirl_nTRTHits;   //!
   TBranch        *b_mu_mugirl_nTRTHighTHits;   //!
   TBranch        *b_mu_mugirl_nBLSharedHits;   //!
   TBranch        *b_mu_mugirl_nPixSharedHits;   //!
   TBranch        *b_mu_mugirl_nPixHoles;   //!
   TBranch        *b_mu_mugirl_nSCTSharedHits;   //!
   TBranch        *b_mu_mugirl_nSCTHoles;   //!
   TBranch        *b_mu_mugirl_nTRTOutliers;   //!
   TBranch        *b_mu_mugirl_nTRTHighTOutliers;   //!
   TBranch        *b_mu_mugirl_nGangedPixels;   //!
   TBranch        *b_mu_mugirl_nPixelDeadSensors;   //!
   TBranch        *b_mu_mugirl_nSCTDeadSensors;   //!
   TBranch        *b_mu_mugirl_nTRTDeadStraws;   //!
   TBranch        *b_mu_mugirl_expectBLayerHit;   //!
   TBranch        *b_mu_mugirl_nMDTHits;   //!
   TBranch        *b_mu_mugirl_nMDTHoles;   //!
   TBranch        *b_mu_mugirl_nCSCEtaHits;   //!
   TBranch        *b_mu_mugirl_nCSCEtaHoles;   //!
   TBranch        *b_mu_mugirl_nCSCUnspoiledEtaHits;   //!
   TBranch        *b_mu_mugirl_nCSCPhiHits;   //!
   TBranch        *b_mu_mugirl_nCSCPhiHoles;   //!
   TBranch        *b_mu_mugirl_nRPCEtaHits;   //!
   TBranch        *b_mu_mugirl_nRPCEtaHoles;   //!
   TBranch        *b_mu_mugirl_nRPCPhiHits;   //!
   TBranch        *b_mu_mugirl_nRPCPhiHoles;   //!
   TBranch        *b_mu_mugirl_nTGCEtaHits;   //!
   TBranch        *b_mu_mugirl_nTGCEtaHoles;   //!
   TBranch        *b_mu_mugirl_nTGCPhiHits;   //!
   TBranch        *b_mu_mugirl_nTGCPhiHoles;   //!
   TBranch        *b_mu_mugirl_nprecisionLayers;   //!
   TBranch        *b_mu_mugirl_nprecisionHoleLayers;   //!
   TBranch        *b_mu_mugirl_nphiLayers;   //!
   TBranch        *b_mu_mugirl_ntrigEtaLayers;   //!
   TBranch        *b_mu_mugirl_nphiHoleLayers;   //!
   TBranch        *b_mu_mugirl_ntrigEtaHoleLayers;   //!
   TBranch        *b_mu_mugirl_nMDTBIHits;   //!
   TBranch        *b_mu_mugirl_nMDTBMHits;   //!
   TBranch        *b_mu_mugirl_nMDTBOHits;   //!
   TBranch        *b_mu_mugirl_nMDTBEEHits;   //!
   TBranch        *b_mu_mugirl_nMDTBIS78Hits;   //!
   TBranch        *b_mu_mugirl_nMDTEIHits;   //!
   TBranch        *b_mu_mugirl_nMDTEMHits;   //!
   TBranch        *b_mu_mugirl_nMDTEOHits;   //!
   TBranch        *b_mu_mugirl_nMDTEEHits;   //!
   TBranch        *b_mu_mugirl_nRPCLayer1EtaHits;   //!
   TBranch        *b_mu_mugirl_nRPCLayer2EtaHits;   //!
   TBranch        *b_mu_mugirl_nRPCLayer3EtaHits;   //!
   TBranch        *b_mu_mugirl_nRPCLayer1PhiHits;   //!
   TBranch        *b_mu_mugirl_nRPCLayer2PhiHits;   //!
   TBranch        *b_mu_mugirl_nRPCLayer3PhiHits;   //!
   TBranch        *b_mu_mugirl_nTGCLayer1EtaHits;   //!
   TBranch        *b_mu_mugirl_nTGCLayer2EtaHits;   //!
   TBranch        *b_mu_mugirl_nTGCLayer3EtaHits;   //!
   TBranch        *b_mu_mugirl_nTGCLayer4EtaHits;   //!
   TBranch        *b_mu_mugirl_nTGCLayer1PhiHits;   //!
   TBranch        *b_mu_mugirl_nTGCLayer2PhiHits;   //!
   TBranch        *b_mu_mugirl_nTGCLayer3PhiHits;   //!
   TBranch        *b_mu_mugirl_nTGCLayer4PhiHits;   //!
   TBranch        *b_mu_mugirl_barrelSectors;   //!
   TBranch        *b_mu_mugirl_endcapSectors;   //!
   TBranch        *b_mu_mugirl_trackd0;   //!
   TBranch        *b_mu_mugirl_trackz0;   //!
   TBranch        *b_mu_mugirl_trackphi;   //!
   TBranch        *b_mu_mugirl_tracktheta;   //!
   TBranch        *b_mu_mugirl_trackqoverp;   //!
   TBranch        *b_mu_mugirl_trackcov_d0;   //!
   TBranch        *b_mu_mugirl_trackcov_z0;   //!
   TBranch        *b_mu_mugirl_trackcov_phi;   //!
   TBranch        *b_mu_mugirl_trackcov_theta;   //!
   TBranch        *b_mu_mugirl_trackcov_qoverp;   //!
   TBranch        *b_mu_mugirl_trackcov_d0_z0;   //!
   TBranch        *b_mu_mugirl_trackcov_d0_phi;   //!
   TBranch        *b_mu_mugirl_trackcov_d0_theta;   //!
   TBranch        *b_mu_mugirl_trackcov_d0_qoverp;   //!
   TBranch        *b_mu_mugirl_trackcov_z0_phi;   //!
   TBranch        *b_mu_mugirl_trackcov_z0_theta;   //!
   TBranch        *b_mu_mugirl_trackcov_z0_qoverp;   //!
   TBranch        *b_mu_mugirl_trackcov_phi_theta;   //!
   TBranch        *b_mu_mugirl_trackcov_phi_qoverp;   //!
   TBranch        *b_mu_mugirl_trackcov_theta_qoverp;   //!
   TBranch        *b_mu_mugirl_trackfitchi2;   //!
   TBranch        *b_mu_mugirl_trackfitndof;   //!
   TBranch        *b_mu_mugirl_hastrack;   //!
   TBranch        *b_mu_mugirl_trackd0beam;   //!
   TBranch        *b_mu_mugirl_trackz0beam;   //!
   TBranch        *b_mu_mugirl_tracksigd0beam;   //!
   TBranch        *b_mu_mugirl_tracksigz0beam;   //!
   TBranch        *b_mu_mugirl_trackd0pv;   //!
   TBranch        *b_mu_mugirl_trackz0pv;   //!
   TBranch        *b_mu_mugirl_tracksigd0pv;   //!
   TBranch        *b_mu_mugirl_tracksigz0pv;   //!
   TBranch        *b_mu_mugirl_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_mu_mugirl_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_mu_mugirl_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_mu_mugirl_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_mu_mugirl_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_mugirl_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_mugirl_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_mugirl_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_mugirl_trackd0pvunbiased;   //!
   TBranch        *b_mu_mugirl_trackz0pvunbiased;   //!
   TBranch        *b_mu_mugirl_tracksigd0pvunbiased;   //!
   TBranch        *b_mu_mugirl_tracksigz0pvunbiased;   //!
   TBranch        *b_mu_mugirl_CaloCell_sampling;   //!
   TBranch        *b_mu_mugirl_CaloCell_eta;   //!
   TBranch        *b_mu_mugirl_CaloCell_phi;   //!
   TBranch        *b_mu_mugirl_CaloCell_dr;   //!
   TBranch        *b_mu_mugirl_CaloCell_E;   //!
   TBranch        *b_mu_mugirl_CaloCell_t;   //!
   TBranch        *b_mu_mugirl_CaloCell_x;   //!
   TBranch        *b_mu_mugirl_CaloCell_y;   //!
   TBranch        *b_mu_mugirl_CaloCell_z;   //!
   TBranch        *b_mu_mugirl_TileBeta;   //!
   TBranch        *b_mu_mugirl_TileBetaMass;   //!
   TBranch        *b_mu_mugirl_meandADC;   //!
   TBranch        *b_mu_mugirl_stau_candidate_assoc_index;   //!
   TBranch        *b_mu_lowbeta_n;   //!
   TBranch        *b_mu_lowbeta_E;   //!
   TBranch        *b_mu_lowbeta_pt;   //!
   TBranch        *b_mu_lowbeta_m;   //!
   TBranch        *b_mu_lowbeta_eta;   //!
   TBranch        *b_mu_lowbeta_phi;   //!
   TBranch        *b_mu_lowbeta_px;   //!
   TBranch        *b_mu_lowbeta_py;   //!
   TBranch        *b_mu_lowbeta_pz;   //!
   TBranch        *b_mu_lowbeta_charge;   //!
   TBranch        *b_mu_lowbeta_allauthor;   //!
   TBranch        *b_mu_lowbeta_author;   //!
   TBranch        *b_mu_lowbeta_beta;   //!
   TBranch        *b_mu_lowbeta_isMuonLikelihood;   //!
   TBranch        *b_mu_lowbeta_matchchi2;   //!
   TBranch        *b_mu_lowbeta_matchndof;   //!
   TBranch        *b_mu_lowbeta_etcone20;   //!
   TBranch        *b_mu_lowbeta_etcone30;   //!
   TBranch        *b_mu_lowbeta_etcone40;   //!
   TBranch        *b_mu_lowbeta_nucone20;   //!
   TBranch        *b_mu_lowbeta_nucone30;   //!
   TBranch        *b_mu_lowbeta_nucone40;   //!
   TBranch        *b_mu_lowbeta_ptcone20;   //!
   TBranch        *b_mu_lowbeta_ptcone30;   //!
   TBranch        *b_mu_lowbeta_ptcone40;   //!
   TBranch        *b_mu_lowbeta_etconeNoEm10;   //!
   TBranch        *b_mu_lowbeta_etconeNoEm20;   //!
   TBranch        *b_mu_lowbeta_etconeNoEm30;   //!
   TBranch        *b_mu_lowbeta_etconeNoEm40;   //!
   TBranch        *b_mu_lowbeta_scatteringCurvatureSignificance;   //!
   TBranch        *b_mu_lowbeta_scatteringNeighbourSignificance;   //!
   TBranch        *b_mu_lowbeta_momentumBalanceSignificance;   //!
   TBranch        *b_mu_lowbeta_energyLossPar;   //!
   TBranch        *b_mu_lowbeta_energyLossErr;   //!
   TBranch        *b_mu_lowbeta_etCore;   //!
   TBranch        *b_mu_lowbeta_energyLossType;   //!
   TBranch        *b_mu_lowbeta_caloMuonIdTag;   //!
   TBranch        *b_mu_lowbeta_caloLRLikelihood;   //!
   TBranch        *b_mu_lowbeta_bestMatch;   //!
   TBranch        *b_mu_lowbeta_isStandAloneMuon;   //!
   TBranch        *b_mu_lowbeta_isCombinedMuon;   //!
   TBranch        *b_mu_lowbeta_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_lowbeta_isSegmentTaggedMuon;   //!
   TBranch        *b_mu_lowbeta_isCaloMuonId;   //!
   TBranch        *b_mu_lowbeta_alsoFoundByLowPt;   //!
   TBranch        *b_mu_lowbeta_alsoFoundByCaloMuonId;   //!
   TBranch        *b_mu_lowbeta_isSiliconAssociatedForwardMuon;   //!
   TBranch        *b_mu_lowbeta_loose;   //!
   TBranch        *b_mu_lowbeta_medium;   //!
   TBranch        *b_mu_lowbeta_tight;   //!
   TBranch        *b_mu_lowbeta_d0_exPV;   //!
   TBranch        *b_mu_lowbeta_z0_exPV;   //!
   TBranch        *b_mu_lowbeta_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_cb_d0_exPV;   //!
   TBranch        *b_mu_lowbeta_cb_z0_exPV;   //!
   TBranch        *b_mu_lowbeta_cb_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_cb_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_cb_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_id_d0_exPV;   //!
   TBranch        *b_mu_lowbeta_id_z0_exPV;   //!
   TBranch        *b_mu_lowbeta_id_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_id_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_id_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_me_d0_exPV;   //!
   TBranch        *b_mu_lowbeta_me_z0_exPV;   //!
   TBranch        *b_mu_lowbeta_me_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_me_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_me_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_ie_d0_exPV;   //!
   TBranch        *b_mu_lowbeta_ie_z0_exPV;   //!
   TBranch        *b_mu_lowbeta_ie_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_ie_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_ie_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_SpaceTime_detID;   //!
   TBranch        *b_mu_lowbeta_SpaceTime_t;   //!
   TBranch        *b_mu_lowbeta_SpaceTime_tError;   //!
   TBranch        *b_mu_lowbeta_SpaceTime_weight;   //!
   TBranch        *b_mu_lowbeta_SpaceTime_x;   //!
   TBranch        *b_mu_lowbeta_SpaceTime_y;   //!
   TBranch        *b_mu_lowbeta_SpaceTime_z;   //!
   TBranch        *b_mu_lowbeta_cov_d0_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_z0_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_d0_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_z0_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_id_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_d0_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_z0_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_me_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_lowbeta_ms_d0;   //!
   TBranch        *b_mu_lowbeta_ms_z0;   //!
   TBranch        *b_mu_lowbeta_ms_phi;   //!
   TBranch        *b_mu_lowbeta_ms_theta;   //!
   TBranch        *b_mu_lowbeta_ms_qoverp;   //!
   TBranch        *b_mu_lowbeta_id_d0;   //!
   TBranch        *b_mu_lowbeta_id_z0;   //!
   TBranch        *b_mu_lowbeta_id_phi;   //!
   TBranch        *b_mu_lowbeta_id_theta;   //!
   TBranch        *b_mu_lowbeta_id_qoverp;   //!
   TBranch        *b_mu_lowbeta_me_d0;   //!
   TBranch        *b_mu_lowbeta_me_z0;   //!
   TBranch        *b_mu_lowbeta_me_phi;   //!
   TBranch        *b_mu_lowbeta_me_theta;   //!
   TBranch        *b_mu_lowbeta_me_qoverp;   //!
   TBranch        *b_mu_lowbeta_ie_d0;   //!
   TBranch        *b_mu_lowbeta_ie_z0;   //!
   TBranch        *b_mu_lowbeta_ie_phi;   //!
   TBranch        *b_mu_lowbeta_ie_theta;   //!
   TBranch        *b_mu_lowbeta_ie_qoverp;   //!
   TBranch        *b_mu_lowbeta_nOutliersOnTrack;   //!
   TBranch        *b_mu_lowbeta_nBLHits;   //!
   TBranch        *b_mu_lowbeta_nPixHits;   //!
   TBranch        *b_mu_lowbeta_nSCTHits;   //!
   TBranch        *b_mu_lowbeta_nTRTHits;   //!
   TBranch        *b_mu_lowbeta_nTRTHighTHits;   //!
   TBranch        *b_mu_lowbeta_nBLSharedHits;   //!
   TBranch        *b_mu_lowbeta_nPixSharedHits;   //!
   TBranch        *b_mu_lowbeta_nPixHoles;   //!
   TBranch        *b_mu_lowbeta_nSCTSharedHits;   //!
   TBranch        *b_mu_lowbeta_nSCTHoles;   //!
   TBranch        *b_mu_lowbeta_nTRTOutliers;   //!
   TBranch        *b_mu_lowbeta_nTRTHighTOutliers;   //!
   TBranch        *b_mu_lowbeta_nGangedPixels;   //!
   TBranch        *b_mu_lowbeta_nPixelDeadSensors;   //!
   TBranch        *b_mu_lowbeta_nSCTDeadSensors;   //!
   TBranch        *b_mu_lowbeta_nTRTDeadStraws;   //!
   TBranch        *b_mu_lowbeta_expectBLayerHit;   //!
   TBranch        *b_mu_lowbeta_nMDTHits;   //!
   TBranch        *b_mu_lowbeta_nMDTHoles;   //!
   TBranch        *b_mu_lowbeta_nCSCEtaHits;   //!
   TBranch        *b_mu_lowbeta_nCSCEtaHoles;   //!
   TBranch        *b_mu_lowbeta_nCSCUnspoiledEtaHits;   //!
   TBranch        *b_mu_lowbeta_nCSCPhiHits;   //!
   TBranch        *b_mu_lowbeta_nCSCPhiHoles;   //!
   TBranch        *b_mu_lowbeta_nRPCEtaHits;   //!
   TBranch        *b_mu_lowbeta_nRPCEtaHoles;   //!
   TBranch        *b_mu_lowbeta_nRPCPhiHits;   //!
   TBranch        *b_mu_lowbeta_nRPCPhiHoles;   //!
   TBranch        *b_mu_lowbeta_nTGCEtaHits;   //!
   TBranch        *b_mu_lowbeta_nTGCEtaHoles;   //!
   TBranch        *b_mu_lowbeta_nTGCPhiHits;   //!
   TBranch        *b_mu_lowbeta_nTGCPhiHoles;   //!
   TBranch        *b_mu_lowbeta_nprecisionLayers;   //!
   TBranch        *b_mu_lowbeta_nprecisionHoleLayers;   //!
   TBranch        *b_mu_lowbeta_nphiLayers;   //!
   TBranch        *b_mu_lowbeta_ntrigEtaLayers;   //!
   TBranch        *b_mu_lowbeta_nphiHoleLayers;   //!
   TBranch        *b_mu_lowbeta_ntrigEtaHoleLayers;   //!
   TBranch        *b_mu_lowbeta_nMDTBIHits;   //!
   TBranch        *b_mu_lowbeta_nMDTBMHits;   //!
   TBranch        *b_mu_lowbeta_nMDTBOHits;   //!
   TBranch        *b_mu_lowbeta_nMDTBEEHits;   //!
   TBranch        *b_mu_lowbeta_nMDTBIS78Hits;   //!
   TBranch        *b_mu_lowbeta_nMDTEIHits;   //!
   TBranch        *b_mu_lowbeta_nMDTEMHits;   //!
   TBranch        *b_mu_lowbeta_nMDTEOHits;   //!
   TBranch        *b_mu_lowbeta_nMDTEEHits;   //!
   TBranch        *b_mu_lowbeta_nRPCLayer1EtaHits;   //!
   TBranch        *b_mu_lowbeta_nRPCLayer2EtaHits;   //!
   TBranch        *b_mu_lowbeta_nRPCLayer3EtaHits;   //!
   TBranch        *b_mu_lowbeta_nRPCLayer1PhiHits;   //!
   TBranch        *b_mu_lowbeta_nRPCLayer2PhiHits;   //!
   TBranch        *b_mu_lowbeta_nRPCLayer3PhiHits;   //!
   TBranch        *b_mu_lowbeta_nTGCLayer1EtaHits;   //!
   TBranch        *b_mu_lowbeta_nTGCLayer2EtaHits;   //!
   TBranch        *b_mu_lowbeta_nTGCLayer3EtaHits;   //!
   TBranch        *b_mu_lowbeta_nTGCLayer4EtaHits;   //!
   TBranch        *b_mu_lowbeta_nTGCLayer1PhiHits;   //!
   TBranch        *b_mu_lowbeta_nTGCLayer2PhiHits;   //!
   TBranch        *b_mu_lowbeta_nTGCLayer3PhiHits;   //!
   TBranch        *b_mu_lowbeta_nTGCLayer4PhiHits;   //!
   TBranch        *b_mu_lowbeta_barrelSectors;   //!
   TBranch        *b_mu_lowbeta_endcapSectors;   //!
   TBranch        *b_mu_lowbeta_trackd0;   //!
   TBranch        *b_mu_lowbeta_trackz0;   //!
   TBranch        *b_mu_lowbeta_trackphi;   //!
   TBranch        *b_mu_lowbeta_tracktheta;   //!
   TBranch        *b_mu_lowbeta_trackqoverp;   //!
   TBranch        *b_mu_lowbeta_trackcov_d0;   //!
   TBranch        *b_mu_lowbeta_trackcov_z0;   //!
   TBranch        *b_mu_lowbeta_trackcov_phi;   //!
   TBranch        *b_mu_lowbeta_trackcov_theta;   //!
   TBranch        *b_mu_lowbeta_trackcov_qoverp;   //!
   TBranch        *b_mu_lowbeta_trackcov_d0_z0;   //!
   TBranch        *b_mu_lowbeta_trackcov_d0_phi;   //!
   TBranch        *b_mu_lowbeta_trackcov_d0_theta;   //!
   TBranch        *b_mu_lowbeta_trackcov_d0_qoverp;   //!
   TBranch        *b_mu_lowbeta_trackcov_z0_phi;   //!
   TBranch        *b_mu_lowbeta_trackcov_z0_theta;   //!
   TBranch        *b_mu_lowbeta_trackcov_z0_qoverp;   //!
   TBranch        *b_mu_lowbeta_trackcov_phi_theta;   //!
   TBranch        *b_mu_lowbeta_trackcov_phi_qoverp;   //!
   TBranch        *b_mu_lowbeta_trackcov_theta_qoverp;   //!
   TBranch        *b_mu_lowbeta_trackfitchi2;   //!
   TBranch        *b_mu_lowbeta_trackfitndof;   //!
   TBranch        *b_mu_lowbeta_hastrack;   //!
   TBranch        *b_mu_lowbeta_trackd0beam;   //!
   TBranch        *b_mu_lowbeta_trackz0beam;   //!
   TBranch        *b_mu_lowbeta_tracksigd0beam;   //!
   TBranch        *b_mu_lowbeta_tracksigz0beam;   //!
   TBranch        *b_mu_lowbeta_trackd0pv;   //!
   TBranch        *b_mu_lowbeta_trackz0pv;   //!
   TBranch        *b_mu_lowbeta_tracksigd0pv;   //!
   TBranch        *b_mu_lowbeta_tracksigz0pv;   //!
   TBranch        *b_mu_lowbeta_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_mu_lowbeta_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_mu_lowbeta_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_mu_lowbeta_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_mu_lowbeta_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_lowbeta_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_lowbeta_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_lowbeta_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_lowbeta_trackd0pvunbiased;   //!
   TBranch        *b_mu_lowbeta_trackz0pvunbiased;   //!
   TBranch        *b_mu_lowbeta_tracksigd0pvunbiased;   //!
   TBranch        *b_mu_lowbeta_tracksigz0pvunbiased;   //!
   TBranch        *b_mu_lowbeta_CaloCell_sampling;   //!
   TBranch        *b_mu_lowbeta_CaloCell_eta;   //!
   TBranch        *b_mu_lowbeta_CaloCell_phi;   //!
   TBranch        *b_mu_lowbeta_CaloCell_dr;   //!
   TBranch        *b_mu_lowbeta_CaloCell_E;   //!
   TBranch        *b_mu_lowbeta_CaloCell_t;   //!
   TBranch        *b_mu_lowbeta_CaloCell_x;   //!
   TBranch        *b_mu_lowbeta_CaloCell_y;   //!
   TBranch        *b_mu_lowbeta_CaloCell_z;   //!
   TBranch        *b_mu_lowbeta_TileBeta;   //!
   TBranch        *b_mu_lowbeta_TileBetaMass;   //!
   TBranch        *b_mu_lowbeta_meandADC;   //!
   TBranch        *b_mu_lowbeta_stau_candidate_assoc_index;   //!
   TBranch        *b_jet_akt4topoem_n;   //!
   TBranch        *b_jet_akt4topoem_E;   //!
   TBranch        *b_jet_akt4topoem_pt;   //!
   TBranch        *b_jet_akt4topoem_m;   //!
   TBranch        *b_jet_akt4topoem_eta;   //!
   TBranch        *b_jet_akt4topoem_phi;   //!
   TBranch        *b_jet_akt4topoem_EtaOrigin;   //!
   TBranch        *b_jet_akt4topoem_PhiOrigin;   //!
   TBranch        *b_jet_akt4topoem_MOrigin;   //!
   TBranch        *b_jet_akt4topoem_EtaOriginEM;   //!
   TBranch        *b_jet_akt4topoem_PhiOriginEM;   //!
   TBranch        *b_jet_akt4topoem_MOriginEM;   //!
   TBranch        *b_jet_akt4topoem_WIDTH;   //!
   TBranch        *b_jet_akt4topoem_n90;   //!
   TBranch        *b_jet_akt4topoem_Timing;   //!
   TBranch        *b_jet_akt4topoem_LArQuality;   //!
   TBranch        *b_jet_akt4topoem_nTrk;   //!
   TBranch        *b_jet_akt4topoem_sumPtTrk;   //!
   TBranch        *b_jet_akt4topoem_OriginIndex;   //!
   TBranch        *b_jet_akt4topoem_HECQuality;   //!
   TBranch        *b_jet_akt4topoem_NegativeE;   //!
   TBranch        *b_jet_akt4topoem_AverageLArQF;   //!
   TBranch        *b_jet_akt4topoem_YFlip12;   //!
   TBranch        *b_jet_akt4topoem_YFlip23;   //!
   TBranch        *b_jet_akt4topoem_BCH_CORR_CELL;   //!
   TBranch        *b_jet_akt4topoem_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_akt4topoem_BCH_CORR_JET;   //!
   TBranch        *b_jet_akt4topoem_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_akt4topoem_ENG_BAD_CELLS;   //!
   TBranch        *b_jet_akt4topoem_N_BAD_CELLS;   //!
   TBranch        *b_jet_akt4topoem_N_BAD_CELLS_CORR;   //!
   TBranch        *b_jet_akt4topoem_BAD_CELLS_CORR_E;   //!
   TBranch        *b_jet_akt4topoem_NumTowers;   //!
   TBranch        *b_jet_akt4topoem_ootFracCells5;   //!
   TBranch        *b_jet_akt4topoem_ootFracCells10;   //!
   TBranch        *b_jet_akt4topoem_ootFracClusters5;   //!
   TBranch        *b_jet_akt4topoem_ootFracClusters10;   //!
   TBranch        *b_jet_akt4topoem_SamplingMax;   //!
   TBranch        *b_jet_akt4topoem_fracSamplingMax;   //!
   TBranch        *b_jet_akt4topoem_hecf;   //!
   TBranch        *b_jet_akt4topoem_tgap3f;   //!
   TBranch        *b_jet_akt4topoem_isUgly;   //!
   TBranch        *b_jet_akt4topoem_isBadLooseMinus;   //!
   TBranch        *b_jet_akt4topoem_isBadLoose;   //!
   TBranch        *b_jet_akt4topoem_isBadMedium;   //!
   TBranch        *b_jet_akt4topoem_isBadTight;   //!
   TBranch        *b_jet_akt4topoem_emfrac;   //!
   TBranch        *b_jet_akt4topoem_Offset;   //!
   TBranch        *b_jet_akt4topoem_EMJES;   //!
   TBranch        *b_jet_akt4topoem_EMJES_EtaCorr;   //!
   TBranch        *b_jet_akt4topoem_EMJESnooffset;   //!
   TBranch        *b_jet_akt4topoem_GCWJES;   //!
   TBranch        *b_jet_akt4topoem_GCWJES_EtaCorr;   //!
   TBranch        *b_jet_akt4topoem_CB;   //!
   TBranch        *b_jet_akt4topoem_LCJES;   //!
   TBranch        *b_jet_akt4topoem_emscale_E;   //!
   TBranch        *b_jet_akt4topoem_emscale_pt;   //!
   TBranch        *b_jet_akt4topoem_emscale_m;   //!
   TBranch        *b_jet_akt4topoem_emscale_eta;   //!
   TBranch        *b_jet_akt4topoem_emscale_phi;   //!
   TBranch        *b_jet_akt4topoem_jvtx_x;   //!
   TBranch        *b_jet_akt4topoem_jvtx_y;   //!
   TBranch        *b_jet_akt4topoem_jvtx_z;   //!
   TBranch        *b_jet_akt4topoem_jvtxf;   //!
   TBranch        *b_jet_akt4topoem_GSCFactorF;   //!
   TBranch        *b_jet_akt4topoem_WidthFraction;   //!
   TBranch        *b_jet_akt4topoem_el_dr;   //!
   TBranch        *b_jet_akt4topoem_el_matched;   //!
   TBranch        *b_jet_akt4topoem_mu_dr;   //!
   TBranch        *b_jet_akt4topoem_mu_matched;   //!
   TBranch        *b_jet_akt4topoem_L1_dr;   //!
   TBranch        *b_jet_akt4topoem_L1_matched;   //!
   TBranch        *b_jet_akt4topoem_L2_dr;   //!
   TBranch        *b_jet_akt4topoem_L2_matched;   //!
   TBranch        *b_jet_akt4topoem_EF_dr;   //!
   TBranch        *b_jet_akt4topoem_EF_matched;   //!
   TBranch        *b_jet_akt6topoem_n;   //!
   TBranch        *b_jet_akt6topoem_E;   //!
   TBranch        *b_jet_akt6topoem_pt;   //!
   TBranch        *b_jet_akt6topoem_m;   //!
   TBranch        *b_jet_akt6topoem_eta;   //!
   TBranch        *b_jet_akt6topoem_phi;   //!
   TBranch        *b_jet_akt6topoem_EtaOrigin;   //!
   TBranch        *b_jet_akt6topoem_PhiOrigin;   //!
   TBranch        *b_jet_akt6topoem_MOrigin;   //!
   TBranch        *b_jet_akt6topoem_EtaOriginEM;   //!
   TBranch        *b_jet_akt6topoem_PhiOriginEM;   //!
   TBranch        *b_jet_akt6topoem_MOriginEM;   //!
   TBranch        *b_jet_akt6topoem_WIDTH;   //!
   TBranch        *b_jet_akt6topoem_n90;   //!
   TBranch        *b_jet_akt6topoem_Timing;   //!
   TBranch        *b_jet_akt6topoem_LArQuality;   //!
   TBranch        *b_jet_akt6topoem_nTrk;   //!
   TBranch        *b_jet_akt6topoem_sumPtTrk;   //!
   TBranch        *b_jet_akt6topoem_OriginIndex;   //!
   TBranch        *b_jet_akt6topoem_HECQuality;   //!
   TBranch        *b_jet_akt6topoem_NegativeE;   //!
   TBranch        *b_jet_akt6topoem_AverageLArQF;   //!
   TBranch        *b_jet_akt6topoem_YFlip12;   //!
   TBranch        *b_jet_akt6topoem_YFlip23;   //!
   TBranch        *b_jet_akt6topoem_BCH_CORR_CELL;   //!
   TBranch        *b_jet_akt6topoem_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_akt6topoem_BCH_CORR_JET;   //!
   TBranch        *b_jet_akt6topoem_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_akt6topoem_ENG_BAD_CELLS;   //!
   TBranch        *b_jet_akt6topoem_N_BAD_CELLS;   //!
   TBranch        *b_jet_akt6topoem_N_BAD_CELLS_CORR;   //!
   TBranch        *b_jet_akt6topoem_BAD_CELLS_CORR_E;   //!
   TBranch        *b_jet_akt6topoem_NumTowers;   //!
   TBranch        *b_jet_akt6topoem_ootFracCells5;   //!
   TBranch        *b_jet_akt6topoem_ootFracCells10;   //!
   TBranch        *b_jet_akt6topoem_ootFracClusters5;   //!
   TBranch        *b_jet_akt6topoem_ootFracClusters10;   //!
   TBranch        *b_jet_akt6topoem_SamplingMax;   //!
   TBranch        *b_jet_akt6topoem_fracSamplingMax;   //!
   TBranch        *b_jet_akt6topoem_hecf;   //!
   TBranch        *b_jet_akt6topoem_tgap3f;   //!
   TBranch        *b_jet_akt6topoem_isUgly;   //!
   TBranch        *b_jet_akt6topoem_isBadLooseMinus;   //!
   TBranch        *b_jet_akt6topoem_isBadLoose;   //!
   TBranch        *b_jet_akt6topoem_isBadMedium;   //!
   TBranch        *b_jet_akt6topoem_isBadTight;   //!
   TBranch        *b_jet_akt6topoem_emfrac;   //!
   TBranch        *b_jet_akt6topoem_Offset;   //!
   TBranch        *b_jet_akt6topoem_EMJES;   //!
   TBranch        *b_jet_akt6topoem_EMJES_EtaCorr;   //!
   TBranch        *b_jet_akt6topoem_EMJESnooffset;   //!
   TBranch        *b_jet_akt6topoem_GCWJES;   //!
   TBranch        *b_jet_akt6topoem_GCWJES_EtaCorr;   //!
   TBranch        *b_jet_akt6topoem_CB;   //!
   TBranch        *b_jet_akt6topoem_LCJES;   //!
   TBranch        *b_jet_akt6topoem_emscale_E;   //!
   TBranch        *b_jet_akt6topoem_emscale_pt;   //!
   TBranch        *b_jet_akt6topoem_emscale_m;   //!
   TBranch        *b_jet_akt6topoem_emscale_eta;   //!
   TBranch        *b_jet_akt6topoem_emscale_phi;   //!
   TBranch        *b_jet_akt6topoem_jvtx_x;   //!
   TBranch        *b_jet_akt6topoem_jvtx_y;   //!
   TBranch        *b_jet_akt6topoem_jvtx_z;   //!
   TBranch        *b_jet_akt6topoem_jvtxf;   //!
   TBranch        *b_jet_akt6topoem_GSCFactorF;   //!
   TBranch        *b_jet_akt6topoem_WidthFraction;   //!
   TBranch        *b_jet_akt6topoem_el_dr;   //!
   TBranch        *b_jet_akt6topoem_el_matched;   //!
   TBranch        *b_jet_akt6topoem_mu_dr;   //!
   TBranch        *b_jet_akt6topoem_mu_matched;   //!
   TBranch        *b_jet_akt6topoem_L1_dr;   //!
   TBranch        *b_jet_akt6topoem_L1_matched;   //!
   TBranch        *b_jet_akt6topoem_L2_dr;   //!
   TBranch        *b_jet_akt6topoem_L2_matched;   //!
   TBranch        *b_jet_akt6topoem_EF_dr;   //!
   TBranch        *b_jet_akt6topoem_EF_matched;   //!
   TBranch        *b_trk_n;   //!
   TBranch        *b_trk_pt;   //!
   TBranch        *b_trk_eta;   //!
   TBranch        *b_trk_d0_wrtPV;   //!
   TBranch        *b_trk_z0_wrtPV;   //!
   TBranch        *b_trk_phi_wrtPV;   //!
   TBranch        *b_trk_theta_wrtPV;   //!
   TBranch        *b_trk_qoverp_wrtPV;   //!
   TBranch        *b_trk_d0_wrtBL;   //!
   TBranch        *b_trk_z0_wrtBL;   //!
   TBranch        *b_trk_phi_wrtBL;   //!
   TBranch        *b_trk_d0_err_wrtBL;   //!
   TBranch        *b_trk_z0_err_wrtBL;   //!
   TBranch        *b_trk_phi_err_wrtBL;   //!
   TBranch        *b_trk_theta_err_wrtBL;   //!
   TBranch        *b_trk_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_d0_z0_err_wrtBL;   //!
   TBranch        *b_trk_d0_phi_err_wrtBL;   //!
   TBranch        *b_trk_d0_theta_err_wrtBL;   //!
   TBranch        *b_trk_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_z0_phi_err_wrtBL;   //!
   TBranch        *b_trk_z0_theta_err_wrtBL;   //!
   TBranch        *b_trk_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_phi_theta_err_wrtBL;   //!
   TBranch        *b_trk_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_theta_qoverp_err_wrtBL;   //!
   TBranch        *b_trkpt5_n;   //!
   TBranch        *b_trkpt5_d0;   //!
   TBranch        *b_trkpt5_z0;   //!
   TBranch        *b_trkpt5_phi;   //!
   TBranch        *b_trkpt5_theta;   //!
   TBranch        *b_trkpt5_qoverp;   //!
   TBranch        *b_trkpt5_pt;   //!
   TBranch        *b_trkpt5_eta;   //!
   TBranch        *b_trkpt5_err_d0;   //!
   TBranch        *b_trkpt5_err_z0;   //!
   TBranch        *b_trkpt5_err_phi;   //!
   TBranch        *b_trkpt5_err_theta;   //!
   TBranch        *b_trkpt5_err_qoverp;   //!
   TBranch        *b_trkpt5_d0_wrtPV;   //!
   TBranch        *b_trkpt5_z0_wrtPV;   //!
   TBranch        *b_trkpt5_phi_wrtPV;   //!
   TBranch        *b_trkpt5_err_d0_wrtPV;   //!
   TBranch        *b_trkpt5_err_z0_wrtPV;   //!
   TBranch        *b_trkpt5_err_phi_wrtPV;   //!
   TBranch        *b_trkpt5_err_theta_wrtPV;   //!
   TBranch        *b_trkpt5_err_qoverp_wrtPV;   //!
   TBranch        *b_trkpt5_cov_d0_z0_wrtPV;   //!
   TBranch        *b_trkpt5_cov_d0_phi_wrtPV;   //!
   TBranch        *b_trkpt5_cov_d0_theta_wrtPV;   //!
   TBranch        *b_trkpt5_cov_d0_qoverp_wrtPV;   //!
   TBranch        *b_trkpt5_cov_z0_phi_wrtPV;   //!
   TBranch        *b_trkpt5_cov_z0_theta_wrtPV;   //!
   TBranch        *b_trkpt5_cov_z0_qoverp_wrtPV;   //!
   TBranch        *b_trkpt5_cov_phi_theta_wrtPV;   //!
   TBranch        *b_trkpt5_cov_phi_qoverp_wrtPV;   //!
   TBranch        *b_trkpt5_cov_theta_qoverp_wrtPV;   //!
   TBranch        *b_trkpt5_d0_wrtBL;   //!
   TBranch        *b_trkpt5_z0_wrtBL;   //!
   TBranch        *b_trkpt5_phi_wrtBL;   //!
   TBranch        *b_trkpt5_d0_err_wrtBL;   //!
   TBranch        *b_trkpt5_z0_err_wrtBL;   //!
   TBranch        *b_trkpt5_phi_err_wrtBL;   //!
   TBranch        *b_trkpt5_theta_err_wrtBL;   //!
   TBranch        *b_trkpt5_qoverp_err_wrtBL;   //!
   TBranch        *b_trkpt5_d0_z0_err_wrtBL;   //!
   TBranch        *b_trkpt5_d0_phi_err_wrtBL;   //!
   TBranch        *b_trkpt5_d0_theta_err_wrtBL;   //!
   TBranch        *b_trkpt5_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkpt5_z0_phi_err_wrtBL;   //!
   TBranch        *b_trkpt5_z0_theta_err_wrtBL;   //!
   TBranch        *b_trkpt5_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkpt5_phi_theta_err_wrtBL;   //!
   TBranch        *b_trkpt5_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_trkpt5_theta_qoverp_err_wrtBL;   //!
   TBranch        *b_trkpt5_chi2;   //!
   TBranch        *b_trkpt5_ndof;   //!
   TBranch        *b_trkpt5_nBLHits;   //!
   TBranch        *b_trkpt5_nPixHits;   //!
   TBranch        *b_trkpt5_nSCTHits;   //!
   TBranch        *b_trkpt5_nTRTHits;   //!
   TBranch        *b_trkpt5_nTRTHighTHits;   //!
   TBranch        *b_trkpt5_nPixHoles;   //!
   TBranch        *b_trkpt5_nSCTHoles;   //!
   TBranch        *b_trkpt5_nTRTHoles;   //!
   TBranch        *b_trkpt5_nPixelDeadSensors;   //!
   TBranch        *b_trkpt5_nSCTDeadSensors;   //!
   TBranch        *b_trkpt5_nBLSharedHits;   //!
   TBranch        *b_trkpt5_nPixSharedHits;   //!
   TBranch        *b_trkpt5_nSCTSharedHits;   //!
   TBranch        *b_trkpt5_nBLayerSplitHits;   //!
   TBranch        *b_trkpt5_nPixSplitHits;   //!
   TBranch        *b_trkpt5_nBLayerOutliers;   //!
   TBranch        *b_trkpt5_nPixelOutliers;   //!
   TBranch        *b_trkpt5_nSCTOutliers;   //!
   TBranch        *b_trkpt5_nTRTOutliers;   //!
   TBranch        *b_trkpt5_nTRTHighTOutliers;   //!
   TBranch        *b_trkpt5_nContribPixelLayers;   //!
   TBranch        *b_trkpt5_nGangedPixels;   //!
   TBranch        *b_trkpt5_nGangedFlaggedFakes;   //!
   TBranch        *b_trkpt5_nPixelSpoiltHits;   //!
   TBranch        *b_trkpt5_nSCTDoubleHoles;   //!
   TBranch        *b_trkpt5_nSCTSpoiltHits;   //!
   TBranch        *b_trkpt5_nTRTDeadStraws;   //!
   TBranch        *b_trkpt5_nTRTTubeHits;   //!
   TBranch        *b_trkpt5_expectBLayerHit;   //!
   TBranch        *b_trkpt5_nMDTHits;   //!
   TBranch        *b_trkpt5_nCSCEtaHits;   //!
   TBranch        *b_trkpt5_nCSCPhiHits;   //!
   TBranch        *b_trkpt5_nRPCEtaHits;   //!
   TBranch        *b_trkpt5_nRPCPhiHits;   //!
   TBranch        *b_trkpt5_nTGCEtaHits;   //!
   TBranch        *b_trkpt5_nTGCPhiHits;   //!
   TBranch        *b_trkpt5_nHits;   //!
   TBranch        *b_trkpt5_nHoles;   //!
   TBranch        *b_trkpt5_hitPattern;   //!
   TBranch        *b_trkpt5_TRTHighTHitsRatio;   //!
   TBranch        *b_trkpt5_TRTHighTOutliersRatio;   //!
   TBranch        *b_trkpt5_pixeldEdx;   //!
   TBranch        *b_trkpt5_nGoodHitsPixeldEdx;   //!
   TBranch        *b_trkpt5_massPixeldEdx;   //!
   TBranch        *b_trkpt5_likelihoodsPixeldEdx;   //!
   TBranch        *b_trkpt5_fitter;   //!
   TBranch        *b_trkpt5_patternReco1;   //!
   TBranch        *b_trkpt5_patternReco2;   //!
   TBranch        *b_trkpt5_trackProperties;   //!
   TBranch        *b_trkpt5_particleHypothesis;   //!
   TBranch        *b_trkpt5_Pixel_hit_n;   //!
   TBranch        *b_trkpt5_Pixel_hit_id;   //!
   TBranch        *b_trkpt5_Pixel_hit_detElementId;   //!
   TBranch        *b_trkpt5_Pixel_hit_detType;   //!
   TBranch        *b_trkpt5_Pixel_hit_bec;   //!
   TBranch        *b_trkpt5_Pixel_hit_layer;   //!
   TBranch        *b_trkpt5_Pixel_hit_charge;   //!
   TBranch        *b_trkpt5_Pixel_hit_sizePhi;   //!
   TBranch        *b_trkpt5_Pixel_hit_sizeZ;   //!
   TBranch        *b_trkpt5_Pixel_hit_size;   //!
   TBranch        *b_trkpt5_Pixel_hit_isFake;   //!
   TBranch        *b_trkpt5_Pixel_hit_isGanged;   //!
   TBranch        *b_trkpt5_Pixel_hit_isSplit;   //!
   TBranch        *b_trkpt5_Pixel_hit_splitProb1;   //!
   TBranch        *b_trkpt5_Pixel_hit_splitProb2;   //!
   TBranch        *b_trkpt5_Pixel_hit_isCompetingRIO;   //!
   TBranch        *b_trkpt5_Pixel_hit_locX;   //!
   TBranch        *b_trkpt5_Pixel_hit_locY;   //!
   TBranch        *b_trkpt5_Pixel_hit_incidencePhi;   //!
   TBranch        *b_trkpt5_Pixel_hit_incidenceTheta;   //!
   TBranch        *b_trkpt5_Pixel_hit_err_locX;   //!
   TBranch        *b_trkpt5_Pixel_hit_err_locY;   //!
   TBranch        *b_trkpt5_Pixel_hit_cov_locXY;   //!
   TBranch        *b_trkpt5_Pixel_hit_x;   //!
   TBranch        *b_trkpt5_Pixel_hit_y;   //!
   TBranch        *b_trkpt5_Pixel_hit_z;   //!
   TBranch        *b_trkpt5_Pixel_hit_trkLocX;   //!
   TBranch        *b_trkpt5_Pixel_hit_trkLocY;   //!
   TBranch        *b_trkpt5_Pixel_hit_err_trkLocX;   //!
   TBranch        *b_trkpt5_Pixel_hit_err_trkLocY;   //!
   TBranch        *b_trkpt5_Pixel_hit_cov_trkLocXY;   //!
   TBranch        *b_trkpt5_Pixel_hit_chi2;   //!
   TBranch        *b_trkpt5_Pixel_hit_ndof;   //!
   TBranch        *b_trkpt5_calodEdx;   //!
   TBranch        *b_trkpt5_calodEdx_err;   //!
   TBranch        *b_trkpt5_calodEdx_betagamma;   //!
   TBranch        *b_trkpt5_calodEdx_betagamma_err;   //!
   TBranch        *b_trkpt5_calodEdx_mean_EM;   //!
   TBranch        *b_trkpt5_calodEdx_mean_HadrCaloBarrel;   //!
   TBranch        *b_trkpt5_calodEdx_mean_HadrCaloEndcaps;   //!
   TBranch        *b_trkpt5_raw_calodEdx;   //!
   TBranch        *b_trkpt5_raw_calodEdx_err;   //!
   TBranch        *b_trkpt5_raw_calodEdx_dE;   //!
   TBranch        *b_trkpt5_raw_calodEdx_dE_err;   //!
   TBranch        *b_trkpt5_raw_calodEdx_dx;   //!
   TBranch        *b_trkpt5_raw_calodEdx_dx_err;   //!
   TBranch        *b_trkpt5_raw_calodEdx_dN;   //!
   TBranch        *b_trkpt5_CaloCell_sampling;   //!
   TBranch        *b_trkpt5_CaloCell_eta;   //!
   TBranch        *b_trkpt5_CaloCell_phi;   //!
   TBranch        *b_trkpt5_CaloCell_dr;   //!
   TBranch        *b_trkpt5_CaloCell_E;   //!
   TBranch        *b_trkpt5_CaloCell_t;   //!
   TBranch        *b_trkpt5_CaloCell_x;   //!
   TBranch        *b_trkpt5_CaloCell_y;   //!
   TBranch        *b_trkpt5_CaloCell_z;   //!
   TBranch        *b_trkpt5_TileBeta;   //!
   TBranch        *b_trkpt5_TileBetaMass;   //!
   TBranch        *b_trkpt5_refit_res_pt;   //!
   TBranch        *b_trkpt5_refit_res_eta;   //!
   TBranch        *b_trkpt5_refit_res_phi;   //!
   TBranch        *b_trkpt5_trt_n;   //!
   TBranch        *b_trkpt5_trt_barrelendcap;   //!
   TBranch        *b_trkpt5_trt_phimodule;   //!
   TBranch        *b_trkpt5_trt_layerwheel;   //!
   TBranch        *b_trkpt5_trt_strawlayer;   //!
   TBranch        *b_trkpt5_trt_strawid;   //!
   TBranch        *b_trkpt5_trt_hitx;   //!
   TBranch        *b_trkpt5_trt_hity;   //!
   TBranch        *b_trkpt5_trt_hitz;   //!
   TBranch        *b_trkpt5_trt_t0;   //!
   TBranch        *b_trkpt5_trt_tot;   //!
   TBranch        *b_trkpt5_trt_rawdrifttime;   //!
   TBranch        *b_trkpt5_trt_trackradius;   //!
   TBranch        *b_trkpt5_trt_driftradius;   //!
   TBranch        *b_trkpt5_trt_risingedge;   //!
   TBranch        *b_trkpt5_trt_fallingedge;   //!
   TBranch        *b_trkpt5_trt_rawbitpatterns;   //!
   TBranch        *b_trkpt5_trt_istube;   //!
   TBranch        *b_trkpt5_trt_NBI_dEdxTrtHighThresholdFraction;   //!
   TBranch        *b_trkpt5_trt_NBI_dEdxTrtLastBitFraction;   //!
   TBranch        *b_trkpt5_trt_Indiana_dEdxTrtBitsOverThreshold;   //!
   TBranch        *b_trkpt5_trt_Indiana_dEdxTrtTrailingEdge;   //!
   TBranch        *b_trkpt5_trt_Indiana_dEdxTrtLastBitFraction;   //!
   TBranch        *b_trkpt5_trt_InDetLowBetaCandidate_BitsOverThr;   //!
   TBranch        *b_trkpt5_trt_InDetLowBetaCandidate_TrailingEdge;   //!
   TBranch        *b_trkpt5_trt_InDetLowBetaCandidate_TrailingEdgeError;   //!
   TBranch        *b_trkpt5_trt_InDetLowBetaCandidate_lastBits;   //!
   TBranch        *b_trkpt5_trt_InDetLowBetaCandidate_dEdx;   //!
   TBranch        *b_trkpt5_trt_InDetLowBetaCandidate_LikelihoodBeta;   //!
   TBranch        *b_trkpt5_trt_InDetLowBetaCandidate_LikelihoodError;   //!
   TBranch        *b_trkpt5_trt_InDetLowBetaCandidate_HighTbits;   //!
   TBranch        *b_trkpt5_trt_ToT_Tools_usedHits;   //!
   TBranch        *b_trkpt5_trt_ToT_Tools_dEdx;   //!
   TBranch        *b_trkpt5_trt_ToT_Tools_usedHits_L;   //!
   TBranch        *b_trkpt5_trt_ToT_Tools_dEdx_L;   //!
   TBranch        *b_MET_RefFinal_etx;   //!
   TBranch        *b_MET_RefFinal_ety;   //!
   TBranch        *b_MET_RefFinal_phi;   //!
   TBranch        *b_MET_RefFinal_et;   //!
   TBranch        *b_MET_RefFinal_sumet;   //!
   TBranch        *b_MET_RefFinal_etx_CentralReg;   //!
   TBranch        *b_MET_RefFinal_ety_CentralReg;   //!
   TBranch        *b_MET_RefFinal_sumet_CentralReg;   //!
   TBranch        *b_MET_RefFinal_phi_CentralReg;   //!
   TBranch        *b_MET_RefFinal_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_etx_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_ety_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_phi_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_etx;   //!
   TBranch        *b_MET_RefMuon_ety;   //!
   TBranch        *b_MET_RefMuon_phi;   //!
   TBranch        *b_MET_RefMuon_et;   //!
   TBranch        *b_MET_RefMuon_sumet;   //!
   TBranch        *b_MET_RefMuon_etx_CentralReg;   //!
   TBranch        *b_MET_RefMuon_ety_CentralReg;   //!
   TBranch        *b_MET_RefMuon_sumet_CentralReg;   //!
   TBranch        *b_MET_RefMuon_phi_CentralReg;   //!
   TBranch        *b_MET_RefMuon_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_etx_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_ety_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_phi_ForwardReg;   //!
   TBranch        *b_MET_RefMuons_etx;   //!
   TBranch        *b_MET_RefMuons_ety;   //!
   TBranch        *b_MET_RefMuons_phi;   //!
   TBranch        *b_MET_RefMuons_et;   //!
   TBranch        *b_MET_RefMuons_sumet;   //!
   TBranch        *b_MET_RefMuons_etx_CentralReg;   //!
   TBranch        *b_MET_RefMuons_ety_CentralReg;   //!
   TBranch        *b_MET_RefMuons_sumet_CentralReg;   //!
   TBranch        *b_MET_RefMuons_phi_CentralReg;   //!
   TBranch        *b_MET_RefMuons_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefMuons_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefMuons_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefMuons_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefMuons_etx_ForwardReg;   //!
   TBranch        *b_MET_RefMuons_ety_ForwardReg;   //!
   TBranch        *b_MET_RefMuons_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefMuons_phi_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_em_etx;   //!
   TBranch        *b_MET_RefFinal_em_ety;   //!
   TBranch        *b_MET_RefFinal_em_phi;   //!
   TBranch        *b_MET_RefFinal_em_et;   //!
   TBranch        *b_MET_RefFinal_em_sumet;   //!
   TBranch        *b_MET_RefFinal_em_etx_CentralReg;   //!
   TBranch        *b_MET_RefFinal_em_ety_CentralReg;   //!
   TBranch        *b_MET_RefFinal_em_sumet_CentralReg;   //!
   TBranch        *b_MET_RefFinal_em_phi_CentralReg;   //!
   TBranch        *b_MET_RefFinal_em_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_em_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_em_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_em_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_em_etx_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_em_ety_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_em_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_em_phi_ForwardReg;   //!
   TBranch        *b_MET_Muons_Isol_etx;   //!
   TBranch        *b_MET_Muons_Isol_ety;   //!
   TBranch        *b_MET_Muons_Isol_phi;   //!
   TBranch        *b_MET_Muons_Isol_et;   //!
   TBranch        *b_MET_Muons_Isol_sumet;   //!
   TBranch        *b_MET_Muons_Isol_etx_CentralReg;   //!
   TBranch        *b_MET_Muons_Isol_ety_CentralReg;   //!
   TBranch        *b_MET_Muons_Isol_sumet_CentralReg;   //!
   TBranch        *b_MET_Muons_Isol_phi_CentralReg;   //!
   TBranch        *b_MET_Muons_Isol_etx_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Isol_ety_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Isol_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Isol_phi_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Isol_etx_ForwardReg;   //!
   TBranch        *b_MET_Muons_Isol_ety_ForwardReg;   //!
   TBranch        *b_MET_Muons_Isol_sumet_ForwardReg;   //!
   TBranch        *b_MET_Muons_Isol_phi_ForwardReg;   //!
   TBranch        *b_MET_Muons_NonIsol_etx;   //!
   TBranch        *b_MET_Muons_NonIsol_ety;   //!
   TBranch        *b_MET_Muons_NonIsol_phi;   //!
   TBranch        *b_MET_Muons_NonIsol_et;   //!
   TBranch        *b_MET_Muons_NonIsol_sumet;   //!
   TBranch        *b_MET_Muons_NonIsol_etx_CentralReg;   //!
   TBranch        *b_MET_Muons_NonIsol_ety_CentralReg;   //!
   TBranch        *b_MET_Muons_NonIsol_sumet_CentralReg;   //!
   TBranch        *b_MET_Muons_NonIsol_phi_CentralReg;   //!
   TBranch        *b_MET_Muons_NonIsol_etx_EndcapRegion;   //!
   TBranch        *b_MET_Muons_NonIsol_ety_EndcapRegion;   //!
   TBranch        *b_MET_Muons_NonIsol_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Muons_NonIsol_phi_EndcapRegion;   //!
   TBranch        *b_MET_Muons_NonIsol_etx_ForwardReg;   //!
   TBranch        *b_MET_Muons_NonIsol_ety_ForwardReg;   //!
   TBranch        *b_MET_Muons_NonIsol_sumet_ForwardReg;   //!
   TBranch        *b_MET_Muons_NonIsol_phi_ForwardReg;   //!
   TBranch        *b_MET_Muons_Total_etx;   //!
   TBranch        *b_MET_Muons_Total_ety;   //!
   TBranch        *b_MET_Muons_Total_phi;   //!
   TBranch        *b_MET_Muons_Total_et;   //!
   TBranch        *b_MET_Muons_Total_sumet;   //!
   TBranch        *b_MET_Muons_Total_etx_CentralReg;   //!
   TBranch        *b_MET_Muons_Total_ety_CentralReg;   //!
   TBranch        *b_MET_Muons_Total_sumet_CentralReg;   //!
   TBranch        *b_MET_Muons_Total_phi_CentralReg;   //!
   TBranch        *b_MET_Muons_Total_etx_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Total_ety_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Total_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Total_phi_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Total_etx_ForwardReg;   //!
   TBranch        *b_MET_Muons_Total_ety_ForwardReg;   //!
   TBranch        *b_MET_Muons_Total_sumet_ForwardReg;   //!
   TBranch        *b_MET_Muons_Total_phi_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_etx;   //!
   TBranch        *b_MET_MuonBoy_ety;   //!
   TBranch        *b_MET_MuonBoy_phi;   //!
   TBranch        *b_MET_MuonBoy_et;   //!
   TBranch        *b_MET_MuonBoy_sumet;   //!
   TBranch        *b_MET_MuonBoy_etx_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_ety_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_sumet_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_phi_CentralReg;   //!
   TBranch        *b_MET_MuonBoy_etx_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_ety_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_sumet_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_phi_EndcapRegion;   //!
   TBranch        *b_MET_MuonBoy_etx_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_ety_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_sumet_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_phi_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_STVF_etx;   //!
   TBranch        *b_MET_RefFinal_STVF_ety;   //!
   TBranch        *b_MET_RefFinal_STVF_phi;   //!
   TBranch        *b_MET_RefFinal_STVF_et;   //!
   TBranch        *b_MET_RefFinal_STVF_sumet;   //!
   TBranch        *b_MET_RefFinal_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_RefFinal_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_RefFinal_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_RefFinal_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_RefFinal_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_RefGamma_STVF_etx;   //!
   TBranch        *b_MET_RefGamma_STVF_ety;   //!
   TBranch        *b_MET_RefGamma_STVF_phi;   //!
   TBranch        *b_MET_RefGamma_STVF_et;   //!
   TBranch        *b_MET_RefGamma_STVF_sumet;   //!
   TBranch        *b_MET_RefGamma_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_RefGamma_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_RefGamma_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_RefGamma_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_RefGamma_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefGamma_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefGamma_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefGamma_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefGamma_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_RefGamma_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_RefGamma_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefGamma_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_RefEle_STVF_etx;   //!
   TBranch        *b_MET_RefEle_STVF_ety;   //!
   TBranch        *b_MET_RefEle_STVF_phi;   //!
   TBranch        *b_MET_RefEle_STVF_et;   //!
   TBranch        *b_MET_RefEle_STVF_sumet;   //!
   TBranch        *b_MET_RefEle_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_RefEle_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_RefEle_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_RefEle_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_RefEle_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefEle_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefEle_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefEle_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefEle_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_RefEle_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_RefEle_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefEle_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_RefTau_STVF_etx;   //!
   TBranch        *b_MET_RefTau_STVF_ety;   //!
   TBranch        *b_MET_RefTau_STVF_phi;   //!
   TBranch        *b_MET_RefTau_STVF_et;   //!
   TBranch        *b_MET_RefTau_STVF_sumet;   //!
   TBranch        *b_MET_RefTau_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_RefTau_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_RefTau_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_RefTau_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_RefTau_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefTau_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefTau_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefTau_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefTau_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_RefTau_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_RefTau_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefTau_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_RefJet_STVF_etx;   //!
   TBranch        *b_MET_RefJet_STVF_ety;   //!
   TBranch        *b_MET_RefJet_STVF_phi;   //!
   TBranch        *b_MET_RefJet_STVF_et;   //!
   TBranch        *b_MET_RefJet_STVF_sumet;   //!
   TBranch        *b_MET_RefJet_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_RefJet_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_RefJet_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_RefJet_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_RefJet_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefJet_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefJet_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefJet_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefJet_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_RefJet_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_RefJet_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefJet_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_etx;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_ety;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_phi;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_et;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_sumet;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Staco_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_etx;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_ety;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_phi;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_et;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_sumet;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_Muon_Isol_Staco_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_etx;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_ety;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_phi;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_et;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_sumet;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_etx;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_ety;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_phi;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_et;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_sumet;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_Muon_Total_Staco_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_etx;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_ety;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_phi;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_et;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_sumet;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_CellOut_STVF_etx;   //!
   TBranch        *b_MET_CellOut_STVF_ety;   //!
   TBranch        *b_MET_CellOut_STVF_phi;   //!
   TBranch        *b_MET_CellOut_STVF_et;   //!
   TBranch        *b_MET_CellOut_STVF_sumet;   //!
   TBranch        *b_MET_CellOut_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_CellOut_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_CellOut_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_CellOut_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_CellOut_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_CellOut_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_CellOut_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_CellOut_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Track_STVF_etx;   //!
   TBranch        *b_MET_CellOut_Track_STVF_ety;   //!
   TBranch        *b_MET_CellOut_Track_STVF_phi;   //!
   TBranch        *b_MET_CellOut_Track_STVF_et;   //!
   TBranch        *b_MET_CellOut_Track_STVF_sumet;   //!
   TBranch        *b_MET_CellOut_Track_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_CellOut_Track_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_CellOut_Track_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_CellOut_Track_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_CellOut_Track_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Track_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Track_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Track_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Track_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Track_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Track_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Track_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_etx;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_ety;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_phi;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_et;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_sumet;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_CellOut_TrackPV_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_CellOutCorr_STVF_etx;   //!
   TBranch        *b_MET_CellOutCorr_STVF_ety;   //!
   TBranch        *b_MET_CellOutCorr_STVF_phi;   //!
   TBranch        *b_MET_CellOutCorr_STVF_et;   //!
   TBranch        *b_MET_CellOutCorr_STVF_sumet;   //!
   TBranch        *b_MET_CellOutCorr_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_CellOutCorr_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_CellOutCorr_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_CellOutCorr_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_CellOutCorr_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_CellOutCorr_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_CellOutCorr_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_CellOutCorr_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_CellOutCorr_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_CellOutCorr_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_CellOutCorr_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_CellOutCorr_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_Cryo_STVF_etx;   //!
   TBranch        *b_MET_Cryo_STVF_ety;   //!
   TBranch        *b_MET_Cryo_STVF_phi;   //!
   TBranch        *b_MET_Cryo_STVF_et;   //!
   TBranch        *b_MET_Cryo_STVF_sumet;   //!
   TBranch        *b_MET_Cryo_STVF_etx_CentralReg;   //!
   TBranch        *b_MET_Cryo_STVF_ety_CentralReg;   //!
   TBranch        *b_MET_Cryo_STVF_sumet_CentralReg;   //!
   TBranch        *b_MET_Cryo_STVF_phi_CentralReg;   //!
   TBranch        *b_MET_Cryo_STVF_etx_EndcapRegion;   //!
   TBranch        *b_MET_Cryo_STVF_ety_EndcapRegion;   //!
   TBranch        *b_MET_Cryo_STVF_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Cryo_STVF_phi_EndcapRegion;   //!
   TBranch        *b_MET_Cryo_STVF_etx_ForwardReg;   //!
   TBranch        *b_MET_Cryo_STVF_ety_ForwardReg;   //!
   TBranch        *b_MET_Cryo_STVF_sumet_ForwardReg;   //!
   TBranch        *b_MET_Cryo_STVF_phi_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_etx;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_ety;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_phi;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_et;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_sumet;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_etx_CentralReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_ety_CentralReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_sumet_CentralReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_phi_CentralReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_etx_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_ety_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_sumet_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_phi_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_etx_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_ety_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_sumet_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muid_phi_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_etx;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_ety;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_phi;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_et;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_sumet;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_etx_CentralReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_ety_CentralReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_sumet_CentralReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_phi_CentralReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_etx_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_ety_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_sumet_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_phi_EndcapRegion;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_etx_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_ety_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_sumet_ForwardReg;   //!
   TBranch        *b_MET_CellOut_Eflow_Muons_phi_ForwardReg;   //!
   TBranch        *b_MET_RefMuons_Track_etx;   //!
   TBranch        *b_MET_RefMuons_Track_ety;   //!
   TBranch        *b_MET_RefMuons_Track_phi;   //!
   TBranch        *b_MET_RefMuons_Track_et;   //!
   TBranch        *b_MET_RefMuons_Track_sumet;   //!
   TBranch        *b_MET_RefMuons_Track_etx_CentralReg;   //!
   TBranch        *b_MET_RefMuons_Track_ety_CentralReg;   //!
   TBranch        *b_MET_RefMuons_Track_sumet_CentralReg;   //!
   TBranch        *b_MET_RefMuons_Track_phi_CentralReg;   //!
   TBranch        *b_MET_RefMuons_Track_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefMuons_Track_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefMuons_Track_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefMuons_Track_phi_EndcapRegion;   //!
   TBranch        *b_MET_RefMuons_Track_etx_ForwardReg;   //!
   TBranch        *b_MET_RefMuons_Track_ety_ForwardReg;   //!
   TBranch        *b_MET_RefMuons_Track_sumet_ForwardReg;   //!
   TBranch        *b_MET_RefMuons_Track_phi_ForwardReg;   //!
   TBranch        *b_MET_Final_etx;   //!
   TBranch        *b_MET_Final_ety;   //!
   TBranch        *b_MET_Final_phi;   //!
   TBranch        *b_MET_Final_et;   //!
   TBranch        *b_MET_Final_sumet;   //!
   TBranch        *b_MET_Final_etx_CentralReg;   //!
   TBranch        *b_MET_Final_ety_CentralReg;   //!
   TBranch        *b_MET_Final_sumet_CentralReg;   //!
   TBranch        *b_MET_Final_phi_CentralReg;   //!
   TBranch        *b_MET_Final_etx_EndcapRegion;   //!
   TBranch        *b_MET_Final_ety_EndcapRegion;   //!
   TBranch        *b_MET_Final_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Final_phi_EndcapRegion;   //!
   TBranch        *b_MET_Final_etx_ForwardReg;   //!
   TBranch        *b_MET_Final_ety_ForwardReg;   //!
   TBranch        *b_MET_Final_sumet_ForwardReg;   //!
   TBranch        *b_MET_Final_phi_ForwardReg;   //!
   TBranch        *b_MET_MuonMuons_etx;   //!
   TBranch        *b_MET_MuonMuons_ety;   //!
   TBranch        *b_MET_MuonMuons_phi;   //!
   TBranch        *b_MET_MuonMuons_et;   //!
   TBranch        *b_MET_MuonMuons_sumet;   //!
   TBranch        *b_MET_MuonMuons_etx_CentralReg;   //!
   TBranch        *b_MET_MuonMuons_ety_CentralReg;   //!
   TBranch        *b_MET_MuonMuons_sumet_CentralReg;   //!
   TBranch        *b_MET_MuonMuons_phi_CentralReg;   //!
   TBranch        *b_MET_MuonMuons_etx_EndcapRegion;   //!
   TBranch        *b_MET_MuonMuons_ety_EndcapRegion;   //!
   TBranch        *b_MET_MuonMuons_sumet_EndcapRegion;   //!
   TBranch        *b_MET_MuonMuons_phi_EndcapRegion;   //!
   TBranch        *b_MET_MuonMuons_etx_ForwardReg;   //!
   TBranch        *b_MET_MuonMuons_ety_ForwardReg;   //!
   TBranch        *b_MET_MuonMuons_sumet_ForwardReg;   //!
   TBranch        *b_MET_MuonMuons_phi_ForwardReg;   //!
   TBranch        *b_MET_Muons_etx;   //!
   TBranch        *b_MET_Muons_ety;   //!
   TBranch        *b_MET_Muons_phi;   //!
   TBranch        *b_MET_Muons_et;   //!
   TBranch        *b_MET_Muons_sumet;   //!
   TBranch        *b_MET_Muons_etx_CentralReg;   //!
   TBranch        *b_MET_Muons_ety_CentralReg;   //!
   TBranch        *b_MET_Muons_sumet_CentralReg;   //!
   TBranch        *b_MET_Muons_phi_CentralReg;   //!
   TBranch        *b_MET_Muons_etx_EndcapRegion;   //!
   TBranch        *b_MET_Muons_ety_EndcapRegion;   //!
   TBranch        *b_MET_Muons_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Muons_phi_EndcapRegion;   //!
   TBranch        *b_MET_Muons_etx_ForwardReg;   //!
   TBranch        *b_MET_Muons_ety_ForwardReg;   //!
   TBranch        *b_MET_Muons_sumet_ForwardReg;   //!
   TBranch        *b_MET_Muons_phi_ForwardReg;   //!
   TBranch        *b_MET_Muons_Spectro_etx;   //!
   TBranch        *b_MET_Muons_Spectro_ety;   //!
   TBranch        *b_MET_Muons_Spectro_phi;   //!
   TBranch        *b_MET_Muons_Spectro_et;   //!
   TBranch        *b_MET_Muons_Spectro_sumet;   //!
   TBranch        *b_MET_Muons_Spectro_etx_CentralReg;   //!
   TBranch        *b_MET_Muons_Spectro_ety_CentralReg;   //!
   TBranch        *b_MET_Muons_Spectro_sumet_CentralReg;   //!
   TBranch        *b_MET_Muons_Spectro_phi_CentralReg;   //!
   TBranch        *b_MET_Muons_Spectro_etx_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Spectro_ety_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Spectro_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Spectro_phi_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Spectro_etx_ForwardReg;   //!
   TBranch        *b_MET_Muons_Spectro_ety_ForwardReg;   //!
   TBranch        *b_MET_Muons_Spectro_sumet_ForwardReg;   //!
   TBranch        *b_MET_Muons_Spectro_phi_ForwardReg;   //!
   TBranch        *b_MET_Muons_Track_etx;   //!
   TBranch        *b_MET_Muons_Track_ety;   //!
   TBranch        *b_MET_Muons_Track_phi;   //!
   TBranch        *b_MET_Muons_Track_et;   //!
   TBranch        *b_MET_Muons_Track_sumet;   //!
   TBranch        *b_MET_Muons_Track_etx_CentralReg;   //!
   TBranch        *b_MET_Muons_Track_ety_CentralReg;   //!
   TBranch        *b_MET_Muons_Track_sumet_CentralReg;   //!
   TBranch        *b_MET_Muons_Track_phi_CentralReg;   //!
   TBranch        *b_MET_Muons_Track_etx_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Track_ety_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Track_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Track_phi_EndcapRegion;   //!
   TBranch        *b_MET_Muons_Track_etx_ForwardReg;   //!
   TBranch        *b_MET_Muons_Track_ety_ForwardReg;   //!
   TBranch        *b_MET_Muons_Track_sumet_ForwardReg;   //!
   TBranch        *b_MET_Muons_Track_phi_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_etx;   //!
   TBranch        *b_MET_LocHadTopo_ety;   //!
   TBranch        *b_MET_LocHadTopo_phi;   //!
   TBranch        *b_MET_LocHadTopo_et;   //!
   TBranch        *b_MET_LocHadTopo_sumet;   //!
   TBranch        *b_MET_LocHadTopo_SUMET_EMFrac;   //!
   TBranch        *b_MET_LocHadTopo_etx_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_ety_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_sumet_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_phi_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_etx_EMB;   //!
   TBranch        *b_MET_LocHadTopo_ety_EMB;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EMB;   //!
   TBranch        *b_MET_LocHadTopo_phi_EMB;   //!
   TBranch        *b_MET_LocHadTopo_etx_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_ety_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_sumet_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_phi_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_etx_EME;   //!
   TBranch        *b_MET_LocHadTopo_ety_EME;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EME;   //!
   TBranch        *b_MET_LocHadTopo_phi_EME;   //!
   TBranch        *b_MET_LocHadTopo_etx_TILE;   //!
   TBranch        *b_MET_LocHadTopo_ety_TILE;   //!
   TBranch        *b_MET_LocHadTopo_sumet_TILE;   //!
   TBranch        *b_MET_LocHadTopo_phi_TILE;   //!
   TBranch        *b_MET_LocHadTopo_etx_HEC;   //!
   TBranch        *b_MET_LocHadTopo_ety_HEC;   //!
   TBranch        *b_MET_LocHadTopo_sumet_HEC;   //!
   TBranch        *b_MET_LocHadTopo_phi_HEC;   //!
   TBranch        *b_MET_LocHadTopo_etx_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_ety_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_sumet_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_phi_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_nCell_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_nCell_EMB;   //!
   TBranch        *b_MET_LocHadTopo_nCell_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_nCell_EME;   //!
   TBranch        *b_MET_LocHadTopo_nCell_TILE;   //!
   TBranch        *b_MET_LocHadTopo_nCell_HEC;   //!
   TBranch        *b_MET_LocHadTopo_nCell_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_etx_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_ety_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_sumet_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_phi_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_etx_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_ety_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_phi_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_etx_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_ety_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_sumet_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_phi_ForwardReg;   //!
   TBranch        *b_el_MET_n;   //!
   TBranch        *b_el_MET_wpx;   //!
   TBranch        *b_el_MET_wpy;   //!
   TBranch        *b_el_MET_wet;   //!
   TBranch        *b_el_MET_statusWord;   //!
   TBranch        *b_ph_MET_n;   //!
   TBranch        *b_ph_MET_wpx;   //!
   TBranch        *b_ph_MET_wpy;   //!
   TBranch        *b_ph_MET_wet;   //!
   TBranch        *b_ph_MET_statusWord;   //!
   TBranch        *b_mu_staco_MET_n;   //!
   TBranch        *b_mu_staco_MET_wpx;   //!
   TBranch        *b_mu_staco_MET_wpy;   //!
   TBranch        *b_mu_staco_MET_wet;   //!
   TBranch        *b_mu_staco_MET_statusWord;   //!
   TBranch        *b_mu_muid_MET_n;   //!
   TBranch        *b_mu_muid_MET_wpx;   //!
   TBranch        *b_mu_muid_MET_wpy;   //!
   TBranch        *b_mu_muid_MET_wet;   //!
   TBranch        *b_mu_muid_MET_statusWord;   //!
   TBranch        *b_mu_MET_n;   //!
   TBranch        *b_mu_MET_wpx;   //!
   TBranch        *b_mu_MET_wpy;   //!
   TBranch        *b_mu_MET_wet;   //!
   TBranch        *b_mu_MET_statusWord;   //!
   TBranch        *b_tau_MET_n;   //!
   TBranch        *b_tau_MET_wpx;   //!
   TBranch        *b_tau_MET_wpy;   //!
   TBranch        *b_tau_MET_wet;   //!
   TBranch        *b_tau_MET_statusWord;   //!
   TBranch        *b_jet_antikt4LCtopo_MET_n;   //!
   TBranch        *b_jet_antikt4LCtopo_MET_wpx;   //!
   TBranch        *b_jet_antikt4LCtopo_MET_wpy;   //!
   TBranch        *b_jet_antikt4LCtopo_MET_wet;   //!
   TBranch        *b_jet_antikt4LCtopo_MET_statusWord;   //!
   TBranch        *b_cl_MET_n;   //!
   TBranch        *b_cl_MET_wpx;   //!
   TBranch        *b_cl_MET_wpy;   //!
   TBranch        *b_cl_MET_wet;   //!
   TBranch        *b_cl_MET_statusWord;   //!
   TBranch        *b_trk_MET_n;   //!
   TBranch        *b_trk_MET_wpx;   //!
   TBranch        *b_trk_MET_wpy;   //!
   TBranch        *b_trk_MET_wet;   //!
   TBranch        *b_trk_MET_statusWord;   //!
   TBranch        *b_METJetsInfo_JetPtWeightedEventEMFraction;   //!
   TBranch        *b_METJetsInfo_JetPtWeightedNumAssociatedTracks;   //!
   TBranch        *b_METJetsInfo_JetPtWeightedSize;   //!
   TBranch        *b_METJetsInfo_LeadingJetEt;   //!
   TBranch        *b_METJetsInfo_LeadingJetEta;   //!
   TBranch        *b_vxp_n;   //!
   TBranch        *b_vxp_x;   //!
   TBranch        *b_vxp_y;   //!
   TBranch        *b_vxp_z;   //!
   TBranch        *b_vxp_cov_x;   //!
   TBranch        *b_vxp_cov_y;   //!
   TBranch        *b_vxp_cov_z;   //!
   TBranch        *b_vxp_cov_xy;   //!
   TBranch        *b_vxp_cov_xz;   //!
   TBranch        *b_vxp_cov_yz;   //!
   TBranch        *b_vxp_type;   //!
   TBranch        *b_vxp_chi2;   //!
   TBranch        *b_vxp_ndof;   //!
   TBranch        *b_vxp_px;   //!
   TBranch        *b_vxp_py;   //!
   TBranch        *b_vxp_pz;   //!
   TBranch        *b_vxp_E;   //!
   TBranch        *b_vxp_m;   //!
   TBranch        *b_vxp_nTracks;   //!
   TBranch        *b_vxp_sumPt;   //!
   TBranch        *b_vxp_trk_weight;   //!
   TBranch        *b_vxp_trk_n;   //!
   TBranch        *b_vxp_trk_index;   //!
   TBranch        *b_trig_L1_TAV;   //!
   TBranch        *b_trig_L2_passedPhysics;   //!
   TBranch        *b_trig_EF_passedPhysics;   //!
   TBranch        *b_trig_L1_TBP;   //!
   TBranch        *b_trig_L1_TAP;   //!
   TBranch        *b_trig_L2_passedRaw;   //!
   TBranch        *b_trig_EF_passedRaw;   //!
   TBranch        *b_trig_L2_truncated;   //!
   TBranch        *b_trig_EF_truncated;   //!
   TBranch        *b_trig_L2_resurrected;   //!
   TBranch        *b_trig_EF_resurrected;   //!
   TBranch        *b_trig_L2_passedThrough;   //!
   TBranch        *b_trig_EF_passedThrough;   //!
   TBranch        *b_trig_L2_wasPrescaled;   //!
   TBranch        *b_trig_L2_wasResurrected;   //!
   TBranch        *b_trig_EF_wasPrescaled;   //!
   TBranch        *b_trig_EF_wasResurrected;   //!
   TBranch        *b_trig_DB_SMK;   //!
   TBranch        *b_trig_DB_L1PSK;   //!
   TBranch        *b_trig_DB_HLTPSK;   //!
   TBranch        *b_EF_b110_loose_j110_a4tchad_xe55_tclcw;   //!
   TBranch        *b_EF_b110_loose_j110_a4tchad_xe60_tclcw;   //!
   TBranch        *b_EF_b45_mediumEF_j110_j45_xe60_tclcw;   //!
   TBranch        *b_EF_b55_mediumEF_j110_j55_xe60_tclcw;   //!
   TBranch        *b_EF_b80_loose_j80_a4tchad_xe55_tclcw;   //!
   TBranch        *b_EF_b80_loose_j80_a4tchad_xe60_tclcw;   //!
   TBranch        *b_EF_b80_loose_j80_a4tchad_xe70_tclcw;   //!
   TBranch        *b_EF_b80_loose_j80_a4tchad_xe75_tclcw;   //!
   TBranch        *b_EF_e15vh_medium1;   //!
   TBranch        *b_EF_e18vh_medium1;   //!
   TBranch        *b_EF_mu24;   //!
   TBranch        *b_EF_mu24_j65_a4tchad;   //!
   TBranch        *b_EF_mu24_j65_a4tchad_EFxe40;   //!
   TBranch        *b_EF_mu4T_j110_a4tchad_L2FS_matched;   //!
   TBranch        *b_EF_mu4T_j110_a4tchad_matched;   //!
   TBranch        *b_EF_mu4T_j145_a4tchad_L2FS_matched;   //!
   TBranch        *b_EF_mu4T_j145_a4tchad_matched;   //!
   TBranch        *b_EF_mu4T_j15_a4tchad_matched;   //!
   TBranch        *b_EF_mu4T_j15_a4tchad_matchedZ;   //!
   TBranch        *b_EF_mu4T_j180_a4tchad_L2FS_matched;   //!
   TBranch        *b_EF_mu4T_j180_a4tchad_matched;   //!
   TBranch        *b_EF_mu4T_j220_a4tchad_L2FS_matched;   //!
   TBranch        *b_EF_mu4T_j220_a4tchad_matched;   //!
   TBranch        *b_EF_mu4T_j25_a4tchad_matched;   //!
   TBranch        *b_EF_mu4T_j25_a4tchad_matchedZ;   //!
   TBranch        *b_EF_mu4T_j280_a4tchad_L2FS_matched;   //!
   TBranch        *b_EF_mu4T_j280_a4tchad_matched;   //!
   TBranch        *b_EF_mu4T_j35_a4tchad_matched;   //!
   TBranch        *b_EF_mu4T_j35_a4tchad_matchedZ;   //!
   TBranch        *b_EF_mu4T_j45_a4tchad_L2FS_matched;   //!
   TBranch        *b_EF_mu4T_j45_a4tchad_L2FS_matchedZ;   //!
   TBranch        *b_EF_mu4T_j45_a4tchad_matched;   //!
   TBranch        *b_EF_mu4T_j45_a4tchad_matchedZ;   //!
   TBranch        *b_EF_mu4T_j55_a4tchad_L2FS_matched;   //!
   TBranch        *b_EF_mu4T_j55_a4tchad_L2FS_matchedZ;   //!
   TBranch        *b_EF_mu4T_j55_a4tchad_matched;   //!
   TBranch        *b_EF_mu4T_j55_a4tchad_matchedZ;   //!
   TBranch        *b_EF_mu4T_j65_a4tchad_L2FS_matched;   //!
   TBranch        *b_EF_mu4T_j65_a4tchad_matched;   //!
   TBranch        *b_EF_mu4T_j80_a4tchad_L2FS_matched;   //!
   TBranch        *b_EF_mu4T_j80_a4tchad_matched;   //!
   TBranch        *b_L2_b105_loose_j105_c4cchad_xe40;   //!
   TBranch        *b_L2_b105_loose_j105_c4cchad_xe45;   //!
   TBranch        *b_L2_b75_loose_j75_c4cchad_xe40;   //!
   TBranch        *b_L2_b75_loose_j75_c4cchad_xe45;   //!
   TBranch        *b_L2_b75_loose_j75_c4cchad_xe55;   //!
   TBranch        *b_L2_e15vh_medium1;   //!
   TBranch        *b_L2_e18vh_medium1;   //!
   TBranch        *b_L2_j105_j40_c4cchad_xe40;   //!
   TBranch        *b_L2_j105_j50_c4cchad_xe40;   //!
   TBranch        *b_L2_mu24;   //!
   TBranch        *b_L2_mu24_j60_c4cchad_xe35;   //!
   TBranch        *b_L2_mu24_j65_c4cchad;   //!
   TBranch        *b_L2_mu4T_j105_c4cchad;   //!
   TBranch        *b_L2_mu4T_j10_a4TTem;   //!
   TBranch        *b_L2_mu4T_j140_c4cchad;   //!
   TBranch        *b_L2_mu4T_j15_a4TTem;   //!
   TBranch        *b_L2_mu4T_j165_c4cchad;   //!
   TBranch        *b_L2_mu4T_j30_a4TTem;   //!
   TBranch        *b_L2_mu4T_j40_c4cchad;   //!
   TBranch        *b_L2_mu4T_j50_a4TTem;   //!
   TBranch        *b_L2_mu4T_j50_c4cchad;   //!
   TBranch        *b_L2_mu4T_j60_c4cchad;   //!
   TBranch        *b_L2_mu4T_j75_a4TTem;   //!
   TBranch        *b_L2_mu4T_j75_c4cchad;   //!

   DataClass(TTree *tree=0);
   virtual ~DataClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef DataClass_cxx
DataClass::DataClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f || !f->IsOpen()) {
         f = new TFile("Memory Directory");
      }
      f->GetObject("llp",tree);

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("llp","");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00001.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00002.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00003.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00004.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00005.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00006.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00007.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00008.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00009.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00010.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00011.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00012.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00013.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00014.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00015.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00016.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00017.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00018.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00019.llp.root/llp");
      chain->Add("Data/group.phys-susy.108624_012981.EXT2._00020.llp.root/llp");
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

DataClass::~DataClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t DataClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t DataClass::LoadTree(Long64_t entry)
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

void DataClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   StreamTagNames = 0;
   StreamTagTypes = 0;
   SkimDecision_name = 0;
   SkimDecision_accepted = 0;
   el_E = 0;
   el_Et = 0;
   el_pt = 0;
   el_m = 0;
   el_eta = 0;
   el_phi = 0;
   el_px = 0;
   el_py = 0;
   el_pz = 0;
   el_charge = 0;
   el_author = 0;
   el_isEM = 0;
   el_isEMLoose = 0;
   el_isEMMedium = 0;
   el_isEMTight = 0;
   el_OQ = 0;
   el_convFlag = 0;
   el_isConv = 0;
   el_nConv = 0;
   el_nSingleTrackConv = 0;
   el_nDoubleTrackConv = 0;
   el_mediumWithoutTrack = 0;
   el_mediumIsoWithoutTrack = 0;
   el_tightWithoutTrack = 0;
   el_tightIsoWithoutTrack = 0;
   el_loose = 0;
   el_looseIso = 0;
   el_medium = 0;
   el_mediumIso = 0;
   el_tight = 0;
   el_tightIso = 0;
   el_loosePP = 0;
   el_loosePPIso = 0;
   el_mediumPP = 0;
   el_mediumPPIso = 0;
   el_tightPP = 0;
   el_tightPPIso = 0;
   el_goodOQ = 0;
   el_Ethad = 0;
   el_Ethad1 = 0;
   el_f1 = 0;
   el_f1core = 0;
   el_Emins1 = 0;
   el_fside = 0;
   el_Emax2 = 0;
   el_ws3 = 0;
   el_wstot = 0;
   el_emaxs1 = 0;
   el_deltaEs = 0;
   el_E233 = 0;
   el_E237 = 0;
   el_E277 = 0;
   el_weta2 = 0;
   el_f3 = 0;
   el_f3core = 0;
   el_rphiallcalo = 0;
   el_Etcone45 = 0;
   el_Etcone15 = 0;
   el_Etcone20 = 0;
   el_Etcone25 = 0;
   el_Etcone30 = 0;
   el_Etcone35 = 0;
   el_Etcone40 = 0;
   el_ptcone20 = 0;
   el_ptcone30 = 0;
   el_ptcone40 = 0;
   el_nucone20 = 0;
   el_nucone30 = 0;
   el_nucone40 = 0;
   el_Etcone15_pt_corrected = 0;
   el_Etcone20_pt_corrected = 0;
   el_Etcone25_pt_corrected = 0;
   el_Etcone30_pt_corrected = 0;
   el_Etcone35_pt_corrected = 0;
   el_Etcone40_pt_corrected = 0;
   el_convanglematch = 0;
   el_convtrackmatch = 0;
   el_hasconv = 0;
   el_convvtxx = 0;
   el_convvtxy = 0;
   el_convvtxz = 0;
   el_Rconv = 0;
   el_zconv = 0;
   el_convvtxchi2 = 0;
   el_pt1conv = 0;
   el_convtrk1nBLHits = 0;
   el_convtrk1nPixHits = 0;
   el_convtrk1nSCTHits = 0;
   el_convtrk1nTRTHits = 0;
   el_pt2conv = 0;
   el_convtrk2nBLHits = 0;
   el_convtrk2nPixHits = 0;
   el_convtrk2nSCTHits = 0;
   el_convtrk2nTRTHits = 0;
   el_ptconv = 0;
   el_pzconv = 0;
   el_pos7 = 0;
   el_etacorrmag = 0;
   el_deltaeta1 = 0;
   el_deltaeta2 = 0;
   el_deltaphi2 = 0;
   el_deltaphiRescaled = 0;
   el_deltaPhiFromLast = 0;
   el_deltaPhiRot = 0;
   el_expectHitInBLayer = 0;
   el_trackd0_physics = 0;
   el_etaSampling1 = 0;
   el_reta = 0;
   el_rphi = 0;
   el_topoEtcone20 = 0;
   el_topoEtcone30 = 0;
   el_topoEtcone40 = 0;
   el_materialTraversed = 0;
   el_EtringnoisedR03sig2 = 0;
   el_EtringnoisedR03sig3 = 0;
   el_EtringnoisedR03sig4 = 0;
   el_isolationlikelihoodjets = 0;
   el_isolationlikelihoodhqelectrons = 0;
   el_electronweight = 0;
   el_electronbgweight = 0;
   el_softeweight = 0;
   el_softebgweight = 0;
   el_neuralnet = 0;
   el_Hmatrix = 0;
   el_Hmatrix5 = 0;
   el_adaboost = 0;
   el_softeneuralnet = 0;
   el_ringernn = 0;
   el_zvertex = 0;
   el_errz = 0;
   el_etap = 0;
   el_depth = 0;
   el_refittedTrack_n = 0;
   el_refittedTrack_author = 0;
   el_refittedTrack_chi2 = 0;
   el_refittedTrack_hasBrem = 0;
   el_refittedTrack_bremRadius = 0;
   el_refittedTrack_bremZ = 0;
   el_refittedTrack_bremRadiusErr = 0;
   el_refittedTrack_bremZErr = 0;
   el_refittedTrack_bremFitStatus = 0;
   el_refittedTrack_qoverp = 0;
   el_refittedTrack_d0 = 0;
   el_refittedTrack_z0 = 0;
   el_refittedTrack_theta = 0;
   el_refittedTrack_phi = 0;
   el_refittedTrack_LMqoverp = 0;
   el_refittedTrack_covd0 = 0;
   el_refittedTrack_covz0 = 0;
   el_refittedTrack_covphi = 0;
   el_refittedTrack_covtheta = 0;
   el_refittedTrack_covqoverp = 0;
   el_refittedTrack_covd0z0 = 0;
   el_refittedTrack_covz0phi = 0;
   el_refittedTrack_covz0theta = 0;
   el_refittedTrack_covz0qoverp = 0;
   el_refittedTrack_covd0phi = 0;
   el_refittedTrack_covd0theta = 0;
   el_refittedTrack_covd0qoverp = 0;
   el_refittedTrack_covphitheta = 0;
   el_refittedTrack_covphiqoverp = 0;
   el_refittedTrack_covthetaqoverp = 0;
   el_refittedTrack_d0_wrtBL = 0;
   el_refittedTrack_z0_wrtBL = 0;
   el_refittedTrack_phi_wrtBL = 0;
   el_refittedTrack_theta_wrtBL = 0;
   el_refittedTrack_qoverp_wrtBL = 0;
   el_refittedTrack_d0_err_wrtBL = 0;
   el_refittedTrack_z0_err_wrtBL = 0;
   el_refittedTrack_phi_err_wrtBL = 0;
   el_refittedTrack_theta_err_wrtBL = 0;
   el_refittedTrack_qoverp_err_wrtBL = 0;
   el_refittedTrack_d0_z0_err_wrtBL = 0;
   el_refittedTrack_d0_phi_err_wrtBL = 0;
   el_refittedTrack_d0_theta_err_wrtBL = 0;
   el_refittedTrack_d0_qoverp_err_wrtBL = 0;
   el_refittedTrack_z0_phi_err_wrtBL = 0;
   el_refittedTrack_z0_theta_err_wrtBL = 0;
   el_refittedTrack_z0_qoverp_err_wrtBL = 0;
   el_refittedTrack_phi_theta_err_wrtBL = 0;
   el_refittedTrack_phi_qoverp_err_wrtBL = 0;
   el_refittedTrack_theta_qoverp_err_wrtBL = 0;
   el_Es0 = 0;
   el_etas0 = 0;
   el_phis0 = 0;
   el_Es1 = 0;
   el_etas1 = 0;
   el_phis1 = 0;
   el_Es2 = 0;
   el_etas2 = 0;
   el_phis2 = 0;
   el_Es3 = 0;
   el_etas3 = 0;
   el_phis3 = 0;
   el_E_PreSamplerB = 0;
   el_E_EMB1 = 0;
   el_E_EMB2 = 0;
   el_E_EMB3 = 0;
   el_E_PreSamplerE = 0;
   el_E_EME1 = 0;
   el_E_EME2 = 0;
   el_E_EME3 = 0;
   el_E_HEC0 = 0;
   el_E_HEC1 = 0;
   el_E_HEC2 = 0;
   el_E_HEC3 = 0;
   el_E_TileBar0 = 0;
   el_E_TileBar1 = 0;
   el_E_TileBar2 = 0;
   el_E_TileGap1 = 0;
   el_E_TileGap2 = 0;
   el_E_TileGap3 = 0;
   el_E_TileExt0 = 0;
   el_E_TileExt1 = 0;
   el_E_TileExt2 = 0;
   el_E_FCAL0 = 0;
   el_E_FCAL1 = 0;
   el_E_FCAL2 = 0;
   el_cl_E = 0;
   el_cl_pt = 0;
   el_cl_eta = 0;
   el_cl_phi = 0;
   el_cl_etaCalo = 0;
   el_cl_phiCalo = 0;
   el_firstEdens = 0;
   el_cellmaxfrac = 0;
   el_longitudinal = 0;
   el_secondlambda = 0;
   el_lateral = 0;
   el_secondR = 0;
   el_centerlambda = 0;
   el_rawcl_Es0 = 0;
   el_rawcl_etas0 = 0;
   el_rawcl_phis0 = 0;
   el_rawcl_Es1 = 0;
   el_rawcl_etas1 = 0;
   el_rawcl_phis1 = 0;
   el_rawcl_Es2 = 0;
   el_rawcl_etas2 = 0;
   el_rawcl_phis2 = 0;
   el_rawcl_Es3 = 0;
   el_rawcl_etas3 = 0;
   el_rawcl_phis3 = 0;
   el_rawcl_E = 0;
   el_rawcl_pt = 0;
   el_rawcl_eta = 0;
   el_rawcl_phi = 0;
   el_trackd0 = 0;
   el_trackz0 = 0;
   el_trackphi = 0;
   el_tracktheta = 0;
   el_trackqoverp = 0;
   el_trackpt = 0;
   el_tracketa = 0;
   el_trackcov_d0 = 0;
   el_trackcov_z0 = 0;
   el_trackcov_phi = 0;
   el_trackcov_theta = 0;
   el_trackcov_qoverp = 0;
   el_trackcov_d0_z0 = 0;
   el_trackcov_d0_phi = 0;
   el_trackcov_d0_theta = 0;
   el_trackcov_d0_qoverp = 0;
   el_trackcov_z0_phi = 0;
   el_trackcov_z0_theta = 0;
   el_trackcov_z0_qoverp = 0;
   el_trackcov_phi_theta = 0;
   el_trackcov_phi_qoverp = 0;
   el_trackcov_theta_qoverp = 0;
   el_trackfitchi2 = 0;
   el_trackfitndof = 0;
   el_nBLHits = 0;
   el_nPixHits = 0;
   el_nSCTHits = 0;
   el_nTRTHits = 0;
   el_nTRTHighTHits = 0;
   el_nPixHoles = 0;
   el_nSCTHoles = 0;
   el_nTRTHoles = 0;
   el_nPixelDeadSensors = 0;
   el_nSCTDeadSensors = 0;
   el_nBLSharedHits = 0;
   el_nPixSharedHits = 0;
   el_nSCTSharedHits = 0;
   el_nBLayerSplitHits = 0;
   el_nPixSplitHits = 0;
   el_nBLayerOutliers = 0;
   el_nPixelOutliers = 0;
   el_nSCTOutliers = 0;
   el_nTRTOutliers = 0;
   el_nTRTHighTOutliers = 0;
   el_nContribPixelLayers = 0;
   el_nGangedPixels = 0;
   el_nGangedFlaggedFakes = 0;
   el_nPixelSpoiltHits = 0;
   el_nSCTDoubleHoles = 0;
   el_nSCTSpoiltHits = 0;
   el_expectBLayerHit = 0;
   el_nSiHits = 0;
   el_TRTHighTHitsRatio = 0;
   el_TRTHighTOutliersRatio = 0;
   el_pixeldEdx = 0;
   el_nGoodHitsPixeldEdx = 0;
   el_massPixeldEdx = 0;
   el_likelihoodsPixeldEdx = 0;
   el_eProbabilityComb = 0;
   el_eProbabilityHT = 0;
   el_eProbabilityToT = 0;
   el_eProbabilityBrem = 0;
   el_vertweight = 0;
   el_vertx = 0;
   el_verty = 0;
   el_vertz = 0;
   el_trackd0beam = 0;
   el_trackz0beam = 0;
   el_tracksigd0beam = 0;
   el_tracksigz0beam = 0;
   el_trackd0pv = 0;
   el_trackz0pv = 0;
   el_tracksigd0pv = 0;
   el_tracksigz0pv = 0;
   el_trackIPEstimate_d0_biasedpvunbiased = 0;
   el_trackIPEstimate_z0_biasedpvunbiased = 0;
   el_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   el_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   el_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   el_trackd0pvunbiased = 0;
   el_trackz0pvunbiased = 0;
   el_tracksigd0pvunbiased = 0;
   el_tracksigz0pvunbiased = 0;
   el_Unrefittedtrack_d0 = 0;
   el_Unrefittedtrack_z0 = 0;
   el_Unrefittedtrack_phi = 0;
   el_Unrefittedtrack_theta = 0;
   el_Unrefittedtrack_qoverp = 0;
   el_Unrefittedtrack_pt = 0;
   el_Unrefittedtrack_eta = 0;
   el_theta_LM = 0;
   el_qoverp_LM = 0;
   el_locX_LM = 0;
   el_locY_LM = 0;
   el_phi_LM = 0;
   el_theta_err_LM = 0;
   el_qoverp_err_LM = 0;
   el_locX_err_LM = 0;
   el_locY_err_LM = 0;
   el_phi_err_LM = 0;
   el_hastrack = 0;
   el_deltaEmax2 = 0;
   el_calibHitsShowerDepth = 0;
   el_isIso = 0;
   el_mvaptcone20 = 0;
   el_mvaptcone30 = 0;
   el_mvaptcone40 = 0;
   el_CaloPointing_eta = 0;
   el_CaloPointing_sigma_eta = 0;
   el_CaloPointing_zvertex = 0;
   el_CaloPointing_sigma_zvertex = 0;
   el_HPV_eta = 0;
   el_HPV_sigma_eta = 0;
   el_HPV_zvertex = 0;
   el_HPV_sigma_zvertex = 0;
   el_topoEtcone60 = 0;
   el_ES0_real = 0;
   el_ES1_real = 0;
   el_ES2_real = 0;
   el_ES3_real = 0;
   el_EcellS0 = 0;
   el_etacellS0 = 0;
   el_Etcone40_ED_corrected = 0;
   el_Etcone40_corrected = 0;
   el_topoEtcone20_corrected = 0;
   el_topoEtcone30_corrected = 0;
   el_topoEtcone40_corrected = 0;
   el_ED_median = 0;
   el_ED_sigma = 0;
   el_ED_Njets = 0;
   el_jet_dr = 0;
   el_jet_E = 0;
   el_jet_pt = 0;
   el_jet_m = 0;
   el_jet_eta = 0;
   el_jet_phi = 0;
   el_jet_matched = 0;
   el_EF_dr = 0;
   el_L2_dr = 0;
   el_L1_dr = 0;
   stau_candidate_hasRpcHits = 0;
   stau_candidate_hasTileCells = 0;
   stau_candidate_beta = 0;
   stau_candidate_ann = 0;
   stau_candidate_mfP_px = 0;
   stau_candidate_mfP_py = 0;
   stau_candidate_mfP_pz = 0;
   stau_candidate_muonP_px = 0;
   stau_candidate_muonP_py = 0;
   stau_candidate_muonP_pz = 0;
   stau_candidate_stauP_px = 0;
   stau_candidate_stauP_py = 0;
   stau_candidate_stauP_pz = 0;
   stau_candidate_idP_px = 0;
   stau_candidate_idP_py = 0;
   stau_candidate_idP_pz = 0;
   stau_candidate_BetaMeasurement_tech = 0;
   stau_candidate_BetaMeasurement_beta = 0;
   stau_candidate_BetaMeasurement_chi2 = 0;
   stau_candidate_BetaMeasurement_dof = 0;
   stau_candidate_BetaMeasurement_avg = 0;
   stau_candidate_BetaMeasurement_rms = 0;
   stau_candidate_BetaMeasurement_contr_idx = 0;
   stau_candidate_BetaMeasurement_contr_tech = 0;
   stau_candidate_BetaMeasurement_contr_chi2 = 0;
   stau_candidate_BetaMeasurement_contr_dof = 0;
   stau_candidate_StauHit_id = 0;
   stau_candidate_StauHit_eTech = 0;
   stau_candidate_StauHit_isEta = 0;
   stau_candidate_StauHit_mToF = 0;
   stau_candidate_StauHit_x = 0;
   stau_candidate_StauHit_y = 0;
   stau_candidate_StauHit_z = 0;
   stau_candidate_StauHit_e = 0;
   stau_candidate_StauHit_error = 0;
   stau_candidate_StauHit_shift = 0;
   mu_lowbeta_stau_hasRpcHits = 0;
   mu_lowbeta_stau_hasTileCells = 0;
   mu_lowbeta_stau_beta = 0;
   mu_lowbeta_stau_ann = 0;
   mu_lowbeta_stau_mfP_px = 0;
   mu_lowbeta_stau_mfP_py = 0;
   mu_lowbeta_stau_mfP_pz = 0;
   mu_lowbeta_stau_muonP_px = 0;
   mu_lowbeta_stau_muonP_py = 0;
   mu_lowbeta_stau_muonP_pz = 0;
   mu_lowbeta_stau_stauP_px = 0;
   mu_lowbeta_stau_stauP_py = 0;
   mu_lowbeta_stau_stauP_pz = 0;
   mu_lowbeta_stau_idP_px = 0;
   mu_lowbeta_stau_idP_py = 0;
   mu_lowbeta_stau_idP_pz = 0;
   mu_lowbeta_stau_BetaMeasurement_tech = 0;
   mu_lowbeta_stau_BetaMeasurement_beta = 0;
   mu_lowbeta_stau_BetaMeasurement_chi2 = 0;
   mu_lowbeta_stau_BetaMeasurement_dof = 0;
   mu_lowbeta_stau_BetaMeasurement_avg = 0;
   mu_lowbeta_stau_BetaMeasurement_rms = 0;
   mu_lowbeta_stau_BetaMeasurement_contr_idx = 0;
   mu_lowbeta_stau_BetaMeasurement_contr_tech = 0;
   mu_lowbeta_stau_BetaMeasurement_contr_chi2 = 0;
   mu_lowbeta_stau_BetaMeasurement_contr_dof = 0;
   mu_lowbeta_stau_StauHit_id = 0;
   mu_lowbeta_stau_StauHit_eTech = 0;
   mu_lowbeta_stau_StauHit_isEta = 0;
   mu_lowbeta_stau_StauHit_mToF = 0;
   mu_lowbeta_stau_StauHit_x = 0;
   mu_lowbeta_stau_StauHit_y = 0;
   mu_lowbeta_stau_StauHit_z = 0;
   mu_lowbeta_stau_StauHit_e = 0;
   mu_lowbeta_stau_StauHit_error = 0;
   mu_lowbeta_stau_StauHit_shift = 0;
   mu_lowbeta_cont_mdt_beta = 0;
   mu_lowbeta_cont_mdt_chi2 = 0;
   mu_lowbeta_cont_mdt_betaerror = 0;
   mu_lowbeta_cont_mdt_nhits = 0;
   mu_lowbeta_cont_mdt_hit_id = 0;
   mu_lowbeta_cont_mdt_hit_x = 0;
   mu_lowbeta_cont_mdt_hit_y = 0;
   mu_lowbeta_cont_mdt_hit_z = 0;
   mu_lowbeta_cont_mdt_hit_t = 0;
   mu_lowbeta_cont_mdt_hit_error = 0;
   mu_lowbeta_cont_mdt_hit_proptime = 0;
   mu_lowbeta_cont_mdt_hit_shift = 0;
   mu_lowbeta_cont_rpc_beta = 0;
   mu_lowbeta_cont_rpc_chi2 = 0;
   mu_lowbeta_cont_rpc_betaerror = 0;
   mu_lowbeta_cont_rpc_nhits = 0;
   mu_lowbeta_cont_rpc_hit_id = 0;
   mu_lowbeta_cont_rpc_hit_x = 0;
   mu_lowbeta_cont_rpc_hit_y = 0;
   mu_lowbeta_cont_rpc_hit_z = 0;
   mu_lowbeta_cont_rpc_hit_t = 0;
   mu_lowbeta_cont_rpc_hit_error = 0;
   mu_lowbeta_cont_rpc_hit_proptime = 0;
   mu_lowbeta_cont_rpc_hit_shift = 0;
   mu_lowbeta_cont_calo_nhits = 0;
   mu_lowbeta_cont_calo_hit_id = 0;
   mu_lowbeta_cont_calo_hit_x = 0;
   mu_lowbeta_cont_calo_hit_y = 0;
   mu_lowbeta_cont_calo_hit_z = 0;
   mu_lowbeta_cont_calo_hit_t = 0;
   mu_lowbeta_cont_calo_hit_energy = 0;
   mu_lowbeta_cont_calo_hit_shift = 0;
   mu_lowbeta_cont_mstrk_ok = 0;
   mu_lowbeta_cont_mstrk_px = 0;
   mu_lowbeta_cont_mstrk_py = 0;
   mu_lowbeta_cont_mstrk_pz = 0;
   mu_lowbeta_cont_satrk_ok = 0;
   mu_lowbeta_cont_satrk_px = 0;
   mu_lowbeta_cont_satrk_py = 0;
   mu_lowbeta_cont_satrk_pz = 0;
   mu_lowbeta_cont_cbtrk_ok = 0;
   mu_lowbeta_cont_cbtrk_px = 0;
   mu_lowbeta_cont_cbtrk_py = 0;
   mu_lowbeta_cont_cbtrk_pz = 0;
   mu_lowbeta_cont_idtrk_ok = 0;
   mu_lowbeta_cont_idtrk_px = 0;
   mu_lowbeta_cont_idtrk_py = 0;
   mu_lowbeta_cont_idtrk_pz = 0;
   mu_muid_E = 0;
   mu_muid_pt = 0;
   mu_muid_m = 0;
   mu_muid_eta = 0;
   mu_muid_phi = 0;
   mu_muid_px = 0;
   mu_muid_py = 0;
   mu_muid_pz = 0;
   mu_muid_charge = 0;
   mu_muid_allauthor = 0;
   mu_muid_author = 0;
   mu_muid_beta = 0;
   mu_muid_isMuonLikelihood = 0;
   mu_muid_matchchi2 = 0;
   mu_muid_matchndof = 0;
   mu_muid_etcone20 = 0;
   mu_muid_etcone30 = 0;
   mu_muid_etcone40 = 0;
   mu_muid_nucone20 = 0;
   mu_muid_nucone30 = 0;
   mu_muid_nucone40 = 0;
   mu_muid_ptcone20 = 0;
   mu_muid_ptcone30 = 0;
   mu_muid_ptcone40 = 0;
   mu_muid_etconeNoEm10 = 0;
   mu_muid_etconeNoEm20 = 0;
   mu_muid_etconeNoEm30 = 0;
   mu_muid_etconeNoEm40 = 0;
   mu_muid_scatteringCurvatureSignificance = 0;
   mu_muid_scatteringNeighbourSignificance = 0;
   mu_muid_momentumBalanceSignificance = 0;
   mu_muid_energyLossPar = 0;
   mu_muid_energyLossErr = 0;
   mu_muid_etCore = 0;
   mu_muid_energyLossType = 0;
   mu_muid_caloMuonIdTag = 0;
   mu_muid_caloLRLikelihood = 0;
   mu_muid_bestMatch = 0;
   mu_muid_isStandAloneMuon = 0;
   mu_muid_isCombinedMuon = 0;
   mu_muid_isLowPtReconstructedMuon = 0;
   mu_muid_isSegmentTaggedMuon = 0;
   mu_muid_isCaloMuonId = 0;
   mu_muid_alsoFoundByLowPt = 0;
   mu_muid_alsoFoundByCaloMuonId = 0;
   mu_muid_isSiliconAssociatedForwardMuon = 0;
   mu_muid_loose = 0;
   mu_muid_medium = 0;
   mu_muid_tight = 0;
   mu_muid_d0_exPV = 0;
   mu_muid_z0_exPV = 0;
   mu_muid_phi_exPV = 0;
   mu_muid_theta_exPV = 0;
   mu_muid_qoverp_exPV = 0;
   mu_muid_cb_d0_exPV = 0;
   mu_muid_cb_z0_exPV = 0;
   mu_muid_cb_phi_exPV = 0;
   mu_muid_cb_theta_exPV = 0;
   mu_muid_cb_qoverp_exPV = 0;
   mu_muid_id_d0_exPV = 0;
   mu_muid_id_z0_exPV = 0;
   mu_muid_id_phi_exPV = 0;
   mu_muid_id_theta_exPV = 0;
   mu_muid_id_qoverp_exPV = 0;
   mu_muid_me_d0_exPV = 0;
   mu_muid_me_z0_exPV = 0;
   mu_muid_me_phi_exPV = 0;
   mu_muid_me_theta_exPV = 0;
   mu_muid_me_qoverp_exPV = 0;
   mu_muid_ie_d0_exPV = 0;
   mu_muid_ie_z0_exPV = 0;
   mu_muid_ie_phi_exPV = 0;
   mu_muid_ie_theta_exPV = 0;
   mu_muid_ie_qoverp_exPV = 0;
   mu_muid_SpaceTime_detID = 0;
   mu_muid_SpaceTime_t = 0;
   mu_muid_SpaceTime_tError = 0;
   mu_muid_SpaceTime_weight = 0;
   mu_muid_SpaceTime_x = 0;
   mu_muid_SpaceTime_y = 0;
   mu_muid_SpaceTime_z = 0;
   mu_muid_cov_d0_exPV = 0;
   mu_muid_cov_z0_exPV = 0;
   mu_muid_cov_phi_exPV = 0;
   mu_muid_cov_theta_exPV = 0;
   mu_muid_cov_qoverp_exPV = 0;
   mu_muid_cov_d0_z0_exPV = 0;
   mu_muid_cov_d0_phi_exPV = 0;
   mu_muid_cov_d0_theta_exPV = 0;
   mu_muid_cov_d0_qoverp_exPV = 0;
   mu_muid_cov_z0_phi_exPV = 0;
   mu_muid_cov_z0_theta_exPV = 0;
   mu_muid_cov_z0_qoverp_exPV = 0;
   mu_muid_cov_phi_theta_exPV = 0;
   mu_muid_cov_phi_qoverp_exPV = 0;
   mu_muid_cov_theta_qoverp_exPV = 0;
   mu_muid_id_cov_d0_exPV = 0;
   mu_muid_id_cov_z0_exPV = 0;
   mu_muid_id_cov_phi_exPV = 0;
   mu_muid_id_cov_theta_exPV = 0;
   mu_muid_id_cov_qoverp_exPV = 0;
   mu_muid_id_cov_d0_z0_exPV = 0;
   mu_muid_id_cov_d0_phi_exPV = 0;
   mu_muid_id_cov_d0_theta_exPV = 0;
   mu_muid_id_cov_d0_qoverp_exPV = 0;
   mu_muid_id_cov_z0_phi_exPV = 0;
   mu_muid_id_cov_z0_theta_exPV = 0;
   mu_muid_id_cov_z0_qoverp_exPV = 0;
   mu_muid_id_cov_phi_theta_exPV = 0;
   mu_muid_id_cov_phi_qoverp_exPV = 0;
   mu_muid_id_cov_theta_qoverp_exPV = 0;
   mu_muid_me_cov_d0_exPV = 0;
   mu_muid_me_cov_z0_exPV = 0;
   mu_muid_me_cov_phi_exPV = 0;
   mu_muid_me_cov_theta_exPV = 0;
   mu_muid_me_cov_qoverp_exPV = 0;
   mu_muid_me_cov_d0_z0_exPV = 0;
   mu_muid_me_cov_d0_phi_exPV = 0;
   mu_muid_me_cov_d0_theta_exPV = 0;
   mu_muid_me_cov_d0_qoverp_exPV = 0;
   mu_muid_me_cov_z0_phi_exPV = 0;
   mu_muid_me_cov_z0_theta_exPV = 0;
   mu_muid_me_cov_z0_qoverp_exPV = 0;
   mu_muid_me_cov_phi_theta_exPV = 0;
   mu_muid_me_cov_phi_qoverp_exPV = 0;
   mu_muid_me_cov_theta_qoverp_exPV = 0;
   mu_muid_ms_d0 = 0;
   mu_muid_ms_z0 = 0;
   mu_muid_ms_phi = 0;
   mu_muid_ms_theta = 0;
   mu_muid_ms_qoverp = 0;
   mu_muid_id_d0 = 0;
   mu_muid_id_z0 = 0;
   mu_muid_id_phi = 0;
   mu_muid_id_theta = 0;
   mu_muid_id_qoverp = 0;
   mu_muid_me_d0 = 0;
   mu_muid_me_z0 = 0;
   mu_muid_me_phi = 0;
   mu_muid_me_theta = 0;
   mu_muid_me_qoverp = 0;
   mu_muid_ie_d0 = 0;
   mu_muid_ie_z0 = 0;
   mu_muid_ie_phi = 0;
   mu_muid_ie_theta = 0;
   mu_muid_ie_qoverp = 0;
   mu_muid_nOutliersOnTrack = 0;
   mu_muid_nBLHits = 0;
   mu_muid_nPixHits = 0;
   mu_muid_nSCTHits = 0;
   mu_muid_nTRTHits = 0;
   mu_muid_nTRTHighTHits = 0;
   mu_muid_nBLSharedHits = 0;
   mu_muid_nPixSharedHits = 0;
   mu_muid_nPixHoles = 0;
   mu_muid_nSCTSharedHits = 0;
   mu_muid_nSCTHoles = 0;
   mu_muid_nTRTOutliers = 0;
   mu_muid_nTRTHighTOutliers = 0;
   mu_muid_nGangedPixels = 0;
   mu_muid_nPixelDeadSensors = 0;
   mu_muid_nSCTDeadSensors = 0;
   mu_muid_nTRTDeadStraws = 0;
   mu_muid_expectBLayerHit = 0;
   mu_muid_nMDTHits = 0;
   mu_muid_nMDTHoles = 0;
   mu_muid_nCSCEtaHits = 0;
   mu_muid_nCSCEtaHoles = 0;
   mu_muid_nCSCUnspoiledEtaHits = 0;
   mu_muid_nCSCPhiHits = 0;
   mu_muid_nCSCPhiHoles = 0;
   mu_muid_nRPCEtaHits = 0;
   mu_muid_nRPCEtaHoles = 0;
   mu_muid_nRPCPhiHits = 0;
   mu_muid_nRPCPhiHoles = 0;
   mu_muid_nTGCEtaHits = 0;
   mu_muid_nTGCEtaHoles = 0;
   mu_muid_nTGCPhiHits = 0;
   mu_muid_nTGCPhiHoles = 0;
   mu_muid_nprecisionLayers = 0;
   mu_muid_nprecisionHoleLayers = 0;
   mu_muid_nphiLayers = 0;
   mu_muid_ntrigEtaLayers = 0;
   mu_muid_nphiHoleLayers = 0;
   mu_muid_ntrigEtaHoleLayers = 0;
   mu_muid_nMDTBIHits = 0;
   mu_muid_nMDTBMHits = 0;
   mu_muid_nMDTBOHits = 0;
   mu_muid_nMDTBEEHits = 0;
   mu_muid_nMDTBIS78Hits = 0;
   mu_muid_nMDTEIHits = 0;
   mu_muid_nMDTEMHits = 0;
   mu_muid_nMDTEOHits = 0;
   mu_muid_nMDTEEHits = 0;
   mu_muid_nRPCLayer1EtaHits = 0;
   mu_muid_nRPCLayer2EtaHits = 0;
   mu_muid_nRPCLayer3EtaHits = 0;
   mu_muid_nRPCLayer1PhiHits = 0;
   mu_muid_nRPCLayer2PhiHits = 0;
   mu_muid_nRPCLayer3PhiHits = 0;
   mu_muid_nTGCLayer1EtaHits = 0;
   mu_muid_nTGCLayer2EtaHits = 0;
   mu_muid_nTGCLayer3EtaHits = 0;
   mu_muid_nTGCLayer4EtaHits = 0;
   mu_muid_nTGCLayer1PhiHits = 0;
   mu_muid_nTGCLayer2PhiHits = 0;
   mu_muid_nTGCLayer3PhiHits = 0;
   mu_muid_nTGCLayer4PhiHits = 0;
   mu_muid_barrelSectors = 0;
   mu_muid_endcapSectors = 0;
   mu_muid_trackd0 = 0;
   mu_muid_trackz0 = 0;
   mu_muid_trackphi = 0;
   mu_muid_tracktheta = 0;
   mu_muid_trackqoverp = 0;
   mu_muid_trackcov_d0 = 0;
   mu_muid_trackcov_z0 = 0;
   mu_muid_trackcov_phi = 0;
   mu_muid_trackcov_theta = 0;
   mu_muid_trackcov_qoverp = 0;
   mu_muid_trackcov_d0_z0 = 0;
   mu_muid_trackcov_d0_phi = 0;
   mu_muid_trackcov_d0_theta = 0;
   mu_muid_trackcov_d0_qoverp = 0;
   mu_muid_trackcov_z0_phi = 0;
   mu_muid_trackcov_z0_theta = 0;
   mu_muid_trackcov_z0_qoverp = 0;
   mu_muid_trackcov_phi_theta = 0;
   mu_muid_trackcov_phi_qoverp = 0;
   mu_muid_trackcov_theta_qoverp = 0;
   mu_muid_trackfitchi2 = 0;
   mu_muid_trackfitndof = 0;
   mu_muid_hastrack = 0;
   mu_muid_trackd0beam = 0;
   mu_muid_trackz0beam = 0;
   mu_muid_tracksigd0beam = 0;
   mu_muid_tracksigz0beam = 0;
   mu_muid_trackd0pv = 0;
   mu_muid_trackz0pv = 0;
   mu_muid_tracksigd0pv = 0;
   mu_muid_tracksigz0pv = 0;
   mu_muid_trackIPEstimate_d0_biasedpvunbiased = 0;
   mu_muid_trackIPEstimate_z0_biasedpvunbiased = 0;
   mu_muid_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   mu_muid_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   mu_muid_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   mu_muid_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   mu_muid_trackd0pvunbiased = 0;
   mu_muid_trackz0pvunbiased = 0;
   mu_muid_tracksigd0pvunbiased = 0;
   mu_muid_tracksigz0pvunbiased = 0;
   mu_muid_CaloCell_sampling = 0;
   mu_muid_CaloCell_eta = 0;
   mu_muid_CaloCell_phi = 0;
   mu_muid_CaloCell_dr = 0;
   mu_muid_CaloCell_E = 0;
   mu_muid_CaloCell_t = 0;
   mu_muid_CaloCell_x = 0;
   mu_muid_CaloCell_y = 0;
   mu_muid_CaloCell_z = 0;
   mu_muid_TileBeta = 0;
   mu_muid_TileBetaMass = 0;
   mu_muid_meandADC = 0;
   mu_muid_stau_candidate_assoc_index = 0;
   mu_staco_E = 0;
   mu_staco_pt = 0;
   mu_staco_m = 0;
   mu_staco_eta = 0;
   mu_staco_phi = 0;
   mu_staco_px = 0;
   mu_staco_py = 0;
   mu_staco_pz = 0;
   mu_staco_charge = 0;
   mu_staco_allauthor = 0;
   mu_staco_author = 0;
   mu_staco_beta = 0;
   mu_staco_isMuonLikelihood = 0;
   mu_staco_matchchi2 = 0;
   mu_staco_matchndof = 0;
   mu_staco_etcone20 = 0;
   mu_staco_etcone30 = 0;
   mu_staco_etcone40 = 0;
   mu_staco_nucone20 = 0;
   mu_staco_nucone30 = 0;
   mu_staco_nucone40 = 0;
   mu_staco_ptcone20 = 0;
   mu_staco_ptcone30 = 0;
   mu_staco_ptcone40 = 0;
   mu_staco_etconeNoEm10 = 0;
   mu_staco_etconeNoEm20 = 0;
   mu_staco_etconeNoEm30 = 0;
   mu_staco_etconeNoEm40 = 0;
   mu_staco_scatteringCurvatureSignificance = 0;
   mu_staco_scatteringNeighbourSignificance = 0;
   mu_staco_momentumBalanceSignificance = 0;
   mu_staco_energyLossPar = 0;
   mu_staco_energyLossErr = 0;
   mu_staco_etCore = 0;
   mu_staco_energyLossType = 0;
   mu_staco_caloMuonIdTag = 0;
   mu_staco_caloLRLikelihood = 0;
   mu_staco_bestMatch = 0;
   mu_staco_isStandAloneMuon = 0;
   mu_staco_isCombinedMuon = 0;
   mu_staco_isLowPtReconstructedMuon = 0;
   mu_staco_isSegmentTaggedMuon = 0;
   mu_staco_isCaloMuonId = 0;
   mu_staco_alsoFoundByLowPt = 0;
   mu_staco_alsoFoundByCaloMuonId = 0;
   mu_staco_isSiliconAssociatedForwardMuon = 0;
   mu_staco_loose = 0;
   mu_staco_medium = 0;
   mu_staco_tight = 0;
   mu_staco_d0_exPV = 0;
   mu_staco_z0_exPV = 0;
   mu_staco_phi_exPV = 0;
   mu_staco_theta_exPV = 0;
   mu_staco_qoverp_exPV = 0;
   mu_staco_cb_d0_exPV = 0;
   mu_staco_cb_z0_exPV = 0;
   mu_staco_cb_phi_exPV = 0;
   mu_staco_cb_theta_exPV = 0;
   mu_staco_cb_qoverp_exPV = 0;
   mu_staco_id_d0_exPV = 0;
   mu_staco_id_z0_exPV = 0;
   mu_staco_id_phi_exPV = 0;
   mu_staco_id_theta_exPV = 0;
   mu_staco_id_qoverp_exPV = 0;
   mu_staco_me_d0_exPV = 0;
   mu_staco_me_z0_exPV = 0;
   mu_staco_me_phi_exPV = 0;
   mu_staco_me_theta_exPV = 0;
   mu_staco_me_qoverp_exPV = 0;
   mu_staco_ie_d0_exPV = 0;
   mu_staco_ie_z0_exPV = 0;
   mu_staco_ie_phi_exPV = 0;
   mu_staco_ie_theta_exPV = 0;
   mu_staco_ie_qoverp_exPV = 0;
   mu_staco_SpaceTime_detID = 0;
   mu_staco_SpaceTime_t = 0;
   mu_staco_SpaceTime_tError = 0;
   mu_staco_SpaceTime_weight = 0;
   mu_staco_SpaceTime_x = 0;
   mu_staco_SpaceTime_y = 0;
   mu_staco_SpaceTime_z = 0;
   mu_staco_cov_d0_exPV = 0;
   mu_staco_cov_z0_exPV = 0;
   mu_staco_cov_phi_exPV = 0;
   mu_staco_cov_theta_exPV = 0;
   mu_staco_cov_qoverp_exPV = 0;
   mu_staco_cov_d0_z0_exPV = 0;
   mu_staco_cov_d0_phi_exPV = 0;
   mu_staco_cov_d0_theta_exPV = 0;
   mu_staco_cov_d0_qoverp_exPV = 0;
   mu_staco_cov_z0_phi_exPV = 0;
   mu_staco_cov_z0_theta_exPV = 0;
   mu_staco_cov_z0_qoverp_exPV = 0;
   mu_staco_cov_phi_theta_exPV = 0;
   mu_staco_cov_phi_qoverp_exPV = 0;
   mu_staco_cov_theta_qoverp_exPV = 0;
   mu_staco_id_cov_d0_exPV = 0;
   mu_staco_id_cov_z0_exPV = 0;
   mu_staco_id_cov_phi_exPV = 0;
   mu_staco_id_cov_theta_exPV = 0;
   mu_staco_id_cov_qoverp_exPV = 0;
   mu_staco_id_cov_d0_z0_exPV = 0;
   mu_staco_id_cov_d0_phi_exPV = 0;
   mu_staco_id_cov_d0_theta_exPV = 0;
   mu_staco_id_cov_d0_qoverp_exPV = 0;
   mu_staco_id_cov_z0_phi_exPV = 0;
   mu_staco_id_cov_z0_theta_exPV = 0;
   mu_staco_id_cov_z0_qoverp_exPV = 0;
   mu_staco_id_cov_phi_theta_exPV = 0;
   mu_staco_id_cov_phi_qoverp_exPV = 0;
   mu_staco_id_cov_theta_qoverp_exPV = 0;
   mu_staco_me_cov_d0_exPV = 0;
   mu_staco_me_cov_z0_exPV = 0;
   mu_staco_me_cov_phi_exPV = 0;
   mu_staco_me_cov_theta_exPV = 0;
   mu_staco_me_cov_qoverp_exPV = 0;
   mu_staco_me_cov_d0_z0_exPV = 0;
   mu_staco_me_cov_d0_phi_exPV = 0;
   mu_staco_me_cov_d0_theta_exPV = 0;
   mu_staco_me_cov_d0_qoverp_exPV = 0;
   mu_staco_me_cov_z0_phi_exPV = 0;
   mu_staco_me_cov_z0_theta_exPV = 0;
   mu_staco_me_cov_z0_qoverp_exPV = 0;
   mu_staco_me_cov_phi_theta_exPV = 0;
   mu_staco_me_cov_phi_qoverp_exPV = 0;
   mu_staco_me_cov_theta_qoverp_exPV = 0;
   mu_staco_ms_d0 = 0;
   mu_staco_ms_z0 = 0;
   mu_staco_ms_phi = 0;
   mu_staco_ms_theta = 0;
   mu_staco_ms_qoverp = 0;
   mu_staco_id_d0 = 0;
   mu_staco_id_z0 = 0;
   mu_staco_id_phi = 0;
   mu_staco_id_theta = 0;
   mu_staco_id_qoverp = 0;
   mu_staco_me_d0 = 0;
   mu_staco_me_z0 = 0;
   mu_staco_me_phi = 0;
   mu_staco_me_theta = 0;
   mu_staco_me_qoverp = 0;
   mu_staco_ie_d0 = 0;
   mu_staco_ie_z0 = 0;
   mu_staco_ie_phi = 0;
   mu_staco_ie_theta = 0;
   mu_staco_ie_qoverp = 0;
   mu_staco_nOutliersOnTrack = 0;
   mu_staco_nBLHits = 0;
   mu_staco_nPixHits = 0;
   mu_staco_nSCTHits = 0;
   mu_staco_nTRTHits = 0;
   mu_staco_nTRTHighTHits = 0;
   mu_staco_nBLSharedHits = 0;
   mu_staco_nPixSharedHits = 0;
   mu_staco_nPixHoles = 0;
   mu_staco_nSCTSharedHits = 0;
   mu_staco_nSCTHoles = 0;
   mu_staco_nTRTOutliers = 0;
   mu_staco_nTRTHighTOutliers = 0;
   mu_staco_nGangedPixels = 0;
   mu_staco_nPixelDeadSensors = 0;
   mu_staco_nSCTDeadSensors = 0;
   mu_staco_nTRTDeadStraws = 0;
   mu_staco_expectBLayerHit = 0;
   mu_staco_nMDTHits = 0;
   mu_staco_nMDTHoles = 0;
   mu_staco_nCSCEtaHits = 0;
   mu_staco_nCSCEtaHoles = 0;
   mu_staco_nCSCUnspoiledEtaHits = 0;
   mu_staco_nCSCPhiHits = 0;
   mu_staco_nCSCPhiHoles = 0;
   mu_staco_nRPCEtaHits = 0;
   mu_staco_nRPCEtaHoles = 0;
   mu_staco_nRPCPhiHits = 0;
   mu_staco_nRPCPhiHoles = 0;
   mu_staco_nTGCEtaHits = 0;
   mu_staco_nTGCEtaHoles = 0;
   mu_staco_nTGCPhiHits = 0;
   mu_staco_nTGCPhiHoles = 0;
   mu_staco_nprecisionLayers = 0;
   mu_staco_nprecisionHoleLayers = 0;
   mu_staco_nphiLayers = 0;
   mu_staco_ntrigEtaLayers = 0;
   mu_staco_nphiHoleLayers = 0;
   mu_staco_ntrigEtaHoleLayers = 0;
   mu_staco_nMDTBIHits = 0;
   mu_staco_nMDTBMHits = 0;
   mu_staco_nMDTBOHits = 0;
   mu_staco_nMDTBEEHits = 0;
   mu_staco_nMDTBIS78Hits = 0;
   mu_staco_nMDTEIHits = 0;
   mu_staco_nMDTEMHits = 0;
   mu_staco_nMDTEOHits = 0;
   mu_staco_nMDTEEHits = 0;
   mu_staco_nRPCLayer1EtaHits = 0;
   mu_staco_nRPCLayer2EtaHits = 0;
   mu_staco_nRPCLayer3EtaHits = 0;
   mu_staco_nRPCLayer1PhiHits = 0;
   mu_staco_nRPCLayer2PhiHits = 0;
   mu_staco_nRPCLayer3PhiHits = 0;
   mu_staco_nTGCLayer1EtaHits = 0;
   mu_staco_nTGCLayer2EtaHits = 0;
   mu_staco_nTGCLayer3EtaHits = 0;
   mu_staco_nTGCLayer4EtaHits = 0;
   mu_staco_nTGCLayer1PhiHits = 0;
   mu_staco_nTGCLayer2PhiHits = 0;
   mu_staco_nTGCLayer3PhiHits = 0;
   mu_staco_nTGCLayer4PhiHits = 0;
   mu_staco_barrelSectors = 0;
   mu_staco_endcapSectors = 0;
   mu_staco_trackd0 = 0;
   mu_staco_trackz0 = 0;
   mu_staco_trackphi = 0;
   mu_staco_tracktheta = 0;
   mu_staco_trackqoverp = 0;
   mu_staco_trackcov_d0 = 0;
   mu_staco_trackcov_z0 = 0;
   mu_staco_trackcov_phi = 0;
   mu_staco_trackcov_theta = 0;
   mu_staco_trackcov_qoverp = 0;
   mu_staco_trackcov_d0_z0 = 0;
   mu_staco_trackcov_d0_phi = 0;
   mu_staco_trackcov_d0_theta = 0;
   mu_staco_trackcov_d0_qoverp = 0;
   mu_staco_trackcov_z0_phi = 0;
   mu_staco_trackcov_z0_theta = 0;
   mu_staco_trackcov_z0_qoverp = 0;
   mu_staco_trackcov_phi_theta = 0;
   mu_staco_trackcov_phi_qoverp = 0;
   mu_staco_trackcov_theta_qoverp = 0;
   mu_staco_trackfitchi2 = 0;
   mu_staco_trackfitndof = 0;
   mu_staco_hastrack = 0;
   mu_staco_trackd0beam = 0;
   mu_staco_trackz0beam = 0;
   mu_staco_tracksigd0beam = 0;
   mu_staco_tracksigz0beam = 0;
   mu_staco_trackd0pv = 0;
   mu_staco_trackz0pv = 0;
   mu_staco_tracksigd0pv = 0;
   mu_staco_tracksigz0pv = 0;
   mu_staco_trackIPEstimate_d0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_z0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   mu_staco_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   mu_staco_trackd0pvunbiased = 0;
   mu_staco_trackz0pvunbiased = 0;
   mu_staco_tracksigd0pvunbiased = 0;
   mu_staco_tracksigz0pvunbiased = 0;
   mu_staco_CaloCell_sampling = 0;
   mu_staco_CaloCell_eta = 0;
   mu_staco_CaloCell_phi = 0;
   mu_staco_CaloCell_dr = 0;
   mu_staco_CaloCell_E = 0;
   mu_staco_CaloCell_t = 0;
   mu_staco_CaloCell_x = 0;
   mu_staco_CaloCell_y = 0;
   mu_staco_CaloCell_z = 0;
   mu_staco_TileBeta = 0;
   mu_staco_TileBetaMass = 0;
   mu_staco_meandADC = 0;
   mu_staco_stau_candidate_assoc_index = 0;
   mu_calo_E = 0;
   mu_calo_pt = 0;
   mu_calo_m = 0;
   mu_calo_eta = 0;
   mu_calo_phi = 0;
   mu_calo_px = 0;
   mu_calo_py = 0;
   mu_calo_pz = 0;
   mu_calo_charge = 0;
   mu_calo_allauthor = 0;
   mu_calo_author = 0;
   mu_calo_beta = 0;
   mu_calo_isMuonLikelihood = 0;
   mu_calo_matchchi2 = 0;
   mu_calo_matchndof = 0;
   mu_calo_etcone20 = 0;
   mu_calo_etcone30 = 0;
   mu_calo_etcone40 = 0;
   mu_calo_nucone20 = 0;
   mu_calo_nucone30 = 0;
   mu_calo_nucone40 = 0;
   mu_calo_ptcone20 = 0;
   mu_calo_ptcone30 = 0;
   mu_calo_ptcone40 = 0;
   mu_calo_etconeNoEm10 = 0;
   mu_calo_etconeNoEm20 = 0;
   mu_calo_etconeNoEm30 = 0;
   mu_calo_etconeNoEm40 = 0;
   mu_calo_scatteringCurvatureSignificance = 0;
   mu_calo_scatteringNeighbourSignificance = 0;
   mu_calo_momentumBalanceSignificance = 0;
   mu_calo_energyLossPar = 0;
   mu_calo_energyLossErr = 0;
   mu_calo_etCore = 0;
   mu_calo_energyLossType = 0;
   mu_calo_caloMuonIdTag = 0;
   mu_calo_caloLRLikelihood = 0;
   mu_calo_bestMatch = 0;
   mu_calo_isStandAloneMuon = 0;
   mu_calo_isCombinedMuon = 0;
   mu_calo_isLowPtReconstructedMuon = 0;
   mu_calo_isSegmentTaggedMuon = 0;
   mu_calo_isCaloMuonId = 0;
   mu_calo_alsoFoundByLowPt = 0;
   mu_calo_alsoFoundByCaloMuonId = 0;
   mu_calo_isSiliconAssociatedForwardMuon = 0;
   mu_calo_loose = 0;
   mu_calo_medium = 0;
   mu_calo_tight = 0;
   mu_calo_d0_exPV = 0;
   mu_calo_z0_exPV = 0;
   mu_calo_phi_exPV = 0;
   mu_calo_theta_exPV = 0;
   mu_calo_qoverp_exPV = 0;
   mu_calo_cb_d0_exPV = 0;
   mu_calo_cb_z0_exPV = 0;
   mu_calo_cb_phi_exPV = 0;
   mu_calo_cb_theta_exPV = 0;
   mu_calo_cb_qoverp_exPV = 0;
   mu_calo_id_d0_exPV = 0;
   mu_calo_id_z0_exPV = 0;
   mu_calo_id_phi_exPV = 0;
   mu_calo_id_theta_exPV = 0;
   mu_calo_id_qoverp_exPV = 0;
   mu_calo_me_d0_exPV = 0;
   mu_calo_me_z0_exPV = 0;
   mu_calo_me_phi_exPV = 0;
   mu_calo_me_theta_exPV = 0;
   mu_calo_me_qoverp_exPV = 0;
   mu_calo_ie_d0_exPV = 0;
   mu_calo_ie_z0_exPV = 0;
   mu_calo_ie_phi_exPV = 0;
   mu_calo_ie_theta_exPV = 0;
   mu_calo_ie_qoverp_exPV = 0;
   mu_calo_SpaceTime_detID = 0;
   mu_calo_SpaceTime_t = 0;
   mu_calo_SpaceTime_tError = 0;
   mu_calo_SpaceTime_weight = 0;
   mu_calo_SpaceTime_x = 0;
   mu_calo_SpaceTime_y = 0;
   mu_calo_SpaceTime_z = 0;
   mu_calo_cov_d0_exPV = 0;
   mu_calo_cov_z0_exPV = 0;
   mu_calo_cov_phi_exPV = 0;
   mu_calo_cov_theta_exPV = 0;
   mu_calo_cov_qoverp_exPV = 0;
   mu_calo_cov_d0_z0_exPV = 0;
   mu_calo_cov_d0_phi_exPV = 0;
   mu_calo_cov_d0_theta_exPV = 0;
   mu_calo_cov_d0_qoverp_exPV = 0;
   mu_calo_cov_z0_phi_exPV = 0;
   mu_calo_cov_z0_theta_exPV = 0;
   mu_calo_cov_z0_qoverp_exPV = 0;
   mu_calo_cov_phi_theta_exPV = 0;
   mu_calo_cov_phi_qoverp_exPV = 0;
   mu_calo_cov_theta_qoverp_exPV = 0;
   mu_calo_id_cov_d0_exPV = 0;
   mu_calo_id_cov_z0_exPV = 0;
   mu_calo_id_cov_phi_exPV = 0;
   mu_calo_id_cov_theta_exPV = 0;
   mu_calo_id_cov_qoverp_exPV = 0;
   mu_calo_id_cov_d0_z0_exPV = 0;
   mu_calo_id_cov_d0_phi_exPV = 0;
   mu_calo_id_cov_d0_theta_exPV = 0;
   mu_calo_id_cov_d0_qoverp_exPV = 0;
   mu_calo_id_cov_z0_phi_exPV = 0;
   mu_calo_id_cov_z0_theta_exPV = 0;
   mu_calo_id_cov_z0_qoverp_exPV = 0;
   mu_calo_id_cov_phi_theta_exPV = 0;
   mu_calo_id_cov_phi_qoverp_exPV = 0;
   mu_calo_id_cov_theta_qoverp_exPV = 0;
   mu_calo_me_cov_d0_exPV = 0;
   mu_calo_me_cov_z0_exPV = 0;
   mu_calo_me_cov_phi_exPV = 0;
   mu_calo_me_cov_theta_exPV = 0;
   mu_calo_me_cov_qoverp_exPV = 0;
   mu_calo_me_cov_d0_z0_exPV = 0;
   mu_calo_me_cov_d0_phi_exPV = 0;
   mu_calo_me_cov_d0_theta_exPV = 0;
   mu_calo_me_cov_d0_qoverp_exPV = 0;
   mu_calo_me_cov_z0_phi_exPV = 0;
   mu_calo_me_cov_z0_theta_exPV = 0;
   mu_calo_me_cov_z0_qoverp_exPV = 0;
   mu_calo_me_cov_phi_theta_exPV = 0;
   mu_calo_me_cov_phi_qoverp_exPV = 0;
   mu_calo_me_cov_theta_qoverp_exPV = 0;
   mu_calo_ms_d0 = 0;
   mu_calo_ms_z0 = 0;
   mu_calo_ms_phi = 0;
   mu_calo_ms_theta = 0;
   mu_calo_ms_qoverp = 0;
   mu_calo_id_d0 = 0;
   mu_calo_id_z0 = 0;
   mu_calo_id_phi = 0;
   mu_calo_id_theta = 0;
   mu_calo_id_qoverp = 0;
   mu_calo_me_d0 = 0;
   mu_calo_me_z0 = 0;
   mu_calo_me_phi = 0;
   mu_calo_me_theta = 0;
   mu_calo_me_qoverp = 0;
   mu_calo_ie_d0 = 0;
   mu_calo_ie_z0 = 0;
   mu_calo_ie_phi = 0;
   mu_calo_ie_theta = 0;
   mu_calo_ie_qoverp = 0;
   mu_calo_nOutliersOnTrack = 0;
   mu_calo_nBLHits = 0;
   mu_calo_nPixHits = 0;
   mu_calo_nSCTHits = 0;
   mu_calo_nTRTHits = 0;
   mu_calo_nTRTHighTHits = 0;
   mu_calo_nBLSharedHits = 0;
   mu_calo_nPixSharedHits = 0;
   mu_calo_nPixHoles = 0;
   mu_calo_nSCTSharedHits = 0;
   mu_calo_nSCTHoles = 0;
   mu_calo_nTRTOutliers = 0;
   mu_calo_nTRTHighTOutliers = 0;
   mu_calo_nGangedPixels = 0;
   mu_calo_nPixelDeadSensors = 0;
   mu_calo_nSCTDeadSensors = 0;
   mu_calo_nTRTDeadStraws = 0;
   mu_calo_expectBLayerHit = 0;
   mu_calo_nMDTHits = 0;
   mu_calo_nMDTHoles = 0;
   mu_calo_nCSCEtaHits = 0;
   mu_calo_nCSCEtaHoles = 0;
   mu_calo_nCSCUnspoiledEtaHits = 0;
   mu_calo_nCSCPhiHits = 0;
   mu_calo_nCSCPhiHoles = 0;
   mu_calo_nRPCEtaHits = 0;
   mu_calo_nRPCEtaHoles = 0;
   mu_calo_nRPCPhiHits = 0;
   mu_calo_nRPCPhiHoles = 0;
   mu_calo_nTGCEtaHits = 0;
   mu_calo_nTGCEtaHoles = 0;
   mu_calo_nTGCPhiHits = 0;
   mu_calo_nTGCPhiHoles = 0;
   mu_calo_nprecisionLayers = 0;
   mu_calo_nprecisionHoleLayers = 0;
   mu_calo_nphiLayers = 0;
   mu_calo_ntrigEtaLayers = 0;
   mu_calo_nphiHoleLayers = 0;
   mu_calo_ntrigEtaHoleLayers = 0;
   mu_calo_nMDTBIHits = 0;
   mu_calo_nMDTBMHits = 0;
   mu_calo_nMDTBOHits = 0;
   mu_calo_nMDTBEEHits = 0;
   mu_calo_nMDTBIS78Hits = 0;
   mu_calo_nMDTEIHits = 0;
   mu_calo_nMDTEMHits = 0;
   mu_calo_nMDTEOHits = 0;
   mu_calo_nMDTEEHits = 0;
   mu_calo_nRPCLayer1EtaHits = 0;
   mu_calo_nRPCLayer2EtaHits = 0;
   mu_calo_nRPCLayer3EtaHits = 0;
   mu_calo_nRPCLayer1PhiHits = 0;
   mu_calo_nRPCLayer2PhiHits = 0;
   mu_calo_nRPCLayer3PhiHits = 0;
   mu_calo_nTGCLayer1EtaHits = 0;
   mu_calo_nTGCLayer2EtaHits = 0;
   mu_calo_nTGCLayer3EtaHits = 0;
   mu_calo_nTGCLayer4EtaHits = 0;
   mu_calo_nTGCLayer1PhiHits = 0;
   mu_calo_nTGCLayer2PhiHits = 0;
   mu_calo_nTGCLayer3PhiHits = 0;
   mu_calo_nTGCLayer4PhiHits = 0;
   mu_calo_barrelSectors = 0;
   mu_calo_endcapSectors = 0;
   mu_calo_trackd0 = 0;
   mu_calo_trackz0 = 0;
   mu_calo_trackphi = 0;
   mu_calo_tracktheta = 0;
   mu_calo_trackqoverp = 0;
   mu_calo_trackcov_d0 = 0;
   mu_calo_trackcov_z0 = 0;
   mu_calo_trackcov_phi = 0;
   mu_calo_trackcov_theta = 0;
   mu_calo_trackcov_qoverp = 0;
   mu_calo_trackcov_d0_z0 = 0;
   mu_calo_trackcov_d0_phi = 0;
   mu_calo_trackcov_d0_theta = 0;
   mu_calo_trackcov_d0_qoverp = 0;
   mu_calo_trackcov_z0_phi = 0;
   mu_calo_trackcov_z0_theta = 0;
   mu_calo_trackcov_z0_qoverp = 0;
   mu_calo_trackcov_phi_theta = 0;
   mu_calo_trackcov_phi_qoverp = 0;
   mu_calo_trackcov_theta_qoverp = 0;
   mu_calo_trackfitchi2 = 0;
   mu_calo_trackfitndof = 0;
   mu_calo_hastrack = 0;
   mu_calo_trackd0beam = 0;
   mu_calo_trackz0beam = 0;
   mu_calo_tracksigd0beam = 0;
   mu_calo_tracksigz0beam = 0;
   mu_calo_trackd0pv = 0;
   mu_calo_trackz0pv = 0;
   mu_calo_tracksigd0pv = 0;
   mu_calo_tracksigz0pv = 0;
   mu_calo_trackIPEstimate_d0_biasedpvunbiased = 0;
   mu_calo_trackIPEstimate_z0_biasedpvunbiased = 0;
   mu_calo_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   mu_calo_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   mu_calo_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   mu_calo_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   mu_calo_trackd0pvunbiased = 0;
   mu_calo_trackz0pvunbiased = 0;
   mu_calo_tracksigd0pvunbiased = 0;
   mu_calo_tracksigz0pvunbiased = 0;
   mu_calo_CaloCell_sampling = 0;
   mu_calo_CaloCell_eta = 0;
   mu_calo_CaloCell_phi = 0;
   mu_calo_CaloCell_dr = 0;
   mu_calo_CaloCell_E = 0;
   mu_calo_CaloCell_t = 0;
   mu_calo_CaloCell_x = 0;
   mu_calo_CaloCell_y = 0;
   mu_calo_CaloCell_z = 0;
   mu_calo_TileBeta = 0;
   mu_calo_TileBetaMass = 0;
   mu_calo_meandADC = 0;
   mu_calo_stau_candidate_assoc_index = 0;
   mu_mugirl_E = 0;
   mu_mugirl_pt = 0;
   mu_mugirl_m = 0;
   mu_mugirl_eta = 0;
   mu_mugirl_phi = 0;
   mu_mugirl_px = 0;
   mu_mugirl_py = 0;
   mu_mugirl_pz = 0;
   mu_mugirl_charge = 0;
   mu_mugirl_allauthor = 0;
   mu_mugirl_author = 0;
   mu_mugirl_beta = 0;
   mu_mugirl_isMuonLikelihood = 0;
   mu_mugirl_matchchi2 = 0;
   mu_mugirl_matchndof = 0;
   mu_mugirl_etcone20 = 0;
   mu_mugirl_etcone30 = 0;
   mu_mugirl_etcone40 = 0;
   mu_mugirl_nucone20 = 0;
   mu_mugirl_nucone30 = 0;
   mu_mugirl_nucone40 = 0;
   mu_mugirl_ptcone20 = 0;
   mu_mugirl_ptcone30 = 0;
   mu_mugirl_ptcone40 = 0;
   mu_mugirl_etconeNoEm10 = 0;
   mu_mugirl_etconeNoEm20 = 0;
   mu_mugirl_etconeNoEm30 = 0;
   mu_mugirl_etconeNoEm40 = 0;
   mu_mugirl_scatteringCurvatureSignificance = 0;
   mu_mugirl_scatteringNeighbourSignificance = 0;
   mu_mugirl_momentumBalanceSignificance = 0;
   mu_mugirl_energyLossPar = 0;
   mu_mugirl_energyLossErr = 0;
   mu_mugirl_etCore = 0;
   mu_mugirl_energyLossType = 0;
   mu_mugirl_caloMuonIdTag = 0;
   mu_mugirl_caloLRLikelihood = 0;
   mu_mugirl_bestMatch = 0;
   mu_mugirl_isStandAloneMuon = 0;
   mu_mugirl_isCombinedMuon = 0;
   mu_mugirl_isLowPtReconstructedMuon = 0;
   mu_mugirl_isSegmentTaggedMuon = 0;
   mu_mugirl_isCaloMuonId = 0;
   mu_mugirl_alsoFoundByLowPt = 0;
   mu_mugirl_alsoFoundByCaloMuonId = 0;
   mu_mugirl_isSiliconAssociatedForwardMuon = 0;
   mu_mugirl_loose = 0;
   mu_mugirl_medium = 0;
   mu_mugirl_tight = 0;
   mu_mugirl_d0_exPV = 0;
   mu_mugirl_z0_exPV = 0;
   mu_mugirl_phi_exPV = 0;
   mu_mugirl_theta_exPV = 0;
   mu_mugirl_qoverp_exPV = 0;
   mu_mugirl_cb_d0_exPV = 0;
   mu_mugirl_cb_z0_exPV = 0;
   mu_mugirl_cb_phi_exPV = 0;
   mu_mugirl_cb_theta_exPV = 0;
   mu_mugirl_cb_qoverp_exPV = 0;
   mu_mugirl_id_d0_exPV = 0;
   mu_mugirl_id_z0_exPV = 0;
   mu_mugirl_id_phi_exPV = 0;
   mu_mugirl_id_theta_exPV = 0;
   mu_mugirl_id_qoverp_exPV = 0;
   mu_mugirl_me_d0_exPV = 0;
   mu_mugirl_me_z0_exPV = 0;
   mu_mugirl_me_phi_exPV = 0;
   mu_mugirl_me_theta_exPV = 0;
   mu_mugirl_me_qoverp_exPV = 0;
   mu_mugirl_ie_d0_exPV = 0;
   mu_mugirl_ie_z0_exPV = 0;
   mu_mugirl_ie_phi_exPV = 0;
   mu_mugirl_ie_theta_exPV = 0;
   mu_mugirl_ie_qoverp_exPV = 0;
   mu_mugirl_SpaceTime_detID = 0;
   mu_mugirl_SpaceTime_t = 0;
   mu_mugirl_SpaceTime_tError = 0;
   mu_mugirl_SpaceTime_weight = 0;
   mu_mugirl_SpaceTime_x = 0;
   mu_mugirl_SpaceTime_y = 0;
   mu_mugirl_SpaceTime_z = 0;
   mu_mugirl_cov_d0_exPV = 0;
   mu_mugirl_cov_z0_exPV = 0;
   mu_mugirl_cov_phi_exPV = 0;
   mu_mugirl_cov_theta_exPV = 0;
   mu_mugirl_cov_qoverp_exPV = 0;
   mu_mugirl_cov_d0_z0_exPV = 0;
   mu_mugirl_cov_d0_phi_exPV = 0;
   mu_mugirl_cov_d0_theta_exPV = 0;
   mu_mugirl_cov_d0_qoverp_exPV = 0;
   mu_mugirl_cov_z0_phi_exPV = 0;
   mu_mugirl_cov_z0_theta_exPV = 0;
   mu_mugirl_cov_z0_qoverp_exPV = 0;
   mu_mugirl_cov_phi_theta_exPV = 0;
   mu_mugirl_cov_phi_qoverp_exPV = 0;
   mu_mugirl_cov_theta_qoverp_exPV = 0;
   mu_mugirl_id_cov_d0_exPV = 0;
   mu_mugirl_id_cov_z0_exPV = 0;
   mu_mugirl_id_cov_phi_exPV = 0;
   mu_mugirl_id_cov_theta_exPV = 0;
   mu_mugirl_id_cov_qoverp_exPV = 0;
   mu_mugirl_id_cov_d0_z0_exPV = 0;
   mu_mugirl_id_cov_d0_phi_exPV = 0;
   mu_mugirl_id_cov_d0_theta_exPV = 0;
   mu_mugirl_id_cov_d0_qoverp_exPV = 0;
   mu_mugirl_id_cov_z0_phi_exPV = 0;
   mu_mugirl_id_cov_z0_theta_exPV = 0;
   mu_mugirl_id_cov_z0_qoverp_exPV = 0;
   mu_mugirl_id_cov_phi_theta_exPV = 0;
   mu_mugirl_id_cov_phi_qoverp_exPV = 0;
   mu_mugirl_id_cov_theta_qoverp_exPV = 0;
   mu_mugirl_me_cov_d0_exPV = 0;
   mu_mugirl_me_cov_z0_exPV = 0;
   mu_mugirl_me_cov_phi_exPV = 0;
   mu_mugirl_me_cov_theta_exPV = 0;
   mu_mugirl_me_cov_qoverp_exPV = 0;
   mu_mugirl_me_cov_d0_z0_exPV = 0;
   mu_mugirl_me_cov_d0_phi_exPV = 0;
   mu_mugirl_me_cov_d0_theta_exPV = 0;
   mu_mugirl_me_cov_d0_qoverp_exPV = 0;
   mu_mugirl_me_cov_z0_phi_exPV = 0;
   mu_mugirl_me_cov_z0_theta_exPV = 0;
   mu_mugirl_me_cov_z0_qoverp_exPV = 0;
   mu_mugirl_me_cov_phi_theta_exPV = 0;
   mu_mugirl_me_cov_phi_qoverp_exPV = 0;
   mu_mugirl_me_cov_theta_qoverp_exPV = 0;
   mu_mugirl_ms_d0 = 0;
   mu_mugirl_ms_z0 = 0;
   mu_mugirl_ms_phi = 0;
   mu_mugirl_ms_theta = 0;
   mu_mugirl_ms_qoverp = 0;
   mu_mugirl_id_d0 = 0;
   mu_mugirl_id_z0 = 0;
   mu_mugirl_id_phi = 0;
   mu_mugirl_id_theta = 0;
   mu_mugirl_id_qoverp = 0;
   mu_mugirl_me_d0 = 0;
   mu_mugirl_me_z0 = 0;
   mu_mugirl_me_phi = 0;
   mu_mugirl_me_theta = 0;
   mu_mugirl_me_qoverp = 0;
   mu_mugirl_ie_d0 = 0;
   mu_mugirl_ie_z0 = 0;
   mu_mugirl_ie_phi = 0;
   mu_mugirl_ie_theta = 0;
   mu_mugirl_ie_qoverp = 0;
   mu_mugirl_nOutliersOnTrack = 0;
   mu_mugirl_nBLHits = 0;
   mu_mugirl_nPixHits = 0;
   mu_mugirl_nSCTHits = 0;
   mu_mugirl_nTRTHits = 0;
   mu_mugirl_nTRTHighTHits = 0;
   mu_mugirl_nBLSharedHits = 0;
   mu_mugirl_nPixSharedHits = 0;
   mu_mugirl_nPixHoles = 0;
   mu_mugirl_nSCTSharedHits = 0;
   mu_mugirl_nSCTHoles = 0;
   mu_mugirl_nTRTOutliers = 0;
   mu_mugirl_nTRTHighTOutliers = 0;
   mu_mugirl_nGangedPixels = 0;
   mu_mugirl_nPixelDeadSensors = 0;
   mu_mugirl_nSCTDeadSensors = 0;
   mu_mugirl_nTRTDeadStraws = 0;
   mu_mugirl_expectBLayerHit = 0;
   mu_mugirl_nMDTHits = 0;
   mu_mugirl_nMDTHoles = 0;
   mu_mugirl_nCSCEtaHits = 0;
   mu_mugirl_nCSCEtaHoles = 0;
   mu_mugirl_nCSCUnspoiledEtaHits = 0;
   mu_mugirl_nCSCPhiHits = 0;
   mu_mugirl_nCSCPhiHoles = 0;
   mu_mugirl_nRPCEtaHits = 0;
   mu_mugirl_nRPCEtaHoles = 0;
   mu_mugirl_nRPCPhiHits = 0;
   mu_mugirl_nRPCPhiHoles = 0;
   mu_mugirl_nTGCEtaHits = 0;
   mu_mugirl_nTGCEtaHoles = 0;
   mu_mugirl_nTGCPhiHits = 0;
   mu_mugirl_nTGCPhiHoles = 0;
   mu_mugirl_nprecisionLayers = 0;
   mu_mugirl_nprecisionHoleLayers = 0;
   mu_mugirl_nphiLayers = 0;
   mu_mugirl_ntrigEtaLayers = 0;
   mu_mugirl_nphiHoleLayers = 0;
   mu_mugirl_ntrigEtaHoleLayers = 0;
   mu_mugirl_nMDTBIHits = 0;
   mu_mugirl_nMDTBMHits = 0;
   mu_mugirl_nMDTBOHits = 0;
   mu_mugirl_nMDTBEEHits = 0;
   mu_mugirl_nMDTBIS78Hits = 0;
   mu_mugirl_nMDTEIHits = 0;
   mu_mugirl_nMDTEMHits = 0;
   mu_mugirl_nMDTEOHits = 0;
   mu_mugirl_nMDTEEHits = 0;
   mu_mugirl_nRPCLayer1EtaHits = 0;
   mu_mugirl_nRPCLayer2EtaHits = 0;
   mu_mugirl_nRPCLayer3EtaHits = 0;
   mu_mugirl_nRPCLayer1PhiHits = 0;
   mu_mugirl_nRPCLayer2PhiHits = 0;
   mu_mugirl_nRPCLayer3PhiHits = 0;
   mu_mugirl_nTGCLayer1EtaHits = 0;
   mu_mugirl_nTGCLayer2EtaHits = 0;
   mu_mugirl_nTGCLayer3EtaHits = 0;
   mu_mugirl_nTGCLayer4EtaHits = 0;
   mu_mugirl_nTGCLayer1PhiHits = 0;
   mu_mugirl_nTGCLayer2PhiHits = 0;
   mu_mugirl_nTGCLayer3PhiHits = 0;
   mu_mugirl_nTGCLayer4PhiHits = 0;
   mu_mugirl_barrelSectors = 0;
   mu_mugirl_endcapSectors = 0;
   mu_mugirl_trackd0 = 0;
   mu_mugirl_trackz0 = 0;
   mu_mugirl_trackphi = 0;
   mu_mugirl_tracktheta = 0;
   mu_mugirl_trackqoverp = 0;
   mu_mugirl_trackcov_d0 = 0;
   mu_mugirl_trackcov_z0 = 0;
   mu_mugirl_trackcov_phi = 0;
   mu_mugirl_trackcov_theta = 0;
   mu_mugirl_trackcov_qoverp = 0;
   mu_mugirl_trackcov_d0_z0 = 0;
   mu_mugirl_trackcov_d0_phi = 0;
   mu_mugirl_trackcov_d0_theta = 0;
   mu_mugirl_trackcov_d0_qoverp = 0;
   mu_mugirl_trackcov_z0_phi = 0;
   mu_mugirl_trackcov_z0_theta = 0;
   mu_mugirl_trackcov_z0_qoverp = 0;
   mu_mugirl_trackcov_phi_theta = 0;
   mu_mugirl_trackcov_phi_qoverp = 0;
   mu_mugirl_trackcov_theta_qoverp = 0;
   mu_mugirl_trackfitchi2 = 0;
   mu_mugirl_trackfitndof = 0;
   mu_mugirl_hastrack = 0;
   mu_mugirl_trackd0beam = 0;
   mu_mugirl_trackz0beam = 0;
   mu_mugirl_tracksigd0beam = 0;
   mu_mugirl_tracksigz0beam = 0;
   mu_mugirl_trackd0pv = 0;
   mu_mugirl_trackz0pv = 0;
   mu_mugirl_tracksigd0pv = 0;
   mu_mugirl_tracksigz0pv = 0;
   mu_mugirl_trackIPEstimate_d0_biasedpvunbiased = 0;
   mu_mugirl_trackIPEstimate_z0_biasedpvunbiased = 0;
   mu_mugirl_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   mu_mugirl_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   mu_mugirl_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   mu_mugirl_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   mu_mugirl_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   mu_mugirl_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   mu_mugirl_trackd0pvunbiased = 0;
   mu_mugirl_trackz0pvunbiased = 0;
   mu_mugirl_tracksigd0pvunbiased = 0;
   mu_mugirl_tracksigz0pvunbiased = 0;
   mu_mugirl_CaloCell_sampling = 0;
   mu_mugirl_CaloCell_eta = 0;
   mu_mugirl_CaloCell_phi = 0;
   mu_mugirl_CaloCell_dr = 0;
   mu_mugirl_CaloCell_E = 0;
   mu_mugirl_CaloCell_t = 0;
   mu_mugirl_CaloCell_x = 0;
   mu_mugirl_CaloCell_y = 0;
   mu_mugirl_CaloCell_z = 0;
   mu_mugirl_TileBeta = 0;
   mu_mugirl_TileBetaMass = 0;
   mu_mugirl_meandADC = 0;
   mu_mugirl_stau_candidate_assoc_index = 0;
   mu_lowbeta_E = 0;
   mu_lowbeta_pt = 0;
   mu_lowbeta_m = 0;
   mu_lowbeta_eta = 0;
   mu_lowbeta_phi = 0;
   mu_lowbeta_px = 0;
   mu_lowbeta_py = 0;
   mu_lowbeta_pz = 0;
   mu_lowbeta_charge = 0;
   mu_lowbeta_allauthor = 0;
   mu_lowbeta_author = 0;
   mu_lowbeta_beta = 0;
   mu_lowbeta_isMuonLikelihood = 0;
   mu_lowbeta_matchchi2 = 0;
   mu_lowbeta_matchndof = 0;
   mu_lowbeta_etcone20 = 0;
   mu_lowbeta_etcone30 = 0;
   mu_lowbeta_etcone40 = 0;
   mu_lowbeta_nucone20 = 0;
   mu_lowbeta_nucone30 = 0;
   mu_lowbeta_nucone40 = 0;
   mu_lowbeta_ptcone20 = 0;
   mu_lowbeta_ptcone30 = 0;
   mu_lowbeta_ptcone40 = 0;
   mu_lowbeta_etconeNoEm10 = 0;
   mu_lowbeta_etconeNoEm20 = 0;
   mu_lowbeta_etconeNoEm30 = 0;
   mu_lowbeta_etconeNoEm40 = 0;
   mu_lowbeta_scatteringCurvatureSignificance = 0;
   mu_lowbeta_scatteringNeighbourSignificance = 0;
   mu_lowbeta_momentumBalanceSignificance = 0;
   mu_lowbeta_energyLossPar = 0;
   mu_lowbeta_energyLossErr = 0;
   mu_lowbeta_etCore = 0;
   mu_lowbeta_energyLossType = 0;
   mu_lowbeta_caloMuonIdTag = 0;
   mu_lowbeta_caloLRLikelihood = 0;
   mu_lowbeta_bestMatch = 0;
   mu_lowbeta_isStandAloneMuon = 0;
   mu_lowbeta_isCombinedMuon = 0;
   mu_lowbeta_isLowPtReconstructedMuon = 0;
   mu_lowbeta_isSegmentTaggedMuon = 0;
   mu_lowbeta_isCaloMuonId = 0;
   mu_lowbeta_alsoFoundByLowPt = 0;
   mu_lowbeta_alsoFoundByCaloMuonId = 0;
   mu_lowbeta_isSiliconAssociatedForwardMuon = 0;
   mu_lowbeta_loose = 0;
   mu_lowbeta_medium = 0;
   mu_lowbeta_tight = 0;
   mu_lowbeta_d0_exPV = 0;
   mu_lowbeta_z0_exPV = 0;
   mu_lowbeta_phi_exPV = 0;
   mu_lowbeta_theta_exPV = 0;
   mu_lowbeta_qoverp_exPV = 0;
   mu_lowbeta_cb_d0_exPV = 0;
   mu_lowbeta_cb_z0_exPV = 0;
   mu_lowbeta_cb_phi_exPV = 0;
   mu_lowbeta_cb_theta_exPV = 0;
   mu_lowbeta_cb_qoverp_exPV = 0;
   mu_lowbeta_id_d0_exPV = 0;
   mu_lowbeta_id_z0_exPV = 0;
   mu_lowbeta_id_phi_exPV = 0;
   mu_lowbeta_id_theta_exPV = 0;
   mu_lowbeta_id_qoverp_exPV = 0;
   mu_lowbeta_me_d0_exPV = 0;
   mu_lowbeta_me_z0_exPV = 0;
   mu_lowbeta_me_phi_exPV = 0;
   mu_lowbeta_me_theta_exPV = 0;
   mu_lowbeta_me_qoverp_exPV = 0;
   mu_lowbeta_ie_d0_exPV = 0;
   mu_lowbeta_ie_z0_exPV = 0;
   mu_lowbeta_ie_phi_exPV = 0;
   mu_lowbeta_ie_theta_exPV = 0;
   mu_lowbeta_ie_qoverp_exPV = 0;
   mu_lowbeta_SpaceTime_detID = 0;
   mu_lowbeta_SpaceTime_t = 0;
   mu_lowbeta_SpaceTime_tError = 0;
   mu_lowbeta_SpaceTime_weight = 0;
   mu_lowbeta_SpaceTime_x = 0;
   mu_lowbeta_SpaceTime_y = 0;
   mu_lowbeta_SpaceTime_z = 0;
   mu_lowbeta_cov_d0_exPV = 0;
   mu_lowbeta_cov_z0_exPV = 0;
   mu_lowbeta_cov_phi_exPV = 0;
   mu_lowbeta_cov_theta_exPV = 0;
   mu_lowbeta_cov_qoverp_exPV = 0;
   mu_lowbeta_cov_d0_z0_exPV = 0;
   mu_lowbeta_cov_d0_phi_exPV = 0;
   mu_lowbeta_cov_d0_theta_exPV = 0;
   mu_lowbeta_cov_d0_qoverp_exPV = 0;
   mu_lowbeta_cov_z0_phi_exPV = 0;
   mu_lowbeta_cov_z0_theta_exPV = 0;
   mu_lowbeta_cov_z0_qoverp_exPV = 0;
   mu_lowbeta_cov_phi_theta_exPV = 0;
   mu_lowbeta_cov_phi_qoverp_exPV = 0;
   mu_lowbeta_cov_theta_qoverp_exPV = 0;
   mu_lowbeta_id_cov_d0_exPV = 0;
   mu_lowbeta_id_cov_z0_exPV = 0;
   mu_lowbeta_id_cov_phi_exPV = 0;
   mu_lowbeta_id_cov_theta_exPV = 0;
   mu_lowbeta_id_cov_qoverp_exPV = 0;
   mu_lowbeta_id_cov_d0_z0_exPV = 0;
   mu_lowbeta_id_cov_d0_phi_exPV = 0;
   mu_lowbeta_id_cov_d0_theta_exPV = 0;
   mu_lowbeta_id_cov_d0_qoverp_exPV = 0;
   mu_lowbeta_id_cov_z0_phi_exPV = 0;
   mu_lowbeta_id_cov_z0_theta_exPV = 0;
   mu_lowbeta_id_cov_z0_qoverp_exPV = 0;
   mu_lowbeta_id_cov_phi_theta_exPV = 0;
   mu_lowbeta_id_cov_phi_qoverp_exPV = 0;
   mu_lowbeta_id_cov_theta_qoverp_exPV = 0;
   mu_lowbeta_me_cov_d0_exPV = 0;
   mu_lowbeta_me_cov_z0_exPV = 0;
   mu_lowbeta_me_cov_phi_exPV = 0;
   mu_lowbeta_me_cov_theta_exPV = 0;
   mu_lowbeta_me_cov_qoverp_exPV = 0;
   mu_lowbeta_me_cov_d0_z0_exPV = 0;
   mu_lowbeta_me_cov_d0_phi_exPV = 0;
   mu_lowbeta_me_cov_d0_theta_exPV = 0;
   mu_lowbeta_me_cov_d0_qoverp_exPV = 0;
   mu_lowbeta_me_cov_z0_phi_exPV = 0;
   mu_lowbeta_me_cov_z0_theta_exPV = 0;
   mu_lowbeta_me_cov_z0_qoverp_exPV = 0;
   mu_lowbeta_me_cov_phi_theta_exPV = 0;
   mu_lowbeta_me_cov_phi_qoverp_exPV = 0;
   mu_lowbeta_me_cov_theta_qoverp_exPV = 0;
   mu_lowbeta_ms_d0 = 0;
   mu_lowbeta_ms_z0 = 0;
   mu_lowbeta_ms_phi = 0;
   mu_lowbeta_ms_theta = 0;
   mu_lowbeta_ms_qoverp = 0;
   mu_lowbeta_id_d0 = 0;
   mu_lowbeta_id_z0 = 0;
   mu_lowbeta_id_phi = 0;
   mu_lowbeta_id_theta = 0;
   mu_lowbeta_id_qoverp = 0;
   mu_lowbeta_me_d0 = 0;
   mu_lowbeta_me_z0 = 0;
   mu_lowbeta_me_phi = 0;
   mu_lowbeta_me_theta = 0;
   mu_lowbeta_me_qoverp = 0;
   mu_lowbeta_ie_d0 = 0;
   mu_lowbeta_ie_z0 = 0;
   mu_lowbeta_ie_phi = 0;
   mu_lowbeta_ie_theta = 0;
   mu_lowbeta_ie_qoverp = 0;
   mu_lowbeta_nOutliersOnTrack = 0;
   mu_lowbeta_nBLHits = 0;
   mu_lowbeta_nPixHits = 0;
   mu_lowbeta_nSCTHits = 0;
   mu_lowbeta_nTRTHits = 0;
   mu_lowbeta_nTRTHighTHits = 0;
   mu_lowbeta_nBLSharedHits = 0;
   mu_lowbeta_nPixSharedHits = 0;
   mu_lowbeta_nPixHoles = 0;
   mu_lowbeta_nSCTSharedHits = 0;
   mu_lowbeta_nSCTHoles = 0;
   mu_lowbeta_nTRTOutliers = 0;
   mu_lowbeta_nTRTHighTOutliers = 0;
   mu_lowbeta_nGangedPixels = 0;
   mu_lowbeta_nPixelDeadSensors = 0;
   mu_lowbeta_nSCTDeadSensors = 0;
   mu_lowbeta_nTRTDeadStraws = 0;
   mu_lowbeta_expectBLayerHit = 0;
   mu_lowbeta_nMDTHits = 0;
   mu_lowbeta_nMDTHoles = 0;
   mu_lowbeta_nCSCEtaHits = 0;
   mu_lowbeta_nCSCEtaHoles = 0;
   mu_lowbeta_nCSCUnspoiledEtaHits = 0;
   mu_lowbeta_nCSCPhiHits = 0;
   mu_lowbeta_nCSCPhiHoles = 0;
   mu_lowbeta_nRPCEtaHits = 0;
   mu_lowbeta_nRPCEtaHoles = 0;
   mu_lowbeta_nRPCPhiHits = 0;
   mu_lowbeta_nRPCPhiHoles = 0;
   mu_lowbeta_nTGCEtaHits = 0;
   mu_lowbeta_nTGCEtaHoles = 0;
   mu_lowbeta_nTGCPhiHits = 0;
   mu_lowbeta_nTGCPhiHoles = 0;
   mu_lowbeta_nprecisionLayers = 0;
   mu_lowbeta_nprecisionHoleLayers = 0;
   mu_lowbeta_nphiLayers = 0;
   mu_lowbeta_ntrigEtaLayers = 0;
   mu_lowbeta_nphiHoleLayers = 0;
   mu_lowbeta_ntrigEtaHoleLayers = 0;
   mu_lowbeta_nMDTBIHits = 0;
   mu_lowbeta_nMDTBMHits = 0;
   mu_lowbeta_nMDTBOHits = 0;
   mu_lowbeta_nMDTBEEHits = 0;
   mu_lowbeta_nMDTBIS78Hits = 0;
   mu_lowbeta_nMDTEIHits = 0;
   mu_lowbeta_nMDTEMHits = 0;
   mu_lowbeta_nMDTEOHits = 0;
   mu_lowbeta_nMDTEEHits = 0;
   mu_lowbeta_nRPCLayer1EtaHits = 0;
   mu_lowbeta_nRPCLayer2EtaHits = 0;
   mu_lowbeta_nRPCLayer3EtaHits = 0;
   mu_lowbeta_nRPCLayer1PhiHits = 0;
   mu_lowbeta_nRPCLayer2PhiHits = 0;
   mu_lowbeta_nRPCLayer3PhiHits = 0;
   mu_lowbeta_nTGCLayer1EtaHits = 0;
   mu_lowbeta_nTGCLayer2EtaHits = 0;
   mu_lowbeta_nTGCLayer3EtaHits = 0;
   mu_lowbeta_nTGCLayer4EtaHits = 0;
   mu_lowbeta_nTGCLayer1PhiHits = 0;
   mu_lowbeta_nTGCLayer2PhiHits = 0;
   mu_lowbeta_nTGCLayer3PhiHits = 0;
   mu_lowbeta_nTGCLayer4PhiHits = 0;
   mu_lowbeta_barrelSectors = 0;
   mu_lowbeta_endcapSectors = 0;
   mu_lowbeta_trackd0 = 0;
   mu_lowbeta_trackz0 = 0;
   mu_lowbeta_trackphi = 0;
   mu_lowbeta_tracktheta = 0;
   mu_lowbeta_trackqoverp = 0;
   mu_lowbeta_trackcov_d0 = 0;
   mu_lowbeta_trackcov_z0 = 0;
   mu_lowbeta_trackcov_phi = 0;
   mu_lowbeta_trackcov_theta = 0;
   mu_lowbeta_trackcov_qoverp = 0;
   mu_lowbeta_trackcov_d0_z0 = 0;
   mu_lowbeta_trackcov_d0_phi = 0;
   mu_lowbeta_trackcov_d0_theta = 0;
   mu_lowbeta_trackcov_d0_qoverp = 0;
   mu_lowbeta_trackcov_z0_phi = 0;
   mu_lowbeta_trackcov_z0_theta = 0;
   mu_lowbeta_trackcov_z0_qoverp = 0;
   mu_lowbeta_trackcov_phi_theta = 0;
   mu_lowbeta_trackcov_phi_qoverp = 0;
   mu_lowbeta_trackcov_theta_qoverp = 0;
   mu_lowbeta_trackfitchi2 = 0;
   mu_lowbeta_trackfitndof = 0;
   mu_lowbeta_hastrack = 0;
   mu_lowbeta_trackd0beam = 0;
   mu_lowbeta_trackz0beam = 0;
   mu_lowbeta_tracksigd0beam = 0;
   mu_lowbeta_tracksigz0beam = 0;
   mu_lowbeta_trackd0pv = 0;
   mu_lowbeta_trackz0pv = 0;
   mu_lowbeta_tracksigd0pv = 0;
   mu_lowbeta_tracksigz0pv = 0;
   mu_lowbeta_trackIPEstimate_d0_biasedpvunbiased = 0;
   mu_lowbeta_trackIPEstimate_z0_biasedpvunbiased = 0;
   mu_lowbeta_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   mu_lowbeta_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   mu_lowbeta_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   mu_lowbeta_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   mu_lowbeta_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   mu_lowbeta_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   mu_lowbeta_trackd0pvunbiased = 0;
   mu_lowbeta_trackz0pvunbiased = 0;
   mu_lowbeta_tracksigd0pvunbiased = 0;
   mu_lowbeta_tracksigz0pvunbiased = 0;
   mu_lowbeta_CaloCell_sampling = 0;
   mu_lowbeta_CaloCell_eta = 0;
   mu_lowbeta_CaloCell_phi = 0;
   mu_lowbeta_CaloCell_dr = 0;
   mu_lowbeta_CaloCell_E = 0;
   mu_lowbeta_CaloCell_t = 0;
   mu_lowbeta_CaloCell_x = 0;
   mu_lowbeta_CaloCell_y = 0;
   mu_lowbeta_CaloCell_z = 0;
   mu_lowbeta_TileBeta = 0;
   mu_lowbeta_TileBetaMass = 0;
   mu_lowbeta_meandADC = 0;
   mu_lowbeta_stau_candidate_assoc_index = 0;
   jet_akt4topoem_E = 0;
   jet_akt4topoem_pt = 0;
   jet_akt4topoem_m = 0;
   jet_akt4topoem_eta = 0;
   jet_akt4topoem_phi = 0;
   jet_akt4topoem_EtaOrigin = 0;
   jet_akt4topoem_PhiOrigin = 0;
   jet_akt4topoem_MOrigin = 0;
   jet_akt4topoem_EtaOriginEM = 0;
   jet_akt4topoem_PhiOriginEM = 0;
   jet_akt4topoem_MOriginEM = 0;
   jet_akt4topoem_WIDTH = 0;
   jet_akt4topoem_n90 = 0;
   jet_akt4topoem_Timing = 0;
   jet_akt4topoem_LArQuality = 0;
   jet_akt4topoem_nTrk = 0;
   jet_akt4topoem_sumPtTrk = 0;
   jet_akt4topoem_OriginIndex = 0;
   jet_akt4topoem_HECQuality = 0;
   jet_akt4topoem_NegativeE = 0;
   jet_akt4topoem_AverageLArQF = 0;
   jet_akt4topoem_YFlip12 = 0;
   jet_akt4topoem_YFlip23 = 0;
   jet_akt4topoem_BCH_CORR_CELL = 0;
   jet_akt4topoem_BCH_CORR_DOTX = 0;
   jet_akt4topoem_BCH_CORR_JET = 0;
   jet_akt4topoem_BCH_CORR_JET_FORCELL = 0;
   jet_akt4topoem_ENG_BAD_CELLS = 0;
   jet_akt4topoem_N_BAD_CELLS = 0;
   jet_akt4topoem_N_BAD_CELLS_CORR = 0;
   jet_akt4topoem_BAD_CELLS_CORR_E = 0;
   jet_akt4topoem_NumTowers = 0;
   jet_akt4topoem_ootFracCells5 = 0;
   jet_akt4topoem_ootFracCells10 = 0;
   jet_akt4topoem_ootFracClusters5 = 0;
   jet_akt4topoem_ootFracClusters10 = 0;
   jet_akt4topoem_SamplingMax = 0;
   jet_akt4topoem_fracSamplingMax = 0;
   jet_akt4topoem_hecf = 0;
   jet_akt4topoem_tgap3f = 0;
   jet_akt4topoem_isUgly = 0;
   jet_akt4topoem_isBadLooseMinus = 0;
   jet_akt4topoem_isBadLoose = 0;
   jet_akt4topoem_isBadMedium = 0;
   jet_akt4topoem_isBadTight = 0;
   jet_akt4topoem_emfrac = 0;
   jet_akt4topoem_Offset = 0;
   jet_akt4topoem_EMJES = 0;
   jet_akt4topoem_EMJES_EtaCorr = 0;
   jet_akt4topoem_EMJESnooffset = 0;
   jet_akt4topoem_GCWJES = 0;
   jet_akt4topoem_GCWJES_EtaCorr = 0;
   jet_akt4topoem_CB = 0;
   jet_akt4topoem_LCJES = 0;
   jet_akt4topoem_emscale_E = 0;
   jet_akt4topoem_emscale_pt = 0;
   jet_akt4topoem_emscale_m = 0;
   jet_akt4topoem_emscale_eta = 0;
   jet_akt4topoem_emscale_phi = 0;
   jet_akt4topoem_jvtx_x = 0;
   jet_akt4topoem_jvtx_y = 0;
   jet_akt4topoem_jvtx_z = 0;
   jet_akt4topoem_jvtxf = 0;
   jet_akt4topoem_GSCFactorF = 0;
   jet_akt4topoem_WidthFraction = 0;
   jet_akt4topoem_el_dr = 0;
   jet_akt4topoem_el_matched = 0;
   jet_akt4topoem_mu_dr = 0;
   jet_akt4topoem_mu_matched = 0;
   jet_akt4topoem_L1_dr = 0;
   jet_akt4topoem_L1_matched = 0;
   jet_akt4topoem_L2_dr = 0;
   jet_akt4topoem_L2_matched = 0;
   jet_akt4topoem_EF_dr = 0;
   jet_akt4topoem_EF_matched = 0;
   jet_akt6topoem_E = 0;
   jet_akt6topoem_pt = 0;
   jet_akt6topoem_m = 0;
   jet_akt6topoem_eta = 0;
   jet_akt6topoem_phi = 0;
   jet_akt6topoem_EtaOrigin = 0;
   jet_akt6topoem_PhiOrigin = 0;
   jet_akt6topoem_MOrigin = 0;
   jet_akt6topoem_EtaOriginEM = 0;
   jet_akt6topoem_PhiOriginEM = 0;
   jet_akt6topoem_MOriginEM = 0;
   jet_akt6topoem_WIDTH = 0;
   jet_akt6topoem_n90 = 0;
   jet_akt6topoem_Timing = 0;
   jet_akt6topoem_LArQuality = 0;
   jet_akt6topoem_nTrk = 0;
   jet_akt6topoem_sumPtTrk = 0;
   jet_akt6topoem_OriginIndex = 0;
   jet_akt6topoem_HECQuality = 0;
   jet_akt6topoem_NegativeE = 0;
   jet_akt6topoem_AverageLArQF = 0;
   jet_akt6topoem_YFlip12 = 0;
   jet_akt6topoem_YFlip23 = 0;
   jet_akt6topoem_BCH_CORR_CELL = 0;
   jet_akt6topoem_BCH_CORR_DOTX = 0;
   jet_akt6topoem_BCH_CORR_JET = 0;
   jet_akt6topoem_BCH_CORR_JET_FORCELL = 0;
   jet_akt6topoem_ENG_BAD_CELLS = 0;
   jet_akt6topoem_N_BAD_CELLS = 0;
   jet_akt6topoem_N_BAD_CELLS_CORR = 0;
   jet_akt6topoem_BAD_CELLS_CORR_E = 0;
   jet_akt6topoem_NumTowers = 0;
   jet_akt6topoem_ootFracCells5 = 0;
   jet_akt6topoem_ootFracCells10 = 0;
   jet_akt6topoem_ootFracClusters5 = 0;
   jet_akt6topoem_ootFracClusters10 = 0;
   jet_akt6topoem_SamplingMax = 0;
   jet_akt6topoem_fracSamplingMax = 0;
   jet_akt6topoem_hecf = 0;
   jet_akt6topoem_tgap3f = 0;
   jet_akt6topoem_isUgly = 0;
   jet_akt6topoem_isBadLooseMinus = 0;
   jet_akt6topoem_isBadLoose = 0;
   jet_akt6topoem_isBadMedium = 0;
   jet_akt6topoem_isBadTight = 0;
   jet_akt6topoem_emfrac = 0;
   jet_akt6topoem_Offset = 0;
   jet_akt6topoem_EMJES = 0;
   jet_akt6topoem_EMJES_EtaCorr = 0;
   jet_akt6topoem_EMJESnooffset = 0;
   jet_akt6topoem_GCWJES = 0;
   jet_akt6topoem_GCWJES_EtaCorr = 0;
   jet_akt6topoem_CB = 0;
   jet_akt6topoem_LCJES = 0;
   jet_akt6topoem_emscale_E = 0;
   jet_akt6topoem_emscale_pt = 0;
   jet_akt6topoem_emscale_m = 0;
   jet_akt6topoem_emscale_eta = 0;
   jet_akt6topoem_emscale_phi = 0;
   jet_akt6topoem_jvtx_x = 0;
   jet_akt6topoem_jvtx_y = 0;
   jet_akt6topoem_jvtx_z = 0;
   jet_akt6topoem_jvtxf = 0;
   jet_akt6topoem_GSCFactorF = 0;
   jet_akt6topoem_WidthFraction = 0;
   jet_akt6topoem_el_dr = 0;
   jet_akt6topoem_el_matched = 0;
   jet_akt6topoem_mu_dr = 0;
   jet_akt6topoem_mu_matched = 0;
   jet_akt6topoem_L1_dr = 0;
   jet_akt6topoem_L1_matched = 0;
   jet_akt6topoem_L2_dr = 0;
   jet_akt6topoem_L2_matched = 0;
   jet_akt6topoem_EF_dr = 0;
   jet_akt6topoem_EF_matched = 0;
   trk_pt = 0;
   trk_eta = 0;
   trk_d0_wrtPV = 0;
   trk_z0_wrtPV = 0;
   trk_phi_wrtPV = 0;
   trk_theta_wrtPV = 0;
   trk_qoverp_wrtPV = 0;
   trk_d0_wrtBL = 0;
   trk_z0_wrtBL = 0;
   trk_phi_wrtBL = 0;
   trk_d0_err_wrtBL = 0;
   trk_z0_err_wrtBL = 0;
   trk_phi_err_wrtBL = 0;
   trk_theta_err_wrtBL = 0;
   trk_qoverp_err_wrtBL = 0;
   trk_d0_z0_err_wrtBL = 0;
   trk_d0_phi_err_wrtBL = 0;
   trk_d0_theta_err_wrtBL = 0;
   trk_d0_qoverp_err_wrtBL = 0;
   trk_z0_phi_err_wrtBL = 0;
   trk_z0_theta_err_wrtBL = 0;
   trk_z0_qoverp_err_wrtBL = 0;
   trk_phi_theta_err_wrtBL = 0;
   trk_phi_qoverp_err_wrtBL = 0;
   trk_theta_qoverp_err_wrtBL = 0;
   trkpt5_d0 = 0;
   trkpt5_z0 = 0;
   trkpt5_phi = 0;
   trkpt5_theta = 0;
   trkpt5_qoverp = 0;
   trkpt5_pt = 0;
   trkpt5_eta = 0;
   trkpt5_err_d0 = 0;
   trkpt5_err_z0 = 0;
   trkpt5_err_phi = 0;
   trkpt5_err_theta = 0;
   trkpt5_err_qoverp = 0;
   trkpt5_d0_wrtPV = 0;
   trkpt5_z0_wrtPV = 0;
   trkpt5_phi_wrtPV = 0;
   trkpt5_err_d0_wrtPV = 0;
   trkpt5_err_z0_wrtPV = 0;
   trkpt5_err_phi_wrtPV = 0;
   trkpt5_err_theta_wrtPV = 0;
   trkpt5_err_qoverp_wrtPV = 0;
   trkpt5_cov_d0_z0_wrtPV = 0;
   trkpt5_cov_d0_phi_wrtPV = 0;
   trkpt5_cov_d0_theta_wrtPV = 0;
   trkpt5_cov_d0_qoverp_wrtPV = 0;
   trkpt5_cov_z0_phi_wrtPV = 0;
   trkpt5_cov_z0_theta_wrtPV = 0;
   trkpt5_cov_z0_qoverp_wrtPV = 0;
   trkpt5_cov_phi_theta_wrtPV = 0;
   trkpt5_cov_phi_qoverp_wrtPV = 0;
   trkpt5_cov_theta_qoverp_wrtPV = 0;
   trkpt5_d0_wrtBL = 0;
   trkpt5_z0_wrtBL = 0;
   trkpt5_phi_wrtBL = 0;
   trkpt5_d0_err_wrtBL = 0;
   trkpt5_z0_err_wrtBL = 0;
   trkpt5_phi_err_wrtBL = 0;
   trkpt5_theta_err_wrtBL = 0;
   trkpt5_qoverp_err_wrtBL = 0;
   trkpt5_d0_z0_err_wrtBL = 0;
   trkpt5_d0_phi_err_wrtBL = 0;
   trkpt5_d0_theta_err_wrtBL = 0;
   trkpt5_d0_qoverp_err_wrtBL = 0;
   trkpt5_z0_phi_err_wrtBL = 0;
   trkpt5_z0_theta_err_wrtBL = 0;
   trkpt5_z0_qoverp_err_wrtBL = 0;
   trkpt5_phi_theta_err_wrtBL = 0;
   trkpt5_phi_qoverp_err_wrtBL = 0;
   trkpt5_theta_qoverp_err_wrtBL = 0;
   trkpt5_chi2 = 0;
   trkpt5_ndof = 0;
   trkpt5_nBLHits = 0;
   trkpt5_nPixHits = 0;
   trkpt5_nSCTHits = 0;
   trkpt5_nTRTHits = 0;
   trkpt5_nTRTHighTHits = 0;
   trkpt5_nPixHoles = 0;
   trkpt5_nSCTHoles = 0;
   trkpt5_nTRTHoles = 0;
   trkpt5_nPixelDeadSensors = 0;
   trkpt5_nSCTDeadSensors = 0;
   trkpt5_nBLSharedHits = 0;
   trkpt5_nPixSharedHits = 0;
   trkpt5_nSCTSharedHits = 0;
   trkpt5_nBLayerSplitHits = 0;
   trkpt5_nPixSplitHits = 0;
   trkpt5_nBLayerOutliers = 0;
   trkpt5_nPixelOutliers = 0;
   trkpt5_nSCTOutliers = 0;
   trkpt5_nTRTOutliers = 0;
   trkpt5_nTRTHighTOutliers = 0;
   trkpt5_nContribPixelLayers = 0;
   trkpt5_nGangedPixels = 0;
   trkpt5_nGangedFlaggedFakes = 0;
   trkpt5_nPixelSpoiltHits = 0;
   trkpt5_nSCTDoubleHoles = 0;
   trkpt5_nSCTSpoiltHits = 0;
   trkpt5_nTRTDeadStraws = 0;
   trkpt5_nTRTTubeHits = 0;
   trkpt5_expectBLayerHit = 0;
   trkpt5_nMDTHits = 0;
   trkpt5_nCSCEtaHits = 0;
   trkpt5_nCSCPhiHits = 0;
   trkpt5_nRPCEtaHits = 0;
   trkpt5_nRPCPhiHits = 0;
   trkpt5_nTGCEtaHits = 0;
   trkpt5_nTGCPhiHits = 0;
   trkpt5_nHits = 0;
   trkpt5_nHoles = 0;
   trkpt5_hitPattern = 0;
   trkpt5_TRTHighTHitsRatio = 0;
   trkpt5_TRTHighTOutliersRatio = 0;
   trkpt5_pixeldEdx = 0;
   trkpt5_nGoodHitsPixeldEdx = 0;
   trkpt5_massPixeldEdx = 0;
   trkpt5_likelihoodsPixeldEdx = 0;
   trkpt5_fitter = 0;
   trkpt5_patternReco1 = 0;
   trkpt5_patternReco2 = 0;
   trkpt5_trackProperties = 0;
   trkpt5_particleHypothesis = 0;
   trkpt5_Pixel_hit_n = 0;
   trkpt5_Pixel_hit_id = 0;
   trkpt5_Pixel_hit_detElementId = 0;
   trkpt5_Pixel_hit_detType = 0;
   trkpt5_Pixel_hit_bec = 0;
   trkpt5_Pixel_hit_layer = 0;
   trkpt5_Pixel_hit_charge = 0;
   trkpt5_Pixel_hit_sizePhi = 0;
   trkpt5_Pixel_hit_sizeZ = 0;
   trkpt5_Pixel_hit_size = 0;
   trkpt5_Pixel_hit_isFake = 0;
   trkpt5_Pixel_hit_isGanged = 0;
   trkpt5_Pixel_hit_isSplit = 0;
   trkpt5_Pixel_hit_splitProb1 = 0;
   trkpt5_Pixel_hit_splitProb2 = 0;
   trkpt5_Pixel_hit_isCompetingRIO = 0;
   trkpt5_Pixel_hit_locX = 0;
   trkpt5_Pixel_hit_locY = 0;
   trkpt5_Pixel_hit_incidencePhi = 0;
   trkpt5_Pixel_hit_incidenceTheta = 0;
   trkpt5_Pixel_hit_err_locX = 0;
   trkpt5_Pixel_hit_err_locY = 0;
   trkpt5_Pixel_hit_cov_locXY = 0;
   trkpt5_Pixel_hit_x = 0;
   trkpt5_Pixel_hit_y = 0;
   trkpt5_Pixel_hit_z = 0;
   trkpt5_Pixel_hit_trkLocX = 0;
   trkpt5_Pixel_hit_trkLocY = 0;
   trkpt5_Pixel_hit_err_trkLocX = 0;
   trkpt5_Pixel_hit_err_trkLocY = 0;
   trkpt5_Pixel_hit_cov_trkLocXY = 0;
   trkpt5_Pixel_hit_chi2 = 0;
   trkpt5_Pixel_hit_ndof = 0;
   trkpt5_calodEdx = 0;
   trkpt5_calodEdx_err = 0;
   trkpt5_calodEdx_betagamma = 0;
   trkpt5_calodEdx_betagamma_err = 0;
   trkpt5_calodEdx_mean_EM = 0;
   trkpt5_calodEdx_mean_HadrCaloBarrel = 0;
   trkpt5_calodEdx_mean_HadrCaloEndcaps = 0;
   trkpt5_raw_calodEdx = 0;
   trkpt5_raw_calodEdx_err = 0;
   trkpt5_raw_calodEdx_dE = 0;
   trkpt5_raw_calodEdx_dE_err = 0;
   trkpt5_raw_calodEdx_dx = 0;
   trkpt5_raw_calodEdx_dx_err = 0;
   trkpt5_raw_calodEdx_dN = 0;
   trkpt5_CaloCell_sampling = 0;
   trkpt5_CaloCell_eta = 0;
   trkpt5_CaloCell_phi = 0;
   trkpt5_CaloCell_dr = 0;
   trkpt5_CaloCell_E = 0;
   trkpt5_CaloCell_t = 0;
   trkpt5_CaloCell_x = 0;
   trkpt5_CaloCell_y = 0;
   trkpt5_CaloCell_z = 0;
   trkpt5_TileBeta = 0;
   trkpt5_TileBetaMass = 0;
   trkpt5_refit_res_pt = 0;
   trkpt5_refit_res_eta = 0;
   trkpt5_refit_res_phi = 0;
   trkpt5_trt_n = 0;
   trkpt5_trt_barrelendcap = 0;
   trkpt5_trt_phimodule = 0;
   trkpt5_trt_layerwheel = 0;
   trkpt5_trt_strawlayer = 0;
   trkpt5_trt_strawid = 0;
   trkpt5_trt_hitx = 0;
   trkpt5_trt_hity = 0;
   trkpt5_trt_hitz = 0;
   trkpt5_trt_t0 = 0;
   trkpt5_trt_tot = 0;
   trkpt5_trt_rawdrifttime = 0;
   trkpt5_trt_trackradius = 0;
   trkpt5_trt_driftradius = 0;
   trkpt5_trt_risingedge = 0;
   trkpt5_trt_fallingedge = 0;
   trkpt5_trt_rawbitpatterns = 0;
   trkpt5_trt_istube = 0;
   trkpt5_trt_NBI_dEdxTrtHighThresholdFraction = 0;
   trkpt5_trt_NBI_dEdxTrtLastBitFraction = 0;
   trkpt5_trt_Indiana_dEdxTrtBitsOverThreshold = 0;
   trkpt5_trt_Indiana_dEdxTrtTrailingEdge = 0;
   trkpt5_trt_Indiana_dEdxTrtLastBitFraction = 0;
   trkpt5_trt_InDetLowBetaCandidate_BitsOverThr = 0;
   trkpt5_trt_InDetLowBetaCandidate_TrailingEdge = 0;
   trkpt5_trt_InDetLowBetaCandidate_TrailingEdgeError = 0;
   trkpt5_trt_InDetLowBetaCandidate_lastBits = 0;
   trkpt5_trt_InDetLowBetaCandidate_dEdx = 0;
   trkpt5_trt_InDetLowBetaCandidate_LikelihoodBeta = 0;
   trkpt5_trt_InDetLowBetaCandidate_LikelihoodError = 0;
   trkpt5_trt_InDetLowBetaCandidate_HighTbits = 0;
   trkpt5_trt_ToT_Tools_usedHits = 0;
   trkpt5_trt_ToT_Tools_dEdx = 0;
   trkpt5_trt_ToT_Tools_usedHits_L = 0;
   trkpt5_trt_ToT_Tools_dEdx_L = 0;
   el_MET_wpx = 0;
   el_MET_wpy = 0;
   el_MET_wet = 0;
   el_MET_statusWord = 0;
   ph_MET_wpx = 0;
   ph_MET_wpy = 0;
   ph_MET_wet = 0;
   ph_MET_statusWord = 0;
   mu_staco_MET_wpx = 0;
   mu_staco_MET_wpy = 0;
   mu_staco_MET_wet = 0;
   mu_staco_MET_statusWord = 0;
   mu_muid_MET_wpx = 0;
   mu_muid_MET_wpy = 0;
   mu_muid_MET_wet = 0;
   mu_muid_MET_statusWord = 0;
   mu_MET_wpx = 0;
   mu_MET_wpy = 0;
   mu_MET_wet = 0;
   mu_MET_statusWord = 0;
   tau_MET_wpx = 0;
   tau_MET_wpy = 0;
   tau_MET_wet = 0;
   tau_MET_statusWord = 0;
   jet_antikt4LCtopo_MET_wpx = 0;
   jet_antikt4LCtopo_MET_wpy = 0;
   jet_antikt4LCtopo_MET_wet = 0;
   jet_antikt4LCtopo_MET_statusWord = 0;
   cl_MET_wpx = 0;
   cl_MET_wpy = 0;
   cl_MET_wet = 0;
   cl_MET_statusWord = 0;
   trk_MET_wpx = 0;
   trk_MET_wpy = 0;
   trk_MET_wet = 0;
   trk_MET_statusWord = 0;
   vxp_x = 0;
   vxp_y = 0;
   vxp_z = 0;
   vxp_cov_x = 0;
   vxp_cov_y = 0;
   vxp_cov_z = 0;
   vxp_cov_xy = 0;
   vxp_cov_xz = 0;
   vxp_cov_yz = 0;
   vxp_type = 0;
   vxp_chi2 = 0;
   vxp_ndof = 0;
   vxp_px = 0;
   vxp_py = 0;
   vxp_pz = 0;
   vxp_E = 0;
   vxp_m = 0;
   vxp_nTracks = 0;
   vxp_sumPt = 0;
   vxp_trk_weight = 0;
   vxp_trk_n = 0;
   vxp_trk_index = 0;
   trig_L1_TAV = 0;
   trig_L2_passedPhysics = 0;
   trig_EF_passedPhysics = 0;
   trig_L1_TBP = 0;
   trig_L1_TAP = 0;
   trig_L2_passedRaw = 0;
   trig_EF_passedRaw = 0;
   trig_L2_resurrected = 0;
   trig_EF_resurrected = 0;
   trig_L2_passedThrough = 0;
   trig_EF_passedThrough = 0;
   trig_L2_wasPrescaled = 0;
   trig_L2_wasResurrected = 0;
   trig_EF_wasPrescaled = 0;
   trig_EF_wasResurrected = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EF_2e12Tvh_loose1", &EF_2e12Tvh_loose1, &b_EF_2e12Tvh_loose1);
   fChain->SetBranchAddress("EF_2e5_tight1_Jpsi", &EF_2e5_tight1_Jpsi, &b_EF_2e5_tight1_Jpsi);
   fChain->SetBranchAddress("EF_2e7T_loose1_mu6", &EF_2e7T_loose1_mu6, &b_EF_2e7T_loose1_mu6);
   fChain->SetBranchAddress("EF_2e7T_medium1_mu6", &EF_2e7T_medium1_mu6, &b_EF_2e7T_medium1_mu6);
   fChain->SetBranchAddress("EF_2mu10", &EF_2mu10, &b_EF_2mu10);
   fChain->SetBranchAddress("EF_2mu10_MSonly_g10_loose", &EF_2mu10_MSonly_g10_loose, &b_EF_2mu10_MSonly_g10_loose);
   fChain->SetBranchAddress("EF_2mu13", &EF_2mu13, &b_EF_2mu13);
   fChain->SetBranchAddress("EF_2mu13_Zmumu_IDTrkNoCut", &EF_2mu13_Zmumu_IDTrkNoCut, &b_EF_2mu13_Zmumu_IDTrkNoCut);
   fChain->SetBranchAddress("EF_2mu13_l2muonSA", &EF_2mu13_l2muonSA, &b_EF_2mu13_l2muonSA);
   fChain->SetBranchAddress("EF_2mu15", &EF_2mu15, &b_EF_2mu15);
   fChain->SetBranchAddress("EF_2mu4T", &EF_2mu4T, &b_EF_2mu4T);
   fChain->SetBranchAddress("EF_2mu4T_2e5_tight1", &EF_2mu4T_2e5_tight1, &b_EF_2mu4T_2e5_tight1);
   fChain->SetBranchAddress("EF_2mu4T_Bmumu", &EF_2mu4T_Bmumu, &b_EF_2mu4T_Bmumu);
   fChain->SetBranchAddress("EF_2mu4T_Bmumu_Barrel", &EF_2mu4T_Bmumu_Barrel, &b_EF_2mu4T_Bmumu_Barrel);
   fChain->SetBranchAddress("EF_2mu4T_Bmumu_BarrelOnly", &EF_2mu4T_Bmumu_BarrelOnly, &b_EF_2mu4T_Bmumu_BarrelOnly);
   fChain->SetBranchAddress("EF_2mu4T_Bmumux", &EF_2mu4T_Bmumux, &b_EF_2mu4T_Bmumux);
   fChain->SetBranchAddress("EF_2mu4T_Bmumux_Barrel", &EF_2mu4T_Bmumux_Barrel, &b_EF_2mu4T_Bmumux_Barrel);
   fChain->SetBranchAddress("EF_2mu4T_Bmumux_BarrelOnly", &EF_2mu4T_Bmumux_BarrelOnly, &b_EF_2mu4T_Bmumux_BarrelOnly);
   fChain->SetBranchAddress("EF_2mu4T_DiMu", &EF_2mu4T_DiMu, &b_EF_2mu4T_DiMu);
   fChain->SetBranchAddress("EF_2mu4T_DiMu_Barrel", &EF_2mu4T_DiMu_Barrel, &b_EF_2mu4T_DiMu_Barrel);
   fChain->SetBranchAddress("EF_2mu4T_DiMu_BarrelOnly", &EF_2mu4T_DiMu_BarrelOnly, &b_EF_2mu4T_DiMu_BarrelOnly);
   fChain->SetBranchAddress("EF_2mu4T_DiMu_L2StarB", &EF_2mu4T_DiMu_L2StarB, &b_EF_2mu4T_DiMu_L2StarB);
   fChain->SetBranchAddress("EF_2mu4T_DiMu_L2StarC", &EF_2mu4T_DiMu_L2StarC, &b_EF_2mu4T_DiMu_L2StarC);
   fChain->SetBranchAddress("EF_2mu4T_DiMu_e5_tight1", &EF_2mu4T_DiMu_e5_tight1, &b_EF_2mu4T_DiMu_e5_tight1);
   fChain->SetBranchAddress("EF_2mu4T_DiMu_l2muonSA", &EF_2mu4T_DiMu_l2muonSA, &b_EF_2mu4T_DiMu_l2muonSA);
   fChain->SetBranchAddress("EF_2mu4T_DiMu_noVtx_noOS", &EF_2mu4T_DiMu_noVtx_noOS, &b_EF_2mu4T_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("EF_2mu4T_Jpsimumu", &EF_2mu4T_Jpsimumu, &b_EF_2mu4T_Jpsimumu);
   fChain->SetBranchAddress("EF_2mu4T_Jpsimumu_Barrel", &EF_2mu4T_Jpsimumu_Barrel, &b_EF_2mu4T_Jpsimumu_Barrel);
   fChain->SetBranchAddress("EF_2mu4T_Jpsimumu_BarrelOnly", &EF_2mu4T_Jpsimumu_BarrelOnly, &b_EF_2mu4T_Jpsimumu_BarrelOnly);
   fChain->SetBranchAddress("EF_2mu4T_Jpsimumu_IDTrkNoCut", &EF_2mu4T_Jpsimumu_IDTrkNoCut, &b_EF_2mu4T_Jpsimumu_IDTrkNoCut);
   fChain->SetBranchAddress("EF_2mu4T_Upsimumu", &EF_2mu4T_Upsimumu, &b_EF_2mu4T_Upsimumu);
   fChain->SetBranchAddress("EF_2mu4T_Upsimumu_Barrel", &EF_2mu4T_Upsimumu_Barrel, &b_EF_2mu4T_Upsimumu_Barrel);
   fChain->SetBranchAddress("EF_2mu4T_Upsimumu_BarrelOnly", &EF_2mu4T_Upsimumu_BarrelOnly, &b_EF_2mu4T_Upsimumu_BarrelOnly);
   fChain->SetBranchAddress("EF_2mu4T_xe60", &EF_2mu4T_xe60, &b_EF_2mu4T_xe60);
   fChain->SetBranchAddress("EF_2mu4T_xe60_tclcw", &EF_2mu4T_xe60_tclcw, &b_EF_2mu4T_xe60_tclcw);
   fChain->SetBranchAddress("EF_2mu6", &EF_2mu6, &b_EF_2mu6);
   fChain->SetBranchAddress("EF_2mu6_Bmumu", &EF_2mu6_Bmumu, &b_EF_2mu6_Bmumu);
   fChain->SetBranchAddress("EF_2mu6_Bmumux", &EF_2mu6_Bmumux, &b_EF_2mu6_Bmumux);
   fChain->SetBranchAddress("EF_2mu6_DiMu", &EF_2mu6_DiMu, &b_EF_2mu6_DiMu);
   fChain->SetBranchAddress("EF_2mu6_DiMu_DY20", &EF_2mu6_DiMu_DY20, &b_EF_2mu6_DiMu_DY20);
   fChain->SetBranchAddress("EF_2mu6_DiMu_DY25", &EF_2mu6_DiMu_DY25, &b_EF_2mu6_DiMu_DY25);
   fChain->SetBranchAddress("EF_2mu6_DiMu_noVtx_noOS", &EF_2mu6_DiMu_noVtx_noOS, &b_EF_2mu6_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("EF_2mu6_Jpsimumu", &EF_2mu6_Jpsimumu, &b_EF_2mu6_Jpsimumu);
   fChain->SetBranchAddress("EF_2mu6_Upsimumu", &EF_2mu6_Upsimumu, &b_EF_2mu6_Upsimumu);
   fChain->SetBranchAddress("EF_2mu6i_DiMu_DY", &EF_2mu6i_DiMu_DY, &b_EF_2mu6i_DiMu_DY);
   fChain->SetBranchAddress("EF_2mu6i_DiMu_DY_2j25_a4tchad", &EF_2mu6i_DiMu_DY_2j25_a4tchad, &b_EF_2mu6i_DiMu_DY_2j25_a4tchad);
   fChain->SetBranchAddress("EF_2mu6i_DiMu_DY_noVtx_noOS", &EF_2mu6i_DiMu_DY_noVtx_noOS, &b_EF_2mu6i_DiMu_DY_noVtx_noOS);
   fChain->SetBranchAddress("EF_2mu6i_DiMu_DY_noVtx_noOS_2j25_a4tchad", &EF_2mu6i_DiMu_DY_noVtx_noOS_2j25_a4tchad, &b_EF_2mu6i_DiMu_DY_noVtx_noOS_2j25_a4tchad);
   fChain->SetBranchAddress("EF_2mu8_EFxe30", &EF_2mu8_EFxe30, &b_EF_2mu8_EFxe30);
   fChain->SetBranchAddress("EF_2mu8_EFxe30_tclcw", &EF_2mu8_EFxe30_tclcw, &b_EF_2mu8_EFxe30_tclcw);
   fChain->SetBranchAddress("EF_e11_etcut", &EF_e11_etcut, &b_EF_e11_etcut);
   fChain->SetBranchAddress("EF_e12Tvh_loose1", &EF_e12Tvh_loose1, &b_EF_e12Tvh_loose1);
   fChain->SetBranchAddress("EF_e12Tvh_medium1", &EF_e12Tvh_medium1, &b_EF_e12Tvh_medium1);
   fChain->SetBranchAddress("EF_e12Tvh_medium1_mu6_topo_medium", &EF_e12Tvh_medium1_mu6_topo_medium, &b_EF_e12Tvh_medium1_mu6_topo_medium);
   fChain->SetBranchAddress("EF_e12Tvh_medium1_mu8", &EF_e12Tvh_medium1_mu8, &b_EF_e12Tvh_medium1_mu8);
   fChain->SetBranchAddress("EF_e13_etcutTrk_xs60", &EF_e13_etcutTrk_xs60, &b_EF_e13_etcutTrk_xs60);
   fChain->SetBranchAddress("EF_e13_etcutTrk_xs60_dphi2j15xe20", &EF_e13_etcutTrk_xs60_dphi2j15xe20, &b_EF_e13_etcutTrk_xs60_dphi2j15xe20);
   fChain->SetBranchAddress("EF_e14_tight1_e4_etcut_Jpsi", &EF_e14_tight1_e4_etcut_Jpsi, &b_EF_e14_tight1_e4_etcut_Jpsi);
   fChain->SetBranchAddress("EF_e18_loose1", &EF_e18_loose1, &b_EF_e18_loose1);
   fChain->SetBranchAddress("EF_e18_loose1_g25_medium", &EF_e18_loose1_g25_medium, &b_EF_e18_loose1_g25_medium);
   fChain->SetBranchAddress("EF_e18_medium1", &EF_e18_medium1, &b_EF_e18_medium1);
   fChain->SetBranchAddress("EF_e18_medium1_g25_loose", &EF_e18_medium1_g25_loose, &b_EF_e18_medium1_g25_loose);
   fChain->SetBranchAddress("EF_e18vh_medium1_2e7T_medium1", &EF_e18vh_medium1_2e7T_medium1, &b_EF_e18vh_medium1_2e7T_medium1);
   fChain->SetBranchAddress("EF_e20_etcutTrk_xe30_dphi2j15xe20", &EF_e20_etcutTrk_xe30_dphi2j15xe20, &b_EF_e20_etcutTrk_xe30_dphi2j15xe20);
   fChain->SetBranchAddress("EF_e20_etcutTrk_xs60_dphi2j15xe20", &EF_e20_etcutTrk_xs60_dphi2j15xe20, &b_EF_e20_etcutTrk_xs60_dphi2j15xe20);
   fChain->SetBranchAddress("EF_e20vhT_medium1_g6T_etcut_Upsi", &EF_e20vhT_medium1_g6T_etcut_Upsi, &b_EF_e20vhT_medium1_g6T_etcut_Upsi);
   fChain->SetBranchAddress("EF_e20vhT_tight1_g6T_etcut_Upsi", &EF_e20vhT_tight1_g6T_etcut_Upsi, &b_EF_e20vhT_tight1_g6T_etcut_Upsi);
   fChain->SetBranchAddress("EF_e22vh_loose", &EF_e22vh_loose, &b_EF_e22vh_loose);
   fChain->SetBranchAddress("EF_e22vh_loose0", &EF_e22vh_loose0, &b_EF_e22vh_loose0);
   fChain->SetBranchAddress("EF_e22vh_loose1", &EF_e22vh_loose1, &b_EF_e22vh_loose1);
   fChain->SetBranchAddress("EF_e22vh_medium1", &EF_e22vh_medium1, &b_EF_e22vh_medium1);
   fChain->SetBranchAddress("EF_e22vh_medium1_IDTrkNoCut", &EF_e22vh_medium1_IDTrkNoCut, &b_EF_e22vh_medium1_IDTrkNoCut);
   fChain->SetBranchAddress("EF_e22vhi_medium1", &EF_e22vhi_medium1, &b_EF_e22vhi_medium1);
   fChain->SetBranchAddress("EF_e24vh_loose", &EF_e24vh_loose, &b_EF_e24vh_loose);
   fChain->SetBranchAddress("EF_e24vh_loose0", &EF_e24vh_loose0, &b_EF_e24vh_loose0);
   fChain->SetBranchAddress("EF_e24vh_loose1", &EF_e24vh_loose1, &b_EF_e24vh_loose1);
   fChain->SetBranchAddress("EF_e24vh_medium1", &EF_e24vh_medium1, &b_EF_e24vh_medium1);
   fChain->SetBranchAddress("EF_e24vh_medium1_EFxe30", &EF_e24vh_medium1_EFxe30, &b_EF_e24vh_medium1_EFxe30);
   fChain->SetBranchAddress("EF_e24vh_medium1_EFxe30_tcem", &EF_e24vh_medium1_EFxe30_tcem, &b_EF_e24vh_medium1_EFxe30_tcem);
   fChain->SetBranchAddress("EF_e24vh_medium1_EFxe35_tcem", &EF_e24vh_medium1_EFxe35_tcem, &b_EF_e24vh_medium1_EFxe35_tcem);
   fChain->SetBranchAddress("EF_e24vh_medium1_EFxe35_tclcw", &EF_e24vh_medium1_EFxe35_tclcw, &b_EF_e24vh_medium1_EFxe35_tclcw);
   fChain->SetBranchAddress("EF_e24vh_medium1_EFxe40", &EF_e24vh_medium1_EFxe40, &b_EF_e24vh_medium1_EFxe40);
   fChain->SetBranchAddress("EF_e24vh_medium1_IDTrkNoCut", &EF_e24vh_medium1_IDTrkNoCut, &b_EF_e24vh_medium1_IDTrkNoCut);
   fChain->SetBranchAddress("EF_e24vh_medium1_IdScan", &EF_e24vh_medium1_IdScan, &b_EF_e24vh_medium1_IdScan);
   fChain->SetBranchAddress("EF_e24vh_medium1_L2StarB", &EF_e24vh_medium1_L2StarB, &b_EF_e24vh_medium1_L2StarB);
   fChain->SetBranchAddress("EF_e24vh_medium1_L2StarC", &EF_e24vh_medium1_L2StarC, &b_EF_e24vh_medium1_L2StarC);
   fChain->SetBranchAddress("EF_e24vh_medium1_SiTrk", &EF_e24vh_medium1_SiTrk, &b_EF_e24vh_medium1_SiTrk);
   fChain->SetBranchAddress("EF_e24vh_medium1_TRT", &EF_e24vh_medium1_TRT, &b_EF_e24vh_medium1_TRT);
   fChain->SetBranchAddress("EF_e24vh_medium1_b35_mediumEF_j35_a4tchad", &EF_e24vh_medium1_b35_mediumEF_j35_a4tchad, &b_EF_e24vh_medium1_b35_mediumEF_j35_a4tchad);
   fChain->SetBranchAddress("EF_e24vh_medium1_e7_medium1", &EF_e24vh_medium1_e7_medium1, &b_EF_e24vh_medium1_e7_medium1);
   fChain->SetBranchAddress("EF_e24vh_tight1_e15_NoCut_Zee", &EF_e24vh_tight1_e15_NoCut_Zee, &b_EF_e24vh_tight1_e15_NoCut_Zee);
   fChain->SetBranchAddress("EF_e24vhi_loose1_mu8", &EF_e24vhi_loose1_mu8, &b_EF_e24vhi_loose1_mu8);
   fChain->SetBranchAddress("EF_e24vhi_medium1", &EF_e24vhi_medium1, &b_EF_e24vhi_medium1);
   fChain->SetBranchAddress("EF_e45_medium1", &EF_e45_medium1, &b_EF_e45_medium1);
   fChain->SetBranchAddress("EF_e5_tight1", &EF_e5_tight1, &b_EF_e5_tight1);
   fChain->SetBranchAddress("EF_e5_tight1_e14_etcut_Jpsi", &EF_e5_tight1_e14_etcut_Jpsi, &b_EF_e5_tight1_e14_etcut_Jpsi);
   fChain->SetBranchAddress("EF_e5_tight1_e4_etcut_Jpsi", &EF_e5_tight1_e4_etcut_Jpsi, &b_EF_e5_tight1_e4_etcut_Jpsi);
   fChain->SetBranchAddress("EF_e5_tight1_e4_etcut_Jpsi_L2StarB", &EF_e5_tight1_e4_etcut_Jpsi_L2StarB, &b_EF_e5_tight1_e4_etcut_Jpsi_L2StarB);
   fChain->SetBranchAddress("EF_e5_tight1_e4_etcut_Jpsi_L2StarC", &EF_e5_tight1_e4_etcut_Jpsi_L2StarC, &b_EF_e5_tight1_e4_etcut_Jpsi_L2StarC);
   fChain->SetBranchAddress("EF_e5_tight1_e5_NoCut", &EF_e5_tight1_e5_NoCut, &b_EF_e5_tight1_e5_NoCut);
   fChain->SetBranchAddress("EF_e5_tight1_e9_etcut_Jpsi", &EF_e5_tight1_e9_etcut_Jpsi, &b_EF_e5_tight1_e9_etcut_Jpsi);
   fChain->SetBranchAddress("EF_e60_medium1", &EF_e60_medium1, &b_EF_e60_medium1);
   fChain->SetBranchAddress("EF_e7T_loose1", &EF_e7T_loose1, &b_EF_e7T_loose1);
   fChain->SetBranchAddress("EF_e7T_loose1_2mu6", &EF_e7T_loose1_2mu6, &b_EF_e7T_loose1_2mu6);
   fChain->SetBranchAddress("EF_e7T_medium1", &EF_e7T_medium1, &b_EF_e7T_medium1);
   fChain->SetBranchAddress("EF_e7T_medium1_2mu6", &EF_e7T_medium1_2mu6, &b_EF_e7T_medium1_2mu6);
   fChain->SetBranchAddress("EF_e9_tight1_e4_etcut_Jpsi", &EF_e9_tight1_e4_etcut_Jpsi, &b_EF_e9_tight1_e4_etcut_Jpsi);
   fChain->SetBranchAddress("EF_eb_physics", &EF_eb_physics, &b_EF_eb_physics);
   fChain->SetBranchAddress("EF_eb_physics_empty", &EF_eb_physics_empty, &b_EF_eb_physics_empty);
   fChain->SetBranchAddress("EF_eb_physics_firstempty", &EF_eb_physics_firstempty, &b_EF_eb_physics_firstempty);
   fChain->SetBranchAddress("EF_eb_physics_noL1PS", &EF_eb_physics_noL1PS, &b_EF_eb_physics_noL1PS);
   fChain->SetBranchAddress("EF_eb_physics_unpaired_iso", &EF_eb_physics_unpaired_iso, &b_EF_eb_physics_unpaired_iso);
   fChain->SetBranchAddress("EF_eb_physics_unpaired_noniso", &EF_eb_physics_unpaired_noniso, &b_EF_eb_physics_unpaired_noniso);
   fChain->SetBranchAddress("EF_eb_random", &EF_eb_random, &b_EF_eb_random);
   fChain->SetBranchAddress("EF_eb_random_empty", &EF_eb_random_empty, &b_EF_eb_random_empty);
   fChain->SetBranchAddress("EF_eb_random_firstempty", &EF_eb_random_firstempty, &b_EF_eb_random_firstempty);
   fChain->SetBranchAddress("EF_eb_random_unpaired_iso", &EF_eb_random_unpaired_iso, &b_EF_eb_random_unpaired_iso);
   fChain->SetBranchAddress("EF_j110_a4tchad_xe100_tclcw_veryloose", &EF_j110_a4tchad_xe100_tclcw_veryloose, &b_EF_j110_a4tchad_xe100_tclcw_veryloose);
   fChain->SetBranchAddress("EF_j110_a4tchad_xe75_tclcw", &EF_j110_a4tchad_xe75_tclcw, &b_EF_j110_a4tchad_xe75_tclcw);
   fChain->SetBranchAddress("EF_j110_a4tchad_xe90_tclcw_loose", &EF_j110_a4tchad_xe90_tclcw_loose, &b_EF_j110_a4tchad_xe90_tclcw_loose);
   fChain->SetBranchAddress("EF_j110_a4tchad_xe90_tclcw_veryloose", &EF_j110_a4tchad_xe90_tclcw_veryloose, &b_EF_j110_a4tchad_xe90_tclcw_veryloose);
   fChain->SetBranchAddress("EF_j110_a4tclcw_xe100_tclcw_veryloose", &EF_j110_a4tclcw_xe100_tclcw_veryloose, &b_EF_j110_a4tclcw_xe100_tclcw_veryloose);
   fChain->SetBranchAddress("EF_j30_a4tcem_eta13_xe30_empty", &EF_j30_a4tcem_eta13_xe30_empty, &b_EF_j30_a4tcem_eta13_xe30_empty);
   fChain->SetBranchAddress("EF_j30_a4tcem_eta13_xe30_firstempty", &EF_j30_a4tcem_eta13_xe30_firstempty, &b_EF_j30_a4tcem_eta13_xe30_firstempty);
   fChain->SetBranchAddress("EF_j50_a4tcem_eta13_xe50_empty", &EF_j50_a4tcem_eta13_xe50_empty, &b_EF_j50_a4tcem_eta13_xe50_empty);
   fChain->SetBranchAddress("EF_j50_a4tcem_eta13_xe50_firstempty", &EF_j50_a4tcem_eta13_xe50_firstempty, &b_EF_j50_a4tcem_eta13_xe50_firstempty);
   fChain->SetBranchAddress("EF_j50_a4tcem_eta25_xe50_empty", &EF_j50_a4tcem_eta25_xe50_empty, &b_EF_j50_a4tcem_eta25_xe50_empty);
   fChain->SetBranchAddress("EF_j50_a4tcem_eta25_xe50_firstempty", &EF_j50_a4tcem_eta25_xe50_firstempty, &b_EF_j50_a4tcem_eta25_xe50_firstempty);
   fChain->SetBranchAddress("EF_j80_a4tchad_xe100_tclcw_loose", &EF_j80_a4tchad_xe100_tclcw_loose, &b_EF_j80_a4tchad_xe100_tclcw_loose);
   fChain->SetBranchAddress("EF_j80_a4tchad_xe100_tclcw_veryloose", &EF_j80_a4tchad_xe100_tclcw_veryloose, &b_EF_j80_a4tchad_xe100_tclcw_veryloose);
   fChain->SetBranchAddress("EF_j80_a4tchad_xe70_tclcw_dphi2j45xe10", &EF_j80_a4tchad_xe70_tclcw_dphi2j45xe10, &b_EF_j80_a4tchad_xe70_tclcw_dphi2j45xe10);
   fChain->SetBranchAddress("EF_j80_a4tchad_xe85_tclcw_dphi2j45xe10", &EF_j80_a4tchad_xe85_tclcw_dphi2j45xe10, &b_EF_j80_a4tchad_xe85_tclcw_dphi2j45xe10);
   fChain->SetBranchAddress("EF_mu10", &EF_mu10, &b_EF_mu10);
   fChain->SetBranchAddress("EF_mu10_Jpsimumu", &EF_mu10_Jpsimumu, &b_EF_mu10_Jpsimumu);
   fChain->SetBranchAddress("EF_mu10_MSonly", &EF_mu10_MSonly, &b_EF_mu10_MSonly);
   fChain->SetBranchAddress("EF_mu10_Upsimumu_tight_FS", &EF_mu10_Upsimumu_tight_FS, &b_EF_mu10_Upsimumu_tight_FS);
   fChain->SetBranchAddress("EF_mu10i_g10_medium", &EF_mu10i_g10_medium, &b_EF_mu10i_g10_medium);
   fChain->SetBranchAddress("EF_mu10i_g10_medium_TauMass", &EF_mu10i_g10_medium_TauMass, &b_EF_mu10i_g10_medium_TauMass);
   fChain->SetBranchAddress("EF_mu10i_loose_g12Tvh_medium", &EF_mu10i_loose_g12Tvh_medium, &b_EF_mu10i_loose_g12Tvh_medium);
   fChain->SetBranchAddress("EF_mu10i_loose_g12Tvh_medium_TauMass", &EF_mu10i_loose_g12Tvh_medium_TauMass, &b_EF_mu10i_loose_g12Tvh_medium_TauMass);
   fChain->SetBranchAddress("EF_mu11_empty_NoAlg", &EF_mu11_empty_NoAlg, &b_EF_mu11_empty_NoAlg);
   fChain->SetBranchAddress("EF_mu13", &EF_mu13, &b_EF_mu13);
   fChain->SetBranchAddress("EF_mu15", &EF_mu15, &b_EF_mu15);
   fChain->SetBranchAddress("EF_mu18", &EF_mu18, &b_EF_mu18);
   fChain->SetBranchAddress("EF_mu18_2g10_loose", &EF_mu18_2g10_loose, &b_EF_mu18_2g10_loose);
   fChain->SetBranchAddress("EF_mu18_2g10_medium", &EF_mu18_2g10_medium, &b_EF_mu18_2g10_medium);
   fChain->SetBranchAddress("EF_mu18_IDTrkNoCut_tight", &EF_mu18_IDTrkNoCut_tight, &b_EF_mu18_IDTrkNoCut_tight);
   fChain->SetBranchAddress("EF_mu18_medium", &EF_mu18_medium, &b_EF_mu18_medium);
   fChain->SetBranchAddress("EF_mu18_tight", &EF_mu18_tight, &b_EF_mu18_tight);
   fChain->SetBranchAddress("EF_mu18_tight_2mu4_EFFS", &EF_mu18_tight_2mu4_EFFS, &b_EF_mu18_tight_2mu4_EFFS);
   fChain->SetBranchAddress("EF_mu18_tight_e7_medium1", &EF_mu18_tight_e7_medium1, &b_EF_mu18_tight_e7_medium1);
   fChain->SetBranchAddress("EF_mu18_tight_mu8_EFFS", &EF_mu18_tight_mu8_EFFS, &b_EF_mu18_tight_mu8_EFFS);
   fChain->SetBranchAddress("EF_mu18i4_tight", &EF_mu18i4_tight, &b_EF_mu18i4_tight);
   fChain->SetBranchAddress("EF_mu20i_tight_g5_loose_TauMass", &EF_mu20i_tight_g5_loose_TauMass, &b_EF_mu20i_tight_g5_loose_TauMass);
   fChain->SetBranchAddress("EF_mu20i_tight_g5_medium", &EF_mu20i_tight_g5_medium, &b_EF_mu20i_tight_g5_medium);
   fChain->SetBranchAddress("EF_mu20i_tight_g5_medium_TauMass", &EF_mu20i_tight_g5_medium_TauMass, &b_EF_mu20i_tight_g5_medium_TauMass);
   fChain->SetBranchAddress("EF_mu20it_tight", &EF_mu20it_tight, &b_EF_mu20it_tight);
   fChain->SetBranchAddress("EF_mu22_IDTrkNoCut_tight", &EF_mu22_IDTrkNoCut_tight, &b_EF_mu22_IDTrkNoCut_tight);
   fChain->SetBranchAddress("EF_mu24_g20vh_loose", &EF_mu24_g20vh_loose, &b_EF_mu24_g20vh_loose);
   fChain->SetBranchAddress("EF_mu24_g20vh_medium", &EF_mu24_g20vh_medium, &b_EF_mu24_g20vh_medium);
   fChain->SetBranchAddress("EF_mu24_j65_a4tchad_EFxe40_tclcw", &EF_mu24_j65_a4tchad_EFxe40_tclcw, &b_EF_mu24_j65_a4tchad_EFxe40_tclcw);
   fChain->SetBranchAddress("EF_mu24_j65_a4tchad_EFxe60_tclcw", &EF_mu24_j65_a4tchad_EFxe60_tclcw, &b_EF_mu24_j65_a4tchad_EFxe60_tclcw);
   fChain->SetBranchAddress("EF_mu24_medium", &EF_mu24_medium, &b_EF_mu24_medium);
   fChain->SetBranchAddress("EF_mu24_muCombTag_NoEF_tight", &EF_mu24_muCombTag_NoEF_tight, &b_EF_mu24_muCombTag_NoEF_tight);
   fChain->SetBranchAddress("EF_mu24_tight", &EF_mu24_tight, &b_EF_mu24_tight);
   fChain->SetBranchAddress("EF_mu24_tight_3j35_a4tchad", &EF_mu24_tight_3j35_a4tchad, &b_EF_mu24_tight_3j35_a4tchad);
   fChain->SetBranchAddress("EF_mu24_tight_EFxe40", &EF_mu24_tight_EFxe40, &b_EF_mu24_tight_EFxe40);
   fChain->SetBranchAddress("EF_mu24_tight_L2StarB", &EF_mu24_tight_L2StarB, &b_EF_mu24_tight_L2StarB);
   fChain->SetBranchAddress("EF_mu24_tight_L2StarC", &EF_mu24_tight_L2StarC, &b_EF_mu24_tight_L2StarC);
   fChain->SetBranchAddress("EF_mu24_tight_MG", &EF_mu24_tight_MG, &b_EF_mu24_tight_MG);
   fChain->SetBranchAddress("EF_mu24_tight_MuonEF", &EF_mu24_tight_MuonEF, &b_EF_mu24_tight_MuonEF);
   fChain->SetBranchAddress("EF_mu24_tight_b35_mediumEF_j35_a4tchad", &EF_mu24_tight_b35_mediumEF_j35_a4tchad, &b_EF_mu24_tight_b35_mediumEF_j35_a4tchad);
   fChain->SetBranchAddress("EF_mu24_tight_mu6_EFFS", &EF_mu24_tight_mu6_EFFS, &b_EF_mu24_tight_mu6_EFFS);
   fChain->SetBranchAddress("EF_mu24i_tight", &EF_mu24i_tight, &b_EF_mu24i_tight);
   fChain->SetBranchAddress("EF_mu24i_tight_MG", &EF_mu24i_tight_MG, &b_EF_mu24i_tight_MG);
   fChain->SetBranchAddress("EF_mu24i_tight_MuonEF", &EF_mu24i_tight_MuonEF, &b_EF_mu24i_tight_MuonEF);
   fChain->SetBranchAddress("EF_mu24i_tight_l2muonSA", &EF_mu24i_tight_l2muonSA, &b_EF_mu24i_tight_l2muonSA);
   fChain->SetBranchAddress("EF_mu36_tight", &EF_mu36_tight, &b_EF_mu36_tight);
   fChain->SetBranchAddress("EF_mu40_MSonly_barrel_tight", &EF_mu40_MSonly_barrel_tight, &b_EF_mu40_MSonly_barrel_tight);
   fChain->SetBranchAddress("EF_mu40_muCombTag_NoEF", &EF_mu40_muCombTag_NoEF, &b_EF_mu40_muCombTag_NoEF);
   fChain->SetBranchAddress("EF_mu40_slow_outOfTime_tight", &EF_mu40_slow_outOfTime_tight, &b_EF_mu40_slow_outOfTime_tight);
   fChain->SetBranchAddress("EF_mu40_slow_tight", &EF_mu40_slow_tight, &b_EF_mu40_slow_tight);
   fChain->SetBranchAddress("EF_mu40_tight", &EF_mu40_tight, &b_EF_mu40_tight);
   fChain->SetBranchAddress("EF_mu4T", &EF_mu4T, &b_EF_mu4T);
   fChain->SetBranchAddress("EF_mu4T_cosmic", &EF_mu4T_cosmic, &b_EF_mu4T_cosmic);
   fChain->SetBranchAddress("EF_mu4T_j65_a4tchad_xe60_tclcw_loose", &EF_mu4T_j65_a4tchad_xe60_tclcw_loose, &b_EF_mu4T_j65_a4tchad_xe60_tclcw_loose);
   fChain->SetBranchAddress("EF_mu4T_j65_a4tchad_xe70_tclcw_veryloose", &EF_mu4T_j65_a4tchad_xe70_tclcw_veryloose, &b_EF_mu4T_j65_a4tchad_xe70_tclcw_veryloose);
   fChain->SetBranchAddress("EF_mu4Ti_g20Tvh_medium", &EF_mu4Ti_g20Tvh_medium, &b_EF_mu4Ti_g20Tvh_medium);
   fChain->SetBranchAddress("EF_mu4Ti_g20Tvh_medium_TauMass", &EF_mu4Ti_g20Tvh_medium_TauMass, &b_EF_mu4Ti_g20Tvh_medium_TauMass);
   fChain->SetBranchAddress("EF_mu4Tmu6_Bmumu", &EF_mu4Tmu6_Bmumu, &b_EF_mu4Tmu6_Bmumu);
   fChain->SetBranchAddress("EF_mu4Tmu6_Bmumu_Barrel", &EF_mu4Tmu6_Bmumu_Barrel, &b_EF_mu4Tmu6_Bmumu_Barrel);
   fChain->SetBranchAddress("EF_mu4Tmu6_Bmumux", &EF_mu4Tmu6_Bmumux, &b_EF_mu4Tmu6_Bmumux);
   fChain->SetBranchAddress("EF_mu4Tmu6_Bmumux_Barrel", &EF_mu4Tmu6_Bmumux_Barrel, &b_EF_mu4Tmu6_Bmumux_Barrel);
   fChain->SetBranchAddress("EF_mu4Tmu6_DiMu", &EF_mu4Tmu6_DiMu, &b_EF_mu4Tmu6_DiMu);
   fChain->SetBranchAddress("EF_mu4Tmu6_DiMu_Barrel", &EF_mu4Tmu6_DiMu_Barrel, &b_EF_mu4Tmu6_DiMu_Barrel);
   fChain->SetBranchAddress("EF_mu4Tmu6_DiMu_noVtx_noOS", &EF_mu4Tmu6_DiMu_noVtx_noOS, &b_EF_mu4Tmu6_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("EF_mu4Tmu6_Jpsimumu", &EF_mu4Tmu6_Jpsimumu, &b_EF_mu4Tmu6_Jpsimumu);
   fChain->SetBranchAddress("EF_mu4Tmu6_Jpsimumu_Barrel", &EF_mu4Tmu6_Jpsimumu_Barrel, &b_EF_mu4Tmu6_Jpsimumu_Barrel);
   fChain->SetBranchAddress("EF_mu4Tmu6_Jpsimumu_IDTrkNoCut", &EF_mu4Tmu6_Jpsimumu_IDTrkNoCut, &b_EF_mu4Tmu6_Jpsimumu_IDTrkNoCut);
   fChain->SetBranchAddress("EF_mu4Tmu6_Upsimumu", &EF_mu4Tmu6_Upsimumu, &b_EF_mu4Tmu6_Upsimumu);
   fChain->SetBranchAddress("EF_mu4Tmu6_Upsimumu_Barrel", &EF_mu4Tmu6_Upsimumu_Barrel, &b_EF_mu4Tmu6_Upsimumu_Barrel);
   fChain->SetBranchAddress("EF_mu4_L1MU11_MSonly_cosmic", &EF_mu4_L1MU11_MSonly_cosmic, &b_EF_mu4_L1MU11_MSonly_cosmic);
   fChain->SetBranchAddress("EF_mu4_L1MU11_cosmic", &EF_mu4_L1MU11_cosmic, &b_EF_mu4_L1MU11_cosmic);
   fChain->SetBranchAddress("EF_mu4_empty_NoAlg", &EF_mu4_empty_NoAlg, &b_EF_mu4_empty_NoAlg);
   fChain->SetBranchAddress("EF_mu4_firstempty_NoAlg", &EF_mu4_firstempty_NoAlg, &b_EF_mu4_firstempty_NoAlg);
   fChain->SetBranchAddress("EF_mu4_unpaired_iso_NoAlg", &EF_mu4_unpaired_iso_NoAlg, &b_EF_mu4_unpaired_iso_NoAlg);
   fChain->SetBranchAddress("EF_mu50_MSonly_barrel_tight", &EF_mu50_MSonly_barrel_tight, &b_EF_mu50_MSonly_barrel_tight);
   fChain->SetBranchAddress("EF_mu6", &EF_mu6, &b_EF_mu6);
   fChain->SetBranchAddress("EF_mu60_slow_outOfTime_tight1", &EF_mu60_slow_outOfTime_tight1, &b_EF_mu60_slow_outOfTime_tight1);
   fChain->SetBranchAddress("EF_mu60_slow_tight1", &EF_mu60_slow_tight1, &b_EF_mu60_slow_tight1);
   fChain->SetBranchAddress("EF_mu6_Jpsimumu_tight", &EF_mu6_Jpsimumu_tight, &b_EF_mu6_Jpsimumu_tight);
   fChain->SetBranchAddress("EF_mu6_MSonly", &EF_mu6_MSonly, &b_EF_mu6_MSonly);
   fChain->SetBranchAddress("EF_mu6_Trk_Jpsi_loose", &EF_mu6_Trk_Jpsi_loose, &b_EF_mu6_Trk_Jpsi_loose);
   fChain->SetBranchAddress("EF_mu8", &EF_mu8, &b_EF_mu8);
   fChain->SetBranchAddress("EF_mu8_4j45_a4tchad_L2FS", &EF_mu8_4j45_a4tchad_L2FS, &b_EF_mu8_4j45_a4tchad_L2FS);
   fChain->SetBranchAddress("EF_tau29T_medium1_xe40_tight", &EF_tau29T_medium1_xe40_tight, &b_EF_tau29T_medium1_xe40_tight);
   fChain->SetBranchAddress("EF_tau29T_medium1_xe45_tight", &EF_tau29T_medium1_xe45_tight, &b_EF_tau29T_medium1_xe45_tight);
   fChain->SetBranchAddress("EF_tau29Ti_medium1_llh_xe40_tight", &EF_tau29Ti_medium1_llh_xe40_tight, &b_EF_tau29Ti_medium1_llh_xe40_tight);
   fChain->SetBranchAddress("EF_tau29Ti_medium1_llh_xe45_tight", &EF_tau29Ti_medium1_llh_xe45_tight, &b_EF_tau29Ti_medium1_llh_xe45_tight);
   fChain->SetBranchAddress("EF_tau29Ti_medium1_xe40_tight", &EF_tau29Ti_medium1_xe40_tight, &b_EF_tau29Ti_medium1_xe40_tight);
   fChain->SetBranchAddress("EF_tau29Ti_medium1_xe45_tight", &EF_tau29Ti_medium1_xe45_tight, &b_EF_tau29Ti_medium1_xe45_tight);
   fChain->SetBranchAddress("EF_tau29Ti_medium1_xe55_tclcw", &EF_tau29Ti_medium1_xe55_tclcw, &b_EF_tau29Ti_medium1_xe55_tclcw);
   fChain->SetBranchAddress("EF_tau29Ti_medium1_xe55_tclcw_tight", &EF_tau29Ti_medium1_xe55_tclcw_tight, &b_EF_tau29Ti_medium1_xe55_tclcw_tight);
   fChain->SetBranchAddress("EF_tau38T_medium1_xe40_tight", &EF_tau38T_medium1_xe40_tight, &b_EF_tau38T_medium1_xe40_tight);
   fChain->SetBranchAddress("EF_tau38T_medium1_xe45_tight", &EF_tau38T_medium1_xe45_tight, &b_EF_tau38T_medium1_xe45_tight);
   fChain->SetBranchAddress("EF_tau38T_medium1_xe55_tclcw_tight", &EF_tau38T_medium1_xe55_tclcw_tight, &b_EF_tau38T_medium1_xe55_tclcw_tight);
   fChain->SetBranchAddress("EF_xe100", &EF_xe100, &b_EF_xe100);
   fChain->SetBranchAddress("EF_xe100T_tclcw", &EF_xe100T_tclcw, &b_EF_xe100T_tclcw);
   fChain->SetBranchAddress("EF_xe100T_tclcw_loose", &EF_xe100T_tclcw_loose, &b_EF_xe100T_tclcw_loose);
   fChain->SetBranchAddress("EF_xe100_tclcw", &EF_xe100_tclcw, &b_EF_xe100_tclcw);
   fChain->SetBranchAddress("EF_xe100_tclcw_loose", &EF_xe100_tclcw_loose, &b_EF_xe100_tclcw_loose);
   fChain->SetBranchAddress("EF_xe100_tclcw_verytight", &EF_xe100_tclcw_verytight, &b_EF_xe100_tclcw_verytight);
   fChain->SetBranchAddress("EF_xe100_tight", &EF_xe100_tight, &b_EF_xe100_tight);
   fChain->SetBranchAddress("EF_xe110", &EF_xe110, &b_EF_xe110);
   fChain->SetBranchAddress("EF_xe30", &EF_xe30, &b_EF_xe30);
   fChain->SetBranchAddress("EF_xe50", &EF_xe50, &b_EF_xe50);
   fChain->SetBranchAddress("EF_xe55_LArNoiseBurst", &EF_xe55_LArNoiseBurst, &b_EF_xe55_LArNoiseBurst);
   fChain->SetBranchAddress("EF_xe60", &EF_xe60, &b_EF_xe60);
   fChain->SetBranchAddress("EF_xe60T", &EF_xe60T, &b_EF_xe60T);
   fChain->SetBranchAddress("EF_xe70", &EF_xe70, &b_EF_xe70);
   fChain->SetBranchAddress("EF_xe75_tclcw", &EF_xe75_tclcw, &b_EF_xe75_tclcw);
   fChain->SetBranchAddress("EF_xe80", &EF_xe80, &b_EF_xe80);
   fChain->SetBranchAddress("EF_xe80T", &EF_xe80T, &b_EF_xe80T);
   fChain->SetBranchAddress("EF_xe80T_loose", &EF_xe80T_loose, &b_EF_xe80T_loose);
   fChain->SetBranchAddress("EF_xe80T_tclcw", &EF_xe80T_tclcw, &b_EF_xe80T_tclcw);
   fChain->SetBranchAddress("EF_xe80T_tclcw_loose", &EF_xe80T_tclcw_loose, &b_EF_xe80T_tclcw_loose);
   fChain->SetBranchAddress("EF_xe80_tclcw", &EF_xe80_tclcw, &b_EF_xe80_tclcw);
   fChain->SetBranchAddress("EF_xe80_tclcw_tight", &EF_xe80_tclcw_tight, &b_EF_xe80_tclcw_tight);
   fChain->SetBranchAddress("EF_xe80_tclcw_verytight", &EF_xe80_tclcw_verytight, &b_EF_xe80_tclcw_verytight);
   fChain->SetBranchAddress("EF_xe80_tight", &EF_xe80_tight, &b_EF_xe80_tight);
   fChain->SetBranchAddress("EF_xe90", &EF_xe90, &b_EF_xe90);
   fChain->SetBranchAddress("EF_xe90_tclcw", &EF_xe90_tclcw, &b_EF_xe90_tclcw);
   fChain->SetBranchAddress("EF_xe90_tclcw_tight", &EF_xe90_tclcw_tight, &b_EF_xe90_tclcw_tight);
   fChain->SetBranchAddress("EF_xe90_tclcw_verytight", &EF_xe90_tclcw_verytight, &b_EF_xe90_tclcw_verytight);
   fChain->SetBranchAddress("EF_xe90_tight", &EF_xe90_tight, &b_EF_xe90_tight);
   fChain->SetBranchAddress("L1_2EM10VH", &L1_2EM10VH, &b_L1_2EM10VH);
   fChain->SetBranchAddress("L1_2EM12", &L1_2EM12, &b_L1_2EM12);
   fChain->SetBranchAddress("L1_2EM12_EM16V", &L1_2EM12_EM16V, &b_L1_2EM12_EM16V);
   fChain->SetBranchAddress("L1_2EM3", &L1_2EM3, &b_L1_2EM3);
   fChain->SetBranchAddress("L1_2EM3_EM12", &L1_2EM3_EM12, &b_L1_2EM3_EM12);
   fChain->SetBranchAddress("L1_2EM3_EM6", &L1_2EM3_EM6, &b_L1_2EM3_EM6);
   fChain->SetBranchAddress("L1_2EM6", &L1_2EM6, &b_L1_2EM6);
   fChain->SetBranchAddress("L1_2EM6_EM16VH", &L1_2EM6_EM16VH, &b_L1_2EM6_EM16VH);
   fChain->SetBranchAddress("L1_2EM6_MU6", &L1_2EM6_MU6, &b_L1_2EM6_MU6);
   fChain->SetBranchAddress("L1_2J20_XE20", &L1_2J20_XE20, &b_L1_2J20_XE20);
   fChain->SetBranchAddress("L1_2J30_XE20", &L1_2J30_XE20, &b_L1_2J30_XE20);
   fChain->SetBranchAddress("L1_2MU10", &L1_2MU10, &b_L1_2MU10);
   fChain->SetBranchAddress("L1_2MU4", &L1_2MU4, &b_L1_2MU4);
   fChain->SetBranchAddress("L1_2MU4_2EM3", &L1_2MU4_2EM3, &b_L1_2MU4_2EM3);
   fChain->SetBranchAddress("L1_2MU4_BARREL", &L1_2MU4_BARREL, &b_L1_2MU4_BARREL);
   fChain->SetBranchAddress("L1_2MU4_BARRELONLY", &L1_2MU4_BARRELONLY, &b_L1_2MU4_BARRELONLY);
   fChain->SetBranchAddress("L1_2MU4_EM3", &L1_2MU4_EM3, &b_L1_2MU4_EM3);
   fChain->SetBranchAddress("L1_2MU4_EMPTY", &L1_2MU4_EMPTY, &b_L1_2MU4_EMPTY);
   fChain->SetBranchAddress("L1_2MU4_FIRSTEMPTY", &L1_2MU4_FIRSTEMPTY, &b_L1_2MU4_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_2MU4_MU6", &L1_2MU4_MU6, &b_L1_2MU4_MU6);
   fChain->SetBranchAddress("L1_2MU4_MU6_BARREL", &L1_2MU4_MU6_BARREL, &b_L1_2MU4_MU6_BARREL);
   fChain->SetBranchAddress("L1_2MU4_XE30", &L1_2MU4_XE30, &b_L1_2MU4_XE30);
   fChain->SetBranchAddress("L1_2MU4_XE40", &L1_2MU4_XE40, &b_L1_2MU4_XE40);
   fChain->SetBranchAddress("L1_2MU6", &L1_2MU6, &b_L1_2MU6);
   fChain->SetBranchAddress("L1_2MU6_UNPAIRED_ISO", &L1_2MU6_UNPAIRED_ISO, &b_L1_2MU6_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_2MU6_UNPAIRED_NONISO", &L1_2MU6_UNPAIRED_NONISO, &b_L1_2MU6_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_EM10VH", &L1_EM10VH, &b_L1_EM10VH);
   fChain->SetBranchAddress("L1_EM10VH_MU6", &L1_EM10VH_MU6, &b_L1_EM10VH_MU6);
   fChain->SetBranchAddress("L1_EM10VH_XE20", &L1_EM10VH_XE20, &b_L1_EM10VH_XE20);
   fChain->SetBranchAddress("L1_EM10VH_XE30", &L1_EM10VH_XE30, &b_L1_EM10VH_XE30);
   fChain->SetBranchAddress("L1_EM10VH_XE35", &L1_EM10VH_XE35, &b_L1_EM10VH_XE35);
   fChain->SetBranchAddress("L1_EM12", &L1_EM12, &b_L1_EM12);
   fChain->SetBranchAddress("L1_EM12_3J10", &L1_EM12_3J10, &b_L1_EM12_3J10);
   fChain->SetBranchAddress("L1_EM12_4J10", &L1_EM12_4J10, &b_L1_EM12_4J10);
   fChain->SetBranchAddress("L1_EM12_XE20", &L1_EM12_XE20, &b_L1_EM12_XE20);
   fChain->SetBranchAddress("L1_EM12_XS30", &L1_EM12_XS30, &b_L1_EM12_XS30);
   fChain->SetBranchAddress("L1_EM12_XS45", &L1_EM12_XS45, &b_L1_EM12_XS45);
   fChain->SetBranchAddress("L1_EM14VH", &L1_EM14VH, &b_L1_EM14VH);
   fChain->SetBranchAddress("L1_EM16V", &L1_EM16V, &b_L1_EM16V);
   fChain->SetBranchAddress("L1_EM16VH", &L1_EM16VH, &b_L1_EM16VH);
   fChain->SetBranchAddress("L1_EM16VH_MU4", &L1_EM16VH_MU4, &b_L1_EM16VH_MU4);
   fChain->SetBranchAddress("L1_EM16V_XE20", &L1_EM16V_XE20, &b_L1_EM16V_XE20);
   fChain->SetBranchAddress("L1_EM16V_XS45", &L1_EM16V_XS45, &b_L1_EM16V_XS45);
   fChain->SetBranchAddress("L1_EM18VH", &L1_EM18VH, &b_L1_EM18VH);
   fChain->SetBranchAddress("L1_EM3", &L1_EM3, &b_L1_EM3);
   fChain->SetBranchAddress("L1_EM30", &L1_EM30, &b_L1_EM30);
   fChain->SetBranchAddress("L1_EM30_BGRP7", &L1_EM30_BGRP7, &b_L1_EM30_BGRP7);
   fChain->SetBranchAddress("L1_EM3_EMPTY", &L1_EM3_EMPTY, &b_L1_EM3_EMPTY);
   fChain->SetBranchAddress("L1_EM3_FIRSTEMPTY", &L1_EM3_FIRSTEMPTY, &b_L1_EM3_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_EM3_MU6", &L1_EM3_MU6, &b_L1_EM3_MU6);
   fChain->SetBranchAddress("L1_EM3_UNPAIRED_ISO", &L1_EM3_UNPAIRED_ISO, &b_L1_EM3_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_EM3_UNPAIRED_NONISO", &L1_EM3_UNPAIRED_NONISO, &b_L1_EM3_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_EM6", &L1_EM6, &b_L1_EM6);
   fChain->SetBranchAddress("L1_EM6_2MU6", &L1_EM6_2MU6, &b_L1_EM6_2MU6);
   fChain->SetBranchAddress("L1_EM6_EMPTY", &L1_EM6_EMPTY, &b_L1_EM6_EMPTY);
   fChain->SetBranchAddress("L1_EM6_MU10", &L1_EM6_MU10, &b_L1_EM6_MU10);
   fChain->SetBranchAddress("L1_EM6_MU6", &L1_EM6_MU6, &b_L1_EM6_MU6);
   fChain->SetBranchAddress("L1_EM6_XS45", &L1_EM6_XS45, &b_L1_EM6_XS45);
   fChain->SetBranchAddress("L1_J30_XE35", &L1_J30_XE35, &b_L1_J30_XE35);
   fChain->SetBranchAddress("L1_J30_XE40", &L1_J30_XE40, &b_L1_J30_XE40);
   fChain->SetBranchAddress("L1_J30_XE50", &L1_J30_XE50, &b_L1_J30_XE50);
   fChain->SetBranchAddress("L1_J50_XE30", &L1_J50_XE30, &b_L1_J50_XE30);
   fChain->SetBranchAddress("L1_J50_XE35", &L1_J50_XE35, &b_L1_J50_XE35);
   fChain->SetBranchAddress("L1_J50_XE40", &L1_J50_XE40, &b_L1_J50_XE40);
   fChain->SetBranchAddress("L1_MU10", &L1_MU10, &b_L1_MU10);
   fChain->SetBranchAddress("L1_MU10_EMPTY", &L1_MU10_EMPTY, &b_L1_MU10_EMPTY);
   fChain->SetBranchAddress("L1_MU10_FIRSTEMPTY", &L1_MU10_FIRSTEMPTY, &b_L1_MU10_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_MU10_J20", &L1_MU10_J20, &b_L1_MU10_J20);
   fChain->SetBranchAddress("L1_MU10_UNPAIRED_ISO", &L1_MU10_UNPAIRED_ISO, &b_L1_MU10_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_MU10_XE20", &L1_MU10_XE20, &b_L1_MU10_XE20);
   fChain->SetBranchAddress("L1_MU10_XE25", &L1_MU10_XE25, &b_L1_MU10_XE25);
   fChain->SetBranchAddress("L1_MU11", &L1_MU11, &b_L1_MU11);
   fChain->SetBranchAddress("L1_MU11_EMPTY", &L1_MU11_EMPTY, &b_L1_MU11_EMPTY);
   fChain->SetBranchAddress("L1_MU15", &L1_MU15, &b_L1_MU15);
   fChain->SetBranchAddress("L1_MU20", &L1_MU20, &b_L1_MU20);
   fChain->SetBranchAddress("L1_MU20_FIRSTEMPTY", &L1_MU20_FIRSTEMPTY, &b_L1_MU20_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_MU4", &L1_MU4, &b_L1_MU4);
   fChain->SetBranchAddress("L1_MU4_EMPTY", &L1_MU4_EMPTY, &b_L1_MU4_EMPTY);
   fChain->SetBranchAddress("L1_MU4_FIRSTEMPTY", &L1_MU4_FIRSTEMPTY, &b_L1_MU4_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_MU4_J10", &L1_MU4_J10, &b_L1_MU4_J10);
   fChain->SetBranchAddress("L1_MU4_J15", &L1_MU4_J15, &b_L1_MU4_J15);
   fChain->SetBranchAddress("L1_MU4_J15_EMPTY", &L1_MU4_J15_EMPTY, &b_L1_MU4_J15_EMPTY);
   fChain->SetBranchAddress("L1_MU4_J15_UNPAIRED_ISO", &L1_MU4_J15_UNPAIRED_ISO, &b_L1_MU4_J15_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_MU4_J20_XE20", &L1_MU4_J20_XE20, &b_L1_MU4_J20_XE20);
   fChain->SetBranchAddress("L1_MU4_J20_XE35", &L1_MU4_J20_XE35, &b_L1_MU4_J20_XE35);
   fChain->SetBranchAddress("L1_MU4_J30", &L1_MU4_J30, &b_L1_MU4_J30);
   fChain->SetBranchAddress("L1_MU4_J50", &L1_MU4_J50, &b_L1_MU4_J50);
   fChain->SetBranchAddress("L1_MU4_J75", &L1_MU4_J75, &b_L1_MU4_J75);
   fChain->SetBranchAddress("L1_MU4_UNPAIRED_ISO", &L1_MU4_UNPAIRED_ISO, &b_L1_MU4_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_MU4_UNPAIRED_NONISO", &L1_MU4_UNPAIRED_NONISO, &b_L1_MU4_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_MU6", &L1_MU6, &b_L1_MU6);
   fChain->SetBranchAddress("L1_MU6_2J20", &L1_MU6_2J20, &b_L1_MU6_2J20);
   fChain->SetBranchAddress("L1_MU6_FIRSTEMPTY", &L1_MU6_FIRSTEMPTY, &b_L1_MU6_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_MU6_J15", &L1_MU6_J15, &b_L1_MU6_J15);
   fChain->SetBranchAddress("L1_MUB", &L1_MUB, &b_L1_MUB);
   fChain->SetBranchAddress("L1_MUE", &L1_MUE, &b_L1_MUE);
   fChain->SetBranchAddress("L1_TAU11_XE20", &L1_TAU11_XE20, &b_L1_TAU11_XE20);
   fChain->SetBranchAddress("L1_TAU15I_XE35", &L1_TAU15I_XE35, &b_L1_TAU15I_XE35);
   fChain->SetBranchAddress("L1_TAU15I_XE40", &L1_TAU15I_XE40, &b_L1_TAU15I_XE40);
   fChain->SetBranchAddress("L1_TAU15_XE25_3J10", &L1_TAU15_XE25_3J10, &b_L1_TAU15_XE25_3J10);
   fChain->SetBranchAddress("L1_TAU15_XE25_3J10_J30", &L1_TAU15_XE25_3J10_J30, &b_L1_TAU15_XE25_3J10_J30);
   fChain->SetBranchAddress("L1_TAU15_XE25_3J15", &L1_TAU15_XE25_3J15, &b_L1_TAU15_XE25_3J15);
   fChain->SetBranchAddress("L1_TAU15_XE35", &L1_TAU15_XE35, &b_L1_TAU15_XE35);
   fChain->SetBranchAddress("L1_TAU15_XE40", &L1_TAU15_XE40, &b_L1_TAU15_XE40);
   fChain->SetBranchAddress("L1_TAU20_XE35", &L1_TAU20_XE35, &b_L1_TAU20_XE35);
   fChain->SetBranchAddress("L1_TAU20_XE40", &L1_TAU20_XE40, &b_L1_TAU20_XE40);
   fChain->SetBranchAddress("L1_XE20", &L1_XE20, &b_L1_XE20);
   fChain->SetBranchAddress("L1_XE25", &L1_XE25, &b_L1_XE25);
   fChain->SetBranchAddress("L1_XE30", &L1_XE30, &b_L1_XE30);
   fChain->SetBranchAddress("L1_XE35", &L1_XE35, &b_L1_XE35);
   fChain->SetBranchAddress("L1_XE40", &L1_XE40, &b_L1_XE40);
   fChain->SetBranchAddress("L1_XE40_BGRP7", &L1_XE40_BGRP7, &b_L1_XE40_BGRP7);
   fChain->SetBranchAddress("L1_XE50", &L1_XE50, &b_L1_XE50);
   fChain->SetBranchAddress("L1_XE50_BGRP7", &L1_XE50_BGRP7, &b_L1_XE50_BGRP7);
   fChain->SetBranchAddress("L1_XE60", &L1_XE60, &b_L1_XE60);
   fChain->SetBranchAddress("L1_XE70", &L1_XE70, &b_L1_XE70);
   fChain->SetBranchAddress("L2_2e12Tvh_loose1", &L2_2e12Tvh_loose1, &b_L2_2e12Tvh_loose1);
   fChain->SetBranchAddress("L2_2e5_tight1_Jpsi", &L2_2e5_tight1_Jpsi, &b_L2_2e5_tight1_Jpsi);
   fChain->SetBranchAddress("L2_2e7T_loose1_mu6", &L2_2e7T_loose1_mu6, &b_L2_2e7T_loose1_mu6);
   fChain->SetBranchAddress("L2_2e7T_medium1_mu6", &L2_2e7T_medium1_mu6, &b_L2_2e7T_medium1_mu6);
   fChain->SetBranchAddress("L2_2mu10", &L2_2mu10, &b_L2_2mu10);
   fChain->SetBranchAddress("L2_2mu10_MSonly_g10_loose", &L2_2mu10_MSonly_g10_loose, &b_L2_2mu10_MSonly_g10_loose);
   fChain->SetBranchAddress("L2_2mu13", &L2_2mu13, &b_L2_2mu13);
   fChain->SetBranchAddress("L2_2mu13_Zmumu_IDTrkNoCut", &L2_2mu13_Zmumu_IDTrkNoCut, &b_L2_2mu13_Zmumu_IDTrkNoCut);
   fChain->SetBranchAddress("L2_2mu13_l2muonSA", &L2_2mu13_l2muonSA, &b_L2_2mu13_l2muonSA);
   fChain->SetBranchAddress("L2_2mu15", &L2_2mu15, &b_L2_2mu15);
   fChain->SetBranchAddress("L2_2mu4T", &L2_2mu4T, &b_L2_2mu4T);
   fChain->SetBranchAddress("L2_2mu4T_2e5_tight1", &L2_2mu4T_2e5_tight1, &b_L2_2mu4T_2e5_tight1);
   fChain->SetBranchAddress("L2_2mu4T_Bmumu", &L2_2mu4T_Bmumu, &b_L2_2mu4T_Bmumu);
   fChain->SetBranchAddress("L2_2mu4T_Bmumu_Barrel", &L2_2mu4T_Bmumu_Barrel, &b_L2_2mu4T_Bmumu_Barrel);
   fChain->SetBranchAddress("L2_2mu4T_Bmumu_BarrelOnly", &L2_2mu4T_Bmumu_BarrelOnly, &b_L2_2mu4T_Bmumu_BarrelOnly);
   fChain->SetBranchAddress("L2_2mu4T_Bmumux", &L2_2mu4T_Bmumux, &b_L2_2mu4T_Bmumux);
   fChain->SetBranchAddress("L2_2mu4T_Bmumux_Barrel", &L2_2mu4T_Bmumux_Barrel, &b_L2_2mu4T_Bmumux_Barrel);
   fChain->SetBranchAddress("L2_2mu4T_Bmumux_BarrelOnly", &L2_2mu4T_Bmumux_BarrelOnly, &b_L2_2mu4T_Bmumux_BarrelOnly);
   fChain->SetBranchAddress("L2_2mu4T_DiMu", &L2_2mu4T_DiMu, &b_L2_2mu4T_DiMu);
   fChain->SetBranchAddress("L2_2mu4T_DiMu_Barrel", &L2_2mu4T_DiMu_Barrel, &b_L2_2mu4T_DiMu_Barrel);
   fChain->SetBranchAddress("L2_2mu4T_DiMu_BarrelOnly", &L2_2mu4T_DiMu_BarrelOnly, &b_L2_2mu4T_DiMu_BarrelOnly);
   fChain->SetBranchAddress("L2_2mu4T_DiMu_L2StarB", &L2_2mu4T_DiMu_L2StarB, &b_L2_2mu4T_DiMu_L2StarB);
   fChain->SetBranchAddress("L2_2mu4T_DiMu_L2StarC", &L2_2mu4T_DiMu_L2StarC, &b_L2_2mu4T_DiMu_L2StarC);
   fChain->SetBranchAddress("L2_2mu4T_DiMu_e5_tight1", &L2_2mu4T_DiMu_e5_tight1, &b_L2_2mu4T_DiMu_e5_tight1);
   fChain->SetBranchAddress("L2_2mu4T_DiMu_l2muonSA", &L2_2mu4T_DiMu_l2muonSA, &b_L2_2mu4T_DiMu_l2muonSA);
   fChain->SetBranchAddress("L2_2mu4T_DiMu_noVtx_noOS", &L2_2mu4T_DiMu_noVtx_noOS, &b_L2_2mu4T_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("L2_2mu4T_Jpsimumu", &L2_2mu4T_Jpsimumu, &b_L2_2mu4T_Jpsimumu);
   fChain->SetBranchAddress("L2_2mu4T_Jpsimumu_Barrel", &L2_2mu4T_Jpsimumu_Barrel, &b_L2_2mu4T_Jpsimumu_Barrel);
   fChain->SetBranchAddress("L2_2mu4T_Jpsimumu_BarrelOnly", &L2_2mu4T_Jpsimumu_BarrelOnly, &b_L2_2mu4T_Jpsimumu_BarrelOnly);
   fChain->SetBranchAddress("L2_2mu4T_Jpsimumu_IDTrkNoCut", &L2_2mu4T_Jpsimumu_IDTrkNoCut, &b_L2_2mu4T_Jpsimumu_IDTrkNoCut);
   fChain->SetBranchAddress("L2_2mu4T_Upsimumu", &L2_2mu4T_Upsimumu, &b_L2_2mu4T_Upsimumu);
   fChain->SetBranchAddress("L2_2mu4T_Upsimumu_Barrel", &L2_2mu4T_Upsimumu_Barrel, &b_L2_2mu4T_Upsimumu_Barrel);
   fChain->SetBranchAddress("L2_2mu4T_Upsimumu_BarrelOnly", &L2_2mu4T_Upsimumu_BarrelOnly, &b_L2_2mu4T_Upsimumu_BarrelOnly);
   fChain->SetBranchAddress("L2_2mu4T_xe45", &L2_2mu4T_xe45, &b_L2_2mu4T_xe45);
   fChain->SetBranchAddress("L2_2mu4T_xe60", &L2_2mu4T_xe60, &b_L2_2mu4T_xe60);
   fChain->SetBranchAddress("L2_2mu6", &L2_2mu6, &b_L2_2mu6);
   fChain->SetBranchAddress("L2_2mu6_Bmumu", &L2_2mu6_Bmumu, &b_L2_2mu6_Bmumu);
   fChain->SetBranchAddress("L2_2mu6_Bmumux", &L2_2mu6_Bmumux, &b_L2_2mu6_Bmumux);
   fChain->SetBranchAddress("L2_2mu6_DiMu", &L2_2mu6_DiMu, &b_L2_2mu6_DiMu);
   fChain->SetBranchAddress("L2_2mu6_DiMu_DY20", &L2_2mu6_DiMu_DY20, &b_L2_2mu6_DiMu_DY20);
   fChain->SetBranchAddress("L2_2mu6_DiMu_DY25", &L2_2mu6_DiMu_DY25, &b_L2_2mu6_DiMu_DY25);
   fChain->SetBranchAddress("L2_2mu6_DiMu_noVtx_noOS", &L2_2mu6_DiMu_noVtx_noOS, &b_L2_2mu6_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("L2_2mu6_Jpsimumu", &L2_2mu6_Jpsimumu, &b_L2_2mu6_Jpsimumu);
   fChain->SetBranchAddress("L2_2mu6_Upsimumu", &L2_2mu6_Upsimumu, &b_L2_2mu6_Upsimumu);
   fChain->SetBranchAddress("L2_2mu6i_DiMu_DY", &L2_2mu6i_DiMu_DY, &b_L2_2mu6i_DiMu_DY);
   fChain->SetBranchAddress("L2_2mu6i_DiMu_DY_2j25_a4tchad", &L2_2mu6i_DiMu_DY_2j25_a4tchad, &b_L2_2mu6i_DiMu_DY_2j25_a4tchad);
   fChain->SetBranchAddress("L2_2mu6i_DiMu_DY_noVtx_noOS", &L2_2mu6i_DiMu_DY_noVtx_noOS, &b_L2_2mu6i_DiMu_DY_noVtx_noOS);
   fChain->SetBranchAddress("L2_2mu6i_DiMu_DY_noVtx_noOS_2j25_a4tchad", &L2_2mu6i_DiMu_DY_noVtx_noOS_2j25_a4tchad, &b_L2_2mu6i_DiMu_DY_noVtx_noOS_2j25_a4tchad);
   fChain->SetBranchAddress("L2_2mu8_EFxe30", &L2_2mu8_EFxe30, &b_L2_2mu8_EFxe30);
   fChain->SetBranchAddress("L2_e11_etcut", &L2_e11_etcut, &b_L2_e11_etcut);
   fChain->SetBranchAddress("L2_e12Tvh_loose1", &L2_e12Tvh_loose1, &b_L2_e12Tvh_loose1);
   fChain->SetBranchAddress("L2_e12Tvh_medium1", &L2_e12Tvh_medium1, &b_L2_e12Tvh_medium1);
   fChain->SetBranchAddress("L2_e12Tvh_medium1_mu6_topo_medium", &L2_e12Tvh_medium1_mu6_topo_medium, &b_L2_e12Tvh_medium1_mu6_topo_medium);
   fChain->SetBranchAddress("L2_e12Tvh_medium1_mu8", &L2_e12Tvh_medium1_mu8, &b_L2_e12Tvh_medium1_mu8);
   fChain->SetBranchAddress("L2_e13_etcutTrk_xs45", &L2_e13_etcutTrk_xs45, &b_L2_e13_etcutTrk_xs45);
   fChain->SetBranchAddress("L2_e14_tight1_e4_etcut_Jpsi", &L2_e14_tight1_e4_etcut_Jpsi, &b_L2_e14_tight1_e4_etcut_Jpsi);
   fChain->SetBranchAddress("L2_e18_loose1", &L2_e18_loose1, &b_L2_e18_loose1);
   fChain->SetBranchAddress("L2_e18_loose1_g25_medium", &L2_e18_loose1_g25_medium, &b_L2_e18_loose1_g25_medium);
   fChain->SetBranchAddress("L2_e18_medium1", &L2_e18_medium1, &b_L2_e18_medium1);
   fChain->SetBranchAddress("L2_e18_medium1_g25_loose", &L2_e18_medium1_g25_loose, &b_L2_e18_medium1_g25_loose);
   fChain->SetBranchAddress("L2_e18vh_medium1_2e7T_medium1", &L2_e18vh_medium1_2e7T_medium1, &b_L2_e18vh_medium1_2e7T_medium1);
   fChain->SetBranchAddress("L2_e20_etcutTrk_xe25", &L2_e20_etcutTrk_xe25, &b_L2_e20_etcutTrk_xe25);
   fChain->SetBranchAddress("L2_e20_etcutTrk_xs45", &L2_e20_etcutTrk_xs45, &b_L2_e20_etcutTrk_xs45);
   fChain->SetBranchAddress("L2_e20vhT_medium1_g6T_etcut_Upsi", &L2_e20vhT_medium1_g6T_etcut_Upsi, &b_L2_e20vhT_medium1_g6T_etcut_Upsi);
   fChain->SetBranchAddress("L2_e20vhT_tight1_g6T_etcut_Upsi", &L2_e20vhT_tight1_g6T_etcut_Upsi, &b_L2_e20vhT_tight1_g6T_etcut_Upsi);
   fChain->SetBranchAddress("L2_e22vh_loose", &L2_e22vh_loose, &b_L2_e22vh_loose);
   fChain->SetBranchAddress("L2_e22vh_loose0", &L2_e22vh_loose0, &b_L2_e22vh_loose0);
   fChain->SetBranchAddress("L2_e22vh_loose1", &L2_e22vh_loose1, &b_L2_e22vh_loose1);
   fChain->SetBranchAddress("L2_e22vh_medium1", &L2_e22vh_medium1, &b_L2_e22vh_medium1);
   fChain->SetBranchAddress("L2_e22vh_medium1_IDTrkNoCut", &L2_e22vh_medium1_IDTrkNoCut, &b_L2_e22vh_medium1_IDTrkNoCut);
   fChain->SetBranchAddress("L2_e22vhi_medium1", &L2_e22vhi_medium1, &b_L2_e22vhi_medium1);
   fChain->SetBranchAddress("L2_e24vh_loose", &L2_e24vh_loose, &b_L2_e24vh_loose);
   fChain->SetBranchAddress("L2_e24vh_loose0", &L2_e24vh_loose0, &b_L2_e24vh_loose0);
   fChain->SetBranchAddress("L2_e24vh_loose1", &L2_e24vh_loose1, &b_L2_e24vh_loose1);
   fChain->SetBranchAddress("L2_e24vh_medium1", &L2_e24vh_medium1, &b_L2_e24vh_medium1);
   fChain->SetBranchAddress("L2_e24vh_medium1_EFxe30", &L2_e24vh_medium1_EFxe30, &b_L2_e24vh_medium1_EFxe30);
   fChain->SetBranchAddress("L2_e24vh_medium1_EFxe35", &L2_e24vh_medium1_EFxe35, &b_L2_e24vh_medium1_EFxe35);
   fChain->SetBranchAddress("L2_e24vh_medium1_EFxe40", &L2_e24vh_medium1_EFxe40, &b_L2_e24vh_medium1_EFxe40);
   fChain->SetBranchAddress("L2_e24vh_medium1_IDTrkNoCut", &L2_e24vh_medium1_IDTrkNoCut, &b_L2_e24vh_medium1_IDTrkNoCut);
   fChain->SetBranchAddress("L2_e24vh_medium1_IdScan", &L2_e24vh_medium1_IdScan, &b_L2_e24vh_medium1_IdScan);
   fChain->SetBranchAddress("L2_e24vh_medium1_L2StarB", &L2_e24vh_medium1_L2StarB, &b_L2_e24vh_medium1_L2StarB);
   fChain->SetBranchAddress("L2_e24vh_medium1_L2StarC", &L2_e24vh_medium1_L2StarC, &b_L2_e24vh_medium1_L2StarC);
   fChain->SetBranchAddress("L2_e24vh_medium1_SiTrk", &L2_e24vh_medium1_SiTrk, &b_L2_e24vh_medium1_SiTrk);
   fChain->SetBranchAddress("L2_e24vh_medium1_TRT", &L2_e24vh_medium1_TRT, &b_L2_e24vh_medium1_TRT);
   fChain->SetBranchAddress("L2_e24vh_medium1_e7_medium1", &L2_e24vh_medium1_e7_medium1, &b_L2_e24vh_medium1_e7_medium1);
   fChain->SetBranchAddress("L2_e24vh_tight1_e15_NoCut_Zee", &L2_e24vh_tight1_e15_NoCut_Zee, &b_L2_e24vh_tight1_e15_NoCut_Zee);
   fChain->SetBranchAddress("L2_e24vhi_loose1_mu8", &L2_e24vhi_loose1_mu8, &b_L2_e24vhi_loose1_mu8);
   fChain->SetBranchAddress("L2_e24vhi_medium1", &L2_e24vhi_medium1, &b_L2_e24vhi_medium1);
   fChain->SetBranchAddress("L2_e45_loose1", &L2_e45_loose1, &b_L2_e45_loose1);
   fChain->SetBranchAddress("L2_e45_medium1", &L2_e45_medium1, &b_L2_e45_medium1);
   fChain->SetBranchAddress("L2_e5_tight1", &L2_e5_tight1, &b_L2_e5_tight1);
   fChain->SetBranchAddress("L2_e5_tight1_e14_etcut_Jpsi", &L2_e5_tight1_e14_etcut_Jpsi, &b_L2_e5_tight1_e14_etcut_Jpsi);
   fChain->SetBranchAddress("L2_e5_tight1_e4_etcut_Jpsi", &L2_e5_tight1_e4_etcut_Jpsi, &b_L2_e5_tight1_e4_etcut_Jpsi);
   fChain->SetBranchAddress("L2_e5_tight1_e4_etcut_Jpsi_L2StarB", &L2_e5_tight1_e4_etcut_Jpsi_L2StarB, &b_L2_e5_tight1_e4_etcut_Jpsi_L2StarB);
   fChain->SetBranchAddress("L2_e5_tight1_e4_etcut_Jpsi_L2StarC", &L2_e5_tight1_e4_etcut_Jpsi_L2StarC, &b_L2_e5_tight1_e4_etcut_Jpsi_L2StarC);
   fChain->SetBranchAddress("L2_e5_tight1_e5_NoCut", &L2_e5_tight1_e5_NoCut, &b_L2_e5_tight1_e5_NoCut);
   fChain->SetBranchAddress("L2_e5_tight1_e9_etcut_Jpsi", &L2_e5_tight1_e9_etcut_Jpsi, &b_L2_e5_tight1_e9_etcut_Jpsi);
   fChain->SetBranchAddress("L2_e60_loose1", &L2_e60_loose1, &b_L2_e60_loose1);
   fChain->SetBranchAddress("L2_e60_medium1", &L2_e60_medium1, &b_L2_e60_medium1);
   fChain->SetBranchAddress("L2_e7T_loose1", &L2_e7T_loose1, &b_L2_e7T_loose1);
   fChain->SetBranchAddress("L2_e7T_loose1_2mu6", &L2_e7T_loose1_2mu6, &b_L2_e7T_loose1_2mu6);
   fChain->SetBranchAddress("L2_e7T_medium1", &L2_e7T_medium1, &b_L2_e7T_medium1);
   fChain->SetBranchAddress("L2_e7T_medium1_2mu6", &L2_e7T_medium1_2mu6, &b_L2_e7T_medium1_2mu6);
   fChain->SetBranchAddress("L2_e9_tight1_e4_etcut_Jpsi", &L2_e9_tight1_e4_etcut_Jpsi, &b_L2_e9_tight1_e4_etcut_Jpsi);
   fChain->SetBranchAddress("L2_eb_physics", &L2_eb_physics, &b_L2_eb_physics);
   fChain->SetBranchAddress("L2_eb_physics_empty", &L2_eb_physics_empty, &b_L2_eb_physics_empty);
   fChain->SetBranchAddress("L2_eb_physics_firstempty", &L2_eb_physics_firstempty, &b_L2_eb_physics_firstempty);
   fChain->SetBranchAddress("L2_eb_physics_noL1PS", &L2_eb_physics_noL1PS, &b_L2_eb_physics_noL1PS);
   fChain->SetBranchAddress("L2_eb_physics_unpaired_iso", &L2_eb_physics_unpaired_iso, &b_L2_eb_physics_unpaired_iso);
   fChain->SetBranchAddress("L2_eb_physics_unpaired_noniso", &L2_eb_physics_unpaired_noniso, &b_L2_eb_physics_unpaired_noniso);
   fChain->SetBranchAddress("L2_eb_random", &L2_eb_random, &b_L2_eb_random);
   fChain->SetBranchAddress("L2_eb_random_empty", &L2_eb_random_empty, &b_L2_eb_random_empty);
   fChain->SetBranchAddress("L2_eb_random_firstempty", &L2_eb_random_firstempty, &b_L2_eb_random_firstempty);
   fChain->SetBranchAddress("L2_eb_random_unpaired_iso", &L2_eb_random_unpaired_iso, &b_L2_eb_random_unpaired_iso);
   fChain->SetBranchAddress("L2_em3_empty_larcalib", &L2_em3_empty_larcalib, &b_L2_em3_empty_larcalib);
   fChain->SetBranchAddress("L2_em6_empty_larcalib", &L2_em6_empty_larcalib, &b_L2_em6_empty_larcalib);
   fChain->SetBranchAddress("L2_j105_c4cchad_xe40", &L2_j105_c4cchad_xe40, &b_L2_j105_c4cchad_xe40);
   fChain->SetBranchAddress("L2_j105_c4cchad_xe45", &L2_j105_c4cchad_xe45, &b_L2_j105_c4cchad_xe45);
   fChain->SetBranchAddress("L2_j30_a4tcem_eta13_xe30_empty", &L2_j30_a4tcem_eta13_xe30_empty, &b_L2_j30_a4tcem_eta13_xe30_empty);
   fChain->SetBranchAddress("L2_j30_a4tcem_eta13_xe30_firstempty", &L2_j30_a4tcem_eta13_xe30_firstempty, &b_L2_j30_a4tcem_eta13_xe30_firstempty);
   fChain->SetBranchAddress("L2_j50_a4tcem_eta13_xe50_empty", &L2_j50_a4tcem_eta13_xe50_empty, &b_L2_j50_a4tcem_eta13_xe50_empty);
   fChain->SetBranchAddress("L2_j50_a4tcem_eta13_xe50_firstempty", &L2_j50_a4tcem_eta13_xe50_firstempty, &b_L2_j50_a4tcem_eta13_xe50_firstempty);
   fChain->SetBranchAddress("L2_j50_a4tcem_eta25_xe50_empty", &L2_j50_a4tcem_eta25_xe50_empty, &b_L2_j50_a4tcem_eta25_xe50_empty);
   fChain->SetBranchAddress("L2_j50_a4tcem_eta25_xe50_firstempty", &L2_j50_a4tcem_eta25_xe50_firstempty, &b_L2_j50_a4tcem_eta25_xe50_firstempty);
   fChain->SetBranchAddress("L2_j75_c4cchad_xe45", &L2_j75_c4cchad_xe45, &b_L2_j75_c4cchad_xe45);
   fChain->SetBranchAddress("L2_j75_c4cchad_xe55", &L2_j75_c4cchad_xe55, &b_L2_j75_c4cchad_xe55);
   fChain->SetBranchAddress("L2_mu10", &L2_mu10, &b_L2_mu10);
   fChain->SetBranchAddress("L2_mu10_Jpsimumu", &L2_mu10_Jpsimumu, &b_L2_mu10_Jpsimumu);
   fChain->SetBranchAddress("L2_mu10_MSonly", &L2_mu10_MSonly, &b_L2_mu10_MSonly);
   fChain->SetBranchAddress("L2_mu10_Upsimumu_tight_FS", &L2_mu10_Upsimumu_tight_FS, &b_L2_mu10_Upsimumu_tight_FS);
   fChain->SetBranchAddress("L2_mu10i_g10_medium", &L2_mu10i_g10_medium, &b_L2_mu10i_g10_medium);
   fChain->SetBranchAddress("L2_mu10i_g10_medium_TauMass", &L2_mu10i_g10_medium_TauMass, &b_L2_mu10i_g10_medium_TauMass);
   fChain->SetBranchAddress("L2_mu10i_loose_g12Tvh_medium", &L2_mu10i_loose_g12Tvh_medium, &b_L2_mu10i_loose_g12Tvh_medium);
   fChain->SetBranchAddress("L2_mu10i_loose_g12Tvh_medium_TauMass", &L2_mu10i_loose_g12Tvh_medium_TauMass, &b_L2_mu10i_loose_g12Tvh_medium_TauMass);
   fChain->SetBranchAddress("L2_mu11_empty_NoAlg", &L2_mu11_empty_NoAlg, &b_L2_mu11_empty_NoAlg);
   fChain->SetBranchAddress("L2_mu13", &L2_mu13, &b_L2_mu13);
   fChain->SetBranchAddress("L2_mu15", &L2_mu15, &b_L2_mu15);
   fChain->SetBranchAddress("L2_mu15_l2cal", &L2_mu15_l2cal, &b_L2_mu15_l2cal);
   fChain->SetBranchAddress("L2_mu18", &L2_mu18, &b_L2_mu18);
   fChain->SetBranchAddress("L2_mu18_2g10_loose", &L2_mu18_2g10_loose, &b_L2_mu18_2g10_loose);
   fChain->SetBranchAddress("L2_mu18_2g10_medium", &L2_mu18_2g10_medium, &b_L2_mu18_2g10_medium);
   fChain->SetBranchAddress("L2_mu18_IDTrkNoCut_tight", &L2_mu18_IDTrkNoCut_tight, &b_L2_mu18_IDTrkNoCut_tight);
   fChain->SetBranchAddress("L2_mu18_medium", &L2_mu18_medium, &b_L2_mu18_medium);
   fChain->SetBranchAddress("L2_mu18_tight", &L2_mu18_tight, &b_L2_mu18_tight);
   fChain->SetBranchAddress("L2_mu18_tight_e7_medium1", &L2_mu18_tight_e7_medium1, &b_L2_mu18_tight_e7_medium1);
   fChain->SetBranchAddress("L2_mu18i4_tight", &L2_mu18i4_tight, &b_L2_mu18i4_tight);
   fChain->SetBranchAddress("L2_mu20i_tight_g5_loose_TauMass", &L2_mu20i_tight_g5_loose_TauMass, &b_L2_mu20i_tight_g5_loose_TauMass);
   fChain->SetBranchAddress("L2_mu20i_tight_g5_medium", &L2_mu20i_tight_g5_medium, &b_L2_mu20i_tight_g5_medium);
   fChain->SetBranchAddress("L2_mu20i_tight_g5_medium_TauMass", &L2_mu20i_tight_g5_medium_TauMass, &b_L2_mu20i_tight_g5_medium_TauMass);
   fChain->SetBranchAddress("L2_mu20it_tight", &L2_mu20it_tight, &b_L2_mu20it_tight);
   fChain->SetBranchAddress("L2_mu22_IDTrkNoCut_tight", &L2_mu22_IDTrkNoCut_tight, &b_L2_mu22_IDTrkNoCut_tight);
   fChain->SetBranchAddress("L2_mu24_g20vh_loose", &L2_mu24_g20vh_loose, &b_L2_mu24_g20vh_loose);
   fChain->SetBranchAddress("L2_mu24_g20vh_medium", &L2_mu24_g20vh_medium, &b_L2_mu24_g20vh_medium);
   fChain->SetBranchAddress("L2_mu24_j60_c4cchad_EFxe40", &L2_mu24_j60_c4cchad_EFxe40, &b_L2_mu24_j60_c4cchad_EFxe40);
   fChain->SetBranchAddress("L2_mu24_j60_c4cchad_EFxe60", &L2_mu24_j60_c4cchad_EFxe60, &b_L2_mu24_j60_c4cchad_EFxe60);
   fChain->SetBranchAddress("L2_mu24_medium", &L2_mu24_medium, &b_L2_mu24_medium);
   fChain->SetBranchAddress("L2_mu24_muCombTag_NoEF_tight", &L2_mu24_muCombTag_NoEF_tight, &b_L2_mu24_muCombTag_NoEF_tight);
   fChain->SetBranchAddress("L2_mu24_tight", &L2_mu24_tight, &b_L2_mu24_tight);
   fChain->SetBranchAddress("L2_mu24_tight_3j35_a4tchad", &L2_mu24_tight_3j35_a4tchad, &b_L2_mu24_tight_3j35_a4tchad);
   fChain->SetBranchAddress("L2_mu24_tight_EFxe40", &L2_mu24_tight_EFxe40, &b_L2_mu24_tight_EFxe40);
   fChain->SetBranchAddress("L2_mu24_tight_L2StarB", &L2_mu24_tight_L2StarB, &b_L2_mu24_tight_L2StarB);
   fChain->SetBranchAddress("L2_mu24_tight_L2StarC", &L2_mu24_tight_L2StarC, &b_L2_mu24_tight_L2StarC);
   fChain->SetBranchAddress("L2_mu24_tight_l2muonSA", &L2_mu24_tight_l2muonSA, &b_L2_mu24_tight_l2muonSA);
   fChain->SetBranchAddress("L2_mu36_tight", &L2_mu36_tight, &b_L2_mu36_tight);
   fChain->SetBranchAddress("L2_mu40_MSonly_barrel_tight", &L2_mu40_MSonly_barrel_tight, &b_L2_mu40_MSonly_barrel_tight);
   fChain->SetBranchAddress("L2_mu40_muCombTag_NoEF", &L2_mu40_muCombTag_NoEF, &b_L2_mu40_muCombTag_NoEF);
   fChain->SetBranchAddress("L2_mu40_slow_outOfTime_tight", &L2_mu40_slow_outOfTime_tight, &b_L2_mu40_slow_outOfTime_tight);
   fChain->SetBranchAddress("L2_mu40_slow_tight", &L2_mu40_slow_tight, &b_L2_mu40_slow_tight);
   fChain->SetBranchAddress("L2_mu40_tight", &L2_mu40_tight, &b_L2_mu40_tight);
   fChain->SetBranchAddress("L2_mu4T", &L2_mu4T, &b_L2_mu4T);
   fChain->SetBranchAddress("L2_mu4T_cosmic", &L2_mu4T_cosmic, &b_L2_mu4T_cosmic);
   fChain->SetBranchAddress("L2_mu4T_j60_c4cchad_xe40", &L2_mu4T_j60_c4cchad_xe40, &b_L2_mu4T_j60_c4cchad_xe40);
   fChain->SetBranchAddress("L2_mu4Ti_g20Tvh_medium", &L2_mu4Ti_g20Tvh_medium, &b_L2_mu4Ti_g20Tvh_medium);
   fChain->SetBranchAddress("L2_mu4Ti_g20Tvh_medium_TauMass", &L2_mu4Ti_g20Tvh_medium_TauMass, &b_L2_mu4Ti_g20Tvh_medium_TauMass);
   fChain->SetBranchAddress("L2_mu4Tmu6_Bmumu", &L2_mu4Tmu6_Bmumu, &b_L2_mu4Tmu6_Bmumu);
   fChain->SetBranchAddress("L2_mu4Tmu6_Bmumu_Barrel", &L2_mu4Tmu6_Bmumu_Barrel, &b_L2_mu4Tmu6_Bmumu_Barrel);
   fChain->SetBranchAddress("L2_mu4Tmu6_Bmumux", &L2_mu4Tmu6_Bmumux, &b_L2_mu4Tmu6_Bmumux);
   fChain->SetBranchAddress("L2_mu4Tmu6_Bmumux_Barrel", &L2_mu4Tmu6_Bmumux_Barrel, &b_L2_mu4Tmu6_Bmumux_Barrel);
   fChain->SetBranchAddress("L2_mu4Tmu6_DiMu", &L2_mu4Tmu6_DiMu, &b_L2_mu4Tmu6_DiMu);
   fChain->SetBranchAddress("L2_mu4Tmu6_DiMu_Barrel", &L2_mu4Tmu6_DiMu_Barrel, &b_L2_mu4Tmu6_DiMu_Barrel);
   fChain->SetBranchAddress("L2_mu4Tmu6_DiMu_noVtx_noOS", &L2_mu4Tmu6_DiMu_noVtx_noOS, &b_L2_mu4Tmu6_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("L2_mu4Tmu6_Jpsimumu", &L2_mu4Tmu6_Jpsimumu, &b_L2_mu4Tmu6_Jpsimumu);
   fChain->SetBranchAddress("L2_mu4Tmu6_Jpsimumu_Barrel", &L2_mu4Tmu6_Jpsimumu_Barrel, &b_L2_mu4Tmu6_Jpsimumu_Barrel);
   fChain->SetBranchAddress("L2_mu4Tmu6_Jpsimumu_IDTrkNoCut", &L2_mu4Tmu6_Jpsimumu_IDTrkNoCut, &b_L2_mu4Tmu6_Jpsimumu_IDTrkNoCut);
   fChain->SetBranchAddress("L2_mu4Tmu6_Upsimumu", &L2_mu4Tmu6_Upsimumu, &b_L2_mu4Tmu6_Upsimumu);
   fChain->SetBranchAddress("L2_mu4Tmu6_Upsimumu_Barrel", &L2_mu4Tmu6_Upsimumu_Barrel, &b_L2_mu4Tmu6_Upsimumu_Barrel);
   fChain->SetBranchAddress("L2_mu4_L1MU11_MSonly_cosmic", &L2_mu4_L1MU11_MSonly_cosmic, &b_L2_mu4_L1MU11_MSonly_cosmic);
   fChain->SetBranchAddress("L2_mu4_L1MU11_cosmic", &L2_mu4_L1MU11_cosmic, &b_L2_mu4_L1MU11_cosmic);
   fChain->SetBranchAddress("L2_mu4_empty_NoAlg", &L2_mu4_empty_NoAlg, &b_L2_mu4_empty_NoAlg);
   fChain->SetBranchAddress("L2_mu4_firstempty_NoAlg", &L2_mu4_firstempty_NoAlg, &b_L2_mu4_firstempty_NoAlg);
   fChain->SetBranchAddress("L2_mu4_l2cal_empty", &L2_mu4_l2cal_empty, &b_L2_mu4_l2cal_empty);
   fChain->SetBranchAddress("L2_mu4_unpaired_iso_NoAlg", &L2_mu4_unpaired_iso_NoAlg, &b_L2_mu4_unpaired_iso_NoAlg);
   fChain->SetBranchAddress("L2_mu50_MSonly_barrel_tight", &L2_mu50_MSonly_barrel_tight, &b_L2_mu50_MSonly_barrel_tight);
   fChain->SetBranchAddress("L2_mu6", &L2_mu6, &b_L2_mu6);
   fChain->SetBranchAddress("L2_mu60_slow_outOfTime_tight1", &L2_mu60_slow_outOfTime_tight1, &b_L2_mu60_slow_outOfTime_tight1);
   fChain->SetBranchAddress("L2_mu60_slow_tight1", &L2_mu60_slow_tight1, &b_L2_mu60_slow_tight1);
   fChain->SetBranchAddress("L2_mu6_Jpsimumu_tight", &L2_mu6_Jpsimumu_tight, &b_L2_mu6_Jpsimumu_tight);
   fChain->SetBranchAddress("L2_mu6_MSonly", &L2_mu6_MSonly, &b_L2_mu6_MSonly);
   fChain->SetBranchAddress("L2_mu6_Trk_Jpsi_loose", &L2_mu6_Trk_Jpsi_loose, &b_L2_mu6_Trk_Jpsi_loose);
   fChain->SetBranchAddress("L2_mu8", &L2_mu8, &b_L2_mu8);
   fChain->SetBranchAddress("L2_mu8_4j15_a4TTem", &L2_mu8_4j15_a4TTem, &b_L2_mu8_4j15_a4TTem);
   fChain->SetBranchAddress("L2_tau29T_medium1_xe35_tight", &L2_tau29T_medium1_xe35_tight, &b_L2_tau29T_medium1_xe35_tight);
   fChain->SetBranchAddress("L2_tau29T_medium1_xe40_tight", &L2_tau29T_medium1_xe40_tight, &b_L2_tau29T_medium1_xe40_tight);
   fChain->SetBranchAddress("L2_tau29Ti_medium1_llh_xe35_tight", &L2_tau29Ti_medium1_llh_xe35_tight, &b_L2_tau29Ti_medium1_llh_xe35_tight);
   fChain->SetBranchAddress("L2_tau29Ti_medium1_llh_xe40_tight", &L2_tau29Ti_medium1_llh_xe40_tight, &b_L2_tau29Ti_medium1_llh_xe40_tight);
   fChain->SetBranchAddress("L2_tau29Ti_medium1_xe35_tight", &L2_tau29Ti_medium1_xe35_tight, &b_L2_tau29Ti_medium1_xe35_tight);
   fChain->SetBranchAddress("L2_tau29Ti_medium1_xe40", &L2_tau29Ti_medium1_xe40, &b_L2_tau29Ti_medium1_xe40);
   fChain->SetBranchAddress("L2_tau29Ti_medium1_xe40_tight", &L2_tau29Ti_medium1_xe40_tight, &b_L2_tau29Ti_medium1_xe40_tight);
   fChain->SetBranchAddress("L2_tau38T_medium1_xe35_tight", &L2_tau38T_medium1_xe35_tight, &b_L2_tau38T_medium1_xe35_tight);
   fChain->SetBranchAddress("L2_tau38T_medium1_xe40_tight", &L2_tau38T_medium1_xe40_tight, &b_L2_tau38T_medium1_xe40_tight);
   fChain->SetBranchAddress("L2_xe25", &L2_xe25, &b_L2_xe25);
   fChain->SetBranchAddress("L2_xe35", &L2_xe35, &b_L2_xe35);
   fChain->SetBranchAddress("L2_xe45", &L2_xe45, &b_L2_xe45);
   fChain->SetBranchAddress("L2_xe45T", &L2_xe45T, &b_L2_xe45T);
   fChain->SetBranchAddress("L2_xe55", &L2_xe55, &b_L2_xe55);
   fChain->SetBranchAddress("L2_xe55T", &L2_xe55T, &b_L2_xe55T);
   fChain->SetBranchAddress("L2_xe55_LArNoiseBurst", &L2_xe55_LArNoiseBurst, &b_L2_xe55_LArNoiseBurst);
   fChain->SetBranchAddress("L2_xe65", &L2_xe65, &b_L2_xe65);
   fChain->SetBranchAddress("L2_xe75", &L2_xe75, &b_L2_xe75);
   fChain->SetBranchAddress("L2_xe90", &L2_xe90, &b_L2_xe90);
   fChain->SetBranchAddress("L2_xe90_tight", &L2_xe90_tight, &b_L2_xe90_tight);
   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("timestamp", &timestamp, &b_timestamp);
   fChain->SetBranchAddress("timestamp_ns", &timestamp_ns, &b_timestamp_ns);
   fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
   fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
   fChain->SetBranchAddress("detmask0", &detmask0, &b_detmask0);
   fChain->SetBranchAddress("detmask1", &detmask1, &b_detmask1);
   fChain->SetBranchAddress("actualIntPerXing", &actualIntPerXing, &b_actualIntPerXing);
   fChain->SetBranchAddress("averageIntPerXing", &averageIntPerXing, &b_averageIntPerXing);
   fChain->SetBranchAddress("pixelFlags", &pixelFlags, &b_pixelFlags);
   fChain->SetBranchAddress("sctFlags", &sctFlags, &b_sctFlags);
   fChain->SetBranchAddress("trtFlags", &trtFlags, &b_trtFlags);
   fChain->SetBranchAddress("larFlags", &larFlags, &b_larFlags);
   fChain->SetBranchAddress("tileFlags", &tileFlags, &b_tileFlags);
   fChain->SetBranchAddress("muonFlags", &muonFlags, &b_muonFlags);
   fChain->SetBranchAddress("fwdFlags", &fwdFlags, &b_fwdFlags);
   fChain->SetBranchAddress("coreFlags", &coreFlags, &b_coreFlags);
   fChain->SetBranchAddress("pixelError", &pixelError, &b_pixelError);
   fChain->SetBranchAddress("sctError", &sctError, &b_sctError);
   fChain->SetBranchAddress("trtError", &trtError, &b_trtError);
   fChain->SetBranchAddress("larError", &larError, &b_larError);
   fChain->SetBranchAddress("tileError", &tileError, &b_tileError);
   fChain->SetBranchAddress("muonError", &muonError, &b_muonError);
   fChain->SetBranchAddress("fwdError", &fwdError, &b_fwdError);
   fChain->SetBranchAddress("coreError", &coreError, &b_coreError);
   fChain->SetBranchAddress("streamDecision_Egamma", &streamDecision_Egamma, &b_streamDecision_Egamma);
   fChain->SetBranchAddress("streamDecision_Muons", &streamDecision_Muons, &b_streamDecision_Muons);
   fChain->SetBranchAddress("streamDecision_JetTauEtmiss", &streamDecision_JetTauEtmiss, &b_streamDecision_JetTauEtmiss);
   fChain->SetBranchAddress("isSimulation", &isSimulation, &b_isSimulation);
   fChain->SetBranchAddress("isCalibration", &isCalibration, &b_isCalibration);
   fChain->SetBranchAddress("isTestBeam", &isTestBeam, &b_isTestBeam);
   fChain->SetBranchAddress("StreamTagNames", &StreamTagNames, &b_StreamTagNames);
   fChain->SetBranchAddress("StreamTagTypes", &StreamTagTypes, &b_StreamTagTypes);
   fChain->SetBranchAddress("SkimDecision_name", &SkimDecision_name, &b_SkimDecision_name);
   fChain->SetBranchAddress("SkimDecision_accepted", &SkimDecision_accepted, &b_SkimDecision_accepted);
   fChain->SetBranchAddress("el_n", &el_n, &b_el_n);
   fChain->SetBranchAddress("el_E", &el_E, &b_el_E);
   fChain->SetBranchAddress("el_Et", &el_Et, &b_el_Et);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_m", &el_m, &b_el_m);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_px", &el_px, &b_el_px);
   fChain->SetBranchAddress("el_py", &el_py, &b_el_py);
   fChain->SetBranchAddress("el_pz", &el_pz, &b_el_pz);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_author", &el_author, &b_el_author);
   fChain->SetBranchAddress("el_isEM", &el_isEM, &b_el_isEM);
   fChain->SetBranchAddress("el_isEMLoose", &el_isEMLoose, &b_el_isEMLoose);
   fChain->SetBranchAddress("el_isEMMedium", &el_isEMMedium, &b_el_isEMMedium);
   fChain->SetBranchAddress("el_isEMTight", &el_isEMTight, &b_el_isEMTight);
   fChain->SetBranchAddress("el_OQ", &el_OQ, &b_el_OQ);
   fChain->SetBranchAddress("el_convFlag", &el_convFlag, &b_el_convFlag);
   fChain->SetBranchAddress("el_isConv", &el_isConv, &b_el_isConv);
   fChain->SetBranchAddress("el_nConv", &el_nConv, &b_el_nConv);
   fChain->SetBranchAddress("el_nSingleTrackConv", &el_nSingleTrackConv, &b_el_nSingleTrackConv);
   fChain->SetBranchAddress("el_nDoubleTrackConv", &el_nDoubleTrackConv, &b_el_nDoubleTrackConv);
   fChain->SetBranchAddress("el_mediumWithoutTrack", &el_mediumWithoutTrack, &b_el_mediumWithoutTrack);
   fChain->SetBranchAddress("el_mediumIsoWithoutTrack", &el_mediumIsoWithoutTrack, &b_el_mediumIsoWithoutTrack);
   fChain->SetBranchAddress("el_tightWithoutTrack", &el_tightWithoutTrack, &b_el_tightWithoutTrack);
   fChain->SetBranchAddress("el_tightIsoWithoutTrack", &el_tightIsoWithoutTrack, &b_el_tightIsoWithoutTrack);
   fChain->SetBranchAddress("el_loose", &el_loose, &b_el_loose);
   fChain->SetBranchAddress("el_looseIso", &el_looseIso, &b_el_looseIso);
   fChain->SetBranchAddress("el_medium", &el_medium, &b_el_medium);
   fChain->SetBranchAddress("el_mediumIso", &el_mediumIso, &b_el_mediumIso);
   fChain->SetBranchAddress("el_tight", &el_tight, &b_el_tight);
   fChain->SetBranchAddress("el_tightIso", &el_tightIso, &b_el_tightIso);
   fChain->SetBranchAddress("el_loosePP", &el_loosePP, &b_el_loosePP);
   fChain->SetBranchAddress("el_loosePPIso", &el_loosePPIso, &b_el_loosePPIso);
   fChain->SetBranchAddress("el_mediumPP", &el_mediumPP, &b_el_mediumPP);
   fChain->SetBranchAddress("el_mediumPPIso", &el_mediumPPIso, &b_el_mediumPPIso);
   fChain->SetBranchAddress("el_tightPP", &el_tightPP, &b_el_tightPP);
   fChain->SetBranchAddress("el_tightPPIso", &el_tightPPIso, &b_el_tightPPIso);
   fChain->SetBranchAddress("el_goodOQ", &el_goodOQ, &b_el_goodOQ);
   fChain->SetBranchAddress("el_Ethad", &el_Ethad, &b_el_Ethad);
   fChain->SetBranchAddress("el_Ethad1", &el_Ethad1, &b_el_Ethad1);
   fChain->SetBranchAddress("el_f1", &el_f1, &b_el_f1);
   fChain->SetBranchAddress("el_f1core", &el_f1core, &b_el_f1core);
   fChain->SetBranchAddress("el_Emins1", &el_Emins1, &b_el_Emins1);
   fChain->SetBranchAddress("el_fside", &el_fside, &b_el_fside);
   fChain->SetBranchAddress("el_Emax2", &el_Emax2, &b_el_Emax2);
   fChain->SetBranchAddress("el_ws3", &el_ws3, &b_el_ws3);
   fChain->SetBranchAddress("el_wstot", &el_wstot, &b_el_wstot);
   fChain->SetBranchAddress("el_emaxs1", &el_emaxs1, &b_el_emaxs1);
   fChain->SetBranchAddress("el_deltaEs", &el_deltaEs, &b_el_deltaEs);
   fChain->SetBranchAddress("el_E233", &el_E233, &b_el_E233);
   fChain->SetBranchAddress("el_E237", &el_E237, &b_el_E237);
   fChain->SetBranchAddress("el_E277", &el_E277, &b_el_E277);
   fChain->SetBranchAddress("el_weta2", &el_weta2, &b_el_weta2);
   fChain->SetBranchAddress("el_f3", &el_f3, &b_el_f3);
   fChain->SetBranchAddress("el_f3core", &el_f3core, &b_el_f3core);
   fChain->SetBranchAddress("el_rphiallcalo", &el_rphiallcalo, &b_el_rphiallcalo);
   fChain->SetBranchAddress("el_Etcone45", &el_Etcone45, &b_el_Etcone45);
   fChain->SetBranchAddress("el_Etcone15", &el_Etcone15, &b_el_Etcone15);
   fChain->SetBranchAddress("el_Etcone20", &el_Etcone20, &b_el_Etcone20);
   fChain->SetBranchAddress("el_Etcone25", &el_Etcone25, &b_el_Etcone25);
   fChain->SetBranchAddress("el_Etcone30", &el_Etcone30, &b_el_Etcone30);
   fChain->SetBranchAddress("el_Etcone35", &el_Etcone35, &b_el_Etcone35);
   fChain->SetBranchAddress("el_Etcone40", &el_Etcone40, &b_el_Etcone40);
   fChain->SetBranchAddress("el_ptcone20", &el_ptcone20, &b_el_ptcone20);
   fChain->SetBranchAddress("el_ptcone30", &el_ptcone30, &b_el_ptcone30);
   fChain->SetBranchAddress("el_ptcone40", &el_ptcone40, &b_el_ptcone40);
   fChain->SetBranchAddress("el_nucone20", &el_nucone20, &b_el_nucone20);
   fChain->SetBranchAddress("el_nucone30", &el_nucone30, &b_el_nucone30);
   fChain->SetBranchAddress("el_nucone40", &el_nucone40, &b_el_nucone40);
   fChain->SetBranchAddress("el_Etcone15_pt_corrected", &el_Etcone15_pt_corrected, &b_el_Etcone15_pt_corrected);
   fChain->SetBranchAddress("el_Etcone20_pt_corrected", &el_Etcone20_pt_corrected, &b_el_Etcone20_pt_corrected);
   fChain->SetBranchAddress("el_Etcone25_pt_corrected", &el_Etcone25_pt_corrected, &b_el_Etcone25_pt_corrected);
   fChain->SetBranchAddress("el_Etcone30_pt_corrected", &el_Etcone30_pt_corrected, &b_el_Etcone30_pt_corrected);
   fChain->SetBranchAddress("el_Etcone35_pt_corrected", &el_Etcone35_pt_corrected, &b_el_Etcone35_pt_corrected);
   fChain->SetBranchAddress("el_Etcone40_pt_corrected", &el_Etcone40_pt_corrected, &b_el_Etcone40_pt_corrected);
   fChain->SetBranchAddress("el_convanglematch", &el_convanglematch, &b_el_convanglematch);
   fChain->SetBranchAddress("el_convtrackmatch", &el_convtrackmatch, &b_el_convtrackmatch);
   fChain->SetBranchAddress("el_hasconv", &el_hasconv, &b_el_hasconv);
   fChain->SetBranchAddress("el_convvtxx", &el_convvtxx, &b_el_convvtxx);
   fChain->SetBranchAddress("el_convvtxy", &el_convvtxy, &b_el_convvtxy);
   fChain->SetBranchAddress("el_convvtxz", &el_convvtxz, &b_el_convvtxz);
   fChain->SetBranchAddress("el_Rconv", &el_Rconv, &b_el_Rconv);
   fChain->SetBranchAddress("el_zconv", &el_zconv, &b_el_zconv);
   fChain->SetBranchAddress("el_convvtxchi2", &el_convvtxchi2, &b_el_convvtxchi2);
   fChain->SetBranchAddress("el_pt1conv", &el_pt1conv, &b_el_pt1conv);
   fChain->SetBranchAddress("el_convtrk1nBLHits", &el_convtrk1nBLHits, &b_el_convtrk1nBLHits);
   fChain->SetBranchAddress("el_convtrk1nPixHits", &el_convtrk1nPixHits, &b_el_convtrk1nPixHits);
   fChain->SetBranchAddress("el_convtrk1nSCTHits", &el_convtrk1nSCTHits, &b_el_convtrk1nSCTHits);
   fChain->SetBranchAddress("el_convtrk1nTRTHits", &el_convtrk1nTRTHits, &b_el_convtrk1nTRTHits);
   fChain->SetBranchAddress("el_pt2conv", &el_pt2conv, &b_el_pt2conv);
   fChain->SetBranchAddress("el_convtrk2nBLHits", &el_convtrk2nBLHits, &b_el_convtrk2nBLHits);
   fChain->SetBranchAddress("el_convtrk2nPixHits", &el_convtrk2nPixHits, &b_el_convtrk2nPixHits);
   fChain->SetBranchAddress("el_convtrk2nSCTHits", &el_convtrk2nSCTHits, &b_el_convtrk2nSCTHits);
   fChain->SetBranchAddress("el_convtrk2nTRTHits", &el_convtrk2nTRTHits, &b_el_convtrk2nTRTHits);
   fChain->SetBranchAddress("el_ptconv", &el_ptconv, &b_el_ptconv);
   fChain->SetBranchAddress("el_pzconv", &el_pzconv, &b_el_pzconv);
   fChain->SetBranchAddress("el_pos7", &el_pos7, &b_el_pos7);
   fChain->SetBranchAddress("el_etacorrmag", &el_etacorrmag, &b_el_etacorrmag);
   fChain->SetBranchAddress("el_deltaeta1", &el_deltaeta1, &b_el_deltaeta1);
   fChain->SetBranchAddress("el_deltaeta2", &el_deltaeta2, &b_el_deltaeta2);
   fChain->SetBranchAddress("el_deltaphi2", &el_deltaphi2, &b_el_deltaphi2);
   fChain->SetBranchAddress("el_deltaphiRescaled", &el_deltaphiRescaled, &b_el_deltaphiRescaled);
   fChain->SetBranchAddress("el_deltaPhiFromLast", &el_deltaPhiFromLast, &b_el_deltaPhiFromLast);
   fChain->SetBranchAddress("el_deltaPhiRot", &el_deltaPhiRot, &b_el_deltaPhiRot);
   fChain->SetBranchAddress("el_expectHitInBLayer", &el_expectHitInBLayer, &b_el_expectHitInBLayer);
   fChain->SetBranchAddress("el_trackd0_physics", &el_trackd0_physics, &b_el_trackd0_physics);
   fChain->SetBranchAddress("el_etaSampling1", &el_etaSampling1, &b_el_etaSampling1);
   fChain->SetBranchAddress("el_reta", &el_reta, &b_el_reta);
   fChain->SetBranchAddress("el_rphi", &el_rphi, &b_el_rphi);
   fChain->SetBranchAddress("el_topoEtcone20", &el_topoEtcone20, &b_el_topoEtcone20);
   fChain->SetBranchAddress("el_topoEtcone30", &el_topoEtcone30, &b_el_topoEtcone30);
   fChain->SetBranchAddress("el_topoEtcone40", &el_topoEtcone40, &b_el_topoEtcone40);
   fChain->SetBranchAddress("el_materialTraversed", &el_materialTraversed, &b_el_materialTraversed);
   fChain->SetBranchAddress("el_EtringnoisedR03sig2", &el_EtringnoisedR03sig2, &b_el_EtringnoisedR03sig2);
   fChain->SetBranchAddress("el_EtringnoisedR03sig3", &el_EtringnoisedR03sig3, &b_el_EtringnoisedR03sig3);
   fChain->SetBranchAddress("el_EtringnoisedR03sig4", &el_EtringnoisedR03sig4, &b_el_EtringnoisedR03sig4);
   fChain->SetBranchAddress("el_isolationlikelihoodjets", &el_isolationlikelihoodjets, &b_el_isolationlikelihoodjets);
   fChain->SetBranchAddress("el_isolationlikelihoodhqelectrons", &el_isolationlikelihoodhqelectrons, &b_el_isolationlikelihoodhqelectrons);
   fChain->SetBranchAddress("el_electronweight", &el_electronweight, &b_el_electronweight);
   fChain->SetBranchAddress("el_electronbgweight", &el_electronbgweight, &b_el_electronbgweight);
   fChain->SetBranchAddress("el_softeweight", &el_softeweight, &b_el_softeweight);
   fChain->SetBranchAddress("el_softebgweight", &el_softebgweight, &b_el_softebgweight);
   fChain->SetBranchAddress("el_neuralnet", &el_neuralnet, &b_el_neuralnet);
   fChain->SetBranchAddress("el_Hmatrix", &el_Hmatrix, &b_el_Hmatrix);
   fChain->SetBranchAddress("el_Hmatrix5", &el_Hmatrix5, &b_el_Hmatrix5);
   fChain->SetBranchAddress("el_adaboost", &el_adaboost, &b_el_adaboost);
   fChain->SetBranchAddress("el_softeneuralnet", &el_softeneuralnet, &b_el_softeneuralnet);
   fChain->SetBranchAddress("el_ringernn", &el_ringernn, &b_el_ringernn);
   fChain->SetBranchAddress("el_zvertex", &el_zvertex, &b_el_zvertex);
   fChain->SetBranchAddress("el_errz", &el_errz, &b_el_errz);
   fChain->SetBranchAddress("el_etap", &el_etap, &b_el_etap);
   fChain->SetBranchAddress("el_depth", &el_depth, &b_el_depth);
   fChain->SetBranchAddress("el_refittedTrack_n", &el_refittedTrack_n, &b_el_refittedTrack_n);
   fChain->SetBranchAddress("el_refittedTrack_author", &el_refittedTrack_author, &b_el_refittedTrack_author);
   fChain->SetBranchAddress("el_refittedTrack_chi2", &el_refittedTrack_chi2, &b_el_refittedTrack_chi2);
   fChain->SetBranchAddress("el_refittedTrack_hasBrem", &el_refittedTrack_hasBrem, &b_el_refittedTrack_hasBrem);
   fChain->SetBranchAddress("el_refittedTrack_bremRadius", &el_refittedTrack_bremRadius, &b_el_refittedTrack_bremRadius);
   fChain->SetBranchAddress("el_refittedTrack_bremZ", &el_refittedTrack_bremZ, &b_el_refittedTrack_bremZ);
   fChain->SetBranchAddress("el_refittedTrack_bremRadiusErr", &el_refittedTrack_bremRadiusErr, &b_el_refittedTrack_bremRadiusErr);
   fChain->SetBranchAddress("el_refittedTrack_bremZErr", &el_refittedTrack_bremZErr, &b_el_refittedTrack_bremZErr);
   fChain->SetBranchAddress("el_refittedTrack_bremFitStatus", &el_refittedTrack_bremFitStatus, &b_el_refittedTrack_bremFitStatus);
   fChain->SetBranchAddress("el_refittedTrack_qoverp", &el_refittedTrack_qoverp, &b_el_refittedTrack_qoverp);
   fChain->SetBranchAddress("el_refittedTrack_d0", &el_refittedTrack_d0, &b_el_refittedTrack_d0);
   fChain->SetBranchAddress("el_refittedTrack_z0", &el_refittedTrack_z0, &b_el_refittedTrack_z0);
   fChain->SetBranchAddress("el_refittedTrack_theta", &el_refittedTrack_theta, &b_el_refittedTrack_theta);
   fChain->SetBranchAddress("el_refittedTrack_phi", &el_refittedTrack_phi, &b_el_refittedTrack_phi);
   fChain->SetBranchAddress("el_refittedTrack_LMqoverp", &el_refittedTrack_LMqoverp, &b_el_refittedTrack_LMqoverp);
   fChain->SetBranchAddress("el_refittedTrack_covd0", &el_refittedTrack_covd0, &b_el_refittedTrack_covd0);
   fChain->SetBranchAddress("el_refittedTrack_covz0", &el_refittedTrack_covz0, &b_el_refittedTrack_covz0);
   fChain->SetBranchAddress("el_refittedTrack_covphi", &el_refittedTrack_covphi, &b_el_refittedTrack_covphi);
   fChain->SetBranchAddress("el_refittedTrack_covtheta", &el_refittedTrack_covtheta, &b_el_refittedTrack_covtheta);
   fChain->SetBranchAddress("el_refittedTrack_covqoverp", &el_refittedTrack_covqoverp, &b_el_refittedTrack_covqoverp);
   fChain->SetBranchAddress("el_refittedTrack_covd0z0", &el_refittedTrack_covd0z0, &b_el_refittedTrack_covd0z0);
   fChain->SetBranchAddress("el_refittedTrack_covz0phi", &el_refittedTrack_covz0phi, &b_el_refittedTrack_covz0phi);
   fChain->SetBranchAddress("el_refittedTrack_covz0theta", &el_refittedTrack_covz0theta, &b_el_refittedTrack_covz0theta);
   fChain->SetBranchAddress("el_refittedTrack_covz0qoverp", &el_refittedTrack_covz0qoverp, &b_el_refittedTrack_covz0qoverp);
   fChain->SetBranchAddress("el_refittedTrack_covd0phi", &el_refittedTrack_covd0phi, &b_el_refittedTrack_covd0phi);
   fChain->SetBranchAddress("el_refittedTrack_covd0theta", &el_refittedTrack_covd0theta, &b_el_refittedTrack_covd0theta);
   fChain->SetBranchAddress("el_refittedTrack_covd0qoverp", &el_refittedTrack_covd0qoverp, &b_el_refittedTrack_covd0qoverp);
   fChain->SetBranchAddress("el_refittedTrack_covphitheta", &el_refittedTrack_covphitheta, &b_el_refittedTrack_covphitheta);
   fChain->SetBranchAddress("el_refittedTrack_covphiqoverp", &el_refittedTrack_covphiqoverp, &b_el_refittedTrack_covphiqoverp);
   fChain->SetBranchAddress("el_refittedTrack_covthetaqoverp", &el_refittedTrack_covthetaqoverp, &b_el_refittedTrack_covthetaqoverp);
   fChain->SetBranchAddress("el_refittedTrack_d0_wrtBL", &el_refittedTrack_d0_wrtBL, &b_el_refittedTrack_d0_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_z0_wrtBL", &el_refittedTrack_z0_wrtBL, &b_el_refittedTrack_z0_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_phi_wrtBL", &el_refittedTrack_phi_wrtBL, &b_el_refittedTrack_phi_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_theta_wrtBL", &el_refittedTrack_theta_wrtBL, &b_el_refittedTrack_theta_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_qoverp_wrtBL", &el_refittedTrack_qoverp_wrtBL, &b_el_refittedTrack_qoverp_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_d0_err_wrtBL", &el_refittedTrack_d0_err_wrtBL, &b_el_refittedTrack_d0_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_z0_err_wrtBL", &el_refittedTrack_z0_err_wrtBL, &b_el_refittedTrack_z0_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_phi_err_wrtBL", &el_refittedTrack_phi_err_wrtBL, &b_el_refittedTrack_phi_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_theta_err_wrtBL", &el_refittedTrack_theta_err_wrtBL, &b_el_refittedTrack_theta_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_qoverp_err_wrtBL", &el_refittedTrack_qoverp_err_wrtBL, &b_el_refittedTrack_qoverp_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_d0_z0_err_wrtBL", &el_refittedTrack_d0_z0_err_wrtBL, &b_el_refittedTrack_d0_z0_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_d0_phi_err_wrtBL", &el_refittedTrack_d0_phi_err_wrtBL, &b_el_refittedTrack_d0_phi_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_d0_theta_err_wrtBL", &el_refittedTrack_d0_theta_err_wrtBL, &b_el_refittedTrack_d0_theta_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_d0_qoverp_err_wrtBL", &el_refittedTrack_d0_qoverp_err_wrtBL, &b_el_refittedTrack_d0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_z0_phi_err_wrtBL", &el_refittedTrack_z0_phi_err_wrtBL, &b_el_refittedTrack_z0_phi_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_z0_theta_err_wrtBL", &el_refittedTrack_z0_theta_err_wrtBL, &b_el_refittedTrack_z0_theta_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_z0_qoverp_err_wrtBL", &el_refittedTrack_z0_qoverp_err_wrtBL, &b_el_refittedTrack_z0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_phi_theta_err_wrtBL", &el_refittedTrack_phi_theta_err_wrtBL, &b_el_refittedTrack_phi_theta_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_phi_qoverp_err_wrtBL", &el_refittedTrack_phi_qoverp_err_wrtBL, &b_el_refittedTrack_phi_qoverp_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_theta_qoverp_err_wrtBL", &el_refittedTrack_theta_qoverp_err_wrtBL, &b_el_refittedTrack_theta_qoverp_err_wrtBL);
   fChain->SetBranchAddress("el_Es0", &el_Es0, &b_el_Es0);
   fChain->SetBranchAddress("el_etas0", &el_etas0, &b_el_etas0);
   fChain->SetBranchAddress("el_phis0", &el_phis0, &b_el_phis0);
   fChain->SetBranchAddress("el_Es1", &el_Es1, &b_el_Es1);
   fChain->SetBranchAddress("el_etas1", &el_etas1, &b_el_etas1);
   fChain->SetBranchAddress("el_phis1", &el_phis1, &b_el_phis1);
   fChain->SetBranchAddress("el_Es2", &el_Es2, &b_el_Es2);
   fChain->SetBranchAddress("el_etas2", &el_etas2, &b_el_etas2);
   fChain->SetBranchAddress("el_phis2", &el_phis2, &b_el_phis2);
   fChain->SetBranchAddress("el_Es3", &el_Es3, &b_el_Es3);
   fChain->SetBranchAddress("el_etas3", &el_etas3, &b_el_etas3);
   fChain->SetBranchAddress("el_phis3", &el_phis3, &b_el_phis3);
   fChain->SetBranchAddress("el_E_PreSamplerB", &el_E_PreSamplerB, &b_el_E_PreSamplerB);
   fChain->SetBranchAddress("el_E_EMB1", &el_E_EMB1, &b_el_E_EMB1);
   fChain->SetBranchAddress("el_E_EMB2", &el_E_EMB2, &b_el_E_EMB2);
   fChain->SetBranchAddress("el_E_EMB3", &el_E_EMB3, &b_el_E_EMB3);
   fChain->SetBranchAddress("el_E_PreSamplerE", &el_E_PreSamplerE, &b_el_E_PreSamplerE);
   fChain->SetBranchAddress("el_E_EME1", &el_E_EME1, &b_el_E_EME1);
   fChain->SetBranchAddress("el_E_EME2", &el_E_EME2, &b_el_E_EME2);
   fChain->SetBranchAddress("el_E_EME3", &el_E_EME3, &b_el_E_EME3);
   fChain->SetBranchAddress("el_E_HEC0", &el_E_HEC0, &b_el_E_HEC0);
   fChain->SetBranchAddress("el_E_HEC1", &el_E_HEC1, &b_el_E_HEC1);
   fChain->SetBranchAddress("el_E_HEC2", &el_E_HEC2, &b_el_E_HEC2);
   fChain->SetBranchAddress("el_E_HEC3", &el_E_HEC3, &b_el_E_HEC3);
   fChain->SetBranchAddress("el_E_TileBar0", &el_E_TileBar0, &b_el_E_TileBar0);
   fChain->SetBranchAddress("el_E_TileBar1", &el_E_TileBar1, &b_el_E_TileBar1);
   fChain->SetBranchAddress("el_E_TileBar2", &el_E_TileBar2, &b_el_E_TileBar2);
   fChain->SetBranchAddress("el_E_TileGap1", &el_E_TileGap1, &b_el_E_TileGap1);
   fChain->SetBranchAddress("el_E_TileGap2", &el_E_TileGap2, &b_el_E_TileGap2);
   fChain->SetBranchAddress("el_E_TileGap3", &el_E_TileGap3, &b_el_E_TileGap3);
   fChain->SetBranchAddress("el_E_TileExt0", &el_E_TileExt0, &b_el_E_TileExt0);
   fChain->SetBranchAddress("el_E_TileExt1", &el_E_TileExt1, &b_el_E_TileExt1);
   fChain->SetBranchAddress("el_E_TileExt2", &el_E_TileExt2, &b_el_E_TileExt2);
   fChain->SetBranchAddress("el_E_FCAL0", &el_E_FCAL0, &b_el_E_FCAL0);
   fChain->SetBranchAddress("el_E_FCAL1", &el_E_FCAL1, &b_el_E_FCAL1);
   fChain->SetBranchAddress("el_E_FCAL2", &el_E_FCAL2, &b_el_E_FCAL2);
   fChain->SetBranchAddress("el_cl_E", &el_cl_E, &b_el_cl_E);
   fChain->SetBranchAddress("el_cl_pt", &el_cl_pt, &b_el_cl_pt);
   fChain->SetBranchAddress("el_cl_eta", &el_cl_eta, &b_el_cl_eta);
   fChain->SetBranchAddress("el_cl_phi", &el_cl_phi, &b_el_cl_phi);
   fChain->SetBranchAddress("el_cl_etaCalo", &el_cl_etaCalo, &b_el_cl_etaCalo);
   fChain->SetBranchAddress("el_cl_phiCalo", &el_cl_phiCalo, &b_el_cl_phiCalo);
   fChain->SetBranchAddress("el_firstEdens", &el_firstEdens, &b_el_firstEdens);
   fChain->SetBranchAddress("el_cellmaxfrac", &el_cellmaxfrac, &b_el_cellmaxfrac);
   fChain->SetBranchAddress("el_longitudinal", &el_longitudinal, &b_el_longitudinal);
   fChain->SetBranchAddress("el_secondlambda", &el_secondlambda, &b_el_secondlambda);
   fChain->SetBranchAddress("el_lateral", &el_lateral, &b_el_lateral);
   fChain->SetBranchAddress("el_secondR", &el_secondR, &b_el_secondR);
   fChain->SetBranchAddress("el_centerlambda", &el_centerlambda, &b_el_centerlambda);
   fChain->SetBranchAddress("el_rawcl_Es0", &el_rawcl_Es0, &b_el_rawcl_Es0);
   fChain->SetBranchAddress("el_rawcl_etas0", &el_rawcl_etas0, &b_el_rawcl_etas0);
   fChain->SetBranchAddress("el_rawcl_phis0", &el_rawcl_phis0, &b_el_rawcl_phis0);
   fChain->SetBranchAddress("el_rawcl_Es1", &el_rawcl_Es1, &b_el_rawcl_Es1);
   fChain->SetBranchAddress("el_rawcl_etas1", &el_rawcl_etas1, &b_el_rawcl_etas1);
   fChain->SetBranchAddress("el_rawcl_phis1", &el_rawcl_phis1, &b_el_rawcl_phis1);
   fChain->SetBranchAddress("el_rawcl_Es2", &el_rawcl_Es2, &b_el_rawcl_Es2);
   fChain->SetBranchAddress("el_rawcl_etas2", &el_rawcl_etas2, &b_el_rawcl_etas2);
   fChain->SetBranchAddress("el_rawcl_phis2", &el_rawcl_phis2, &b_el_rawcl_phis2);
   fChain->SetBranchAddress("el_rawcl_Es3", &el_rawcl_Es3, &b_el_rawcl_Es3);
   fChain->SetBranchAddress("el_rawcl_etas3", &el_rawcl_etas3, &b_el_rawcl_etas3);
   fChain->SetBranchAddress("el_rawcl_phis3", &el_rawcl_phis3, &b_el_rawcl_phis3);
   fChain->SetBranchAddress("el_rawcl_E", &el_rawcl_E, &b_el_rawcl_E);
   fChain->SetBranchAddress("el_rawcl_pt", &el_rawcl_pt, &b_el_rawcl_pt);
   fChain->SetBranchAddress("el_rawcl_eta", &el_rawcl_eta, &b_el_rawcl_eta);
   fChain->SetBranchAddress("el_rawcl_phi", &el_rawcl_phi, &b_el_rawcl_phi);
   fChain->SetBranchAddress("el_trackd0", &el_trackd0, &b_el_trackd0);
   fChain->SetBranchAddress("el_trackz0", &el_trackz0, &b_el_trackz0);
   fChain->SetBranchAddress("el_trackphi", &el_trackphi, &b_el_trackphi);
   fChain->SetBranchAddress("el_tracktheta", &el_tracktheta, &b_el_tracktheta);
   fChain->SetBranchAddress("el_trackqoverp", &el_trackqoverp, &b_el_trackqoverp);
   fChain->SetBranchAddress("el_trackpt", &el_trackpt, &b_el_trackpt);
   fChain->SetBranchAddress("el_tracketa", &el_tracketa, &b_el_tracketa);
   fChain->SetBranchAddress("el_trackcov_d0", &el_trackcov_d0, &b_el_trackcov_d0);
   fChain->SetBranchAddress("el_trackcov_z0", &el_trackcov_z0, &b_el_trackcov_z0);
   fChain->SetBranchAddress("el_trackcov_phi", &el_trackcov_phi, &b_el_trackcov_phi);
   fChain->SetBranchAddress("el_trackcov_theta", &el_trackcov_theta, &b_el_trackcov_theta);
   fChain->SetBranchAddress("el_trackcov_qoverp", &el_trackcov_qoverp, &b_el_trackcov_qoverp);
   fChain->SetBranchAddress("el_trackcov_d0_z0", &el_trackcov_d0_z0, &b_el_trackcov_d0_z0);
   fChain->SetBranchAddress("el_trackcov_d0_phi", &el_trackcov_d0_phi, &b_el_trackcov_d0_phi);
   fChain->SetBranchAddress("el_trackcov_d0_theta", &el_trackcov_d0_theta, &b_el_trackcov_d0_theta);
   fChain->SetBranchAddress("el_trackcov_d0_qoverp", &el_trackcov_d0_qoverp, &b_el_trackcov_d0_qoverp);
   fChain->SetBranchAddress("el_trackcov_z0_phi", &el_trackcov_z0_phi, &b_el_trackcov_z0_phi);
   fChain->SetBranchAddress("el_trackcov_z0_theta", &el_trackcov_z0_theta, &b_el_trackcov_z0_theta);
   fChain->SetBranchAddress("el_trackcov_z0_qoverp", &el_trackcov_z0_qoverp, &b_el_trackcov_z0_qoverp);
   fChain->SetBranchAddress("el_trackcov_phi_theta", &el_trackcov_phi_theta, &b_el_trackcov_phi_theta);
   fChain->SetBranchAddress("el_trackcov_phi_qoverp", &el_trackcov_phi_qoverp, &b_el_trackcov_phi_qoverp);
   fChain->SetBranchAddress("el_trackcov_theta_qoverp", &el_trackcov_theta_qoverp, &b_el_trackcov_theta_qoverp);
   fChain->SetBranchAddress("el_trackfitchi2", &el_trackfitchi2, &b_el_trackfitchi2);
   fChain->SetBranchAddress("el_trackfitndof", &el_trackfitndof, &b_el_trackfitndof);
   fChain->SetBranchAddress("el_nBLHits", &el_nBLHits, &b_el_nBLHits);
   fChain->SetBranchAddress("el_nPixHits", &el_nPixHits, &b_el_nPixHits);
   fChain->SetBranchAddress("el_nSCTHits", &el_nSCTHits, &b_el_nSCTHits);
   fChain->SetBranchAddress("el_nTRTHits", &el_nTRTHits, &b_el_nTRTHits);
   fChain->SetBranchAddress("el_nTRTHighTHits", &el_nTRTHighTHits, &b_el_nTRTHighTHits);
   fChain->SetBranchAddress("el_nPixHoles", &el_nPixHoles, &b_el_nPixHoles);
   fChain->SetBranchAddress("el_nSCTHoles", &el_nSCTHoles, &b_el_nSCTHoles);
   fChain->SetBranchAddress("el_nTRTHoles", &el_nTRTHoles, &b_el_nTRTHoles);
   fChain->SetBranchAddress("el_nPixelDeadSensors", &el_nPixelDeadSensors, &b_el_nPixelDeadSensors);
   fChain->SetBranchAddress("el_nSCTDeadSensors", &el_nSCTDeadSensors, &b_el_nSCTDeadSensors);
   fChain->SetBranchAddress("el_nBLSharedHits", &el_nBLSharedHits, &b_el_nBLSharedHits);
   fChain->SetBranchAddress("el_nPixSharedHits", &el_nPixSharedHits, &b_el_nPixSharedHits);
   fChain->SetBranchAddress("el_nSCTSharedHits", &el_nSCTSharedHits, &b_el_nSCTSharedHits);
   fChain->SetBranchAddress("el_nBLayerSplitHits", &el_nBLayerSplitHits, &b_el_nBLayerSplitHits);
   fChain->SetBranchAddress("el_nPixSplitHits", &el_nPixSplitHits, &b_el_nPixSplitHits);
   fChain->SetBranchAddress("el_nBLayerOutliers", &el_nBLayerOutliers, &b_el_nBLayerOutliers);
   fChain->SetBranchAddress("el_nPixelOutliers", &el_nPixelOutliers, &b_el_nPixelOutliers);
   fChain->SetBranchAddress("el_nSCTOutliers", &el_nSCTOutliers, &b_el_nSCTOutliers);
   fChain->SetBranchAddress("el_nTRTOutliers", &el_nTRTOutliers, &b_el_nTRTOutliers);
   fChain->SetBranchAddress("el_nTRTHighTOutliers", &el_nTRTHighTOutliers, &b_el_nTRTHighTOutliers);
   fChain->SetBranchAddress("el_nContribPixelLayers", &el_nContribPixelLayers, &b_el_nContribPixelLayers);
   fChain->SetBranchAddress("el_nGangedPixels", &el_nGangedPixels, &b_el_nGangedPixels);
   fChain->SetBranchAddress("el_nGangedFlaggedFakes", &el_nGangedFlaggedFakes, &b_el_nGangedFlaggedFakes);
   fChain->SetBranchAddress("el_nPixelSpoiltHits", &el_nPixelSpoiltHits, &b_el_nPixelSpoiltHits);
   fChain->SetBranchAddress("el_nSCTDoubleHoles", &el_nSCTDoubleHoles, &b_el_nSCTDoubleHoles);
   fChain->SetBranchAddress("el_nSCTSpoiltHits", &el_nSCTSpoiltHits, &b_el_nSCTSpoiltHits);
   fChain->SetBranchAddress("el_expectBLayerHit", &el_expectBLayerHit, &b_el_expectBLayerHit);
   fChain->SetBranchAddress("el_nSiHits", &el_nSiHits, &b_el_nSiHits);
   fChain->SetBranchAddress("el_TRTHighTHitsRatio", &el_TRTHighTHitsRatio, &b_el_TRTHighTHitsRatio);
   fChain->SetBranchAddress("el_TRTHighTOutliersRatio", &el_TRTHighTOutliersRatio, &b_el_TRTHighTOutliersRatio);
   fChain->SetBranchAddress("el_pixeldEdx", &el_pixeldEdx, &b_el_pixeldEdx);
   fChain->SetBranchAddress("el_nGoodHitsPixeldEdx", &el_nGoodHitsPixeldEdx, &b_el_nGoodHitsPixeldEdx);
   fChain->SetBranchAddress("el_massPixeldEdx", &el_massPixeldEdx, &b_el_massPixeldEdx);
   fChain->SetBranchAddress("el_likelihoodsPixeldEdx", &el_likelihoodsPixeldEdx, &b_el_likelihoodsPixeldEdx);
   fChain->SetBranchAddress("el_eProbabilityComb", &el_eProbabilityComb, &b_el_eProbabilityComb);
   fChain->SetBranchAddress("el_eProbabilityHT", &el_eProbabilityHT, &b_el_eProbabilityHT);
   fChain->SetBranchAddress("el_eProbabilityToT", &el_eProbabilityToT, &b_el_eProbabilityToT);
   fChain->SetBranchAddress("el_eProbabilityBrem", &el_eProbabilityBrem, &b_el_eProbabilityBrem);
   fChain->SetBranchAddress("el_vertweight", &el_vertweight, &b_el_vertweight);
   fChain->SetBranchAddress("el_vertx", &el_vertx, &b_el_vertx);
   fChain->SetBranchAddress("el_verty", &el_verty, &b_el_verty);
   fChain->SetBranchAddress("el_vertz", &el_vertz, &b_el_vertz);
   fChain->SetBranchAddress("el_trackd0beam", &el_trackd0beam, &b_el_trackd0beam);
   fChain->SetBranchAddress("el_trackz0beam", &el_trackz0beam, &b_el_trackz0beam);
   fChain->SetBranchAddress("el_tracksigd0beam", &el_tracksigd0beam, &b_el_tracksigd0beam);
   fChain->SetBranchAddress("el_tracksigz0beam", &el_tracksigz0beam, &b_el_tracksigz0beam);
   fChain->SetBranchAddress("el_trackd0pv", &el_trackd0pv, &b_el_trackd0pv);
   fChain->SetBranchAddress("el_trackz0pv", &el_trackz0pv, &b_el_trackz0pv);
   fChain->SetBranchAddress("el_tracksigd0pv", &el_tracksigd0pv, &b_el_tracksigd0pv);
   fChain->SetBranchAddress("el_tracksigz0pv", &el_tracksigz0pv, &b_el_tracksigz0pv);
   fChain->SetBranchAddress("el_trackIPEstimate_d0_biasedpvunbiased", &el_trackIPEstimate_d0_biasedpvunbiased, &b_el_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_z0_biasedpvunbiased", &el_trackIPEstimate_z0_biasedpvunbiased, &b_el_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigd0_biasedpvunbiased", &el_trackIPEstimate_sigd0_biasedpvunbiased, &b_el_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigz0_biasedpvunbiased", &el_trackIPEstimate_sigz0_biasedpvunbiased, &b_el_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_d0_unbiasedpvunbiased", &el_trackIPEstimate_d0_unbiasedpvunbiased, &b_el_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_z0_unbiasedpvunbiased", &el_trackIPEstimate_z0_unbiasedpvunbiased, &b_el_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigd0_unbiasedpvunbiased", &el_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_el_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigz0_unbiasedpvunbiased", &el_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_el_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackd0pvunbiased", &el_trackd0pvunbiased, &b_el_trackd0pvunbiased);
   fChain->SetBranchAddress("el_trackz0pvunbiased", &el_trackz0pvunbiased, &b_el_trackz0pvunbiased);
   fChain->SetBranchAddress("el_tracksigd0pvunbiased", &el_tracksigd0pvunbiased, &b_el_tracksigd0pvunbiased);
   fChain->SetBranchAddress("el_tracksigz0pvunbiased", &el_tracksigz0pvunbiased, &b_el_tracksigz0pvunbiased);
   fChain->SetBranchAddress("el_Unrefittedtrack_d0", &el_Unrefittedtrack_d0, &b_el_Unrefittedtrack_d0);
   fChain->SetBranchAddress("el_Unrefittedtrack_z0", &el_Unrefittedtrack_z0, &b_el_Unrefittedtrack_z0);
   fChain->SetBranchAddress("el_Unrefittedtrack_phi", &el_Unrefittedtrack_phi, &b_el_Unrefittedtrack_phi);
   fChain->SetBranchAddress("el_Unrefittedtrack_theta", &el_Unrefittedtrack_theta, &b_el_Unrefittedtrack_theta);
   fChain->SetBranchAddress("el_Unrefittedtrack_qoverp", &el_Unrefittedtrack_qoverp, &b_el_Unrefittedtrack_qoverp);
   fChain->SetBranchAddress("el_Unrefittedtrack_pt", &el_Unrefittedtrack_pt, &b_el_Unrefittedtrack_pt);
   fChain->SetBranchAddress("el_Unrefittedtrack_eta", &el_Unrefittedtrack_eta, &b_el_Unrefittedtrack_eta);
   fChain->SetBranchAddress("el_theta_LM", &el_theta_LM, &b_el_theta_LM);
   fChain->SetBranchAddress("el_qoverp_LM", &el_qoverp_LM, &b_el_qoverp_LM);
   fChain->SetBranchAddress("el_locX_LM", &el_locX_LM, &b_el_locX_LM);
   fChain->SetBranchAddress("el_locY_LM", &el_locY_LM, &b_el_locY_LM);
   fChain->SetBranchAddress("el_phi_LM", &el_phi_LM, &b_el_phi_LM);
   fChain->SetBranchAddress("el_theta_err_LM", &el_theta_err_LM, &b_el_theta_err_LM);
   fChain->SetBranchAddress("el_qoverp_err_LM", &el_qoverp_err_LM, &b_el_qoverp_err_LM);
   fChain->SetBranchAddress("el_locX_err_LM", &el_locX_err_LM, &b_el_locX_err_LM);
   fChain->SetBranchAddress("el_locY_err_LM", &el_locY_err_LM, &b_el_locY_err_LM);
   fChain->SetBranchAddress("el_phi_err_LM", &el_phi_err_LM, &b_el_phi_err_LM);
   fChain->SetBranchAddress("el_hastrack", &el_hastrack, &b_el_hastrack);
   fChain->SetBranchAddress("el_deltaEmax2", &el_deltaEmax2, &b_el_deltaEmax2);
   fChain->SetBranchAddress("el_calibHitsShowerDepth", &el_calibHitsShowerDepth, &b_el_calibHitsShowerDepth);
   fChain->SetBranchAddress("el_isIso", &el_isIso, &b_el_isIso);
   fChain->SetBranchAddress("el_mvaptcone20", &el_mvaptcone20, &b_el_mvaptcone20);
   fChain->SetBranchAddress("el_mvaptcone30", &el_mvaptcone30, &b_el_mvaptcone30);
   fChain->SetBranchAddress("el_mvaptcone40", &el_mvaptcone40, &b_el_mvaptcone40);
   fChain->SetBranchAddress("el_CaloPointing_eta", &el_CaloPointing_eta, &b_el_CaloPointing_eta);
   fChain->SetBranchAddress("el_CaloPointing_sigma_eta", &el_CaloPointing_sigma_eta, &b_el_CaloPointing_sigma_eta);
   fChain->SetBranchAddress("el_CaloPointing_zvertex", &el_CaloPointing_zvertex, &b_el_CaloPointing_zvertex);
   fChain->SetBranchAddress("el_CaloPointing_sigma_zvertex", &el_CaloPointing_sigma_zvertex, &b_el_CaloPointing_sigma_zvertex);
   fChain->SetBranchAddress("el_HPV_eta", &el_HPV_eta, &b_el_HPV_eta);
   fChain->SetBranchAddress("el_HPV_sigma_eta", &el_HPV_sigma_eta, &b_el_HPV_sigma_eta);
   fChain->SetBranchAddress("el_HPV_zvertex", &el_HPV_zvertex, &b_el_HPV_zvertex);
   fChain->SetBranchAddress("el_HPV_sigma_zvertex", &el_HPV_sigma_zvertex, &b_el_HPV_sigma_zvertex);
   fChain->SetBranchAddress("el_topoEtcone60", &el_topoEtcone60, &b_el_topoEtcone60);
   fChain->SetBranchAddress("el_ES0_real", &el_ES0_real, &b_el_ES0_real);
   fChain->SetBranchAddress("el_ES1_real", &el_ES1_real, &b_el_ES1_real);
   fChain->SetBranchAddress("el_ES2_real", &el_ES2_real, &b_el_ES2_real);
   fChain->SetBranchAddress("el_ES3_real", &el_ES3_real, &b_el_ES3_real);
   fChain->SetBranchAddress("el_EcellS0", &el_EcellS0, &b_el_EcellS0);
   fChain->SetBranchAddress("el_etacellS0", &el_etacellS0, &b_el_etacellS0);
   fChain->SetBranchAddress("el_Etcone40_ED_corrected", &el_Etcone40_ED_corrected, &b_el_Etcone40_ED_corrected);
   fChain->SetBranchAddress("el_Etcone40_corrected", &el_Etcone40_corrected, &b_el_Etcone40_corrected);
   fChain->SetBranchAddress("el_topoEtcone20_corrected", &el_topoEtcone20_corrected, &b_el_topoEtcone20_corrected);
   fChain->SetBranchAddress("el_topoEtcone30_corrected", &el_topoEtcone30_corrected, &b_el_topoEtcone30_corrected);
   fChain->SetBranchAddress("el_topoEtcone40_corrected", &el_topoEtcone40_corrected, &b_el_topoEtcone40_corrected);
   fChain->SetBranchAddress("el_ED_median", &el_ED_median, &b_el_ED_median);
   fChain->SetBranchAddress("el_ED_sigma", &el_ED_sigma, &b_el_ED_sigma);
   fChain->SetBranchAddress("el_ED_Njets", &el_ED_Njets, &b_el_ED_Njets);
   fChain->SetBranchAddress("el_jet_dr", &el_jet_dr, &b_el_jet_dr);
   fChain->SetBranchAddress("el_jet_E", &el_jet_E, &b_el_jet_E);
   fChain->SetBranchAddress("el_jet_pt", &el_jet_pt, &b_el_jet_pt);
   fChain->SetBranchAddress("el_jet_m", &el_jet_m, &b_el_jet_m);
   fChain->SetBranchAddress("el_jet_eta", &el_jet_eta, &b_el_jet_eta);
   fChain->SetBranchAddress("el_jet_phi", &el_jet_phi, &b_el_jet_phi);
   fChain->SetBranchAddress("el_jet_matched", &el_jet_matched, &b_el_jet_matched);
   fChain->SetBranchAddress("el_EF_dr", &el_EF_dr, &b_el_EF_dr);
   fChain->SetBranchAddress("el_L2_dr", &el_L2_dr, &b_el_L2_dr);
   fChain->SetBranchAddress("el_L1_dr", &el_L1_dr, &b_el_L1_dr);
   fChain->SetBranchAddress("stau_candidate_n", &stau_candidate_n, &b_stau_candidate_n);
   fChain->SetBranchAddress("stau_candidate_hasRpcHits", &stau_candidate_hasRpcHits, &b_stau_candidate_hasRpcHits);
   fChain->SetBranchAddress("stau_candidate_hasTileCells", &stau_candidate_hasTileCells, &b_stau_candidate_hasTileCells);
   fChain->SetBranchAddress("stau_candidate_beta", &stau_candidate_beta, &b_stau_candidate_beta);
   fChain->SetBranchAddress("stau_candidate_ann", &stau_candidate_ann, &b_stau_candidate_ann);
   fChain->SetBranchAddress("stau_candidate_mfP_px", &stau_candidate_mfP_px, &b_stau_candidate_mfP_px);
   fChain->SetBranchAddress("stau_candidate_mfP_py", &stau_candidate_mfP_py, &b_stau_candidate_mfP_py);
   fChain->SetBranchAddress("stau_candidate_mfP_pz", &stau_candidate_mfP_pz, &b_stau_candidate_mfP_pz);
   fChain->SetBranchAddress("stau_candidate_muonP_px", &stau_candidate_muonP_px, &b_stau_candidate_muonP_px);
   fChain->SetBranchAddress("stau_candidate_muonP_py", &stau_candidate_muonP_py, &b_stau_candidate_muonP_py);
   fChain->SetBranchAddress("stau_candidate_muonP_pz", &stau_candidate_muonP_pz, &b_stau_candidate_muonP_pz);
   fChain->SetBranchAddress("stau_candidate_stauP_px", &stau_candidate_stauP_px, &b_stau_candidate_stauP_px);
   fChain->SetBranchAddress("stau_candidate_stauP_py", &stau_candidate_stauP_py, &b_stau_candidate_stauP_py);
   fChain->SetBranchAddress("stau_candidate_stauP_pz", &stau_candidate_stauP_pz, &b_stau_candidate_stauP_pz);
   fChain->SetBranchAddress("stau_candidate_idP_px", &stau_candidate_idP_px, &b_stau_candidate_idP_px);
   fChain->SetBranchAddress("stau_candidate_idP_py", &stau_candidate_idP_py, &b_stau_candidate_idP_py);
   fChain->SetBranchAddress("stau_candidate_idP_pz", &stau_candidate_idP_pz, &b_stau_candidate_idP_pz);
   fChain->SetBranchAddress("stau_candidate_BetaMeasurement_tech", &stau_candidate_BetaMeasurement_tech, &b_stau_candidate_BetaMeasurement_tech);
   fChain->SetBranchAddress("stau_candidate_BetaMeasurement_beta", &stau_candidate_BetaMeasurement_beta, &b_stau_candidate_BetaMeasurement_beta);
   fChain->SetBranchAddress("stau_candidate_BetaMeasurement_chi2", &stau_candidate_BetaMeasurement_chi2, &b_stau_candidate_BetaMeasurement_chi2);
   fChain->SetBranchAddress("stau_candidate_BetaMeasurement_dof", &stau_candidate_BetaMeasurement_dof, &b_stau_candidate_BetaMeasurement_dof);
   fChain->SetBranchAddress("stau_candidate_BetaMeasurement_avg", &stau_candidate_BetaMeasurement_avg, &b_stau_candidate_BetaMeasurement_avg);
   fChain->SetBranchAddress("stau_candidate_BetaMeasurement_rms", &stau_candidate_BetaMeasurement_rms, &b_stau_candidate_BetaMeasurement_rms);
   fChain->SetBranchAddress("stau_candidate_BetaMeasurement_contr_idx", &stau_candidate_BetaMeasurement_contr_idx, &b_stau_candidate_BetaMeasurement_contr_idx);
   fChain->SetBranchAddress("stau_candidate_BetaMeasurement_contr_tech", &stau_candidate_BetaMeasurement_contr_tech, &b_stau_candidate_BetaMeasurement_contr_tech);
   fChain->SetBranchAddress("stau_candidate_BetaMeasurement_contr_chi2", &stau_candidate_BetaMeasurement_contr_chi2, &b_stau_candidate_BetaMeasurement_contr_chi2);
   fChain->SetBranchAddress("stau_candidate_BetaMeasurement_contr_dof", &stau_candidate_BetaMeasurement_contr_dof, &b_stau_candidate_BetaMeasurement_contr_dof);
   fChain->SetBranchAddress("stau_candidate_StauHit_id", &stau_candidate_StauHit_id, &b_stau_candidate_StauHit_id);
   fChain->SetBranchAddress("stau_candidate_StauHit_eTech", &stau_candidate_StauHit_eTech, &b_stau_candidate_StauHit_eTech);
   fChain->SetBranchAddress("stau_candidate_StauHit_isEta", &stau_candidate_StauHit_isEta, &b_stau_candidate_StauHit_isEta);
   fChain->SetBranchAddress("stau_candidate_StauHit_mToF", &stau_candidate_StauHit_mToF, &b_stau_candidate_StauHit_mToF);
   fChain->SetBranchAddress("stau_candidate_StauHit_x", &stau_candidate_StauHit_x, &b_stau_candidate_StauHit_x);
   fChain->SetBranchAddress("stau_candidate_StauHit_y", &stau_candidate_StauHit_y, &b_stau_candidate_StauHit_y);
   fChain->SetBranchAddress("stau_candidate_StauHit_z", &stau_candidate_StauHit_z, &b_stau_candidate_StauHit_z);
   fChain->SetBranchAddress("stau_candidate_StauHit_e", &stau_candidate_StauHit_e, &b_stau_candidate_StauHit_e);
   fChain->SetBranchAddress("stau_candidate_StauHit_error", &stau_candidate_StauHit_error, &b_stau_candidate_StauHit_error);
   fChain->SetBranchAddress("stau_candidate_StauHit_shift", &stau_candidate_StauHit_shift, &b_stau_candidate_StauHit_shift);
   fChain->SetBranchAddress("mu_lowbeta_stau_n", &mu_lowbeta_stau_n, &b_mu_lowbeta_stau_n);
   fChain->SetBranchAddress("mu_lowbeta_stau_hasRpcHits", &mu_lowbeta_stau_hasRpcHits, &b_mu_lowbeta_stau_hasRpcHits);
   fChain->SetBranchAddress("mu_lowbeta_stau_hasTileCells", &mu_lowbeta_stau_hasTileCells, &b_mu_lowbeta_stau_hasTileCells);
   fChain->SetBranchAddress("mu_lowbeta_stau_beta", &mu_lowbeta_stau_beta, &b_mu_lowbeta_stau_beta);
   fChain->SetBranchAddress("mu_lowbeta_stau_ann", &mu_lowbeta_stau_ann, &b_mu_lowbeta_stau_ann);
   fChain->SetBranchAddress("mu_lowbeta_stau_mfP_px", &mu_lowbeta_stau_mfP_px, &b_mu_lowbeta_stau_mfP_px);
   fChain->SetBranchAddress("mu_lowbeta_stau_mfP_py", &mu_lowbeta_stau_mfP_py, &b_mu_lowbeta_stau_mfP_py);
   fChain->SetBranchAddress("mu_lowbeta_stau_mfP_pz", &mu_lowbeta_stau_mfP_pz, &b_mu_lowbeta_stau_mfP_pz);
   fChain->SetBranchAddress("mu_lowbeta_stau_muonP_px", &mu_lowbeta_stau_muonP_px, &b_mu_lowbeta_stau_muonP_px);
   fChain->SetBranchAddress("mu_lowbeta_stau_muonP_py", &mu_lowbeta_stau_muonP_py, &b_mu_lowbeta_stau_muonP_py);
   fChain->SetBranchAddress("mu_lowbeta_stau_muonP_pz", &mu_lowbeta_stau_muonP_pz, &b_mu_lowbeta_stau_muonP_pz);
   fChain->SetBranchAddress("mu_lowbeta_stau_stauP_px", &mu_lowbeta_stau_stauP_px, &b_mu_lowbeta_stau_stauP_px);
   fChain->SetBranchAddress("mu_lowbeta_stau_stauP_py", &mu_lowbeta_stau_stauP_py, &b_mu_lowbeta_stau_stauP_py);
   fChain->SetBranchAddress("mu_lowbeta_stau_stauP_pz", &mu_lowbeta_stau_stauP_pz, &b_mu_lowbeta_stau_stauP_pz);
   fChain->SetBranchAddress("mu_lowbeta_stau_idP_px", &mu_lowbeta_stau_idP_px, &b_mu_lowbeta_stau_idP_px);
   fChain->SetBranchAddress("mu_lowbeta_stau_idP_py", &mu_lowbeta_stau_idP_py, &b_mu_lowbeta_stau_idP_py);
   fChain->SetBranchAddress("mu_lowbeta_stau_idP_pz", &mu_lowbeta_stau_idP_pz, &b_mu_lowbeta_stau_idP_pz);
   fChain->SetBranchAddress("mu_lowbeta_stau_BetaMeasurement_tech", &mu_lowbeta_stau_BetaMeasurement_tech, &b_mu_lowbeta_stau_BetaMeasurement_tech);
   fChain->SetBranchAddress("mu_lowbeta_stau_BetaMeasurement_beta", &mu_lowbeta_stau_BetaMeasurement_beta, &b_mu_lowbeta_stau_BetaMeasurement_beta);
   fChain->SetBranchAddress("mu_lowbeta_stau_BetaMeasurement_chi2", &mu_lowbeta_stau_BetaMeasurement_chi2, &b_mu_lowbeta_stau_BetaMeasurement_chi2);
   fChain->SetBranchAddress("mu_lowbeta_stau_BetaMeasurement_dof", &mu_lowbeta_stau_BetaMeasurement_dof, &b_mu_lowbeta_stau_BetaMeasurement_dof);
   fChain->SetBranchAddress("mu_lowbeta_stau_BetaMeasurement_avg", &mu_lowbeta_stau_BetaMeasurement_avg, &b_mu_lowbeta_stau_BetaMeasurement_avg);
   fChain->SetBranchAddress("mu_lowbeta_stau_BetaMeasurement_rms", &mu_lowbeta_stau_BetaMeasurement_rms, &b_mu_lowbeta_stau_BetaMeasurement_rms);
   fChain->SetBranchAddress("mu_lowbeta_stau_BetaMeasurement_contr_idx", &mu_lowbeta_stau_BetaMeasurement_contr_idx, &b_mu_lowbeta_stau_BetaMeasurement_contr_idx);
   fChain->SetBranchAddress("mu_lowbeta_stau_BetaMeasurement_contr_tech", &mu_lowbeta_stau_BetaMeasurement_contr_tech, &b_mu_lowbeta_stau_BetaMeasurement_contr_tech);
   fChain->SetBranchAddress("mu_lowbeta_stau_BetaMeasurement_contr_chi2", &mu_lowbeta_stau_BetaMeasurement_contr_chi2, &b_mu_lowbeta_stau_BetaMeasurement_contr_chi2);
   fChain->SetBranchAddress("mu_lowbeta_stau_BetaMeasurement_contr_dof", &mu_lowbeta_stau_BetaMeasurement_contr_dof, &b_mu_lowbeta_stau_BetaMeasurement_contr_dof);
   fChain->SetBranchAddress("mu_lowbeta_stau_StauHit_id", &mu_lowbeta_stau_StauHit_id, &b_mu_lowbeta_stau_StauHit_id);
   fChain->SetBranchAddress("mu_lowbeta_stau_StauHit_eTech", &mu_lowbeta_stau_StauHit_eTech, &b_mu_lowbeta_stau_StauHit_eTech);
   fChain->SetBranchAddress("mu_lowbeta_stau_StauHit_isEta", &mu_lowbeta_stau_StauHit_isEta, &b_mu_lowbeta_stau_StauHit_isEta);
   fChain->SetBranchAddress("mu_lowbeta_stau_StauHit_mToF", &mu_lowbeta_stau_StauHit_mToF, &b_mu_lowbeta_stau_StauHit_mToF);
   fChain->SetBranchAddress("mu_lowbeta_stau_StauHit_x", &mu_lowbeta_stau_StauHit_x, &b_mu_lowbeta_stau_StauHit_x);
   fChain->SetBranchAddress("mu_lowbeta_stau_StauHit_y", &mu_lowbeta_stau_StauHit_y, &b_mu_lowbeta_stau_StauHit_y);
   fChain->SetBranchAddress("mu_lowbeta_stau_StauHit_z", &mu_lowbeta_stau_StauHit_z, &b_mu_lowbeta_stau_StauHit_z);
   fChain->SetBranchAddress("mu_lowbeta_stau_StauHit_e", &mu_lowbeta_stau_StauHit_e, &b_mu_lowbeta_stau_StauHit_e);
   fChain->SetBranchAddress("mu_lowbeta_stau_StauHit_error", &mu_lowbeta_stau_StauHit_error, &b_mu_lowbeta_stau_StauHit_error);
   fChain->SetBranchAddress("mu_lowbeta_stau_StauHit_shift", &mu_lowbeta_stau_StauHit_shift, &b_mu_lowbeta_stau_StauHit_shift);
   fChain->SetBranchAddress("mu_lowbeta_cont_n", &mu_lowbeta_cont_n, &b_mu_lowbeta_cont_n);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_beta", &mu_lowbeta_cont_mdt_beta, &b_mu_lowbeta_cont_mdt_beta);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_chi2", &mu_lowbeta_cont_mdt_chi2, &b_mu_lowbeta_cont_mdt_chi2);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_betaerror", &mu_lowbeta_cont_mdt_betaerror, &b_mu_lowbeta_cont_mdt_betaerror);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_nhits", &mu_lowbeta_cont_mdt_nhits, &b_mu_lowbeta_cont_mdt_nhits);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_hit_id", &mu_lowbeta_cont_mdt_hit_id, &b_mu_lowbeta_cont_mdt_hit_id);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_hit_x", &mu_lowbeta_cont_mdt_hit_x, &b_mu_lowbeta_cont_mdt_hit_x);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_hit_y", &mu_lowbeta_cont_mdt_hit_y, &b_mu_lowbeta_cont_mdt_hit_y);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_hit_z", &mu_lowbeta_cont_mdt_hit_z, &b_mu_lowbeta_cont_mdt_hit_z);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_hit_t", &mu_lowbeta_cont_mdt_hit_t, &b_mu_lowbeta_cont_mdt_hit_t);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_hit_error", &mu_lowbeta_cont_mdt_hit_error, &b_mu_lowbeta_cont_mdt_hit_error);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_hit_proptime", &mu_lowbeta_cont_mdt_hit_proptime, &b_mu_lowbeta_cont_mdt_hit_proptime);
   fChain->SetBranchAddress("mu_lowbeta_cont_mdt_hit_shift", &mu_lowbeta_cont_mdt_hit_shift, &b_mu_lowbeta_cont_mdt_hit_shift);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_beta", &mu_lowbeta_cont_rpc_beta, &b_mu_lowbeta_cont_rpc_beta);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_chi2", &mu_lowbeta_cont_rpc_chi2, &b_mu_lowbeta_cont_rpc_chi2);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_betaerror", &mu_lowbeta_cont_rpc_betaerror, &b_mu_lowbeta_cont_rpc_betaerror);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_nhits", &mu_lowbeta_cont_rpc_nhits, &b_mu_lowbeta_cont_rpc_nhits);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_hit_id", &mu_lowbeta_cont_rpc_hit_id, &b_mu_lowbeta_cont_rpc_hit_id);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_hit_x", &mu_lowbeta_cont_rpc_hit_x, &b_mu_lowbeta_cont_rpc_hit_x);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_hit_y", &mu_lowbeta_cont_rpc_hit_y, &b_mu_lowbeta_cont_rpc_hit_y);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_hit_z", &mu_lowbeta_cont_rpc_hit_z, &b_mu_lowbeta_cont_rpc_hit_z);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_hit_t", &mu_lowbeta_cont_rpc_hit_t, &b_mu_lowbeta_cont_rpc_hit_t);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_hit_error", &mu_lowbeta_cont_rpc_hit_error, &b_mu_lowbeta_cont_rpc_hit_error);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_hit_proptime", &mu_lowbeta_cont_rpc_hit_proptime, &b_mu_lowbeta_cont_rpc_hit_proptime);
   fChain->SetBranchAddress("mu_lowbeta_cont_rpc_hit_shift", &mu_lowbeta_cont_rpc_hit_shift, &b_mu_lowbeta_cont_rpc_hit_shift);
   fChain->SetBranchAddress("mu_lowbeta_cont_calo_nhits", &mu_lowbeta_cont_calo_nhits, &b_mu_lowbeta_cont_calo_nhits);
   fChain->SetBranchAddress("mu_lowbeta_cont_calo_hit_id", &mu_lowbeta_cont_calo_hit_id, &b_mu_lowbeta_cont_calo_hit_id);
   fChain->SetBranchAddress("mu_lowbeta_cont_calo_hit_x", &mu_lowbeta_cont_calo_hit_x, &b_mu_lowbeta_cont_calo_hit_x);
   fChain->SetBranchAddress("mu_lowbeta_cont_calo_hit_y", &mu_lowbeta_cont_calo_hit_y, &b_mu_lowbeta_cont_calo_hit_y);
   fChain->SetBranchAddress("mu_lowbeta_cont_calo_hit_z", &mu_lowbeta_cont_calo_hit_z, &b_mu_lowbeta_cont_calo_hit_z);
   fChain->SetBranchAddress("mu_lowbeta_cont_calo_hit_t", &mu_lowbeta_cont_calo_hit_t, &b_mu_lowbeta_cont_calo_hit_t);
   fChain->SetBranchAddress("mu_lowbeta_cont_calo_hit_energy", &mu_lowbeta_cont_calo_hit_energy, &b_mu_lowbeta_cont_calo_hit_energy);
   fChain->SetBranchAddress("mu_lowbeta_cont_calo_hit_shift", &mu_lowbeta_cont_calo_hit_shift, &b_mu_lowbeta_cont_calo_hit_shift);
   fChain->SetBranchAddress("mu_lowbeta_cont_mstrk_ok", &mu_lowbeta_cont_mstrk_ok, &b_mu_lowbeta_cont_mstrk_ok);
   fChain->SetBranchAddress("mu_lowbeta_cont_mstrk_px", &mu_lowbeta_cont_mstrk_px, &b_mu_lowbeta_cont_mstrk_px);
   fChain->SetBranchAddress("mu_lowbeta_cont_mstrk_py", &mu_lowbeta_cont_mstrk_py, &b_mu_lowbeta_cont_mstrk_py);
   fChain->SetBranchAddress("mu_lowbeta_cont_mstrk_pz", &mu_lowbeta_cont_mstrk_pz, &b_mu_lowbeta_cont_mstrk_pz);
   fChain->SetBranchAddress("mu_lowbeta_cont_satrk_ok", &mu_lowbeta_cont_satrk_ok, &b_mu_lowbeta_cont_satrk_ok);
   fChain->SetBranchAddress("mu_lowbeta_cont_satrk_px", &mu_lowbeta_cont_satrk_px, &b_mu_lowbeta_cont_satrk_px);
   fChain->SetBranchAddress("mu_lowbeta_cont_satrk_py", &mu_lowbeta_cont_satrk_py, &b_mu_lowbeta_cont_satrk_py);
   fChain->SetBranchAddress("mu_lowbeta_cont_satrk_pz", &mu_lowbeta_cont_satrk_pz, &b_mu_lowbeta_cont_satrk_pz);
   fChain->SetBranchAddress("mu_lowbeta_cont_cbtrk_ok", &mu_lowbeta_cont_cbtrk_ok, &b_mu_lowbeta_cont_cbtrk_ok);
   fChain->SetBranchAddress("mu_lowbeta_cont_cbtrk_px", &mu_lowbeta_cont_cbtrk_px, &b_mu_lowbeta_cont_cbtrk_px);
   fChain->SetBranchAddress("mu_lowbeta_cont_cbtrk_py", &mu_lowbeta_cont_cbtrk_py, &b_mu_lowbeta_cont_cbtrk_py);
   fChain->SetBranchAddress("mu_lowbeta_cont_cbtrk_pz", &mu_lowbeta_cont_cbtrk_pz, &b_mu_lowbeta_cont_cbtrk_pz);
   fChain->SetBranchAddress("mu_lowbeta_cont_idtrk_ok", &mu_lowbeta_cont_idtrk_ok, &b_mu_lowbeta_cont_idtrk_ok);
   fChain->SetBranchAddress("mu_lowbeta_cont_idtrk_px", &mu_lowbeta_cont_idtrk_px, &b_mu_lowbeta_cont_idtrk_px);
   fChain->SetBranchAddress("mu_lowbeta_cont_idtrk_py", &mu_lowbeta_cont_idtrk_py, &b_mu_lowbeta_cont_idtrk_py);
   fChain->SetBranchAddress("mu_lowbeta_cont_idtrk_pz", &mu_lowbeta_cont_idtrk_pz, &b_mu_lowbeta_cont_idtrk_pz);
   fChain->SetBranchAddress("mu_muid_n", &mu_muid_n, &b_mu_muid_n);
   fChain->SetBranchAddress("mu_muid_E", &mu_muid_E, &b_mu_muid_E);
   fChain->SetBranchAddress("mu_muid_pt", &mu_muid_pt, &b_mu_muid_pt);
   fChain->SetBranchAddress("mu_muid_m", &mu_muid_m, &b_mu_muid_m);
   fChain->SetBranchAddress("mu_muid_eta", &mu_muid_eta, &b_mu_muid_eta);
   fChain->SetBranchAddress("mu_muid_phi", &mu_muid_phi, &b_mu_muid_phi);
   fChain->SetBranchAddress("mu_muid_px", &mu_muid_px, &b_mu_muid_px);
   fChain->SetBranchAddress("mu_muid_py", &mu_muid_py, &b_mu_muid_py);
   fChain->SetBranchAddress("mu_muid_pz", &mu_muid_pz, &b_mu_muid_pz);
   fChain->SetBranchAddress("mu_muid_charge", &mu_muid_charge, &b_mu_muid_charge);
   fChain->SetBranchAddress("mu_muid_allauthor", &mu_muid_allauthor, &b_mu_muid_allauthor);
   fChain->SetBranchAddress("mu_muid_author", &mu_muid_author, &b_mu_muid_author);
   fChain->SetBranchAddress("mu_muid_beta", &mu_muid_beta, &b_mu_muid_beta);
   fChain->SetBranchAddress("mu_muid_isMuonLikelihood", &mu_muid_isMuonLikelihood, &b_mu_muid_isMuonLikelihood);
   fChain->SetBranchAddress("mu_muid_matchchi2", &mu_muid_matchchi2, &b_mu_muid_matchchi2);
   fChain->SetBranchAddress("mu_muid_matchndof", &mu_muid_matchndof, &b_mu_muid_matchndof);
   fChain->SetBranchAddress("mu_muid_etcone20", &mu_muid_etcone20, &b_mu_muid_etcone20);
   fChain->SetBranchAddress("mu_muid_etcone30", &mu_muid_etcone30, &b_mu_muid_etcone30);
   fChain->SetBranchAddress("mu_muid_etcone40", &mu_muid_etcone40, &b_mu_muid_etcone40);
   fChain->SetBranchAddress("mu_muid_nucone20", &mu_muid_nucone20, &b_mu_muid_nucone20);
   fChain->SetBranchAddress("mu_muid_nucone30", &mu_muid_nucone30, &b_mu_muid_nucone30);
   fChain->SetBranchAddress("mu_muid_nucone40", &mu_muid_nucone40, &b_mu_muid_nucone40);
   fChain->SetBranchAddress("mu_muid_ptcone20", &mu_muid_ptcone20, &b_mu_muid_ptcone20);
   fChain->SetBranchAddress("mu_muid_ptcone30", &mu_muid_ptcone30, &b_mu_muid_ptcone30);
   fChain->SetBranchAddress("mu_muid_ptcone40", &mu_muid_ptcone40, &b_mu_muid_ptcone40);
   fChain->SetBranchAddress("mu_muid_etconeNoEm10", &mu_muid_etconeNoEm10, &b_mu_muid_etconeNoEm10);
   fChain->SetBranchAddress("mu_muid_etconeNoEm20", &mu_muid_etconeNoEm20, &b_mu_muid_etconeNoEm20);
   fChain->SetBranchAddress("mu_muid_etconeNoEm30", &mu_muid_etconeNoEm30, &b_mu_muid_etconeNoEm30);
   fChain->SetBranchAddress("mu_muid_etconeNoEm40", &mu_muid_etconeNoEm40, &b_mu_muid_etconeNoEm40);
   fChain->SetBranchAddress("mu_muid_scatteringCurvatureSignificance", &mu_muid_scatteringCurvatureSignificance, &b_mu_muid_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("mu_muid_scatteringNeighbourSignificance", &mu_muid_scatteringNeighbourSignificance, &b_mu_muid_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("mu_muid_momentumBalanceSignificance", &mu_muid_momentumBalanceSignificance, &b_mu_muid_momentumBalanceSignificance);
   fChain->SetBranchAddress("mu_muid_energyLossPar", &mu_muid_energyLossPar, &b_mu_muid_energyLossPar);
   fChain->SetBranchAddress("mu_muid_energyLossErr", &mu_muid_energyLossErr, &b_mu_muid_energyLossErr);
   fChain->SetBranchAddress("mu_muid_etCore", &mu_muid_etCore, &b_mu_muid_etCore);
   fChain->SetBranchAddress("mu_muid_energyLossType", &mu_muid_energyLossType, &b_mu_muid_energyLossType);
   fChain->SetBranchAddress("mu_muid_caloMuonIdTag", &mu_muid_caloMuonIdTag, &b_mu_muid_caloMuonIdTag);
   fChain->SetBranchAddress("mu_muid_caloLRLikelihood", &mu_muid_caloLRLikelihood, &b_mu_muid_caloLRLikelihood);
   fChain->SetBranchAddress("mu_muid_bestMatch", &mu_muid_bestMatch, &b_mu_muid_bestMatch);
   fChain->SetBranchAddress("mu_muid_isStandAloneMuon", &mu_muid_isStandAloneMuon, &b_mu_muid_isStandAloneMuon);
   fChain->SetBranchAddress("mu_muid_isCombinedMuon", &mu_muid_isCombinedMuon, &b_mu_muid_isCombinedMuon);
   fChain->SetBranchAddress("mu_muid_isLowPtReconstructedMuon", &mu_muid_isLowPtReconstructedMuon, &b_mu_muid_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_muid_isSegmentTaggedMuon", &mu_muid_isSegmentTaggedMuon, &b_mu_muid_isSegmentTaggedMuon);
   fChain->SetBranchAddress("mu_muid_isCaloMuonId", &mu_muid_isCaloMuonId, &b_mu_muid_isCaloMuonId);
   fChain->SetBranchAddress("mu_muid_alsoFoundByLowPt", &mu_muid_alsoFoundByLowPt, &b_mu_muid_alsoFoundByLowPt);
   fChain->SetBranchAddress("mu_muid_alsoFoundByCaloMuonId", &mu_muid_alsoFoundByCaloMuonId, &b_mu_muid_alsoFoundByCaloMuonId);
   fChain->SetBranchAddress("mu_muid_isSiliconAssociatedForwardMuon", &mu_muid_isSiliconAssociatedForwardMuon, &b_mu_muid_isSiliconAssociatedForwardMuon);
   fChain->SetBranchAddress("mu_muid_loose", &mu_muid_loose, &b_mu_muid_loose);
   fChain->SetBranchAddress("mu_muid_medium", &mu_muid_medium, &b_mu_muid_medium);
   fChain->SetBranchAddress("mu_muid_tight", &mu_muid_tight, &b_mu_muid_tight);
   fChain->SetBranchAddress("mu_muid_d0_exPV", &mu_muid_d0_exPV, &b_mu_muid_d0_exPV);
   fChain->SetBranchAddress("mu_muid_z0_exPV", &mu_muid_z0_exPV, &b_mu_muid_z0_exPV);
   fChain->SetBranchAddress("mu_muid_phi_exPV", &mu_muid_phi_exPV, &b_mu_muid_phi_exPV);
   fChain->SetBranchAddress("mu_muid_theta_exPV", &mu_muid_theta_exPV, &b_mu_muid_theta_exPV);
   fChain->SetBranchAddress("mu_muid_qoverp_exPV", &mu_muid_qoverp_exPV, &b_mu_muid_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cb_d0_exPV", &mu_muid_cb_d0_exPV, &b_mu_muid_cb_d0_exPV);
   fChain->SetBranchAddress("mu_muid_cb_z0_exPV", &mu_muid_cb_z0_exPV, &b_mu_muid_cb_z0_exPV);
   fChain->SetBranchAddress("mu_muid_cb_phi_exPV", &mu_muid_cb_phi_exPV, &b_mu_muid_cb_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cb_theta_exPV", &mu_muid_cb_theta_exPV, &b_mu_muid_cb_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cb_qoverp_exPV", &mu_muid_cb_qoverp_exPV, &b_mu_muid_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_id_d0_exPV", &mu_muid_id_d0_exPV, &b_mu_muid_id_d0_exPV);
   fChain->SetBranchAddress("mu_muid_id_z0_exPV", &mu_muid_id_z0_exPV, &b_mu_muid_id_z0_exPV);
   fChain->SetBranchAddress("mu_muid_id_phi_exPV", &mu_muid_id_phi_exPV, &b_mu_muid_id_phi_exPV);
   fChain->SetBranchAddress("mu_muid_id_theta_exPV", &mu_muid_id_theta_exPV, &b_mu_muid_id_theta_exPV);
   fChain->SetBranchAddress("mu_muid_id_qoverp_exPV", &mu_muid_id_qoverp_exPV, &b_mu_muid_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_me_d0_exPV", &mu_muid_me_d0_exPV, &b_mu_muid_me_d0_exPV);
   fChain->SetBranchAddress("mu_muid_me_z0_exPV", &mu_muid_me_z0_exPV, &b_mu_muid_me_z0_exPV);
   fChain->SetBranchAddress("mu_muid_me_phi_exPV", &mu_muid_me_phi_exPV, &b_mu_muid_me_phi_exPV);
   fChain->SetBranchAddress("mu_muid_me_theta_exPV", &mu_muid_me_theta_exPV, &b_mu_muid_me_theta_exPV);
   fChain->SetBranchAddress("mu_muid_me_qoverp_exPV", &mu_muid_me_qoverp_exPV, &b_mu_muid_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_ie_d0_exPV", &mu_muid_ie_d0_exPV, &b_mu_muid_ie_d0_exPV);
   fChain->SetBranchAddress("mu_muid_ie_z0_exPV", &mu_muid_ie_z0_exPV, &b_mu_muid_ie_z0_exPV);
   fChain->SetBranchAddress("mu_muid_ie_phi_exPV", &mu_muid_ie_phi_exPV, &b_mu_muid_ie_phi_exPV);
   fChain->SetBranchAddress("mu_muid_ie_theta_exPV", &mu_muid_ie_theta_exPV, &b_mu_muid_ie_theta_exPV);
   fChain->SetBranchAddress("mu_muid_ie_qoverp_exPV", &mu_muid_ie_qoverp_exPV, &b_mu_muid_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_SpaceTime_detID", &mu_muid_SpaceTime_detID, &b_mu_muid_SpaceTime_detID);
   fChain->SetBranchAddress("mu_muid_SpaceTime_t", &mu_muid_SpaceTime_t, &b_mu_muid_SpaceTime_t);
   fChain->SetBranchAddress("mu_muid_SpaceTime_tError", &mu_muid_SpaceTime_tError, &b_mu_muid_SpaceTime_tError);
   fChain->SetBranchAddress("mu_muid_SpaceTime_weight", &mu_muid_SpaceTime_weight, &b_mu_muid_SpaceTime_weight);
   fChain->SetBranchAddress("mu_muid_SpaceTime_x", &mu_muid_SpaceTime_x, &b_mu_muid_SpaceTime_x);
   fChain->SetBranchAddress("mu_muid_SpaceTime_y", &mu_muid_SpaceTime_y, &b_mu_muid_SpaceTime_y);
   fChain->SetBranchAddress("mu_muid_SpaceTime_z", &mu_muid_SpaceTime_z, &b_mu_muid_SpaceTime_z);
   fChain->SetBranchAddress("mu_muid_cov_d0_exPV", &mu_muid_cov_d0_exPV, &b_mu_muid_cov_d0_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_exPV", &mu_muid_cov_z0_exPV, &b_mu_muid_cov_z0_exPV);
   fChain->SetBranchAddress("mu_muid_cov_phi_exPV", &mu_muid_cov_phi_exPV, &b_mu_muid_cov_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cov_theta_exPV", &mu_muid_cov_theta_exPV, &b_mu_muid_cov_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_qoverp_exPV", &mu_muid_cov_qoverp_exPV, &b_mu_muid_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_z0_exPV", &mu_muid_cov_d0_z0_exPV, &b_mu_muid_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_phi_exPV", &mu_muid_cov_d0_phi_exPV, &b_mu_muid_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_theta_exPV", &mu_muid_cov_d0_theta_exPV, &b_mu_muid_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_qoverp_exPV", &mu_muid_cov_d0_qoverp_exPV, &b_mu_muid_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_phi_exPV", &mu_muid_cov_z0_phi_exPV, &b_mu_muid_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_theta_exPV", &mu_muid_cov_z0_theta_exPV, &b_mu_muid_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_qoverp_exPV", &mu_muid_cov_z0_qoverp_exPV, &b_mu_muid_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_phi_theta_exPV", &mu_muid_cov_phi_theta_exPV, &b_mu_muid_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_phi_qoverp_exPV", &mu_muid_cov_phi_qoverp_exPV, &b_mu_muid_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_theta_qoverp_exPV", &mu_muid_cov_theta_qoverp_exPV, &b_mu_muid_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_d0_exPV", &mu_muid_id_cov_d0_exPV, &b_mu_muid_id_cov_d0_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_z0_exPV", &mu_muid_id_cov_z0_exPV, &b_mu_muid_id_cov_z0_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_phi_exPV", &mu_muid_id_cov_phi_exPV, &b_mu_muid_id_cov_phi_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_theta_exPV", &mu_muid_id_cov_theta_exPV, &b_mu_muid_id_cov_theta_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_qoverp_exPV", &mu_muid_id_cov_qoverp_exPV, &b_mu_muid_id_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_d0_z0_exPV", &mu_muid_id_cov_d0_z0_exPV, &b_mu_muid_id_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_d0_phi_exPV", &mu_muid_id_cov_d0_phi_exPV, &b_mu_muid_id_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_d0_theta_exPV", &mu_muid_id_cov_d0_theta_exPV, &b_mu_muid_id_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_d0_qoverp_exPV", &mu_muid_id_cov_d0_qoverp_exPV, &b_mu_muid_id_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_z0_phi_exPV", &mu_muid_id_cov_z0_phi_exPV, &b_mu_muid_id_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_z0_theta_exPV", &mu_muid_id_cov_z0_theta_exPV, &b_mu_muid_id_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_z0_qoverp_exPV", &mu_muid_id_cov_z0_qoverp_exPV, &b_mu_muid_id_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_phi_theta_exPV", &mu_muid_id_cov_phi_theta_exPV, &b_mu_muid_id_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_phi_qoverp_exPV", &mu_muid_id_cov_phi_qoverp_exPV, &b_mu_muid_id_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_theta_qoverp_exPV", &mu_muid_id_cov_theta_qoverp_exPV, &b_mu_muid_id_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_d0_exPV", &mu_muid_me_cov_d0_exPV, &b_mu_muid_me_cov_d0_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_z0_exPV", &mu_muid_me_cov_z0_exPV, &b_mu_muid_me_cov_z0_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_phi_exPV", &mu_muid_me_cov_phi_exPV, &b_mu_muid_me_cov_phi_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_theta_exPV", &mu_muid_me_cov_theta_exPV, &b_mu_muid_me_cov_theta_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_qoverp_exPV", &mu_muid_me_cov_qoverp_exPV, &b_mu_muid_me_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_d0_z0_exPV", &mu_muid_me_cov_d0_z0_exPV, &b_mu_muid_me_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_d0_phi_exPV", &mu_muid_me_cov_d0_phi_exPV, &b_mu_muid_me_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_d0_theta_exPV", &mu_muid_me_cov_d0_theta_exPV, &b_mu_muid_me_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_d0_qoverp_exPV", &mu_muid_me_cov_d0_qoverp_exPV, &b_mu_muid_me_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_z0_phi_exPV", &mu_muid_me_cov_z0_phi_exPV, &b_mu_muid_me_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_z0_theta_exPV", &mu_muid_me_cov_z0_theta_exPV, &b_mu_muid_me_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_z0_qoverp_exPV", &mu_muid_me_cov_z0_qoverp_exPV, &b_mu_muid_me_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_phi_theta_exPV", &mu_muid_me_cov_phi_theta_exPV, &b_mu_muid_me_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_phi_qoverp_exPV", &mu_muid_me_cov_phi_qoverp_exPV, &b_mu_muid_me_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_theta_qoverp_exPV", &mu_muid_me_cov_theta_qoverp_exPV, &b_mu_muid_me_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_ms_d0", &mu_muid_ms_d0, &b_mu_muid_ms_d0);
   fChain->SetBranchAddress("mu_muid_ms_z0", &mu_muid_ms_z0, &b_mu_muid_ms_z0);
   fChain->SetBranchAddress("mu_muid_ms_phi", &mu_muid_ms_phi, &b_mu_muid_ms_phi);
   fChain->SetBranchAddress("mu_muid_ms_theta", &mu_muid_ms_theta, &b_mu_muid_ms_theta);
   fChain->SetBranchAddress("mu_muid_ms_qoverp", &mu_muid_ms_qoverp, &b_mu_muid_ms_qoverp);
   fChain->SetBranchAddress("mu_muid_id_d0", &mu_muid_id_d0, &b_mu_muid_id_d0);
   fChain->SetBranchAddress("mu_muid_id_z0", &mu_muid_id_z0, &b_mu_muid_id_z0);
   fChain->SetBranchAddress("mu_muid_id_phi", &mu_muid_id_phi, &b_mu_muid_id_phi);
   fChain->SetBranchAddress("mu_muid_id_theta", &mu_muid_id_theta, &b_mu_muid_id_theta);
   fChain->SetBranchAddress("mu_muid_id_qoverp", &mu_muid_id_qoverp, &b_mu_muid_id_qoverp);
   fChain->SetBranchAddress("mu_muid_me_d0", &mu_muid_me_d0, &b_mu_muid_me_d0);
   fChain->SetBranchAddress("mu_muid_me_z0", &mu_muid_me_z0, &b_mu_muid_me_z0);
   fChain->SetBranchAddress("mu_muid_me_phi", &mu_muid_me_phi, &b_mu_muid_me_phi);
   fChain->SetBranchAddress("mu_muid_me_theta", &mu_muid_me_theta, &b_mu_muid_me_theta);
   fChain->SetBranchAddress("mu_muid_me_qoverp", &mu_muid_me_qoverp, &b_mu_muid_me_qoverp);
   fChain->SetBranchAddress("mu_muid_ie_d0", &mu_muid_ie_d0, &b_mu_muid_ie_d0);
   fChain->SetBranchAddress("mu_muid_ie_z0", &mu_muid_ie_z0, &b_mu_muid_ie_z0);
   fChain->SetBranchAddress("mu_muid_ie_phi", &mu_muid_ie_phi, &b_mu_muid_ie_phi);
   fChain->SetBranchAddress("mu_muid_ie_theta", &mu_muid_ie_theta, &b_mu_muid_ie_theta);
   fChain->SetBranchAddress("mu_muid_ie_qoverp", &mu_muid_ie_qoverp, &b_mu_muid_ie_qoverp);
   fChain->SetBranchAddress("mu_muid_nOutliersOnTrack", &mu_muid_nOutliersOnTrack, &b_mu_muid_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_muid_nBLHits", &mu_muid_nBLHits, &b_mu_muid_nBLHits);
   fChain->SetBranchAddress("mu_muid_nPixHits", &mu_muid_nPixHits, &b_mu_muid_nPixHits);
   fChain->SetBranchAddress("mu_muid_nSCTHits", &mu_muid_nSCTHits, &b_mu_muid_nSCTHits);
   fChain->SetBranchAddress("mu_muid_nTRTHits", &mu_muid_nTRTHits, &b_mu_muid_nTRTHits);
   fChain->SetBranchAddress("mu_muid_nTRTHighTHits", &mu_muid_nTRTHighTHits, &b_mu_muid_nTRTHighTHits);
   fChain->SetBranchAddress("mu_muid_nBLSharedHits", &mu_muid_nBLSharedHits, &b_mu_muid_nBLSharedHits);
   fChain->SetBranchAddress("mu_muid_nPixSharedHits", &mu_muid_nPixSharedHits, &b_mu_muid_nPixSharedHits);
   fChain->SetBranchAddress("mu_muid_nPixHoles", &mu_muid_nPixHoles, &b_mu_muid_nPixHoles);
   fChain->SetBranchAddress("mu_muid_nSCTSharedHits", &mu_muid_nSCTSharedHits, &b_mu_muid_nSCTSharedHits);
   fChain->SetBranchAddress("mu_muid_nSCTHoles", &mu_muid_nSCTHoles, &b_mu_muid_nSCTHoles);
   fChain->SetBranchAddress("mu_muid_nTRTOutliers", &mu_muid_nTRTOutliers, &b_mu_muid_nTRTOutliers);
   fChain->SetBranchAddress("mu_muid_nTRTHighTOutliers", &mu_muid_nTRTHighTOutliers, &b_mu_muid_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_muid_nGangedPixels", &mu_muid_nGangedPixels, &b_mu_muid_nGangedPixels);
   fChain->SetBranchAddress("mu_muid_nPixelDeadSensors", &mu_muid_nPixelDeadSensors, &b_mu_muid_nPixelDeadSensors);
   fChain->SetBranchAddress("mu_muid_nSCTDeadSensors", &mu_muid_nSCTDeadSensors, &b_mu_muid_nSCTDeadSensors);
   fChain->SetBranchAddress("mu_muid_nTRTDeadStraws", &mu_muid_nTRTDeadStraws, &b_mu_muid_nTRTDeadStraws);
   fChain->SetBranchAddress("mu_muid_expectBLayerHit", &mu_muid_expectBLayerHit, &b_mu_muid_expectBLayerHit);
   fChain->SetBranchAddress("mu_muid_nMDTHits", &mu_muid_nMDTHits, &b_mu_muid_nMDTHits);
   fChain->SetBranchAddress("mu_muid_nMDTHoles", &mu_muid_nMDTHoles, &b_mu_muid_nMDTHoles);
   fChain->SetBranchAddress("mu_muid_nCSCEtaHits", &mu_muid_nCSCEtaHits, &b_mu_muid_nCSCEtaHits);
   fChain->SetBranchAddress("mu_muid_nCSCEtaHoles", &mu_muid_nCSCEtaHoles, &b_mu_muid_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_muid_nCSCUnspoiledEtaHits", &mu_muid_nCSCUnspoiledEtaHits, &b_mu_muid_nCSCUnspoiledEtaHits);
   fChain->SetBranchAddress("mu_muid_nCSCPhiHits", &mu_muid_nCSCPhiHits, &b_mu_muid_nCSCPhiHits);
   fChain->SetBranchAddress("mu_muid_nCSCPhiHoles", &mu_muid_nCSCPhiHoles, &b_mu_muid_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_muid_nRPCEtaHits", &mu_muid_nRPCEtaHits, &b_mu_muid_nRPCEtaHits);
   fChain->SetBranchAddress("mu_muid_nRPCEtaHoles", &mu_muid_nRPCEtaHoles, &b_mu_muid_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_muid_nRPCPhiHits", &mu_muid_nRPCPhiHits, &b_mu_muid_nRPCPhiHits);
   fChain->SetBranchAddress("mu_muid_nRPCPhiHoles", &mu_muid_nRPCPhiHoles, &b_mu_muid_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_muid_nTGCEtaHits", &mu_muid_nTGCEtaHits, &b_mu_muid_nTGCEtaHits);
   fChain->SetBranchAddress("mu_muid_nTGCEtaHoles", &mu_muid_nTGCEtaHoles, &b_mu_muid_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_muid_nTGCPhiHits", &mu_muid_nTGCPhiHits, &b_mu_muid_nTGCPhiHits);
   fChain->SetBranchAddress("mu_muid_nTGCPhiHoles", &mu_muid_nTGCPhiHoles, &b_mu_muid_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_muid_nprecisionLayers", &mu_muid_nprecisionLayers, &b_mu_muid_nprecisionLayers);
   fChain->SetBranchAddress("mu_muid_nprecisionHoleLayers", &mu_muid_nprecisionHoleLayers, &b_mu_muid_nprecisionHoleLayers);
   fChain->SetBranchAddress("mu_muid_nphiLayers", &mu_muid_nphiLayers, &b_mu_muid_nphiLayers);
   fChain->SetBranchAddress("mu_muid_ntrigEtaLayers", &mu_muid_ntrigEtaLayers, &b_mu_muid_ntrigEtaLayers);
   fChain->SetBranchAddress("mu_muid_nphiHoleLayers", &mu_muid_nphiHoleLayers, &b_mu_muid_nphiHoleLayers);
   fChain->SetBranchAddress("mu_muid_ntrigEtaHoleLayers", &mu_muid_ntrigEtaHoleLayers, &b_mu_muid_ntrigEtaHoleLayers);
   fChain->SetBranchAddress("mu_muid_nMDTBIHits", &mu_muid_nMDTBIHits, &b_mu_muid_nMDTBIHits);
   fChain->SetBranchAddress("mu_muid_nMDTBMHits", &mu_muid_nMDTBMHits, &b_mu_muid_nMDTBMHits);
   fChain->SetBranchAddress("mu_muid_nMDTBOHits", &mu_muid_nMDTBOHits, &b_mu_muid_nMDTBOHits);
   fChain->SetBranchAddress("mu_muid_nMDTBEEHits", &mu_muid_nMDTBEEHits, &b_mu_muid_nMDTBEEHits);
   fChain->SetBranchAddress("mu_muid_nMDTBIS78Hits", &mu_muid_nMDTBIS78Hits, &b_mu_muid_nMDTBIS78Hits);
   fChain->SetBranchAddress("mu_muid_nMDTEIHits", &mu_muid_nMDTEIHits, &b_mu_muid_nMDTEIHits);
   fChain->SetBranchAddress("mu_muid_nMDTEMHits", &mu_muid_nMDTEMHits, &b_mu_muid_nMDTEMHits);
   fChain->SetBranchAddress("mu_muid_nMDTEOHits", &mu_muid_nMDTEOHits, &b_mu_muid_nMDTEOHits);
   fChain->SetBranchAddress("mu_muid_nMDTEEHits", &mu_muid_nMDTEEHits, &b_mu_muid_nMDTEEHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer1EtaHits", &mu_muid_nRPCLayer1EtaHits, &b_mu_muid_nRPCLayer1EtaHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer2EtaHits", &mu_muid_nRPCLayer2EtaHits, &b_mu_muid_nRPCLayer2EtaHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer3EtaHits", &mu_muid_nRPCLayer3EtaHits, &b_mu_muid_nRPCLayer3EtaHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer1PhiHits", &mu_muid_nRPCLayer1PhiHits, &b_mu_muid_nRPCLayer1PhiHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer2PhiHits", &mu_muid_nRPCLayer2PhiHits, &b_mu_muid_nRPCLayer2PhiHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer3PhiHits", &mu_muid_nRPCLayer3PhiHits, &b_mu_muid_nRPCLayer3PhiHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer1EtaHits", &mu_muid_nTGCLayer1EtaHits, &b_mu_muid_nTGCLayer1EtaHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer2EtaHits", &mu_muid_nTGCLayer2EtaHits, &b_mu_muid_nTGCLayer2EtaHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer3EtaHits", &mu_muid_nTGCLayer3EtaHits, &b_mu_muid_nTGCLayer3EtaHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer4EtaHits", &mu_muid_nTGCLayer4EtaHits, &b_mu_muid_nTGCLayer4EtaHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer1PhiHits", &mu_muid_nTGCLayer1PhiHits, &b_mu_muid_nTGCLayer1PhiHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer2PhiHits", &mu_muid_nTGCLayer2PhiHits, &b_mu_muid_nTGCLayer2PhiHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer3PhiHits", &mu_muid_nTGCLayer3PhiHits, &b_mu_muid_nTGCLayer3PhiHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer4PhiHits", &mu_muid_nTGCLayer4PhiHits, &b_mu_muid_nTGCLayer4PhiHits);
   fChain->SetBranchAddress("mu_muid_barrelSectors", &mu_muid_barrelSectors, &b_mu_muid_barrelSectors);
   fChain->SetBranchAddress("mu_muid_endcapSectors", &mu_muid_endcapSectors, &b_mu_muid_endcapSectors);
   fChain->SetBranchAddress("mu_muid_trackd0", &mu_muid_trackd0, &b_mu_muid_trackd0);
   fChain->SetBranchAddress("mu_muid_trackz0", &mu_muid_trackz0, &b_mu_muid_trackz0);
   fChain->SetBranchAddress("mu_muid_trackphi", &mu_muid_trackphi, &b_mu_muid_trackphi);
   fChain->SetBranchAddress("mu_muid_tracktheta", &mu_muid_tracktheta, &b_mu_muid_tracktheta);
   fChain->SetBranchAddress("mu_muid_trackqoverp", &mu_muid_trackqoverp, &b_mu_muid_trackqoverp);
   fChain->SetBranchAddress("mu_muid_trackcov_d0", &mu_muid_trackcov_d0, &b_mu_muid_trackcov_d0);
   fChain->SetBranchAddress("mu_muid_trackcov_z0", &mu_muid_trackcov_z0, &b_mu_muid_trackcov_z0);
   fChain->SetBranchAddress("mu_muid_trackcov_phi", &mu_muid_trackcov_phi, &b_mu_muid_trackcov_phi);
   fChain->SetBranchAddress("mu_muid_trackcov_theta", &mu_muid_trackcov_theta, &b_mu_muid_trackcov_theta);
   fChain->SetBranchAddress("mu_muid_trackcov_qoverp", &mu_muid_trackcov_qoverp, &b_mu_muid_trackcov_qoverp);
   fChain->SetBranchAddress("mu_muid_trackcov_d0_z0", &mu_muid_trackcov_d0_z0, &b_mu_muid_trackcov_d0_z0);
   fChain->SetBranchAddress("mu_muid_trackcov_d0_phi", &mu_muid_trackcov_d0_phi, &b_mu_muid_trackcov_d0_phi);
   fChain->SetBranchAddress("mu_muid_trackcov_d0_theta", &mu_muid_trackcov_d0_theta, &b_mu_muid_trackcov_d0_theta);
   fChain->SetBranchAddress("mu_muid_trackcov_d0_qoverp", &mu_muid_trackcov_d0_qoverp, &b_mu_muid_trackcov_d0_qoverp);
   fChain->SetBranchAddress("mu_muid_trackcov_z0_phi", &mu_muid_trackcov_z0_phi, &b_mu_muid_trackcov_z0_phi);
   fChain->SetBranchAddress("mu_muid_trackcov_z0_theta", &mu_muid_trackcov_z0_theta, &b_mu_muid_trackcov_z0_theta);
   fChain->SetBranchAddress("mu_muid_trackcov_z0_qoverp", &mu_muid_trackcov_z0_qoverp, &b_mu_muid_trackcov_z0_qoverp);
   fChain->SetBranchAddress("mu_muid_trackcov_phi_theta", &mu_muid_trackcov_phi_theta, &b_mu_muid_trackcov_phi_theta);
   fChain->SetBranchAddress("mu_muid_trackcov_phi_qoverp", &mu_muid_trackcov_phi_qoverp, &b_mu_muid_trackcov_phi_qoverp);
   fChain->SetBranchAddress("mu_muid_trackcov_theta_qoverp", &mu_muid_trackcov_theta_qoverp, &b_mu_muid_trackcov_theta_qoverp);
   fChain->SetBranchAddress("mu_muid_trackfitchi2", &mu_muid_trackfitchi2, &b_mu_muid_trackfitchi2);
   fChain->SetBranchAddress("mu_muid_trackfitndof", &mu_muid_trackfitndof, &b_mu_muid_trackfitndof);
   fChain->SetBranchAddress("mu_muid_hastrack", &mu_muid_hastrack, &b_mu_muid_hastrack);
   fChain->SetBranchAddress("mu_muid_trackd0beam", &mu_muid_trackd0beam, &b_mu_muid_trackd0beam);
   fChain->SetBranchAddress("mu_muid_trackz0beam", &mu_muid_trackz0beam, &b_mu_muid_trackz0beam);
   fChain->SetBranchAddress("mu_muid_tracksigd0beam", &mu_muid_tracksigd0beam, &b_mu_muid_tracksigd0beam);
   fChain->SetBranchAddress("mu_muid_tracksigz0beam", &mu_muid_tracksigz0beam, &b_mu_muid_tracksigz0beam);
   fChain->SetBranchAddress("mu_muid_trackd0pv", &mu_muid_trackd0pv, &b_mu_muid_trackd0pv);
   fChain->SetBranchAddress("mu_muid_trackz0pv", &mu_muid_trackz0pv, &b_mu_muid_trackz0pv);
   fChain->SetBranchAddress("mu_muid_tracksigd0pv", &mu_muid_tracksigd0pv, &b_mu_muid_tracksigd0pv);
   fChain->SetBranchAddress("mu_muid_tracksigz0pv", &mu_muid_tracksigz0pv, &b_mu_muid_tracksigz0pv);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_d0_biasedpvunbiased", &mu_muid_trackIPEstimate_d0_biasedpvunbiased, &b_mu_muid_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_z0_biasedpvunbiased", &mu_muid_trackIPEstimate_z0_biasedpvunbiased, &b_mu_muid_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_sigd0_biasedpvunbiased", &mu_muid_trackIPEstimate_sigd0_biasedpvunbiased, &b_mu_muid_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_sigz0_biasedpvunbiased", &mu_muid_trackIPEstimate_sigz0_biasedpvunbiased, &b_mu_muid_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_d0_unbiasedpvunbiased", &mu_muid_trackIPEstimate_d0_unbiasedpvunbiased, &b_mu_muid_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_z0_unbiasedpvunbiased", &mu_muid_trackIPEstimate_z0_unbiasedpvunbiased, &b_mu_muid_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased", &mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased", &mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackd0pvunbiased", &mu_muid_trackd0pvunbiased, &b_mu_muid_trackd0pvunbiased);
   fChain->SetBranchAddress("mu_muid_trackz0pvunbiased", &mu_muid_trackz0pvunbiased, &b_mu_muid_trackz0pvunbiased);
   fChain->SetBranchAddress("mu_muid_tracksigd0pvunbiased", &mu_muid_tracksigd0pvunbiased, &b_mu_muid_tracksigd0pvunbiased);
   fChain->SetBranchAddress("mu_muid_tracksigz0pvunbiased", &mu_muid_tracksigz0pvunbiased, &b_mu_muid_tracksigz0pvunbiased);
   fChain->SetBranchAddress("mu_muid_CaloCell_sampling", &mu_muid_CaloCell_sampling, &b_mu_muid_CaloCell_sampling);
   fChain->SetBranchAddress("mu_muid_CaloCell_eta", &mu_muid_CaloCell_eta, &b_mu_muid_CaloCell_eta);
   fChain->SetBranchAddress("mu_muid_CaloCell_phi", &mu_muid_CaloCell_phi, &b_mu_muid_CaloCell_phi);
   fChain->SetBranchAddress("mu_muid_CaloCell_dr", &mu_muid_CaloCell_dr, &b_mu_muid_CaloCell_dr);
   fChain->SetBranchAddress("mu_muid_CaloCell_E", &mu_muid_CaloCell_E, &b_mu_muid_CaloCell_E);
   fChain->SetBranchAddress("mu_muid_CaloCell_t", &mu_muid_CaloCell_t, &b_mu_muid_CaloCell_t);
   fChain->SetBranchAddress("mu_muid_CaloCell_x", &mu_muid_CaloCell_x, &b_mu_muid_CaloCell_x);
   fChain->SetBranchAddress("mu_muid_CaloCell_y", &mu_muid_CaloCell_y, &b_mu_muid_CaloCell_y);
   fChain->SetBranchAddress("mu_muid_CaloCell_z", &mu_muid_CaloCell_z, &b_mu_muid_CaloCell_z);
   fChain->SetBranchAddress("mu_muid_TileBeta", &mu_muid_TileBeta, &b_mu_muid_TileBeta);
   fChain->SetBranchAddress("mu_muid_TileBetaMass", &mu_muid_TileBetaMass, &b_mu_muid_TileBetaMass);
   fChain->SetBranchAddress("mu_muid_meandADC", &mu_muid_meandADC, &b_mu_muid_meandADC);
   fChain->SetBranchAddress("mu_muid_stau_candidate_assoc_index", &mu_muid_stau_candidate_assoc_index, &b_mu_muid_stau_candidate_assoc_index);
   fChain->SetBranchAddress("mu_staco_n", &mu_staco_n, &b_mu_staco_n);
   fChain->SetBranchAddress("mu_staco_E", &mu_staco_E, &b_mu_staco_E);
   fChain->SetBranchAddress("mu_staco_pt", &mu_staco_pt, &b_mu_staco_pt);
   fChain->SetBranchAddress("mu_staco_m", &mu_staco_m, &b_mu_staco_m);
   fChain->SetBranchAddress("mu_staco_eta", &mu_staco_eta, &b_mu_staco_eta);
   fChain->SetBranchAddress("mu_staco_phi", &mu_staco_phi, &b_mu_staco_phi);
   fChain->SetBranchAddress("mu_staco_px", &mu_staco_px, &b_mu_staco_px);
   fChain->SetBranchAddress("mu_staco_py", &mu_staco_py, &b_mu_staco_py);
   fChain->SetBranchAddress("mu_staco_pz", &mu_staco_pz, &b_mu_staco_pz);
   fChain->SetBranchAddress("mu_staco_charge", &mu_staco_charge, &b_mu_staco_charge);
   fChain->SetBranchAddress("mu_staco_allauthor", &mu_staco_allauthor, &b_mu_staco_allauthor);
   fChain->SetBranchAddress("mu_staco_author", &mu_staco_author, &b_mu_staco_author);
   fChain->SetBranchAddress("mu_staco_beta", &mu_staco_beta, &b_mu_staco_beta);
   fChain->SetBranchAddress("mu_staco_isMuonLikelihood", &mu_staco_isMuonLikelihood, &b_mu_staco_isMuonLikelihood);
   fChain->SetBranchAddress("mu_staco_matchchi2", &mu_staco_matchchi2, &b_mu_staco_matchchi2);
   fChain->SetBranchAddress("mu_staco_matchndof", &mu_staco_matchndof, &b_mu_staco_matchndof);
   fChain->SetBranchAddress("mu_staco_etcone20", &mu_staco_etcone20, &b_mu_staco_etcone20);
   fChain->SetBranchAddress("mu_staco_etcone30", &mu_staco_etcone30, &b_mu_staco_etcone30);
   fChain->SetBranchAddress("mu_staco_etcone40", &mu_staco_etcone40, &b_mu_staco_etcone40);
   fChain->SetBranchAddress("mu_staco_nucone20", &mu_staco_nucone20, &b_mu_staco_nucone20);
   fChain->SetBranchAddress("mu_staco_nucone30", &mu_staco_nucone30, &b_mu_staco_nucone30);
   fChain->SetBranchAddress("mu_staco_nucone40", &mu_staco_nucone40, &b_mu_staco_nucone40);
   fChain->SetBranchAddress("mu_staco_ptcone20", &mu_staco_ptcone20, &b_mu_staco_ptcone20);
   fChain->SetBranchAddress("mu_staco_ptcone30", &mu_staco_ptcone30, &b_mu_staco_ptcone30);
   fChain->SetBranchAddress("mu_staco_ptcone40", &mu_staco_ptcone40, &b_mu_staco_ptcone40);
   fChain->SetBranchAddress("mu_staco_etconeNoEm10", &mu_staco_etconeNoEm10, &b_mu_staco_etconeNoEm10);
   fChain->SetBranchAddress("mu_staco_etconeNoEm20", &mu_staco_etconeNoEm20, &b_mu_staco_etconeNoEm20);
   fChain->SetBranchAddress("mu_staco_etconeNoEm30", &mu_staco_etconeNoEm30, &b_mu_staco_etconeNoEm30);
   fChain->SetBranchAddress("mu_staco_etconeNoEm40", &mu_staco_etconeNoEm40, &b_mu_staco_etconeNoEm40);
   fChain->SetBranchAddress("mu_staco_scatteringCurvatureSignificance", &mu_staco_scatteringCurvatureSignificance, &b_mu_staco_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("mu_staco_scatteringNeighbourSignificance", &mu_staco_scatteringNeighbourSignificance, &b_mu_staco_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("mu_staco_momentumBalanceSignificance", &mu_staco_momentumBalanceSignificance, &b_mu_staco_momentumBalanceSignificance);
   fChain->SetBranchAddress("mu_staco_energyLossPar", &mu_staco_energyLossPar, &b_mu_staco_energyLossPar);
   fChain->SetBranchAddress("mu_staco_energyLossErr", &mu_staco_energyLossErr, &b_mu_staco_energyLossErr);
   fChain->SetBranchAddress("mu_staco_etCore", &mu_staco_etCore, &b_mu_staco_etCore);
   fChain->SetBranchAddress("mu_staco_energyLossType", &mu_staco_energyLossType, &b_mu_staco_energyLossType);
   fChain->SetBranchAddress("mu_staco_caloMuonIdTag", &mu_staco_caloMuonIdTag, &b_mu_staco_caloMuonIdTag);
   fChain->SetBranchAddress("mu_staco_caloLRLikelihood", &mu_staco_caloLRLikelihood, &b_mu_staco_caloLRLikelihood);
   fChain->SetBranchAddress("mu_staco_bestMatch", &mu_staco_bestMatch, &b_mu_staco_bestMatch);
   fChain->SetBranchAddress("mu_staco_isStandAloneMuon", &mu_staco_isStandAloneMuon, &b_mu_staco_isStandAloneMuon);
   fChain->SetBranchAddress("mu_staco_isCombinedMuon", &mu_staco_isCombinedMuon, &b_mu_staco_isCombinedMuon);
   fChain->SetBranchAddress("mu_staco_isLowPtReconstructedMuon", &mu_staco_isLowPtReconstructedMuon, &b_mu_staco_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_staco_isSegmentTaggedMuon", &mu_staco_isSegmentTaggedMuon, &b_mu_staco_isSegmentTaggedMuon);
   fChain->SetBranchAddress("mu_staco_isCaloMuonId", &mu_staco_isCaloMuonId, &b_mu_staco_isCaloMuonId);
   fChain->SetBranchAddress("mu_staco_alsoFoundByLowPt", &mu_staco_alsoFoundByLowPt, &b_mu_staco_alsoFoundByLowPt);
   fChain->SetBranchAddress("mu_staco_alsoFoundByCaloMuonId", &mu_staco_alsoFoundByCaloMuonId, &b_mu_staco_alsoFoundByCaloMuonId);
   fChain->SetBranchAddress("mu_staco_isSiliconAssociatedForwardMuon", &mu_staco_isSiliconAssociatedForwardMuon, &b_mu_staco_isSiliconAssociatedForwardMuon);
   fChain->SetBranchAddress("mu_staco_loose", &mu_staco_loose, &b_mu_staco_loose);
   fChain->SetBranchAddress("mu_staco_medium", &mu_staco_medium, &b_mu_staco_medium);
   fChain->SetBranchAddress("mu_staco_tight", &mu_staco_tight, &b_mu_staco_tight);
   fChain->SetBranchAddress("mu_staco_d0_exPV", &mu_staco_d0_exPV, &b_mu_staco_d0_exPV);
   fChain->SetBranchAddress("mu_staco_z0_exPV", &mu_staco_z0_exPV, &b_mu_staco_z0_exPV);
   fChain->SetBranchAddress("mu_staco_phi_exPV", &mu_staco_phi_exPV, &b_mu_staco_phi_exPV);
   fChain->SetBranchAddress("mu_staco_theta_exPV", &mu_staco_theta_exPV, &b_mu_staco_theta_exPV);
   fChain->SetBranchAddress("mu_staco_qoverp_exPV", &mu_staco_qoverp_exPV, &b_mu_staco_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cb_d0_exPV", &mu_staco_cb_d0_exPV, &b_mu_staco_cb_d0_exPV);
   fChain->SetBranchAddress("mu_staco_cb_z0_exPV", &mu_staco_cb_z0_exPV, &b_mu_staco_cb_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cb_phi_exPV", &mu_staco_cb_phi_exPV, &b_mu_staco_cb_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cb_theta_exPV", &mu_staco_cb_theta_exPV, &b_mu_staco_cb_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cb_qoverp_exPV", &mu_staco_cb_qoverp_exPV, &b_mu_staco_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_d0_exPV", &mu_staco_id_d0_exPV, &b_mu_staco_id_d0_exPV);
   fChain->SetBranchAddress("mu_staco_id_z0_exPV", &mu_staco_id_z0_exPV, &b_mu_staco_id_z0_exPV);
   fChain->SetBranchAddress("mu_staco_id_phi_exPV", &mu_staco_id_phi_exPV, &b_mu_staco_id_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_theta_exPV", &mu_staco_id_theta_exPV, &b_mu_staco_id_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_qoverp_exPV", &mu_staco_id_qoverp_exPV, &b_mu_staco_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_d0_exPV", &mu_staco_me_d0_exPV, &b_mu_staco_me_d0_exPV);
   fChain->SetBranchAddress("mu_staco_me_z0_exPV", &mu_staco_me_z0_exPV, &b_mu_staco_me_z0_exPV);
   fChain->SetBranchAddress("mu_staco_me_phi_exPV", &mu_staco_me_phi_exPV, &b_mu_staco_me_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_theta_exPV", &mu_staco_me_theta_exPV, &b_mu_staco_me_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_qoverp_exPV", &mu_staco_me_qoverp_exPV, &b_mu_staco_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_ie_d0_exPV", &mu_staco_ie_d0_exPV, &b_mu_staco_ie_d0_exPV);
   fChain->SetBranchAddress("mu_staco_ie_z0_exPV", &mu_staco_ie_z0_exPV, &b_mu_staco_ie_z0_exPV);
   fChain->SetBranchAddress("mu_staco_ie_phi_exPV", &mu_staco_ie_phi_exPV, &b_mu_staco_ie_phi_exPV);
   fChain->SetBranchAddress("mu_staco_ie_theta_exPV", &mu_staco_ie_theta_exPV, &b_mu_staco_ie_theta_exPV);
   fChain->SetBranchAddress("mu_staco_ie_qoverp_exPV", &mu_staco_ie_qoverp_exPV, &b_mu_staco_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_SpaceTime_detID", &mu_staco_SpaceTime_detID, &b_mu_staco_SpaceTime_detID);
   fChain->SetBranchAddress("mu_staco_SpaceTime_t", &mu_staco_SpaceTime_t, &b_mu_staco_SpaceTime_t);
   fChain->SetBranchAddress("mu_staco_SpaceTime_tError", &mu_staco_SpaceTime_tError, &b_mu_staco_SpaceTime_tError);
   fChain->SetBranchAddress("mu_staco_SpaceTime_weight", &mu_staco_SpaceTime_weight, &b_mu_staco_SpaceTime_weight);
   fChain->SetBranchAddress("mu_staco_SpaceTime_x", &mu_staco_SpaceTime_x, &b_mu_staco_SpaceTime_x);
   fChain->SetBranchAddress("mu_staco_SpaceTime_y", &mu_staco_SpaceTime_y, &b_mu_staco_SpaceTime_y);
   fChain->SetBranchAddress("mu_staco_SpaceTime_z", &mu_staco_SpaceTime_z, &b_mu_staco_SpaceTime_z);
   fChain->SetBranchAddress("mu_staco_cov_d0_exPV", &mu_staco_cov_d0_exPV, &b_mu_staco_cov_d0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_exPV", &mu_staco_cov_z0_exPV, &b_mu_staco_cov_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_exPV", &mu_staco_cov_phi_exPV, &b_mu_staco_cov_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_theta_exPV", &mu_staco_cov_theta_exPV, &b_mu_staco_cov_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_qoverp_exPV", &mu_staco_cov_qoverp_exPV, &b_mu_staco_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_z0_exPV", &mu_staco_cov_d0_z0_exPV, &b_mu_staco_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_phi_exPV", &mu_staco_cov_d0_phi_exPV, &b_mu_staco_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_theta_exPV", &mu_staco_cov_d0_theta_exPV, &b_mu_staco_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_qoverp_exPV", &mu_staco_cov_d0_qoverp_exPV, &b_mu_staco_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_phi_exPV", &mu_staco_cov_z0_phi_exPV, &b_mu_staco_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_theta_exPV", &mu_staco_cov_z0_theta_exPV, &b_mu_staco_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_qoverp_exPV", &mu_staco_cov_z0_qoverp_exPV, &b_mu_staco_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_theta_exPV", &mu_staco_cov_phi_theta_exPV, &b_mu_staco_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_qoverp_exPV", &mu_staco_cov_phi_qoverp_exPV, &b_mu_staco_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_theta_qoverp_exPV", &mu_staco_cov_theta_qoverp_exPV, &b_mu_staco_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_d0_exPV", &mu_staco_id_cov_d0_exPV, &b_mu_staco_id_cov_d0_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_z0_exPV", &mu_staco_id_cov_z0_exPV, &b_mu_staco_id_cov_z0_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_phi_exPV", &mu_staco_id_cov_phi_exPV, &b_mu_staco_id_cov_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_theta_exPV", &mu_staco_id_cov_theta_exPV, &b_mu_staco_id_cov_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_qoverp_exPV", &mu_staco_id_cov_qoverp_exPV, &b_mu_staco_id_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_d0_z0_exPV", &mu_staco_id_cov_d0_z0_exPV, &b_mu_staco_id_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_d0_phi_exPV", &mu_staco_id_cov_d0_phi_exPV, &b_mu_staco_id_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_d0_theta_exPV", &mu_staco_id_cov_d0_theta_exPV, &b_mu_staco_id_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_d0_qoverp_exPV", &mu_staco_id_cov_d0_qoverp_exPV, &b_mu_staco_id_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_z0_phi_exPV", &mu_staco_id_cov_z0_phi_exPV, &b_mu_staco_id_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_z0_theta_exPV", &mu_staco_id_cov_z0_theta_exPV, &b_mu_staco_id_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_z0_qoverp_exPV", &mu_staco_id_cov_z0_qoverp_exPV, &b_mu_staco_id_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_phi_theta_exPV", &mu_staco_id_cov_phi_theta_exPV, &b_mu_staco_id_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_phi_qoverp_exPV", &mu_staco_id_cov_phi_qoverp_exPV, &b_mu_staco_id_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_theta_qoverp_exPV", &mu_staco_id_cov_theta_qoverp_exPV, &b_mu_staco_id_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_d0_exPV", &mu_staco_me_cov_d0_exPV, &b_mu_staco_me_cov_d0_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_z0_exPV", &mu_staco_me_cov_z0_exPV, &b_mu_staco_me_cov_z0_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_phi_exPV", &mu_staco_me_cov_phi_exPV, &b_mu_staco_me_cov_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_theta_exPV", &mu_staco_me_cov_theta_exPV, &b_mu_staco_me_cov_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_qoverp_exPV", &mu_staco_me_cov_qoverp_exPV, &b_mu_staco_me_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_d0_z0_exPV", &mu_staco_me_cov_d0_z0_exPV, &b_mu_staco_me_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_d0_phi_exPV", &mu_staco_me_cov_d0_phi_exPV, &b_mu_staco_me_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_d0_theta_exPV", &mu_staco_me_cov_d0_theta_exPV, &b_mu_staco_me_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_d0_qoverp_exPV", &mu_staco_me_cov_d0_qoverp_exPV, &b_mu_staco_me_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_z0_phi_exPV", &mu_staco_me_cov_z0_phi_exPV, &b_mu_staco_me_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_z0_theta_exPV", &mu_staco_me_cov_z0_theta_exPV, &b_mu_staco_me_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_z0_qoverp_exPV", &mu_staco_me_cov_z0_qoverp_exPV, &b_mu_staco_me_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_phi_theta_exPV", &mu_staco_me_cov_phi_theta_exPV, &b_mu_staco_me_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_phi_qoverp_exPV", &mu_staco_me_cov_phi_qoverp_exPV, &b_mu_staco_me_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_theta_qoverp_exPV", &mu_staco_me_cov_theta_qoverp_exPV, &b_mu_staco_me_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_ms_d0", &mu_staco_ms_d0, &b_mu_staco_ms_d0);
   fChain->SetBranchAddress("mu_staco_ms_z0", &mu_staco_ms_z0, &b_mu_staco_ms_z0);
   fChain->SetBranchAddress("mu_staco_ms_phi", &mu_staco_ms_phi, &b_mu_staco_ms_phi);
   fChain->SetBranchAddress("mu_staco_ms_theta", &mu_staco_ms_theta, &b_mu_staco_ms_theta);
   fChain->SetBranchAddress("mu_staco_ms_qoverp", &mu_staco_ms_qoverp, &b_mu_staco_ms_qoverp);
   fChain->SetBranchAddress("mu_staco_id_d0", &mu_staco_id_d0, &b_mu_staco_id_d0);
   fChain->SetBranchAddress("mu_staco_id_z0", &mu_staco_id_z0, &b_mu_staco_id_z0);
   fChain->SetBranchAddress("mu_staco_id_phi", &mu_staco_id_phi, &b_mu_staco_id_phi);
   fChain->SetBranchAddress("mu_staco_id_theta", &mu_staco_id_theta, &b_mu_staco_id_theta);
   fChain->SetBranchAddress("mu_staco_id_qoverp", &mu_staco_id_qoverp, &b_mu_staco_id_qoverp);
   fChain->SetBranchAddress("mu_staco_me_d0", &mu_staco_me_d0, &b_mu_staco_me_d0);
   fChain->SetBranchAddress("mu_staco_me_z0", &mu_staco_me_z0, &b_mu_staco_me_z0);
   fChain->SetBranchAddress("mu_staco_me_phi", &mu_staco_me_phi, &b_mu_staco_me_phi);
   fChain->SetBranchAddress("mu_staco_me_theta", &mu_staco_me_theta, &b_mu_staco_me_theta);
   fChain->SetBranchAddress("mu_staco_me_qoverp", &mu_staco_me_qoverp, &b_mu_staco_me_qoverp);
   fChain->SetBranchAddress("mu_staco_ie_d0", &mu_staco_ie_d0, &b_mu_staco_ie_d0);
   fChain->SetBranchAddress("mu_staco_ie_z0", &mu_staco_ie_z0, &b_mu_staco_ie_z0);
   fChain->SetBranchAddress("mu_staco_ie_phi", &mu_staco_ie_phi, &b_mu_staco_ie_phi);
   fChain->SetBranchAddress("mu_staco_ie_theta", &mu_staco_ie_theta, &b_mu_staco_ie_theta);
   fChain->SetBranchAddress("mu_staco_ie_qoverp", &mu_staco_ie_qoverp, &b_mu_staco_ie_qoverp);
   fChain->SetBranchAddress("mu_staco_nOutliersOnTrack", &mu_staco_nOutliersOnTrack, &b_mu_staco_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_staco_nBLHits", &mu_staco_nBLHits, &b_mu_staco_nBLHits);
   fChain->SetBranchAddress("mu_staco_nPixHits", &mu_staco_nPixHits, &b_mu_staco_nPixHits);
   fChain->SetBranchAddress("mu_staco_nSCTHits", &mu_staco_nSCTHits, &b_mu_staco_nSCTHits);
   fChain->SetBranchAddress("mu_staco_nTRTHits", &mu_staco_nTRTHits, &b_mu_staco_nTRTHits);
   fChain->SetBranchAddress("mu_staco_nTRTHighTHits", &mu_staco_nTRTHighTHits, &b_mu_staco_nTRTHighTHits);
   fChain->SetBranchAddress("mu_staco_nBLSharedHits", &mu_staco_nBLSharedHits, &b_mu_staco_nBLSharedHits);
   fChain->SetBranchAddress("mu_staco_nPixSharedHits", &mu_staco_nPixSharedHits, &b_mu_staco_nPixSharedHits);
   fChain->SetBranchAddress("mu_staco_nPixHoles", &mu_staco_nPixHoles, &b_mu_staco_nPixHoles);
   fChain->SetBranchAddress("mu_staco_nSCTSharedHits", &mu_staco_nSCTSharedHits, &b_mu_staco_nSCTSharedHits);
   fChain->SetBranchAddress("mu_staco_nSCTHoles", &mu_staco_nSCTHoles, &b_mu_staco_nSCTHoles);
   fChain->SetBranchAddress("mu_staco_nTRTOutliers", &mu_staco_nTRTOutliers, &b_mu_staco_nTRTOutliers);
   fChain->SetBranchAddress("mu_staco_nTRTHighTOutliers", &mu_staco_nTRTHighTOutliers, &b_mu_staco_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_staco_nGangedPixels", &mu_staco_nGangedPixels, &b_mu_staco_nGangedPixels);
   fChain->SetBranchAddress("mu_staco_nPixelDeadSensors", &mu_staco_nPixelDeadSensors, &b_mu_staco_nPixelDeadSensors);
   fChain->SetBranchAddress("mu_staco_nSCTDeadSensors", &mu_staco_nSCTDeadSensors, &b_mu_staco_nSCTDeadSensors);
   fChain->SetBranchAddress("mu_staco_nTRTDeadStraws", &mu_staco_nTRTDeadStraws, &b_mu_staco_nTRTDeadStraws);
   fChain->SetBranchAddress("mu_staco_expectBLayerHit", &mu_staco_expectBLayerHit, &b_mu_staco_expectBLayerHit);
   fChain->SetBranchAddress("mu_staco_nMDTHits", &mu_staco_nMDTHits, &b_mu_staco_nMDTHits);
   fChain->SetBranchAddress("mu_staco_nMDTHoles", &mu_staco_nMDTHoles, &b_mu_staco_nMDTHoles);
   fChain->SetBranchAddress("mu_staco_nCSCEtaHits", &mu_staco_nCSCEtaHits, &b_mu_staco_nCSCEtaHits);
   fChain->SetBranchAddress("mu_staco_nCSCEtaHoles", &mu_staco_nCSCEtaHoles, &b_mu_staco_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nCSCUnspoiledEtaHits", &mu_staco_nCSCUnspoiledEtaHits, &b_mu_staco_nCSCUnspoiledEtaHits);
   fChain->SetBranchAddress("mu_staco_nCSCPhiHits", &mu_staco_nCSCPhiHits, &b_mu_staco_nCSCPhiHits);
   fChain->SetBranchAddress("mu_staco_nCSCPhiHoles", &mu_staco_nCSCPhiHoles, &b_mu_staco_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nRPCEtaHits", &mu_staco_nRPCEtaHits, &b_mu_staco_nRPCEtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCEtaHoles", &mu_staco_nRPCEtaHoles, &b_mu_staco_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nRPCPhiHits", &mu_staco_nRPCPhiHits, &b_mu_staco_nRPCPhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCPhiHoles", &mu_staco_nRPCPhiHoles, &b_mu_staco_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nTGCEtaHits", &mu_staco_nTGCEtaHits, &b_mu_staco_nTGCEtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCEtaHoles", &mu_staco_nTGCEtaHoles, &b_mu_staco_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nTGCPhiHits", &mu_staco_nTGCPhiHits, &b_mu_staco_nTGCPhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCPhiHoles", &mu_staco_nTGCPhiHoles, &b_mu_staco_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nprecisionLayers", &mu_staco_nprecisionLayers, &b_mu_staco_nprecisionLayers);
   fChain->SetBranchAddress("mu_staco_nprecisionHoleLayers", &mu_staco_nprecisionHoleLayers, &b_mu_staco_nprecisionHoleLayers);
   fChain->SetBranchAddress("mu_staco_nphiLayers", &mu_staco_nphiLayers, &b_mu_staco_nphiLayers);
   fChain->SetBranchAddress("mu_staco_ntrigEtaLayers", &mu_staco_ntrigEtaLayers, &b_mu_staco_ntrigEtaLayers);
   fChain->SetBranchAddress("mu_staco_nphiHoleLayers", &mu_staco_nphiHoleLayers, &b_mu_staco_nphiHoleLayers);
   fChain->SetBranchAddress("mu_staco_ntrigEtaHoleLayers", &mu_staco_ntrigEtaHoleLayers, &b_mu_staco_ntrigEtaHoleLayers);
   fChain->SetBranchAddress("mu_staco_nMDTBIHits", &mu_staco_nMDTBIHits, &b_mu_staco_nMDTBIHits);
   fChain->SetBranchAddress("mu_staco_nMDTBMHits", &mu_staco_nMDTBMHits, &b_mu_staco_nMDTBMHits);
   fChain->SetBranchAddress("mu_staco_nMDTBOHits", &mu_staco_nMDTBOHits, &b_mu_staco_nMDTBOHits);
   fChain->SetBranchAddress("mu_staco_nMDTBEEHits", &mu_staco_nMDTBEEHits, &b_mu_staco_nMDTBEEHits);
   fChain->SetBranchAddress("mu_staco_nMDTBIS78Hits", &mu_staco_nMDTBIS78Hits, &b_mu_staco_nMDTBIS78Hits);
   fChain->SetBranchAddress("mu_staco_nMDTEIHits", &mu_staco_nMDTEIHits, &b_mu_staco_nMDTEIHits);
   fChain->SetBranchAddress("mu_staco_nMDTEMHits", &mu_staco_nMDTEMHits, &b_mu_staco_nMDTEMHits);
   fChain->SetBranchAddress("mu_staco_nMDTEOHits", &mu_staco_nMDTEOHits, &b_mu_staco_nMDTEOHits);
   fChain->SetBranchAddress("mu_staco_nMDTEEHits", &mu_staco_nMDTEEHits, &b_mu_staco_nMDTEEHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer1EtaHits", &mu_staco_nRPCLayer1EtaHits, &b_mu_staco_nRPCLayer1EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer2EtaHits", &mu_staco_nRPCLayer2EtaHits, &b_mu_staco_nRPCLayer2EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer3EtaHits", &mu_staco_nRPCLayer3EtaHits, &b_mu_staco_nRPCLayer3EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer1PhiHits", &mu_staco_nRPCLayer1PhiHits, &b_mu_staco_nRPCLayer1PhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer2PhiHits", &mu_staco_nRPCLayer2PhiHits, &b_mu_staco_nRPCLayer2PhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer3PhiHits", &mu_staco_nRPCLayer3PhiHits, &b_mu_staco_nRPCLayer3PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer1EtaHits", &mu_staco_nTGCLayer1EtaHits, &b_mu_staco_nTGCLayer1EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer2EtaHits", &mu_staco_nTGCLayer2EtaHits, &b_mu_staco_nTGCLayer2EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer3EtaHits", &mu_staco_nTGCLayer3EtaHits, &b_mu_staco_nTGCLayer3EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer4EtaHits", &mu_staco_nTGCLayer4EtaHits, &b_mu_staco_nTGCLayer4EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer1PhiHits", &mu_staco_nTGCLayer1PhiHits, &b_mu_staco_nTGCLayer1PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer2PhiHits", &mu_staco_nTGCLayer2PhiHits, &b_mu_staco_nTGCLayer2PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer3PhiHits", &mu_staco_nTGCLayer3PhiHits, &b_mu_staco_nTGCLayer3PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer4PhiHits", &mu_staco_nTGCLayer4PhiHits, &b_mu_staco_nTGCLayer4PhiHits);
   fChain->SetBranchAddress("mu_staco_barrelSectors", &mu_staco_barrelSectors, &b_mu_staco_barrelSectors);
   fChain->SetBranchAddress("mu_staco_endcapSectors", &mu_staco_endcapSectors, &b_mu_staco_endcapSectors);
   fChain->SetBranchAddress("mu_staco_trackd0", &mu_staco_trackd0, &b_mu_staco_trackd0);
   fChain->SetBranchAddress("mu_staco_trackz0", &mu_staco_trackz0, &b_mu_staco_trackz0);
   fChain->SetBranchAddress("mu_staco_trackphi", &mu_staco_trackphi, &b_mu_staco_trackphi);
   fChain->SetBranchAddress("mu_staco_tracktheta", &mu_staco_tracktheta, &b_mu_staco_tracktheta);
   fChain->SetBranchAddress("mu_staco_trackqoverp", &mu_staco_trackqoverp, &b_mu_staco_trackqoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_d0", &mu_staco_trackcov_d0, &b_mu_staco_trackcov_d0);
   fChain->SetBranchAddress("mu_staco_trackcov_z0", &mu_staco_trackcov_z0, &b_mu_staco_trackcov_z0);
   fChain->SetBranchAddress("mu_staco_trackcov_phi", &mu_staco_trackcov_phi, &b_mu_staco_trackcov_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_theta", &mu_staco_trackcov_theta, &b_mu_staco_trackcov_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_qoverp", &mu_staco_trackcov_qoverp, &b_mu_staco_trackcov_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_z0", &mu_staco_trackcov_d0_z0, &b_mu_staco_trackcov_d0_z0);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_phi", &mu_staco_trackcov_d0_phi, &b_mu_staco_trackcov_d0_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_theta", &mu_staco_trackcov_d0_theta, &b_mu_staco_trackcov_d0_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_qoverp", &mu_staco_trackcov_d0_qoverp, &b_mu_staco_trackcov_d0_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_phi", &mu_staco_trackcov_z0_phi, &b_mu_staco_trackcov_z0_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_theta", &mu_staco_trackcov_z0_theta, &b_mu_staco_trackcov_z0_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_qoverp", &mu_staco_trackcov_z0_qoverp, &b_mu_staco_trackcov_z0_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_phi_theta", &mu_staco_trackcov_phi_theta, &b_mu_staco_trackcov_phi_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_phi_qoverp", &mu_staco_trackcov_phi_qoverp, &b_mu_staco_trackcov_phi_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_theta_qoverp", &mu_staco_trackcov_theta_qoverp, &b_mu_staco_trackcov_theta_qoverp);
   fChain->SetBranchAddress("mu_staco_trackfitchi2", &mu_staco_trackfitchi2, &b_mu_staco_trackfitchi2);
   fChain->SetBranchAddress("mu_staco_trackfitndof", &mu_staco_trackfitndof, &b_mu_staco_trackfitndof);
   fChain->SetBranchAddress("mu_staco_hastrack", &mu_staco_hastrack, &b_mu_staco_hastrack);
   fChain->SetBranchAddress("mu_staco_trackd0beam", &mu_staco_trackd0beam, &b_mu_staco_trackd0beam);
   fChain->SetBranchAddress("mu_staco_trackz0beam", &mu_staco_trackz0beam, &b_mu_staco_trackz0beam);
   fChain->SetBranchAddress("mu_staco_tracksigd0beam", &mu_staco_tracksigd0beam, &b_mu_staco_tracksigd0beam);
   fChain->SetBranchAddress("mu_staco_tracksigz0beam", &mu_staco_tracksigz0beam, &b_mu_staco_tracksigz0beam);
   fChain->SetBranchAddress("mu_staco_trackd0pv", &mu_staco_trackd0pv, &b_mu_staco_trackd0pv);
   fChain->SetBranchAddress("mu_staco_trackz0pv", &mu_staco_trackz0pv, &b_mu_staco_trackz0pv);
   fChain->SetBranchAddress("mu_staco_tracksigd0pv", &mu_staco_tracksigd0pv, &b_mu_staco_tracksigd0pv);
   fChain->SetBranchAddress("mu_staco_tracksigz0pv", &mu_staco_tracksigz0pv, &b_mu_staco_tracksigz0pv);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_d0_biasedpvunbiased", &mu_staco_trackIPEstimate_d0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_z0_biasedpvunbiased", &mu_staco_trackIPEstimate_z0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigd0_biasedpvunbiased", &mu_staco_trackIPEstimate_sigd0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigz0_biasedpvunbiased", &mu_staco_trackIPEstimate_sigz0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_d0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_d0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_z0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_z0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackd0pvunbiased", &mu_staco_trackd0pvunbiased, &b_mu_staco_trackd0pvunbiased);
   fChain->SetBranchAddress("mu_staco_trackz0pvunbiased", &mu_staco_trackz0pvunbiased, &b_mu_staco_trackz0pvunbiased);
   fChain->SetBranchAddress("mu_staco_tracksigd0pvunbiased", &mu_staco_tracksigd0pvunbiased, &b_mu_staco_tracksigd0pvunbiased);
   fChain->SetBranchAddress("mu_staco_tracksigz0pvunbiased", &mu_staco_tracksigz0pvunbiased, &b_mu_staco_tracksigz0pvunbiased);
   fChain->SetBranchAddress("mu_staco_CaloCell_sampling", &mu_staco_CaloCell_sampling, &b_mu_staco_CaloCell_sampling);
   fChain->SetBranchAddress("mu_staco_CaloCell_eta", &mu_staco_CaloCell_eta, &b_mu_staco_CaloCell_eta);
   fChain->SetBranchAddress("mu_staco_CaloCell_phi", &mu_staco_CaloCell_phi, &b_mu_staco_CaloCell_phi);
   fChain->SetBranchAddress("mu_staco_CaloCell_dr", &mu_staco_CaloCell_dr, &b_mu_staco_CaloCell_dr);
   fChain->SetBranchAddress("mu_staco_CaloCell_E", &mu_staco_CaloCell_E, &b_mu_staco_CaloCell_E);
   fChain->SetBranchAddress("mu_staco_CaloCell_t", &mu_staco_CaloCell_t, &b_mu_staco_CaloCell_t);
   fChain->SetBranchAddress("mu_staco_CaloCell_x", &mu_staco_CaloCell_x, &b_mu_staco_CaloCell_x);
   fChain->SetBranchAddress("mu_staco_CaloCell_y", &mu_staco_CaloCell_y, &b_mu_staco_CaloCell_y);
   fChain->SetBranchAddress("mu_staco_CaloCell_z", &mu_staco_CaloCell_z, &b_mu_staco_CaloCell_z);
   fChain->SetBranchAddress("mu_staco_TileBeta", &mu_staco_TileBeta, &b_mu_staco_TileBeta);
   fChain->SetBranchAddress("mu_staco_TileBetaMass", &mu_staco_TileBetaMass, &b_mu_staco_TileBetaMass);
   fChain->SetBranchAddress("mu_staco_meandADC", &mu_staco_meandADC, &b_mu_staco_meandADC);
   fChain->SetBranchAddress("mu_staco_stau_candidate_assoc_index", &mu_staco_stau_candidate_assoc_index, &b_mu_staco_stau_candidate_assoc_index);
   fChain->SetBranchAddress("mu_calo_n", &mu_calo_n, &b_mu_calo_n);
   fChain->SetBranchAddress("mu_calo_E", &mu_calo_E, &b_mu_calo_E);
   fChain->SetBranchAddress("mu_calo_pt", &mu_calo_pt, &b_mu_calo_pt);
   fChain->SetBranchAddress("mu_calo_m", &mu_calo_m, &b_mu_calo_m);
   fChain->SetBranchAddress("mu_calo_eta", &mu_calo_eta, &b_mu_calo_eta);
   fChain->SetBranchAddress("mu_calo_phi", &mu_calo_phi, &b_mu_calo_phi);
   fChain->SetBranchAddress("mu_calo_px", &mu_calo_px, &b_mu_calo_px);
   fChain->SetBranchAddress("mu_calo_py", &mu_calo_py, &b_mu_calo_py);
   fChain->SetBranchAddress("mu_calo_pz", &mu_calo_pz, &b_mu_calo_pz);
   fChain->SetBranchAddress("mu_calo_charge", &mu_calo_charge, &b_mu_calo_charge);
   fChain->SetBranchAddress("mu_calo_allauthor", &mu_calo_allauthor, &b_mu_calo_allauthor);
   fChain->SetBranchAddress("mu_calo_author", &mu_calo_author, &b_mu_calo_author);
   fChain->SetBranchAddress("mu_calo_beta", &mu_calo_beta, &b_mu_calo_beta);
   fChain->SetBranchAddress("mu_calo_isMuonLikelihood", &mu_calo_isMuonLikelihood, &b_mu_calo_isMuonLikelihood);
   fChain->SetBranchAddress("mu_calo_matchchi2", &mu_calo_matchchi2, &b_mu_calo_matchchi2);
   fChain->SetBranchAddress("mu_calo_matchndof", &mu_calo_matchndof, &b_mu_calo_matchndof);
   fChain->SetBranchAddress("mu_calo_etcone20", &mu_calo_etcone20, &b_mu_calo_etcone20);
   fChain->SetBranchAddress("mu_calo_etcone30", &mu_calo_etcone30, &b_mu_calo_etcone30);
   fChain->SetBranchAddress("mu_calo_etcone40", &mu_calo_etcone40, &b_mu_calo_etcone40);
   fChain->SetBranchAddress("mu_calo_nucone20", &mu_calo_nucone20, &b_mu_calo_nucone20);
   fChain->SetBranchAddress("mu_calo_nucone30", &mu_calo_nucone30, &b_mu_calo_nucone30);
   fChain->SetBranchAddress("mu_calo_nucone40", &mu_calo_nucone40, &b_mu_calo_nucone40);
   fChain->SetBranchAddress("mu_calo_ptcone20", &mu_calo_ptcone20, &b_mu_calo_ptcone20);
   fChain->SetBranchAddress("mu_calo_ptcone30", &mu_calo_ptcone30, &b_mu_calo_ptcone30);
   fChain->SetBranchAddress("mu_calo_ptcone40", &mu_calo_ptcone40, &b_mu_calo_ptcone40);
   fChain->SetBranchAddress("mu_calo_etconeNoEm10", &mu_calo_etconeNoEm10, &b_mu_calo_etconeNoEm10);
   fChain->SetBranchAddress("mu_calo_etconeNoEm20", &mu_calo_etconeNoEm20, &b_mu_calo_etconeNoEm20);
   fChain->SetBranchAddress("mu_calo_etconeNoEm30", &mu_calo_etconeNoEm30, &b_mu_calo_etconeNoEm30);
   fChain->SetBranchAddress("mu_calo_etconeNoEm40", &mu_calo_etconeNoEm40, &b_mu_calo_etconeNoEm40);
   fChain->SetBranchAddress("mu_calo_scatteringCurvatureSignificance", &mu_calo_scatteringCurvatureSignificance, &b_mu_calo_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("mu_calo_scatteringNeighbourSignificance", &mu_calo_scatteringNeighbourSignificance, &b_mu_calo_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("mu_calo_momentumBalanceSignificance", &mu_calo_momentumBalanceSignificance, &b_mu_calo_momentumBalanceSignificance);
   fChain->SetBranchAddress("mu_calo_energyLossPar", &mu_calo_energyLossPar, &b_mu_calo_energyLossPar);
   fChain->SetBranchAddress("mu_calo_energyLossErr", &mu_calo_energyLossErr, &b_mu_calo_energyLossErr);
   fChain->SetBranchAddress("mu_calo_etCore", &mu_calo_etCore, &b_mu_calo_etCore);
   fChain->SetBranchAddress("mu_calo_energyLossType", &mu_calo_energyLossType, &b_mu_calo_energyLossType);
   fChain->SetBranchAddress("mu_calo_caloMuonIdTag", &mu_calo_caloMuonIdTag, &b_mu_calo_caloMuonIdTag);
   fChain->SetBranchAddress("mu_calo_caloLRLikelihood", &mu_calo_caloLRLikelihood, &b_mu_calo_caloLRLikelihood);
   fChain->SetBranchAddress("mu_calo_bestMatch", &mu_calo_bestMatch, &b_mu_calo_bestMatch);
   fChain->SetBranchAddress("mu_calo_isStandAloneMuon", &mu_calo_isStandAloneMuon, &b_mu_calo_isStandAloneMuon);
   fChain->SetBranchAddress("mu_calo_isCombinedMuon", &mu_calo_isCombinedMuon, &b_mu_calo_isCombinedMuon);
   fChain->SetBranchAddress("mu_calo_isLowPtReconstructedMuon", &mu_calo_isLowPtReconstructedMuon, &b_mu_calo_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_calo_isSegmentTaggedMuon", &mu_calo_isSegmentTaggedMuon, &b_mu_calo_isSegmentTaggedMuon);
   fChain->SetBranchAddress("mu_calo_isCaloMuonId", &mu_calo_isCaloMuonId, &b_mu_calo_isCaloMuonId);
   fChain->SetBranchAddress("mu_calo_alsoFoundByLowPt", &mu_calo_alsoFoundByLowPt, &b_mu_calo_alsoFoundByLowPt);
   fChain->SetBranchAddress("mu_calo_alsoFoundByCaloMuonId", &mu_calo_alsoFoundByCaloMuonId, &b_mu_calo_alsoFoundByCaloMuonId);
   fChain->SetBranchAddress("mu_calo_isSiliconAssociatedForwardMuon", &mu_calo_isSiliconAssociatedForwardMuon, &b_mu_calo_isSiliconAssociatedForwardMuon);
   fChain->SetBranchAddress("mu_calo_loose", &mu_calo_loose, &b_mu_calo_loose);
   fChain->SetBranchAddress("mu_calo_medium", &mu_calo_medium, &b_mu_calo_medium);
   fChain->SetBranchAddress("mu_calo_tight", &mu_calo_tight, &b_mu_calo_tight);
   fChain->SetBranchAddress("mu_calo_d0_exPV", &mu_calo_d0_exPV, &b_mu_calo_d0_exPV);
   fChain->SetBranchAddress("mu_calo_z0_exPV", &mu_calo_z0_exPV, &b_mu_calo_z0_exPV);
   fChain->SetBranchAddress("mu_calo_phi_exPV", &mu_calo_phi_exPV, &b_mu_calo_phi_exPV);
   fChain->SetBranchAddress("mu_calo_theta_exPV", &mu_calo_theta_exPV, &b_mu_calo_theta_exPV);
   fChain->SetBranchAddress("mu_calo_qoverp_exPV", &mu_calo_qoverp_exPV, &b_mu_calo_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cb_d0_exPV", &mu_calo_cb_d0_exPV, &b_mu_calo_cb_d0_exPV);
   fChain->SetBranchAddress("mu_calo_cb_z0_exPV", &mu_calo_cb_z0_exPV, &b_mu_calo_cb_z0_exPV);
   fChain->SetBranchAddress("mu_calo_cb_phi_exPV", &mu_calo_cb_phi_exPV, &b_mu_calo_cb_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cb_theta_exPV", &mu_calo_cb_theta_exPV, &b_mu_calo_cb_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cb_qoverp_exPV", &mu_calo_cb_qoverp_exPV, &b_mu_calo_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_d0_exPV", &mu_calo_id_d0_exPV, &b_mu_calo_id_d0_exPV);
   fChain->SetBranchAddress("mu_calo_id_z0_exPV", &mu_calo_id_z0_exPV, &b_mu_calo_id_z0_exPV);
   fChain->SetBranchAddress("mu_calo_id_phi_exPV", &mu_calo_id_phi_exPV, &b_mu_calo_id_phi_exPV);
   fChain->SetBranchAddress("mu_calo_id_theta_exPV", &mu_calo_id_theta_exPV, &b_mu_calo_id_theta_exPV);
   fChain->SetBranchAddress("mu_calo_id_qoverp_exPV", &mu_calo_id_qoverp_exPV, &b_mu_calo_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_d0_exPV", &mu_calo_me_d0_exPV, &b_mu_calo_me_d0_exPV);
   fChain->SetBranchAddress("mu_calo_me_z0_exPV", &mu_calo_me_z0_exPV, &b_mu_calo_me_z0_exPV);
   fChain->SetBranchAddress("mu_calo_me_phi_exPV", &mu_calo_me_phi_exPV, &b_mu_calo_me_phi_exPV);
   fChain->SetBranchAddress("mu_calo_me_theta_exPV", &mu_calo_me_theta_exPV, &b_mu_calo_me_theta_exPV);
   fChain->SetBranchAddress("mu_calo_me_qoverp_exPV", &mu_calo_me_qoverp_exPV, &b_mu_calo_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_ie_d0_exPV", &mu_calo_ie_d0_exPV, &b_mu_calo_ie_d0_exPV);
   fChain->SetBranchAddress("mu_calo_ie_z0_exPV", &mu_calo_ie_z0_exPV, &b_mu_calo_ie_z0_exPV);
   fChain->SetBranchAddress("mu_calo_ie_phi_exPV", &mu_calo_ie_phi_exPV, &b_mu_calo_ie_phi_exPV);
   fChain->SetBranchAddress("mu_calo_ie_theta_exPV", &mu_calo_ie_theta_exPV, &b_mu_calo_ie_theta_exPV);
   fChain->SetBranchAddress("mu_calo_ie_qoverp_exPV", &mu_calo_ie_qoverp_exPV, &b_mu_calo_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_SpaceTime_detID", &mu_calo_SpaceTime_detID, &b_mu_calo_SpaceTime_detID);
   fChain->SetBranchAddress("mu_calo_SpaceTime_t", &mu_calo_SpaceTime_t, &b_mu_calo_SpaceTime_t);
   fChain->SetBranchAddress("mu_calo_SpaceTime_tError", &mu_calo_SpaceTime_tError, &b_mu_calo_SpaceTime_tError);
   fChain->SetBranchAddress("mu_calo_SpaceTime_weight", &mu_calo_SpaceTime_weight, &b_mu_calo_SpaceTime_weight);
   fChain->SetBranchAddress("mu_calo_SpaceTime_x", &mu_calo_SpaceTime_x, &b_mu_calo_SpaceTime_x);
   fChain->SetBranchAddress("mu_calo_SpaceTime_y", &mu_calo_SpaceTime_y, &b_mu_calo_SpaceTime_y);
   fChain->SetBranchAddress("mu_calo_SpaceTime_z", &mu_calo_SpaceTime_z, &b_mu_calo_SpaceTime_z);
   fChain->SetBranchAddress("mu_calo_cov_d0_exPV", &mu_calo_cov_d0_exPV, &b_mu_calo_cov_d0_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_exPV", &mu_calo_cov_z0_exPV, &b_mu_calo_cov_z0_exPV);
   fChain->SetBranchAddress("mu_calo_cov_phi_exPV", &mu_calo_cov_phi_exPV, &b_mu_calo_cov_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cov_theta_exPV", &mu_calo_cov_theta_exPV, &b_mu_calo_cov_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_qoverp_exPV", &mu_calo_cov_qoverp_exPV, &b_mu_calo_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_z0_exPV", &mu_calo_cov_d0_z0_exPV, &b_mu_calo_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_phi_exPV", &mu_calo_cov_d0_phi_exPV, &b_mu_calo_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_theta_exPV", &mu_calo_cov_d0_theta_exPV, &b_mu_calo_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_qoverp_exPV", &mu_calo_cov_d0_qoverp_exPV, &b_mu_calo_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_phi_exPV", &mu_calo_cov_z0_phi_exPV, &b_mu_calo_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_theta_exPV", &mu_calo_cov_z0_theta_exPV, &b_mu_calo_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_qoverp_exPV", &mu_calo_cov_z0_qoverp_exPV, &b_mu_calo_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_phi_theta_exPV", &mu_calo_cov_phi_theta_exPV, &b_mu_calo_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_phi_qoverp_exPV", &mu_calo_cov_phi_qoverp_exPV, &b_mu_calo_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_theta_qoverp_exPV", &mu_calo_cov_theta_qoverp_exPV, &b_mu_calo_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_d0_exPV", &mu_calo_id_cov_d0_exPV, &b_mu_calo_id_cov_d0_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_z0_exPV", &mu_calo_id_cov_z0_exPV, &b_mu_calo_id_cov_z0_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_phi_exPV", &mu_calo_id_cov_phi_exPV, &b_mu_calo_id_cov_phi_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_theta_exPV", &mu_calo_id_cov_theta_exPV, &b_mu_calo_id_cov_theta_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_qoverp_exPV", &mu_calo_id_cov_qoverp_exPV, &b_mu_calo_id_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_d0_z0_exPV", &mu_calo_id_cov_d0_z0_exPV, &b_mu_calo_id_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_d0_phi_exPV", &mu_calo_id_cov_d0_phi_exPV, &b_mu_calo_id_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_d0_theta_exPV", &mu_calo_id_cov_d0_theta_exPV, &b_mu_calo_id_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_d0_qoverp_exPV", &mu_calo_id_cov_d0_qoverp_exPV, &b_mu_calo_id_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_z0_phi_exPV", &mu_calo_id_cov_z0_phi_exPV, &b_mu_calo_id_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_z0_theta_exPV", &mu_calo_id_cov_z0_theta_exPV, &b_mu_calo_id_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_z0_qoverp_exPV", &mu_calo_id_cov_z0_qoverp_exPV, &b_mu_calo_id_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_phi_theta_exPV", &mu_calo_id_cov_phi_theta_exPV, &b_mu_calo_id_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_phi_qoverp_exPV", &mu_calo_id_cov_phi_qoverp_exPV, &b_mu_calo_id_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_theta_qoverp_exPV", &mu_calo_id_cov_theta_qoverp_exPV, &b_mu_calo_id_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_d0_exPV", &mu_calo_me_cov_d0_exPV, &b_mu_calo_me_cov_d0_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_z0_exPV", &mu_calo_me_cov_z0_exPV, &b_mu_calo_me_cov_z0_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_phi_exPV", &mu_calo_me_cov_phi_exPV, &b_mu_calo_me_cov_phi_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_theta_exPV", &mu_calo_me_cov_theta_exPV, &b_mu_calo_me_cov_theta_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_qoverp_exPV", &mu_calo_me_cov_qoverp_exPV, &b_mu_calo_me_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_d0_z0_exPV", &mu_calo_me_cov_d0_z0_exPV, &b_mu_calo_me_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_d0_phi_exPV", &mu_calo_me_cov_d0_phi_exPV, &b_mu_calo_me_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_d0_theta_exPV", &mu_calo_me_cov_d0_theta_exPV, &b_mu_calo_me_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_d0_qoverp_exPV", &mu_calo_me_cov_d0_qoverp_exPV, &b_mu_calo_me_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_z0_phi_exPV", &mu_calo_me_cov_z0_phi_exPV, &b_mu_calo_me_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_z0_theta_exPV", &mu_calo_me_cov_z0_theta_exPV, &b_mu_calo_me_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_z0_qoverp_exPV", &mu_calo_me_cov_z0_qoverp_exPV, &b_mu_calo_me_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_phi_theta_exPV", &mu_calo_me_cov_phi_theta_exPV, &b_mu_calo_me_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_phi_qoverp_exPV", &mu_calo_me_cov_phi_qoverp_exPV, &b_mu_calo_me_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_theta_qoverp_exPV", &mu_calo_me_cov_theta_qoverp_exPV, &b_mu_calo_me_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_ms_d0", &mu_calo_ms_d0, &b_mu_calo_ms_d0);
   fChain->SetBranchAddress("mu_calo_ms_z0", &mu_calo_ms_z0, &b_mu_calo_ms_z0);
   fChain->SetBranchAddress("mu_calo_ms_phi", &mu_calo_ms_phi, &b_mu_calo_ms_phi);
   fChain->SetBranchAddress("mu_calo_ms_theta", &mu_calo_ms_theta, &b_mu_calo_ms_theta);
   fChain->SetBranchAddress("mu_calo_ms_qoverp", &mu_calo_ms_qoverp, &b_mu_calo_ms_qoverp);
   fChain->SetBranchAddress("mu_calo_id_d0", &mu_calo_id_d0, &b_mu_calo_id_d0);
   fChain->SetBranchAddress("mu_calo_id_z0", &mu_calo_id_z0, &b_mu_calo_id_z0);
   fChain->SetBranchAddress("mu_calo_id_phi", &mu_calo_id_phi, &b_mu_calo_id_phi);
   fChain->SetBranchAddress("mu_calo_id_theta", &mu_calo_id_theta, &b_mu_calo_id_theta);
   fChain->SetBranchAddress("mu_calo_id_qoverp", &mu_calo_id_qoverp, &b_mu_calo_id_qoverp);
   fChain->SetBranchAddress("mu_calo_me_d0", &mu_calo_me_d0, &b_mu_calo_me_d0);
   fChain->SetBranchAddress("mu_calo_me_z0", &mu_calo_me_z0, &b_mu_calo_me_z0);
   fChain->SetBranchAddress("mu_calo_me_phi", &mu_calo_me_phi, &b_mu_calo_me_phi);
   fChain->SetBranchAddress("mu_calo_me_theta", &mu_calo_me_theta, &b_mu_calo_me_theta);
   fChain->SetBranchAddress("mu_calo_me_qoverp", &mu_calo_me_qoverp, &b_mu_calo_me_qoverp);
   fChain->SetBranchAddress("mu_calo_ie_d0", &mu_calo_ie_d0, &b_mu_calo_ie_d0);
   fChain->SetBranchAddress("mu_calo_ie_z0", &mu_calo_ie_z0, &b_mu_calo_ie_z0);
   fChain->SetBranchAddress("mu_calo_ie_phi", &mu_calo_ie_phi, &b_mu_calo_ie_phi);
   fChain->SetBranchAddress("mu_calo_ie_theta", &mu_calo_ie_theta, &b_mu_calo_ie_theta);
   fChain->SetBranchAddress("mu_calo_ie_qoverp", &mu_calo_ie_qoverp, &b_mu_calo_ie_qoverp);
   fChain->SetBranchAddress("mu_calo_nOutliersOnTrack", &mu_calo_nOutliersOnTrack, &b_mu_calo_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_calo_nBLHits", &mu_calo_nBLHits, &b_mu_calo_nBLHits);
   fChain->SetBranchAddress("mu_calo_nPixHits", &mu_calo_nPixHits, &b_mu_calo_nPixHits);
   fChain->SetBranchAddress("mu_calo_nSCTHits", &mu_calo_nSCTHits, &b_mu_calo_nSCTHits);
   fChain->SetBranchAddress("mu_calo_nTRTHits", &mu_calo_nTRTHits, &b_mu_calo_nTRTHits);
   fChain->SetBranchAddress("mu_calo_nTRTHighTHits", &mu_calo_nTRTHighTHits, &b_mu_calo_nTRTHighTHits);
   fChain->SetBranchAddress("mu_calo_nBLSharedHits", &mu_calo_nBLSharedHits, &b_mu_calo_nBLSharedHits);
   fChain->SetBranchAddress("mu_calo_nPixSharedHits", &mu_calo_nPixSharedHits, &b_mu_calo_nPixSharedHits);
   fChain->SetBranchAddress("mu_calo_nPixHoles", &mu_calo_nPixHoles, &b_mu_calo_nPixHoles);
   fChain->SetBranchAddress("mu_calo_nSCTSharedHits", &mu_calo_nSCTSharedHits, &b_mu_calo_nSCTSharedHits);
   fChain->SetBranchAddress("mu_calo_nSCTHoles", &mu_calo_nSCTHoles, &b_mu_calo_nSCTHoles);
   fChain->SetBranchAddress("mu_calo_nTRTOutliers", &mu_calo_nTRTOutliers, &b_mu_calo_nTRTOutliers);
   fChain->SetBranchAddress("mu_calo_nTRTHighTOutliers", &mu_calo_nTRTHighTOutliers, &b_mu_calo_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_calo_nGangedPixels", &mu_calo_nGangedPixels, &b_mu_calo_nGangedPixels);
   fChain->SetBranchAddress("mu_calo_nPixelDeadSensors", &mu_calo_nPixelDeadSensors, &b_mu_calo_nPixelDeadSensors);
   fChain->SetBranchAddress("mu_calo_nSCTDeadSensors", &mu_calo_nSCTDeadSensors, &b_mu_calo_nSCTDeadSensors);
   fChain->SetBranchAddress("mu_calo_nTRTDeadStraws", &mu_calo_nTRTDeadStraws, &b_mu_calo_nTRTDeadStraws);
   fChain->SetBranchAddress("mu_calo_expectBLayerHit", &mu_calo_expectBLayerHit, &b_mu_calo_expectBLayerHit);
   fChain->SetBranchAddress("mu_calo_nMDTHits", &mu_calo_nMDTHits, &b_mu_calo_nMDTHits);
   fChain->SetBranchAddress("mu_calo_nMDTHoles", &mu_calo_nMDTHoles, &b_mu_calo_nMDTHoles);
   fChain->SetBranchAddress("mu_calo_nCSCEtaHits", &mu_calo_nCSCEtaHits, &b_mu_calo_nCSCEtaHits);
   fChain->SetBranchAddress("mu_calo_nCSCEtaHoles", &mu_calo_nCSCEtaHoles, &b_mu_calo_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_calo_nCSCUnspoiledEtaHits", &mu_calo_nCSCUnspoiledEtaHits, &b_mu_calo_nCSCUnspoiledEtaHits);
   fChain->SetBranchAddress("mu_calo_nCSCPhiHits", &mu_calo_nCSCPhiHits, &b_mu_calo_nCSCPhiHits);
   fChain->SetBranchAddress("mu_calo_nCSCPhiHoles", &mu_calo_nCSCPhiHoles, &b_mu_calo_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_calo_nRPCEtaHits", &mu_calo_nRPCEtaHits, &b_mu_calo_nRPCEtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCEtaHoles", &mu_calo_nRPCEtaHoles, &b_mu_calo_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_calo_nRPCPhiHits", &mu_calo_nRPCPhiHits, &b_mu_calo_nRPCPhiHits);
   fChain->SetBranchAddress("mu_calo_nRPCPhiHoles", &mu_calo_nRPCPhiHoles, &b_mu_calo_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_calo_nTGCEtaHits", &mu_calo_nTGCEtaHits, &b_mu_calo_nTGCEtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCEtaHoles", &mu_calo_nTGCEtaHoles, &b_mu_calo_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_calo_nTGCPhiHits", &mu_calo_nTGCPhiHits, &b_mu_calo_nTGCPhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCPhiHoles", &mu_calo_nTGCPhiHoles, &b_mu_calo_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_calo_nprecisionLayers", &mu_calo_nprecisionLayers, &b_mu_calo_nprecisionLayers);
   fChain->SetBranchAddress("mu_calo_nprecisionHoleLayers", &mu_calo_nprecisionHoleLayers, &b_mu_calo_nprecisionHoleLayers);
   fChain->SetBranchAddress("mu_calo_nphiLayers", &mu_calo_nphiLayers, &b_mu_calo_nphiLayers);
   fChain->SetBranchAddress("mu_calo_ntrigEtaLayers", &mu_calo_ntrigEtaLayers, &b_mu_calo_ntrigEtaLayers);
   fChain->SetBranchAddress("mu_calo_nphiHoleLayers", &mu_calo_nphiHoleLayers, &b_mu_calo_nphiHoleLayers);
   fChain->SetBranchAddress("mu_calo_ntrigEtaHoleLayers", &mu_calo_ntrigEtaHoleLayers, &b_mu_calo_ntrigEtaHoleLayers);
   fChain->SetBranchAddress("mu_calo_nMDTBIHits", &mu_calo_nMDTBIHits, &b_mu_calo_nMDTBIHits);
   fChain->SetBranchAddress("mu_calo_nMDTBMHits", &mu_calo_nMDTBMHits, &b_mu_calo_nMDTBMHits);
   fChain->SetBranchAddress("mu_calo_nMDTBOHits", &mu_calo_nMDTBOHits, &b_mu_calo_nMDTBOHits);
   fChain->SetBranchAddress("mu_calo_nMDTBEEHits", &mu_calo_nMDTBEEHits, &b_mu_calo_nMDTBEEHits);
   fChain->SetBranchAddress("mu_calo_nMDTBIS78Hits", &mu_calo_nMDTBIS78Hits, &b_mu_calo_nMDTBIS78Hits);
   fChain->SetBranchAddress("mu_calo_nMDTEIHits", &mu_calo_nMDTEIHits, &b_mu_calo_nMDTEIHits);
   fChain->SetBranchAddress("mu_calo_nMDTEMHits", &mu_calo_nMDTEMHits, &b_mu_calo_nMDTEMHits);
   fChain->SetBranchAddress("mu_calo_nMDTEOHits", &mu_calo_nMDTEOHits, &b_mu_calo_nMDTEOHits);
   fChain->SetBranchAddress("mu_calo_nMDTEEHits", &mu_calo_nMDTEEHits, &b_mu_calo_nMDTEEHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer1EtaHits", &mu_calo_nRPCLayer1EtaHits, &b_mu_calo_nRPCLayer1EtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer2EtaHits", &mu_calo_nRPCLayer2EtaHits, &b_mu_calo_nRPCLayer2EtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer3EtaHits", &mu_calo_nRPCLayer3EtaHits, &b_mu_calo_nRPCLayer3EtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer1PhiHits", &mu_calo_nRPCLayer1PhiHits, &b_mu_calo_nRPCLayer1PhiHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer2PhiHits", &mu_calo_nRPCLayer2PhiHits, &b_mu_calo_nRPCLayer2PhiHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer3PhiHits", &mu_calo_nRPCLayer3PhiHits, &b_mu_calo_nRPCLayer3PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer1EtaHits", &mu_calo_nTGCLayer1EtaHits, &b_mu_calo_nTGCLayer1EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer2EtaHits", &mu_calo_nTGCLayer2EtaHits, &b_mu_calo_nTGCLayer2EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer3EtaHits", &mu_calo_nTGCLayer3EtaHits, &b_mu_calo_nTGCLayer3EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer4EtaHits", &mu_calo_nTGCLayer4EtaHits, &b_mu_calo_nTGCLayer4EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer1PhiHits", &mu_calo_nTGCLayer1PhiHits, &b_mu_calo_nTGCLayer1PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer2PhiHits", &mu_calo_nTGCLayer2PhiHits, &b_mu_calo_nTGCLayer2PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer3PhiHits", &mu_calo_nTGCLayer3PhiHits, &b_mu_calo_nTGCLayer3PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer4PhiHits", &mu_calo_nTGCLayer4PhiHits, &b_mu_calo_nTGCLayer4PhiHits);
   fChain->SetBranchAddress("mu_calo_barrelSectors", &mu_calo_barrelSectors, &b_mu_calo_barrelSectors);
   fChain->SetBranchAddress("mu_calo_endcapSectors", &mu_calo_endcapSectors, &b_mu_calo_endcapSectors);
   fChain->SetBranchAddress("mu_calo_trackd0", &mu_calo_trackd0, &b_mu_calo_trackd0);
   fChain->SetBranchAddress("mu_calo_trackz0", &mu_calo_trackz0, &b_mu_calo_trackz0);
   fChain->SetBranchAddress("mu_calo_trackphi", &mu_calo_trackphi, &b_mu_calo_trackphi);
   fChain->SetBranchAddress("mu_calo_tracktheta", &mu_calo_tracktheta, &b_mu_calo_tracktheta);
   fChain->SetBranchAddress("mu_calo_trackqoverp", &mu_calo_trackqoverp, &b_mu_calo_trackqoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_d0", &mu_calo_trackcov_d0, &b_mu_calo_trackcov_d0);
   fChain->SetBranchAddress("mu_calo_trackcov_z0", &mu_calo_trackcov_z0, &b_mu_calo_trackcov_z0);
   fChain->SetBranchAddress("mu_calo_trackcov_phi", &mu_calo_trackcov_phi, &b_mu_calo_trackcov_phi);
   fChain->SetBranchAddress("mu_calo_trackcov_theta", &mu_calo_trackcov_theta, &b_mu_calo_trackcov_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_qoverp", &mu_calo_trackcov_qoverp, &b_mu_calo_trackcov_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_z0", &mu_calo_trackcov_d0_z0, &b_mu_calo_trackcov_d0_z0);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_phi", &mu_calo_trackcov_d0_phi, &b_mu_calo_trackcov_d0_phi);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_theta", &mu_calo_trackcov_d0_theta, &b_mu_calo_trackcov_d0_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_qoverp", &mu_calo_trackcov_d0_qoverp, &b_mu_calo_trackcov_d0_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_z0_phi", &mu_calo_trackcov_z0_phi, &b_mu_calo_trackcov_z0_phi);
   fChain->SetBranchAddress("mu_calo_trackcov_z0_theta", &mu_calo_trackcov_z0_theta, &b_mu_calo_trackcov_z0_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_z0_qoverp", &mu_calo_trackcov_z0_qoverp, &b_mu_calo_trackcov_z0_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_phi_theta", &mu_calo_trackcov_phi_theta, &b_mu_calo_trackcov_phi_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_phi_qoverp", &mu_calo_trackcov_phi_qoverp, &b_mu_calo_trackcov_phi_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_theta_qoverp", &mu_calo_trackcov_theta_qoverp, &b_mu_calo_trackcov_theta_qoverp);
   fChain->SetBranchAddress("mu_calo_trackfitchi2", &mu_calo_trackfitchi2, &b_mu_calo_trackfitchi2);
   fChain->SetBranchAddress("mu_calo_trackfitndof", &mu_calo_trackfitndof, &b_mu_calo_trackfitndof);
   fChain->SetBranchAddress("mu_calo_hastrack", &mu_calo_hastrack, &b_mu_calo_hastrack);
   fChain->SetBranchAddress("mu_calo_trackd0beam", &mu_calo_trackd0beam, &b_mu_calo_trackd0beam);
   fChain->SetBranchAddress("mu_calo_trackz0beam", &mu_calo_trackz0beam, &b_mu_calo_trackz0beam);
   fChain->SetBranchAddress("mu_calo_tracksigd0beam", &mu_calo_tracksigd0beam, &b_mu_calo_tracksigd0beam);
   fChain->SetBranchAddress("mu_calo_tracksigz0beam", &mu_calo_tracksigz0beam, &b_mu_calo_tracksigz0beam);
   fChain->SetBranchAddress("mu_calo_trackd0pv", &mu_calo_trackd0pv, &b_mu_calo_trackd0pv);
   fChain->SetBranchAddress("mu_calo_trackz0pv", &mu_calo_trackz0pv, &b_mu_calo_trackz0pv);
   fChain->SetBranchAddress("mu_calo_tracksigd0pv", &mu_calo_tracksigd0pv, &b_mu_calo_tracksigd0pv);
   fChain->SetBranchAddress("mu_calo_tracksigz0pv", &mu_calo_tracksigz0pv, &b_mu_calo_tracksigz0pv);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_d0_biasedpvunbiased", &mu_calo_trackIPEstimate_d0_biasedpvunbiased, &b_mu_calo_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_z0_biasedpvunbiased", &mu_calo_trackIPEstimate_z0_biasedpvunbiased, &b_mu_calo_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_sigd0_biasedpvunbiased", &mu_calo_trackIPEstimate_sigd0_biasedpvunbiased, &b_mu_calo_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_sigz0_biasedpvunbiased", &mu_calo_trackIPEstimate_sigz0_biasedpvunbiased, &b_mu_calo_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_d0_unbiasedpvunbiased", &mu_calo_trackIPEstimate_d0_unbiasedpvunbiased, &b_mu_calo_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_z0_unbiasedpvunbiased", &mu_calo_trackIPEstimate_z0_unbiasedpvunbiased, &b_mu_calo_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased", &mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased", &mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackd0pvunbiased", &mu_calo_trackd0pvunbiased, &b_mu_calo_trackd0pvunbiased);
   fChain->SetBranchAddress("mu_calo_trackz0pvunbiased", &mu_calo_trackz0pvunbiased, &b_mu_calo_trackz0pvunbiased);
   fChain->SetBranchAddress("mu_calo_tracksigd0pvunbiased", &mu_calo_tracksigd0pvunbiased, &b_mu_calo_tracksigd0pvunbiased);
   fChain->SetBranchAddress("mu_calo_tracksigz0pvunbiased", &mu_calo_tracksigz0pvunbiased, &b_mu_calo_tracksigz0pvunbiased);
   fChain->SetBranchAddress("mu_calo_CaloCell_sampling", &mu_calo_CaloCell_sampling, &b_mu_calo_CaloCell_sampling);
   fChain->SetBranchAddress("mu_calo_CaloCell_eta", &mu_calo_CaloCell_eta, &b_mu_calo_CaloCell_eta);
   fChain->SetBranchAddress("mu_calo_CaloCell_phi", &mu_calo_CaloCell_phi, &b_mu_calo_CaloCell_phi);
   fChain->SetBranchAddress("mu_calo_CaloCell_dr", &mu_calo_CaloCell_dr, &b_mu_calo_CaloCell_dr);
   fChain->SetBranchAddress("mu_calo_CaloCell_E", &mu_calo_CaloCell_E, &b_mu_calo_CaloCell_E);
   fChain->SetBranchAddress("mu_calo_CaloCell_t", &mu_calo_CaloCell_t, &b_mu_calo_CaloCell_t);
   fChain->SetBranchAddress("mu_calo_CaloCell_x", &mu_calo_CaloCell_x, &b_mu_calo_CaloCell_x);
   fChain->SetBranchAddress("mu_calo_CaloCell_y", &mu_calo_CaloCell_y, &b_mu_calo_CaloCell_y);
   fChain->SetBranchAddress("mu_calo_CaloCell_z", &mu_calo_CaloCell_z, &b_mu_calo_CaloCell_z);
   fChain->SetBranchAddress("mu_calo_TileBeta", &mu_calo_TileBeta, &b_mu_calo_TileBeta);
   fChain->SetBranchAddress("mu_calo_TileBetaMass", &mu_calo_TileBetaMass, &b_mu_calo_TileBetaMass);
   fChain->SetBranchAddress("mu_calo_meandADC", &mu_calo_meandADC, &b_mu_calo_meandADC);
   fChain->SetBranchAddress("mu_calo_stau_candidate_assoc_index", &mu_calo_stau_candidate_assoc_index, &b_mu_calo_stau_candidate_assoc_index);
   fChain->SetBranchAddress("mu_mugirl_n", &mu_mugirl_n, &b_mu_mugirl_n);
   fChain->SetBranchAddress("mu_mugirl_E", &mu_mugirl_E, &b_mu_mugirl_E);
   fChain->SetBranchAddress("mu_mugirl_pt", &mu_mugirl_pt, &b_mu_mugirl_pt);
   fChain->SetBranchAddress("mu_mugirl_m", &mu_mugirl_m, &b_mu_mugirl_m);
   fChain->SetBranchAddress("mu_mugirl_eta", &mu_mugirl_eta, &b_mu_mugirl_eta);
   fChain->SetBranchAddress("mu_mugirl_phi", &mu_mugirl_phi, &b_mu_mugirl_phi);
   fChain->SetBranchAddress("mu_mugirl_px", &mu_mugirl_px, &b_mu_mugirl_px);
   fChain->SetBranchAddress("mu_mugirl_py", &mu_mugirl_py, &b_mu_mugirl_py);
   fChain->SetBranchAddress("mu_mugirl_pz", &mu_mugirl_pz, &b_mu_mugirl_pz);
   fChain->SetBranchAddress("mu_mugirl_charge", &mu_mugirl_charge, &b_mu_mugirl_charge);
   fChain->SetBranchAddress("mu_mugirl_allauthor", &mu_mugirl_allauthor, &b_mu_mugirl_allauthor);
   fChain->SetBranchAddress("mu_mugirl_author", &mu_mugirl_author, &b_mu_mugirl_author);
   fChain->SetBranchAddress("mu_mugirl_beta", &mu_mugirl_beta, &b_mu_mugirl_beta);
   fChain->SetBranchAddress("mu_mugirl_isMuonLikelihood", &mu_mugirl_isMuonLikelihood, &b_mu_mugirl_isMuonLikelihood);
   fChain->SetBranchAddress("mu_mugirl_matchchi2", &mu_mugirl_matchchi2, &b_mu_mugirl_matchchi2);
   fChain->SetBranchAddress("mu_mugirl_matchndof", &mu_mugirl_matchndof, &b_mu_mugirl_matchndof);
   fChain->SetBranchAddress("mu_mugirl_etcone20", &mu_mugirl_etcone20, &b_mu_mugirl_etcone20);
   fChain->SetBranchAddress("mu_mugirl_etcone30", &mu_mugirl_etcone30, &b_mu_mugirl_etcone30);
   fChain->SetBranchAddress("mu_mugirl_etcone40", &mu_mugirl_etcone40, &b_mu_mugirl_etcone40);
   fChain->SetBranchAddress("mu_mugirl_nucone20", &mu_mugirl_nucone20, &b_mu_mugirl_nucone20);
   fChain->SetBranchAddress("mu_mugirl_nucone30", &mu_mugirl_nucone30, &b_mu_mugirl_nucone30);
   fChain->SetBranchAddress("mu_mugirl_nucone40", &mu_mugirl_nucone40, &b_mu_mugirl_nucone40);
   fChain->SetBranchAddress("mu_mugirl_ptcone20", &mu_mugirl_ptcone20, &b_mu_mugirl_ptcone20);
   fChain->SetBranchAddress("mu_mugirl_ptcone30", &mu_mugirl_ptcone30, &b_mu_mugirl_ptcone30);
   fChain->SetBranchAddress("mu_mugirl_ptcone40", &mu_mugirl_ptcone40, &b_mu_mugirl_ptcone40);
   fChain->SetBranchAddress("mu_mugirl_etconeNoEm10", &mu_mugirl_etconeNoEm10, &b_mu_mugirl_etconeNoEm10);
   fChain->SetBranchAddress("mu_mugirl_etconeNoEm20", &mu_mugirl_etconeNoEm20, &b_mu_mugirl_etconeNoEm20);
   fChain->SetBranchAddress("mu_mugirl_etconeNoEm30", &mu_mugirl_etconeNoEm30, &b_mu_mugirl_etconeNoEm30);
   fChain->SetBranchAddress("mu_mugirl_etconeNoEm40", &mu_mugirl_etconeNoEm40, &b_mu_mugirl_etconeNoEm40);
   fChain->SetBranchAddress("mu_mugirl_scatteringCurvatureSignificance", &mu_mugirl_scatteringCurvatureSignificance, &b_mu_mugirl_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("mu_mugirl_scatteringNeighbourSignificance", &mu_mugirl_scatteringNeighbourSignificance, &b_mu_mugirl_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("mu_mugirl_momentumBalanceSignificance", &mu_mugirl_momentumBalanceSignificance, &b_mu_mugirl_momentumBalanceSignificance);
   fChain->SetBranchAddress("mu_mugirl_energyLossPar", &mu_mugirl_energyLossPar, &b_mu_mugirl_energyLossPar);
   fChain->SetBranchAddress("mu_mugirl_energyLossErr", &mu_mugirl_energyLossErr, &b_mu_mugirl_energyLossErr);
   fChain->SetBranchAddress("mu_mugirl_etCore", &mu_mugirl_etCore, &b_mu_mugirl_etCore);
   fChain->SetBranchAddress("mu_mugirl_energyLossType", &mu_mugirl_energyLossType, &b_mu_mugirl_energyLossType);
   fChain->SetBranchAddress("mu_mugirl_caloMuonIdTag", &mu_mugirl_caloMuonIdTag, &b_mu_mugirl_caloMuonIdTag);
   fChain->SetBranchAddress("mu_mugirl_caloLRLikelihood", &mu_mugirl_caloLRLikelihood, &b_mu_mugirl_caloLRLikelihood);
   fChain->SetBranchAddress("mu_mugirl_bestMatch", &mu_mugirl_bestMatch, &b_mu_mugirl_bestMatch);
   fChain->SetBranchAddress("mu_mugirl_isStandAloneMuon", &mu_mugirl_isStandAloneMuon, &b_mu_mugirl_isStandAloneMuon);
   fChain->SetBranchAddress("mu_mugirl_isCombinedMuon", &mu_mugirl_isCombinedMuon, &b_mu_mugirl_isCombinedMuon);
   fChain->SetBranchAddress("mu_mugirl_isLowPtReconstructedMuon", &mu_mugirl_isLowPtReconstructedMuon, &b_mu_mugirl_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_mugirl_isSegmentTaggedMuon", &mu_mugirl_isSegmentTaggedMuon, &b_mu_mugirl_isSegmentTaggedMuon);
   fChain->SetBranchAddress("mu_mugirl_isCaloMuonId", &mu_mugirl_isCaloMuonId, &b_mu_mugirl_isCaloMuonId);
   fChain->SetBranchAddress("mu_mugirl_alsoFoundByLowPt", &mu_mugirl_alsoFoundByLowPt, &b_mu_mugirl_alsoFoundByLowPt);
   fChain->SetBranchAddress("mu_mugirl_alsoFoundByCaloMuonId", &mu_mugirl_alsoFoundByCaloMuonId, &b_mu_mugirl_alsoFoundByCaloMuonId);
   fChain->SetBranchAddress("mu_mugirl_isSiliconAssociatedForwardMuon", &mu_mugirl_isSiliconAssociatedForwardMuon, &b_mu_mugirl_isSiliconAssociatedForwardMuon);
   fChain->SetBranchAddress("mu_mugirl_loose", &mu_mugirl_loose, &b_mu_mugirl_loose);
   fChain->SetBranchAddress("mu_mugirl_medium", &mu_mugirl_medium, &b_mu_mugirl_medium);
   fChain->SetBranchAddress("mu_mugirl_tight", &mu_mugirl_tight, &b_mu_mugirl_tight);
   fChain->SetBranchAddress("mu_mugirl_d0_exPV", &mu_mugirl_d0_exPV, &b_mu_mugirl_d0_exPV);
   fChain->SetBranchAddress("mu_mugirl_z0_exPV", &mu_mugirl_z0_exPV, &b_mu_mugirl_z0_exPV);
   fChain->SetBranchAddress("mu_mugirl_phi_exPV", &mu_mugirl_phi_exPV, &b_mu_mugirl_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_theta_exPV", &mu_mugirl_theta_exPV, &b_mu_mugirl_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_qoverp_exPV", &mu_mugirl_qoverp_exPV, &b_mu_mugirl_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_cb_d0_exPV", &mu_mugirl_cb_d0_exPV, &b_mu_mugirl_cb_d0_exPV);
   fChain->SetBranchAddress("mu_mugirl_cb_z0_exPV", &mu_mugirl_cb_z0_exPV, &b_mu_mugirl_cb_z0_exPV);
   fChain->SetBranchAddress("mu_mugirl_cb_phi_exPV", &mu_mugirl_cb_phi_exPV, &b_mu_mugirl_cb_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_cb_theta_exPV", &mu_mugirl_cb_theta_exPV, &b_mu_mugirl_cb_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_cb_qoverp_exPV", &mu_mugirl_cb_qoverp_exPV, &b_mu_mugirl_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_d0_exPV", &mu_mugirl_id_d0_exPV, &b_mu_mugirl_id_d0_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_z0_exPV", &mu_mugirl_id_z0_exPV, &b_mu_mugirl_id_z0_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_phi_exPV", &mu_mugirl_id_phi_exPV, &b_mu_mugirl_id_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_theta_exPV", &mu_mugirl_id_theta_exPV, &b_mu_mugirl_id_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_qoverp_exPV", &mu_mugirl_id_qoverp_exPV, &b_mu_mugirl_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_d0_exPV", &mu_mugirl_me_d0_exPV, &b_mu_mugirl_me_d0_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_z0_exPV", &mu_mugirl_me_z0_exPV, &b_mu_mugirl_me_z0_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_phi_exPV", &mu_mugirl_me_phi_exPV, &b_mu_mugirl_me_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_theta_exPV", &mu_mugirl_me_theta_exPV, &b_mu_mugirl_me_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_qoverp_exPV", &mu_mugirl_me_qoverp_exPV, &b_mu_mugirl_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_ie_d0_exPV", &mu_mugirl_ie_d0_exPV, &b_mu_mugirl_ie_d0_exPV);
   fChain->SetBranchAddress("mu_mugirl_ie_z0_exPV", &mu_mugirl_ie_z0_exPV, &b_mu_mugirl_ie_z0_exPV);
   fChain->SetBranchAddress("mu_mugirl_ie_phi_exPV", &mu_mugirl_ie_phi_exPV, &b_mu_mugirl_ie_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_ie_theta_exPV", &mu_mugirl_ie_theta_exPV, &b_mu_mugirl_ie_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_ie_qoverp_exPV", &mu_mugirl_ie_qoverp_exPV, &b_mu_mugirl_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_SpaceTime_detID", &mu_mugirl_SpaceTime_detID, &b_mu_mugirl_SpaceTime_detID);
   fChain->SetBranchAddress("mu_mugirl_SpaceTime_t", &mu_mugirl_SpaceTime_t, &b_mu_mugirl_SpaceTime_t);
   fChain->SetBranchAddress("mu_mugirl_SpaceTime_tError", &mu_mugirl_SpaceTime_tError, &b_mu_mugirl_SpaceTime_tError);
   fChain->SetBranchAddress("mu_mugirl_SpaceTime_weight", &mu_mugirl_SpaceTime_weight, &b_mu_mugirl_SpaceTime_weight);
   fChain->SetBranchAddress("mu_mugirl_SpaceTime_x", &mu_mugirl_SpaceTime_x, &b_mu_mugirl_SpaceTime_x);
   fChain->SetBranchAddress("mu_mugirl_SpaceTime_y", &mu_mugirl_SpaceTime_y, &b_mu_mugirl_SpaceTime_y);
   fChain->SetBranchAddress("mu_mugirl_SpaceTime_z", &mu_mugirl_SpaceTime_z, &b_mu_mugirl_SpaceTime_z);
   fChain->SetBranchAddress("mu_mugirl_cov_d0_exPV", &mu_mugirl_cov_d0_exPV, &b_mu_mugirl_cov_d0_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_z0_exPV", &mu_mugirl_cov_z0_exPV, &b_mu_mugirl_cov_z0_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_phi_exPV", &mu_mugirl_cov_phi_exPV, &b_mu_mugirl_cov_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_theta_exPV", &mu_mugirl_cov_theta_exPV, &b_mu_mugirl_cov_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_qoverp_exPV", &mu_mugirl_cov_qoverp_exPV, &b_mu_mugirl_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_d0_z0_exPV", &mu_mugirl_cov_d0_z0_exPV, &b_mu_mugirl_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_d0_phi_exPV", &mu_mugirl_cov_d0_phi_exPV, &b_mu_mugirl_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_d0_theta_exPV", &mu_mugirl_cov_d0_theta_exPV, &b_mu_mugirl_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_d0_qoverp_exPV", &mu_mugirl_cov_d0_qoverp_exPV, &b_mu_mugirl_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_z0_phi_exPV", &mu_mugirl_cov_z0_phi_exPV, &b_mu_mugirl_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_z0_theta_exPV", &mu_mugirl_cov_z0_theta_exPV, &b_mu_mugirl_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_z0_qoverp_exPV", &mu_mugirl_cov_z0_qoverp_exPV, &b_mu_mugirl_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_phi_theta_exPV", &mu_mugirl_cov_phi_theta_exPV, &b_mu_mugirl_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_phi_qoverp_exPV", &mu_mugirl_cov_phi_qoverp_exPV, &b_mu_mugirl_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_cov_theta_qoverp_exPV", &mu_mugirl_cov_theta_qoverp_exPV, &b_mu_mugirl_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_d0_exPV", &mu_mugirl_id_cov_d0_exPV, &b_mu_mugirl_id_cov_d0_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_z0_exPV", &mu_mugirl_id_cov_z0_exPV, &b_mu_mugirl_id_cov_z0_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_phi_exPV", &mu_mugirl_id_cov_phi_exPV, &b_mu_mugirl_id_cov_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_theta_exPV", &mu_mugirl_id_cov_theta_exPV, &b_mu_mugirl_id_cov_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_qoverp_exPV", &mu_mugirl_id_cov_qoverp_exPV, &b_mu_mugirl_id_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_d0_z0_exPV", &mu_mugirl_id_cov_d0_z0_exPV, &b_mu_mugirl_id_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_d0_phi_exPV", &mu_mugirl_id_cov_d0_phi_exPV, &b_mu_mugirl_id_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_d0_theta_exPV", &mu_mugirl_id_cov_d0_theta_exPV, &b_mu_mugirl_id_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_d0_qoverp_exPV", &mu_mugirl_id_cov_d0_qoverp_exPV, &b_mu_mugirl_id_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_z0_phi_exPV", &mu_mugirl_id_cov_z0_phi_exPV, &b_mu_mugirl_id_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_z0_theta_exPV", &mu_mugirl_id_cov_z0_theta_exPV, &b_mu_mugirl_id_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_z0_qoverp_exPV", &mu_mugirl_id_cov_z0_qoverp_exPV, &b_mu_mugirl_id_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_phi_theta_exPV", &mu_mugirl_id_cov_phi_theta_exPV, &b_mu_mugirl_id_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_phi_qoverp_exPV", &mu_mugirl_id_cov_phi_qoverp_exPV, &b_mu_mugirl_id_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_id_cov_theta_qoverp_exPV", &mu_mugirl_id_cov_theta_qoverp_exPV, &b_mu_mugirl_id_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_d0_exPV", &mu_mugirl_me_cov_d0_exPV, &b_mu_mugirl_me_cov_d0_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_z0_exPV", &mu_mugirl_me_cov_z0_exPV, &b_mu_mugirl_me_cov_z0_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_phi_exPV", &mu_mugirl_me_cov_phi_exPV, &b_mu_mugirl_me_cov_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_theta_exPV", &mu_mugirl_me_cov_theta_exPV, &b_mu_mugirl_me_cov_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_qoverp_exPV", &mu_mugirl_me_cov_qoverp_exPV, &b_mu_mugirl_me_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_d0_z0_exPV", &mu_mugirl_me_cov_d0_z0_exPV, &b_mu_mugirl_me_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_d0_phi_exPV", &mu_mugirl_me_cov_d0_phi_exPV, &b_mu_mugirl_me_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_d0_theta_exPV", &mu_mugirl_me_cov_d0_theta_exPV, &b_mu_mugirl_me_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_d0_qoverp_exPV", &mu_mugirl_me_cov_d0_qoverp_exPV, &b_mu_mugirl_me_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_z0_phi_exPV", &mu_mugirl_me_cov_z0_phi_exPV, &b_mu_mugirl_me_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_z0_theta_exPV", &mu_mugirl_me_cov_z0_theta_exPV, &b_mu_mugirl_me_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_z0_qoverp_exPV", &mu_mugirl_me_cov_z0_qoverp_exPV, &b_mu_mugirl_me_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_phi_theta_exPV", &mu_mugirl_me_cov_phi_theta_exPV, &b_mu_mugirl_me_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_phi_qoverp_exPV", &mu_mugirl_me_cov_phi_qoverp_exPV, &b_mu_mugirl_me_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_me_cov_theta_qoverp_exPV", &mu_mugirl_me_cov_theta_qoverp_exPV, &b_mu_mugirl_me_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_mugirl_ms_d0", &mu_mugirl_ms_d0, &b_mu_mugirl_ms_d0);
   fChain->SetBranchAddress("mu_mugirl_ms_z0", &mu_mugirl_ms_z0, &b_mu_mugirl_ms_z0);
   fChain->SetBranchAddress("mu_mugirl_ms_phi", &mu_mugirl_ms_phi, &b_mu_mugirl_ms_phi);
   fChain->SetBranchAddress("mu_mugirl_ms_theta", &mu_mugirl_ms_theta, &b_mu_mugirl_ms_theta);
   fChain->SetBranchAddress("mu_mugirl_ms_qoverp", &mu_mugirl_ms_qoverp, &b_mu_mugirl_ms_qoverp);
   fChain->SetBranchAddress("mu_mugirl_id_d0", &mu_mugirl_id_d0, &b_mu_mugirl_id_d0);
   fChain->SetBranchAddress("mu_mugirl_id_z0", &mu_mugirl_id_z0, &b_mu_mugirl_id_z0);
   fChain->SetBranchAddress("mu_mugirl_id_phi", &mu_mugirl_id_phi, &b_mu_mugirl_id_phi);
   fChain->SetBranchAddress("mu_mugirl_id_theta", &mu_mugirl_id_theta, &b_mu_mugirl_id_theta);
   fChain->SetBranchAddress("mu_mugirl_id_qoverp", &mu_mugirl_id_qoverp, &b_mu_mugirl_id_qoverp);
   fChain->SetBranchAddress("mu_mugirl_me_d0", &mu_mugirl_me_d0, &b_mu_mugirl_me_d0);
   fChain->SetBranchAddress("mu_mugirl_me_z0", &mu_mugirl_me_z0, &b_mu_mugirl_me_z0);
   fChain->SetBranchAddress("mu_mugirl_me_phi", &mu_mugirl_me_phi, &b_mu_mugirl_me_phi);
   fChain->SetBranchAddress("mu_mugirl_me_theta", &mu_mugirl_me_theta, &b_mu_mugirl_me_theta);
   fChain->SetBranchAddress("mu_mugirl_me_qoverp", &mu_mugirl_me_qoverp, &b_mu_mugirl_me_qoverp);
   fChain->SetBranchAddress("mu_mugirl_ie_d0", &mu_mugirl_ie_d0, &b_mu_mugirl_ie_d0);
   fChain->SetBranchAddress("mu_mugirl_ie_z0", &mu_mugirl_ie_z0, &b_mu_mugirl_ie_z0);
   fChain->SetBranchAddress("mu_mugirl_ie_phi", &mu_mugirl_ie_phi, &b_mu_mugirl_ie_phi);
   fChain->SetBranchAddress("mu_mugirl_ie_theta", &mu_mugirl_ie_theta, &b_mu_mugirl_ie_theta);
   fChain->SetBranchAddress("mu_mugirl_ie_qoverp", &mu_mugirl_ie_qoverp, &b_mu_mugirl_ie_qoverp);
   fChain->SetBranchAddress("mu_mugirl_nOutliersOnTrack", &mu_mugirl_nOutliersOnTrack, &b_mu_mugirl_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_mugirl_nBLHits", &mu_mugirl_nBLHits, &b_mu_mugirl_nBLHits);
   fChain->SetBranchAddress("mu_mugirl_nPixHits", &mu_mugirl_nPixHits, &b_mu_mugirl_nPixHits);
   fChain->SetBranchAddress("mu_mugirl_nSCTHits", &mu_mugirl_nSCTHits, &b_mu_mugirl_nSCTHits);
   fChain->SetBranchAddress("mu_mugirl_nTRTHits", &mu_mugirl_nTRTHits, &b_mu_mugirl_nTRTHits);
   fChain->SetBranchAddress("mu_mugirl_nTRTHighTHits", &mu_mugirl_nTRTHighTHits, &b_mu_mugirl_nTRTHighTHits);
   fChain->SetBranchAddress("mu_mugirl_nBLSharedHits", &mu_mugirl_nBLSharedHits, &b_mu_mugirl_nBLSharedHits);
   fChain->SetBranchAddress("mu_mugirl_nPixSharedHits", &mu_mugirl_nPixSharedHits, &b_mu_mugirl_nPixSharedHits);
   fChain->SetBranchAddress("mu_mugirl_nPixHoles", &mu_mugirl_nPixHoles, &b_mu_mugirl_nPixHoles);
   fChain->SetBranchAddress("mu_mugirl_nSCTSharedHits", &mu_mugirl_nSCTSharedHits, &b_mu_mugirl_nSCTSharedHits);
   fChain->SetBranchAddress("mu_mugirl_nSCTHoles", &mu_mugirl_nSCTHoles, &b_mu_mugirl_nSCTHoles);
   fChain->SetBranchAddress("mu_mugirl_nTRTOutliers", &mu_mugirl_nTRTOutliers, &b_mu_mugirl_nTRTOutliers);
   fChain->SetBranchAddress("mu_mugirl_nTRTHighTOutliers", &mu_mugirl_nTRTHighTOutliers, &b_mu_mugirl_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_mugirl_nGangedPixels", &mu_mugirl_nGangedPixels, &b_mu_mugirl_nGangedPixels);
   fChain->SetBranchAddress("mu_mugirl_nPixelDeadSensors", &mu_mugirl_nPixelDeadSensors, &b_mu_mugirl_nPixelDeadSensors);
   fChain->SetBranchAddress("mu_mugirl_nSCTDeadSensors", &mu_mugirl_nSCTDeadSensors, &b_mu_mugirl_nSCTDeadSensors);
   fChain->SetBranchAddress("mu_mugirl_nTRTDeadStraws", &mu_mugirl_nTRTDeadStraws, &b_mu_mugirl_nTRTDeadStraws);
   fChain->SetBranchAddress("mu_mugirl_expectBLayerHit", &mu_mugirl_expectBLayerHit, &b_mu_mugirl_expectBLayerHit);
   fChain->SetBranchAddress("mu_mugirl_nMDTHits", &mu_mugirl_nMDTHits, &b_mu_mugirl_nMDTHits);
   fChain->SetBranchAddress("mu_mugirl_nMDTHoles", &mu_mugirl_nMDTHoles, &b_mu_mugirl_nMDTHoles);
   fChain->SetBranchAddress("mu_mugirl_nCSCEtaHits", &mu_mugirl_nCSCEtaHits, &b_mu_mugirl_nCSCEtaHits);
   fChain->SetBranchAddress("mu_mugirl_nCSCEtaHoles", &mu_mugirl_nCSCEtaHoles, &b_mu_mugirl_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_mugirl_nCSCUnspoiledEtaHits", &mu_mugirl_nCSCUnspoiledEtaHits, &b_mu_mugirl_nCSCUnspoiledEtaHits);
   fChain->SetBranchAddress("mu_mugirl_nCSCPhiHits", &mu_mugirl_nCSCPhiHits, &b_mu_mugirl_nCSCPhiHits);
   fChain->SetBranchAddress("mu_mugirl_nCSCPhiHoles", &mu_mugirl_nCSCPhiHoles, &b_mu_mugirl_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_mugirl_nRPCEtaHits", &mu_mugirl_nRPCEtaHits, &b_mu_mugirl_nRPCEtaHits);
   fChain->SetBranchAddress("mu_mugirl_nRPCEtaHoles", &mu_mugirl_nRPCEtaHoles, &b_mu_mugirl_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_mugirl_nRPCPhiHits", &mu_mugirl_nRPCPhiHits, &b_mu_mugirl_nRPCPhiHits);
   fChain->SetBranchAddress("mu_mugirl_nRPCPhiHoles", &mu_mugirl_nRPCPhiHoles, &b_mu_mugirl_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_mugirl_nTGCEtaHits", &mu_mugirl_nTGCEtaHits, &b_mu_mugirl_nTGCEtaHits);
   fChain->SetBranchAddress("mu_mugirl_nTGCEtaHoles", &mu_mugirl_nTGCEtaHoles, &b_mu_mugirl_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_mugirl_nTGCPhiHits", &mu_mugirl_nTGCPhiHits, &b_mu_mugirl_nTGCPhiHits);
   fChain->SetBranchAddress("mu_mugirl_nTGCPhiHoles", &mu_mugirl_nTGCPhiHoles, &b_mu_mugirl_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_mugirl_nprecisionLayers", &mu_mugirl_nprecisionLayers, &b_mu_mugirl_nprecisionLayers);
   fChain->SetBranchAddress("mu_mugirl_nprecisionHoleLayers", &mu_mugirl_nprecisionHoleLayers, &b_mu_mugirl_nprecisionHoleLayers);
   fChain->SetBranchAddress("mu_mugirl_nphiLayers", &mu_mugirl_nphiLayers, &b_mu_mugirl_nphiLayers);
   fChain->SetBranchAddress("mu_mugirl_ntrigEtaLayers", &mu_mugirl_ntrigEtaLayers, &b_mu_mugirl_ntrigEtaLayers);
   fChain->SetBranchAddress("mu_mugirl_nphiHoleLayers", &mu_mugirl_nphiHoleLayers, &b_mu_mugirl_nphiHoleLayers);
   fChain->SetBranchAddress("mu_mugirl_ntrigEtaHoleLayers", &mu_mugirl_ntrigEtaHoleLayers, &b_mu_mugirl_ntrigEtaHoleLayers);
   fChain->SetBranchAddress("mu_mugirl_nMDTBIHits", &mu_mugirl_nMDTBIHits, &b_mu_mugirl_nMDTBIHits);
   fChain->SetBranchAddress("mu_mugirl_nMDTBMHits", &mu_mugirl_nMDTBMHits, &b_mu_mugirl_nMDTBMHits);
   fChain->SetBranchAddress("mu_mugirl_nMDTBOHits", &mu_mugirl_nMDTBOHits, &b_mu_mugirl_nMDTBOHits);
   fChain->SetBranchAddress("mu_mugirl_nMDTBEEHits", &mu_mugirl_nMDTBEEHits, &b_mu_mugirl_nMDTBEEHits);
   fChain->SetBranchAddress("mu_mugirl_nMDTBIS78Hits", &mu_mugirl_nMDTBIS78Hits, &b_mu_mugirl_nMDTBIS78Hits);
   fChain->SetBranchAddress("mu_mugirl_nMDTEIHits", &mu_mugirl_nMDTEIHits, &b_mu_mugirl_nMDTEIHits);
   fChain->SetBranchAddress("mu_mugirl_nMDTEMHits", &mu_mugirl_nMDTEMHits, &b_mu_mugirl_nMDTEMHits);
   fChain->SetBranchAddress("mu_mugirl_nMDTEOHits", &mu_mugirl_nMDTEOHits, &b_mu_mugirl_nMDTEOHits);
   fChain->SetBranchAddress("mu_mugirl_nMDTEEHits", &mu_mugirl_nMDTEEHits, &b_mu_mugirl_nMDTEEHits);
   fChain->SetBranchAddress("mu_mugirl_nRPCLayer1EtaHits", &mu_mugirl_nRPCLayer1EtaHits, &b_mu_mugirl_nRPCLayer1EtaHits);
   fChain->SetBranchAddress("mu_mugirl_nRPCLayer2EtaHits", &mu_mugirl_nRPCLayer2EtaHits, &b_mu_mugirl_nRPCLayer2EtaHits);
   fChain->SetBranchAddress("mu_mugirl_nRPCLayer3EtaHits", &mu_mugirl_nRPCLayer3EtaHits, &b_mu_mugirl_nRPCLayer3EtaHits);
   fChain->SetBranchAddress("mu_mugirl_nRPCLayer1PhiHits", &mu_mugirl_nRPCLayer1PhiHits, &b_mu_mugirl_nRPCLayer1PhiHits);
   fChain->SetBranchAddress("mu_mugirl_nRPCLayer2PhiHits", &mu_mugirl_nRPCLayer2PhiHits, &b_mu_mugirl_nRPCLayer2PhiHits);
   fChain->SetBranchAddress("mu_mugirl_nRPCLayer3PhiHits", &mu_mugirl_nRPCLayer3PhiHits, &b_mu_mugirl_nRPCLayer3PhiHits);
   fChain->SetBranchAddress("mu_mugirl_nTGCLayer1EtaHits", &mu_mugirl_nTGCLayer1EtaHits, &b_mu_mugirl_nTGCLayer1EtaHits);
   fChain->SetBranchAddress("mu_mugirl_nTGCLayer2EtaHits", &mu_mugirl_nTGCLayer2EtaHits, &b_mu_mugirl_nTGCLayer2EtaHits);
   fChain->SetBranchAddress("mu_mugirl_nTGCLayer3EtaHits", &mu_mugirl_nTGCLayer3EtaHits, &b_mu_mugirl_nTGCLayer3EtaHits);
   fChain->SetBranchAddress("mu_mugirl_nTGCLayer4EtaHits", &mu_mugirl_nTGCLayer4EtaHits, &b_mu_mugirl_nTGCLayer4EtaHits);
   fChain->SetBranchAddress("mu_mugirl_nTGCLayer1PhiHits", &mu_mugirl_nTGCLayer1PhiHits, &b_mu_mugirl_nTGCLayer1PhiHits);
   fChain->SetBranchAddress("mu_mugirl_nTGCLayer2PhiHits", &mu_mugirl_nTGCLayer2PhiHits, &b_mu_mugirl_nTGCLayer2PhiHits);
   fChain->SetBranchAddress("mu_mugirl_nTGCLayer3PhiHits", &mu_mugirl_nTGCLayer3PhiHits, &b_mu_mugirl_nTGCLayer3PhiHits);
   fChain->SetBranchAddress("mu_mugirl_nTGCLayer4PhiHits", &mu_mugirl_nTGCLayer4PhiHits, &b_mu_mugirl_nTGCLayer4PhiHits);
   fChain->SetBranchAddress("mu_mugirl_barrelSectors", &mu_mugirl_barrelSectors, &b_mu_mugirl_barrelSectors);
   fChain->SetBranchAddress("mu_mugirl_endcapSectors", &mu_mugirl_endcapSectors, &b_mu_mugirl_endcapSectors);
   fChain->SetBranchAddress("mu_mugirl_trackd0", &mu_mugirl_trackd0, &b_mu_mugirl_trackd0);
   fChain->SetBranchAddress("mu_mugirl_trackz0", &mu_mugirl_trackz0, &b_mu_mugirl_trackz0);
   fChain->SetBranchAddress("mu_mugirl_trackphi", &mu_mugirl_trackphi, &b_mu_mugirl_trackphi);
   fChain->SetBranchAddress("mu_mugirl_tracktheta", &mu_mugirl_tracktheta, &b_mu_mugirl_tracktheta);
   fChain->SetBranchAddress("mu_mugirl_trackqoverp", &mu_mugirl_trackqoverp, &b_mu_mugirl_trackqoverp);
   fChain->SetBranchAddress("mu_mugirl_trackcov_d0", &mu_mugirl_trackcov_d0, &b_mu_mugirl_trackcov_d0);
   fChain->SetBranchAddress("mu_mugirl_trackcov_z0", &mu_mugirl_trackcov_z0, &b_mu_mugirl_trackcov_z0);
   fChain->SetBranchAddress("mu_mugirl_trackcov_phi", &mu_mugirl_trackcov_phi, &b_mu_mugirl_trackcov_phi);
   fChain->SetBranchAddress("mu_mugirl_trackcov_theta", &mu_mugirl_trackcov_theta, &b_mu_mugirl_trackcov_theta);
   fChain->SetBranchAddress("mu_mugirl_trackcov_qoverp", &mu_mugirl_trackcov_qoverp, &b_mu_mugirl_trackcov_qoverp);
   fChain->SetBranchAddress("mu_mugirl_trackcov_d0_z0", &mu_mugirl_trackcov_d0_z0, &b_mu_mugirl_trackcov_d0_z0);
   fChain->SetBranchAddress("mu_mugirl_trackcov_d0_phi", &mu_mugirl_trackcov_d0_phi, &b_mu_mugirl_trackcov_d0_phi);
   fChain->SetBranchAddress("mu_mugirl_trackcov_d0_theta", &mu_mugirl_trackcov_d0_theta, &b_mu_mugirl_trackcov_d0_theta);
   fChain->SetBranchAddress("mu_mugirl_trackcov_d0_qoverp", &mu_mugirl_trackcov_d0_qoverp, &b_mu_mugirl_trackcov_d0_qoverp);
   fChain->SetBranchAddress("mu_mugirl_trackcov_z0_phi", &mu_mugirl_trackcov_z0_phi, &b_mu_mugirl_trackcov_z0_phi);
   fChain->SetBranchAddress("mu_mugirl_trackcov_z0_theta", &mu_mugirl_trackcov_z0_theta, &b_mu_mugirl_trackcov_z0_theta);
   fChain->SetBranchAddress("mu_mugirl_trackcov_z0_qoverp", &mu_mugirl_trackcov_z0_qoverp, &b_mu_mugirl_trackcov_z0_qoverp);
   fChain->SetBranchAddress("mu_mugirl_trackcov_phi_theta", &mu_mugirl_trackcov_phi_theta, &b_mu_mugirl_trackcov_phi_theta);
   fChain->SetBranchAddress("mu_mugirl_trackcov_phi_qoverp", &mu_mugirl_trackcov_phi_qoverp, &b_mu_mugirl_trackcov_phi_qoverp);
   fChain->SetBranchAddress("mu_mugirl_trackcov_theta_qoverp", &mu_mugirl_trackcov_theta_qoverp, &b_mu_mugirl_trackcov_theta_qoverp);
   fChain->SetBranchAddress("mu_mugirl_trackfitchi2", &mu_mugirl_trackfitchi2, &b_mu_mugirl_trackfitchi2);
   fChain->SetBranchAddress("mu_mugirl_trackfitndof", &mu_mugirl_trackfitndof, &b_mu_mugirl_trackfitndof);
   fChain->SetBranchAddress("mu_mugirl_hastrack", &mu_mugirl_hastrack, &b_mu_mugirl_hastrack);
   fChain->SetBranchAddress("mu_mugirl_trackd0beam", &mu_mugirl_trackd0beam, &b_mu_mugirl_trackd0beam);
   fChain->SetBranchAddress("mu_mugirl_trackz0beam", &mu_mugirl_trackz0beam, &b_mu_mugirl_trackz0beam);
   fChain->SetBranchAddress("mu_mugirl_tracksigd0beam", &mu_mugirl_tracksigd0beam, &b_mu_mugirl_tracksigd0beam);
   fChain->SetBranchAddress("mu_mugirl_tracksigz0beam", &mu_mugirl_tracksigz0beam, &b_mu_mugirl_tracksigz0beam);
   fChain->SetBranchAddress("mu_mugirl_trackd0pv", &mu_mugirl_trackd0pv, &b_mu_mugirl_trackd0pv);
   fChain->SetBranchAddress("mu_mugirl_trackz0pv", &mu_mugirl_trackz0pv, &b_mu_mugirl_trackz0pv);
   fChain->SetBranchAddress("mu_mugirl_tracksigd0pv", &mu_mugirl_tracksigd0pv, &b_mu_mugirl_tracksigd0pv);
   fChain->SetBranchAddress("mu_mugirl_tracksigz0pv", &mu_mugirl_tracksigz0pv, &b_mu_mugirl_tracksigz0pv);
   fChain->SetBranchAddress("mu_mugirl_trackIPEstimate_d0_biasedpvunbiased", &mu_mugirl_trackIPEstimate_d0_biasedpvunbiased, &b_mu_mugirl_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_mugirl_trackIPEstimate_z0_biasedpvunbiased", &mu_mugirl_trackIPEstimate_z0_biasedpvunbiased, &b_mu_mugirl_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_mugirl_trackIPEstimate_sigd0_biasedpvunbiased", &mu_mugirl_trackIPEstimate_sigd0_biasedpvunbiased, &b_mu_mugirl_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_mugirl_trackIPEstimate_sigz0_biasedpvunbiased", &mu_mugirl_trackIPEstimate_sigz0_biasedpvunbiased, &b_mu_mugirl_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_mugirl_trackIPEstimate_d0_unbiasedpvunbiased", &mu_mugirl_trackIPEstimate_d0_unbiasedpvunbiased, &b_mu_mugirl_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_mugirl_trackIPEstimate_z0_unbiasedpvunbiased", &mu_mugirl_trackIPEstimate_z0_unbiasedpvunbiased, &b_mu_mugirl_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_mugirl_trackIPEstimate_sigd0_unbiasedpvunbiased", &mu_mugirl_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_mu_mugirl_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_mugirl_trackIPEstimate_sigz0_unbiasedpvunbiased", &mu_mugirl_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_mu_mugirl_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_mugirl_trackd0pvunbiased", &mu_mugirl_trackd0pvunbiased, &b_mu_mugirl_trackd0pvunbiased);
   fChain->SetBranchAddress("mu_mugirl_trackz0pvunbiased", &mu_mugirl_trackz0pvunbiased, &b_mu_mugirl_trackz0pvunbiased);
   fChain->SetBranchAddress("mu_mugirl_tracksigd0pvunbiased", &mu_mugirl_tracksigd0pvunbiased, &b_mu_mugirl_tracksigd0pvunbiased);
   fChain->SetBranchAddress("mu_mugirl_tracksigz0pvunbiased", &mu_mugirl_tracksigz0pvunbiased, &b_mu_mugirl_tracksigz0pvunbiased);
   fChain->SetBranchAddress("mu_mugirl_CaloCell_sampling", &mu_mugirl_CaloCell_sampling, &b_mu_mugirl_CaloCell_sampling);
   fChain->SetBranchAddress("mu_mugirl_CaloCell_eta", &mu_mugirl_CaloCell_eta, &b_mu_mugirl_CaloCell_eta);
   fChain->SetBranchAddress("mu_mugirl_CaloCell_phi", &mu_mugirl_CaloCell_phi, &b_mu_mugirl_CaloCell_phi);
   fChain->SetBranchAddress("mu_mugirl_CaloCell_dr", &mu_mugirl_CaloCell_dr, &b_mu_mugirl_CaloCell_dr);
   fChain->SetBranchAddress("mu_mugirl_CaloCell_E", &mu_mugirl_CaloCell_E, &b_mu_mugirl_CaloCell_E);
   fChain->SetBranchAddress("mu_mugirl_CaloCell_t", &mu_mugirl_CaloCell_t, &b_mu_mugirl_CaloCell_t);
   fChain->SetBranchAddress("mu_mugirl_CaloCell_x", &mu_mugirl_CaloCell_x, &b_mu_mugirl_CaloCell_x);
   fChain->SetBranchAddress("mu_mugirl_CaloCell_y", &mu_mugirl_CaloCell_y, &b_mu_mugirl_CaloCell_y);
   fChain->SetBranchAddress("mu_mugirl_CaloCell_z", &mu_mugirl_CaloCell_z, &b_mu_mugirl_CaloCell_z);
   fChain->SetBranchAddress("mu_mugirl_TileBeta", &mu_mugirl_TileBeta, &b_mu_mugirl_TileBeta);
   fChain->SetBranchAddress("mu_mugirl_TileBetaMass", &mu_mugirl_TileBetaMass, &b_mu_mugirl_TileBetaMass);
   fChain->SetBranchAddress("mu_mugirl_meandADC", &mu_mugirl_meandADC, &b_mu_mugirl_meandADC);
   fChain->SetBranchAddress("mu_mugirl_stau_candidate_assoc_index", &mu_mugirl_stau_candidate_assoc_index, &b_mu_mugirl_stau_candidate_assoc_index);
   fChain->SetBranchAddress("mu_lowbeta_n", &mu_lowbeta_n, &b_mu_lowbeta_n);
   fChain->SetBranchAddress("mu_lowbeta_E", &mu_lowbeta_E, &b_mu_lowbeta_E);
   fChain->SetBranchAddress("mu_lowbeta_pt", &mu_lowbeta_pt, &b_mu_lowbeta_pt);
   fChain->SetBranchAddress("mu_lowbeta_m", &mu_lowbeta_m, &b_mu_lowbeta_m);
   fChain->SetBranchAddress("mu_lowbeta_eta", &mu_lowbeta_eta, &b_mu_lowbeta_eta);
   fChain->SetBranchAddress("mu_lowbeta_phi", &mu_lowbeta_phi, &b_mu_lowbeta_phi);
   fChain->SetBranchAddress("mu_lowbeta_px", &mu_lowbeta_px, &b_mu_lowbeta_px);
   fChain->SetBranchAddress("mu_lowbeta_py", &mu_lowbeta_py, &b_mu_lowbeta_py);
   fChain->SetBranchAddress("mu_lowbeta_pz", &mu_lowbeta_pz, &b_mu_lowbeta_pz);
   fChain->SetBranchAddress("mu_lowbeta_charge", &mu_lowbeta_charge, &b_mu_lowbeta_charge);
   fChain->SetBranchAddress("mu_lowbeta_allauthor", &mu_lowbeta_allauthor, &b_mu_lowbeta_allauthor);
   fChain->SetBranchAddress("mu_lowbeta_author", &mu_lowbeta_author, &b_mu_lowbeta_author);
   fChain->SetBranchAddress("mu_lowbeta_beta", &mu_lowbeta_beta, &b_mu_lowbeta_beta);
   fChain->SetBranchAddress("mu_lowbeta_isMuonLikelihood", &mu_lowbeta_isMuonLikelihood, &b_mu_lowbeta_isMuonLikelihood);
   fChain->SetBranchAddress("mu_lowbeta_matchchi2", &mu_lowbeta_matchchi2, &b_mu_lowbeta_matchchi2);
   fChain->SetBranchAddress("mu_lowbeta_matchndof", &mu_lowbeta_matchndof, &b_mu_lowbeta_matchndof);
   fChain->SetBranchAddress("mu_lowbeta_etcone20", &mu_lowbeta_etcone20, &b_mu_lowbeta_etcone20);
   fChain->SetBranchAddress("mu_lowbeta_etcone30", &mu_lowbeta_etcone30, &b_mu_lowbeta_etcone30);
   fChain->SetBranchAddress("mu_lowbeta_etcone40", &mu_lowbeta_etcone40, &b_mu_lowbeta_etcone40);
   fChain->SetBranchAddress("mu_lowbeta_nucone20", &mu_lowbeta_nucone20, &b_mu_lowbeta_nucone20);
   fChain->SetBranchAddress("mu_lowbeta_nucone30", &mu_lowbeta_nucone30, &b_mu_lowbeta_nucone30);
   fChain->SetBranchAddress("mu_lowbeta_nucone40", &mu_lowbeta_nucone40, &b_mu_lowbeta_nucone40);
   fChain->SetBranchAddress("mu_lowbeta_ptcone20", &mu_lowbeta_ptcone20, &b_mu_lowbeta_ptcone20);
   fChain->SetBranchAddress("mu_lowbeta_ptcone30", &mu_lowbeta_ptcone30, &b_mu_lowbeta_ptcone30);
   fChain->SetBranchAddress("mu_lowbeta_ptcone40", &mu_lowbeta_ptcone40, &b_mu_lowbeta_ptcone40);
   fChain->SetBranchAddress("mu_lowbeta_etconeNoEm10", &mu_lowbeta_etconeNoEm10, &b_mu_lowbeta_etconeNoEm10);
   fChain->SetBranchAddress("mu_lowbeta_etconeNoEm20", &mu_lowbeta_etconeNoEm20, &b_mu_lowbeta_etconeNoEm20);
   fChain->SetBranchAddress("mu_lowbeta_etconeNoEm30", &mu_lowbeta_etconeNoEm30, &b_mu_lowbeta_etconeNoEm30);
   fChain->SetBranchAddress("mu_lowbeta_etconeNoEm40", &mu_lowbeta_etconeNoEm40, &b_mu_lowbeta_etconeNoEm40);
   fChain->SetBranchAddress("mu_lowbeta_scatteringCurvatureSignificance", &mu_lowbeta_scatteringCurvatureSignificance, &b_mu_lowbeta_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("mu_lowbeta_scatteringNeighbourSignificance", &mu_lowbeta_scatteringNeighbourSignificance, &b_mu_lowbeta_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("mu_lowbeta_momentumBalanceSignificance", &mu_lowbeta_momentumBalanceSignificance, &b_mu_lowbeta_momentumBalanceSignificance);
   fChain->SetBranchAddress("mu_lowbeta_energyLossPar", &mu_lowbeta_energyLossPar, &b_mu_lowbeta_energyLossPar);
   fChain->SetBranchAddress("mu_lowbeta_energyLossErr", &mu_lowbeta_energyLossErr, &b_mu_lowbeta_energyLossErr);
   fChain->SetBranchAddress("mu_lowbeta_etCore", &mu_lowbeta_etCore, &b_mu_lowbeta_etCore);
   fChain->SetBranchAddress("mu_lowbeta_energyLossType", &mu_lowbeta_energyLossType, &b_mu_lowbeta_energyLossType);
   fChain->SetBranchAddress("mu_lowbeta_caloMuonIdTag", &mu_lowbeta_caloMuonIdTag, &b_mu_lowbeta_caloMuonIdTag);
   fChain->SetBranchAddress("mu_lowbeta_caloLRLikelihood", &mu_lowbeta_caloLRLikelihood, &b_mu_lowbeta_caloLRLikelihood);
   fChain->SetBranchAddress("mu_lowbeta_bestMatch", &mu_lowbeta_bestMatch, &b_mu_lowbeta_bestMatch);
   fChain->SetBranchAddress("mu_lowbeta_isStandAloneMuon", &mu_lowbeta_isStandAloneMuon, &b_mu_lowbeta_isStandAloneMuon);
   fChain->SetBranchAddress("mu_lowbeta_isCombinedMuon", &mu_lowbeta_isCombinedMuon, &b_mu_lowbeta_isCombinedMuon);
   fChain->SetBranchAddress("mu_lowbeta_isLowPtReconstructedMuon", &mu_lowbeta_isLowPtReconstructedMuon, &b_mu_lowbeta_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_lowbeta_isSegmentTaggedMuon", &mu_lowbeta_isSegmentTaggedMuon, &b_mu_lowbeta_isSegmentTaggedMuon);
   fChain->SetBranchAddress("mu_lowbeta_isCaloMuonId", &mu_lowbeta_isCaloMuonId, &b_mu_lowbeta_isCaloMuonId);
   fChain->SetBranchAddress("mu_lowbeta_alsoFoundByLowPt", &mu_lowbeta_alsoFoundByLowPt, &b_mu_lowbeta_alsoFoundByLowPt);
   fChain->SetBranchAddress("mu_lowbeta_alsoFoundByCaloMuonId", &mu_lowbeta_alsoFoundByCaloMuonId, &b_mu_lowbeta_alsoFoundByCaloMuonId);
   fChain->SetBranchAddress("mu_lowbeta_isSiliconAssociatedForwardMuon", &mu_lowbeta_isSiliconAssociatedForwardMuon, &b_mu_lowbeta_isSiliconAssociatedForwardMuon);
   fChain->SetBranchAddress("mu_lowbeta_loose", &mu_lowbeta_loose, &b_mu_lowbeta_loose);
   fChain->SetBranchAddress("mu_lowbeta_medium", &mu_lowbeta_medium, &b_mu_lowbeta_medium);
   fChain->SetBranchAddress("mu_lowbeta_tight", &mu_lowbeta_tight, &b_mu_lowbeta_tight);
   fChain->SetBranchAddress("mu_lowbeta_d0_exPV", &mu_lowbeta_d0_exPV, &b_mu_lowbeta_d0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_z0_exPV", &mu_lowbeta_z0_exPV, &b_mu_lowbeta_z0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_phi_exPV", &mu_lowbeta_phi_exPV, &b_mu_lowbeta_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_theta_exPV", &mu_lowbeta_theta_exPV, &b_mu_lowbeta_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_qoverp_exPV", &mu_lowbeta_qoverp_exPV, &b_mu_lowbeta_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cb_d0_exPV", &mu_lowbeta_cb_d0_exPV, &b_mu_lowbeta_cb_d0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cb_z0_exPV", &mu_lowbeta_cb_z0_exPV, &b_mu_lowbeta_cb_z0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cb_phi_exPV", &mu_lowbeta_cb_phi_exPV, &b_mu_lowbeta_cb_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cb_theta_exPV", &mu_lowbeta_cb_theta_exPV, &b_mu_lowbeta_cb_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cb_qoverp_exPV", &mu_lowbeta_cb_qoverp_exPV, &b_mu_lowbeta_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_d0_exPV", &mu_lowbeta_id_d0_exPV, &b_mu_lowbeta_id_d0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_z0_exPV", &mu_lowbeta_id_z0_exPV, &b_mu_lowbeta_id_z0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_phi_exPV", &mu_lowbeta_id_phi_exPV, &b_mu_lowbeta_id_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_theta_exPV", &mu_lowbeta_id_theta_exPV, &b_mu_lowbeta_id_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_qoverp_exPV", &mu_lowbeta_id_qoverp_exPV, &b_mu_lowbeta_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_d0_exPV", &mu_lowbeta_me_d0_exPV, &b_mu_lowbeta_me_d0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_z0_exPV", &mu_lowbeta_me_z0_exPV, &b_mu_lowbeta_me_z0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_phi_exPV", &mu_lowbeta_me_phi_exPV, &b_mu_lowbeta_me_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_theta_exPV", &mu_lowbeta_me_theta_exPV, &b_mu_lowbeta_me_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_qoverp_exPV", &mu_lowbeta_me_qoverp_exPV, &b_mu_lowbeta_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_ie_d0_exPV", &mu_lowbeta_ie_d0_exPV, &b_mu_lowbeta_ie_d0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_ie_z0_exPV", &mu_lowbeta_ie_z0_exPV, &b_mu_lowbeta_ie_z0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_ie_phi_exPV", &mu_lowbeta_ie_phi_exPV, &b_mu_lowbeta_ie_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_ie_theta_exPV", &mu_lowbeta_ie_theta_exPV, &b_mu_lowbeta_ie_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_ie_qoverp_exPV", &mu_lowbeta_ie_qoverp_exPV, &b_mu_lowbeta_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_SpaceTime_detID", &mu_lowbeta_SpaceTime_detID, &b_mu_lowbeta_SpaceTime_detID);
   fChain->SetBranchAddress("mu_lowbeta_SpaceTime_t", &mu_lowbeta_SpaceTime_t, &b_mu_lowbeta_SpaceTime_t);
   fChain->SetBranchAddress("mu_lowbeta_SpaceTime_tError", &mu_lowbeta_SpaceTime_tError, &b_mu_lowbeta_SpaceTime_tError);
   fChain->SetBranchAddress("mu_lowbeta_SpaceTime_weight", &mu_lowbeta_SpaceTime_weight, &b_mu_lowbeta_SpaceTime_weight);
   fChain->SetBranchAddress("mu_lowbeta_SpaceTime_x", &mu_lowbeta_SpaceTime_x, &b_mu_lowbeta_SpaceTime_x);
   fChain->SetBranchAddress("mu_lowbeta_SpaceTime_y", &mu_lowbeta_SpaceTime_y, &b_mu_lowbeta_SpaceTime_y);
   fChain->SetBranchAddress("mu_lowbeta_SpaceTime_z", &mu_lowbeta_SpaceTime_z, &b_mu_lowbeta_SpaceTime_z);
   fChain->SetBranchAddress("mu_lowbeta_cov_d0_exPV", &mu_lowbeta_cov_d0_exPV, &b_mu_lowbeta_cov_d0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_z0_exPV", &mu_lowbeta_cov_z0_exPV, &b_mu_lowbeta_cov_z0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_phi_exPV", &mu_lowbeta_cov_phi_exPV, &b_mu_lowbeta_cov_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_theta_exPV", &mu_lowbeta_cov_theta_exPV, &b_mu_lowbeta_cov_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_qoverp_exPV", &mu_lowbeta_cov_qoverp_exPV, &b_mu_lowbeta_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_d0_z0_exPV", &mu_lowbeta_cov_d0_z0_exPV, &b_mu_lowbeta_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_d0_phi_exPV", &mu_lowbeta_cov_d0_phi_exPV, &b_mu_lowbeta_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_d0_theta_exPV", &mu_lowbeta_cov_d0_theta_exPV, &b_mu_lowbeta_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_d0_qoverp_exPV", &mu_lowbeta_cov_d0_qoverp_exPV, &b_mu_lowbeta_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_z0_phi_exPV", &mu_lowbeta_cov_z0_phi_exPV, &b_mu_lowbeta_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_z0_theta_exPV", &mu_lowbeta_cov_z0_theta_exPV, &b_mu_lowbeta_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_z0_qoverp_exPV", &mu_lowbeta_cov_z0_qoverp_exPV, &b_mu_lowbeta_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_phi_theta_exPV", &mu_lowbeta_cov_phi_theta_exPV, &b_mu_lowbeta_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_phi_qoverp_exPV", &mu_lowbeta_cov_phi_qoverp_exPV, &b_mu_lowbeta_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_cov_theta_qoverp_exPV", &mu_lowbeta_cov_theta_qoverp_exPV, &b_mu_lowbeta_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_d0_exPV", &mu_lowbeta_id_cov_d0_exPV, &b_mu_lowbeta_id_cov_d0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_z0_exPV", &mu_lowbeta_id_cov_z0_exPV, &b_mu_lowbeta_id_cov_z0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_phi_exPV", &mu_lowbeta_id_cov_phi_exPV, &b_mu_lowbeta_id_cov_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_theta_exPV", &mu_lowbeta_id_cov_theta_exPV, &b_mu_lowbeta_id_cov_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_qoverp_exPV", &mu_lowbeta_id_cov_qoverp_exPV, &b_mu_lowbeta_id_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_d0_z0_exPV", &mu_lowbeta_id_cov_d0_z0_exPV, &b_mu_lowbeta_id_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_d0_phi_exPV", &mu_lowbeta_id_cov_d0_phi_exPV, &b_mu_lowbeta_id_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_d0_theta_exPV", &mu_lowbeta_id_cov_d0_theta_exPV, &b_mu_lowbeta_id_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_d0_qoverp_exPV", &mu_lowbeta_id_cov_d0_qoverp_exPV, &b_mu_lowbeta_id_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_z0_phi_exPV", &mu_lowbeta_id_cov_z0_phi_exPV, &b_mu_lowbeta_id_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_z0_theta_exPV", &mu_lowbeta_id_cov_z0_theta_exPV, &b_mu_lowbeta_id_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_z0_qoverp_exPV", &mu_lowbeta_id_cov_z0_qoverp_exPV, &b_mu_lowbeta_id_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_phi_theta_exPV", &mu_lowbeta_id_cov_phi_theta_exPV, &b_mu_lowbeta_id_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_phi_qoverp_exPV", &mu_lowbeta_id_cov_phi_qoverp_exPV, &b_mu_lowbeta_id_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_id_cov_theta_qoverp_exPV", &mu_lowbeta_id_cov_theta_qoverp_exPV, &b_mu_lowbeta_id_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_d0_exPV", &mu_lowbeta_me_cov_d0_exPV, &b_mu_lowbeta_me_cov_d0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_z0_exPV", &mu_lowbeta_me_cov_z0_exPV, &b_mu_lowbeta_me_cov_z0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_phi_exPV", &mu_lowbeta_me_cov_phi_exPV, &b_mu_lowbeta_me_cov_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_theta_exPV", &mu_lowbeta_me_cov_theta_exPV, &b_mu_lowbeta_me_cov_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_qoverp_exPV", &mu_lowbeta_me_cov_qoverp_exPV, &b_mu_lowbeta_me_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_d0_z0_exPV", &mu_lowbeta_me_cov_d0_z0_exPV, &b_mu_lowbeta_me_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_d0_phi_exPV", &mu_lowbeta_me_cov_d0_phi_exPV, &b_mu_lowbeta_me_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_d0_theta_exPV", &mu_lowbeta_me_cov_d0_theta_exPV, &b_mu_lowbeta_me_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_d0_qoverp_exPV", &mu_lowbeta_me_cov_d0_qoverp_exPV, &b_mu_lowbeta_me_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_z0_phi_exPV", &mu_lowbeta_me_cov_z0_phi_exPV, &b_mu_lowbeta_me_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_z0_theta_exPV", &mu_lowbeta_me_cov_z0_theta_exPV, &b_mu_lowbeta_me_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_z0_qoverp_exPV", &mu_lowbeta_me_cov_z0_qoverp_exPV, &b_mu_lowbeta_me_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_phi_theta_exPV", &mu_lowbeta_me_cov_phi_theta_exPV, &b_mu_lowbeta_me_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_phi_qoverp_exPV", &mu_lowbeta_me_cov_phi_qoverp_exPV, &b_mu_lowbeta_me_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_me_cov_theta_qoverp_exPV", &mu_lowbeta_me_cov_theta_qoverp_exPV, &b_mu_lowbeta_me_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_lowbeta_ms_d0", &mu_lowbeta_ms_d0, &b_mu_lowbeta_ms_d0);
   fChain->SetBranchAddress("mu_lowbeta_ms_z0", &mu_lowbeta_ms_z0, &b_mu_lowbeta_ms_z0);
   fChain->SetBranchAddress("mu_lowbeta_ms_phi", &mu_lowbeta_ms_phi, &b_mu_lowbeta_ms_phi);
   fChain->SetBranchAddress("mu_lowbeta_ms_theta", &mu_lowbeta_ms_theta, &b_mu_lowbeta_ms_theta);
   fChain->SetBranchAddress("mu_lowbeta_ms_qoverp", &mu_lowbeta_ms_qoverp, &b_mu_lowbeta_ms_qoverp);
   fChain->SetBranchAddress("mu_lowbeta_id_d0", &mu_lowbeta_id_d0, &b_mu_lowbeta_id_d0);
   fChain->SetBranchAddress("mu_lowbeta_id_z0", &mu_lowbeta_id_z0, &b_mu_lowbeta_id_z0);
   fChain->SetBranchAddress("mu_lowbeta_id_phi", &mu_lowbeta_id_phi, &b_mu_lowbeta_id_phi);
   fChain->SetBranchAddress("mu_lowbeta_id_theta", &mu_lowbeta_id_theta, &b_mu_lowbeta_id_theta);
   fChain->SetBranchAddress("mu_lowbeta_id_qoverp", &mu_lowbeta_id_qoverp, &b_mu_lowbeta_id_qoverp);
   fChain->SetBranchAddress("mu_lowbeta_me_d0", &mu_lowbeta_me_d0, &b_mu_lowbeta_me_d0);
   fChain->SetBranchAddress("mu_lowbeta_me_z0", &mu_lowbeta_me_z0, &b_mu_lowbeta_me_z0);
   fChain->SetBranchAddress("mu_lowbeta_me_phi", &mu_lowbeta_me_phi, &b_mu_lowbeta_me_phi);
   fChain->SetBranchAddress("mu_lowbeta_me_theta", &mu_lowbeta_me_theta, &b_mu_lowbeta_me_theta);
   fChain->SetBranchAddress("mu_lowbeta_me_qoverp", &mu_lowbeta_me_qoverp, &b_mu_lowbeta_me_qoverp);
   fChain->SetBranchAddress("mu_lowbeta_ie_d0", &mu_lowbeta_ie_d0, &b_mu_lowbeta_ie_d0);
   fChain->SetBranchAddress("mu_lowbeta_ie_z0", &mu_lowbeta_ie_z0, &b_mu_lowbeta_ie_z0);
   fChain->SetBranchAddress("mu_lowbeta_ie_phi", &mu_lowbeta_ie_phi, &b_mu_lowbeta_ie_phi);
   fChain->SetBranchAddress("mu_lowbeta_ie_theta", &mu_lowbeta_ie_theta, &b_mu_lowbeta_ie_theta);
   fChain->SetBranchAddress("mu_lowbeta_ie_qoverp", &mu_lowbeta_ie_qoverp, &b_mu_lowbeta_ie_qoverp);
   fChain->SetBranchAddress("mu_lowbeta_nOutliersOnTrack", &mu_lowbeta_nOutliersOnTrack, &b_mu_lowbeta_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_lowbeta_nBLHits", &mu_lowbeta_nBLHits, &b_mu_lowbeta_nBLHits);
   fChain->SetBranchAddress("mu_lowbeta_nPixHits", &mu_lowbeta_nPixHits, &b_mu_lowbeta_nPixHits);
   fChain->SetBranchAddress("mu_lowbeta_nSCTHits", &mu_lowbeta_nSCTHits, &b_mu_lowbeta_nSCTHits);
   fChain->SetBranchAddress("mu_lowbeta_nTRTHits", &mu_lowbeta_nTRTHits, &b_mu_lowbeta_nTRTHits);
   fChain->SetBranchAddress("mu_lowbeta_nTRTHighTHits", &mu_lowbeta_nTRTHighTHits, &b_mu_lowbeta_nTRTHighTHits);
   fChain->SetBranchAddress("mu_lowbeta_nBLSharedHits", &mu_lowbeta_nBLSharedHits, &b_mu_lowbeta_nBLSharedHits);
   fChain->SetBranchAddress("mu_lowbeta_nPixSharedHits", &mu_lowbeta_nPixSharedHits, &b_mu_lowbeta_nPixSharedHits);
   fChain->SetBranchAddress("mu_lowbeta_nPixHoles", &mu_lowbeta_nPixHoles, &b_mu_lowbeta_nPixHoles);
   fChain->SetBranchAddress("mu_lowbeta_nSCTSharedHits", &mu_lowbeta_nSCTSharedHits, &b_mu_lowbeta_nSCTSharedHits);
   fChain->SetBranchAddress("mu_lowbeta_nSCTHoles", &mu_lowbeta_nSCTHoles, &b_mu_lowbeta_nSCTHoles);
   fChain->SetBranchAddress("mu_lowbeta_nTRTOutliers", &mu_lowbeta_nTRTOutliers, &b_mu_lowbeta_nTRTOutliers);
   fChain->SetBranchAddress("mu_lowbeta_nTRTHighTOutliers", &mu_lowbeta_nTRTHighTOutliers, &b_mu_lowbeta_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_lowbeta_nGangedPixels", &mu_lowbeta_nGangedPixels, &b_mu_lowbeta_nGangedPixels);
   fChain->SetBranchAddress("mu_lowbeta_nPixelDeadSensors", &mu_lowbeta_nPixelDeadSensors, &b_mu_lowbeta_nPixelDeadSensors);
   fChain->SetBranchAddress("mu_lowbeta_nSCTDeadSensors", &mu_lowbeta_nSCTDeadSensors, &b_mu_lowbeta_nSCTDeadSensors);
   fChain->SetBranchAddress("mu_lowbeta_nTRTDeadStraws", &mu_lowbeta_nTRTDeadStraws, &b_mu_lowbeta_nTRTDeadStraws);
   fChain->SetBranchAddress("mu_lowbeta_expectBLayerHit", &mu_lowbeta_expectBLayerHit, &b_mu_lowbeta_expectBLayerHit);
   fChain->SetBranchAddress("mu_lowbeta_nMDTHits", &mu_lowbeta_nMDTHits, &b_mu_lowbeta_nMDTHits);
   fChain->SetBranchAddress("mu_lowbeta_nMDTHoles", &mu_lowbeta_nMDTHoles, &b_mu_lowbeta_nMDTHoles);
   fChain->SetBranchAddress("mu_lowbeta_nCSCEtaHits", &mu_lowbeta_nCSCEtaHits, &b_mu_lowbeta_nCSCEtaHits);
   fChain->SetBranchAddress("mu_lowbeta_nCSCEtaHoles", &mu_lowbeta_nCSCEtaHoles, &b_mu_lowbeta_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_lowbeta_nCSCUnspoiledEtaHits", &mu_lowbeta_nCSCUnspoiledEtaHits, &b_mu_lowbeta_nCSCUnspoiledEtaHits);
   fChain->SetBranchAddress("mu_lowbeta_nCSCPhiHits", &mu_lowbeta_nCSCPhiHits, &b_mu_lowbeta_nCSCPhiHits);
   fChain->SetBranchAddress("mu_lowbeta_nCSCPhiHoles", &mu_lowbeta_nCSCPhiHoles, &b_mu_lowbeta_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_lowbeta_nRPCEtaHits", &mu_lowbeta_nRPCEtaHits, &b_mu_lowbeta_nRPCEtaHits);
   fChain->SetBranchAddress("mu_lowbeta_nRPCEtaHoles", &mu_lowbeta_nRPCEtaHoles, &b_mu_lowbeta_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_lowbeta_nRPCPhiHits", &mu_lowbeta_nRPCPhiHits, &b_mu_lowbeta_nRPCPhiHits);
   fChain->SetBranchAddress("mu_lowbeta_nRPCPhiHoles", &mu_lowbeta_nRPCPhiHoles, &b_mu_lowbeta_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_lowbeta_nTGCEtaHits", &mu_lowbeta_nTGCEtaHits, &b_mu_lowbeta_nTGCEtaHits);
   fChain->SetBranchAddress("mu_lowbeta_nTGCEtaHoles", &mu_lowbeta_nTGCEtaHoles, &b_mu_lowbeta_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_lowbeta_nTGCPhiHits", &mu_lowbeta_nTGCPhiHits, &b_mu_lowbeta_nTGCPhiHits);
   fChain->SetBranchAddress("mu_lowbeta_nTGCPhiHoles", &mu_lowbeta_nTGCPhiHoles, &b_mu_lowbeta_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_lowbeta_nprecisionLayers", &mu_lowbeta_nprecisionLayers, &b_mu_lowbeta_nprecisionLayers);
   fChain->SetBranchAddress("mu_lowbeta_nprecisionHoleLayers", &mu_lowbeta_nprecisionHoleLayers, &b_mu_lowbeta_nprecisionHoleLayers);
   fChain->SetBranchAddress("mu_lowbeta_nphiLayers", &mu_lowbeta_nphiLayers, &b_mu_lowbeta_nphiLayers);
   fChain->SetBranchAddress("mu_lowbeta_ntrigEtaLayers", &mu_lowbeta_ntrigEtaLayers, &b_mu_lowbeta_ntrigEtaLayers);
   fChain->SetBranchAddress("mu_lowbeta_nphiHoleLayers", &mu_lowbeta_nphiHoleLayers, &b_mu_lowbeta_nphiHoleLayers);
   fChain->SetBranchAddress("mu_lowbeta_ntrigEtaHoleLayers", &mu_lowbeta_ntrigEtaHoleLayers, &b_mu_lowbeta_ntrigEtaHoleLayers);
   fChain->SetBranchAddress("mu_lowbeta_nMDTBIHits", &mu_lowbeta_nMDTBIHits, &b_mu_lowbeta_nMDTBIHits);
   fChain->SetBranchAddress("mu_lowbeta_nMDTBMHits", &mu_lowbeta_nMDTBMHits, &b_mu_lowbeta_nMDTBMHits);
   fChain->SetBranchAddress("mu_lowbeta_nMDTBOHits", &mu_lowbeta_nMDTBOHits, &b_mu_lowbeta_nMDTBOHits);
   fChain->SetBranchAddress("mu_lowbeta_nMDTBEEHits", &mu_lowbeta_nMDTBEEHits, &b_mu_lowbeta_nMDTBEEHits);
   fChain->SetBranchAddress("mu_lowbeta_nMDTBIS78Hits", &mu_lowbeta_nMDTBIS78Hits, &b_mu_lowbeta_nMDTBIS78Hits);
   fChain->SetBranchAddress("mu_lowbeta_nMDTEIHits", &mu_lowbeta_nMDTEIHits, &b_mu_lowbeta_nMDTEIHits);
   fChain->SetBranchAddress("mu_lowbeta_nMDTEMHits", &mu_lowbeta_nMDTEMHits, &b_mu_lowbeta_nMDTEMHits);
   fChain->SetBranchAddress("mu_lowbeta_nMDTEOHits", &mu_lowbeta_nMDTEOHits, &b_mu_lowbeta_nMDTEOHits);
   fChain->SetBranchAddress("mu_lowbeta_nMDTEEHits", &mu_lowbeta_nMDTEEHits, &b_mu_lowbeta_nMDTEEHits);
   fChain->SetBranchAddress("mu_lowbeta_nRPCLayer1EtaHits", &mu_lowbeta_nRPCLayer1EtaHits, &b_mu_lowbeta_nRPCLayer1EtaHits);
   fChain->SetBranchAddress("mu_lowbeta_nRPCLayer2EtaHits", &mu_lowbeta_nRPCLayer2EtaHits, &b_mu_lowbeta_nRPCLayer2EtaHits);
   fChain->SetBranchAddress("mu_lowbeta_nRPCLayer3EtaHits", &mu_lowbeta_nRPCLayer3EtaHits, &b_mu_lowbeta_nRPCLayer3EtaHits);
   fChain->SetBranchAddress("mu_lowbeta_nRPCLayer1PhiHits", &mu_lowbeta_nRPCLayer1PhiHits, &b_mu_lowbeta_nRPCLayer1PhiHits);
   fChain->SetBranchAddress("mu_lowbeta_nRPCLayer2PhiHits", &mu_lowbeta_nRPCLayer2PhiHits, &b_mu_lowbeta_nRPCLayer2PhiHits);
   fChain->SetBranchAddress("mu_lowbeta_nRPCLayer3PhiHits", &mu_lowbeta_nRPCLayer3PhiHits, &b_mu_lowbeta_nRPCLayer3PhiHits);
   fChain->SetBranchAddress("mu_lowbeta_nTGCLayer1EtaHits", &mu_lowbeta_nTGCLayer1EtaHits, &b_mu_lowbeta_nTGCLayer1EtaHits);
   fChain->SetBranchAddress("mu_lowbeta_nTGCLayer2EtaHits", &mu_lowbeta_nTGCLayer2EtaHits, &b_mu_lowbeta_nTGCLayer2EtaHits);
   fChain->SetBranchAddress("mu_lowbeta_nTGCLayer3EtaHits", &mu_lowbeta_nTGCLayer3EtaHits, &b_mu_lowbeta_nTGCLayer3EtaHits);
   fChain->SetBranchAddress("mu_lowbeta_nTGCLayer4EtaHits", &mu_lowbeta_nTGCLayer4EtaHits, &b_mu_lowbeta_nTGCLayer4EtaHits);
   fChain->SetBranchAddress("mu_lowbeta_nTGCLayer1PhiHits", &mu_lowbeta_nTGCLayer1PhiHits, &b_mu_lowbeta_nTGCLayer1PhiHits);
   fChain->SetBranchAddress("mu_lowbeta_nTGCLayer2PhiHits", &mu_lowbeta_nTGCLayer2PhiHits, &b_mu_lowbeta_nTGCLayer2PhiHits);
   fChain->SetBranchAddress("mu_lowbeta_nTGCLayer3PhiHits", &mu_lowbeta_nTGCLayer3PhiHits, &b_mu_lowbeta_nTGCLayer3PhiHits);
   fChain->SetBranchAddress("mu_lowbeta_nTGCLayer4PhiHits", &mu_lowbeta_nTGCLayer4PhiHits, &b_mu_lowbeta_nTGCLayer4PhiHits);
   fChain->SetBranchAddress("mu_lowbeta_barrelSectors", &mu_lowbeta_barrelSectors, &b_mu_lowbeta_barrelSectors);
   fChain->SetBranchAddress("mu_lowbeta_endcapSectors", &mu_lowbeta_endcapSectors, &b_mu_lowbeta_endcapSectors);
   fChain->SetBranchAddress("mu_lowbeta_trackd0", &mu_lowbeta_trackd0, &b_mu_lowbeta_trackd0);
   fChain->SetBranchAddress("mu_lowbeta_trackz0", &mu_lowbeta_trackz0, &b_mu_lowbeta_trackz0);
   fChain->SetBranchAddress("mu_lowbeta_trackphi", &mu_lowbeta_trackphi, &b_mu_lowbeta_trackphi);
   fChain->SetBranchAddress("mu_lowbeta_tracktheta", &mu_lowbeta_tracktheta, &b_mu_lowbeta_tracktheta);
   fChain->SetBranchAddress("mu_lowbeta_trackqoverp", &mu_lowbeta_trackqoverp, &b_mu_lowbeta_trackqoverp);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_d0", &mu_lowbeta_trackcov_d0, &b_mu_lowbeta_trackcov_d0);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_z0", &mu_lowbeta_trackcov_z0, &b_mu_lowbeta_trackcov_z0);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_phi", &mu_lowbeta_trackcov_phi, &b_mu_lowbeta_trackcov_phi);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_theta", &mu_lowbeta_trackcov_theta, &b_mu_lowbeta_trackcov_theta);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_qoverp", &mu_lowbeta_trackcov_qoverp, &b_mu_lowbeta_trackcov_qoverp);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_d0_z0", &mu_lowbeta_trackcov_d0_z0, &b_mu_lowbeta_trackcov_d0_z0);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_d0_phi", &mu_lowbeta_trackcov_d0_phi, &b_mu_lowbeta_trackcov_d0_phi);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_d0_theta", &mu_lowbeta_trackcov_d0_theta, &b_mu_lowbeta_trackcov_d0_theta);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_d0_qoverp", &mu_lowbeta_trackcov_d0_qoverp, &b_mu_lowbeta_trackcov_d0_qoverp);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_z0_phi", &mu_lowbeta_trackcov_z0_phi, &b_mu_lowbeta_trackcov_z0_phi);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_z0_theta", &mu_lowbeta_trackcov_z0_theta, &b_mu_lowbeta_trackcov_z0_theta);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_z0_qoverp", &mu_lowbeta_trackcov_z0_qoverp, &b_mu_lowbeta_trackcov_z0_qoverp);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_phi_theta", &mu_lowbeta_trackcov_phi_theta, &b_mu_lowbeta_trackcov_phi_theta);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_phi_qoverp", &mu_lowbeta_trackcov_phi_qoverp, &b_mu_lowbeta_trackcov_phi_qoverp);
   fChain->SetBranchAddress("mu_lowbeta_trackcov_theta_qoverp", &mu_lowbeta_trackcov_theta_qoverp, &b_mu_lowbeta_trackcov_theta_qoverp);
   fChain->SetBranchAddress("mu_lowbeta_trackfitchi2", &mu_lowbeta_trackfitchi2, &b_mu_lowbeta_trackfitchi2);
   fChain->SetBranchAddress("mu_lowbeta_trackfitndof", &mu_lowbeta_trackfitndof, &b_mu_lowbeta_trackfitndof);
   fChain->SetBranchAddress("mu_lowbeta_hastrack", &mu_lowbeta_hastrack, &b_mu_lowbeta_hastrack);
   fChain->SetBranchAddress("mu_lowbeta_trackd0beam", &mu_lowbeta_trackd0beam, &b_mu_lowbeta_trackd0beam);
   fChain->SetBranchAddress("mu_lowbeta_trackz0beam", &mu_lowbeta_trackz0beam, &b_mu_lowbeta_trackz0beam);
   fChain->SetBranchAddress("mu_lowbeta_tracksigd0beam", &mu_lowbeta_tracksigd0beam, &b_mu_lowbeta_tracksigd0beam);
   fChain->SetBranchAddress("mu_lowbeta_tracksigz0beam", &mu_lowbeta_tracksigz0beam, &b_mu_lowbeta_tracksigz0beam);
   fChain->SetBranchAddress("mu_lowbeta_trackd0pv", &mu_lowbeta_trackd0pv, &b_mu_lowbeta_trackd0pv);
   fChain->SetBranchAddress("mu_lowbeta_trackz0pv", &mu_lowbeta_trackz0pv, &b_mu_lowbeta_trackz0pv);
   fChain->SetBranchAddress("mu_lowbeta_tracksigd0pv", &mu_lowbeta_tracksigd0pv, &b_mu_lowbeta_tracksigd0pv);
   fChain->SetBranchAddress("mu_lowbeta_tracksigz0pv", &mu_lowbeta_tracksigz0pv, &b_mu_lowbeta_tracksigz0pv);
   fChain->SetBranchAddress("mu_lowbeta_trackIPEstimate_d0_biasedpvunbiased", &mu_lowbeta_trackIPEstimate_d0_biasedpvunbiased, &b_mu_lowbeta_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_trackIPEstimate_z0_biasedpvunbiased", &mu_lowbeta_trackIPEstimate_z0_biasedpvunbiased, &b_mu_lowbeta_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_trackIPEstimate_sigd0_biasedpvunbiased", &mu_lowbeta_trackIPEstimate_sigd0_biasedpvunbiased, &b_mu_lowbeta_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_trackIPEstimate_sigz0_biasedpvunbiased", &mu_lowbeta_trackIPEstimate_sigz0_biasedpvunbiased, &b_mu_lowbeta_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_trackIPEstimate_d0_unbiasedpvunbiased", &mu_lowbeta_trackIPEstimate_d0_unbiasedpvunbiased, &b_mu_lowbeta_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_trackIPEstimate_z0_unbiasedpvunbiased", &mu_lowbeta_trackIPEstimate_z0_unbiasedpvunbiased, &b_mu_lowbeta_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_trackIPEstimate_sigd0_unbiasedpvunbiased", &mu_lowbeta_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_mu_lowbeta_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_trackIPEstimate_sigz0_unbiasedpvunbiased", &mu_lowbeta_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_mu_lowbeta_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_trackd0pvunbiased", &mu_lowbeta_trackd0pvunbiased, &b_mu_lowbeta_trackd0pvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_trackz0pvunbiased", &mu_lowbeta_trackz0pvunbiased, &b_mu_lowbeta_trackz0pvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_tracksigd0pvunbiased", &mu_lowbeta_tracksigd0pvunbiased, &b_mu_lowbeta_tracksigd0pvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_tracksigz0pvunbiased", &mu_lowbeta_tracksigz0pvunbiased, &b_mu_lowbeta_tracksigz0pvunbiased);
   fChain->SetBranchAddress("mu_lowbeta_CaloCell_sampling", &mu_lowbeta_CaloCell_sampling, &b_mu_lowbeta_CaloCell_sampling);
   fChain->SetBranchAddress("mu_lowbeta_CaloCell_eta", &mu_lowbeta_CaloCell_eta, &b_mu_lowbeta_CaloCell_eta);
   fChain->SetBranchAddress("mu_lowbeta_CaloCell_phi", &mu_lowbeta_CaloCell_phi, &b_mu_lowbeta_CaloCell_phi);
   fChain->SetBranchAddress("mu_lowbeta_CaloCell_dr", &mu_lowbeta_CaloCell_dr, &b_mu_lowbeta_CaloCell_dr);
   fChain->SetBranchAddress("mu_lowbeta_CaloCell_E", &mu_lowbeta_CaloCell_E, &b_mu_lowbeta_CaloCell_E);
   fChain->SetBranchAddress("mu_lowbeta_CaloCell_t", &mu_lowbeta_CaloCell_t, &b_mu_lowbeta_CaloCell_t);
   fChain->SetBranchAddress("mu_lowbeta_CaloCell_x", &mu_lowbeta_CaloCell_x, &b_mu_lowbeta_CaloCell_x);
   fChain->SetBranchAddress("mu_lowbeta_CaloCell_y", &mu_lowbeta_CaloCell_y, &b_mu_lowbeta_CaloCell_y);
   fChain->SetBranchAddress("mu_lowbeta_CaloCell_z", &mu_lowbeta_CaloCell_z, &b_mu_lowbeta_CaloCell_z);
   fChain->SetBranchAddress("mu_lowbeta_TileBeta", &mu_lowbeta_TileBeta, &b_mu_lowbeta_TileBeta);
   fChain->SetBranchAddress("mu_lowbeta_TileBetaMass", &mu_lowbeta_TileBetaMass, &b_mu_lowbeta_TileBetaMass);
   fChain->SetBranchAddress("mu_lowbeta_meandADC", &mu_lowbeta_meandADC, &b_mu_lowbeta_meandADC);
   fChain->SetBranchAddress("mu_lowbeta_stau_candidate_assoc_index", &mu_lowbeta_stau_candidate_assoc_index, &b_mu_lowbeta_stau_candidate_assoc_index);
   fChain->SetBranchAddress("jet_akt4topoem_n", &jet_akt4topoem_n, &b_jet_akt4topoem_n);
   fChain->SetBranchAddress("jet_akt4topoem_E", &jet_akt4topoem_E, &b_jet_akt4topoem_E);
   fChain->SetBranchAddress("jet_akt4topoem_pt", &jet_akt4topoem_pt, &b_jet_akt4topoem_pt);
   fChain->SetBranchAddress("jet_akt4topoem_m", &jet_akt4topoem_m, &b_jet_akt4topoem_m);
   fChain->SetBranchAddress("jet_akt4topoem_eta", &jet_akt4topoem_eta, &b_jet_akt4topoem_eta);
   fChain->SetBranchAddress("jet_akt4topoem_phi", &jet_akt4topoem_phi, &b_jet_akt4topoem_phi);
   fChain->SetBranchAddress("jet_akt4topoem_EtaOrigin", &jet_akt4topoem_EtaOrigin, &b_jet_akt4topoem_EtaOrigin);
   fChain->SetBranchAddress("jet_akt4topoem_PhiOrigin", &jet_akt4topoem_PhiOrigin, &b_jet_akt4topoem_PhiOrigin);
   fChain->SetBranchAddress("jet_akt4topoem_MOrigin", &jet_akt4topoem_MOrigin, &b_jet_akt4topoem_MOrigin);
   fChain->SetBranchAddress("jet_akt4topoem_EtaOriginEM", &jet_akt4topoem_EtaOriginEM, &b_jet_akt4topoem_EtaOriginEM);
   fChain->SetBranchAddress("jet_akt4topoem_PhiOriginEM", &jet_akt4topoem_PhiOriginEM, &b_jet_akt4topoem_PhiOriginEM);
   fChain->SetBranchAddress("jet_akt4topoem_MOriginEM", &jet_akt4topoem_MOriginEM, &b_jet_akt4topoem_MOriginEM);
   fChain->SetBranchAddress("jet_akt4topoem_WIDTH", &jet_akt4topoem_WIDTH, &b_jet_akt4topoem_WIDTH);
   fChain->SetBranchAddress("jet_akt4topoem_n90", &jet_akt4topoem_n90, &b_jet_akt4topoem_n90);
   fChain->SetBranchAddress("jet_akt4topoem_Timing", &jet_akt4topoem_Timing, &b_jet_akt4topoem_Timing);
   fChain->SetBranchAddress("jet_akt4topoem_LArQuality", &jet_akt4topoem_LArQuality, &b_jet_akt4topoem_LArQuality);
   fChain->SetBranchAddress("jet_akt4topoem_nTrk", &jet_akt4topoem_nTrk, &b_jet_akt4topoem_nTrk);
   fChain->SetBranchAddress("jet_akt4topoem_sumPtTrk", &jet_akt4topoem_sumPtTrk, &b_jet_akt4topoem_sumPtTrk);
   fChain->SetBranchAddress("jet_akt4topoem_OriginIndex", &jet_akt4topoem_OriginIndex, &b_jet_akt4topoem_OriginIndex);
   fChain->SetBranchAddress("jet_akt4topoem_HECQuality", &jet_akt4topoem_HECQuality, &b_jet_akt4topoem_HECQuality);
   fChain->SetBranchAddress("jet_akt4topoem_NegativeE", &jet_akt4topoem_NegativeE, &b_jet_akt4topoem_NegativeE);
   fChain->SetBranchAddress("jet_akt4topoem_AverageLArQF", &jet_akt4topoem_AverageLArQF, &b_jet_akt4topoem_AverageLArQF);
   fChain->SetBranchAddress("jet_akt4topoem_YFlip12", &jet_akt4topoem_YFlip12, &b_jet_akt4topoem_YFlip12);
   fChain->SetBranchAddress("jet_akt4topoem_YFlip23", &jet_akt4topoem_YFlip23, &b_jet_akt4topoem_YFlip23);
   fChain->SetBranchAddress("jet_akt4topoem_BCH_CORR_CELL", &jet_akt4topoem_BCH_CORR_CELL, &b_jet_akt4topoem_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_akt4topoem_BCH_CORR_DOTX", &jet_akt4topoem_BCH_CORR_DOTX, &b_jet_akt4topoem_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_akt4topoem_BCH_CORR_JET", &jet_akt4topoem_BCH_CORR_JET, &b_jet_akt4topoem_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_akt4topoem_BCH_CORR_JET_FORCELL", &jet_akt4topoem_BCH_CORR_JET_FORCELL, &b_jet_akt4topoem_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_akt4topoem_ENG_BAD_CELLS", &jet_akt4topoem_ENG_BAD_CELLS, &b_jet_akt4topoem_ENG_BAD_CELLS);
   fChain->SetBranchAddress("jet_akt4topoem_N_BAD_CELLS", &jet_akt4topoem_N_BAD_CELLS, &b_jet_akt4topoem_N_BAD_CELLS);
   fChain->SetBranchAddress("jet_akt4topoem_N_BAD_CELLS_CORR", &jet_akt4topoem_N_BAD_CELLS_CORR, &b_jet_akt4topoem_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("jet_akt4topoem_BAD_CELLS_CORR_E", &jet_akt4topoem_BAD_CELLS_CORR_E, &b_jet_akt4topoem_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("jet_akt4topoem_NumTowers", &jet_akt4topoem_NumTowers, &b_jet_akt4topoem_NumTowers);
   fChain->SetBranchAddress("jet_akt4topoem_ootFracCells5", &jet_akt4topoem_ootFracCells5, &b_jet_akt4topoem_ootFracCells5);
   fChain->SetBranchAddress("jet_akt4topoem_ootFracCells10", &jet_akt4topoem_ootFracCells10, &b_jet_akt4topoem_ootFracCells10);
   fChain->SetBranchAddress("jet_akt4topoem_ootFracClusters5", &jet_akt4topoem_ootFracClusters5, &b_jet_akt4topoem_ootFracClusters5);
   fChain->SetBranchAddress("jet_akt4topoem_ootFracClusters10", &jet_akt4topoem_ootFracClusters10, &b_jet_akt4topoem_ootFracClusters10);
   fChain->SetBranchAddress("jet_akt4topoem_SamplingMax", &jet_akt4topoem_SamplingMax, &b_jet_akt4topoem_SamplingMax);
   fChain->SetBranchAddress("jet_akt4topoem_fracSamplingMax", &jet_akt4topoem_fracSamplingMax, &b_jet_akt4topoem_fracSamplingMax);
   fChain->SetBranchAddress("jet_akt4topoem_hecf", &jet_akt4topoem_hecf, &b_jet_akt4topoem_hecf);
   fChain->SetBranchAddress("jet_akt4topoem_tgap3f", &jet_akt4topoem_tgap3f, &b_jet_akt4topoem_tgap3f);
   fChain->SetBranchAddress("jet_akt4topoem_isUgly", &jet_akt4topoem_isUgly, &b_jet_akt4topoem_isUgly);
   fChain->SetBranchAddress("jet_akt4topoem_isBadLooseMinus", &jet_akt4topoem_isBadLooseMinus, &b_jet_akt4topoem_isBadLooseMinus);
   fChain->SetBranchAddress("jet_akt4topoem_isBadLoose", &jet_akt4topoem_isBadLoose, &b_jet_akt4topoem_isBadLoose);
   fChain->SetBranchAddress("jet_akt4topoem_isBadMedium", &jet_akt4topoem_isBadMedium, &b_jet_akt4topoem_isBadMedium);
   fChain->SetBranchAddress("jet_akt4topoem_isBadTight", &jet_akt4topoem_isBadTight, &b_jet_akt4topoem_isBadTight);
   fChain->SetBranchAddress("jet_akt4topoem_emfrac", &jet_akt4topoem_emfrac, &b_jet_akt4topoem_emfrac);
   fChain->SetBranchAddress("jet_akt4topoem_Offset", &jet_akt4topoem_Offset, &b_jet_akt4topoem_Offset);
   fChain->SetBranchAddress("jet_akt4topoem_EMJES", &jet_akt4topoem_EMJES, &b_jet_akt4topoem_EMJES);
   fChain->SetBranchAddress("jet_akt4topoem_EMJES_EtaCorr", &jet_akt4topoem_EMJES_EtaCorr, &b_jet_akt4topoem_EMJES_EtaCorr);
   fChain->SetBranchAddress("jet_akt4topoem_EMJESnooffset", &jet_akt4topoem_EMJESnooffset, &b_jet_akt4topoem_EMJESnooffset);
   fChain->SetBranchAddress("jet_akt4topoem_GCWJES", &jet_akt4topoem_GCWJES, &b_jet_akt4topoem_GCWJES);
   fChain->SetBranchAddress("jet_akt4topoem_GCWJES_EtaCorr", &jet_akt4topoem_GCWJES_EtaCorr, &b_jet_akt4topoem_GCWJES_EtaCorr);
   fChain->SetBranchAddress("jet_akt4topoem_CB", &jet_akt4topoem_CB, &b_jet_akt4topoem_CB);
   fChain->SetBranchAddress("jet_akt4topoem_LCJES", &jet_akt4topoem_LCJES, &b_jet_akt4topoem_LCJES);
   fChain->SetBranchAddress("jet_akt4topoem_emscale_E", &jet_akt4topoem_emscale_E, &b_jet_akt4topoem_emscale_E);
   fChain->SetBranchAddress("jet_akt4topoem_emscale_pt", &jet_akt4topoem_emscale_pt, &b_jet_akt4topoem_emscale_pt);
   fChain->SetBranchAddress("jet_akt4topoem_emscale_m", &jet_akt4topoem_emscale_m, &b_jet_akt4topoem_emscale_m);
   fChain->SetBranchAddress("jet_akt4topoem_emscale_eta", &jet_akt4topoem_emscale_eta, &b_jet_akt4topoem_emscale_eta);
   fChain->SetBranchAddress("jet_akt4topoem_emscale_phi", &jet_akt4topoem_emscale_phi, &b_jet_akt4topoem_emscale_phi);
   fChain->SetBranchAddress("jet_akt4topoem_jvtx_x", &jet_akt4topoem_jvtx_x, &b_jet_akt4topoem_jvtx_x);
   fChain->SetBranchAddress("jet_akt4topoem_jvtx_y", &jet_akt4topoem_jvtx_y, &b_jet_akt4topoem_jvtx_y);
   fChain->SetBranchAddress("jet_akt4topoem_jvtx_z", &jet_akt4topoem_jvtx_z, &b_jet_akt4topoem_jvtx_z);
   fChain->SetBranchAddress("jet_akt4topoem_jvtxf", &jet_akt4topoem_jvtxf, &b_jet_akt4topoem_jvtxf);
   fChain->SetBranchAddress("jet_akt4topoem_GSCFactorF", &jet_akt4topoem_GSCFactorF, &b_jet_akt4topoem_GSCFactorF);
   fChain->SetBranchAddress("jet_akt4topoem_WidthFraction", &jet_akt4topoem_WidthFraction, &b_jet_akt4topoem_WidthFraction);
   fChain->SetBranchAddress("jet_akt4topoem_el_dr", &jet_akt4topoem_el_dr, &b_jet_akt4topoem_el_dr);
   fChain->SetBranchAddress("jet_akt4topoem_el_matched", &jet_akt4topoem_el_matched, &b_jet_akt4topoem_el_matched);
   fChain->SetBranchAddress("jet_akt4topoem_mu_dr", &jet_akt4topoem_mu_dr, &b_jet_akt4topoem_mu_dr);
   fChain->SetBranchAddress("jet_akt4topoem_mu_matched", &jet_akt4topoem_mu_matched, &b_jet_akt4topoem_mu_matched);
   fChain->SetBranchAddress("jet_akt4topoem_L1_dr", &jet_akt4topoem_L1_dr, &b_jet_akt4topoem_L1_dr);
   fChain->SetBranchAddress("jet_akt4topoem_L1_matched", &jet_akt4topoem_L1_matched, &b_jet_akt4topoem_L1_matched);
   fChain->SetBranchAddress("jet_akt4topoem_L2_dr", &jet_akt4topoem_L2_dr, &b_jet_akt4topoem_L2_dr);
   fChain->SetBranchAddress("jet_akt4topoem_L2_matched", &jet_akt4topoem_L2_matched, &b_jet_akt4topoem_L2_matched);
   fChain->SetBranchAddress("jet_akt4topoem_EF_dr", &jet_akt4topoem_EF_dr, &b_jet_akt4topoem_EF_dr);
   fChain->SetBranchAddress("jet_akt4topoem_EF_matched", &jet_akt4topoem_EF_matched, &b_jet_akt4topoem_EF_matched);
   fChain->SetBranchAddress("jet_akt6topoem_n", &jet_akt6topoem_n, &b_jet_akt6topoem_n);
   fChain->SetBranchAddress("jet_akt6topoem_E", &jet_akt6topoem_E, &b_jet_akt6topoem_E);
   fChain->SetBranchAddress("jet_akt6topoem_pt", &jet_akt6topoem_pt, &b_jet_akt6topoem_pt);
   fChain->SetBranchAddress("jet_akt6topoem_m", &jet_akt6topoem_m, &b_jet_akt6topoem_m);
   fChain->SetBranchAddress("jet_akt6topoem_eta", &jet_akt6topoem_eta, &b_jet_akt6topoem_eta);
   fChain->SetBranchAddress("jet_akt6topoem_phi", &jet_akt6topoem_phi, &b_jet_akt6topoem_phi);
   fChain->SetBranchAddress("jet_akt6topoem_EtaOrigin", &jet_akt6topoem_EtaOrigin, &b_jet_akt6topoem_EtaOrigin);
   fChain->SetBranchAddress("jet_akt6topoem_PhiOrigin", &jet_akt6topoem_PhiOrigin, &b_jet_akt6topoem_PhiOrigin);
   fChain->SetBranchAddress("jet_akt6topoem_MOrigin", &jet_akt6topoem_MOrigin, &b_jet_akt6topoem_MOrigin);
   fChain->SetBranchAddress("jet_akt6topoem_EtaOriginEM", &jet_akt6topoem_EtaOriginEM, &b_jet_akt6topoem_EtaOriginEM);
   fChain->SetBranchAddress("jet_akt6topoem_PhiOriginEM", &jet_akt6topoem_PhiOriginEM, &b_jet_akt6topoem_PhiOriginEM);
   fChain->SetBranchAddress("jet_akt6topoem_MOriginEM", &jet_akt6topoem_MOriginEM, &b_jet_akt6topoem_MOriginEM);
   fChain->SetBranchAddress("jet_akt6topoem_WIDTH", &jet_akt6topoem_WIDTH, &b_jet_akt6topoem_WIDTH);
   fChain->SetBranchAddress("jet_akt6topoem_n90", &jet_akt6topoem_n90, &b_jet_akt6topoem_n90);
   fChain->SetBranchAddress("jet_akt6topoem_Timing", &jet_akt6topoem_Timing, &b_jet_akt6topoem_Timing);
   fChain->SetBranchAddress("jet_akt6topoem_LArQuality", &jet_akt6topoem_LArQuality, &b_jet_akt6topoem_LArQuality);
   fChain->SetBranchAddress("jet_akt6topoem_nTrk", &jet_akt6topoem_nTrk, &b_jet_akt6topoem_nTrk);
   fChain->SetBranchAddress("jet_akt6topoem_sumPtTrk", &jet_akt6topoem_sumPtTrk, &b_jet_akt6topoem_sumPtTrk);
   fChain->SetBranchAddress("jet_akt6topoem_OriginIndex", &jet_akt6topoem_OriginIndex, &b_jet_akt6topoem_OriginIndex);
   fChain->SetBranchAddress("jet_akt6topoem_HECQuality", &jet_akt6topoem_HECQuality, &b_jet_akt6topoem_HECQuality);
   fChain->SetBranchAddress("jet_akt6topoem_NegativeE", &jet_akt6topoem_NegativeE, &b_jet_akt6topoem_NegativeE);
   fChain->SetBranchAddress("jet_akt6topoem_AverageLArQF", &jet_akt6topoem_AverageLArQF, &b_jet_akt6topoem_AverageLArQF);
   fChain->SetBranchAddress("jet_akt6topoem_YFlip12", &jet_akt6topoem_YFlip12, &b_jet_akt6topoem_YFlip12);
   fChain->SetBranchAddress("jet_akt6topoem_YFlip23", &jet_akt6topoem_YFlip23, &b_jet_akt6topoem_YFlip23);
   fChain->SetBranchAddress("jet_akt6topoem_BCH_CORR_CELL", &jet_akt6topoem_BCH_CORR_CELL, &b_jet_akt6topoem_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_akt6topoem_BCH_CORR_DOTX", &jet_akt6topoem_BCH_CORR_DOTX, &b_jet_akt6topoem_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_akt6topoem_BCH_CORR_JET", &jet_akt6topoem_BCH_CORR_JET, &b_jet_akt6topoem_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_akt6topoem_BCH_CORR_JET_FORCELL", &jet_akt6topoem_BCH_CORR_JET_FORCELL, &b_jet_akt6topoem_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_akt6topoem_ENG_BAD_CELLS", &jet_akt6topoem_ENG_BAD_CELLS, &b_jet_akt6topoem_ENG_BAD_CELLS);
   fChain->SetBranchAddress("jet_akt6topoem_N_BAD_CELLS", &jet_akt6topoem_N_BAD_CELLS, &b_jet_akt6topoem_N_BAD_CELLS);
   fChain->SetBranchAddress("jet_akt6topoem_N_BAD_CELLS_CORR", &jet_akt6topoem_N_BAD_CELLS_CORR, &b_jet_akt6topoem_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("jet_akt6topoem_BAD_CELLS_CORR_E", &jet_akt6topoem_BAD_CELLS_CORR_E, &b_jet_akt6topoem_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("jet_akt6topoem_NumTowers", &jet_akt6topoem_NumTowers, &b_jet_akt6topoem_NumTowers);
   fChain->SetBranchAddress("jet_akt6topoem_ootFracCells5", &jet_akt6topoem_ootFracCells5, &b_jet_akt6topoem_ootFracCells5);
   fChain->SetBranchAddress("jet_akt6topoem_ootFracCells10", &jet_akt6topoem_ootFracCells10, &b_jet_akt6topoem_ootFracCells10);
   fChain->SetBranchAddress("jet_akt6topoem_ootFracClusters5", &jet_akt6topoem_ootFracClusters5, &b_jet_akt6topoem_ootFracClusters5);
   fChain->SetBranchAddress("jet_akt6topoem_ootFracClusters10", &jet_akt6topoem_ootFracClusters10, &b_jet_akt6topoem_ootFracClusters10);
   fChain->SetBranchAddress("jet_akt6topoem_SamplingMax", &jet_akt6topoem_SamplingMax, &b_jet_akt6topoem_SamplingMax);
   fChain->SetBranchAddress("jet_akt6topoem_fracSamplingMax", &jet_akt6topoem_fracSamplingMax, &b_jet_akt6topoem_fracSamplingMax);
   fChain->SetBranchAddress("jet_akt6topoem_hecf", &jet_akt6topoem_hecf, &b_jet_akt6topoem_hecf);
   fChain->SetBranchAddress("jet_akt6topoem_tgap3f", &jet_akt6topoem_tgap3f, &b_jet_akt6topoem_tgap3f);
   fChain->SetBranchAddress("jet_akt6topoem_isUgly", &jet_akt6topoem_isUgly, &b_jet_akt6topoem_isUgly);
   fChain->SetBranchAddress("jet_akt6topoem_isBadLooseMinus", &jet_akt6topoem_isBadLooseMinus, &b_jet_akt6topoem_isBadLooseMinus);
   fChain->SetBranchAddress("jet_akt6topoem_isBadLoose", &jet_akt6topoem_isBadLoose, &b_jet_akt6topoem_isBadLoose);
   fChain->SetBranchAddress("jet_akt6topoem_isBadMedium", &jet_akt6topoem_isBadMedium, &b_jet_akt6topoem_isBadMedium);
   fChain->SetBranchAddress("jet_akt6topoem_isBadTight", &jet_akt6topoem_isBadTight, &b_jet_akt6topoem_isBadTight);
   fChain->SetBranchAddress("jet_akt6topoem_emfrac", &jet_akt6topoem_emfrac, &b_jet_akt6topoem_emfrac);
   fChain->SetBranchAddress("jet_akt6topoem_Offset", &jet_akt6topoem_Offset, &b_jet_akt6topoem_Offset);
   fChain->SetBranchAddress("jet_akt6topoem_EMJES", &jet_akt6topoem_EMJES, &b_jet_akt6topoem_EMJES);
   fChain->SetBranchAddress("jet_akt6topoem_EMJES_EtaCorr", &jet_akt6topoem_EMJES_EtaCorr, &b_jet_akt6topoem_EMJES_EtaCorr);
   fChain->SetBranchAddress("jet_akt6topoem_EMJESnooffset", &jet_akt6topoem_EMJESnooffset, &b_jet_akt6topoem_EMJESnooffset);
   fChain->SetBranchAddress("jet_akt6topoem_GCWJES", &jet_akt6topoem_GCWJES, &b_jet_akt6topoem_GCWJES);
   fChain->SetBranchAddress("jet_akt6topoem_GCWJES_EtaCorr", &jet_akt6topoem_GCWJES_EtaCorr, &b_jet_akt6topoem_GCWJES_EtaCorr);
   fChain->SetBranchAddress("jet_akt6topoem_CB", &jet_akt6topoem_CB, &b_jet_akt6topoem_CB);
   fChain->SetBranchAddress("jet_akt6topoem_LCJES", &jet_akt6topoem_LCJES, &b_jet_akt6topoem_LCJES);
   fChain->SetBranchAddress("jet_akt6topoem_emscale_E", &jet_akt6topoem_emscale_E, &b_jet_akt6topoem_emscale_E);
   fChain->SetBranchAddress("jet_akt6topoem_emscale_pt", &jet_akt6topoem_emscale_pt, &b_jet_akt6topoem_emscale_pt);
   fChain->SetBranchAddress("jet_akt6topoem_emscale_m", &jet_akt6topoem_emscale_m, &b_jet_akt6topoem_emscale_m);
   fChain->SetBranchAddress("jet_akt6topoem_emscale_eta", &jet_akt6topoem_emscale_eta, &b_jet_akt6topoem_emscale_eta);
   fChain->SetBranchAddress("jet_akt6topoem_emscale_phi", &jet_akt6topoem_emscale_phi, &b_jet_akt6topoem_emscale_phi);
   fChain->SetBranchAddress("jet_akt6topoem_jvtx_x", &jet_akt6topoem_jvtx_x, &b_jet_akt6topoem_jvtx_x);
   fChain->SetBranchAddress("jet_akt6topoem_jvtx_y", &jet_akt6topoem_jvtx_y, &b_jet_akt6topoem_jvtx_y);
   fChain->SetBranchAddress("jet_akt6topoem_jvtx_z", &jet_akt6topoem_jvtx_z, &b_jet_akt6topoem_jvtx_z);
   fChain->SetBranchAddress("jet_akt6topoem_jvtxf", &jet_akt6topoem_jvtxf, &b_jet_akt6topoem_jvtxf);
   fChain->SetBranchAddress("jet_akt6topoem_GSCFactorF", &jet_akt6topoem_GSCFactorF, &b_jet_akt6topoem_GSCFactorF);
   fChain->SetBranchAddress("jet_akt6topoem_WidthFraction", &jet_akt6topoem_WidthFraction, &b_jet_akt6topoem_WidthFraction);
   fChain->SetBranchAddress("jet_akt6topoem_el_dr", &jet_akt6topoem_el_dr, &b_jet_akt6topoem_el_dr);
   fChain->SetBranchAddress("jet_akt6topoem_el_matched", &jet_akt6topoem_el_matched, &b_jet_akt6topoem_el_matched);
   fChain->SetBranchAddress("jet_akt6topoem_mu_dr", &jet_akt6topoem_mu_dr, &b_jet_akt6topoem_mu_dr);
   fChain->SetBranchAddress("jet_akt6topoem_mu_matched", &jet_akt6topoem_mu_matched, &b_jet_akt6topoem_mu_matched);
   fChain->SetBranchAddress("jet_akt6topoem_L1_dr", &jet_akt6topoem_L1_dr, &b_jet_akt6topoem_L1_dr);
   fChain->SetBranchAddress("jet_akt6topoem_L1_matched", &jet_akt6topoem_L1_matched, &b_jet_akt6topoem_L1_matched);
   fChain->SetBranchAddress("jet_akt6topoem_L2_dr", &jet_akt6topoem_L2_dr, &b_jet_akt6topoem_L2_dr);
   fChain->SetBranchAddress("jet_akt6topoem_L2_matched", &jet_akt6topoem_L2_matched, &b_jet_akt6topoem_L2_matched);
   fChain->SetBranchAddress("jet_akt6topoem_EF_dr", &jet_akt6topoem_EF_dr, &b_jet_akt6topoem_EF_dr);
   fChain->SetBranchAddress("jet_akt6topoem_EF_matched", &jet_akt6topoem_EF_matched, &b_jet_akt6topoem_EF_matched);
   fChain->SetBranchAddress("trk_n", &trk_n, &b_trk_n);
   fChain->SetBranchAddress("trk_pt", &trk_pt, &b_trk_pt);
   fChain->SetBranchAddress("trk_eta", &trk_eta, &b_trk_eta);
   fChain->SetBranchAddress("trk_d0_wrtPV", &trk_d0_wrtPV, &b_trk_d0_wrtPV);
   fChain->SetBranchAddress("trk_z0_wrtPV", &trk_z0_wrtPV, &b_trk_z0_wrtPV);
   fChain->SetBranchAddress("trk_phi_wrtPV", &trk_phi_wrtPV, &b_trk_phi_wrtPV);
   fChain->SetBranchAddress("trk_theta_wrtPV", &trk_theta_wrtPV, &b_trk_theta_wrtPV);
   fChain->SetBranchAddress("trk_qoverp_wrtPV", &trk_qoverp_wrtPV, &b_trk_qoverp_wrtPV);
   fChain->SetBranchAddress("trk_d0_wrtBL", &trk_d0_wrtBL, &b_trk_d0_wrtBL);
   fChain->SetBranchAddress("trk_z0_wrtBL", &trk_z0_wrtBL, &b_trk_z0_wrtBL);
   fChain->SetBranchAddress("trk_phi_wrtBL", &trk_phi_wrtBL, &b_trk_phi_wrtBL);
   fChain->SetBranchAddress("trk_d0_err_wrtBL", &trk_d0_err_wrtBL, &b_trk_d0_err_wrtBL);
   fChain->SetBranchAddress("trk_z0_err_wrtBL", &trk_z0_err_wrtBL, &b_trk_z0_err_wrtBL);
   fChain->SetBranchAddress("trk_phi_err_wrtBL", &trk_phi_err_wrtBL, &b_trk_phi_err_wrtBL);
   fChain->SetBranchAddress("trk_theta_err_wrtBL", &trk_theta_err_wrtBL, &b_trk_theta_err_wrtBL);
   fChain->SetBranchAddress("trk_qoverp_err_wrtBL", &trk_qoverp_err_wrtBL, &b_trk_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trk_d0_z0_err_wrtBL", &trk_d0_z0_err_wrtBL, &b_trk_d0_z0_err_wrtBL);
   fChain->SetBranchAddress("trk_d0_phi_err_wrtBL", &trk_d0_phi_err_wrtBL, &b_trk_d0_phi_err_wrtBL);
   fChain->SetBranchAddress("trk_d0_theta_err_wrtBL", &trk_d0_theta_err_wrtBL, &b_trk_d0_theta_err_wrtBL);
   fChain->SetBranchAddress("trk_d0_qoverp_err_wrtBL", &trk_d0_qoverp_err_wrtBL, &b_trk_d0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trk_z0_phi_err_wrtBL", &trk_z0_phi_err_wrtBL, &b_trk_z0_phi_err_wrtBL);
   fChain->SetBranchAddress("trk_z0_theta_err_wrtBL", &trk_z0_theta_err_wrtBL, &b_trk_z0_theta_err_wrtBL);
   fChain->SetBranchAddress("trk_z0_qoverp_err_wrtBL", &trk_z0_qoverp_err_wrtBL, &b_trk_z0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trk_phi_theta_err_wrtBL", &trk_phi_theta_err_wrtBL, &b_trk_phi_theta_err_wrtBL);
   fChain->SetBranchAddress("trk_phi_qoverp_err_wrtBL", &trk_phi_qoverp_err_wrtBL, &b_trk_phi_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trk_theta_qoverp_err_wrtBL", &trk_theta_qoverp_err_wrtBL, &b_trk_theta_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_n", &trkpt5_n, &b_trkpt5_n);
   fChain->SetBranchAddress("trkpt5_d0", &trkpt5_d0, &b_trkpt5_d0);
   fChain->SetBranchAddress("trkpt5_z0", &trkpt5_z0, &b_trkpt5_z0);
   fChain->SetBranchAddress("trkpt5_phi", &trkpt5_phi, &b_trkpt5_phi);
   fChain->SetBranchAddress("trkpt5_theta", &trkpt5_theta, &b_trkpt5_theta);
   fChain->SetBranchAddress("trkpt5_qoverp", &trkpt5_qoverp, &b_trkpt5_qoverp);
   fChain->SetBranchAddress("trkpt5_pt", &trkpt5_pt, &b_trkpt5_pt);
   fChain->SetBranchAddress("trkpt5_eta", &trkpt5_eta, &b_trkpt5_eta);
   fChain->SetBranchAddress("trkpt5_err_d0", &trkpt5_err_d0, &b_trkpt5_err_d0);
   fChain->SetBranchAddress("trkpt5_err_z0", &trkpt5_err_z0, &b_trkpt5_err_z0);
   fChain->SetBranchAddress("trkpt5_err_phi", &trkpt5_err_phi, &b_trkpt5_err_phi);
   fChain->SetBranchAddress("trkpt5_err_theta", &trkpt5_err_theta, &b_trkpt5_err_theta);
   fChain->SetBranchAddress("trkpt5_err_qoverp", &trkpt5_err_qoverp, &b_trkpt5_err_qoverp);
   fChain->SetBranchAddress("trkpt5_d0_wrtPV", &trkpt5_d0_wrtPV, &b_trkpt5_d0_wrtPV);
   fChain->SetBranchAddress("trkpt5_z0_wrtPV", &trkpt5_z0_wrtPV, &b_trkpt5_z0_wrtPV);
   fChain->SetBranchAddress("trkpt5_phi_wrtPV", &trkpt5_phi_wrtPV, &b_trkpt5_phi_wrtPV);
   fChain->SetBranchAddress("trkpt5_err_d0_wrtPV", &trkpt5_err_d0_wrtPV, &b_trkpt5_err_d0_wrtPV);
   fChain->SetBranchAddress("trkpt5_err_z0_wrtPV", &trkpt5_err_z0_wrtPV, &b_trkpt5_err_z0_wrtPV);
   fChain->SetBranchAddress("trkpt5_err_phi_wrtPV", &trkpt5_err_phi_wrtPV, &b_trkpt5_err_phi_wrtPV);
   fChain->SetBranchAddress("trkpt5_err_theta_wrtPV", &trkpt5_err_theta_wrtPV, &b_trkpt5_err_theta_wrtPV);
   fChain->SetBranchAddress("trkpt5_err_qoverp_wrtPV", &trkpt5_err_qoverp_wrtPV, &b_trkpt5_err_qoverp_wrtPV);
   fChain->SetBranchAddress("trkpt5_cov_d0_z0_wrtPV", &trkpt5_cov_d0_z0_wrtPV, &b_trkpt5_cov_d0_z0_wrtPV);
   fChain->SetBranchAddress("trkpt5_cov_d0_phi_wrtPV", &trkpt5_cov_d0_phi_wrtPV, &b_trkpt5_cov_d0_phi_wrtPV);
   fChain->SetBranchAddress("trkpt5_cov_d0_theta_wrtPV", &trkpt5_cov_d0_theta_wrtPV, &b_trkpt5_cov_d0_theta_wrtPV);
   fChain->SetBranchAddress("trkpt5_cov_d0_qoverp_wrtPV", &trkpt5_cov_d0_qoverp_wrtPV, &b_trkpt5_cov_d0_qoverp_wrtPV);
   fChain->SetBranchAddress("trkpt5_cov_z0_phi_wrtPV", &trkpt5_cov_z0_phi_wrtPV, &b_trkpt5_cov_z0_phi_wrtPV);
   fChain->SetBranchAddress("trkpt5_cov_z0_theta_wrtPV", &trkpt5_cov_z0_theta_wrtPV, &b_trkpt5_cov_z0_theta_wrtPV);
   fChain->SetBranchAddress("trkpt5_cov_z0_qoverp_wrtPV", &trkpt5_cov_z0_qoverp_wrtPV, &b_trkpt5_cov_z0_qoverp_wrtPV);
   fChain->SetBranchAddress("trkpt5_cov_phi_theta_wrtPV", &trkpt5_cov_phi_theta_wrtPV, &b_trkpt5_cov_phi_theta_wrtPV);
   fChain->SetBranchAddress("trkpt5_cov_phi_qoverp_wrtPV", &trkpt5_cov_phi_qoverp_wrtPV, &b_trkpt5_cov_phi_qoverp_wrtPV);
   fChain->SetBranchAddress("trkpt5_cov_theta_qoverp_wrtPV", &trkpt5_cov_theta_qoverp_wrtPV, &b_trkpt5_cov_theta_qoverp_wrtPV);
   fChain->SetBranchAddress("trkpt5_d0_wrtBL", &trkpt5_d0_wrtBL, &b_trkpt5_d0_wrtBL);
   fChain->SetBranchAddress("trkpt5_z0_wrtBL", &trkpt5_z0_wrtBL, &b_trkpt5_z0_wrtBL);
   fChain->SetBranchAddress("trkpt5_phi_wrtBL", &trkpt5_phi_wrtBL, &b_trkpt5_phi_wrtBL);
   fChain->SetBranchAddress("trkpt5_d0_err_wrtBL", &trkpt5_d0_err_wrtBL, &b_trkpt5_d0_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_z0_err_wrtBL", &trkpt5_z0_err_wrtBL, &b_trkpt5_z0_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_phi_err_wrtBL", &trkpt5_phi_err_wrtBL, &b_trkpt5_phi_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_theta_err_wrtBL", &trkpt5_theta_err_wrtBL, &b_trkpt5_theta_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_qoverp_err_wrtBL", &trkpt5_qoverp_err_wrtBL, &b_trkpt5_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_d0_z0_err_wrtBL", &trkpt5_d0_z0_err_wrtBL, &b_trkpt5_d0_z0_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_d0_phi_err_wrtBL", &trkpt5_d0_phi_err_wrtBL, &b_trkpt5_d0_phi_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_d0_theta_err_wrtBL", &trkpt5_d0_theta_err_wrtBL, &b_trkpt5_d0_theta_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_d0_qoverp_err_wrtBL", &trkpt5_d0_qoverp_err_wrtBL, &b_trkpt5_d0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_z0_phi_err_wrtBL", &trkpt5_z0_phi_err_wrtBL, &b_trkpt5_z0_phi_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_z0_theta_err_wrtBL", &trkpt5_z0_theta_err_wrtBL, &b_trkpt5_z0_theta_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_z0_qoverp_err_wrtBL", &trkpt5_z0_qoverp_err_wrtBL, &b_trkpt5_z0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_phi_theta_err_wrtBL", &trkpt5_phi_theta_err_wrtBL, &b_trkpt5_phi_theta_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_phi_qoverp_err_wrtBL", &trkpt5_phi_qoverp_err_wrtBL, &b_trkpt5_phi_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_theta_qoverp_err_wrtBL", &trkpt5_theta_qoverp_err_wrtBL, &b_trkpt5_theta_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkpt5_chi2", &trkpt5_chi2, &b_trkpt5_chi2);
   fChain->SetBranchAddress("trkpt5_ndof", &trkpt5_ndof, &b_trkpt5_ndof);
   fChain->SetBranchAddress("trkpt5_nBLHits", &trkpt5_nBLHits, &b_trkpt5_nBLHits);
   fChain->SetBranchAddress("trkpt5_nPixHits", &trkpt5_nPixHits, &b_trkpt5_nPixHits);
   fChain->SetBranchAddress("trkpt5_nSCTHits", &trkpt5_nSCTHits, &b_trkpt5_nSCTHits);
   fChain->SetBranchAddress("trkpt5_nTRTHits", &trkpt5_nTRTHits, &b_trkpt5_nTRTHits);
   fChain->SetBranchAddress("trkpt5_nTRTHighTHits", &trkpt5_nTRTHighTHits, &b_trkpt5_nTRTHighTHits);
   fChain->SetBranchAddress("trkpt5_nPixHoles", &trkpt5_nPixHoles, &b_trkpt5_nPixHoles);
   fChain->SetBranchAddress("trkpt5_nSCTHoles", &trkpt5_nSCTHoles, &b_trkpt5_nSCTHoles);
   fChain->SetBranchAddress("trkpt5_nTRTHoles", &trkpt5_nTRTHoles, &b_trkpt5_nTRTHoles);
   fChain->SetBranchAddress("trkpt5_nPixelDeadSensors", &trkpt5_nPixelDeadSensors, &b_trkpt5_nPixelDeadSensors);
   fChain->SetBranchAddress("trkpt5_nSCTDeadSensors", &trkpt5_nSCTDeadSensors, &b_trkpt5_nSCTDeadSensors);
   fChain->SetBranchAddress("trkpt5_nBLSharedHits", &trkpt5_nBLSharedHits, &b_trkpt5_nBLSharedHits);
   fChain->SetBranchAddress("trkpt5_nPixSharedHits", &trkpt5_nPixSharedHits, &b_trkpt5_nPixSharedHits);
   fChain->SetBranchAddress("trkpt5_nSCTSharedHits", &trkpt5_nSCTSharedHits, &b_trkpt5_nSCTSharedHits);
   fChain->SetBranchAddress("trkpt5_nBLayerSplitHits", &trkpt5_nBLayerSplitHits, &b_trkpt5_nBLayerSplitHits);
   fChain->SetBranchAddress("trkpt5_nPixSplitHits", &trkpt5_nPixSplitHits, &b_trkpt5_nPixSplitHits);
   fChain->SetBranchAddress("trkpt5_nBLayerOutliers", &trkpt5_nBLayerOutliers, &b_trkpt5_nBLayerOutliers);
   fChain->SetBranchAddress("trkpt5_nPixelOutliers", &trkpt5_nPixelOutliers, &b_trkpt5_nPixelOutliers);
   fChain->SetBranchAddress("trkpt5_nSCTOutliers", &trkpt5_nSCTOutliers, &b_trkpt5_nSCTOutliers);
   fChain->SetBranchAddress("trkpt5_nTRTOutliers", &trkpt5_nTRTOutliers, &b_trkpt5_nTRTOutliers);
   fChain->SetBranchAddress("trkpt5_nTRTHighTOutliers", &trkpt5_nTRTHighTOutliers, &b_trkpt5_nTRTHighTOutliers);
   fChain->SetBranchAddress("trkpt5_nContribPixelLayers", &trkpt5_nContribPixelLayers, &b_trkpt5_nContribPixelLayers);
   fChain->SetBranchAddress("trkpt5_nGangedPixels", &trkpt5_nGangedPixels, &b_trkpt5_nGangedPixels);
   fChain->SetBranchAddress("trkpt5_nGangedFlaggedFakes", &trkpt5_nGangedFlaggedFakes, &b_trkpt5_nGangedFlaggedFakes);
   fChain->SetBranchAddress("trkpt5_nPixelSpoiltHits", &trkpt5_nPixelSpoiltHits, &b_trkpt5_nPixelSpoiltHits);
   fChain->SetBranchAddress("trkpt5_nSCTDoubleHoles", &trkpt5_nSCTDoubleHoles, &b_trkpt5_nSCTDoubleHoles);
   fChain->SetBranchAddress("trkpt5_nSCTSpoiltHits", &trkpt5_nSCTSpoiltHits, &b_trkpt5_nSCTSpoiltHits);
   fChain->SetBranchAddress("trkpt5_nTRTDeadStraws", &trkpt5_nTRTDeadStraws, &b_trkpt5_nTRTDeadStraws);
   fChain->SetBranchAddress("trkpt5_nTRTTubeHits", &trkpt5_nTRTTubeHits, &b_trkpt5_nTRTTubeHits);
   fChain->SetBranchAddress("trkpt5_expectBLayerHit", &trkpt5_expectBLayerHit, &b_trkpt5_expectBLayerHit);
   fChain->SetBranchAddress("trkpt5_nMDTHits", &trkpt5_nMDTHits, &b_trkpt5_nMDTHits);
   fChain->SetBranchAddress("trkpt5_nCSCEtaHits", &trkpt5_nCSCEtaHits, &b_trkpt5_nCSCEtaHits);
   fChain->SetBranchAddress("trkpt5_nCSCPhiHits", &trkpt5_nCSCPhiHits, &b_trkpt5_nCSCPhiHits);
   fChain->SetBranchAddress("trkpt5_nRPCEtaHits", &trkpt5_nRPCEtaHits, &b_trkpt5_nRPCEtaHits);
   fChain->SetBranchAddress("trkpt5_nRPCPhiHits", &trkpt5_nRPCPhiHits, &b_trkpt5_nRPCPhiHits);
   fChain->SetBranchAddress("trkpt5_nTGCEtaHits", &trkpt5_nTGCEtaHits, &b_trkpt5_nTGCEtaHits);
   fChain->SetBranchAddress("trkpt5_nTGCPhiHits", &trkpt5_nTGCPhiHits, &b_trkpt5_nTGCPhiHits);
   fChain->SetBranchAddress("trkpt5_nHits", &trkpt5_nHits, &b_trkpt5_nHits);
   fChain->SetBranchAddress("trkpt5_nHoles", &trkpt5_nHoles, &b_trkpt5_nHoles);
   fChain->SetBranchAddress("trkpt5_hitPattern", &trkpt5_hitPattern, &b_trkpt5_hitPattern);
   fChain->SetBranchAddress("trkpt5_TRTHighTHitsRatio", &trkpt5_TRTHighTHitsRatio, &b_trkpt5_TRTHighTHitsRatio);
   fChain->SetBranchAddress("trkpt5_TRTHighTOutliersRatio", &trkpt5_TRTHighTOutliersRatio, &b_trkpt5_TRTHighTOutliersRatio);
   fChain->SetBranchAddress("trkpt5_pixeldEdx", &trkpt5_pixeldEdx, &b_trkpt5_pixeldEdx);
   fChain->SetBranchAddress("trkpt5_nGoodHitsPixeldEdx", &trkpt5_nGoodHitsPixeldEdx, &b_trkpt5_nGoodHitsPixeldEdx);
   fChain->SetBranchAddress("trkpt5_massPixeldEdx", &trkpt5_massPixeldEdx, &b_trkpt5_massPixeldEdx);
   fChain->SetBranchAddress("trkpt5_likelihoodsPixeldEdx", &trkpt5_likelihoodsPixeldEdx, &b_trkpt5_likelihoodsPixeldEdx);
   fChain->SetBranchAddress("trkpt5_fitter", &trkpt5_fitter, &b_trkpt5_fitter);
   fChain->SetBranchAddress("trkpt5_patternReco1", &trkpt5_patternReco1, &b_trkpt5_patternReco1);
   fChain->SetBranchAddress("trkpt5_patternReco2", &trkpt5_patternReco2, &b_trkpt5_patternReco2);
   fChain->SetBranchAddress("trkpt5_trackProperties", &trkpt5_trackProperties, &b_trkpt5_trackProperties);
   fChain->SetBranchAddress("trkpt5_particleHypothesis", &trkpt5_particleHypothesis, &b_trkpt5_particleHypothesis);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_n", &trkpt5_Pixel_hit_n, &b_trkpt5_Pixel_hit_n);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_id", &trkpt5_Pixel_hit_id, &b_trkpt5_Pixel_hit_id);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_detElementId", &trkpt5_Pixel_hit_detElementId, &b_trkpt5_Pixel_hit_detElementId);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_detType", &trkpt5_Pixel_hit_detType, &b_trkpt5_Pixel_hit_detType);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_bec", &trkpt5_Pixel_hit_bec, &b_trkpt5_Pixel_hit_bec);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_layer", &trkpt5_Pixel_hit_layer, &b_trkpt5_Pixel_hit_layer);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_charge", &trkpt5_Pixel_hit_charge, &b_trkpt5_Pixel_hit_charge);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_sizePhi", &trkpt5_Pixel_hit_sizePhi, &b_trkpt5_Pixel_hit_sizePhi);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_sizeZ", &trkpt5_Pixel_hit_sizeZ, &b_trkpt5_Pixel_hit_sizeZ);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_size", &trkpt5_Pixel_hit_size, &b_trkpt5_Pixel_hit_size);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_isFake", &trkpt5_Pixel_hit_isFake, &b_trkpt5_Pixel_hit_isFake);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_isGanged", &trkpt5_Pixel_hit_isGanged, &b_trkpt5_Pixel_hit_isGanged);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_isSplit", &trkpt5_Pixel_hit_isSplit, &b_trkpt5_Pixel_hit_isSplit);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_splitProb1", &trkpt5_Pixel_hit_splitProb1, &b_trkpt5_Pixel_hit_splitProb1);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_splitProb2", &trkpt5_Pixel_hit_splitProb2, &b_trkpt5_Pixel_hit_splitProb2);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_isCompetingRIO", &trkpt5_Pixel_hit_isCompetingRIO, &b_trkpt5_Pixel_hit_isCompetingRIO);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_locX", &trkpt5_Pixel_hit_locX, &b_trkpt5_Pixel_hit_locX);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_locY", &trkpt5_Pixel_hit_locY, &b_trkpt5_Pixel_hit_locY);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_incidencePhi", &trkpt5_Pixel_hit_incidencePhi, &b_trkpt5_Pixel_hit_incidencePhi);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_incidenceTheta", &trkpt5_Pixel_hit_incidenceTheta, &b_trkpt5_Pixel_hit_incidenceTheta);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_err_locX", &trkpt5_Pixel_hit_err_locX, &b_trkpt5_Pixel_hit_err_locX);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_err_locY", &trkpt5_Pixel_hit_err_locY, &b_trkpt5_Pixel_hit_err_locY);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_cov_locXY", &trkpt5_Pixel_hit_cov_locXY, &b_trkpt5_Pixel_hit_cov_locXY);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_x", &trkpt5_Pixel_hit_x, &b_trkpt5_Pixel_hit_x);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_y", &trkpt5_Pixel_hit_y, &b_trkpt5_Pixel_hit_y);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_z", &trkpt5_Pixel_hit_z, &b_trkpt5_Pixel_hit_z);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_trkLocX", &trkpt5_Pixel_hit_trkLocX, &b_trkpt5_Pixel_hit_trkLocX);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_trkLocY", &trkpt5_Pixel_hit_trkLocY, &b_trkpt5_Pixel_hit_trkLocY);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_err_trkLocX", &trkpt5_Pixel_hit_err_trkLocX, &b_trkpt5_Pixel_hit_err_trkLocX);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_err_trkLocY", &trkpt5_Pixel_hit_err_trkLocY, &b_trkpt5_Pixel_hit_err_trkLocY);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_cov_trkLocXY", &trkpt5_Pixel_hit_cov_trkLocXY, &b_trkpt5_Pixel_hit_cov_trkLocXY);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_chi2", &trkpt5_Pixel_hit_chi2, &b_trkpt5_Pixel_hit_chi2);
   fChain->SetBranchAddress("trkpt5_Pixel_hit_ndof", &trkpt5_Pixel_hit_ndof, &b_trkpt5_Pixel_hit_ndof);
   fChain->SetBranchAddress("trkpt5_calodEdx", &trkpt5_calodEdx, &b_trkpt5_calodEdx);
   fChain->SetBranchAddress("trkpt5_calodEdx_err", &trkpt5_calodEdx_err, &b_trkpt5_calodEdx_err);
   fChain->SetBranchAddress("trkpt5_calodEdx_betagamma", &trkpt5_calodEdx_betagamma, &b_trkpt5_calodEdx_betagamma);
   fChain->SetBranchAddress("trkpt5_calodEdx_betagamma_err", &trkpt5_calodEdx_betagamma_err, &b_trkpt5_calodEdx_betagamma_err);
   fChain->SetBranchAddress("trkpt5_calodEdx_mean_EM", &trkpt5_calodEdx_mean_EM, &b_trkpt5_calodEdx_mean_EM);
   fChain->SetBranchAddress("trkpt5_calodEdx_mean_HadrCaloBarrel", &trkpt5_calodEdx_mean_HadrCaloBarrel, &b_trkpt5_calodEdx_mean_HadrCaloBarrel);
   fChain->SetBranchAddress("trkpt5_calodEdx_mean_HadrCaloEndcaps", &trkpt5_calodEdx_mean_HadrCaloEndcaps, &b_trkpt5_calodEdx_mean_HadrCaloEndcaps);
   fChain->SetBranchAddress("trkpt5_raw_calodEdx", &trkpt5_raw_calodEdx, &b_trkpt5_raw_calodEdx);
   fChain->SetBranchAddress("trkpt5_raw_calodEdx_err", &trkpt5_raw_calodEdx_err, &b_trkpt5_raw_calodEdx_err);
   fChain->SetBranchAddress("trkpt5_raw_calodEdx_dE", &trkpt5_raw_calodEdx_dE, &b_trkpt5_raw_calodEdx_dE);
   fChain->SetBranchAddress("trkpt5_raw_calodEdx_dE_err", &trkpt5_raw_calodEdx_dE_err, &b_trkpt5_raw_calodEdx_dE_err);
   fChain->SetBranchAddress("trkpt5_raw_calodEdx_dx", &trkpt5_raw_calodEdx_dx, &b_trkpt5_raw_calodEdx_dx);
   fChain->SetBranchAddress("trkpt5_raw_calodEdx_dx_err", &trkpt5_raw_calodEdx_dx_err, &b_trkpt5_raw_calodEdx_dx_err);
   fChain->SetBranchAddress("trkpt5_raw_calodEdx_dN", &trkpt5_raw_calodEdx_dN, &b_trkpt5_raw_calodEdx_dN);
   fChain->SetBranchAddress("trkpt5_CaloCell_sampling", &trkpt5_CaloCell_sampling, &b_trkpt5_CaloCell_sampling);
   fChain->SetBranchAddress("trkpt5_CaloCell_eta", &trkpt5_CaloCell_eta, &b_trkpt5_CaloCell_eta);
   fChain->SetBranchAddress("trkpt5_CaloCell_phi", &trkpt5_CaloCell_phi, &b_trkpt5_CaloCell_phi);
   fChain->SetBranchAddress("trkpt5_CaloCell_dr", &trkpt5_CaloCell_dr, &b_trkpt5_CaloCell_dr);
   fChain->SetBranchAddress("trkpt5_CaloCell_E", &trkpt5_CaloCell_E, &b_trkpt5_CaloCell_E);
   fChain->SetBranchAddress("trkpt5_CaloCell_t", &trkpt5_CaloCell_t, &b_trkpt5_CaloCell_t);
   fChain->SetBranchAddress("trkpt5_CaloCell_x", &trkpt5_CaloCell_x, &b_trkpt5_CaloCell_x);
   fChain->SetBranchAddress("trkpt5_CaloCell_y", &trkpt5_CaloCell_y, &b_trkpt5_CaloCell_y);
   fChain->SetBranchAddress("trkpt5_CaloCell_z", &trkpt5_CaloCell_z, &b_trkpt5_CaloCell_z);
   fChain->SetBranchAddress("trkpt5_TileBeta", &trkpt5_TileBeta, &b_trkpt5_TileBeta);
   fChain->SetBranchAddress("trkpt5_TileBetaMass", &trkpt5_TileBetaMass, &b_trkpt5_TileBetaMass);
   fChain->SetBranchAddress("trkpt5_refit_res_pt", &trkpt5_refit_res_pt, &b_trkpt5_refit_res_pt);
   fChain->SetBranchAddress("trkpt5_refit_res_eta", &trkpt5_refit_res_eta, &b_trkpt5_refit_res_eta);
   fChain->SetBranchAddress("trkpt5_refit_res_phi", &trkpt5_refit_res_phi, &b_trkpt5_refit_res_phi);
   fChain->SetBranchAddress("trkpt5_trt_n", &trkpt5_trt_n, &b_trkpt5_trt_n);
   fChain->SetBranchAddress("trkpt5_trt_barrelendcap", &trkpt5_trt_barrelendcap, &b_trkpt5_trt_barrelendcap);
   fChain->SetBranchAddress("trkpt5_trt_phimodule", &trkpt5_trt_phimodule, &b_trkpt5_trt_phimodule);
   fChain->SetBranchAddress("trkpt5_trt_layerwheel", &trkpt5_trt_layerwheel, &b_trkpt5_trt_layerwheel);
   fChain->SetBranchAddress("trkpt5_trt_strawlayer", &trkpt5_trt_strawlayer, &b_trkpt5_trt_strawlayer);
   fChain->SetBranchAddress("trkpt5_trt_strawid", &trkpt5_trt_strawid, &b_trkpt5_trt_strawid);
   fChain->SetBranchAddress("trkpt5_trt_hitx", &trkpt5_trt_hitx, &b_trkpt5_trt_hitx);
   fChain->SetBranchAddress("trkpt5_trt_hity", &trkpt5_trt_hity, &b_trkpt5_trt_hity);
   fChain->SetBranchAddress("trkpt5_trt_hitz", &trkpt5_trt_hitz, &b_trkpt5_trt_hitz);
   fChain->SetBranchAddress("trkpt5_trt_t0", &trkpt5_trt_t0, &b_trkpt5_trt_t0);
   fChain->SetBranchAddress("trkpt5_trt_tot", &trkpt5_trt_tot, &b_trkpt5_trt_tot);
   fChain->SetBranchAddress("trkpt5_trt_rawdrifttime", &trkpt5_trt_rawdrifttime, &b_trkpt5_trt_rawdrifttime);
   fChain->SetBranchAddress("trkpt5_trt_trackradius", &trkpt5_trt_trackradius, &b_trkpt5_trt_trackradius);
   fChain->SetBranchAddress("trkpt5_trt_driftradius", &trkpt5_trt_driftradius, &b_trkpt5_trt_driftradius);
   fChain->SetBranchAddress("trkpt5_trt_risingedge", &trkpt5_trt_risingedge, &b_trkpt5_trt_risingedge);
   fChain->SetBranchAddress("trkpt5_trt_fallingedge", &trkpt5_trt_fallingedge, &b_trkpt5_trt_fallingedge);
   fChain->SetBranchAddress("trkpt5_trt_rawbitpatterns", &trkpt5_trt_rawbitpatterns, &b_trkpt5_trt_rawbitpatterns);
   fChain->SetBranchAddress("trkpt5_trt_istube", &trkpt5_trt_istube, &b_trkpt5_trt_istube);
   fChain->SetBranchAddress("trkpt5_trt_NBI_dEdxTrtHighThresholdFraction", &trkpt5_trt_NBI_dEdxTrtHighThresholdFraction, &b_trkpt5_trt_NBI_dEdxTrtHighThresholdFraction);
   fChain->SetBranchAddress("trkpt5_trt_NBI_dEdxTrtLastBitFraction", &trkpt5_trt_NBI_dEdxTrtLastBitFraction, &b_trkpt5_trt_NBI_dEdxTrtLastBitFraction);
   fChain->SetBranchAddress("trkpt5_trt_Indiana_dEdxTrtBitsOverThreshold", &trkpt5_trt_Indiana_dEdxTrtBitsOverThreshold, &b_trkpt5_trt_Indiana_dEdxTrtBitsOverThreshold);
   fChain->SetBranchAddress("trkpt5_trt_Indiana_dEdxTrtTrailingEdge", &trkpt5_trt_Indiana_dEdxTrtTrailingEdge, &b_trkpt5_trt_Indiana_dEdxTrtTrailingEdge);
   fChain->SetBranchAddress("trkpt5_trt_Indiana_dEdxTrtLastBitFraction", &trkpt5_trt_Indiana_dEdxTrtLastBitFraction, &b_trkpt5_trt_Indiana_dEdxTrtLastBitFraction);
   fChain->SetBranchAddress("trkpt5_trt_InDetLowBetaCandidate_BitsOverThr", &trkpt5_trt_InDetLowBetaCandidate_BitsOverThr, &b_trkpt5_trt_InDetLowBetaCandidate_BitsOverThr);
   fChain->SetBranchAddress("trkpt5_trt_InDetLowBetaCandidate_TrailingEdge", &trkpt5_trt_InDetLowBetaCandidate_TrailingEdge, &b_trkpt5_trt_InDetLowBetaCandidate_TrailingEdge);
   fChain->SetBranchAddress("trkpt5_trt_InDetLowBetaCandidate_TrailingEdgeError", &trkpt5_trt_InDetLowBetaCandidate_TrailingEdgeError, &b_trkpt5_trt_InDetLowBetaCandidate_TrailingEdgeError);
   fChain->SetBranchAddress("trkpt5_trt_InDetLowBetaCandidate_lastBits", &trkpt5_trt_InDetLowBetaCandidate_lastBits, &b_trkpt5_trt_InDetLowBetaCandidate_lastBits);
   fChain->SetBranchAddress("trkpt5_trt_InDetLowBetaCandidate_dEdx", &trkpt5_trt_InDetLowBetaCandidate_dEdx, &b_trkpt5_trt_InDetLowBetaCandidate_dEdx);
   fChain->SetBranchAddress("trkpt5_trt_InDetLowBetaCandidate_LikelihoodBeta", &trkpt5_trt_InDetLowBetaCandidate_LikelihoodBeta, &b_trkpt5_trt_InDetLowBetaCandidate_LikelihoodBeta);
   fChain->SetBranchAddress("trkpt5_trt_InDetLowBetaCandidate_LikelihoodError", &trkpt5_trt_InDetLowBetaCandidate_LikelihoodError, &b_trkpt5_trt_InDetLowBetaCandidate_LikelihoodError);
   fChain->SetBranchAddress("trkpt5_trt_InDetLowBetaCandidate_HighTbits", &trkpt5_trt_InDetLowBetaCandidate_HighTbits, &b_trkpt5_trt_InDetLowBetaCandidate_HighTbits);
   fChain->SetBranchAddress("trkpt5_trt_ToT_Tools_usedHits", &trkpt5_trt_ToT_Tools_usedHits, &b_trkpt5_trt_ToT_Tools_usedHits);
   fChain->SetBranchAddress("trkpt5_trt_ToT_Tools_dEdx", &trkpt5_trt_ToT_Tools_dEdx, &b_trkpt5_trt_ToT_Tools_dEdx);
   fChain->SetBranchAddress("trkpt5_trt_ToT_Tools_usedHits_L", &trkpt5_trt_ToT_Tools_usedHits_L, &b_trkpt5_trt_ToT_Tools_usedHits_L);
   fChain->SetBranchAddress("trkpt5_trt_ToT_Tools_dEdx_L", &trkpt5_trt_ToT_Tools_dEdx_L, &b_trkpt5_trt_ToT_Tools_dEdx_L);
   fChain->SetBranchAddress("MET_RefFinal_etx", &MET_RefFinal_etx, &b_MET_RefFinal_etx);
   fChain->SetBranchAddress("MET_RefFinal_ety", &MET_RefFinal_ety, &b_MET_RefFinal_ety);
   fChain->SetBranchAddress("MET_RefFinal_phi", &MET_RefFinal_phi, &b_MET_RefFinal_phi);
   fChain->SetBranchAddress("MET_RefFinal_et", &MET_RefFinal_et, &b_MET_RefFinal_et);
   fChain->SetBranchAddress("MET_RefFinal_sumet", &MET_RefFinal_sumet, &b_MET_RefFinal_sumet);
   fChain->SetBranchAddress("MET_RefFinal_etx_CentralReg", &MET_RefFinal_etx_CentralReg, &b_MET_RefFinal_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_ety_CentralReg", &MET_RefFinal_ety_CentralReg, &b_MET_RefFinal_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_sumet_CentralReg", &MET_RefFinal_sumet_CentralReg, &b_MET_RefFinal_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_phi_CentralReg", &MET_RefFinal_phi_CentralReg, &b_MET_RefFinal_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_etx_EndcapRegion", &MET_RefFinal_etx_EndcapRegion, &b_MET_RefFinal_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_ety_EndcapRegion", &MET_RefFinal_ety_EndcapRegion, &b_MET_RefFinal_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_sumet_EndcapRegion", &MET_RefFinal_sumet_EndcapRegion, &b_MET_RefFinal_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_phi_EndcapRegion", &MET_RefFinal_phi_EndcapRegion, &b_MET_RefFinal_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_etx_ForwardReg", &MET_RefFinal_etx_ForwardReg, &b_MET_RefFinal_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_ety_ForwardReg", &MET_RefFinal_ety_ForwardReg, &b_MET_RefFinal_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_sumet_ForwardReg", &MET_RefFinal_sumet_ForwardReg, &b_MET_RefFinal_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_phi_ForwardReg", &MET_RefFinal_phi_ForwardReg, &b_MET_RefFinal_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_etx", &MET_RefMuon_etx, &b_MET_RefMuon_etx);
   fChain->SetBranchAddress("MET_RefMuon_ety", &MET_RefMuon_ety, &b_MET_RefMuon_ety);
   fChain->SetBranchAddress("MET_RefMuon_phi", &MET_RefMuon_phi, &b_MET_RefMuon_phi);
   fChain->SetBranchAddress("MET_RefMuon_et", &MET_RefMuon_et, &b_MET_RefMuon_et);
   fChain->SetBranchAddress("MET_RefMuon_sumet", &MET_RefMuon_sumet, &b_MET_RefMuon_sumet);
   fChain->SetBranchAddress("MET_RefMuon_etx_CentralReg", &MET_RefMuon_etx_CentralReg, &b_MET_RefMuon_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_ety_CentralReg", &MET_RefMuon_ety_CentralReg, &b_MET_RefMuon_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_sumet_CentralReg", &MET_RefMuon_sumet_CentralReg, &b_MET_RefMuon_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_phi_CentralReg", &MET_RefMuon_phi_CentralReg, &b_MET_RefMuon_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_etx_EndcapRegion", &MET_RefMuon_etx_EndcapRegion, &b_MET_RefMuon_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_ety_EndcapRegion", &MET_RefMuon_ety_EndcapRegion, &b_MET_RefMuon_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_sumet_EndcapRegion", &MET_RefMuon_sumet_EndcapRegion, &b_MET_RefMuon_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_phi_EndcapRegion", &MET_RefMuon_phi_EndcapRegion, &b_MET_RefMuon_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_etx_ForwardReg", &MET_RefMuon_etx_ForwardReg, &b_MET_RefMuon_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_ety_ForwardReg", &MET_RefMuon_ety_ForwardReg, &b_MET_RefMuon_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_sumet_ForwardReg", &MET_RefMuon_sumet_ForwardReg, &b_MET_RefMuon_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_phi_ForwardReg", &MET_RefMuon_phi_ForwardReg, &b_MET_RefMuon_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuons_etx", &MET_RefMuons_etx, &b_MET_RefMuons_etx);
   fChain->SetBranchAddress("MET_RefMuons_ety", &MET_RefMuons_ety, &b_MET_RefMuons_ety);
   fChain->SetBranchAddress("MET_RefMuons_phi", &MET_RefMuons_phi, &b_MET_RefMuons_phi);
   fChain->SetBranchAddress("MET_RefMuons_et", &MET_RefMuons_et, &b_MET_RefMuons_et);
   fChain->SetBranchAddress("MET_RefMuons_sumet", &MET_RefMuons_sumet, &b_MET_RefMuons_sumet);
   fChain->SetBranchAddress("MET_RefMuons_etx_CentralReg", &MET_RefMuons_etx_CentralReg, &b_MET_RefMuons_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefMuons_ety_CentralReg", &MET_RefMuons_ety_CentralReg, &b_MET_RefMuons_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefMuons_sumet_CentralReg", &MET_RefMuons_sumet_CentralReg, &b_MET_RefMuons_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefMuons_phi_CentralReg", &MET_RefMuons_phi_CentralReg, &b_MET_RefMuons_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefMuons_etx_EndcapRegion", &MET_RefMuons_etx_EndcapRegion, &b_MET_RefMuons_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuons_ety_EndcapRegion", &MET_RefMuons_ety_EndcapRegion, &b_MET_RefMuons_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuons_sumet_EndcapRegion", &MET_RefMuons_sumet_EndcapRegion, &b_MET_RefMuons_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuons_phi_EndcapRegion", &MET_RefMuons_phi_EndcapRegion, &b_MET_RefMuons_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuons_etx_ForwardReg", &MET_RefMuons_etx_ForwardReg, &b_MET_RefMuons_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuons_ety_ForwardReg", &MET_RefMuons_ety_ForwardReg, &b_MET_RefMuons_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuons_sumet_ForwardReg", &MET_RefMuons_sumet_ForwardReg, &b_MET_RefMuons_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuons_phi_ForwardReg", &MET_RefMuons_phi_ForwardReg, &b_MET_RefMuons_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_em_etx", &MET_RefFinal_em_etx, &b_MET_RefFinal_em_etx);
   fChain->SetBranchAddress("MET_RefFinal_em_ety", &MET_RefFinal_em_ety, &b_MET_RefFinal_em_ety);
   fChain->SetBranchAddress("MET_RefFinal_em_phi", &MET_RefFinal_em_phi, &b_MET_RefFinal_em_phi);
   fChain->SetBranchAddress("MET_RefFinal_em_et", &MET_RefFinal_em_et, &b_MET_RefFinal_em_et);
   fChain->SetBranchAddress("MET_RefFinal_em_sumet", &MET_RefFinal_em_sumet, &b_MET_RefFinal_em_sumet);
   fChain->SetBranchAddress("MET_RefFinal_em_etx_CentralReg", &MET_RefFinal_em_etx_CentralReg, &b_MET_RefFinal_em_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_em_ety_CentralReg", &MET_RefFinal_em_ety_CentralReg, &b_MET_RefFinal_em_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_em_sumet_CentralReg", &MET_RefFinal_em_sumet_CentralReg, &b_MET_RefFinal_em_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_em_phi_CentralReg", &MET_RefFinal_em_phi_CentralReg, &b_MET_RefFinal_em_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_em_etx_EndcapRegion", &MET_RefFinal_em_etx_EndcapRegion, &b_MET_RefFinal_em_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_em_ety_EndcapRegion", &MET_RefFinal_em_ety_EndcapRegion, &b_MET_RefFinal_em_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_em_sumet_EndcapRegion", &MET_RefFinal_em_sumet_EndcapRegion, &b_MET_RefFinal_em_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_em_phi_EndcapRegion", &MET_RefFinal_em_phi_EndcapRegion, &b_MET_RefFinal_em_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_em_etx_ForwardReg", &MET_RefFinal_em_etx_ForwardReg, &b_MET_RefFinal_em_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_em_ety_ForwardReg", &MET_RefFinal_em_ety_ForwardReg, &b_MET_RefFinal_em_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_em_sumet_ForwardReg", &MET_RefFinal_em_sumet_ForwardReg, &b_MET_RefFinal_em_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_em_phi_ForwardReg", &MET_RefFinal_em_phi_ForwardReg, &b_MET_RefFinal_em_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Isol_etx", &MET_Muons_Isol_etx, &b_MET_Muons_Isol_etx);
   fChain->SetBranchAddress("MET_Muons_Isol_ety", &MET_Muons_Isol_ety, &b_MET_Muons_Isol_ety);
   fChain->SetBranchAddress("MET_Muons_Isol_phi", &MET_Muons_Isol_phi, &b_MET_Muons_Isol_phi);
   fChain->SetBranchAddress("MET_Muons_Isol_et", &MET_Muons_Isol_et, &b_MET_Muons_Isol_et);
   fChain->SetBranchAddress("MET_Muons_Isol_sumet", &MET_Muons_Isol_sumet, &b_MET_Muons_Isol_sumet);
   fChain->SetBranchAddress("MET_Muons_Isol_etx_CentralReg", &MET_Muons_Isol_etx_CentralReg, &b_MET_Muons_Isol_etx_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Isol_ety_CentralReg", &MET_Muons_Isol_ety_CentralReg, &b_MET_Muons_Isol_ety_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Isol_sumet_CentralReg", &MET_Muons_Isol_sumet_CentralReg, &b_MET_Muons_Isol_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Isol_phi_CentralReg", &MET_Muons_Isol_phi_CentralReg, &b_MET_Muons_Isol_phi_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Isol_etx_EndcapRegion", &MET_Muons_Isol_etx_EndcapRegion, &b_MET_Muons_Isol_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Isol_ety_EndcapRegion", &MET_Muons_Isol_ety_EndcapRegion, &b_MET_Muons_Isol_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Isol_sumet_EndcapRegion", &MET_Muons_Isol_sumet_EndcapRegion, &b_MET_Muons_Isol_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Isol_phi_EndcapRegion", &MET_Muons_Isol_phi_EndcapRegion, &b_MET_Muons_Isol_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Isol_etx_ForwardReg", &MET_Muons_Isol_etx_ForwardReg, &b_MET_Muons_Isol_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Isol_ety_ForwardReg", &MET_Muons_Isol_ety_ForwardReg, &b_MET_Muons_Isol_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Isol_sumet_ForwardReg", &MET_Muons_Isol_sumet_ForwardReg, &b_MET_Muons_Isol_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Isol_phi_ForwardReg", &MET_Muons_Isol_phi_ForwardReg, &b_MET_Muons_Isol_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_NonIsol_etx", &MET_Muons_NonIsol_etx, &b_MET_Muons_NonIsol_etx);
   fChain->SetBranchAddress("MET_Muons_NonIsol_ety", &MET_Muons_NonIsol_ety, &b_MET_Muons_NonIsol_ety);
   fChain->SetBranchAddress("MET_Muons_NonIsol_phi", &MET_Muons_NonIsol_phi, &b_MET_Muons_NonIsol_phi);
   fChain->SetBranchAddress("MET_Muons_NonIsol_et", &MET_Muons_NonIsol_et, &b_MET_Muons_NonIsol_et);
   fChain->SetBranchAddress("MET_Muons_NonIsol_sumet", &MET_Muons_NonIsol_sumet, &b_MET_Muons_NonIsol_sumet);
   fChain->SetBranchAddress("MET_Muons_NonIsol_etx_CentralReg", &MET_Muons_NonIsol_etx_CentralReg, &b_MET_Muons_NonIsol_etx_CentralReg);
   fChain->SetBranchAddress("MET_Muons_NonIsol_ety_CentralReg", &MET_Muons_NonIsol_ety_CentralReg, &b_MET_Muons_NonIsol_ety_CentralReg);
   fChain->SetBranchAddress("MET_Muons_NonIsol_sumet_CentralReg", &MET_Muons_NonIsol_sumet_CentralReg, &b_MET_Muons_NonIsol_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Muons_NonIsol_phi_CentralReg", &MET_Muons_NonIsol_phi_CentralReg, &b_MET_Muons_NonIsol_phi_CentralReg);
   fChain->SetBranchAddress("MET_Muons_NonIsol_etx_EndcapRegion", &MET_Muons_NonIsol_etx_EndcapRegion, &b_MET_Muons_NonIsol_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_NonIsol_ety_EndcapRegion", &MET_Muons_NonIsol_ety_EndcapRegion, &b_MET_Muons_NonIsol_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_NonIsol_sumet_EndcapRegion", &MET_Muons_NonIsol_sumet_EndcapRegion, &b_MET_Muons_NonIsol_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_NonIsol_phi_EndcapRegion", &MET_Muons_NonIsol_phi_EndcapRegion, &b_MET_Muons_NonIsol_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_NonIsol_etx_ForwardReg", &MET_Muons_NonIsol_etx_ForwardReg, &b_MET_Muons_NonIsol_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_NonIsol_ety_ForwardReg", &MET_Muons_NonIsol_ety_ForwardReg, &b_MET_Muons_NonIsol_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_NonIsol_sumet_ForwardReg", &MET_Muons_NonIsol_sumet_ForwardReg, &b_MET_Muons_NonIsol_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_NonIsol_phi_ForwardReg", &MET_Muons_NonIsol_phi_ForwardReg, &b_MET_Muons_NonIsol_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Total_etx", &MET_Muons_Total_etx, &b_MET_Muons_Total_etx);
   fChain->SetBranchAddress("MET_Muons_Total_ety", &MET_Muons_Total_ety, &b_MET_Muons_Total_ety);
   fChain->SetBranchAddress("MET_Muons_Total_phi", &MET_Muons_Total_phi, &b_MET_Muons_Total_phi);
   fChain->SetBranchAddress("MET_Muons_Total_et", &MET_Muons_Total_et, &b_MET_Muons_Total_et);
   fChain->SetBranchAddress("MET_Muons_Total_sumet", &MET_Muons_Total_sumet, &b_MET_Muons_Total_sumet);
   fChain->SetBranchAddress("MET_Muons_Total_etx_CentralReg", &MET_Muons_Total_etx_CentralReg, &b_MET_Muons_Total_etx_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Total_ety_CentralReg", &MET_Muons_Total_ety_CentralReg, &b_MET_Muons_Total_ety_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Total_sumet_CentralReg", &MET_Muons_Total_sumet_CentralReg, &b_MET_Muons_Total_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Total_phi_CentralReg", &MET_Muons_Total_phi_CentralReg, &b_MET_Muons_Total_phi_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Total_etx_EndcapRegion", &MET_Muons_Total_etx_EndcapRegion, &b_MET_Muons_Total_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Total_ety_EndcapRegion", &MET_Muons_Total_ety_EndcapRegion, &b_MET_Muons_Total_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Total_sumet_EndcapRegion", &MET_Muons_Total_sumet_EndcapRegion, &b_MET_Muons_Total_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Total_phi_EndcapRegion", &MET_Muons_Total_phi_EndcapRegion, &b_MET_Muons_Total_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Total_etx_ForwardReg", &MET_Muons_Total_etx_ForwardReg, &b_MET_Muons_Total_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Total_ety_ForwardReg", &MET_Muons_Total_ety_ForwardReg, &b_MET_Muons_Total_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Total_sumet_ForwardReg", &MET_Muons_Total_sumet_ForwardReg, &b_MET_Muons_Total_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Total_phi_ForwardReg", &MET_Muons_Total_phi_ForwardReg, &b_MET_Muons_Total_phi_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_etx", &MET_MuonBoy_etx, &b_MET_MuonBoy_etx);
   fChain->SetBranchAddress("MET_MuonBoy_ety", &MET_MuonBoy_ety, &b_MET_MuonBoy_ety);
   fChain->SetBranchAddress("MET_MuonBoy_phi", &MET_MuonBoy_phi, &b_MET_MuonBoy_phi);
   fChain->SetBranchAddress("MET_MuonBoy_et", &MET_MuonBoy_et, &b_MET_MuonBoy_et);
   fChain->SetBranchAddress("MET_MuonBoy_sumet", &MET_MuonBoy_sumet, &b_MET_MuonBoy_sumet);
   fChain->SetBranchAddress("MET_MuonBoy_etx_CentralReg", &MET_MuonBoy_etx_CentralReg, &b_MET_MuonBoy_etx_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_ety_CentralReg", &MET_MuonBoy_ety_CentralReg, &b_MET_MuonBoy_ety_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_sumet_CentralReg", &MET_MuonBoy_sumet_CentralReg, &b_MET_MuonBoy_sumet_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_phi_CentralReg", &MET_MuonBoy_phi_CentralReg, &b_MET_MuonBoy_phi_CentralReg);
   fChain->SetBranchAddress("MET_MuonBoy_etx_EndcapRegion", &MET_MuonBoy_etx_EndcapRegion, &b_MET_MuonBoy_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_ety_EndcapRegion", &MET_MuonBoy_ety_EndcapRegion, &b_MET_MuonBoy_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_sumet_EndcapRegion", &MET_MuonBoy_sumet_EndcapRegion, &b_MET_MuonBoy_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_phi_EndcapRegion", &MET_MuonBoy_phi_EndcapRegion, &b_MET_MuonBoy_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonBoy_etx_ForwardReg", &MET_MuonBoy_etx_ForwardReg, &b_MET_MuonBoy_etx_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_ety_ForwardReg", &MET_MuonBoy_ety_ForwardReg, &b_MET_MuonBoy_ety_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_sumet_ForwardReg", &MET_MuonBoy_sumet_ForwardReg, &b_MET_MuonBoy_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_phi_ForwardReg", &MET_MuonBoy_phi_ForwardReg, &b_MET_MuonBoy_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_STVF_etx", &MET_RefFinal_STVF_etx, &b_MET_RefFinal_STVF_etx);
   fChain->SetBranchAddress("MET_RefFinal_STVF_ety", &MET_RefFinal_STVF_ety, &b_MET_RefFinal_STVF_ety);
   fChain->SetBranchAddress("MET_RefFinal_STVF_phi", &MET_RefFinal_STVF_phi, &b_MET_RefFinal_STVF_phi);
   fChain->SetBranchAddress("MET_RefFinal_STVF_et", &MET_RefFinal_STVF_et, &b_MET_RefFinal_STVF_et);
   fChain->SetBranchAddress("MET_RefFinal_STVF_sumet", &MET_RefFinal_STVF_sumet, &b_MET_RefFinal_STVF_sumet);
   fChain->SetBranchAddress("MET_RefFinal_STVF_etx_CentralReg", &MET_RefFinal_STVF_etx_CentralReg, &b_MET_RefFinal_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_STVF_ety_CentralReg", &MET_RefFinal_STVF_ety_CentralReg, &b_MET_RefFinal_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_STVF_sumet_CentralReg", &MET_RefFinal_STVF_sumet_CentralReg, &b_MET_RefFinal_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_STVF_phi_CentralReg", &MET_RefFinal_STVF_phi_CentralReg, &b_MET_RefFinal_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_STVF_etx_EndcapRegion", &MET_RefFinal_STVF_etx_EndcapRegion, &b_MET_RefFinal_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_STVF_ety_EndcapRegion", &MET_RefFinal_STVF_ety_EndcapRegion, &b_MET_RefFinal_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_STVF_sumet_EndcapRegion", &MET_RefFinal_STVF_sumet_EndcapRegion, &b_MET_RefFinal_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_STVF_phi_EndcapRegion", &MET_RefFinal_STVF_phi_EndcapRegion, &b_MET_RefFinal_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_STVF_etx_ForwardReg", &MET_RefFinal_STVF_etx_ForwardReg, &b_MET_RefFinal_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_STVF_ety_ForwardReg", &MET_RefFinal_STVF_ety_ForwardReg, &b_MET_RefFinal_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_STVF_sumet_ForwardReg", &MET_RefFinal_STVF_sumet_ForwardReg, &b_MET_RefFinal_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_STVF_phi_ForwardReg", &MET_RefFinal_STVF_phi_ForwardReg, &b_MET_RefFinal_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefGamma_STVF_etx", &MET_RefGamma_STVF_etx, &b_MET_RefGamma_STVF_etx);
   fChain->SetBranchAddress("MET_RefGamma_STVF_ety", &MET_RefGamma_STVF_ety, &b_MET_RefGamma_STVF_ety);
   fChain->SetBranchAddress("MET_RefGamma_STVF_phi", &MET_RefGamma_STVF_phi, &b_MET_RefGamma_STVF_phi);
   fChain->SetBranchAddress("MET_RefGamma_STVF_et", &MET_RefGamma_STVF_et, &b_MET_RefGamma_STVF_et);
   fChain->SetBranchAddress("MET_RefGamma_STVF_sumet", &MET_RefGamma_STVF_sumet, &b_MET_RefGamma_STVF_sumet);
   fChain->SetBranchAddress("MET_RefGamma_STVF_etx_CentralReg", &MET_RefGamma_STVF_etx_CentralReg, &b_MET_RefGamma_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefGamma_STVF_ety_CentralReg", &MET_RefGamma_STVF_ety_CentralReg, &b_MET_RefGamma_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefGamma_STVF_sumet_CentralReg", &MET_RefGamma_STVF_sumet_CentralReg, &b_MET_RefGamma_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefGamma_STVF_phi_CentralReg", &MET_RefGamma_STVF_phi_CentralReg, &b_MET_RefGamma_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefGamma_STVF_etx_EndcapRegion", &MET_RefGamma_STVF_etx_EndcapRegion, &b_MET_RefGamma_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefGamma_STVF_ety_EndcapRegion", &MET_RefGamma_STVF_ety_EndcapRegion, &b_MET_RefGamma_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefGamma_STVF_sumet_EndcapRegion", &MET_RefGamma_STVF_sumet_EndcapRegion, &b_MET_RefGamma_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefGamma_STVF_phi_EndcapRegion", &MET_RefGamma_STVF_phi_EndcapRegion, &b_MET_RefGamma_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefGamma_STVF_etx_ForwardReg", &MET_RefGamma_STVF_etx_ForwardReg, &b_MET_RefGamma_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefGamma_STVF_ety_ForwardReg", &MET_RefGamma_STVF_ety_ForwardReg, &b_MET_RefGamma_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefGamma_STVF_sumet_ForwardReg", &MET_RefGamma_STVF_sumet_ForwardReg, &b_MET_RefGamma_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefGamma_STVF_phi_ForwardReg", &MET_RefGamma_STVF_phi_ForwardReg, &b_MET_RefGamma_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefEle_STVF_etx", &MET_RefEle_STVF_etx, &b_MET_RefEle_STVF_etx);
   fChain->SetBranchAddress("MET_RefEle_STVF_ety", &MET_RefEle_STVF_ety, &b_MET_RefEle_STVF_ety);
   fChain->SetBranchAddress("MET_RefEle_STVF_phi", &MET_RefEle_STVF_phi, &b_MET_RefEle_STVF_phi);
   fChain->SetBranchAddress("MET_RefEle_STVF_et", &MET_RefEle_STVF_et, &b_MET_RefEle_STVF_et);
   fChain->SetBranchAddress("MET_RefEle_STVF_sumet", &MET_RefEle_STVF_sumet, &b_MET_RefEle_STVF_sumet);
   fChain->SetBranchAddress("MET_RefEle_STVF_etx_CentralReg", &MET_RefEle_STVF_etx_CentralReg, &b_MET_RefEle_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefEle_STVF_ety_CentralReg", &MET_RefEle_STVF_ety_CentralReg, &b_MET_RefEle_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefEle_STVF_sumet_CentralReg", &MET_RefEle_STVF_sumet_CentralReg, &b_MET_RefEle_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefEle_STVF_phi_CentralReg", &MET_RefEle_STVF_phi_CentralReg, &b_MET_RefEle_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefEle_STVF_etx_EndcapRegion", &MET_RefEle_STVF_etx_EndcapRegion, &b_MET_RefEle_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefEle_STVF_ety_EndcapRegion", &MET_RefEle_STVF_ety_EndcapRegion, &b_MET_RefEle_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefEle_STVF_sumet_EndcapRegion", &MET_RefEle_STVF_sumet_EndcapRegion, &b_MET_RefEle_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefEle_STVF_phi_EndcapRegion", &MET_RefEle_STVF_phi_EndcapRegion, &b_MET_RefEle_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefEle_STVF_etx_ForwardReg", &MET_RefEle_STVF_etx_ForwardReg, &b_MET_RefEle_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefEle_STVF_ety_ForwardReg", &MET_RefEle_STVF_ety_ForwardReg, &b_MET_RefEle_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefEle_STVF_sumet_ForwardReg", &MET_RefEle_STVF_sumet_ForwardReg, &b_MET_RefEle_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefEle_STVF_phi_ForwardReg", &MET_RefEle_STVF_phi_ForwardReg, &b_MET_RefEle_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefTau_STVF_etx", &MET_RefTau_STVF_etx, &b_MET_RefTau_STVF_etx);
   fChain->SetBranchAddress("MET_RefTau_STVF_ety", &MET_RefTau_STVF_ety, &b_MET_RefTau_STVF_ety);
   fChain->SetBranchAddress("MET_RefTau_STVF_phi", &MET_RefTau_STVF_phi, &b_MET_RefTau_STVF_phi);
   fChain->SetBranchAddress("MET_RefTau_STVF_et", &MET_RefTau_STVF_et, &b_MET_RefTau_STVF_et);
   fChain->SetBranchAddress("MET_RefTau_STVF_sumet", &MET_RefTau_STVF_sumet, &b_MET_RefTau_STVF_sumet);
   fChain->SetBranchAddress("MET_RefTau_STVF_etx_CentralReg", &MET_RefTau_STVF_etx_CentralReg, &b_MET_RefTau_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefTau_STVF_ety_CentralReg", &MET_RefTau_STVF_ety_CentralReg, &b_MET_RefTau_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefTau_STVF_sumet_CentralReg", &MET_RefTau_STVF_sumet_CentralReg, &b_MET_RefTau_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefTau_STVF_phi_CentralReg", &MET_RefTau_STVF_phi_CentralReg, &b_MET_RefTau_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefTau_STVF_etx_EndcapRegion", &MET_RefTau_STVF_etx_EndcapRegion, &b_MET_RefTau_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefTau_STVF_ety_EndcapRegion", &MET_RefTau_STVF_ety_EndcapRegion, &b_MET_RefTau_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefTau_STVF_sumet_EndcapRegion", &MET_RefTau_STVF_sumet_EndcapRegion, &b_MET_RefTau_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefTau_STVF_phi_EndcapRegion", &MET_RefTau_STVF_phi_EndcapRegion, &b_MET_RefTau_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefTau_STVF_etx_ForwardReg", &MET_RefTau_STVF_etx_ForwardReg, &b_MET_RefTau_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefTau_STVF_ety_ForwardReg", &MET_RefTau_STVF_ety_ForwardReg, &b_MET_RefTau_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefTau_STVF_sumet_ForwardReg", &MET_RefTau_STVF_sumet_ForwardReg, &b_MET_RefTau_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefTau_STVF_phi_ForwardReg", &MET_RefTau_STVF_phi_ForwardReg, &b_MET_RefTau_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefJet_STVF_etx", &MET_RefJet_STVF_etx, &b_MET_RefJet_STVF_etx);
   fChain->SetBranchAddress("MET_RefJet_STVF_ety", &MET_RefJet_STVF_ety, &b_MET_RefJet_STVF_ety);
   fChain->SetBranchAddress("MET_RefJet_STVF_phi", &MET_RefJet_STVF_phi, &b_MET_RefJet_STVF_phi);
   fChain->SetBranchAddress("MET_RefJet_STVF_et", &MET_RefJet_STVF_et, &b_MET_RefJet_STVF_et);
   fChain->SetBranchAddress("MET_RefJet_STVF_sumet", &MET_RefJet_STVF_sumet, &b_MET_RefJet_STVF_sumet);
   fChain->SetBranchAddress("MET_RefJet_STVF_etx_CentralReg", &MET_RefJet_STVF_etx_CentralReg, &b_MET_RefJet_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefJet_STVF_ety_CentralReg", &MET_RefJet_STVF_ety_CentralReg, &b_MET_RefJet_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefJet_STVF_sumet_CentralReg", &MET_RefJet_STVF_sumet_CentralReg, &b_MET_RefJet_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefJet_STVF_phi_CentralReg", &MET_RefJet_STVF_phi_CentralReg, &b_MET_RefJet_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefJet_STVF_etx_EndcapRegion", &MET_RefJet_STVF_etx_EndcapRegion, &b_MET_RefJet_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefJet_STVF_ety_EndcapRegion", &MET_RefJet_STVF_ety_EndcapRegion, &b_MET_RefJet_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefJet_STVF_sumet_EndcapRegion", &MET_RefJet_STVF_sumet_EndcapRegion, &b_MET_RefJet_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefJet_STVF_phi_EndcapRegion", &MET_RefJet_STVF_phi_EndcapRegion, &b_MET_RefJet_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefJet_STVF_etx_ForwardReg", &MET_RefJet_STVF_etx_ForwardReg, &b_MET_RefJet_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefJet_STVF_ety_ForwardReg", &MET_RefJet_STVF_ety_ForwardReg, &b_MET_RefJet_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefJet_STVF_sumet_ForwardReg", &MET_RefJet_STVF_sumet_ForwardReg, &b_MET_RefJet_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefJet_STVF_phi_ForwardReg", &MET_RefJet_STVF_phi_ForwardReg, &b_MET_RefJet_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_etx", &MET_RefMuon_Staco_STVF_etx, &b_MET_RefMuon_Staco_STVF_etx);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_ety", &MET_RefMuon_Staco_STVF_ety, &b_MET_RefMuon_Staco_STVF_ety);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_phi", &MET_RefMuon_Staco_STVF_phi, &b_MET_RefMuon_Staco_STVF_phi);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_et", &MET_RefMuon_Staco_STVF_et, &b_MET_RefMuon_Staco_STVF_et);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_sumet", &MET_RefMuon_Staco_STVF_sumet, &b_MET_RefMuon_Staco_STVF_sumet);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_etx_CentralReg", &MET_RefMuon_Staco_STVF_etx_CentralReg, &b_MET_RefMuon_Staco_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_ety_CentralReg", &MET_RefMuon_Staco_STVF_ety_CentralReg, &b_MET_RefMuon_Staco_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_sumet_CentralReg", &MET_RefMuon_Staco_STVF_sumet_CentralReg, &b_MET_RefMuon_Staco_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_phi_CentralReg", &MET_RefMuon_Staco_STVF_phi_CentralReg, &b_MET_RefMuon_Staco_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_etx_EndcapRegion", &MET_RefMuon_Staco_STVF_etx_EndcapRegion, &b_MET_RefMuon_Staco_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_ety_EndcapRegion", &MET_RefMuon_Staco_STVF_ety_EndcapRegion, &b_MET_RefMuon_Staco_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_sumet_EndcapRegion", &MET_RefMuon_Staco_STVF_sumet_EndcapRegion, &b_MET_RefMuon_Staco_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_phi_EndcapRegion", &MET_RefMuon_Staco_STVF_phi_EndcapRegion, &b_MET_RefMuon_Staco_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_etx_ForwardReg", &MET_RefMuon_Staco_STVF_etx_ForwardReg, &b_MET_RefMuon_Staco_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_ety_ForwardReg", &MET_RefMuon_Staco_STVF_ety_ForwardReg, &b_MET_RefMuon_Staco_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_sumet_ForwardReg", &MET_RefMuon_Staco_STVF_sumet_ForwardReg, &b_MET_RefMuon_Staco_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Staco_STVF_phi_ForwardReg", &MET_RefMuon_Staco_STVF_phi_ForwardReg, &b_MET_RefMuon_Staco_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_etx", &MET_Muon_Isol_Staco_STVF_etx, &b_MET_Muon_Isol_Staco_STVF_etx);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_ety", &MET_Muon_Isol_Staco_STVF_ety, &b_MET_Muon_Isol_Staco_STVF_ety);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_phi", &MET_Muon_Isol_Staco_STVF_phi, &b_MET_Muon_Isol_Staco_STVF_phi);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_et", &MET_Muon_Isol_Staco_STVF_et, &b_MET_Muon_Isol_Staco_STVF_et);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_sumet", &MET_Muon_Isol_Staco_STVF_sumet, &b_MET_Muon_Isol_Staco_STVF_sumet);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_etx_CentralReg", &MET_Muon_Isol_Staco_STVF_etx_CentralReg, &b_MET_Muon_Isol_Staco_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_ety_CentralReg", &MET_Muon_Isol_Staco_STVF_ety_CentralReg, &b_MET_Muon_Isol_Staco_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_sumet_CentralReg", &MET_Muon_Isol_Staco_STVF_sumet_CentralReg, &b_MET_Muon_Isol_Staco_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_phi_CentralReg", &MET_Muon_Isol_Staco_STVF_phi_CentralReg, &b_MET_Muon_Isol_Staco_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_etx_EndcapRegion", &MET_Muon_Isol_Staco_STVF_etx_EndcapRegion, &b_MET_Muon_Isol_Staco_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_ety_EndcapRegion", &MET_Muon_Isol_Staco_STVF_ety_EndcapRegion, &b_MET_Muon_Isol_Staco_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_sumet_EndcapRegion", &MET_Muon_Isol_Staco_STVF_sumet_EndcapRegion, &b_MET_Muon_Isol_Staco_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_phi_EndcapRegion", &MET_Muon_Isol_Staco_STVF_phi_EndcapRegion, &b_MET_Muon_Isol_Staco_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_etx_ForwardReg", &MET_Muon_Isol_Staco_STVF_etx_ForwardReg, &b_MET_Muon_Isol_Staco_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_ety_ForwardReg", &MET_Muon_Isol_Staco_STVF_ety_ForwardReg, &b_MET_Muon_Isol_Staco_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_sumet_ForwardReg", &MET_Muon_Isol_Staco_STVF_sumet_ForwardReg, &b_MET_Muon_Isol_Staco_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_STVF_phi_ForwardReg", &MET_Muon_Isol_Staco_STVF_phi_ForwardReg, &b_MET_Muon_Isol_Staco_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_etx", &MET_Muon_NonIsol_Staco_STVF_etx, &b_MET_Muon_NonIsol_Staco_STVF_etx);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_ety", &MET_Muon_NonIsol_Staco_STVF_ety, &b_MET_Muon_NonIsol_Staco_STVF_ety);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_phi", &MET_Muon_NonIsol_Staco_STVF_phi, &b_MET_Muon_NonIsol_Staco_STVF_phi);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_et", &MET_Muon_NonIsol_Staco_STVF_et, &b_MET_Muon_NonIsol_Staco_STVF_et);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_sumet", &MET_Muon_NonIsol_Staco_STVF_sumet, &b_MET_Muon_NonIsol_Staco_STVF_sumet);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_etx_CentralReg", &MET_Muon_NonIsol_Staco_STVF_etx_CentralReg, &b_MET_Muon_NonIsol_Staco_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_ety_CentralReg", &MET_Muon_NonIsol_Staco_STVF_ety_CentralReg, &b_MET_Muon_NonIsol_Staco_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_sumet_CentralReg", &MET_Muon_NonIsol_Staco_STVF_sumet_CentralReg, &b_MET_Muon_NonIsol_Staco_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_phi_CentralReg", &MET_Muon_NonIsol_Staco_STVF_phi_CentralReg, &b_MET_Muon_NonIsol_Staco_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_etx_EndcapRegion", &MET_Muon_NonIsol_Staco_STVF_etx_EndcapRegion, &b_MET_Muon_NonIsol_Staco_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_ety_EndcapRegion", &MET_Muon_NonIsol_Staco_STVF_ety_EndcapRegion, &b_MET_Muon_NonIsol_Staco_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_sumet_EndcapRegion", &MET_Muon_NonIsol_Staco_STVF_sumet_EndcapRegion, &b_MET_Muon_NonIsol_Staco_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_phi_EndcapRegion", &MET_Muon_NonIsol_Staco_STVF_phi_EndcapRegion, &b_MET_Muon_NonIsol_Staco_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_etx_ForwardReg", &MET_Muon_NonIsol_Staco_STVF_etx_ForwardReg, &b_MET_Muon_NonIsol_Staco_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_ety_ForwardReg", &MET_Muon_NonIsol_Staco_STVF_ety_ForwardReg, &b_MET_Muon_NonIsol_Staco_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_sumet_ForwardReg", &MET_Muon_NonIsol_Staco_STVF_sumet_ForwardReg, &b_MET_Muon_NonIsol_Staco_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_STVF_phi_ForwardReg", &MET_Muon_NonIsol_Staco_STVF_phi_ForwardReg, &b_MET_Muon_NonIsol_Staco_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_etx", &MET_Muon_Total_Staco_STVF_etx, &b_MET_Muon_Total_Staco_STVF_etx);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_ety", &MET_Muon_Total_Staco_STVF_ety, &b_MET_Muon_Total_Staco_STVF_ety);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_phi", &MET_Muon_Total_Staco_STVF_phi, &b_MET_Muon_Total_Staco_STVF_phi);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_et", &MET_Muon_Total_Staco_STVF_et, &b_MET_Muon_Total_Staco_STVF_et);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_sumet", &MET_Muon_Total_Staco_STVF_sumet, &b_MET_Muon_Total_Staco_STVF_sumet);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_etx_CentralReg", &MET_Muon_Total_Staco_STVF_etx_CentralReg, &b_MET_Muon_Total_Staco_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_ety_CentralReg", &MET_Muon_Total_Staco_STVF_ety_CentralReg, &b_MET_Muon_Total_Staco_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_sumet_CentralReg", &MET_Muon_Total_Staco_STVF_sumet_CentralReg, &b_MET_Muon_Total_Staco_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_phi_CentralReg", &MET_Muon_Total_Staco_STVF_phi_CentralReg, &b_MET_Muon_Total_Staco_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_etx_EndcapRegion", &MET_Muon_Total_Staco_STVF_etx_EndcapRegion, &b_MET_Muon_Total_Staco_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_ety_EndcapRegion", &MET_Muon_Total_Staco_STVF_ety_EndcapRegion, &b_MET_Muon_Total_Staco_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_sumet_EndcapRegion", &MET_Muon_Total_Staco_STVF_sumet_EndcapRegion, &b_MET_Muon_Total_Staco_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_phi_EndcapRegion", &MET_Muon_Total_Staco_STVF_phi_EndcapRegion, &b_MET_Muon_Total_Staco_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_etx_ForwardReg", &MET_Muon_Total_Staco_STVF_etx_ForwardReg, &b_MET_Muon_Total_Staco_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_ety_ForwardReg", &MET_Muon_Total_Staco_STVF_ety_ForwardReg, &b_MET_Muon_Total_Staco_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_sumet_ForwardReg", &MET_Muon_Total_Staco_STVF_sumet_ForwardReg, &b_MET_Muon_Total_Staco_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_STVF_phi_ForwardReg", &MET_Muon_Total_Staco_STVF_phi_ForwardReg, &b_MET_Muon_Total_Staco_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_etx", &MET_RefMuon_Track_Staco_STVF_etx, &b_MET_RefMuon_Track_Staco_STVF_etx);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_ety", &MET_RefMuon_Track_Staco_STVF_ety, &b_MET_RefMuon_Track_Staco_STVF_ety);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_phi", &MET_RefMuon_Track_Staco_STVF_phi, &b_MET_RefMuon_Track_Staco_STVF_phi);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_et", &MET_RefMuon_Track_Staco_STVF_et, &b_MET_RefMuon_Track_Staco_STVF_et);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_sumet", &MET_RefMuon_Track_Staco_STVF_sumet, &b_MET_RefMuon_Track_Staco_STVF_sumet);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_etx_CentralReg", &MET_RefMuon_Track_Staco_STVF_etx_CentralReg, &b_MET_RefMuon_Track_Staco_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_ety_CentralReg", &MET_RefMuon_Track_Staco_STVF_ety_CentralReg, &b_MET_RefMuon_Track_Staco_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_sumet_CentralReg", &MET_RefMuon_Track_Staco_STVF_sumet_CentralReg, &b_MET_RefMuon_Track_Staco_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_phi_CentralReg", &MET_RefMuon_Track_Staco_STVF_phi_CentralReg, &b_MET_RefMuon_Track_Staco_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_etx_EndcapRegion", &MET_RefMuon_Track_Staco_STVF_etx_EndcapRegion, &b_MET_RefMuon_Track_Staco_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_ety_EndcapRegion", &MET_RefMuon_Track_Staco_STVF_ety_EndcapRegion, &b_MET_RefMuon_Track_Staco_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_sumet_EndcapRegion", &MET_RefMuon_Track_Staco_STVF_sumet_EndcapRegion, &b_MET_RefMuon_Track_Staco_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_phi_EndcapRegion", &MET_RefMuon_Track_Staco_STVF_phi_EndcapRegion, &b_MET_RefMuon_Track_Staco_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_etx_ForwardReg", &MET_RefMuon_Track_Staco_STVF_etx_ForwardReg, &b_MET_RefMuon_Track_Staco_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_ety_ForwardReg", &MET_RefMuon_Track_Staco_STVF_ety_ForwardReg, &b_MET_RefMuon_Track_Staco_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_sumet_ForwardReg", &MET_RefMuon_Track_Staco_STVF_sumet_ForwardReg, &b_MET_RefMuon_Track_Staco_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_STVF_phi_ForwardReg", &MET_RefMuon_Track_Staco_STVF_phi_ForwardReg, &b_MET_RefMuon_Track_Staco_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_STVF_etx", &MET_CellOut_STVF_etx, &b_MET_CellOut_STVF_etx);
   fChain->SetBranchAddress("MET_CellOut_STVF_ety", &MET_CellOut_STVF_ety, &b_MET_CellOut_STVF_ety);
   fChain->SetBranchAddress("MET_CellOut_STVF_phi", &MET_CellOut_STVF_phi, &b_MET_CellOut_STVF_phi);
   fChain->SetBranchAddress("MET_CellOut_STVF_et", &MET_CellOut_STVF_et, &b_MET_CellOut_STVF_et);
   fChain->SetBranchAddress("MET_CellOut_STVF_sumet", &MET_CellOut_STVF_sumet, &b_MET_CellOut_STVF_sumet);
   fChain->SetBranchAddress("MET_CellOut_STVF_etx_CentralReg", &MET_CellOut_STVF_etx_CentralReg, &b_MET_CellOut_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_STVF_ety_CentralReg", &MET_CellOut_STVF_ety_CentralReg, &b_MET_CellOut_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_STVF_sumet_CentralReg", &MET_CellOut_STVF_sumet_CentralReg, &b_MET_CellOut_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_STVF_phi_CentralReg", &MET_CellOut_STVF_phi_CentralReg, &b_MET_CellOut_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_STVF_etx_EndcapRegion", &MET_CellOut_STVF_etx_EndcapRegion, &b_MET_CellOut_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_STVF_ety_EndcapRegion", &MET_CellOut_STVF_ety_EndcapRegion, &b_MET_CellOut_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_STVF_sumet_EndcapRegion", &MET_CellOut_STVF_sumet_EndcapRegion, &b_MET_CellOut_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_STVF_phi_EndcapRegion", &MET_CellOut_STVF_phi_EndcapRegion, &b_MET_CellOut_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_STVF_etx_ForwardReg", &MET_CellOut_STVF_etx_ForwardReg, &b_MET_CellOut_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_STVF_ety_ForwardReg", &MET_CellOut_STVF_ety_ForwardReg, &b_MET_CellOut_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_STVF_sumet_ForwardReg", &MET_CellOut_STVF_sumet_ForwardReg, &b_MET_CellOut_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_STVF_phi_ForwardReg", &MET_CellOut_STVF_phi_ForwardReg, &b_MET_CellOut_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_etx", &MET_CellOut_Track_STVF_etx, &b_MET_CellOut_Track_STVF_etx);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_ety", &MET_CellOut_Track_STVF_ety, &b_MET_CellOut_Track_STVF_ety);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_phi", &MET_CellOut_Track_STVF_phi, &b_MET_CellOut_Track_STVF_phi);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_et", &MET_CellOut_Track_STVF_et, &b_MET_CellOut_Track_STVF_et);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_sumet", &MET_CellOut_Track_STVF_sumet, &b_MET_CellOut_Track_STVF_sumet);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_etx_CentralReg", &MET_CellOut_Track_STVF_etx_CentralReg, &b_MET_CellOut_Track_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_ety_CentralReg", &MET_CellOut_Track_STVF_ety_CentralReg, &b_MET_CellOut_Track_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_sumet_CentralReg", &MET_CellOut_Track_STVF_sumet_CentralReg, &b_MET_CellOut_Track_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_phi_CentralReg", &MET_CellOut_Track_STVF_phi_CentralReg, &b_MET_CellOut_Track_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_etx_EndcapRegion", &MET_CellOut_Track_STVF_etx_EndcapRegion, &b_MET_CellOut_Track_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_ety_EndcapRegion", &MET_CellOut_Track_STVF_ety_EndcapRegion, &b_MET_CellOut_Track_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_sumet_EndcapRegion", &MET_CellOut_Track_STVF_sumet_EndcapRegion, &b_MET_CellOut_Track_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_phi_EndcapRegion", &MET_CellOut_Track_STVF_phi_EndcapRegion, &b_MET_CellOut_Track_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_etx_ForwardReg", &MET_CellOut_Track_STVF_etx_ForwardReg, &b_MET_CellOut_Track_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_ety_ForwardReg", &MET_CellOut_Track_STVF_ety_ForwardReg, &b_MET_CellOut_Track_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_sumet_ForwardReg", &MET_CellOut_Track_STVF_sumet_ForwardReg, &b_MET_CellOut_Track_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Track_STVF_phi_ForwardReg", &MET_CellOut_Track_STVF_phi_ForwardReg, &b_MET_CellOut_Track_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_etx", &MET_CellOut_TrackPV_STVF_etx, &b_MET_CellOut_TrackPV_STVF_etx);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_ety", &MET_CellOut_TrackPV_STVF_ety, &b_MET_CellOut_TrackPV_STVF_ety);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_phi", &MET_CellOut_TrackPV_STVF_phi, &b_MET_CellOut_TrackPV_STVF_phi);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_et", &MET_CellOut_TrackPV_STVF_et, &b_MET_CellOut_TrackPV_STVF_et);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_sumet", &MET_CellOut_TrackPV_STVF_sumet, &b_MET_CellOut_TrackPV_STVF_sumet);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_etx_CentralReg", &MET_CellOut_TrackPV_STVF_etx_CentralReg, &b_MET_CellOut_TrackPV_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_ety_CentralReg", &MET_CellOut_TrackPV_STVF_ety_CentralReg, &b_MET_CellOut_TrackPV_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_sumet_CentralReg", &MET_CellOut_TrackPV_STVF_sumet_CentralReg, &b_MET_CellOut_TrackPV_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_phi_CentralReg", &MET_CellOut_TrackPV_STVF_phi_CentralReg, &b_MET_CellOut_TrackPV_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_etx_EndcapRegion", &MET_CellOut_TrackPV_STVF_etx_EndcapRegion, &b_MET_CellOut_TrackPV_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_ety_EndcapRegion", &MET_CellOut_TrackPV_STVF_ety_EndcapRegion, &b_MET_CellOut_TrackPV_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_sumet_EndcapRegion", &MET_CellOut_TrackPV_STVF_sumet_EndcapRegion, &b_MET_CellOut_TrackPV_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_phi_EndcapRegion", &MET_CellOut_TrackPV_STVF_phi_EndcapRegion, &b_MET_CellOut_TrackPV_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_etx_ForwardReg", &MET_CellOut_TrackPV_STVF_etx_ForwardReg, &b_MET_CellOut_TrackPV_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_ety_ForwardReg", &MET_CellOut_TrackPV_STVF_ety_ForwardReg, &b_MET_CellOut_TrackPV_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_sumet_ForwardReg", &MET_CellOut_TrackPV_STVF_sumet_ForwardReg, &b_MET_CellOut_TrackPV_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_TrackPV_STVF_phi_ForwardReg", &MET_CellOut_TrackPV_STVF_phi_ForwardReg, &b_MET_CellOut_TrackPV_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_etx", &MET_CellOutCorr_STVF_etx, &b_MET_CellOutCorr_STVF_etx);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_ety", &MET_CellOutCorr_STVF_ety, &b_MET_CellOutCorr_STVF_ety);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_phi", &MET_CellOutCorr_STVF_phi, &b_MET_CellOutCorr_STVF_phi);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_et", &MET_CellOutCorr_STVF_et, &b_MET_CellOutCorr_STVF_et);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_sumet", &MET_CellOutCorr_STVF_sumet, &b_MET_CellOutCorr_STVF_sumet);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_etx_CentralReg", &MET_CellOutCorr_STVF_etx_CentralReg, &b_MET_CellOutCorr_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_ety_CentralReg", &MET_CellOutCorr_STVF_ety_CentralReg, &b_MET_CellOutCorr_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_sumet_CentralReg", &MET_CellOutCorr_STVF_sumet_CentralReg, &b_MET_CellOutCorr_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_phi_CentralReg", &MET_CellOutCorr_STVF_phi_CentralReg, &b_MET_CellOutCorr_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_etx_EndcapRegion", &MET_CellOutCorr_STVF_etx_EndcapRegion, &b_MET_CellOutCorr_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_ety_EndcapRegion", &MET_CellOutCorr_STVF_ety_EndcapRegion, &b_MET_CellOutCorr_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_sumet_EndcapRegion", &MET_CellOutCorr_STVF_sumet_EndcapRegion, &b_MET_CellOutCorr_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_phi_EndcapRegion", &MET_CellOutCorr_STVF_phi_EndcapRegion, &b_MET_CellOutCorr_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_etx_ForwardReg", &MET_CellOutCorr_STVF_etx_ForwardReg, &b_MET_CellOutCorr_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_ety_ForwardReg", &MET_CellOutCorr_STVF_ety_ForwardReg, &b_MET_CellOutCorr_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_sumet_ForwardReg", &MET_CellOutCorr_STVF_sumet_ForwardReg, &b_MET_CellOutCorr_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_CellOutCorr_STVF_phi_ForwardReg", &MET_CellOutCorr_STVF_phi_ForwardReg, &b_MET_CellOutCorr_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Cryo_STVF_etx", &MET_Cryo_STVF_etx, &b_MET_Cryo_STVF_etx);
   fChain->SetBranchAddress("MET_Cryo_STVF_ety", &MET_Cryo_STVF_ety, &b_MET_Cryo_STVF_ety);
   fChain->SetBranchAddress("MET_Cryo_STVF_phi", &MET_Cryo_STVF_phi, &b_MET_Cryo_STVF_phi);
   fChain->SetBranchAddress("MET_Cryo_STVF_et", &MET_Cryo_STVF_et, &b_MET_Cryo_STVF_et);
   fChain->SetBranchAddress("MET_Cryo_STVF_sumet", &MET_Cryo_STVF_sumet, &b_MET_Cryo_STVF_sumet);
   fChain->SetBranchAddress("MET_Cryo_STVF_etx_CentralReg", &MET_Cryo_STVF_etx_CentralReg, &b_MET_Cryo_STVF_etx_CentralReg);
   fChain->SetBranchAddress("MET_Cryo_STVF_ety_CentralReg", &MET_Cryo_STVF_ety_CentralReg, &b_MET_Cryo_STVF_ety_CentralReg);
   fChain->SetBranchAddress("MET_Cryo_STVF_sumet_CentralReg", &MET_Cryo_STVF_sumet_CentralReg, &b_MET_Cryo_STVF_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Cryo_STVF_phi_CentralReg", &MET_Cryo_STVF_phi_CentralReg, &b_MET_Cryo_STVF_phi_CentralReg);
   fChain->SetBranchAddress("MET_Cryo_STVF_etx_EndcapRegion", &MET_Cryo_STVF_etx_EndcapRegion, &b_MET_Cryo_STVF_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Cryo_STVF_ety_EndcapRegion", &MET_Cryo_STVF_ety_EndcapRegion, &b_MET_Cryo_STVF_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Cryo_STVF_sumet_EndcapRegion", &MET_Cryo_STVF_sumet_EndcapRegion, &b_MET_Cryo_STVF_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Cryo_STVF_phi_EndcapRegion", &MET_Cryo_STVF_phi_EndcapRegion, &b_MET_Cryo_STVF_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Cryo_STVF_etx_ForwardReg", &MET_Cryo_STVF_etx_ForwardReg, &b_MET_Cryo_STVF_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Cryo_STVF_ety_ForwardReg", &MET_Cryo_STVF_ety_ForwardReg, &b_MET_Cryo_STVF_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Cryo_STVF_sumet_ForwardReg", &MET_Cryo_STVF_sumet_ForwardReg, &b_MET_Cryo_STVF_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Cryo_STVF_phi_ForwardReg", &MET_Cryo_STVF_phi_ForwardReg, &b_MET_Cryo_STVF_phi_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_etx", &MET_CellOut_Eflow_Muid_etx, &b_MET_CellOut_Eflow_Muid_etx);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_ety", &MET_CellOut_Eflow_Muid_ety, &b_MET_CellOut_Eflow_Muid_ety);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_phi", &MET_CellOut_Eflow_Muid_phi, &b_MET_CellOut_Eflow_Muid_phi);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_et", &MET_CellOut_Eflow_Muid_et, &b_MET_CellOut_Eflow_Muid_et);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_sumet", &MET_CellOut_Eflow_Muid_sumet, &b_MET_CellOut_Eflow_Muid_sumet);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_etx_CentralReg", &MET_CellOut_Eflow_Muid_etx_CentralReg, &b_MET_CellOut_Eflow_Muid_etx_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_ety_CentralReg", &MET_CellOut_Eflow_Muid_ety_CentralReg, &b_MET_CellOut_Eflow_Muid_ety_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_sumet_CentralReg", &MET_CellOut_Eflow_Muid_sumet_CentralReg, &b_MET_CellOut_Eflow_Muid_sumet_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_phi_CentralReg", &MET_CellOut_Eflow_Muid_phi_CentralReg, &b_MET_CellOut_Eflow_Muid_phi_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_etx_EndcapRegion", &MET_CellOut_Eflow_Muid_etx_EndcapRegion, &b_MET_CellOut_Eflow_Muid_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_ety_EndcapRegion", &MET_CellOut_Eflow_Muid_ety_EndcapRegion, &b_MET_CellOut_Eflow_Muid_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_sumet_EndcapRegion", &MET_CellOut_Eflow_Muid_sumet_EndcapRegion, &b_MET_CellOut_Eflow_Muid_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_phi_EndcapRegion", &MET_CellOut_Eflow_Muid_phi_EndcapRegion, &b_MET_CellOut_Eflow_Muid_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_etx_ForwardReg", &MET_CellOut_Eflow_Muid_etx_ForwardReg, &b_MET_CellOut_Eflow_Muid_etx_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_ety_ForwardReg", &MET_CellOut_Eflow_Muid_ety_ForwardReg, &b_MET_CellOut_Eflow_Muid_ety_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_sumet_ForwardReg", &MET_CellOut_Eflow_Muid_sumet_ForwardReg, &b_MET_CellOut_Eflow_Muid_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muid_phi_ForwardReg", &MET_CellOut_Eflow_Muid_phi_ForwardReg, &b_MET_CellOut_Eflow_Muid_phi_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_etx", &MET_CellOut_Eflow_Muons_etx, &b_MET_CellOut_Eflow_Muons_etx);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_ety", &MET_CellOut_Eflow_Muons_ety, &b_MET_CellOut_Eflow_Muons_ety);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_phi", &MET_CellOut_Eflow_Muons_phi, &b_MET_CellOut_Eflow_Muons_phi);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_et", &MET_CellOut_Eflow_Muons_et, &b_MET_CellOut_Eflow_Muons_et);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_sumet", &MET_CellOut_Eflow_Muons_sumet, &b_MET_CellOut_Eflow_Muons_sumet);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_etx_CentralReg", &MET_CellOut_Eflow_Muons_etx_CentralReg, &b_MET_CellOut_Eflow_Muons_etx_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_ety_CentralReg", &MET_CellOut_Eflow_Muons_ety_CentralReg, &b_MET_CellOut_Eflow_Muons_ety_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_sumet_CentralReg", &MET_CellOut_Eflow_Muons_sumet_CentralReg, &b_MET_CellOut_Eflow_Muons_sumet_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_phi_CentralReg", &MET_CellOut_Eflow_Muons_phi_CentralReg, &b_MET_CellOut_Eflow_Muons_phi_CentralReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_etx_EndcapRegion", &MET_CellOut_Eflow_Muons_etx_EndcapRegion, &b_MET_CellOut_Eflow_Muons_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_ety_EndcapRegion", &MET_CellOut_Eflow_Muons_ety_EndcapRegion, &b_MET_CellOut_Eflow_Muons_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_sumet_EndcapRegion", &MET_CellOut_Eflow_Muons_sumet_EndcapRegion, &b_MET_CellOut_Eflow_Muons_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_phi_EndcapRegion", &MET_CellOut_Eflow_Muons_phi_EndcapRegion, &b_MET_CellOut_Eflow_Muons_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_etx_ForwardReg", &MET_CellOut_Eflow_Muons_etx_ForwardReg, &b_MET_CellOut_Eflow_Muons_etx_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_ety_ForwardReg", &MET_CellOut_Eflow_Muons_ety_ForwardReg, &b_MET_CellOut_Eflow_Muons_ety_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_sumet_ForwardReg", &MET_CellOut_Eflow_Muons_sumet_ForwardReg, &b_MET_CellOut_Eflow_Muons_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_CellOut_Eflow_Muons_phi_ForwardReg", &MET_CellOut_Eflow_Muons_phi_ForwardReg, &b_MET_CellOut_Eflow_Muons_phi_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuons_Track_etx", &MET_RefMuons_Track_etx, &b_MET_RefMuons_Track_etx);
   fChain->SetBranchAddress("MET_RefMuons_Track_ety", &MET_RefMuons_Track_ety, &b_MET_RefMuons_Track_ety);
   fChain->SetBranchAddress("MET_RefMuons_Track_phi", &MET_RefMuons_Track_phi, &b_MET_RefMuons_Track_phi);
   fChain->SetBranchAddress("MET_RefMuons_Track_et", &MET_RefMuons_Track_et, &b_MET_RefMuons_Track_et);
   fChain->SetBranchAddress("MET_RefMuons_Track_sumet", &MET_RefMuons_Track_sumet, &b_MET_RefMuons_Track_sumet);
   fChain->SetBranchAddress("MET_RefMuons_Track_etx_CentralReg", &MET_RefMuons_Track_etx_CentralReg, &b_MET_RefMuons_Track_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefMuons_Track_ety_CentralReg", &MET_RefMuons_Track_ety_CentralReg, &b_MET_RefMuons_Track_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefMuons_Track_sumet_CentralReg", &MET_RefMuons_Track_sumet_CentralReg, &b_MET_RefMuons_Track_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefMuons_Track_phi_CentralReg", &MET_RefMuons_Track_phi_CentralReg, &b_MET_RefMuons_Track_phi_CentralReg);
   fChain->SetBranchAddress("MET_RefMuons_Track_etx_EndcapRegion", &MET_RefMuons_Track_etx_EndcapRegion, &b_MET_RefMuons_Track_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuons_Track_ety_EndcapRegion", &MET_RefMuons_Track_ety_EndcapRegion, &b_MET_RefMuons_Track_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuons_Track_sumet_EndcapRegion", &MET_RefMuons_Track_sumet_EndcapRegion, &b_MET_RefMuons_Track_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuons_Track_phi_EndcapRegion", &MET_RefMuons_Track_phi_EndcapRegion, &b_MET_RefMuons_Track_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_RefMuons_Track_etx_ForwardReg", &MET_RefMuons_Track_etx_ForwardReg, &b_MET_RefMuons_Track_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuons_Track_ety_ForwardReg", &MET_RefMuons_Track_ety_ForwardReg, &b_MET_RefMuons_Track_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuons_Track_sumet_ForwardReg", &MET_RefMuons_Track_sumet_ForwardReg, &b_MET_RefMuons_Track_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_RefMuons_Track_phi_ForwardReg", &MET_RefMuons_Track_phi_ForwardReg, &b_MET_RefMuons_Track_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Final_etx", &MET_Final_etx, &b_MET_Final_etx);
   fChain->SetBranchAddress("MET_Final_ety", &MET_Final_ety, &b_MET_Final_ety);
   fChain->SetBranchAddress("MET_Final_phi", &MET_Final_phi, &b_MET_Final_phi);
   fChain->SetBranchAddress("MET_Final_et", &MET_Final_et, &b_MET_Final_et);
   fChain->SetBranchAddress("MET_Final_sumet", &MET_Final_sumet, &b_MET_Final_sumet);
   fChain->SetBranchAddress("MET_Final_etx_CentralReg", &MET_Final_etx_CentralReg, &b_MET_Final_etx_CentralReg);
   fChain->SetBranchAddress("MET_Final_ety_CentralReg", &MET_Final_ety_CentralReg, &b_MET_Final_ety_CentralReg);
   fChain->SetBranchAddress("MET_Final_sumet_CentralReg", &MET_Final_sumet_CentralReg, &b_MET_Final_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Final_phi_CentralReg", &MET_Final_phi_CentralReg, &b_MET_Final_phi_CentralReg);
   fChain->SetBranchAddress("MET_Final_etx_EndcapRegion", &MET_Final_etx_EndcapRegion, &b_MET_Final_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Final_ety_EndcapRegion", &MET_Final_ety_EndcapRegion, &b_MET_Final_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Final_sumet_EndcapRegion", &MET_Final_sumet_EndcapRegion, &b_MET_Final_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Final_phi_EndcapRegion", &MET_Final_phi_EndcapRegion, &b_MET_Final_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Final_etx_ForwardReg", &MET_Final_etx_ForwardReg, &b_MET_Final_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Final_ety_ForwardReg", &MET_Final_ety_ForwardReg, &b_MET_Final_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Final_sumet_ForwardReg", &MET_Final_sumet_ForwardReg, &b_MET_Final_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Final_phi_ForwardReg", &MET_Final_phi_ForwardReg, &b_MET_Final_phi_ForwardReg);
   fChain->SetBranchAddress("MET_MuonMuons_etx", &MET_MuonMuons_etx, &b_MET_MuonMuons_etx);
   fChain->SetBranchAddress("MET_MuonMuons_ety", &MET_MuonMuons_ety, &b_MET_MuonMuons_ety);
   fChain->SetBranchAddress("MET_MuonMuons_phi", &MET_MuonMuons_phi, &b_MET_MuonMuons_phi);
   fChain->SetBranchAddress("MET_MuonMuons_et", &MET_MuonMuons_et, &b_MET_MuonMuons_et);
   fChain->SetBranchAddress("MET_MuonMuons_sumet", &MET_MuonMuons_sumet, &b_MET_MuonMuons_sumet);
   fChain->SetBranchAddress("MET_MuonMuons_etx_CentralReg", &MET_MuonMuons_etx_CentralReg, &b_MET_MuonMuons_etx_CentralReg);
   fChain->SetBranchAddress("MET_MuonMuons_ety_CentralReg", &MET_MuonMuons_ety_CentralReg, &b_MET_MuonMuons_ety_CentralReg);
   fChain->SetBranchAddress("MET_MuonMuons_sumet_CentralReg", &MET_MuonMuons_sumet_CentralReg, &b_MET_MuonMuons_sumet_CentralReg);
   fChain->SetBranchAddress("MET_MuonMuons_phi_CentralReg", &MET_MuonMuons_phi_CentralReg, &b_MET_MuonMuons_phi_CentralReg);
   fChain->SetBranchAddress("MET_MuonMuons_etx_EndcapRegion", &MET_MuonMuons_etx_EndcapRegion, &b_MET_MuonMuons_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonMuons_ety_EndcapRegion", &MET_MuonMuons_ety_EndcapRegion, &b_MET_MuonMuons_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonMuons_sumet_EndcapRegion", &MET_MuonMuons_sumet_EndcapRegion, &b_MET_MuonMuons_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonMuons_phi_EndcapRegion", &MET_MuonMuons_phi_EndcapRegion, &b_MET_MuonMuons_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_MuonMuons_etx_ForwardReg", &MET_MuonMuons_etx_ForwardReg, &b_MET_MuonMuons_etx_ForwardReg);
   fChain->SetBranchAddress("MET_MuonMuons_ety_ForwardReg", &MET_MuonMuons_ety_ForwardReg, &b_MET_MuonMuons_ety_ForwardReg);
   fChain->SetBranchAddress("MET_MuonMuons_sumet_ForwardReg", &MET_MuonMuons_sumet_ForwardReg, &b_MET_MuonMuons_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_MuonMuons_phi_ForwardReg", &MET_MuonMuons_phi_ForwardReg, &b_MET_MuonMuons_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_etx", &MET_Muons_etx, &b_MET_Muons_etx);
   fChain->SetBranchAddress("MET_Muons_ety", &MET_Muons_ety, &b_MET_Muons_ety);
   fChain->SetBranchAddress("MET_Muons_phi", &MET_Muons_phi, &b_MET_Muons_phi);
   fChain->SetBranchAddress("MET_Muons_et", &MET_Muons_et, &b_MET_Muons_et);
   fChain->SetBranchAddress("MET_Muons_sumet", &MET_Muons_sumet, &b_MET_Muons_sumet);
   fChain->SetBranchAddress("MET_Muons_etx_CentralReg", &MET_Muons_etx_CentralReg, &b_MET_Muons_etx_CentralReg);
   fChain->SetBranchAddress("MET_Muons_ety_CentralReg", &MET_Muons_ety_CentralReg, &b_MET_Muons_ety_CentralReg);
   fChain->SetBranchAddress("MET_Muons_sumet_CentralReg", &MET_Muons_sumet_CentralReg, &b_MET_Muons_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Muons_phi_CentralReg", &MET_Muons_phi_CentralReg, &b_MET_Muons_phi_CentralReg);
   fChain->SetBranchAddress("MET_Muons_etx_EndcapRegion", &MET_Muons_etx_EndcapRegion, &b_MET_Muons_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_ety_EndcapRegion", &MET_Muons_ety_EndcapRegion, &b_MET_Muons_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_sumet_EndcapRegion", &MET_Muons_sumet_EndcapRegion, &b_MET_Muons_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_phi_EndcapRegion", &MET_Muons_phi_EndcapRegion, &b_MET_Muons_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_etx_ForwardReg", &MET_Muons_etx_ForwardReg, &b_MET_Muons_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_ety_ForwardReg", &MET_Muons_ety_ForwardReg, &b_MET_Muons_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_sumet_ForwardReg", &MET_Muons_sumet_ForwardReg, &b_MET_Muons_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_phi_ForwardReg", &MET_Muons_phi_ForwardReg, &b_MET_Muons_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Spectro_etx", &MET_Muons_Spectro_etx, &b_MET_Muons_Spectro_etx);
   fChain->SetBranchAddress("MET_Muons_Spectro_ety", &MET_Muons_Spectro_ety, &b_MET_Muons_Spectro_ety);
   fChain->SetBranchAddress("MET_Muons_Spectro_phi", &MET_Muons_Spectro_phi, &b_MET_Muons_Spectro_phi);
   fChain->SetBranchAddress("MET_Muons_Spectro_et", &MET_Muons_Spectro_et, &b_MET_Muons_Spectro_et);
   fChain->SetBranchAddress("MET_Muons_Spectro_sumet", &MET_Muons_Spectro_sumet, &b_MET_Muons_Spectro_sumet);
   fChain->SetBranchAddress("MET_Muons_Spectro_etx_CentralReg", &MET_Muons_Spectro_etx_CentralReg, &b_MET_Muons_Spectro_etx_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Spectro_ety_CentralReg", &MET_Muons_Spectro_ety_CentralReg, &b_MET_Muons_Spectro_ety_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Spectro_sumet_CentralReg", &MET_Muons_Spectro_sumet_CentralReg, &b_MET_Muons_Spectro_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Spectro_phi_CentralReg", &MET_Muons_Spectro_phi_CentralReg, &b_MET_Muons_Spectro_phi_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Spectro_etx_EndcapRegion", &MET_Muons_Spectro_etx_EndcapRegion, &b_MET_Muons_Spectro_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Spectro_ety_EndcapRegion", &MET_Muons_Spectro_ety_EndcapRegion, &b_MET_Muons_Spectro_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Spectro_sumet_EndcapRegion", &MET_Muons_Spectro_sumet_EndcapRegion, &b_MET_Muons_Spectro_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Spectro_phi_EndcapRegion", &MET_Muons_Spectro_phi_EndcapRegion, &b_MET_Muons_Spectro_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Spectro_etx_ForwardReg", &MET_Muons_Spectro_etx_ForwardReg, &b_MET_Muons_Spectro_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Spectro_ety_ForwardReg", &MET_Muons_Spectro_ety_ForwardReg, &b_MET_Muons_Spectro_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Spectro_sumet_ForwardReg", &MET_Muons_Spectro_sumet_ForwardReg, &b_MET_Muons_Spectro_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Spectro_phi_ForwardReg", &MET_Muons_Spectro_phi_ForwardReg, &b_MET_Muons_Spectro_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Track_etx", &MET_Muons_Track_etx, &b_MET_Muons_Track_etx);
   fChain->SetBranchAddress("MET_Muons_Track_ety", &MET_Muons_Track_ety, &b_MET_Muons_Track_ety);
   fChain->SetBranchAddress("MET_Muons_Track_phi", &MET_Muons_Track_phi, &b_MET_Muons_Track_phi);
   fChain->SetBranchAddress("MET_Muons_Track_et", &MET_Muons_Track_et, &b_MET_Muons_Track_et);
   fChain->SetBranchAddress("MET_Muons_Track_sumet", &MET_Muons_Track_sumet, &b_MET_Muons_Track_sumet);
   fChain->SetBranchAddress("MET_Muons_Track_etx_CentralReg", &MET_Muons_Track_etx_CentralReg, &b_MET_Muons_Track_etx_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Track_ety_CentralReg", &MET_Muons_Track_ety_CentralReg, &b_MET_Muons_Track_ety_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Track_sumet_CentralReg", &MET_Muons_Track_sumet_CentralReg, &b_MET_Muons_Track_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Track_phi_CentralReg", &MET_Muons_Track_phi_CentralReg, &b_MET_Muons_Track_phi_CentralReg);
   fChain->SetBranchAddress("MET_Muons_Track_etx_EndcapRegion", &MET_Muons_Track_etx_EndcapRegion, &b_MET_Muons_Track_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Track_ety_EndcapRegion", &MET_Muons_Track_ety_EndcapRegion, &b_MET_Muons_Track_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Track_sumet_EndcapRegion", &MET_Muons_Track_sumet_EndcapRegion, &b_MET_Muons_Track_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Track_phi_EndcapRegion", &MET_Muons_Track_phi_EndcapRegion, &b_MET_Muons_Track_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Muons_Track_etx_ForwardReg", &MET_Muons_Track_etx_ForwardReg, &b_MET_Muons_Track_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Track_ety_ForwardReg", &MET_Muons_Track_ety_ForwardReg, &b_MET_Muons_Track_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Track_sumet_ForwardReg", &MET_Muons_Track_sumet_ForwardReg, &b_MET_Muons_Track_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Muons_Track_phi_ForwardReg", &MET_Muons_Track_phi_ForwardReg, &b_MET_Muons_Track_phi_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_etx", &MET_LocHadTopo_etx, &b_MET_LocHadTopo_etx);
   fChain->SetBranchAddress("MET_LocHadTopo_ety", &MET_LocHadTopo_ety, &b_MET_LocHadTopo_ety);
   fChain->SetBranchAddress("MET_LocHadTopo_phi", &MET_LocHadTopo_phi, &b_MET_LocHadTopo_phi);
   fChain->SetBranchAddress("MET_LocHadTopo_et", &MET_LocHadTopo_et, &b_MET_LocHadTopo_et);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet", &MET_LocHadTopo_sumet, &b_MET_LocHadTopo_sumet);
   fChain->SetBranchAddress("MET_LocHadTopo_SUMET_EMFrac", &MET_LocHadTopo_SUMET_EMFrac, &b_MET_LocHadTopo_SUMET_EMFrac);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_PEMB", &MET_LocHadTopo_etx_PEMB, &b_MET_LocHadTopo_etx_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_PEMB", &MET_LocHadTopo_ety_PEMB, &b_MET_LocHadTopo_ety_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_PEMB", &MET_LocHadTopo_sumet_PEMB, &b_MET_LocHadTopo_sumet_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_PEMB", &MET_LocHadTopo_phi_PEMB, &b_MET_LocHadTopo_phi_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EMB", &MET_LocHadTopo_etx_EMB, &b_MET_LocHadTopo_etx_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EMB", &MET_LocHadTopo_ety_EMB, &b_MET_LocHadTopo_ety_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EMB", &MET_LocHadTopo_sumet_EMB, &b_MET_LocHadTopo_sumet_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EMB", &MET_LocHadTopo_phi_EMB, &b_MET_LocHadTopo_phi_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_PEMEC", &MET_LocHadTopo_etx_PEMEC, &b_MET_LocHadTopo_etx_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_PEMEC", &MET_LocHadTopo_ety_PEMEC, &b_MET_LocHadTopo_ety_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_PEMEC", &MET_LocHadTopo_sumet_PEMEC, &b_MET_LocHadTopo_sumet_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_PEMEC", &MET_LocHadTopo_phi_PEMEC, &b_MET_LocHadTopo_phi_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EME", &MET_LocHadTopo_etx_EME, &b_MET_LocHadTopo_etx_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EME", &MET_LocHadTopo_ety_EME, &b_MET_LocHadTopo_ety_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EME", &MET_LocHadTopo_sumet_EME, &b_MET_LocHadTopo_sumet_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EME", &MET_LocHadTopo_phi_EME, &b_MET_LocHadTopo_phi_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_TILE", &MET_LocHadTopo_etx_TILE, &b_MET_LocHadTopo_etx_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_TILE", &MET_LocHadTopo_ety_TILE, &b_MET_LocHadTopo_ety_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_TILE", &MET_LocHadTopo_sumet_TILE, &b_MET_LocHadTopo_sumet_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_TILE", &MET_LocHadTopo_phi_TILE, &b_MET_LocHadTopo_phi_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_HEC", &MET_LocHadTopo_etx_HEC, &b_MET_LocHadTopo_etx_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_HEC", &MET_LocHadTopo_ety_HEC, &b_MET_LocHadTopo_ety_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_HEC", &MET_LocHadTopo_sumet_HEC, &b_MET_LocHadTopo_sumet_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_HEC", &MET_LocHadTopo_phi_HEC, &b_MET_LocHadTopo_phi_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_FCAL", &MET_LocHadTopo_etx_FCAL, &b_MET_LocHadTopo_etx_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_FCAL", &MET_LocHadTopo_ety_FCAL, &b_MET_LocHadTopo_ety_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_FCAL", &MET_LocHadTopo_sumet_FCAL, &b_MET_LocHadTopo_sumet_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_FCAL", &MET_LocHadTopo_phi_FCAL, &b_MET_LocHadTopo_phi_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_PEMB", &MET_LocHadTopo_nCell_PEMB, &b_MET_LocHadTopo_nCell_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_EMB", &MET_LocHadTopo_nCell_EMB, &b_MET_LocHadTopo_nCell_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_PEMEC", &MET_LocHadTopo_nCell_PEMEC, &b_MET_LocHadTopo_nCell_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_EME", &MET_LocHadTopo_nCell_EME, &b_MET_LocHadTopo_nCell_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_TILE", &MET_LocHadTopo_nCell_TILE, &b_MET_LocHadTopo_nCell_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_HEC", &MET_LocHadTopo_nCell_HEC, &b_MET_LocHadTopo_nCell_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_FCAL", &MET_LocHadTopo_nCell_FCAL, &b_MET_LocHadTopo_nCell_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_CentralReg", &MET_LocHadTopo_etx_CentralReg, &b_MET_LocHadTopo_etx_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_CentralReg", &MET_LocHadTopo_ety_CentralReg, &b_MET_LocHadTopo_ety_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_CentralReg", &MET_LocHadTopo_sumet_CentralReg, &b_MET_LocHadTopo_sumet_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_CentralReg", &MET_LocHadTopo_phi_CentralReg, &b_MET_LocHadTopo_phi_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EndcapRegion", &MET_LocHadTopo_etx_EndcapRegion, &b_MET_LocHadTopo_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EndcapRegion", &MET_LocHadTopo_ety_EndcapRegion, &b_MET_LocHadTopo_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EndcapRegion", &MET_LocHadTopo_sumet_EndcapRegion, &b_MET_LocHadTopo_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EndcapRegion", &MET_LocHadTopo_phi_EndcapRegion, &b_MET_LocHadTopo_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_ForwardReg", &MET_LocHadTopo_etx_ForwardReg, &b_MET_LocHadTopo_etx_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_ForwardReg", &MET_LocHadTopo_ety_ForwardReg, &b_MET_LocHadTopo_ety_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_ForwardReg", &MET_LocHadTopo_sumet_ForwardReg, &b_MET_LocHadTopo_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_ForwardReg", &MET_LocHadTopo_phi_ForwardReg, &b_MET_LocHadTopo_phi_ForwardReg);
   fChain->SetBranchAddress("el_MET_n", &el_MET_n, &b_el_MET_n);
   fChain->SetBranchAddress("el_MET_wpx", &el_MET_wpx, &b_el_MET_wpx);
   fChain->SetBranchAddress("el_MET_wpy", &el_MET_wpy, &b_el_MET_wpy);
   fChain->SetBranchAddress("el_MET_wet", &el_MET_wet, &b_el_MET_wet);
   fChain->SetBranchAddress("el_MET_statusWord", &el_MET_statusWord, &b_el_MET_statusWord);
   fChain->SetBranchAddress("ph_MET_n", &ph_MET_n, &b_ph_MET_n);
   fChain->SetBranchAddress("ph_MET_wpx", &ph_MET_wpx, &b_ph_MET_wpx);
   fChain->SetBranchAddress("ph_MET_wpy", &ph_MET_wpy, &b_ph_MET_wpy);
   fChain->SetBranchAddress("ph_MET_wet", &ph_MET_wet, &b_ph_MET_wet);
   fChain->SetBranchAddress("ph_MET_statusWord", &ph_MET_statusWord, &b_ph_MET_statusWord);
   fChain->SetBranchAddress("mu_staco_MET_n", &mu_staco_MET_n, &b_mu_staco_MET_n);
   fChain->SetBranchAddress("mu_staco_MET_wpx", &mu_staco_MET_wpx, &b_mu_staco_MET_wpx);
   fChain->SetBranchAddress("mu_staco_MET_wpy", &mu_staco_MET_wpy, &b_mu_staco_MET_wpy);
   fChain->SetBranchAddress("mu_staco_MET_wet", &mu_staco_MET_wet, &b_mu_staco_MET_wet);
   fChain->SetBranchAddress("mu_staco_MET_statusWord", &mu_staco_MET_statusWord, &b_mu_staco_MET_statusWord);
   fChain->SetBranchAddress("mu_muid_MET_n", &mu_muid_MET_n, &b_mu_muid_MET_n);
   fChain->SetBranchAddress("mu_muid_MET_wpx", &mu_muid_MET_wpx, &b_mu_muid_MET_wpx);
   fChain->SetBranchAddress("mu_muid_MET_wpy", &mu_muid_MET_wpy, &b_mu_muid_MET_wpy);
   fChain->SetBranchAddress("mu_muid_MET_wet", &mu_muid_MET_wet, &b_mu_muid_MET_wet);
   fChain->SetBranchAddress("mu_muid_MET_statusWord", &mu_muid_MET_statusWord, &b_mu_muid_MET_statusWord);
   fChain->SetBranchAddress("mu_MET_n", &mu_MET_n, &b_mu_MET_n);
   fChain->SetBranchAddress("mu_MET_wpx", &mu_MET_wpx, &b_mu_MET_wpx);
   fChain->SetBranchAddress("mu_MET_wpy", &mu_MET_wpy, &b_mu_MET_wpy);
   fChain->SetBranchAddress("mu_MET_wet", &mu_MET_wet, &b_mu_MET_wet);
   fChain->SetBranchAddress("mu_MET_statusWord", &mu_MET_statusWord, &b_mu_MET_statusWord);
   fChain->SetBranchAddress("tau_MET_n", &tau_MET_n, &b_tau_MET_n);
   fChain->SetBranchAddress("tau_MET_wpx", &tau_MET_wpx, &b_tau_MET_wpx);
   fChain->SetBranchAddress("tau_MET_wpy", &tau_MET_wpy, &b_tau_MET_wpy);
   fChain->SetBranchAddress("tau_MET_wet", &tau_MET_wet, &b_tau_MET_wet);
   fChain->SetBranchAddress("tau_MET_statusWord", &tau_MET_statusWord, &b_tau_MET_statusWord);
   fChain->SetBranchAddress("jet_antikt4LCtopo_MET_n", &jet_antikt4LCtopo_MET_n, &b_jet_antikt4LCtopo_MET_n);
   fChain->SetBranchAddress("jet_antikt4LCtopo_MET_wpx", &jet_antikt4LCtopo_MET_wpx, &b_jet_antikt4LCtopo_MET_wpx);
   fChain->SetBranchAddress("jet_antikt4LCtopo_MET_wpy", &jet_antikt4LCtopo_MET_wpy, &b_jet_antikt4LCtopo_MET_wpy);
   fChain->SetBranchAddress("jet_antikt4LCtopo_MET_wet", &jet_antikt4LCtopo_MET_wet, &b_jet_antikt4LCtopo_MET_wet);
   fChain->SetBranchAddress("jet_antikt4LCtopo_MET_statusWord", &jet_antikt4LCtopo_MET_statusWord, &b_jet_antikt4LCtopo_MET_statusWord);
   fChain->SetBranchAddress("cl_MET_n", &cl_MET_n, &b_cl_MET_n);
   fChain->SetBranchAddress("cl_MET_wpx", &cl_MET_wpx, &b_cl_MET_wpx);
   fChain->SetBranchAddress("cl_MET_wpy", &cl_MET_wpy, &b_cl_MET_wpy);
   fChain->SetBranchAddress("cl_MET_wet", &cl_MET_wet, &b_cl_MET_wet);
   fChain->SetBranchAddress("cl_MET_statusWord", &cl_MET_statusWord, &b_cl_MET_statusWord);
   fChain->SetBranchAddress("trk_MET_n", &trk_MET_n, &b_trk_MET_n);
   fChain->SetBranchAddress("trk_MET_wpx", &trk_MET_wpx, &b_trk_MET_wpx);
   fChain->SetBranchAddress("trk_MET_wpy", &trk_MET_wpy, &b_trk_MET_wpy);
   fChain->SetBranchAddress("trk_MET_wet", &trk_MET_wet, &b_trk_MET_wet);
   fChain->SetBranchAddress("trk_MET_statusWord", &trk_MET_statusWord, &b_trk_MET_statusWord);
   fChain->SetBranchAddress("METJetsInfo_JetPtWeightedEventEMFraction", &METJetsInfo_JetPtWeightedEventEMFraction, &b_METJetsInfo_JetPtWeightedEventEMFraction);
   fChain->SetBranchAddress("METJetsInfo_JetPtWeightedNumAssociatedTracks", &METJetsInfo_JetPtWeightedNumAssociatedTracks, &b_METJetsInfo_JetPtWeightedNumAssociatedTracks);
   fChain->SetBranchAddress("METJetsInfo_JetPtWeightedSize", &METJetsInfo_JetPtWeightedSize, &b_METJetsInfo_JetPtWeightedSize);
   fChain->SetBranchAddress("METJetsInfo_LeadingJetEt", &METJetsInfo_LeadingJetEt, &b_METJetsInfo_LeadingJetEt);
   fChain->SetBranchAddress("METJetsInfo_LeadingJetEta", &METJetsInfo_LeadingJetEta, &b_METJetsInfo_LeadingJetEta);
   fChain->SetBranchAddress("vxp_n", &vxp_n, &b_vxp_n);
   fChain->SetBranchAddress("vxp_x", &vxp_x, &b_vxp_x);
   fChain->SetBranchAddress("vxp_y", &vxp_y, &b_vxp_y);
   fChain->SetBranchAddress("vxp_z", &vxp_z, &b_vxp_z);
   fChain->SetBranchAddress("vxp_cov_x", &vxp_cov_x, &b_vxp_cov_x);
   fChain->SetBranchAddress("vxp_cov_y", &vxp_cov_y, &b_vxp_cov_y);
   fChain->SetBranchAddress("vxp_cov_z", &vxp_cov_z, &b_vxp_cov_z);
   fChain->SetBranchAddress("vxp_cov_xy", &vxp_cov_xy, &b_vxp_cov_xy);
   fChain->SetBranchAddress("vxp_cov_xz", &vxp_cov_xz, &b_vxp_cov_xz);
   fChain->SetBranchAddress("vxp_cov_yz", &vxp_cov_yz, &b_vxp_cov_yz);
   fChain->SetBranchAddress("vxp_type", &vxp_type, &b_vxp_type);
   fChain->SetBranchAddress("vxp_chi2", &vxp_chi2, &b_vxp_chi2);
   fChain->SetBranchAddress("vxp_ndof", &vxp_ndof, &b_vxp_ndof);
   fChain->SetBranchAddress("vxp_px", &vxp_px, &b_vxp_px);
   fChain->SetBranchAddress("vxp_py", &vxp_py, &b_vxp_py);
   fChain->SetBranchAddress("vxp_pz", &vxp_pz, &b_vxp_pz);
   fChain->SetBranchAddress("vxp_E", &vxp_E, &b_vxp_E);
   fChain->SetBranchAddress("vxp_m", &vxp_m, &b_vxp_m);
   fChain->SetBranchAddress("vxp_nTracks", &vxp_nTracks, &b_vxp_nTracks);
   fChain->SetBranchAddress("vxp_sumPt", &vxp_sumPt, &b_vxp_sumPt);
   fChain->SetBranchAddress("vxp_trk_weight", &vxp_trk_weight, &b_vxp_trk_weight);
   fChain->SetBranchAddress("vxp_trk_n", &vxp_trk_n, &b_vxp_trk_n);
   fChain->SetBranchAddress("vxp_trk_index", &vxp_trk_index, &b_vxp_trk_index);
   fChain->SetBranchAddress("trig_L1_TAV", &trig_L1_TAV, &b_trig_L1_TAV);
   fChain->SetBranchAddress("trig_L2_passedPhysics", &trig_L2_passedPhysics, &b_trig_L2_passedPhysics);
   fChain->SetBranchAddress("trig_EF_passedPhysics", &trig_EF_passedPhysics, &b_trig_EF_passedPhysics);
   fChain->SetBranchAddress("trig_L1_TBP", &trig_L1_TBP, &b_trig_L1_TBP);
   fChain->SetBranchAddress("trig_L1_TAP", &trig_L1_TAP, &b_trig_L1_TAP);
   fChain->SetBranchAddress("trig_L2_passedRaw", &trig_L2_passedRaw, &b_trig_L2_passedRaw);
   fChain->SetBranchAddress("trig_EF_passedRaw", &trig_EF_passedRaw, &b_trig_EF_passedRaw);
   fChain->SetBranchAddress("trig_L2_truncated", &trig_L2_truncated, &b_trig_L2_truncated);
   fChain->SetBranchAddress("trig_EF_truncated", &trig_EF_truncated, &b_trig_EF_truncated);
   fChain->SetBranchAddress("trig_L2_resurrected", &trig_L2_resurrected, &b_trig_L2_resurrected);
   fChain->SetBranchAddress("trig_EF_resurrected", &trig_EF_resurrected, &b_trig_EF_resurrected);
   fChain->SetBranchAddress("trig_L2_passedThrough", &trig_L2_passedThrough, &b_trig_L2_passedThrough);
   fChain->SetBranchAddress("trig_EF_passedThrough", &trig_EF_passedThrough, &b_trig_EF_passedThrough);
   fChain->SetBranchAddress("trig_L2_wasPrescaled", &trig_L2_wasPrescaled, &b_trig_L2_wasPrescaled);
   fChain->SetBranchAddress("trig_L2_wasResurrected", &trig_L2_wasResurrected, &b_trig_L2_wasResurrected);
   fChain->SetBranchAddress("trig_EF_wasPrescaled", &trig_EF_wasPrescaled, &b_trig_EF_wasPrescaled);
   fChain->SetBranchAddress("trig_EF_wasResurrected", &trig_EF_wasResurrected, &b_trig_EF_wasResurrected);
   fChain->SetBranchAddress("trig_DB_SMK", &trig_DB_SMK, &b_trig_DB_SMK);
   fChain->SetBranchAddress("trig_DB_L1PSK", &trig_DB_L1PSK, &b_trig_DB_L1PSK);
   fChain->SetBranchAddress("trig_DB_HLTPSK", &trig_DB_HLTPSK, &b_trig_DB_HLTPSK);
   fChain->SetBranchAddress("EF_b110_loose_j110_a4tchad_xe55_tclcw", &EF_b110_loose_j110_a4tchad_xe55_tclcw, &b_EF_b110_loose_j110_a4tchad_xe55_tclcw);
   fChain->SetBranchAddress("EF_b110_loose_j110_a4tchad_xe60_tclcw", &EF_b110_loose_j110_a4tchad_xe60_tclcw, &b_EF_b110_loose_j110_a4tchad_xe60_tclcw);
   fChain->SetBranchAddress("EF_b45_mediumEF_j110_j45_xe60_tclcw", &EF_b45_mediumEF_j110_j45_xe60_tclcw, &b_EF_b45_mediumEF_j110_j45_xe60_tclcw);
   fChain->SetBranchAddress("EF_b55_mediumEF_j110_j55_xe60_tclcw", &EF_b55_mediumEF_j110_j55_xe60_tclcw, &b_EF_b55_mediumEF_j110_j55_xe60_tclcw);
   fChain->SetBranchAddress("EF_b80_loose_j80_a4tchad_xe55_tclcw", &EF_b80_loose_j80_a4tchad_xe55_tclcw, &b_EF_b80_loose_j80_a4tchad_xe55_tclcw);
   fChain->SetBranchAddress("EF_b80_loose_j80_a4tchad_xe60_tclcw", &EF_b80_loose_j80_a4tchad_xe60_tclcw, &b_EF_b80_loose_j80_a4tchad_xe60_tclcw);
   fChain->SetBranchAddress("EF_b80_loose_j80_a4tchad_xe70_tclcw", &EF_b80_loose_j80_a4tchad_xe70_tclcw, &b_EF_b80_loose_j80_a4tchad_xe70_tclcw);
   fChain->SetBranchAddress("EF_b80_loose_j80_a4tchad_xe75_tclcw", &EF_b80_loose_j80_a4tchad_xe75_tclcw, &b_EF_b80_loose_j80_a4tchad_xe75_tclcw);
   fChain->SetBranchAddress("EF_e15vh_medium1", &EF_e15vh_medium1, &b_EF_e15vh_medium1);
   fChain->SetBranchAddress("EF_e18vh_medium1", &EF_e18vh_medium1, &b_EF_e18vh_medium1);
   fChain->SetBranchAddress("EF_mu24", &EF_mu24, &b_EF_mu24);
   fChain->SetBranchAddress("EF_mu24_j65_a4tchad", &EF_mu24_j65_a4tchad, &b_EF_mu24_j65_a4tchad);
   fChain->SetBranchAddress("EF_mu24_j65_a4tchad_EFxe40", &EF_mu24_j65_a4tchad_EFxe40, &b_EF_mu24_j65_a4tchad_EFxe40);
   fChain->SetBranchAddress("EF_mu4T_j110_a4tchad_L2FS_matched", &EF_mu4T_j110_a4tchad_L2FS_matched, &b_EF_mu4T_j110_a4tchad_L2FS_matched);
   fChain->SetBranchAddress("EF_mu4T_j110_a4tchad_matched", &EF_mu4T_j110_a4tchad_matched, &b_EF_mu4T_j110_a4tchad_matched);
   fChain->SetBranchAddress("EF_mu4T_j145_a4tchad_L2FS_matched", &EF_mu4T_j145_a4tchad_L2FS_matched, &b_EF_mu4T_j145_a4tchad_L2FS_matched);
   fChain->SetBranchAddress("EF_mu4T_j145_a4tchad_matched", &EF_mu4T_j145_a4tchad_matched, &b_EF_mu4T_j145_a4tchad_matched);
   fChain->SetBranchAddress("EF_mu4T_j15_a4tchad_matched", &EF_mu4T_j15_a4tchad_matched, &b_EF_mu4T_j15_a4tchad_matched);
   fChain->SetBranchAddress("EF_mu4T_j15_a4tchad_matchedZ", &EF_mu4T_j15_a4tchad_matchedZ, &b_EF_mu4T_j15_a4tchad_matchedZ);
   fChain->SetBranchAddress("EF_mu4T_j180_a4tchad_L2FS_matched", &EF_mu4T_j180_a4tchad_L2FS_matched, &b_EF_mu4T_j180_a4tchad_L2FS_matched);
   fChain->SetBranchAddress("EF_mu4T_j180_a4tchad_matched", &EF_mu4T_j180_a4tchad_matched, &b_EF_mu4T_j180_a4tchad_matched);
   fChain->SetBranchAddress("EF_mu4T_j220_a4tchad_L2FS_matched", &EF_mu4T_j220_a4tchad_L2FS_matched, &b_EF_mu4T_j220_a4tchad_L2FS_matched);
   fChain->SetBranchAddress("EF_mu4T_j220_a4tchad_matched", &EF_mu4T_j220_a4tchad_matched, &b_EF_mu4T_j220_a4tchad_matched);
   fChain->SetBranchAddress("EF_mu4T_j25_a4tchad_matched", &EF_mu4T_j25_a4tchad_matched, &b_EF_mu4T_j25_a4tchad_matched);
   fChain->SetBranchAddress("EF_mu4T_j25_a4tchad_matchedZ", &EF_mu4T_j25_a4tchad_matchedZ, &b_EF_mu4T_j25_a4tchad_matchedZ);
   fChain->SetBranchAddress("EF_mu4T_j280_a4tchad_L2FS_matched", &EF_mu4T_j280_a4tchad_L2FS_matched, &b_EF_mu4T_j280_a4tchad_L2FS_matched);
   fChain->SetBranchAddress("EF_mu4T_j280_a4tchad_matched", &EF_mu4T_j280_a4tchad_matched, &b_EF_mu4T_j280_a4tchad_matched);
   fChain->SetBranchAddress("EF_mu4T_j35_a4tchad_matched", &EF_mu4T_j35_a4tchad_matched, &b_EF_mu4T_j35_a4tchad_matched);
   fChain->SetBranchAddress("EF_mu4T_j35_a4tchad_matchedZ", &EF_mu4T_j35_a4tchad_matchedZ, &b_EF_mu4T_j35_a4tchad_matchedZ);
   fChain->SetBranchAddress("EF_mu4T_j45_a4tchad_L2FS_matched", &EF_mu4T_j45_a4tchad_L2FS_matched, &b_EF_mu4T_j45_a4tchad_L2FS_matched);
   fChain->SetBranchAddress("EF_mu4T_j45_a4tchad_L2FS_matchedZ", &EF_mu4T_j45_a4tchad_L2FS_matchedZ, &b_EF_mu4T_j45_a4tchad_L2FS_matchedZ);
   fChain->SetBranchAddress("EF_mu4T_j45_a4tchad_matched", &EF_mu4T_j45_a4tchad_matched, &b_EF_mu4T_j45_a4tchad_matched);
   fChain->SetBranchAddress("EF_mu4T_j45_a4tchad_matchedZ", &EF_mu4T_j45_a4tchad_matchedZ, &b_EF_mu4T_j45_a4tchad_matchedZ);
   fChain->SetBranchAddress("EF_mu4T_j55_a4tchad_L2FS_matched", &EF_mu4T_j55_a4tchad_L2FS_matched, &b_EF_mu4T_j55_a4tchad_L2FS_matched);
   fChain->SetBranchAddress("EF_mu4T_j55_a4tchad_L2FS_matchedZ", &EF_mu4T_j55_a4tchad_L2FS_matchedZ, &b_EF_mu4T_j55_a4tchad_L2FS_matchedZ);
   fChain->SetBranchAddress("EF_mu4T_j55_a4tchad_matched", &EF_mu4T_j55_a4tchad_matched, &b_EF_mu4T_j55_a4tchad_matched);
   fChain->SetBranchAddress("EF_mu4T_j55_a4tchad_matchedZ", &EF_mu4T_j55_a4tchad_matchedZ, &b_EF_mu4T_j55_a4tchad_matchedZ);
   fChain->SetBranchAddress("EF_mu4T_j65_a4tchad_L2FS_matched", &EF_mu4T_j65_a4tchad_L2FS_matched, &b_EF_mu4T_j65_a4tchad_L2FS_matched);
   fChain->SetBranchAddress("EF_mu4T_j65_a4tchad_matched", &EF_mu4T_j65_a4tchad_matched, &b_EF_mu4T_j65_a4tchad_matched);
   fChain->SetBranchAddress("EF_mu4T_j80_a4tchad_L2FS_matched", &EF_mu4T_j80_a4tchad_L2FS_matched, &b_EF_mu4T_j80_a4tchad_L2FS_matched);
   fChain->SetBranchAddress("EF_mu4T_j80_a4tchad_matched", &EF_mu4T_j80_a4tchad_matched, &b_EF_mu4T_j80_a4tchad_matched);
   fChain->SetBranchAddress("L2_b105_loose_j105_c4cchad_xe40", &L2_b105_loose_j105_c4cchad_xe40, &b_L2_b105_loose_j105_c4cchad_xe40);
   fChain->SetBranchAddress("L2_b105_loose_j105_c4cchad_xe45", &L2_b105_loose_j105_c4cchad_xe45, &b_L2_b105_loose_j105_c4cchad_xe45);
   fChain->SetBranchAddress("L2_b75_loose_j75_c4cchad_xe40", &L2_b75_loose_j75_c4cchad_xe40, &b_L2_b75_loose_j75_c4cchad_xe40);
   fChain->SetBranchAddress("L2_b75_loose_j75_c4cchad_xe45", &L2_b75_loose_j75_c4cchad_xe45, &b_L2_b75_loose_j75_c4cchad_xe45);
   fChain->SetBranchAddress("L2_b75_loose_j75_c4cchad_xe55", &L2_b75_loose_j75_c4cchad_xe55, &b_L2_b75_loose_j75_c4cchad_xe55);
   fChain->SetBranchAddress("L2_e15vh_medium1", &L2_e15vh_medium1, &b_L2_e15vh_medium1);
   fChain->SetBranchAddress("L2_e18vh_medium1", &L2_e18vh_medium1, &b_L2_e18vh_medium1);
   fChain->SetBranchAddress("L2_j105_j40_c4cchad_xe40", &L2_j105_j40_c4cchad_xe40, &b_L2_j105_j40_c4cchad_xe40);
   fChain->SetBranchAddress("L2_j105_j50_c4cchad_xe40", &L2_j105_j50_c4cchad_xe40, &b_L2_j105_j50_c4cchad_xe40);
   fChain->SetBranchAddress("L2_mu24", &L2_mu24, &b_L2_mu24);
   fChain->SetBranchAddress("L2_mu24_j60_c4cchad_xe35", &L2_mu24_j60_c4cchad_xe35, &b_L2_mu24_j60_c4cchad_xe35);
   fChain->SetBranchAddress("L2_mu24_j65_c4cchad", &L2_mu24_j65_c4cchad, &b_L2_mu24_j65_c4cchad);
   fChain->SetBranchAddress("L2_mu4T_j105_c4cchad", &L2_mu4T_j105_c4cchad, &b_L2_mu4T_j105_c4cchad);
   fChain->SetBranchAddress("L2_mu4T_j10_a4TTem", &L2_mu4T_j10_a4TTem, &b_L2_mu4T_j10_a4TTem);
   fChain->SetBranchAddress("L2_mu4T_j140_c4cchad", &L2_mu4T_j140_c4cchad, &b_L2_mu4T_j140_c4cchad);
   fChain->SetBranchAddress("L2_mu4T_j15_a4TTem", &L2_mu4T_j15_a4TTem, &b_L2_mu4T_j15_a4TTem);
   fChain->SetBranchAddress("L2_mu4T_j165_c4cchad", &L2_mu4T_j165_c4cchad, &b_L2_mu4T_j165_c4cchad);
   fChain->SetBranchAddress("L2_mu4T_j30_a4TTem", &L2_mu4T_j30_a4TTem, &b_L2_mu4T_j30_a4TTem);
   fChain->SetBranchAddress("L2_mu4T_j40_c4cchad", &L2_mu4T_j40_c4cchad, &b_L2_mu4T_j40_c4cchad);
   fChain->SetBranchAddress("L2_mu4T_j50_a4TTem", &L2_mu4T_j50_a4TTem, &b_L2_mu4T_j50_a4TTem);
   fChain->SetBranchAddress("L2_mu4T_j50_c4cchad", &L2_mu4T_j50_c4cchad, &b_L2_mu4T_j50_c4cchad);
   fChain->SetBranchAddress("L2_mu4T_j60_c4cchad", &L2_mu4T_j60_c4cchad, &b_L2_mu4T_j60_c4cchad);
   fChain->SetBranchAddress("L2_mu4T_j75_a4TTem", &L2_mu4T_j75_a4TTem, &b_L2_mu4T_j75_a4TTem);
   fChain->SetBranchAddress("L2_mu4T_j75_c4cchad", &L2_mu4T_j75_c4cchad, &b_L2_mu4T_j75_c4cchad);
   Notify();
}

Bool_t DataClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void DataClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t DataClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef DataClass_cxx
