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

bitset<100007> visited;
void visit(const vector<vi>& graph, int v) {
    stack<int> analyze;
    analyze.push(v);
    while (!analyze.empty()) {
        int thisAnalyze = analyze.top();
        analyze.pop();
        visited[thisAnalyze] = true;
        for (auto& w : graph[thisAnalyze]) {
            if (!visited[w]) analyze.push(w);
        } 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<vi> adj_list(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    vi needBuild;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            needBuild.push_back(i);
            visit(adj_list, i);
        }
    }

    if (needBuild.size() == 0 || needBuild.size() == 1) cout << 0 << '\n';
    else {
        cout << needBuild.size() - 1 << '\n';
        for (int i = 0; i < (int)needBuild.size() - 1; i++) {
            cout << needBuild[i] << ' ' << needBuild[i + 1] << '\n';
        }
    }

    return 0;
}

