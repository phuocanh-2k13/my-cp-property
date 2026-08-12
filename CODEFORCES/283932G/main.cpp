// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define mi map<int, int>
#define mll map<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool f(ll x, ll k, const vll& arr) {
    ll totalContribute = 0;
    for (auto& val : arr) totalContribute += min(val, x);

    return totalContribute >= k * x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k, n; cin >> k >> n;
    vll arr(n); for (auto& x : arr) cin >> x;

    ll l = 0, r = 1e10 * 25;
    ll ans = 0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (f(mid, k, arr)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}