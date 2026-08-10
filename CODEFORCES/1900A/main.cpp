#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string inp; cin >> inp;

        int dotStreak = 0;
        int waterNeeded = 0;
        for (auto& c : inp) {
            if (c == '.') dotStreak++;
            else if (c == '#') dotStreak = 0;

            if (dotStreak == 3) {
                waterNeeded = 2;
                break;
            }
            else if (c == '.') {
                waterNeeded++;
            }
        }

        cout << waterNeeded << '\n';
    }

    return 0;
}