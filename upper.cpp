#include <iostream>
using namespace std;
int main(int argh, char* argv[]) {
    if (argh < 2) {
        cout << "Enter a phrase. " << endl;
    }
    for (int i = 1; i < argh; i++) {
        string word = argv[i];

        for (char &c : word) {
            c = toupper(c);
            }

        cout << word << " ";
    }
    cout << "!";
}