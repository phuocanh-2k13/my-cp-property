// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define si unordered_set<int>
#define sll unordered_set<long long>

#define mi unordered_map<int, int>
#define mll unordered_map<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    ll ans = -1;
    ll l = 1, r = 1e9;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll val = mid * (mid + 1) / 2;
        if (val >= n) {
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

