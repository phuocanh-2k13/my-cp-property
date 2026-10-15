#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c; cin >> n >> a >> b >> c;
    vll dp(n + 1, -1);
    dp[0] = 0;
    for (int i = 0; i <= n; i++) {
        if (dp[i] == -1) continue;

        if (i + a <= n) dp[i + a] = max(dp[i] + 1, dp[i + a]);
        if (i + b <= n) dp[i + b] = max(dp[i] + 1, dp[i + b]);
        if (i + c <= n) dp[i + c] = max(dp[i] + 1, dp[i + c]);
    }

    cout << dp[n] << '\n';

    return 0;
}