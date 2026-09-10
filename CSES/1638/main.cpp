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

ll solve(ll n, vector<string>& maze) {
    if (maze[0][0] == '*') return 0;

    vector<vll> dp(n + 1, vll(n + 1));
    dp[1][1] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (maze[i - 1][j - 1] != '*') {
                dp[i][j] += (dp[i - 1][j] % (ll)(1e9+7)) + (dp[i][j - 1] % (ll)(1e9+7));
                dp[i][j] %= (ll)(1e9+7);
            }
        }
    }
    return dp[n][n] % (ll)(1e9+7);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    vector<string> maze(n);
    for (auto& x : maze) cin >> x;

    cout << solve(n, maze) << '\n';

    return 0;
}

