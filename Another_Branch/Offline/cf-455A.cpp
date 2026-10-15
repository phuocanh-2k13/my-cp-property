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
    vll count(1e5 + 2, 0);
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        count[tmp]++;
    }

    vll dp(1e5 + 2, 0);
    dp[1] = count[1];
    for (int i = 2; i <= 1e5; i++) {
        ll if_skip = dp[i - 1];
        ll if_take = dp[i - 2] + count[i] * i;
        dp[i] = max(if_skip, if_take);
    }

    cout << dp[1e5] << '\n';

    return 0;
}