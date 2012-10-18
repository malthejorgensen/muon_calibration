// C++
#include <iostream>
#include <fstream>
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

using namespace std;

double sqr(double x) {
  return x*x;
}

void hist2D() {

  const int sampling_count = 21;
  const int E_bin_count = 20;

  vector< vector<double> > count(sampling_count);
  vector< vector<double> > sum(sampling_count);
  vector< vector<double> > sum_sq(sampling_count);

  vector<double> cross_count(E_bin_count);
  vector<double> bin_lower(E_bin_count);
  vector<double> bin_upper(E_bin_count);

  for (int j = 0; j < sampling_count; j++) {
    count[j] = vector<double>(E_bin_count, 0);
    sum[j] = vector<double>(E_bin_count, 0);
    sum_sq[j] = vector<double>(E_bin_count, 0);
  }

  const double max_energy = 2000;

  for (int i = 0; i < E_bin_count; i++) {
    double a = 400;
    double b = log((max_energy)/a) / (E_bin_count);
    bin_lower[i] = a*exp(b*i);
    //cout << exp(10 + 0.001519i) << endl;
    bin_upper[i] = a*exp(b*(i+1));

    //bin_lower[i] = 1000*i;
    //bin_upper[i] = 1000*(i+1);
  }
  bin_lower.push_back(bin_upper.back());

  int total = 0;

  ifstream f("data.txt");

  while (!f.eof()) {

    int RunNumber, EventNumber;
    int timestamp, timestamp_ns;
    double pt, px, py, pz, beta;
    double CaloCell_sampling, CaloCell_eta, CaloCell_phi, CaloCell_dr;
    double CaloCell_E, CaloCell_t, CaloCell_x, CaloCell_y, CaloCell_z;
    double beta_calc;


    f   >> RunNumber
        >> EventNumber
        >> timestamp
        >> timestamp_ns
        >> pt
        >> px
        >> py
        >> pz
        >> beta
        >> CaloCell_sampling
        >> CaloCell_eta
        >> CaloCell_phi
        >> CaloCell_dr
        >> CaloCell_E
        >> CaloCell_t
        >> CaloCell_x
        >> CaloCell_y
        >> CaloCell_z
        >> beta_calc;

    if (8 <= CaloCell_sampling && CaloCell_sampling <= 11) { continue; }


    for (int i = 0; i < E_bin_count; i++) {
      if (bin_lower[i] < CaloCell_E && CaloCell_E < bin_upper[i]) {
        count[CaloCell_sampling][i]++;
        sum[CaloCell_sampling][i] += CaloCell_t;
        sum_sq[CaloCell_sampling][i] += sqr(CaloCell_t);
        cross_count[i]++;
        total++;
        break;
      }
    }
  }
  cout << total << endl;



  //TH2F* rms_hist = new TH2F("RMS histogram", "RMS histogram", sampling_count, -0.5, 20.5, E_bin_count, &bin_lower[0]);
  TH2F* rms_hist = new TH2F("RMS histogram", "RMS histogram", sampling_count, -0.5, 20.5, E_bin_count, -0.5, E_bin_count - 0.5);


  vector<double> energy_rms_count(E_bin_count, 0);
  vector<double> energy_rms_sum(E_bin_count, 0);

  for (int j = 0; j < sampling_count; j++) {
    for (int i = 0; i < E_bin_count; i++) {
      if (count[j][i] > 0) {
        double average = sum[j][i] / count[j][i];
        double RMS = sqrt(sum_sq[j][i] / count[j][i] - sqr(average));
        energy_rms_count[i]++;
        energy_rms_sum[i] += RMS;
        //cout << RMS << endl;
        //rms_hist->Fill(j, i, count[j][i]);
        rms_hist->Fill(j, i, RMS);
      } else {
        //cout << j << " " << i << endl;
      }
    }
  }


  for (int i = 0; i < E_bin_count; i++) {
    cout << i << " " << bin_lower[i] << " " << bin_upper[i] << " " << cross_count[i] << " " << energy_rms_sum[i]/energy_rms_count[i] << endl;

    //bin_lower[i] = 1000*i;
    //bin_upper[i] = 1000*(i+1);
  }

  rms_hist->Draw("LEGO2");
  rms_hist->GetXaxis()->SetTitle("sampling");
  rms_hist->GetYaxis()->SetTitle("energy");
  //gPad->SetLogx();


}

int main(int argc, char* argv[]) {

  // Needed for graphs
  TApplication app("root", &argc, argv);

  hist2D();

  cout << "Main program done, the program stays open to display graphs and such." << endl;
  cout << "(Ctrl-C to close)" << endl;
  app.Run();


  return 0;
}
