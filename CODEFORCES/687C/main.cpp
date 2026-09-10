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

void solve(int k, vi& arr) {
    vector<si> dp(k + 1);
    dp[0].insert(0);
    for (auto& x : arr) {
        for (int j = k; j >= x; j--) {
            if (!dp[j - x].empty()) {
                for (auto& y : dp[j - x]) {
                    dp[j].insert(y);
                    dp[j].insert(y + x);
                }
            }
        }
    }
    vi ans;
    for (auto& x : dp[k]) {
        ans.push_back(x);
    }

    sort(all(ans));
    cout << ans.size() << '\n';
    for (auto& x : ans) cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vi arr(n); for (auto& x : arr) cin >> x;

    solve(k, arr);

    return 0;
}

