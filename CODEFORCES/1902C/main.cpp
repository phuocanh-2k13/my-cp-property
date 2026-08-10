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
    
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> arr(n);
        for (auto& x : arr) cin >> x;

        ll g = 0;
        for (int i = 0; i < n - 1; i++) g = gcd(g, abs(arr[i + 1] - (arr[i])));
        g = max(g, 1LL);

        sort(all(arr));
        ll res = arr[n - 1];
        int j = n - 1;
        while (true) {
            while (j >= 0 && arr[j] > res) j--;
            if (j < 0 || arr[j] != res) break;
            res -= g;
        } 

        ll ans = (arr[n - 1] * (n + 1) - (accumulate(all(arr), 0LL) + res)) / g;
        cout << ans << '\n';
    }

    return 0;
}