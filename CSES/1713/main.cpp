#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int x; cin >> x;
        int ans = 0;
        for (int i = 1; i * i <= x; i++) {
            if (x % i == 0) {
                ans += 1;
                if (i != (x / i))  ans++;
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}