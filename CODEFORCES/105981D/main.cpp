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

    int n; cin >> n;
    vl arr(n); for (auto& x : arr) cin >> x;

    // PREFSUM is 1IDX
    // SUFFMIN is 0IDX
    // ARR is 0IDX

    vl prefSum(n), suffMin(n), prefMin(n);
    prefSum[0] = arr[0];
    prefMin[0] = prefSum[0];

    for (int i = 1; i < n; i++) prefSum[i] = prefSum[i - 1] + arr[i];
    suffMin[n - 1] = prefSum[n - 1];
    for (int i = n - 2; i >= 0; --i) suffMin[i] = min(suffMin[i + 1], prefSum[i]); 
    for (int i = 1; i < n; i++) prefMin[i] = min(prefMin[i - 1], prefSum[i]);

    ll total = prefSum[n - 1];

    int ans = 0;
    for (int k = 0; k < n; k++) {
        bool isAccept = true;
        if (k != n - 1) {
            if (suffMin[k + 1] < prefSum[k]) isAccept = false;
        }
        if (k != n - 1) {
            if (prefMin[k] + total < prefSum[k]) isAccept = false;
        }
        else {
            if (prefMin[n - 1] < 0) isAccept = false;
        }
        ans += (isAccept ? 1 : 0);
    }

    cout << ans << '\n';

    return 0;
}
