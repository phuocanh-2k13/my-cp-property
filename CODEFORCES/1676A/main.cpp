#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        string num; cin >> num;
        int l1 = 0, r1 = 2;
        int l2 = 3, r2 = 5;
        int a = 0, b = 0;

        for (int i = l1; i <= r1; i++) a += num[i] - '0';
        for (int i = l2; i <= r2; i++) b += num[i] - '0';

        cout << (a == b ? "YES\n" : "NO\n");
    }

    return 0;
}