#include <bits/stdc++.h>
using namespace std;

bool solve(int n, int k) {
    if (n == k) return true;
    else if (n < k) return false;
    else if (n % 3 != 0) return false;
    else return solve(n / 3, k) || solve((n / 3) * 2, k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        bool isAbleToDivide = solve(n, k);
        cout << (isAbleToDivide ? "YES\n" : "NO\n");
    }

    return 0;
}