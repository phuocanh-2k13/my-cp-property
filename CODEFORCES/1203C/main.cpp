#include <bits/stdc++.h>
using namespace std;
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<ll> arr(n);
    for (auto& x : arr) cin >> x;

    ll gcdOfArr = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        gcdOfArr = gcd(gcdOfArr, arr[i]);
    }

    ll ans = 0;
    for (int i = 1; 1LL * i * i <= gcdOfArr; i++) {
        if (gcdOfArr % i == 0) {
            ans++;
            if (i != gcdOfArr / i) ans++;
        } 
    }

    cout << ans << '\n';

    return 0;
}