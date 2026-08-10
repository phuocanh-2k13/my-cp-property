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

int lowerX(const vl& arr, ll x) {
    int l = 0, r = arr.size() - 1;
    int ans = 0;

    if (x < arr[0]) return 0;
    else if (x > arr[arr.size() - 1]) return arr.size();

    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= x) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    return ans + 1;
}

int upperX(const vl& arr, ll x) {
    int l = 0, r = arr.size() - 1;
    int ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    if (ans == -1) return arr.size() + 1; 
    return ans + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vl arr(n); for (auto& x : arr) cin >> x;
    sort(all(arr));

    int q; cin >> q;
    while (q--) {
        ll l, r; cin >> l >> r;
        cout << (lowerX(arr, r) - upperX(arr, l) + 1) << '\n';
    }

    return 0;
}