// Ha Phixah Example Templates Edited 2026-08-10
#include <algorithm>
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

ll solve(ll n, ll m, vll& arr) {
    vector<vll> dp(n, vll(m + 1));
    if (arr[0] == 0) fill(dp[0].begin() + 1, dp[0].end(), 1);
    else dp[0][arr[0]] = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == 0) {
            for (int j = 1; j <= m; j++) {
                for (auto& k : { j - 1, j, j + 1 }) {
                    if (k >= 1 && k <= m) {
                        dp[i][j] = (dp[i][j] + dp[i - 1][k]) % (ll)(1e9 + 7);
                    }
                }
            }
        }
        else {
            for (auto& k : {arr[i] - 1, arr[i], arr[i] + 1}) {
                if (k >= 1 && k <= m) dp[i][arr[i]] = (dp[i][arr[i]] + dp[i - 1][k]) % (ll)(1e9 + 7);
            }
        }
    }

    ll ans = 0;
    for (auto& x : dp[n - 1]) ans = (ans + x) % (ll)(1e9 + 7);

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m; cin >> n >> m;
    vll arr(n); for (auto& x : arr) cin >> x;

    cout << solve(n, m, arr) << '\n';

    return 0;
}

