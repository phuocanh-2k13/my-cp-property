#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int grOfOne = 0, grOfTwo = 0, grOfThree = 0, grOfFour = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 1) grOfOne++;
        else if (x == 2) grOfTwo++;
        else if (x == 3) grOfThree++;
        else grOfFour++;
    }

    int numbOfCar = 0;
    if (grOfThree >= grOfOne) {
        numbOfCar = grOfThree;
        grOfOne = 0;
    }
    else {
        numbOfCar = grOfThree;
        grOfOne -= grOfThree;
        numbOfCar += grOfOne / 4;
        grOfOne %= 4;
    }

    numbOfCar += ceil((grOfOne + grOfTwo * 2) / (double)4.0);
    numbOfCar += grOfFour;

    cout << numbOfCar << '\n';

    return 0;
}