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

map<string, pi> dirMap = {
    { "DL", {  1, -1 } },     // Down left  - DL - 0
    { "UL", { -1, -1 } },     // Up left    - UL - 1
    { "DR", {  1,  1 } },     // Down right - DR - 2
    { "UR", { -1,  1 } }      // Up right   - UR - 3
};

pi checkBounce(int n, int m, int x, int y, pi dir) {
    pi dir_n = dir;
    if ((x == 1 && dir_n.second < 0) || (x == m && dir_n.second > 0)) {
        dir_n.second = -dir.second;
    }
    if ((y == 1 && dir_n.first < 0) || (y == n && dir_n.first > 0)) {
        dir_n.first = -dir.first;
    }
    return dir_n;
}

int solve(int n, int m, int startX, int startY, int endX, int endY, pi dir) {
    int dx = startX;
    int dy = startY;
    pi dir_n = dir;

    set<vi> states;
    states.insert({ dx, dy, dir_n.first, dir_n.second });
    int bounces = 0;
    while (true) {
        pi dirIfBounce = checkBounce(n, m, dx, dy, dir_n);
        if (dir_n != dirIfBounce) {
            bounces++;
            dir_n = dirIfBounce;
        }

        dx += dirIfBounce.second;
        dy += dirIfBounce.first;

        if (dx == endX && dy == endY) {
            return bounces;
        }
        if (states.count({ dx, dy, dir_n.first, dir_n.second })) {
            return -1;
        }
        states.insert({ dx, dy, dir_n.first, dir_n.second });
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        // Get Input
        int n, m; cin >> n >> m;
        int startPosY, startPosX; cin >> startPosY >> startPosX;
        int endPosY, endPosX; cin >> endPosY >> endPosX;
        string dir; cin >> dir;

        // Convert char direction into vector direction
        pi thisDir = dirMap[dir];

        // Solve
        if (startPosX == endPosX && startPosY == endPosY) cout << 0 << '\n';
        else cout << solve(n, m, startPosX, startPosY, endPosX, endPosY, thisDir) << '\n';
    }

    return 0;
}

