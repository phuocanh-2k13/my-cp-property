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

const ll MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w; cin >> h >> w;
    vector<string> maze(h);
    for (auto& x : maze) cin >> x;

    if (maze[0][0] == '#' || maze[h - 1][w - 1] == '#') {
        cout << 0 << '\n';
        return 0;
    }

    vector<vll> dp(h + 1, vll(w + 1));
    dp[1][1] = 1;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (maze[i - 1][j - 1] == '#') dp[i][j] = 0;
            else {
                dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
                dp[i][j] %= MOD; 
            } 
        }
    }

    cout << dp[h][w] << '\n';

    return 0;
}

