#include <algorithm>
#include <cstdio>
#include <ios>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    int n; cin >> n;
    vector<pair<int, int>> timeline;
    for (int i = 0; i < n; i++) {
        int s, t, b;
        cin >> s >> t >> b;
        timeline.push_back({s, b});
        timeline.push_back({t, -b});
    }

    sort(timeline.begin(), timeline.end());

    int maxBucket = 0;
    int current = 0;
    for (int i = 0; i < timeline.size(); i++) {
        current += timeline[i].second;
        maxBucket = max(maxBucket, current);
    }

    cout << maxBucket << '\n';


    return 0;
}