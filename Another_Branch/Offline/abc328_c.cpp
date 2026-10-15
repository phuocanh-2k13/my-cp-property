#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q; cin >> n >> q;
    string s; cin >> s;
    vll pref(n);
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + (s[i - 1] == s[i]);
    }
    //for (auto& x : pref) cout << x << ' ';
    //cout << '\n';

    while (q--) {
        ll l, r; cin >> l >> r;
        cout << (pref[r - 1] - pref[l - 1]) << '\n';
    }

    return 0;
}