#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;
    for (int i=2; i < 11; i++) {
        cout << num * i << endl;
    }
}