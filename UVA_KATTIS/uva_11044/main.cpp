#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        n /= 3;
        m /= 3;
        cout << (n * m) << '\n';
    }

    return 0;
}