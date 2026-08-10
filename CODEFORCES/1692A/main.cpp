#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int a; cin >> a;
        int nOfPar = 0;
        for (int i = 0; i < 3; i++) {
            int x; cin >> x;
            if (a < x) nOfPar++;
        }

        cout << nOfPar << '\n';
    }

    return 0;
}