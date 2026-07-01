#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    string text;
    text = argv[1];
    if (argc < 1) {
        getline(cin, text);
    }
    string reversedText = text;
    
    reverse(reversedText.begin(), reversedText.end());
    if (reversedText == text) {
        cout << "The word " << text << " is palendrome";
    } else {
        cout << "It is not palendrome";
    }
}