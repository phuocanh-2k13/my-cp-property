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

void solve() {
    int n, k; cin >> n >> k;
    int ao = 0, ae = 0, bo = 0, be = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x & 1) ao++;
        else ae++;
    }
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x & 1) bo++;
        else be++;
    }

    if (k & 1) {
        if (ae >= be) cout << "YES\n";
        else cout << "NO\n";
    } else {
        if (ao >= bo) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

