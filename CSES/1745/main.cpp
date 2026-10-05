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

void solve(ll n, ll sum, const vll& arr) {
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j - arr[i - 1] >= 0) dp[i][j] = (dp[i][j] || dp[i - 1][j - arr[i - 1]]);
        }
    }

    ll ans_size = 0;
    vll ans_vec;
    for (int i = 1; i <= sum; i++) {
        if (dp[n][i]) {
            ans_size++;
            ans_vec.push_back(i);
        }
    }

    cout << ans_size << '\n';
    for (auto& x : ans_vec) cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    ll nall = 0;
    vll arr(n); for (auto& x : arr) { cin >> x; nall += x; }

    solve(n, nall, arr);

    return 0;
}

