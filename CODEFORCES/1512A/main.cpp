#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto& x : arr) cin >> x;

        int major = 0;
        if (arr[0] == arr[1]) major = arr[0];
        else if (arr[0] == arr[2]) major = arr[0];
        else if (arr[1] == arr[2]) major = arr[1];

        for (int i = 0; i < n; i++) {
            if (arr[i] != major) {
                cout << i + 1 << '\n';
                break;
            }
        }
    }

    return 0;
}