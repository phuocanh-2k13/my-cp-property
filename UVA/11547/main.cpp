#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        n = (((n * 567 / 9) + 7492) * 235 / 47) - 498;
        n = n / 10;
        int d = abs(n % 10);
        cout << d << '\n';
    }

    return 0;
}