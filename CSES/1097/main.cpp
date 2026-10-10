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
    ll sum = 0;
    vi x(n); for (auto& v : x) { cin >> v; sum += v; }

    vector<vll> dp(n, vll(n));
    for (int l = n - 1; l >= 0; l--) {
        for (int r = l; r < n; r++) {
            if (l == r) dp[l][r] = x[l];
            else {
                dp[l][r] = max(x[l] - dp[l + 1][r], x[r] - dp[l][r - 1]);
            }
        }
    }

    cout << (dp[0][n - 1] + sum) / 2 << '\n';

    return 0;
}

