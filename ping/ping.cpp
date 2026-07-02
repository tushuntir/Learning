#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isValidOctet(const string& s) {
    if (s.empty() || s.length() > 3) return false;
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    int val = stoi(s);
    return val >= 0 && val <= 255;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: ping <ip-address>" << endl;
        return 1;
    }

    string ip = argv[1];
    int dotCount = 0;
    for (char c : ip) {
        if (c == '.') dotCount++;
    }

    if (dotCount != 3) {
        cout << "Invalid IP format" << endl;
        return 1;
    }

    stringstream ss(ip);
    string octet;
    int parts = 0;
    while (getline(ss, octet, '.')) {
        if (!isValidOctet(octet)) {
            cout << "Invalid IP format" << endl;
            return 1;
        }
        parts++;
    }

    if (parts != 3) {
        cout << "Invalid IP format" << endl;
        return 1;
    }

    cout << "Valid IP format!" << endl;
    return 0;
}
