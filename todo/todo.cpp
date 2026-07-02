#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string text;
    cout << "Enter a word or phrase: ";
    getline(cin, text);

    string cleaned;
    for (char c : text) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }

    string reversedText = cleaned;
    reverse(reversedText.begin(), reversedText.end());

    if (reversedText == cleaned) {
        cout << "Palindrome!" << endl;
    } else {
        cout << "Not a palindrome." << endl;
    }
    return 0;
}
