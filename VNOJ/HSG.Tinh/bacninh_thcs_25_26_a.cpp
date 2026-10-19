#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c;
    cin >> a >> b >> c;

    ll maxOfThree = max({ a, b, c});

    ll ta = 1, tb = 1, tc = 1;
    for (int i = 2; i <= maxOfThree; i++) {
        if (a % i == 0) {
            ta += i;
        }
        if (b % i == 0) {
            tb += i;
        }
        if (c % i == 0) {
            tc += i;
        }
    }

    cout << max({ ta, tb, tc }) << '\n';

    return 0;
}