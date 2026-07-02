#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;
    cout << "Enter an operator (+, -, *, /): ";
    char op;
    cin >> op;
    if (op == '+') {
        cout << a + b << endl;
    }
    else if (op == '-') {
        cout << a - b << endl;
    }
    else if (op == '/') {
        if (b == 0) {
            cout << "Error: cannot divide by zero" << endl;
        } else {
            cout << a / b << endl;
        }
    }
    else if (op == '*') {
        cout << a * b << endl;
    }
    
}
