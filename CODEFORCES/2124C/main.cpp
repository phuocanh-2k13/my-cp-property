#include <bits/stdc++.h>
using namespace std;
 
// Template Optimize from Hà Phixah (phixah_vn) 27/06/2026
#pragma GCC optimize("O3")  
#pragma GCC optimize("unroll-loops")

// Template Debug from Hà Phixah (phixah_vn) 29/06/2026
#pragma GCC diagnostic warning "-Wall"
#pragma GCC diagnostic warning "-Wextra"
 
// I don't even remember the day when i write this, :)
#define ll long long int

// Template Alias from Hà Phixah (phixah_vn) 28/06/2026
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

// Template shortcut select VECTOR from Hà Phixah (phixah_vn) 28/06/2026
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

// Template CONSTANT (28/06/2026)
constexpr int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vl arr(n);
        for (auto& x : arr) cin >> x;

        ll GCD = 0LL;
        ll LCM = 1LL;
        for (ll i = n - 1LL; i >= 0; i--) {
            GCD = gcd(GCD, arr[i]);
            LCM = lcm(LCM, arr[i] / GCD);
        }
        cout << LCM << '\n';
    }

    return 0;
}