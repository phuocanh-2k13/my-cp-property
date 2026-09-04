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

ll solve(ll tg, vll& arr) {
    vll dp(tg + 1, 1e18);
    dp[0] = 0;
    for (int i = 0; i < tg; i++) {
        if (dp[i] == 1e18) continue;
        for (auto& x : arr) {
            if (i + x <= tg) {
                dp[i + x] = min(dp[i + x], dp[i] + 1);
            }
        }
    }
    return dp[tg] == 1e18 ? -1 : dp[tg];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x; cin >> n >> x;
    vll arr(n); for (auto& v : arr) cin >> v;

    cout << solve(x, arr) << '\n';

    return 0;
}

