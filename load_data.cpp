// C++
#include <iostream>
#include <sstream>
#include <set>

// C
#include <cmath>

// Root
#include <TROOT.h>
#include <TInterpreter.h>
#include <TApplication.h>
#include <TView3D.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TGAxis.h>
#include <TPolyMarker3D.h>
#include <TPolyLine3D.h>

// Loading Root files
#include <TChain.h>

// 
#include <TH1F.h>
#include <TH3F.h>
#include <TH2.h>
#include <TGraph.h>

//
#include <TVectorD.h>

// Custom
// #include "DataClass.h"

using namespace std;

void draw_calocells(vector<float> x, vector<float> y, vector<float> z);

void load_data() {
  TChain chain("llp");


  gInterpreter->GenerateDictionary("vector<vector<float> >");

  // Add files
  chain.Add("../Data/*.root");
  //chain.Add("../Data/*001.llp.root"); // Test load only first file

  // Disable unused branches
  chain.SetBranchStatus("*", 0); // Disable all branches
  chain.SetBranchStatus("mu_muid*", 1); // Enable branches of interest
  chain.SetBranchStatus("RunNumber", 1); // Enable branches of interest
  chain.SetBranchStatus("EventNumber", 1); // Enable branches of interest
  chain.SetBranchStatus("timestamp*", 1); // Enable branches of interest

  // Make .h and .cpp file
  // chain.MakeClass("DataClass");

  long long int entry_count = chain.GetEntries();
  // cout << entry_count << endl;

  // chain.Show(0); // Show values of an Entry $i

  // vector<float>* mu_muid_x = 0;
  vector<float>* mu_muid_beta = 0;
  vector<float>* mu_muid_pt = 0;
  chain.SetBranchAddress("mu_muid_beta", &mu_muid_beta);
  chain.SetBranchAddress("mu_muid_pt", &mu_muid_pt);
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
  unsigned int RunNumber = 0;
  unsigned int EventNumber;
  //unsigned int timestamp = 0;
  unsigned int timestamp;
  unsigned int timestamp_ns;
  chain.SetBranchAddress("RunNumber", &RunNumber);
  chain.SetBranchAddress("EventNumber", &EventNumber);
  chain.SetBranchAddress("timestamp", &timestamp);
  chain.SetBranchAddress("timestamp_ns", &timestamp_ns); // nanosecond part of time (not a timestamp by itself)


  // NOTE: This takes quite a while: 3.68 GiB of data has to seep through this
  //       code.


  stringstream name;

  const int calo_count = 20;
  vector<TH1F*> calo_beta_hists(calo_count + 1);
  TH1F* calo_beta_hist = new TH1F("beta_hist", "beta_hist", 200, -10, 10);
  TH1F* sampling_hist = new TH1F("sampling_hist", "sampling_hist", 21, -0.5, 20.5);
  
  vector<int> sampling_good(calo_count + 1, 0);
  vector<int> sampling_bad(calo_count + 1, 0);

  TH1F* energy_good = new TH1F("energy good", "energy good", 20, -200, 10000);
  TH1F* energy_bad = new TH1F("energy bad", "energy bad", 20, -200, 10000);
  TH1F* pt_good = new TH1F("pt good", "pt good", 20, -200, 10000);
  TH1F* pt_bad = new TH1F("pt bad", "pt bad", 20, -200, 10000);

  for (int i_calo = 0; i_calo <= calo_count; i_calo++) {
    name << "calo cell" << i_calo;
    //cout << name.str() << endl;
    calo_beta_hists[i_calo] = new TH1F(name.str().c_str(), "calo cell", 200, -1, 4);
    name.str("");
  }


  vector< vector<double> > times(calo_count + 1);
  vector< vector<double> > betas(calo_count + 1);
  vector< vector<double> > energies(calo_count + 1);
  TH2F* time_dist_hist = new TH2F("Time error vs. distance", "Time error vs. distance", 200, -30, 30, 200, 0, 8);

  set<unsigned int> runs;

  // Loop through entries
  for (int i_entry = 0; i_entry < entry_count; i_entry++) {
  //const int select = 12;
  //for (int i_entry = select; i_entry < select+1; i_entry++) {

    chain.GetEntry(i_entry); // GetEntry returns number of bytes read
    if (i_entry == 0) {
      cout << "RunNumber: " << RunNumber << endl;
      cout << "EventNumber: " << EventNumber << endl;
      cout << "Time: " << timestamp << endl;
    }
    runs.insert(RunNumber);

    // Loop through mouns
    for (int i_muon = 0; i_muon < (*mu_muid_CaloCell_x).size(); i_muon++) {
      //draw_calocells((*mu_muid_CaloCell_x)[i_muon], (*mu_muid_CaloCell_y)[i_muon], (*mu_muid_CaloCell_z)[i_muon]);

      /******* SELECTION START *******/
      //if ((*mu_muid_beta)[i_muon] < -900.0) { continue; } // Don't go through errornous 
      //if ((*mu_muid_pt)[i_muon] < 12000.0) { continue; } // pt > 50 GeV
      //if (RunNumber == 200804) { continue; }
      /******** SELECTION END ********/

      // Loop through calorimeters
      for (int i_cell = 0; i_cell < (*mu_muid_CaloCell_x)[i_muon].size(); i_cell++) {
        double coords[] = { (*mu_muid_CaloCell_x)[i_muon][i_cell], (*mu_muid_CaloCell_y)[i_muon][i_cell], (*mu_muid_CaloCell_z)[i_muon][i_cell] };
        TVectorD current_pos(3, coords);
        double dist = sqrt(current_pos.Norm2Sqr()) / 1000.0;

        double atlas_time = (*mu_muid_CaloCell_t)[i_muon][i_cell];

        const double c = 2997924581; // Wikipedia value
        double calc_time = dist / c;

        double correct_time = atlas_time / 1000000000.0 + calc_time; // calc t=t'+d/c

        time_dist_hist->Fill(atlas_time, dist);

        //current_pos.Print();
        if (i_entry < 3) {
          cout << atlas_time << endl;
          //cout << calc_time << endl;
          //cout << dist << endl;
          //cout << correct_time << endl;
        }

        double beta = (dist / correct_time) / c;

        int cell_id = (*mu_muid_CaloCell_sampling)[i_muon][i_cell]; // sampling = cell_id
        //if (cell_id != 1 && cell_id != 3) { continue; }
        if (cell_id != 1) { continue; }
        if ((*mu_muid_pt)[i_muon] > 9000) { continue; }
        //if (cell_id > 10) { continue; }
        //cout << cell_id << endl;
        calo_beta_hists[cell_id]->Fill(beta);
        calo_beta_hist->Fill(beta);

        if (0.9 < beta && beta < 1.1 ) {
          sampling_good[cell_id]++;
          energy_good->Fill((*mu_muid_CaloCell_E)[i_muon][i_cell]);
          pt_good->Fill((*mu_muid_pt)[i_muon]);
          //sampling_hist->Fill(cell_id);
        } else {
          sampling_bad[cell_id]++;
          energy_bad->Fill((*mu_muid_CaloCell_E)[i_muon][i_cell]);
          pt_bad->Fill((*mu_muid_pt)[i_muon]);
        }

        //cout << timestamp_ns << endl;
        times[cell_id].push_back(double(timestamp));
        betas[cell_id].push_back(beta);
        energies[cell_id].push_back((*mu_muid_CaloCell_E)[i_muon][i_cell]);


        //cout << "BETA " << beta << endl; // B = v / c

      }
    }
  }
  cout << "Number of runs: " << runs.size() << endl;

  for (int i = 0; i < calo_count; i++) {
    if (sampling_good[i] + sampling_bad[i] != 0) {
      cout << sampling_bad[i] / double(sampling_good[i] + sampling_bad[i]) << endl;
      sampling_hist->Fill(i, sampling_bad[i] / double(sampling_good[i] + sampling_bad[i]));
    }
  }


  double sum = energy_bad->GetEntries() + energy_good->GetEntries();
  for (int i = 0; i < energy_good->GetXaxis()->GetNbins(); i++) {
    energy_good->SetBinContent(i, energy_bad->GetBinContent(i) + energy_good->GetBinContent(i));
    energy_bad->SetBinContent(i, energy_bad->GetBinContent(i) / sum);
  }
  sum = pt_bad->GetEntries() + pt_good->GetEntries();
  for (int i = 0; i < pt_good->GetXaxis()->GetNbins(); i++) {
    pt_good->SetBinContent(i, pt_bad->GetBinContent(i) + pt_good->GetBinContent(i));
    if (pt_bad->GetBinContent(i) + pt_good->GetBinContent(i) != 0) {
      pt_bad->SetBinContent(i, pt_bad->GetBinContent(i) / (pt_bad->GetBinContent(i) + pt_good->GetBinContent(i)));
    }
  }

  //time_dist_hist->Draw();
  //calo_beta_hist->Draw();
  TCanvas* canvas = new TCanvas("canvas", "blob", 10, 10, 500, 600);
  pt_bad->Draw();


  //scale hint1 to the pad coordinates
  Float_t rightmax = 1.1*pt_good->GetMaximum();
  Float_t scale = gPad->GetUymax()/rightmax;
  pt_good->SetLineColor(kRed);
  pt_good->Scale(scale);
  pt_good->Draw("same");

  //draw an axis on the right side
  TGaxis *axis = new TGaxis(gPad->GetUxmax(),gPad->GetUymin(),
        gPad->GetUxmax(), gPad->GetUymax(),0,rightmax,510,"+L");
  axis->SetLineColor(kRed);
  axis->SetLabelColor(kRed);
  axis->Draw();
  //sampling_hist->Draw();


  //const int window_size = 10;
  //double mean = 0;
  //double sum = 0;
  //vector< vector<double> > means(calo_count);
  //vector< vector<double> > mean_times(calo_count);
  //for (int i = 0; i < betas[calo_cell_id1].size(); i++) {
    //mean += betas[calo_cell_id1][i] / window_size;
    //sum += betas[calo_cell_id1][i];

    //if (i >= window_size) {
      //mean -= betas[calo_cell_id1][i - window_size] / window_size;
      //sum -= betas[calo_cell_id1][i - window_size];
      //means[calo_cell_id1].push_back(sum / window_size);
      //mean_times[calo_cell_id1].push_back(times[calo_cell_id1][i]);
    //}
    ////means[calo_cell_id1].push_back(mean);
  //}
  //TGraph* time_graph = new TGraph(means[calo_cell_id1].size(), &times[calo_cell_id1][0], &means[calo_cell_id1][0]);
  //time_graph->Draw("LAP*");

  return;

  const int calo_cell_id1 = 12;
  const int calo_cell_id2 = 13;
  canvas->Divide(1, 2);
  canvas->cd(1);
  TGraph* time_graph1 = new TGraph(betas[calo_cell_id1].size(), &times[calo_cell_id1][0], &betas[calo_cell_id1][0]);
  time_graph1->Draw("AP*");
  canvas->cd(2);
  TGraph* time_graph2 = new TGraph(betas[calo_cell_id2].size(), &times[calo_cell_id2][0], &betas[calo_cell_id2][0]);
  time_graph2->Draw("AP*");
  //calo_beta_hists[15]->Draw();
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


 void draw_calocells(vector<float> x, vector<float> y, vector<float> z) {

  TCanvas* c1 = new TCanvas("c1","PolyLine3D & PolyMarker3D Window",200,10,500,500);

  TView3D* view = (TView3D*)(TView3D::CreateView());
  // TView3D* view = new TView3D();
  view->SetRange(-4000, -4000, -4000, 4000, 4000, 4000);
  // view->DrawOutlineCube();
  // view->SetOutlineToCube();
  // view->ShowAxis();
  TPolyMarker3D* markers = new TPolyMarker3D(x.size());

  // Draw calorimeter cells
  for (int i_cell = 0; i_cell < x.size(); i_cell++) {
    cout << x[i_cell] << endl;
    cout << y[i_cell] << endl;
    cout << z[i_cell] << endl;
    markers->SetPoint(i_cell, x[i_cell], y[i_cell], z[i_cell]);
  }
  markers->SetMarkerSize(2);
  markers->SetMarkerColor(4);
  markers->SetMarkerStyle(2);
  markers->Draw("A*");

  // Draw momentum
  //TPolyLine3D* line = new TPolyLine3D((*mu_muid_CaloCell_x)[i_muon].size());
  //line->SetPoint(0, 0.0, 0.0, 0.0);
  //line->SetPoint(1, (*mu_muid_px)[i_muon]*0.04, (*mu_muid_py)[i_muon]*0.04, (*mu_muid_pz)[i_muon]*0.04);
  //line->Draw();

 }


