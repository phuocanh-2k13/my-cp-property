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

    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);

    int n; cin >> n;
    vl arr(n); for (auto& x : arr) cin >> x;

    vl pref(n + 1);
    for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + arr[i - 1];

    int maxSize = 0;
    for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++) {
            ll sumRange = pref[r] - pref[l - 1];
            if (sumRange % 7 == 0) maxSize = max(maxSize, r - l + 1);
        }
    }

    cout << maxSize << '\n';

    return 0;
}