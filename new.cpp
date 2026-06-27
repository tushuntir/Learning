#include <bits/stdc++.h>
using namespace std;

int main() {
    int users[6] = {1,2,3,4,5,5};
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += users[i];
    }
    cout << sum;
}
