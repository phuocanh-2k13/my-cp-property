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
        int n; cin >> n;
        string s; cin >> s;
        pi coor = {0, 0};
        bool isOk = false;
        for (char& c : s) {
            if (c == 'U') {
                coor.second++;
            }
            else if (c == 'D') {
                coor.second--;
            }
            else if (c == 'L') {
                coor.first--;
            }
            else if (c == 'R') {
                coor.first++;
            }

            if (coor.first == 1 && coor.second == 1) {
                isOk = true;
                break;
            }
        }

        if (isOk) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

