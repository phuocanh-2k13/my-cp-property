#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

pair<ll, ll> extract(ll n) {
    ll tmp1 = n, tmp2 = n;
    ll pow1 = 0, pow2 = 0;
    while (tmp1 % 2 == 0 && tmp1 > 0) {
        tmp1 /= 2;
        pow1++;
    }
    while (tmp2 % 5 == 0 && tmp2 > 0) {
        tmp2 /= 5;
        pow2++;
    }
    return { pow1, pow2 };
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vector<vll> dp(k + 1, vll(5005, -1));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        auto [pow2, pow5] = extract(x);

        for (int j = k; j > 0; j--) {
            for (int t = 5000; t >= pow5; t--) {
                if (dp[j - 1][t - pow5] != -1) {
                    dp[j][t] = max(dp[j][t], dp[j - 1][t - pow5] + pow2);
                }
            }
        }
    }

    ll maxChosen = -1;
    for (ll i = 0; i <= 5000; i++) {
        if (dp[k][i] != -1) {
            maxChosen = max(maxChosen, min(i, dp[k][i]));
        }
    }

    cout << maxChosen << '\n';

    return 0;
}