#if ( !defined(__CINT__) || defined(__MAKECINT__) )

// C++
#include <iostream>

// C
#include <cmath>

// Root
#include <TROOT.h>
#include <TInterpreter.h>
#include <TApplication.h>
#include <TView3D.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TPolyMarker3D.h>
#include <TPolyLine3D.h>

// Loading Root files
#include <TChain.h>

// 
#include <TH3F.h>
#include <TH2.h>
#include <stddef.h>

//
#include <TVectorD.h>

// Custom
#endif

using namespace std;

//#include "DataClass.h"
void load_data() {
  TChain chain("llp");


  //gInterpreter->GenerateDictionary("vector<vector<float> >");

  // Add files
  // chain.Add("Data/*.root");
  #ifdef _WIN32 // Windows path (Bjarke)
  chain.Add("E:/Dropbox/Anvendt Statistik - Projekt 2/Data/group.phys-susy.108624_012981.EXT2._00001.llp.root");
  cout << "Windows" << endl;
  #else
  chain.Add("../Data/*001.llp.root"); // Test load only first file
  #endif
  // Disable unused branches
  chain.SetBranchStatus("*", 0); // Disable all branches
  chain.SetBranchStatus("mu_muid*", 1); // Enable branches of interest

  // Make .h and .cpp file
  // chain.MakeClass("DataClass");

  long long int entry_count = chain.GetEntries();
  cout << entry_count << endl;

  // chain.Show(0); // Show values of an Entry $i

  vector<float>* mu_muid_pz = 0;
  chain.SetBranchAddress("mu_muid_pz", &mu_muid_pz);
  vector< vector<float> >* mu_muid_CaloCell_z = 0;
  chain.SetBranchAddress("mu_muid_CaloCell_z", &mu_muid_CaloCell_z);
}


int main(int argc, char* argv[]) {

  // Needed for graphs
  TApplication app("root", &argc, argv);

  load_data();

  cout << "Main program done, the program stays open to display graphs and such." << endl;
  cout << "(Ctrl-C to close)" << endl;
  app.Run();


  return 0;
}


// void draw_calocells() {
//       TPolyMarker3D* markers = new TPolyMarker3D((*mu_muid_CaloCell_x)[i_muon].size());
// 
//       // Draw calorimeter cells
//       for (int i_cell = 0; i_cell < (*mu_muid_CaloCell_x)[i_muon].size(); i_cell++) {
//         cout << (*mu_muid_CaloCell_x)[i_muon][i_cell] << endl;
//         markers->SetPoint(i_cell, (*mu_muid_CaloCell_x)[i_muon][i_cell], (*mu_muid_CaloCell_y)[i_muon][i_cell], (*mu_muid_CaloCell_z)[i_muon][i_cell]);
//       }
//       markers->SetMarkerSize(2);
//       markers->SetMarkerColor(4);
//       markers->SetMarkerStyle(2);
//       markers->Draw("A*");
// 
//       // Draw momentum
//       TPolyLine3D* line = new TPolyLine3D((*mu_muid_CaloCell_x)[i_muon].size());
//       line->SetPoint(0, 0.0, 0.0, 0.0);
//       line->SetPoint(1, (*mu_muid_px)[i_muon]*0.04, (*mu_muid_py)[i_muon]*0.04, (*mu_muid_pz)[i_muon]*0.04);
//       line->Draw();
// 
// }


