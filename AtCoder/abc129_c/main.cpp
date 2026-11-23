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

        const int MOD = 1e9 + 7;

        int n, m; cin >> n >> m;
        vector<bool> broken(1e5 + 3, false);
        for (int i = 0; i < m; i++) {
            int x; cin >> x;
            broken[x] = true;
        }

        vll dp(n + 3, 0);
        dp[0] = 1;
        for (int i = 0; i < n; i++) {
            if (dp[i] == 0) continue;
            if (!broken[i + 1]) {
                if (dp[i + 1] == INT_MIN) dp[i + 1] = dp[i] + 1;
                else dp[i + 1] += dp[i];
                dp[i + 1] %= MOD;
            }
            if (!broken[i + 2]) {
                if (dp[i + 2] == INT_MIN) dp[i + 2] = dp[i] + 1;
                else dp[i + 2] += dp[i];
                dp[i + 2] %= MOD;
            }
        }

        //for (auto& x : dp) cout << x << ' ';
        //    cout << '\n';
        cout << dp[n] << '\n';
        return 0;
    }

