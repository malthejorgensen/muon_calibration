// C++
#include <iostream>
#include <sstream>
#include <limits>
#include <algorithm>
#include <set>

// C
#include <cmath>

// Root
#include <TROOT.h>
#include <TInterpreter.h>
#include <TApplication.h>
#include <TView3D.h>
#include <TStyle.h>
#include <TPaveStats.h>
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

double sqr(double x) {
  return x*x;
}

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
  // Enable branches of interest
  chain.SetBranchStatus("mu_muid*", 1);
  chain.SetBranchStatus("RunNumber", 1);
  chain.SetBranchStatus("EventNumber", 1);
  chain.SetBranchStatus("timestamp*", 1);

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
  //TH1F* calo_beta_hist = new TH1F("beta_hist", "beta_hist", 200, -2, 10);
  TH1F* calo_beta_hist = new TH1F("beta_hist", "beta_hist", 200, -2, 7);
  TH1F* time_hist = new TH1F("time_hist", "time_hist", 200, -85, -50);
  TH1F* sampling_hist = new TH1F("sampling_hist", "sampling_hist", 21, -0.5, 20.5);

  vector<int> sampling_good(calo_count + 1, 0);
  vector<int> sampling_bad(calo_count + 1, 0);

  TH1F* var_good = new TH1F("var good", "var good", 20, -200, 10000);
  TH1F* var_bad = new TH1F("var bad", "var bad", 20, -200, 10000);

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


  int N = 0;
  double sum = 0;
  double sum_sq = 0;
  double min_beta = numeric_limits<double>::max();
  double max_beta = numeric_limits<double>::min();
  double min_dist = numeric_limits<double>::max();
  double max_dist = numeric_limits<double>::min();
  double min_time = numeric_limits<double>::max();
  double max_time = numeric_limits<double>::min();


  set<unsigned int> runs;

  // Loop through entries
  for (int i_entry = 0; i_entry < entry_count; i_entry++) {
  //const int select = 12;
  //for (int i_entry = select; i_entry < select+1; i_entry++) {

    chain.GetEntry(i_entry); // GetEntry returns number of bytes read
    //if (i_entry == 0) {
      //cout << "RunNumber: " << RunNumber << endl;
      //cout << "EventNumber: " << EventNumber << endl;
      //cout << "Time: " << timestamp << endl;
    //}
    runs.insert(RunNumber);

    // Loop through mouns
    for (int i_muon = 0; i_muon < (*mu_muid_CaloCell_x).size(); i_muon++) {
      //draw_calocells((*mu_muid_CaloCell_x)[i_muon], (*mu_muid_CaloCell_y)[i_muon], (*mu_muid_CaloCell_z)[i_muon]);

      /******* SELECTION START *******/
      //if ((*mu_muid_beta)[i_muon] < -900.0) { continue; } // Don't go through errornous 
      //if ((*mu_muid_pt)[i_muon] < 12000.0) { continue; } // pt > 12 GeV
      //if (RunNumber == 200804) { continue; }
      /******** SELECTION END ********/

      // Loop through calorimeters
      for (int i_cell = 0; i_cell < (*mu_muid_CaloCell_x)[i_muon].size(); i_cell++) {
        double coords[] = { (*mu_muid_CaloCell_x)[i_muon][i_cell], (*mu_muid_CaloCell_y)[i_muon][i_cell], (*mu_muid_CaloCell_z)[i_muon][i_cell] };
        TVectorD current_pos(3, coords);
        double dist = sqrt(current_pos.Norm2Sqr()) / 1000.0;

        double atlas_time = (*mu_muid_CaloCell_t)[i_muon][i_cell];

        /******** CUT ********/
        // times that are identically zero doesn't make sense
        if (atlas_time == 0) { continue; }
        if (atlas_time < -20) { continue; }
        if (atlas_time > 20) { continue; }
        if ((*mu_muid_CaloCell_E)[i_muon][i_cell] < 200) { continue; }
        /****** END CUT ******/

        const double c = 299792458.1; // Wikipedia value
        double calc_time = dist / c;

        double correct_time = atlas_time / 1000000000.0 + calc_time; // calc t=t'+d/c

        time_dist_hist->Fill(atlas_time, dist);

        double beta = (dist / correct_time) / c;

        int cell_id = (*mu_muid_CaloCell_sampling)[i_muon][i_cell]; // sampling = cell_id
        //if (cell_id != 1 && cell_id != 3) { continue; }
        //if (cell_id != 1) { continue; }
        //if ((*mu_muid_pt)[i_muon] > 9000) { continue; }
        //if (cell_id > 10) { continue; }
        //cout << cell_id << endl;
        calo_beta_hists[cell_id]->Fill(beta);
        calo_beta_hist->Fill(beta);

        if (0.9 < beta && beta < 1.1 ) {
          sampling_good[cell_id]++;

          var_good->Fill((*mu_muid_CaloCell_E)[i_muon][i_cell]);
          //sampling_hist->Fill(cell_id);
        } else {
          sampling_bad[cell_id]++;

          var_bad->Fill((*mu_muid_CaloCell_E)[i_muon][i_cell]);
        }

        //cout << timestamp_ns << endl;
        times[cell_id].push_back(double(timestamp));
        betas[cell_id].push_back(beta);
        energies[cell_id].push_back((*mu_muid_CaloCell_E)[i_muon][i_cell]);

        if (beta < -2 || beta > 7) { continue; }

        N++;
        sum += beta;
        sum_sq += sqr(beta);

        min_beta = min(min_beta, beta);
        max_beta = max(max_beta, beta);
        min_dist = min(min_dist, dist);
        max_dist = max(max_dist, dist);
        min_time = min(min_time, atlas_time);
        max_time = max(max_time, atlas_time);

        time_hist->Fill(atlas_time);

        //cout << "BETA " << beta << endl; // B = v / c

      }
    }
  }
  cout << "Number of runs: " << runs.size() << endl;


  double average = sum / N;
  double RMS = sqrt(sum_sq / N - sqr(average));
  cout << "RMS: " << RMS << endl;
  cout << "Average: " << average << endl;

  cout << "Min " << min_beta << endl;
  cout << "Max " << max_beta << endl;
  cout << "Min " << min_dist << endl;
  cout << "Max " << max_dist << endl;
  cout << "Min " << min_time << endl;
  cout << "Max " << max_time << endl;


  /***** START OVERALL BETA *****/
  //double stats[] = {N, N, sum, sum_sq};
  //calo_beta_hist->PutStats(stats);
  //calo_beta_hist->GetStats();
  TCanvas* canvas = new TCanvas("canvas", "Beta", 10, 10, 500, 600);

  //time_hist->Draw();

  //return;

  //calo_beta_hist->SetStats(false);
  calo_beta_hist->Draw();


  stringstream sstr;
  //TPaveText *pt = new TPaveText(.75 * gPad->GetUxmax(), .1 * gPad->GetUymax(), .95 * gPad->GetUxmax(), .3 * gPad->GetUymax());
  TPaveText *pt = new TPaveText();
  sstr << "Entries: " << N;
  pt->AddText(sstr.str().c_str());
  sstr.str("");
  sstr << "Average: " << average;
  pt->AddText(sstr.str().c_str());
  sstr.str("");
  sstr << "RMS: " << RMS;
  pt->AddText(sstr.str().c_str());
  sstr.str("");
  pt->SetX1NDC(.15);
  pt->SetX2NDC(.35);
  pt->SetY1NDC(.75);
  pt->SetY2NDC(.95);
  pt->Draw("same");


  canvas->Update();
  /****** END OVERALL BETA ******/

  /***** START SINGLE BETA *****/
  //calo_beta_hists[2]->Draw();
  /****** END SINGLE BETA ******/

  /****** START SAMPLING GOODNESS ******/
  //for (int i = 0; i < calo_count; i++) {
    //if (sampling_good[i] + sampling_bad[i] != 0) {
      //cout << sampling_bad[i] / double(sampling_good[i] + sampling_bad[i]) << endl;
      //sampling_hist->Fill(i, sampling_bad[i] / double(sampling_good[i] + sampling_bad[i]));
    //}
  //}

  //sampling_hist->Draw();
  /******* END SAMPLING GOODNESS *******/


  /****** START VARIABLE GOODNESS ******/
  //for (int i = 0; i <= var_good->GetXaxis()->GetNbins() + 1; i++) {
    //// Set $var_good histogram to be the number of entries
    //var_good->SetBinContent(i, var_bad->GetBinContent(i) + var_good->GetBinContent(i));

    ////if (var_bad->GetBinContent(i) + var_good->GetBinContent(i) != 0) {
    //if (var_bad->GetBinContent(i) + var_good->GetBinContent(i) > 10) {
      //// Set $var_bad to be the fraction of bad vs total entries
      //var_bad->SetBinContent(i, var_bad->GetBinContent(i) / double(var_good->GetBinContent(i)));
    //} else {
      //var_bad->SetBinContent(i, 0);
    //}
  //}

  //// http://root.cern.ch/root/html/tutorials/hist/twoscales.C.html
  //TCanvas* canvas = new TCanvas("canvas", "Variable badness", 10, 10, 500, 600);
  //gStyle->SetOptStat(kFALSE);

  //var_bad->Draw();
  //canvas->Update();

  //// Scale $var_good histogram to pad
  //Float_t rightmax = 1.1 * var_good->GetMaximum();
  //Float_t scale = gPad->GetUymax()/rightmax;
  //var_good->SetLineColor(kRed);
  //var_good->Scale(scale);
  //var_good->Draw("same");

  ////draw an axis on the right side
  //cout << gPad->GetUxmin() << " " << gPad->GetUxmax() << endl;
  //cout << gPad->GetUymin() << " " << gPad->GetUymax() << endl;
  //TGaxis *axis = new TGaxis(gPad->GetUxmax(), gPad->GetUymin(), gPad->GetUxmax(), gPad->GetUymax(),0,rightmax,510,"+L");
  //axis->SetLineColor(kRed);
  //axis->SetLabelColor(kRed);
  //axis->Draw();
  /******* END VARIABLE GOODNESS *******/


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

  //return;

  //const int calo_cell_id1 = 12;
  //const int calo_cell_id2 = 13;
  //canvas->Divide(1, 2);
  //canvas->cd(1);
  //TGraph* time_graph1 = new TGraph(betas[calo_cell_id1].size(), &times[calo_cell_id1][0], &betas[calo_cell_id1][0]);
  //time_graph1->Draw("AP*");
  //canvas->cd(2);
  //TGraph* time_graph2 = new TGraph(betas[calo_cell_id2].size(), &times[calo_cell_id2][0], &betas[calo_cell_id2][0]);
  //time_graph2->Draw("AP*");
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


