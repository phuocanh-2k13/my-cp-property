#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k; cin >> m >> n >> k;
    vector<string> mp;
    for (int i = 0; i < m; i++) {
        string s; cin >> s;
        mp.push_back(s);
    }

    vector<string> expanded;
    for (int i = 0; i < m; i++) {
        string tempStr;
        for (int j = 0; j < n; j++) {
            for (int t = 0; t < k; t++) {
                tempStr.push_back(mp[i][j] == 'X' ? 'X' : '.');
            }
        }
        for (int t = 0; t < k; t++) {
            expanded.push_back(tempStr);
        }
    }

    for (int i = 0; i < m * k; i++) {
        cout << expanded[i] << '\n';
    }

    return 0;
}
