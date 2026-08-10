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

void solve() {
    int n; cin >> n;
    vl arr(n); for (auto& x : arr) cin >> x;
    vl prefXor(n + 1);
    string s; cin >> s;
    ll zeroXor = 0, oneXor = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == '0') zeroXor ^= arr[i - 1];
        else oneXor ^= arr[i - 1];
        prefXor[i] = prefXor[i - 1] ^ arr[i - 1];
    }

    int q; cin >> q;
    while (q--) {
        int type; cin >> type;
        if (type == 1) {
            int l, r; cin >> l >> r;
            zeroXor ^= prefXor[r] ^ prefXor[l - 1];
            oneXor ^= prefXor[r] ^ prefXor[l - 1];
        }
        else if (type == 2) {
            int bitType; cin >> bitType;
            if (bitType == 0) cout << zeroXor << ' ';
            else cout << oneXor << ' ';
        }
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}