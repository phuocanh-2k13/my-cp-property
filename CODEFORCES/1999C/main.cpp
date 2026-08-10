#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;

        vector<pair<int, int>> timeline;

        // 0 - [l1, r1] - [l2, r2] - [l3, r3] - m
        // timeline[i].first - timeline[i - 1].second
        // Case [0 - [l1 - r1]]: if i = 0: timeline[i].first
        // Case [[l3 - r3] - m]: if i = n - 1: m - timeline[i].second

        for (int i = 0; i < n + 1; i++) {
            int l, r;
            if (!i) {
                cin >> r;
                timeline.push_back({0, r});
            }
            else if (i == n) {
                cin >> l;
                timeline.push_back({l, m});
            }
            else {
                cin >> l >> r;
                timeline.push_back({l, r});
            }
        }

        bool isPossible = false;
        for (int i = 0; i < n + 1; i++) {
            if (abs(timeline[i].first - timeline[i].second) >= s) {
                isPossible = true;
                break;
            }
        }

        cout << (isPossible ? "YES\n" : "NO\n");
    }

    return 0;
}