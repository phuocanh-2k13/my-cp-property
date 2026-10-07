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

vector<bool> visited(1e5 + 5);
int solve(const vector<vi>& graph, const vector<bool>& cats, int m) {
    stack<pi> state;
    state.push({ 1, cats[1] });
    int canVisit = 0;
    while (!state.empty()) {
        auto& [x, y] = state.top();
        state.pop();

        visited[x] = true;

        for (auto& w : graph[x]) {
            if (!visited[w]) {
                if (cats[w] == 0) {
                    state.push({ w, 0 });
                }
                else if (y + cats[w] <= m) {
                    state.push({ w, y + cats[w] });
                }
            }
        }
        if (graph[x][0] == ) canVisit++;
    }

    return canVisit;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<bool> cats(n + 1);
    for (int i = 1; i <= n; i++) {
        int t; cin >> t;
        cats[i] = t;
    }

    vector<vi> adj_list(n + 1);
    for (int i = 1; i <= n - 1; i++) {
        int u, v; cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    cout << solve(adj_list, cats, m) << '\n';

    return 0;
}

