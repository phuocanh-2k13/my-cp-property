#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x; cin >> x;
    cout << __builtin_popcount(x) << '\n';

    return 0;
}