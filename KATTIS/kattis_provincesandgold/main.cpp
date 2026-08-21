#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    a *= 3;
    b *= 2;
    c *= 1;
    int buyingPoint = a + b + c;

    if (buyingPoint >= 8) {
        cout << "Province or Gold\n"; 
    }
    else if (buyingPoint >= 6) {
        cout << "Duchy or Gold\n";
    }
    else if (buyingPoint >= 5) {
        cout << "Duchy or Silver\n";
    }
    else if (buyingPoint >= 3) {
        cout << "Estate or Silver\n";
    }
    else if (buyingPoint >= 2) {
        cout << "Estate or Copper\n";
    }
    else {
        cout << "Copper\n";
    }


    return 0;
}