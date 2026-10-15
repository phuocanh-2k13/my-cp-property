#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m; cin >> n >> m;

    ll sum = 0;
    vll arr(n); for (auto& x : arr) { cin >> x; sum += x; }
    if (sum <= m) {
        cout << "infinite\n";
        return 0;
    }

    sort(all(arr));

    ll l = 1, r = 1e9;
    ll ans = -1;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll tmp = 0;
        for (auto& x : arr) tmp += min(x, mid);

        if (tmp > m) {
            r = mid - 1;
        }
        else {
            ans = mid;
            l = mid + 1;
        }
    }
    cout << ans << '\n';

    return 0;
}