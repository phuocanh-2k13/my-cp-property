#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto& x : arr) cin >> x;

        sort(arr.begin(), arr.end());
        bool isYes = true;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] > 1) {
                isYes = false;
                break;
            }
        }

        cout << (isYes ? "YES\n" : "NO\n");
    }

    return 0;
}