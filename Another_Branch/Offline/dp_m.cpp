#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const ll MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vll dp_curr(k + 1), dp_prev(k + 1);
    dp_curr[0] = 1;
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        for (int j = 1; j <= k; j++) {
            dp_curr[j] = dp_curr[j] + dp_curr[j - 1];
            if (dp_curr[j] >= MOD) dp_curr[j] -= MOD;
        }
        for (int j = 0; j <= k; j++) {
            dp_prev[j] = dp_curr[j] - (j > a ? dp_curr[j - a - 1] : 0);
            dp_prev[j] += MOD;
            dp_prev[j] %= MOD;
        }
        swap(dp_curr, dp_prev);
    }

    cout << dp_curr[k] << '\n';

    return 0;
}