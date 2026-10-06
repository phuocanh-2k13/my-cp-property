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

    ll n, m, k; cin >> n >> m >> k;
    vll arr(n + 1); for (int i = 1; i <= n; i++) cin >> arr[i];
    vector<vll> opers(m + 1, vll(3)); for (int i = 1; i <= m; i++) cin >> opers[i][0] >> opers[i][1] >> opers[i][2];

    vll prefQ(m + 2);
    while (k--) {
        ll x, y; cin >> x >> y;
        prefQ[x]++;
        prefQ[y + 1]--;
    }

    vll add(n + 2);
    for (int i = 1; i <= m; i++) {
        prefQ[i] += prefQ[i - 1];
        add[opers[i][0]] += prefQ[i] * opers[i][2];
        add[opers[i][1] + 1] -= prefQ[i] * opers[i][2];
    }

    for (int i = 1; i <= n; i++) {
        add[i] += add[i - 1];
        cout << (arr[i] + add[i]) << ' ';
    }
    cout << '\n';

    return 0;
}

