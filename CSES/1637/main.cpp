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

ll solve(ll n) {
    vll dp(n + 1, 1e18);
    dp[n] = 0;
    for (ll i = n; i > 0; i--) {
        if (dp[i] == 1e18) continue;

        ll temp = i;
        while (temp != 0) {
            int getDigit = temp % 10;
            temp /= 10;

            if (!getDigit) continue;
            if (i - getDigit < 0) continue;

            dp[i - getDigit] = min(dp[i - getDigit], dp[i] + 1);
        }
    }
    return dp[0];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    cout << solve(n) << '\n';

    return 0;
}

