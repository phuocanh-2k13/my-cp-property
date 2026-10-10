// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <iomanip>
#include <ios>
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

#define vld vector<long double>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vld p(n); for (auto& x : p) cin >> x;

    vector<vld> dp(n + 1, vld(n + 1));
    for (int i = 0; i <= n; i++) dp[i][0] = 1;

    int minHead = (n / 2) + 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= minHead; j++) {
            dp[i][j] = dp[i - 1][j - 1] * p[i - 1] + dp[i - 1][j] * (1.0 - p[i - 1]);
        }
    }
    cout << fixed << setprecision(10) << dp[n][minHead] << '\n';


    return 0;
}

