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

    int n, m, c; cin >> n >> m >> c;
    vll a(n + 1); for (int i = 1; i <= n; i++) cin >> a[i];
    vll b(n + 1); for (int i = 1; i <= m; i++) cin >> b[i];

    // Apl add
    vll add(n + 2); 
    for (int i = 1; i <= m; i++) {
        add[i] += b[i];
        add[n - m + i + 1] -= b[i];
    }

    // Apl Pref on add
    for (int i = 1; i <= n; i++) add[i] += add[i - 1];

    // Apl ans
    for (int i = 1; i <= n; i++) {
        cout << ((a[i] + add[i]) % c) << ' ';
    }
    cout << '\n';

    return 0;
}

