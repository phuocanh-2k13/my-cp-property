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

    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        vll arr(n); for (auto& x : arr) cin >> x;

        ll l = 0, r = 20000000007;
        while (l < r) {
            ll mid = l + (r - l + 1) / 2;
            ll tot = 0;
            for (auto& x : arr) {
                tot += max(0ll, mid - x);
            }

            if (tot <= x) l = mid;
            else r = mid - 1;
        }
        cout << l << '\n';
    }

    return 0;
}

