// C++
#include <iostream>

// Root
#include <TApplication.h>
#include <TH2.h>
#include <TChain.h>
#include <TStyle.h>
#include <TCanvas.h>

// Custom
// #include "DataClass.h"

using namespace std;


void load_data() {
  TChain chain("llp");

  // Add files
  // chain.Add("Data/*.root");
  chain.Add("Data/*001.llp.root"); // Test load only first file

  // Disable unused branches
  chain.SetBranchStatus("*", 0); // Disable all branches
  chain.SetBranchStatus("mu_muid*", 1); // Enable branches of interest

  // Make .h and .cpp file
  // chain.MakeClass("DataClass");

  long long int entry_count = chain.GetEntries();
  cout << entry_count << endl;

  chain.Show(0); // Show values of an Entry $i

  // vector<float>* mu_muid_x = 0;
  // vector<float>* temp = 0;
  // vector<float>* temp = 0;
  // chain.SetBranchAddress("mu_muid_pt", &temp);


  int j = 0; // This was just to check whether we actually iterate through all Entries - and we do! (see line 46)


  // NOTE: This takes quite a while: 3.68 GiB of data has to seep through this
  //       code.
 
  for (int i = 0; i < entry_count; i++) {
    // int itree = chain.LoadTree(i); // Load the tree containing Entry $i - this doesn't make sense - why doesn't GetEntry do this
    // if (itree == NULL) { cout << "fail" << endl; break; }
    chain.GetEntry(i); // GetEntry returns number of bytes read

    // cout << (*temp).size() << endl;
    j++;
  }
  cout << j << endl; // j == entry_count == 60699

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
