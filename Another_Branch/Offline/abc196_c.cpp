#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    for (ll i = 1; ; i++) {
        if (stoll(to_string(i) + to_string(i)) > n) {
            cout << (i - 1) << '\n';
            return 0;
        }
    }

    return 0;
}