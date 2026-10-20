#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << n << " is " << (n % 2 == 0 ? "even\n" : "odd\n");
    }

    return 0;
}