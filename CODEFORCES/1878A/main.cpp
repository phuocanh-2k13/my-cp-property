#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, target;
        cin >> n >> target;
        bool isOk = false;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x == target) {
                isOk = true;
            }
        }

        cout << (isOk ? "YES\n" : "NO\n");
    }

    return 0;
}