// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define si unordered_set<int>
#define sll unordered_set<long long>

#define mi unordered_map<int, int>
#define mll unordered_map<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        vector<vector<char>> arr(3, vector<char>(3));
        pi coor;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == '?') {
                    coor = {i, j};
                }
            }
        }

        set<char> freq;
        for (int i = 0; i < 3; i++) {
            freq.insert(arr[coor.first][i]);
        }
        for (int j = 0; j < 3; j++) {
            freq.insert(arr[j][coor.second]);
        }

        if (!freq.count('B')) cout << 'B' << '\n';
        else if (!freq.count('A')) cout << 'A' << '\n';
        else if (!freq.count('C')) cout << 'C' << '\n';
    }

    return 0;
}

