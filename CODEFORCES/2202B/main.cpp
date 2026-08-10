#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string a; cin >> a;

        bool isOkay = true;
        if (n == 1 && a == "b") isOkay = false;
        else if (n == 2 && a == "aa") isOkay = false;
        else {
            int left = 1, right = n, idx = 0;
            while (idx < n) {
                if (a[idx] == 'a' || (a[idx] == '?' && (idx + 1) % 2)) {
                    if (left % 2) left++;
                    else if (right % 2) right--;
                    else {
                        isOkay = false;
                        break;
                    }
                }
                else if (a[idx] == 'b' || (a[idx] == '?' && !((idx + 1) % 2))) {
                    if (!(left % 2)) left++;
                    else if (!(right % 2)) right--;
                    else {
                        isOkay = false;
                        break;
                    }
                }
                idx++;
            }

        } 

        cout << (isOkay ? "YES\n" : "NO\n");
    }

    return 0;
}