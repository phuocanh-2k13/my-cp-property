#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, w;
        cin >> n >> w;
        int fences = n / w;
        cout << (n - fences) << '\n';
    }

    return 0;
}