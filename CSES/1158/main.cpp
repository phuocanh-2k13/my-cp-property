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

ll solve(ll n, ll x, vll& prices, vll& page) {
    vll dp(x + 1);
    for (int p = 0; p < n; p++) {
        for (ll i = x; i >= prices[p]; i--) {
            dp[i] = max(dp[i], dp[i - prices[p]] + page[p]);
        }
    }
    return dp[x];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x; cin >> n >> x;
    vll price(n), page(n);
    for (auto& x : price) cin >> x;
    for (auto& x : page) cin >> x;

    cout << solve(n, x, price, page) << '\n';

    return 0;
}

