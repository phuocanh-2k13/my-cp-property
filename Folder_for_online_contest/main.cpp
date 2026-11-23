#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define vi vector<int>
#define vll vector<ll>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        ll x; cin >> x;
        if (x % 2 == 1) cout << "YES\n";
        else if ((x / 2) % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

