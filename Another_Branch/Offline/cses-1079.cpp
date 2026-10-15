#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

const ll MOD = 1e9+7;

vll fact(1e6+5);
void setupFact() {
    fact[0] = 1;
    for(int i=1; i<=1e6+5; i++){
        fact[i] = (fact[i - 1] * i) % MOD; 
    }
}

ll binpow(ll x, ll m) {
    ll ans = 1;
    x %= MOD;
    while (m) {
        if (m & 1) ans = (ans * x) % MOD;
        x = (x * x) % MOD;
        m >>= 1;
    }
    return ans;
}

ll modInv(ll x) {
    return binpow(x, MOD - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    setupFact();

    int n; cin >> n;
    while (n--){
        ll a, b; cin >> a >> b;
        ll c = a - b;
        
        ll tu_so = fact[a];
        ll mau_so = (fact[b] * fact[c]) % MOD;

        ll ans = (tu_so * modInv(mau_so)) % MOD;

        cout << ans << '\n';
    }

    return 0;
}