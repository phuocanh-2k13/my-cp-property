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

    int n, q; cin >> n >> q;
    vector<string> input(n);
    for (auto& x : input) cin >> x;

    vector<vll> pref(n + 1, vll(n + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            pref[i][j] = pref[i - 1][j] 
                       + pref[i][j - 1] 
                       - pref[i - 1][j - 1] 
                       + (input[i - 1][j - 1] == '*' ? 1 : 0);
        }
    }

    while (q--) {
        int start_i, start_j, end_i, end_j;
        cin >> start_i >> start_j >> end_i >> end_j;

        ll ans = pref[end_i][end_j]
               - pref[start_i - 1][end_j]
               - pref[end_i][start_j - 1]
               + pref[start_i - 1][start_j - 1];

        cout << ans << '\n';
    }

    return 0;
}

