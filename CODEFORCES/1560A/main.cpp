#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool isdoub = false;
        int k = 0;
        for (int i = 0; i < n; i++) {
            k++;
            while (k % 10 == 3 || k % 3 == 0) {
                k++;
            }
        }

        cout << k << '\n';
    }

    return 0;
}