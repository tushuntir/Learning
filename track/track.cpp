#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Usage: track <category> <amount>" << endl;
        return 1;
    }

    string category = argv[1];
    string amount = argv[2];

    for (char c : amount) {
        if (!isdigit(c) && c != '.') {
            cout << "Invalid amount: " << amount << endl;
            return 1;
        }
    }

    ofstream file("expenses.csv", ios::app);
    file << category << "," << amount << endl;
    file.close();
    cout << "Tracked: " << category << " - " << amount << endl;
    return 0;
}
