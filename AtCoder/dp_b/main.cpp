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

ll solve(ll n, ll k, vll& arr) {
    vll dp(n + k + 1, INT_MAX);
    dp[1] = arr[0];
    for (int i = 1; i < n; i++) {
        for (int step = 1; step <= k; step++) {
            dp[i + step] = min(dp[i + step], (i != 1 ? dp[i] : 0) + abs(arr[i - 1] - arr[i + step - 1]));
        }
    }
    return dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k; cin >> n >> k;
    vll arr(n); for (auto& x : arr) cin >> x;

    cout << solve(n, k, arr) << '\n';

    return 0;
}

