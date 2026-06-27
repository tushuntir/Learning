#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int earth = 365;
    int xal = 364;
    int earth_days;
    earth_days = x * earth;
    int xal_years = earth_days / xal;
    int xal_days = earth_days % xal;
    cout << xal_years;
    cout << xal_days;
}