// Ha Phixah Example Templates Edited 2026-08-10
#include <algorithm>
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

    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);

    int n; cin >> n;
    vi arr(1001);
    vector<pi> coor(n);
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        arr[x]++;
        arr[y]--;
        coor[i] = { x, y };
    }

    int maxTime = INT_MIN;
    for (int i = 0; i < n; i++) {
        vi tmp = arr;
        tmp[coor[i].first]--;
        tmp[coor[i].second]++;

        for (int j = 1; j <= 1000; j++) {
            tmp[j] += tmp[j - 1];
        }

        int countTime = 0;
        for (int j = 1; j <= 1000; j++) {
            if (tmp[j] > 0) countTime++;
        }

        maxTime = max(countTime, maxTime);
    }

    cout << maxTime << '\n';

    return 0;
}

