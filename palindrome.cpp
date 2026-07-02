#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    string text;

    if (argc < 2) {
        getline(cin, text);
    } else {
        text = argv[1];
    }

    string reversedText = text;
    reverse(reversedText.begin(), reversedText.end());

    if (reversedText == text) {
        cout << "The word " << text << " is a palindrome";
    } else {
        cout << "It is not a palindrome";
    }
}