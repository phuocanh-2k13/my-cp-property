#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int i = 1;
    while (t--) {
        int l, w, h;
        cin >> l >> w >> h;

        cout << "Case " << i << ": ";
        if (l < 20 || w < 20 || h < 20) cout << "bad\n";
        else cout << "good\n";

        i++;
    }

    return 0;
}