#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int

vector<ll> factorials;
void init() {
    ll currentFactorial = 1;
    for (int i = 1; i < 15; i++) {
        currentFactorial *= i;
        if (i >= 3) factorials.push_back(currentFactorial);
    }
}

int solve(ll n) {
    if (!(n & (n - 1))) return 1;

    int factSize = factorials.size();
    int numberOfExponent = __builtin_popcountll(n);
    int ans = INT_MAX;

    for (ll masks = 0; masks < (1LL << factSize); masks++) {
        ll sum = 0;
        int numbOfUsed = 0;
        for (int i = 0; i < factSize; i++) {
            if (masks & (1LL << i)) {
                sum += factorials[i];
                numbOfUsed++;
            }
        }

        if (sum <= n) {
            ll remainder = (n - sum);
            ans = min(ans, numbOfUsed + __builtin_popcountll(remainder));
        }   
    } 

    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    init();
    
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        int ans = solve(n);
        cout << ans << '\n';
    }   
    
    return 0;
}