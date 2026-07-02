#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Enter the value correct" << endl;
        return 1;
    }
    string category = argv[1];
    string amount = argv[2];
    ofstream file("expenses.csv", ios::app);
    file << category << "," << amount << endl;
    file.close();
}