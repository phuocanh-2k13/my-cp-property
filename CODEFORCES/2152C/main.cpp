#include <bits/stdc++.h>
using namespace std;
 
// Template Optimize from Hà Phixah (phixah_vn) 27/07/2026
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

// Template Debug from Hà Phixah (phixah_vn) 29/07/2026
#pragma GCC diagnostic warning "-Wall"
#pragma GCC diagnostic warning "-Wextra"

// I don't even remember the day when i write this, :)
#define ll long long int

// Template Alias from Hà Phixah (phixah_vn) 28/07/2026
#define vi vector<int>
#define vii vector<vector<int>>
#define vl vector<ll>
#define vll vector<vector<ll>>

#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>

#define pi pair<int, int>
#define pll pair<ll, ll>

#define vpi vector<pi>
#define vpll vector<pll>

// Template shortcut select VECTOR from Hà Phixah (phixah_vn) 28/07/2026
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

// Template CONSTANT (28/07/2026)
constexpr int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        vi arr(n + 1); for (int i = 1; i <= n; i++) cin >> arr[i]; 

        vii pref(2, vi(n + 1));
        vi diff(n + 1), diffSum(n + 1);

        for (int i = 1; i <= n; i++) {
            pref[0][i] = pref[0][i - 1];
            pref[1][i] = pref[1][i - 1];
            pref[arr[i]][i]++;

            diff[i] = (arr[i] == arr[i - 1] ? 0 : 1);
            diffSum[i] = diffSum[i - 1] + diff[i];
        }

        while (q--) {
            int l, r; cin >> l >> r;

            int r0 = pref[0][r] - pref[0][l - 1];
            int r1 = pref[1][r] - pref[1][l - 1];

            if (r0 % 3 || r1 % 3) cout << "-1\n";
            else {
                int total = (r0 / 3) + (r1 / 3);
                if ((diffSum[r] - diffSum[l]) == (r - l)) total++;
                cout << total << '\n';
            }
        }
    }

    return 0;
}