#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: cipher <message>" << endl;
        return 1;
    }

    string message = argv[1];

    for (char &c : message) {
        if (c >= 'a' && c <= 'z') {
            c = 'a' + (c - 'a' + 3) % 26;
        } else if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + 3) % 26;
        }
    }

    cout << message << endl;
    return 0;
}
