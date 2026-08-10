#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int maxNum = 0;
        int maxIdx = 0;
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            if (a <= 10) {
                if (maxNum < b) {
                    maxIdx = i + 1;
                    maxNum = b;
                }
            }
        }

        cout << maxIdx << '\n';
    }

    return 0;
}