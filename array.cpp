#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    vector<int> numbers;
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter number " << (i + 1) << ": ";
        cin >> value;
        numbers.push_back(value);
    }
    int sum = 0;
    int minVal = [0];
    int maxVal = [0];

    for (int i = 0; i < n; i++) {
        sum += numbers[i];
        if (numbers[i] < minVal) {
            minVal = numbers[i];
        } 
        if (maxVal > numbers[i]) {
            maxVal = numbers[i];
        } 
    }
    cout << "Sum: " << sum << endl;
    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;
    return 0;
}