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

    int n, q; cin >> n >> q;
    queue<pair<string, int>> que;
    while (n--) {
        string name; cin >> name;
        int time; cin >> time;
        que.push({ name, time });
    }

    int totalTime = 0;
    while (!que.empty()) {
        pair<string, int> x = que.front();
        que.pop();
        if (x.second > q) {
            totalTime += q;
            que.push({x.first, x.second - q});
        }
        else {
            totalTime += x.second;
            cout << (x.first) << ' ' << totalTime << '\n';
        }
    }

    return 0;
}

