#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vll arr(n); for (auto& x : arr) cin >> x;
    vll dp(k + 1);
    for (int i = 1; i <= k; i++) {
        for (auto& x : arr) {
            if (i >= x && dp[i - x] != 1) {
                dp[i] = 1;
            }
        }
    }

    if (dp[k]) cout << "First\n";
    else cout << "Second\n";

    return 0;
}