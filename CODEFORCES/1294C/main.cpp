#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int

void solve(int& n) {
    unordered_set<int> used;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && !used.count(i)) {
            n /= i;
            used.insert(i);
            break;
        }
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && !used.count(i)) {
            n /= i;
            used.insert(i);
            break;
        }
    }

    if (used.size() < 2 || n == 1 || used.count(n)) cout << "NO\n";
    else {
        cout << "YES\n";
        for (auto& x : used) cout << x << ' ';
        cout << n << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        solve(n);
    }
    
    return 0;
}