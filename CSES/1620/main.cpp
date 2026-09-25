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

    ll n, t; cin >> n >> t;
    vll arr(n); for (auto& x : arr) cin >> x;

    ll l = 0, r = 1e18;
    ll time = 1;
    while (l <= r) {
        ll mid = l + (r - l) / 2;

        ll products = 0;
        for (ll i = 0; i < n; i++) {
            products += mid / arr[i];
            if (products >= t) break;
        }

        if (products >= t) {
            time = mid;
            r = mid - 1;
        }
        else if (products < t) {
            l = mid + 1;
        }
    }

    cout << time << '\n';

    return 0;
}

