#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vll boys(n); for (auto& x : boys) cin >> x;
    int m; cin >> m;
    vll girls(m); for (auto& x : girls) cin >> x;

    sort(all(boys));
    sort(all(girls));

    vector<vll> dp(n + 1, vll(m + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            if (abs(boys[i - 1] - girls[j - 1]) <= 1) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            }
        }
    }

    cout << dp[n][m] << '\n';

    return 0;
}