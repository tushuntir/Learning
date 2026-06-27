#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Enter a word. (echo WORD)";
        return 1;
    }
    for (int i = 1; i < argc; i++) {
        cout << argv[i]<< " ";
    }
    cout << endl;
}