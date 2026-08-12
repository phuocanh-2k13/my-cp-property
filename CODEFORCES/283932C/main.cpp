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

bool f(ll time, ll n, ll x, ll y) {
    return (time / x) + (time / y) >= n - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x, y;
    cin >> n >> x >> y;

    ll l = 0, r = 1e9;
    ll ans = r;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (f(mid, n, x, y)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans + min(x, y) << '\n';

    return 0;
}