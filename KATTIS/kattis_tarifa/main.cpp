#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x; cin >> x;
    int n; cin >> n;
    int left = 0;
    while (n--) {
        int p; cin >> p;
        left = (left + x) - p;
    }
    left += x;

    cout << left << '\n';


    return 0;
}