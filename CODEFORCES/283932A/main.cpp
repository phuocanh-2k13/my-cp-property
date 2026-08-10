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

bool f(ll sizeOfSquares, ll n, ll w, ll h) {
    ll a = sizeOfSquares / w;
    ll b = sizeOfSquares / h;

    if (a == 0 || b == 0) return false;
    if (a > n / b + 1) return true;
    return (sizeOfSquares / w) * (sizeOfSquares / h) >= n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll w, h, n; cin >> w >> h >> n;

    ll l = 1, r = 1'000'000'000'000'000'000;
    ll ans = r;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (f(mid, n, w, h)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans << '\n';

    return 0;
}