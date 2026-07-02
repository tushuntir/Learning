#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: upper <phrase>" << endl;
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        string word = argv[i];
        for (char &c : word) {
            c = toupper(c);
        }
        if (i > 1) cout << " ";
        cout << word;
    }
    cout << endl;
    return 0;
}
