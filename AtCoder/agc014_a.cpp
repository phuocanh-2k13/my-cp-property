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

    ll a, b, c; cin >> a >> b >> c;
    set<ll> visited;
    int ans = 0;
    bool ok = true;
    while (!(a%2) && !(b%2) && !(c%2)) {
        if (visited.count(a) && visited.count(b) && visited.count(c)) {
            ok =false;
            break;
        }
        visited.insert(a);
        visited.insert(b);
        visited.insert(c);

        ans++;
        ll a_t = a / 2;
        ll b_t = b / 2;
        ll c_t = c / 2;
        a = b_t + c_t;
        b = a_t + c_t;
        c = a_t + b_t;
    }

    if (ok) cout << ans << '\n';
    else cout << -1 << '\n';

    return 0;
}
