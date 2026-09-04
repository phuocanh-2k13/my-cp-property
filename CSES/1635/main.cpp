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

ll countComb(ll x, vll& coins) {
    vll dp(x + 1); dp[0] = 1;
    for (int i = 0; i < x; i++) {
        if (!dp[i]) continue;
        for (auto& c : coins) {
            if (i + c <= x) {
                dp[i + c] = (dp[i + c] + dp[i]) % (ll)(1e9+7);
            }
        }
    }
    return dp[x] % (ll)(1e9+7);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x; cin >> n >> x;
    vll coins(n); for (auto& v : coins) cin >> v;

    cout << countComb(x, coins) << '\n';

    return 0;
}

