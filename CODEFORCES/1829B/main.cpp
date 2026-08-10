#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int longest = 0;
        int currLongest = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (!x) currLongest++;
            else {
                if (currLongest > longest) longest = currLongest;
                currLongest = 0;
            }
        }
        cout << ((currLongest > longest) ? currLongest : longest) << '\n';
    }

    return 0;
}