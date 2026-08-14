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

bool f(ll x, ll k, const vi& arr) {
    int partCount = 1;
    ll tmp = 0;
    for (auto& val : arr) {
        if (tmp + val > x) {
            partCount++;
            tmp = val;
        }
        else {
            tmp += val;
        }
    }

    return partCount <= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    ll r = 0;
    vi arr(n); for (auto& x : arr) {cin >> x; r += x;};

    ll l = *max_element(all(arr));
    ll ans = 0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (f(mid, k, arr)) {
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