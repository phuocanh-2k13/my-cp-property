/*#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll pref = 0;
        ll maxA = 0;
        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            if (i == 0) pref += x;
            else {
                x = max({ x, x - pref, x + pref });
                pref += x;
            }
            maxA = max(maxA, x);
        }

        cout << maxA << "\n";
    }

    return 0;
}