#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string b = "codeforces";
    while (t--) {
        string a;
        cin >> a;

        int diffs = 0;
        for (int i = 0; i < a.size(); i++) {
            diffs += (a[i] != b[i] ? 1 : 0);
        }

        cout << diffs << '\n';
    }

    return 0;
}