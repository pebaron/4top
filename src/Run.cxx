#include "Delphes.h"
//#include "nominal.cpp"
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TString.h"
#include "TLorentzVector.h"
#include "TROOT.h"
#include "math.h"
#include <iostream>  
#include "TApplication.h"
#include <stdlib.h>
using namespace std;

int main (int argc, char *argv[]) { 
    TString MyInput("/home/petr/4top/rootfiles/y0tt_hadr/tag_1_delphes_events.root"), MyTree("Delphes"), MyOutput("out.root");
    int MyNEvents = 0;

    TApplication theApp("App",&argc, argv);
    if (argc > 1){
        TString argv1 = argv[1];
        TString argv2 = argv[2];
        TString argv3 = argv[3];
        TString argv4 = argv[4];

        argv1 = argv1 + ".root";
        argv2 = argv2 + ".root";

        cout << "argv[1]: " << argv1.Data() << endl;
        cout << "argv[2]: " << argv2.Data() << endl;
        cout << "argv[3]: " << argv3.Data() << endl;
        cout << "argv[4]: " << argv4.Data() << endl;
        cout << "--------------" << endl;
        MyInput = argv1.Data();
        MyOutput = argv2.Data();
        MyNEvents = (int)strtol(argv[3], NULL, 10);
        MyTree = argv4.Data();
        cout << "MyInput: " << MyInput.Data() << endl;
        cout << "MyOutput: " << MyOutput.Data() << endl;
        cout << "MyNEvents: " << MyNEvents << endl;
        cout << "MyTree: " << MyTree.Data() << endl;
    }
    Delphes * t = new Delphes(0, MyInput, MyTree, "");
    t->Loop(MyOutput, MyTree, MyNEvents);
    //theApp.Run();
    return 0;
    
 } 