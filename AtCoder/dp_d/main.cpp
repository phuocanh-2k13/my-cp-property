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

ll knapsack(int n, int w, vi& wt, vi& val) {
    vll dp(w + 1, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = w; j >= wt[i - 1]; j--) {
            dp[j] = max(dp[j], val[i - 1] + dp[j - wt[i - 1]]);
        }
    }
    return dp[w];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w; cin >> n >> w;
    vi wt(n), val(n); for (int i = 0; i < n; i++) cin >> wt[i] >> val[i];
    cout << knapsack(n, w, wt, val) << '\n';

    return 0;
}

