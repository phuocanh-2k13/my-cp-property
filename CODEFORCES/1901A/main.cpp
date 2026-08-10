#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> arr(n);
        for (auto& x : arr) cin >> x;

        int maxLit = 0;
        int lastGas = 0;
        for (int i = 0; i < (int)arr.size(); i++) {
            maxLit = max(maxLit, abs(arr[i] - lastGas));
            lastGas = arr[i];
        }
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] == lastGas) maxLit = max(maxLit, abs(lastGas - k) * 2);
            else maxLit = max(maxLit, abs(lastGas - arr[i]));
            lastGas = arr[i];
        }

        cout << maxLit << '\n';
    }

    return 0;
}