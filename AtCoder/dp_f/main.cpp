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

    string s, t; cin >> s >> t;
    vector<vi> dp(s.size() + 1, vi(t.size() + 1));

    int n = s.size(), m = t.size();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    string ans;
    while (n && m) {
        if (s[n - 1] == t[m - 1]) {
            ans += s[n - 1];
            n--;
            m--;
        }
        else if (dp[n][m - 1] > dp[n - 1][m]) {
            m--;
        }
        else {
            n--;
        }
    }

    reverse(all(ans));
    cout << ans << '\n';

    return 0;
}

