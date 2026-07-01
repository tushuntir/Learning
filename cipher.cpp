#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please enter a phrase (cipher something)" << endl;
        return 1;
    } 
    
    string message = argv[1];
    
    for (char &c : message) {
        c = c + 3;
        cout << c; // Prints each character as it encrypts
    }
    
    cout << endl; // Drops the terminal down to a new line when finished!
}