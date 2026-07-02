#include <iostream>
#include <fstream>
using namespace std;    

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Enter a filename and optional content." << endl;
        return 1;
    }

    ofstream myfile(argv[1]);

    if (!myfile) {
        cout << "No file amigo :(" << endl;
        return 1;
    }

    for (int i = 2; i < argc; i++) {
        myfile << argv[i];
        
        if (i < argc - 1) {
            myfile << " ";
        }
    }
    myfile.close();
}
