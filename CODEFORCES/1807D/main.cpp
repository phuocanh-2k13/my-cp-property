#include <bits/stdc++.h>
using namespace std;
 
// Template Optimize from Hà Phixah (phixah_vn) 27/07/2026
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

// Template Debug from Hà Phixah (phixah_vn) 29/07/2026
#pragma GCC diagnostic warning "-Wall"
#pragma GCC diagnostic warning "-Wextra"

// Template DEBUG ATTACH VARIABLES from Hà Phixah (phixah_vn) 31/07/2026
template<class... Args>
void debug(Args&&... args) {
    cerr << "DEBUG: ";
    ((cerr << args << ' '), ...);
    cerr << '\n';
}
 
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
        vl arr(n); for (auto& x : arr) cin >> x;

        vl pref(n + 1);
        for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + arr[i - 1];

        while (q--) {
            int l, r, x; cin >> l >> r >> x;

            ll totalSum = ((r - l + 1) * x) + pref[l - 1] + (pref[n] - pref[r]);
            //debug(totalSumOutsideQuery, pref[l-1], pref[n] - pref[r]);
            if (totalSum % 2 == 0) cout << "NO\n";
            else cout << "YES\n";
        }

    }

    return 0;
}