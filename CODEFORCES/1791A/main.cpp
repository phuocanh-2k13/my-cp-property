#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    vector<char> checkMap = {'c', 'o', 'd', 'e', 'f', 'r', 's'};
    while (t--) {
        char c; cin >> c;
        bool isYes = false;
        for (auto& x : checkMap) {
            if (c == x) {
                isYes = true;
                break;
            }
        }

        cout << (isYes ? "YES\n" : "NO\n");
    }

    return 0;
}