#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

vector<bool> sieve(1e7 + 2, true);
void init() {
    sieve[0] = false;
    sieve[1] = false;
    for (int i = 2; i <= 1e7; i++) {
        if (!sieve[i]) continue;
        for (int j = i + i; j <= 1e7; j += i) {
            sieve[j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    init();
    ll n, q; cin >> n >> q;
    vll arr(n); for (auto& x : arr) cin >> x;
    vll prefPrime(n + 1);
    for (int i = 1; i <= n; i++) {
        if (arr[i - 1] >= 0) {
            prefPrime[i] = prefPrime[i - 1] + sieve[arr[i - 1]];
        }
        else {
            prefPrime[i] = prefPrime[i - 1];
        }
    }
    while (q--) {
        ll l, r; cin >> l >> r;
        cout << prefPrime[r] - prefPrime[l - 1] << '\n';
    }

    return 0;
}