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

void easy_load() {

  ifstream f("data.txt");

  while (!f.eof()) {

    int RunNumber, EventNumber;
    int timestamp, timestamp_ns;
    double pt, px, py, pz, beta;
    double CaloCell_sampling, CaloCell_eta, CaloCell_phi, CaloCell_dr;
    double CaloCell_E, CaloCell_x, CaloCell_y, CaloCell_z;
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
        >> CaloCell_x
        >> CaloCell_y
        >> CaloCell_z
        >> beta_calc;

    cout << beta_calc;
  }

}

int main(int argc, char* argv[]) {

  // Needed for graphs
  TApplication app("root", &argc, argv);

  easy_load();

  cout << "Main program done, the program stays open to display graphs and such." << endl;
  cout << "(Ctrl-C to close)" << endl;
  app.Run();


  return 0;
}
