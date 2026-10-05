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

const ll MOD = 10;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        if (a == 0 && b == 0) cout << 1 << '\n';
        else {
            ll res = 1;
            a %= MOD;
            while (b > 0) {
                if (b & 1) {
                    res = (res * a) % MOD;
                }
                a = (a * a) % MOD;
                b >>= 1;
            }
            cout << res << '\n';
        }
    }

    return 0;
}

