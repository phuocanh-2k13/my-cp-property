#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, k; cin >> n >> k;
    vector<ll> factors;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i) factors.push_back(n/i);
        }
    }   
    sort(factors.begin(), factors.end());

    cout << (k > factors.size() ? -1 : factors[k - 1]) << '\n';
    
    return 0;
}