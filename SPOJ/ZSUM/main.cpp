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

const ll MOD = 10000007 ;

ll binpow(ll a, ll b) {
    a %= MOD;
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    while ((cin >> n >> k) && n && k) {
        ll ans_a = binpow(n, k) + binpow(n, n);
        ll ans_b = binpow(n - 1, k) + binpow(n - 1, n - 1);
        ans_b = (ans_b * 2) % MOD;
        ll ans = ans_a + ans_b;
        ans %= MOD;
        cout << ans << '\n';
    }

    return 0;
}

