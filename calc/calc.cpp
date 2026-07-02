#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter an operator (+, -, *, /): ";
    char op;
    cin >> op;

    if (op == '+') {
        cout << a + b << endl;
    } else if (op == '-') {
        cout << a - b << endl;
    } else if (op == '*') {
        cout << a * b << endl;
    } else if (op == '/') {
        if (b == 0) {
            cout << "Error: cannot divide by zero" << endl;
        } else {
            cout << a / b << endl;
        }
    } else {
        cout << "Invalid operator: " << op << endl;
        return 1;
    }
    return 0;
}
