#include <iostream>
#include <vector>
#include <bitset>
#include <string>
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
    vector<bitset<10000> > arr(n);
    for (int i = 0; i < n; i++) {
        int size; cin >> size;
        for (int j = 0; j < size; j++) {
            int val; cin >> val;
            arr[i].set(val - 1);
        }
    }

    int q; cin >> q;
    while (q--) {
        int l, r; cin >> l >> r;
        bool isOk = false;
        for (int i = 0; i < n; i++) {
            if (arr[i].test(l - 1) && arr[i].test(r - 1)) {
                cout << "Yes\n";
                isOk = true;
                break;
            }
        }

        if (!isOk) cout << "No\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}