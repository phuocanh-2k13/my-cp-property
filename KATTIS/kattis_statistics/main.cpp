#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int i = 1;
    while (cin >> n) {
        int minNum = INT_MAX, maxNum = INT_MAX;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (minNum != INT_MAX && maxNum != INT_MAX) {
                if (x < minNum) minNum = x;
                else if (x > maxNum) maxNum = x;
            }
            else {
                minNum = x;
                maxNum = x;
            }
        }

        cout << "Case " << i << ": " << minNum << " " << maxNum << " " << abs(minNum - maxNum) << '\n'; 
        i++;
    }

    return 0;
}