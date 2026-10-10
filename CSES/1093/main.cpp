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

const ll MOD = 1e9 + 7;

ll binpow(ll a, ll m) {
    ll ans = 1;
    a %= m;
    while (m) {
        if (m & 1) ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        m >>= 1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    ll sum = (n * (n + 1)) / 2;
    if (sum % 2 == 1) {
        cout << "0\n";
        return 0;
    }
    sum /= 2;

    vll dp(sum + 1);
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = sum; j >= i; --j) {
            dp[j] += dp[j - i];
            dp[j] %= MOD;
        }
    }

    for (auto& x : dp) cout << x << ' ';
        cout << '\n';
    cout << ((dp[sum] * binpow(2, MOD - 2)) % MOD) << '\n';

    return 0;
}

