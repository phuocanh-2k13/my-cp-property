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

    string s; cin >> s;
    ll q; cin >> q;

    vll pref(s.size() + 1);
    for (int i = 1; i <= (int)s.size(); i++) pref[i] = pref[i - 1] + (s[i - 1] == 'a');

    while (q--) {
        ll l, r; cin >> l >> r;
        cout << (pref[r] - pref[l - 1]) << '\n';
    }

    return 0;
}

