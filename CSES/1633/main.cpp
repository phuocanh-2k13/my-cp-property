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

ll countSum(int n, const vector<int>& nums) {
    vector<ll> dp(n + 1);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (auto& x : nums) {
            if (i + x <= n) {
                dp[i + x] = (dp[i + x] + dp[i]) % (ll)(1e9 + 7);
            } 
        }
    }
    return dp[n] % (ll)(1e9+7);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << countSum(n, {1, 2, 3, 4, 5, 6}) << '\n';

    return 0;
}

