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

int solve(vector<vi>& graph, vector<bool>& visited) {
    int ans = 0;
    for (int i = 1; i < (int)visited.size(); i++) {
        if (!visited[i]) {
            ans++;

            stack<int> ana;
            ana.push(i);
            while (!ana.empty()) {
                int thisAna = ana.top();
                visited[thisAna] = true;
                ana.pop();

                for (auto& x : graph[thisAna]) {
                    if (!visited[x]) {
                        ana.push(x);
                    }
                }
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("connect.inp", "r", stdin);
    freopen("connect.out", "w", stdout);

    int n, m; cin >> n >> m;
    vector<bool> visited(n + 1); 

    vector<vi> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout << solve(graph, visited);

    return 0;
}

