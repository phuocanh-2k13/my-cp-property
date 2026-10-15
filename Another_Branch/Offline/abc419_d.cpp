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
    string s, t; cin >> s >> t;
    vll diff(n + 2);
    while (m--) {
        ll l, r; cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        if (diff[i] % 2 == 0) {
            cout << s[i - 1];
        }
        else {
            cout << t[i - 1];
        }
    }

    cout << '\n';

    return 0;
}