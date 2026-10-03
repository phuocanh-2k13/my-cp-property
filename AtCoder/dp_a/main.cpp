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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vi arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i]; 
    }

    vi dp(n + 2, INT_MAX);
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 1; i < n; i++) {
        dp[i + 1] = min(dp[i + 1], dp[i] + abs(arr[i] - arr[i + 1]));
        dp[i + 2] = min(dp[i + 2], dp[i] + abs(arr[i] - arr[i + 2]));
    }

    cout << dp[n] << '\n';

    return 0;
}

