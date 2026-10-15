#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const ll LCM = 2520;
const ll MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    vll arr(n); for (auto& x : arr) cin >> x;

    vll dp(2520, 0);
    dp[1] = 1;
    for (int i = 0; i < n; i++) {
        vll new_dp = dp;
        ll val = arr[i] % LCM;
        for (int r = 0; r < LCM; r++) {
            if (dp[r]) {
                ll new_r = (r * val) % LCM;
                new_dp[new_r] = (new_dp[new_r] + dp[r]) % MOD;
            }
        } 
        dp = new_dp;
    }

    cout << dp[0] << '\n';  

    return 0;
}