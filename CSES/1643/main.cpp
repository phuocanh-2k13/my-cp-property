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

    int n; cin >> n;
    vll arr(n); for (auto& x : arr) cin >> x;

    vll pref(n + 1);
    pref[0] = 0;
    for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + arr[i - 1];

    ll maxPref = pref[1];
    ll minPref = pref[0];
    for (int i = 1; i <= n; i++) {
        maxPref = max(maxPref, pref[i] - minPref);
        minPref = min(minPref, pref[i]);
    }

    cout << maxPref << '\n';

    return 0;
}

