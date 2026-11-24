#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, c; cin >> n >> m >> c;
    vi B(m); for (auto& x : B) cin >> x;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ll total = c;
        for (int j = 0; j < m; j++) {
            ll x; cin >> x;
            total += x * B[j];
        }
        if (total > 0) ans++;
    }

    cout << ans << '\n';

    return 0;
}
