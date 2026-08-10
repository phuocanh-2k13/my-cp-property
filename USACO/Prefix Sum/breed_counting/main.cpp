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

    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    
    int n, q; cin >> n >> q;
    vii IDs(4, vi(n + 1));
    for (int i = 1; i <= n; i++) {
        int id; cin >> id;
        for (int x = 1; x <= 3; x++) {
            if (x == id) IDs[id][i] = IDs[id][i - 1] + 1;
            else IDs[x][i] = IDs[x][i - 1];
        }
    }

    while (q--) {
        int l, r; cin >> l >> r;
        cout << IDs[1][r] - IDs[1][l - 1] << ' ';
        cout << IDs[2][r] - IDs[2][l - 1] << ' ';
        cout << IDs[3][r] - IDs[3][l - 1] << '\n';
    }

    return 0;
}