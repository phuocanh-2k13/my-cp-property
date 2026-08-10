#include <bits/stdc++.h>
using namespace std;

// uva 11805
int main() {
    int o; cin >> o;
    for (int i = 1; i <= o; i++) {
        int n, k, p; cin >> n >> k >> p;
        int ans = (k + p) % n;
        cout << "Case " << i << ": " << (ans ? ans : n) << '\n';
    }
    return 0;
}