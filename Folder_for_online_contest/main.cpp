#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll h, w, n, q; cin >> h >> w >> n >> q;
    /*
    vector<vll> arr(h + 1, vll(w + 1));
    for (int i = 0; i < n; i++) {
        ll r, c; cin >> r >> c;
        arr[r][c]++;
    }

    for (ll i = 1; i <= h; i++) {
        for (ll j = 1; j <= w; j++) {
            arr[i][j] += arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1];
            //cout << arr[i][j] << ' ';
        }
        //cout << '\n';
    }

    while (q--) {
        int t; cin >> t;
        ll ans;
        if (t == 1) {
            ll u, d; cin >> u >> d;
            ans = arr[d][w] - arr[u - 1][w];
        }
        else {
            ll l, r; cin >> l >> r;
            ans = arr[h][r] - arr[h][l - 1];
        }
        cout << ans << '\n';
    }*/

    vll rows, cols;
    for (int i = 0; i < n; i++) {
        ll r, c; cin >> r >> c;
        rows.push_back(r);
        cols.push_back(c);
    }
    sort(all(rows));
    sort(all(cols));
    while (q--) {
        int t; cin >> t;
        ll ans = 0;
        if (t == 1) {
            ll u, d; cin >> u >> d;
            auto left = lower_bound(all(rows), u);
            auto right = upper_bound(all(rows), d);
            ans = distance(rows.begin(), right) - distance(rows.begin(), left);
        }
        else {
            ll l, r; cin >> l >> r;
            auto left = lower_bound(all(cols), l);
            auto right = upper_bound(all(cols), r);
            ans = distance(cols.begin(), right) - distance(cols.begin(), left);
        }
        cout << ans << '\n';
    }

    return 0;
}

