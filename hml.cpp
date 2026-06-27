#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 2) {cout << "Enter a file. (hml yourfile.txt)";
    return 1;};
    ifstream file(argv[1]);
    if (!file) {
        cout << "Could not open file" << endl;
        return 1;
    }
    string line;
    int count = 0;
    while (getline(file, line)) {
        count++;
    }
    cout << "Number of lines are: " << count;
}