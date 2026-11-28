#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

ll c, d;

ll f(ll x) {
    ll first = x / c;
    ll second = x / d;
    ll both = x / lcm(c, d);
    return x - (first + second - both);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b; cin >> a >> b >> c >> d;
    cout << f(b) - f(a - 1) << '\n';

    return 0;
}
