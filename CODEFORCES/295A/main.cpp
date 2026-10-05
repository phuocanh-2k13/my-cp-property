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
    vll arr(n); for (auto& x : arr) cin >> x;
    vector<vll> opers(m, vll(3));
    for (int i = 0; i < m; i++) { 
        cin >> opers[i][0] >> opers[i][1] >> opers[i][2];
    }

    vll diffQ(m + 2);
    for (int i = 0; i < k; i++) {
        ll x, y; cin >> x >> y;
        diffQ[x]++;
        diffQ[y + 1]--;
    }

    for (int i = 1; i <= m; i++) {
        diffQ[i] += diffQ[i - 1];
    }

    vll addQ(n + 2);
    for (int i = 1; i <= m; i++) {
        if (diffQ[i]) {
            ll l = opers[i - 1][0];
            ll r = opers[i - 1][1] + 1;

            addQ[l] += diffQ[i] * opers[i - 1][2];
            addQ[r] -= diffQ[i] * opers[i - 1][2];
        }
    }

    for (int i = 1; i <= n; i++) {
        addQ[i] += addQ[i - 1];
    }

    for (int i = 1; i <= n; i++) cout << arr[i - 1] + addQ[i] << ' ';
    cout << '\n';

    return 0;
}

