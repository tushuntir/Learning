#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please provide a file (check yourfile.exe)";
        return 1;
    }
    ifstream myfile(argv[1]);
    if (myfile) {
        cout << "File found!";
    }
    else {
        cout << "File not found";
    }
}