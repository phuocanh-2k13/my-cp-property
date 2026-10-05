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

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<vector<char>> arr(n + 1, vector<char>(n + 1));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> arr[i][j];
            }
        }

        vector<vector<char>> ans(n/k, vector<char>(n/k));
        for (int i = 1; i <= n; i += k) {
            for (int j = 1; j <= n; j += k) {
                ans[(i - 1) / k][(j - 1) / k] = arr[i][j];
            }
        }

        for (auto& x : ans) {
            for (auto& y : x) cout << y;
            cout << '\n';
        }
    }

    return 0;
}

