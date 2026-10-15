#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const ll MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, k; cin >> q >> k;
    vll dp(5005);
    dp[0] = 1;
    while (q--) {
        char t; cin >> t;
        int x; cin >> x;
        if (t == '+') {
            for (int i = k; i >= x; i--) {
                dp[i] += dp[i - x];
                dp[i] %= MOD;
            }
        }
        else {
            for (int i = x; i <= k; i++) {
                dp[i] += (MOD - dp[i - x]);
                dp[i] %= MOD;
            }
        }

        cout << dp[k] << '\n';
    }

    return 0;
}