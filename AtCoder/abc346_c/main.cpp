// Ha Phixah Example Templates Edited 2026-08-10
#include <algorithm>
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

    ll n, k; cin >> n >> k;
    vll arr(n); for (auto& x : arr) cin >> x;

    sort(all(arr));
    auto dup = unique(arr.begin(), arr.begin() + n);
    arr.erase(dup, arr.end());

    auto mid = upper_bound(all(arr), k);
    ll ans = k * (k + 1) / 2;
    for (auto i = mid - 1; i >= arr.begin(); --i) {
        ans -= *i;
    }

    cout << ans << '\n';

    return 0;
}

