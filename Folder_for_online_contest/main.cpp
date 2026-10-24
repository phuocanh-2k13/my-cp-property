#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

ll solve(int start, int end, vector<vll>& graph, int sized) {
    vi distance(sized + 1, INT_MAX);
    distance[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({ 0, start });

    while (!pq.empty()) {
        auto [dist, thisNode] = pq.top();
        pq.pop();

        if (distance[thisNode] < dist) continue;
        for (int i = 0; i < (int)graph[thisNode].size(); i++) {
            int wt = 0;
            if (i > 0) wt = 1;

            if (distance[thisNode] + wt < distance[graph[thisNode][i]]) {
                distance[graph[thisNode][i]] = distance[thisNode] + wt;
                pq.push({ distance[thisNode] + wt, graph[thisNode][i] });
            }
        }
    }

    if (distance[end] == INT_MAX) return -1;
    else return distance[end];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, s, t; cin >> n >> m >> s >> t;
    vector<vll> adj(n + 1);
    bool isOk = false;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        if (b == t) isOk = true;
    }
    if (adj[s].size() == 0 && !isOk) {
        cout << -1 << '\n';
        return 0;
    }
    for (auto& x : adj) sort(all(x));

    cout << solve(s, t, adj, n) << '\n';

    return 0;
}

