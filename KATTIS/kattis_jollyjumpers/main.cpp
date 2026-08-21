#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        vector<bool> checkMap(n - 1, false);
        int pass; cin >> pass;
        for (int i = 0; i < n - 1; i++) {
            int x; cin >> x;
            int diff = abs(x - pass);
            if (diff >= 1) {
                checkMap[diff - 1] = true;
            }
            pass = x;
        }

        bool isJolly = true;
        for (int i = 0; i < n - 1; i++) {
            if (!checkMap[i]) {
                isJolly = false;
                break;
            }
        }

        cout << (isJolly ? "Jolly\n" : "Not jolly\n");
    }

    return 0;
}