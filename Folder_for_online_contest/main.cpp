#include <bits/stdc++.h>
using namespace std;
 
// Template Optimize from Hà Phixah (phixah_vn) 27/07/2026
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

// Template Debug from Hà Phixah (phixah_vn) 29/07/2026
//#pragma GCC diagnostic warning "-Wall"
//#pragma GCC diagnostic warning "-Wextra"

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

    ll n, q; cin >> n >> q;
    vl main_arr(n + 1), permutation(n + 1);
    for (int i = 1; i <= n; i++) {
        ll x; cin >> x;
        main_arr[i] = x;
    }
    for (int i = 1; i <= n; i++) permutation[main_arr[i]] = i;

    bool is_previous = false;
    while (q--) {
        int type; cin >> type;
        if (type == 1) {
            int x, y; cin >> x >> y;
            swap(main_arr[x], main_arr[y]);
            swap(permutation[main_arr[x]], permutation[main_arr[y]]);
        }
        else {
            swap(main_arr, permutation);
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << (main_arr[i]) << ' ';
    }
    cout << '\n';

    return 0;
}