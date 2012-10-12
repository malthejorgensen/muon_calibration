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

//
#include <TVectorD.h>

// Custom
// #include "DataClass.h"

using namespace std;


void load_data() {
  TChain chain("llp");


  gInterpreter->GenerateDictionary("vector<vector<float> >");

  // Add files
  // chain.Add("Data/*.root");
  chain.Add("../Data/*001.llp.root"); // Test load only first file

  // Disable unused branches
  chain.SetBranchStatus("*", 0); // Disable all branches
  chain.SetBranchStatus("mu_muid*", 1); // Enable branches of interest

  // Make .h and .cpp file
  // chain.MakeClass("DataClass");

  long long int entry_count = chain.GetEntries();
  // cout << entry_count << endl;

  // chain.Show(0); // Show values of an Entry $i

  // vector<float>* mu_muid_x = 0;
  vector<float>* mu_muid_px = 0;
  vector<float>* mu_muid_py = 0;
  vector<float>* mu_muid_pz = 0;
  chain.SetBranchAddress("mu_muid_px", &mu_muid_px);
  chain.SetBranchAddress("mu_muid_py", &mu_muid_py);
  chain.SetBranchAddress("mu_muid_pz", &mu_muid_pz);
  vector< vector<float> >* mu_muid_CaloCell_sampling = 0;
  vector< vector<float> >* mu_muid_CaloCell_eta = 0;
  vector< vector<float> >* mu_muid_CaloCell_phi = 0;
  vector< vector<float> >* mu_muid_CaloCell_dr = 0;
  vector< vector<float> >* mu_muid_CaloCell_E = 0;
  vector< vector<float> >* mu_muid_CaloCell_t = 0;
  vector< vector<float> >* mu_muid_CaloCell_x = 0;
  vector< vector<float> >* mu_muid_CaloCell_y = 0;
  vector< vector<float> >* mu_muid_CaloCell_z = 0;
  chain.SetBranchAddress("mu_muid_CaloCell_sampling", &mu_muid_CaloCell_sampling);
  chain.SetBranchAddress("mu_muid_CaloCell_eta", &mu_muid_CaloCell_eta);
  chain.SetBranchAddress("mu_muid_CaloCell_phi", &mu_muid_CaloCell_phi);
  chain.SetBranchAddress("mu_muid_CaloCell_dr", &mu_muid_CaloCell_dr);
  chain.SetBranchAddress("mu_muid_CaloCell_E", &mu_muid_CaloCell_E);
  chain.SetBranchAddress("mu_muid_CaloCell_t", &mu_muid_CaloCell_t);
  chain.SetBranchAddress("mu_muid_CaloCell_x", &mu_muid_CaloCell_x);
  chain.SetBranchAddress("mu_muid_CaloCell_y", &mu_muid_CaloCell_y);
  chain.SetBranchAddress("mu_muid_CaloCell_z", &mu_muid_CaloCell_z);

  // Timing
  int* RunNumber = 0;
  int* EventNumber = 0;
  int* timestamp = 0;
  int* timestamp_ns = 0;
  chain.SetBranchAddress("RunNumber", &RunNumber);
  chain.SetBranchAddress("EventNumber", &EventNumber);
  chain.SetBranchAddress("timestamp", &timestamp);
  chain.SetBranchAddress("timestamp_ns", &timestamp_ns);


  // NOTE: This takes quite a while: 3.68 GiB of data has to seep through this
  //       code.

  TCanvas* c1 = new TCanvas("c1","PolyLine3D & PolyMarker3D Window",200,10,500,500);

  TView3D* view = (TView3D*)(TView3D::CreateView());
  // TView3D* view = new TView3D();
  view->SetRange(-4000, -4000, -4000, 4000, 4000, 4000);
  // view->DrawOutlineCube();
  // view->SetOutlineToCube();
  // view->ShowAxis();


  double last_time = 0;
  TVectorD last_pos(3);

  // TH3F* markers = new TH3F("CaloCell positions", "CaloCell positions", 1000, -4000, 4000, 1000, -4000, 4000, 1000, -4000, 4000);
  TPolyMarker3D* markers = new TPolyMarker3D(9);

  // for (int i = 0; i < entry_count; i++) {
  for (int i_entry = 6; i_entry < 7; i_entry++) {
    chain.GetEntry(i_entry); // GetEntry returns number of bytes read

    for (int i_muon = 0; i_muon < (*mu_muid_CaloCell_x).size(); i_muon++) {

      // Draw calorimeter cells
      for (int i_cell = 0; i_cell < (*mu_muid_CaloCell_x)[i_muon].size(); i_cell++) {
        // (*mu_muid_CaloCell_x)[i_muon][i_cell], (*mu_muid_CaloCell_y)[i_muon][i_cell], (*mu_muid_CaloCell_z)[i_muon][i_cell]);
        double coords[] = { (*mu_muid_CaloCell_x)[i_muon][i_cell], (*mu_muid_CaloCell_y)[i_muon][i_cell], (*mu_muid_CaloCell_z)[i_muon][i_cell] };
        TVectorD current_pos(3, coords);
        double current_time = (*mu_muid_CaloCell_t)[i_muon][i_cell];

        current_pos.Print();
        cout << current_time << endl;

        markers->SetPoint(i_cell, current_pos[0], current_pos[1], current_pos[2]);

        if (i_cell != 0) {
          double beta = sqrt((last_pos - current_pos).Norm2Sqr()) / (last_time - current_time);
          // cout << sqrt((last_pos - current_pos).Norm2Sqr()) << endl;
          // cout << beta << endl;
        }
      }
    }
  }
  // view->SetAxisNDC(-4000.0, 4000.0, -4000.0, 4000.0, -4000.0, 4000.0);

  markers->SetMarkerSize(2);
  markers->SetMarkerColor(4);
  markers->SetMarkerStyle(2);
  markers->Draw();
  // chain.Draw("mu_muid_beta", "mu_muid_beta > -1");
  // chain.Draw("mu_muid_pt");
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


