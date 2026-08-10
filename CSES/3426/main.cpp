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

    int n, k; cin >> n >> k;
    ll x, a, b, c; cin >> x >> a >> b >> c;

    vl arr(n);
    arr[0] = x;
    for (int i = 1; i < arr.size(); i++) {
        arr[i] = (a * arr[i - 1] + b) % c; 
    }

    ll windowVal = 0;
    ll ans = 0;
    for (int i = 0; i < k; i++) {
        windowVal ^= arr[i];
    }
    ans = windowVal;
    for (int i = 1; i <= n - k; i++) {
        windowVal ^= arr[i - 1];
        windowVal ^= arr[i + k - 1];
        ans ^= windowVal;
    }

    cout << ans << '\n';

    return 0;
}