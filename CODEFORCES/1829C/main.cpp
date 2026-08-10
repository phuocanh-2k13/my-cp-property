#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int sk1t = INT_MAX;
        int sk2t = INT_MAX;
        int skft = INT_MAX;
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int time; string skill;
            cin >> time >> skill;
            if (skill == "00") continue;
            else if (skill == "01") {
                if (sk1t > time) sk1t = time;
            }
            else if (skill == "10") {
                if (sk2t > time) sk2t = time;
            }
            else if (skill == "11") {
                if (skft > time) skft = time;
            }
        }

        long long ans = INT_MAX;
        if (sk1t != INT_MAX && sk2t != INT_MAX) {
            ans = min(sk1t + sk2t, skft);
        }
        else if (skft != INT_MAX) {
            ans = skft;
        }
        else {
            ans = -1;
        }

        cout << ans << '\n';
    }

    return 0;
}