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
        ll n, q; cin >> n >> q;
        vector<vll> arr(1002, vll(1002));
        ll tmp = n;
        while (tmp--) {
            ll h, w; cin >> h >> w;
            arr[h][w] += h * w;
        }

        for (int i = 1; i <= 1001; i++) {
            for (int j = 1; j <= 1001; j++) {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + arr[i][j];
            }
        }

        while (q--) {
            ll i1, j1, i2, j2;
            cin >> i1 >> j1 >> i2 >> j2;

            ll ans = arr[i2 - 1][j2 - 1] - arr[i1][j2 - 1] - arr[i2 - 1][j1] + arr[i1][j1] ;
            cout << ans << '\n'; 
        }
    }

    return 0;
}

