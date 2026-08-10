#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<char> arr(n);
        for (auto& x : arr) cin >> x;

        int l = 0, r = n - 1, ans = n;
        while (arr[l] != arr[r] && ans > 0) {
            r--; 
            l++;
            ans -= 2;
        }

        cout << (ans) << '\n';

    }

    return 0;
}