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

ll solve(int n, int w, vector<pi>& arr) {
    vector<vll> dp(n + 1, vll(w + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= w; j++) {
            if (j < arr[i].first) dp[i][j] = max(0LL, dp[i - 1][j]);
            else {
                dp[i][j] = max(dp[i - 1][j], arr[i].second + dp[i - 1][j - arr[i].first]);
            }
        }
    }

    return dp[n][w];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w; cin >> n >> w;
    vector<pi> arr(n + 1);
    for (int i = 1; i <= n; i++) cin >> arr[i].first >> arr[i].second;

    cout << solve(n, w, arr) << '\n';

    return 0;
}

