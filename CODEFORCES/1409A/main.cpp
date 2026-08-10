#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int d = abs(a - b);
        cout << ((d + 9) / 10) << '\n';
    }

    return 0;
}