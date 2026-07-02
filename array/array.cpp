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
    int minVal = numbers[0];
    int maxVal = numbers[0];

    for (int i = 0; i < n; i++) {
        sum += numbers[i];
        if (numbers[i] < minVal) {
            minVal = numbers[i];
        }
        if (numbers[i] > maxVal) {
            maxVal = numbers[i];
        }
    }
    cout << "Sum: " << sum << endl;
    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;
    return 0;
}
