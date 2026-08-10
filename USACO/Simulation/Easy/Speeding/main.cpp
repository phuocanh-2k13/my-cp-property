#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m; cin >> n >> m;
    vector<int> rSpLim, bSpLim;
    for (int i = 0; i < n; i++) {
        int distance, spLim;
        cin >> distance >> spLim;
        for (int j = 0; j < distance; j++) {
            rSpLim.push_back(spLim);
        }
    }
    for (int i = 0; i < m; i++) {
        int distance, spLim;
        cin >> distance >> spLim;
        for (int j = 0; j < distance; j++) {
            bSpLim.push_back(spLim);
        }
    }

    int maxOutSpLim = 0;
    for (int i = 0; i < 100; i++) {
        if (bSpLim[i] - rSpLim[i] > 0) {
            if (maxOutSpLim < bSpLim[i] - rSpLim[i]) {
                maxOutSpLim = bSpLim[i] - rSpLim[i];
            }
        }
    }


    cout << maxOutSpLim << '\n';

    return 0;
}