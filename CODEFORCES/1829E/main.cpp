#include <bits/stdc++.h>
using namespace std;

int volumeLake(int i, int j, int n, int m, vector<vector<int>>& grid) {
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0) {
        return 0;
    }

    
    int volOfPart = grid[i][j];

    grid[i][j] = 0;

    volOfPart += volumeLake(i-1, j, n, m, grid);
    volOfPart += volumeLake(i+1, j, n, m, grid);
    volOfPart += volumeLake(i, j-1, n, m, grid);
    volOfPart += volumeLake(i, j+1, n, m, grid);

    return volOfPart;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; i++) {
            vector<int> row(m);
            for (int j = 0; j < m; j++) {
                int x; cin >> x;
                row[j] = x;
            }
            grid.push_back(row);
        }

        int biggestVol = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != 0) {
                    int volOfThisLake = volumeLake(i, j, n, m, grid);
                    biggestVol = max(volOfThisLake, biggestVol);
                }
            }
        }

        cout << biggestVol << '\n';
    }

    return 0;
}