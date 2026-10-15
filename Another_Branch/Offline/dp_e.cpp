#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    ll W; cin >> W;

    vll w(N);
    vll v(N);
    ll total = 0;
    for (int i = 0; i < N; i++) { cin >> w[i] >> v[i]; total += v[i]; }

    vll dp(total + 1, 1e18);
    dp[0] = 0;
    for (int i = 0; i < N; i++) {
        for (ll j = total; j >= 0; j--) {
            if (dp[j] + w[i] <= W) {
                dp[j + v[i]] = min(dp[j + v[i]], dp[j] + w[i]);
            }
        }
    }

    for (ll i = total; i >= 0; i--) {
        if (dp[i] != 1e18) {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}