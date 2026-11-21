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

int lim = 0;
int solve(const vector<vi>& graph, const vector<bool>& cats, int t, int node, int pr) {
    if (t > lim) return 0;
    int ans = 0;
    bool is_leaf = true;
    for (auto& w : graph[node]) {
        if (w != pr) {
            is_leaf = false;
            int new_t = cats[w] ? t + 1 : 0;
            ans += solve(graph, cats, new_t, w, node);
        }
    }
    return is_leaf ? 1 : ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n >> lim;
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

    cout << solve(adj_list, cats, cats[1], 1, 0) << '\n';

    return 0;
}

