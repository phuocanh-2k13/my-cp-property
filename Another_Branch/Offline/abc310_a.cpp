#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, p, q; cin >> n >> p >> q;
    ll minimum = p;
    for (int i = 0; i < n; i++) {
        ll d; cin >> d;
        minimum = min(minimum, q + d);
    }

    cout << minimum << '\n';

    return 0;
}