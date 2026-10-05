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

ll solve(vector<vi>& arr) {
    vector<vi> dp(arr.size(), vi(3));
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];
    for (int i = 1; i < arr.size(); i++) {
        dp[i][0] = arr[i][0] + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = arr[i][1] + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = arr[i][2] + max(dp[i - 1][1], dp[i - 1][0]);
    }
    return max({dp[arr.size() - 1][0], dp[arr.size() - 1][1], dp[arr.size() - 1][2]});
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<vi> arr(n, vi(3));
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2]; 
    }

    cout << solve(arr) << '\n';

    return 0;
}

