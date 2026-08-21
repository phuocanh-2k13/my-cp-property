#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    // if (a > b || b > a) {
    //     cout << "Odd " << ((a > b ? a : b) * 2) << '\n';
    // }
    // else if (a <= 0 && b <= 0) {
    //     cout << "Not a moose\n"; 
    // }
    // else {
    //     cout << "Even " << (a * 2) << '\n'; 
    // }
    if (!a && !b) {
        cout << "Not a moose\n"; 
    }
    else if (a == b) {
        cout << "Even " << (a * 2) << '\n'; 
    }
    else {
        cout << "Odd " << (max(a, b) * 2) << '\n';
    }

    return 0;
}