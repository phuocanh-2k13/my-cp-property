#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<string> inp(n); for (auto& x : inp) cin >> x;
    vector<vector<int>> pref(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            bool is_square = inp[i - 1][j - 1] == '.' && 
                             inp[i][j] == '.' && 
                             inp[i - 1][j] == '.' &&
                             inp[i][j - 1] == '.';
                
            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + is_square;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != n && j != n) continue;
            if (i == n) pref[i][j] = pref[i - 1][j];
            if (j == n) pref[i][j] = pref[i][j - 1];
        }
    }

    while (q--) {
        int u, d, l, r;
        cin >> u >> d >> l >> r;
        cout << (pref[d - 1][r - 1] - pref[d - 1][l - 1] - pref[u - 1][r - 1] + pref[u - 1][l - 1]) << '\n';
    }

    return 0;
}