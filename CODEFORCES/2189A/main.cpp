#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, l, h;
        cin >> n >> l >> h;
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x <= l || x <= h) {
                arr.push_back(x);
            }
        }

        sort(arr.begin(), arr.end());

        int ans = 0;
        for (int i = 0; i < arr.size() - 1; i++) {
            if ((arr[i] <= l || arr[i] <= h) && (arr[i+1] <= l || arr[i+1] <= h)) {
                i++;
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}