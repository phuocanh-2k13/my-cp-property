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

    ll w, h; cin >> w >> h;
    if (w == 1 || h == 1) cout << 1 << '\n';
    else {
        ll ans = w * h / 2;
        if ((w * h) % 2 == 1) ans++;
        cout << ans << '\n';
    }

    return 0;
}
