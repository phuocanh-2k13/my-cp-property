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

    ll t; cin >> t;
    while (t--) {
        ll n, c; cin >> n >> c;
        vector<pll> arr(n);
        for (ll i = 0; i < n; i++) {
            ll x; cin >> x;
            arr[i] = {x + min(i + 1, n - i), x + i + 1};
        }
        sort(all(arr));

        vll pref;
        pref.push_back(0);
        for (ll i = 0; i < n; i++) {
            pref.push_back(pref.back() + arr[i].first);
        }

        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            ll new_c = c - arr[i].second;
            ll l = 0, r = n;
            ll maxTeleporter = 0;
            while (l <= r) {
                ll mid = (l + r) / 2;
                ll price = pref[mid];
                ll now = mid + 1;
                if (mid > i) {
                    price -= arr[i].first;
                    now--;
                }

                if (price <= new_c) {
                    l = mid + 1;
                    maxTeleporter = max(maxTeleporter, now);
                }
                else {
                    r = mid - 1;
                }
            }
            ans = max(ans, maxTeleporter);
        }
        cout << ans << '\n';
    }

    return 0;
}

