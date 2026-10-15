#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const ll MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x; cin >> n >> x;
    vll c(n); for (auto& v : c) cin >> v;
    sort(all(c));

    vll dp(x + 1);
    dp[0] = 1;
    for (auto& v : c) {
        for (int i = 0; i <= x - v; i++) {
            if (dp[i] > 0) {
                dp[i + v] += dp[i];
                if (dp[i + v] >= MOD) dp[i + v] -= MOD;
            }
        }
    } 

    cout << dp[x] << '\n';
    
    return 0;
}