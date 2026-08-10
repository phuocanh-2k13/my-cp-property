#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x, y, m;
    cin >> x >> y >> m;

    int ans = 0;
    for (int pailX = 0; pailX <= m; pailX++) {
        if (pailX * x > m) break;
        else {
            for (int pailY = 0; pailY <= m; pailY++) {
                int calcRes = (pailX * x) + (pailY * y);
                if (calcRes > m) break;
                else {
                    ans = max(ans, calcRes);
                }
            }
        }
    }

    cout << ans << '\n';

    return 0;
}