#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "please enter a valid ip address (192.168.1.1)";
        return 1;
    }
    string ip  = argv[1];
    int dotCount = 0;
    bool hasInvalidChar = false;

    for (char &c : ip) {
        if (c == '.') {
            dotCount++;
        }
        else if (isalpha(c)) {
            hasInvalidChar = true;
        }
    }
    if (dotCount == 3 && !hasInvalidChar) {
        cout << "Valid ip format!" << endl;
    }
    else {
        cout << "Invalid ip format" << endl;
    }
    return 0;

}