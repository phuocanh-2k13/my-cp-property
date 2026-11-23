// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <queue>
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

    int n, m; cin >> n >> m;
    vector<pll> arr(n); for (auto& x : arr) {
        cin >> x.first;
        x.second = 1;
    }
    for (int i = 0; i < m; i++) {
        ll b, c; cin >> b >> c;
        arr.push_back({c, b});
    }
    sort(all(arr), greater<pll>());

    ll res = 0;
    ll nn = 0;
    for (auto& v : arr) {
        if (v.second + nn <= n) {
            res += v.first * v.second;
            nn += v.second;
        }
        else {
            res += v.first * (n - nn);
            break;
        }
    }

    cout << res << '\n';

    /*
    priority_queue<ll, vll, greater<ll>> arr;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        arr.push(x);
    }

    for (int i = 0; i < m; i++) {
        ll b, c; cin >> b >> c;
        while (b > 0) {
            ll v = arr.top();
            if (c <= v) break;
            else {
                arr.pop();
                arr.push(c);
                b--;
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += arr.top();
        arr.pop();
    }

    cout << ans << '\n';*/

    return 0;
}

