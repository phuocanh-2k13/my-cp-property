#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int ans = 0;

        vector<pair<int, int>> sleece = {{a1, a2}, {a2, a1}};
        vector<pair<int, int>> slik = {{b1, b2}, {b2, b1}};
        for (auto& [x1, x2] : sleece) {
            for (auto& [y1, y2] : slik) {
                int win = 0, lose = 0;
                if (x1 > y1) win++;
                else if (x1 < y1) lose++;
                if (x2 > y2) win++;
                else if (x2 < y2) lose++;

                ans += (win > lose ? 1 : 0);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}