#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
     string text;
     // string reversed ="";
     getline(cin, text);
     // for (int i = text.length() - 1; i >= 0; i--) {
     //     reversed += text[i];
     // }
     // cout <<  reversed;
     reverse(text.begin(), text.end());
     cout << text;
}