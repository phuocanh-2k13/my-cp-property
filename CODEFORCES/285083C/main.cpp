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

bool f(ll x, const vll& stalls, ll k) {
    ll count = 1;
    ll last = stalls[0];
    for (int i = 0; i < (int)stalls.size(); ++i) {
        if (stalls[i] - last >= x) {
            last = stalls[i];
            count++;
        }
    }
    return count >= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k; cin >> n >> k;
    vll arr(n); for (auto& x : arr) cin >> x;

    ll l = 0, r = arr[n - 1] - arr[0];
    while (l < r) {
        ll mid = l + (r - l + 1) / 2;
        if (f(mid, arr, k)) {
            l = mid;
        }
        else {
            r = mid - 1;
        }
    }

    cout << l << '\n';

    return 0;
}