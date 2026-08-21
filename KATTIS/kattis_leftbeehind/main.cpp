#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    while ((cin >> x >> y) && (x || y)) {
        string ans = "";
        if (x > y) ans = "To the convention.";
        else if (x < y) ans = "Left beehind.";
        else ans = "Undecided.";

        if (x + y == 13) ans = "Never speak again.";

        cout << ans << '\n';
    }

    return 0;
}