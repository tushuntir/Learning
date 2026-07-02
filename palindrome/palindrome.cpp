#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(int argc, char* argv[]) {
    string text;

    if (argc < 2) {
        getline(cin, text);
    } else {
        text = argv[1];
    }

    string cleaned;
    for (char c : text) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }

    string reversedText = cleaned;
    reverse(reversedText.begin(), reversedText.end());

    if (reversedText == cleaned) {
        cout << "The text is a palindrome." << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }
    return 0;
}
