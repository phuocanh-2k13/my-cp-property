#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> x_coor(n), y_coor(n);
    for (auto& x : x_coor) cin >> x;
    for (auto& y : y_coor) cin >> y;

    int maxEuclid = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = x_coor[i] - x_coor[j];
            int dy = y_coor[i] - y_coor[j];
            int euclidDis = dx * dx + dy * dy;

            maxEuclid = max(maxEuclid, euclidDis);
        }
    }

    cout << (maxEuclid) << '\n';

    return 0;
}