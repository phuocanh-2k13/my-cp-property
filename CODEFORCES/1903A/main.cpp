#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (auto& x : arr) cin >> x;

        if (k == 1) {
            if (is_sorted(arr.begin(), arr.end())) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            cout << "YES\n";
        }
        
    }

    return 0;
}