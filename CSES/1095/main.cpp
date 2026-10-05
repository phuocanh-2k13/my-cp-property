// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define si unordered_set<int>
#define sll unordered_set<long long>

#define mi unordered_map<int, int>
#define mll unordered_map<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        if (a == 0 && b == 0) cout << 1 << '\n';
        else {
            ll ans = 1;
            a %= (ll)(1e9+7);
            while (b > 0) {
                if (b & 1) {
                    ans = (ans * a) % (ll)(1e9+7);
                }
                a = (a * a) % (ll)(1e9+7);
                b >>= 1;
            }
            cout << ans << '\n';
        }
    }

    return 0;
}

