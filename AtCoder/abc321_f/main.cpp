// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define si unordered_set<int>
#define sll unordered_set<long long>

#define mi unordered_map<int, int>
#define mll unordered_map<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, k; cin >> q >> k;
    vll dp(k + 1); dp[0] = 1;
    while (q--) {
        char op; cin >> op;
        int x; cin >> x;
        if (op == '+') {
            for (int i = k; i >= x; i--) {
                dp[i] += dp[i - x];
                dp[i] %= 998244353;
            }
        }
        else if (op == '-') {
            for (int i = x; i <= k; i++) {
                dp[i] = (dp[i] - dp[i - x] + 998244353) % 998244353;
                dp[i] %= 998244353;
            }
        }
        cout << dp[k] << '\n';
    }

    return 0;
}

