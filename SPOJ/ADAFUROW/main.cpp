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

    // SOLVE ---

    vector<bitset<20001> > farms(20001);

    int q; cin >> q;
    while (q--) {
        char c; cin >> c;
        int x, y; cin >> x >> y;

        if (c == '+') farms[x].set(y);
        else if (c == '-') farms[x].reset(y);
        else if (c == 'v') {
            bitset<20001> mergeField = farms[x] | farms[y];
            cout << (mergeField.count()) << '\n';
        }
        else if (c == '^') {
            bitset<20001> mergeField = farms[x] & farms[y];
            cout << (mergeField.count()) << '\n';
        }
        else if (c == '!') {
            bitset<20001> mergeField = farms[x] ^ farms[y];
            cout << (mergeField.count()) << '\n';
        }
        else if (c == '\\') {
            bitset<20001> mergeField = farms[x] & farms[y];
            cout << (farms[x].count() - mergeField.count()) << '\n';
        }
    }

    // END SOLVE ---

    return 0;
}