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
    set<pair<ll, ll>> saved;
    while (m--) {
        ll x, y; cin >> x >> y;
        bool ok = true;
        for (int i = x; i <= x + 1; i++) {
            for (int j = y; j <= y + 1; j++) {
                if (saved.count({ i, j })) {
                    ok = false;
                }
            }
        }
        if (ok) {
            saved.insert({ x, y });
            saved.insert({ x + 1, y });
            saved.insert({ x, y + 1 });
            saved.insert({ x + 1, y + 1 });
        }
    }

    cout << (saved.size() / 4) << '\n';

    return 0;
}