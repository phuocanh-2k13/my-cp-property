// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define mi map<int, int>
#define mll map<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

vll ans_fastest_way;
vll backtrack(ll destination, const vll& fastest_way) {
    vll answer;
    ll last = destination;
    answer.push_back(destination);
    while (last != 1) {
        last = fastest_way[last];
        answer.push_back(last);
    }
    return answer;
}

bool is_there_a_way_to_escape_this_life(const vector<vll>& adj, ll destination, ll limit) {
    vector<bool> visited(100002);
    vll distance(100002);
    vll parent(100002);
    queue<ll> neighbor;

    visited[1] = true;
    distance[1] = 0;
    neighbor.push(1);
    parent.push_back(1);

    while (!neighbor.empty()) {
        ll need_to_analyze = neighbor.front();
        for (auto& x : adj[need_to_analyze]) {
            if (!visited[x]) {
                neighbor.push(x);
                visited[x] = true;
                distance[x] = distance[need_to_analyze] + 1;
                parent[x] = need_to_analyze;
            }
        }
        neighbor.pop();
    }

    bool ans_of_arr = visited[destination] && distance[destination] <= limit;
    if (ans_of_arr) ans_fastest_way = parent;

    return ans_of_arr;
}

bool f(ll x, const vector<tuple<ll, ll, ll>>& graph, ll limit, ll destination) {
    vector<pll> pruneGraph;
    ll maxWeight = INT_MIN;
    for (auto& [source, destinationInWay, weight] : graph) {
        if (weight <= x) {
            pruneGraph.push_back({source, destinationInWay});
            maxWeight = max(maxWeight, weight);
        } 
    }
    vector<vll> adj(destination + 1);
    for (auto& [source, destinationInWay] : pruneGraph) {
        adj[source].push_back(destinationInWay);
    }
    return is_there_a_way_to_escape_this_life(adj, destination, limit);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, d; cin >> n >> m >> d;
    vector<tuple<ll, ll, ll>> graph(m);
    ll r = INT_MIN;
    for (auto& x : graph) {
        ll a, b, c; 
        cin >> a >> b >> c;
        x = { a, b, c };
        r = max(r, c);
    }

    ll l = 0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (f(mid, graph, d, n)) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    if (!ans_fastest_way.empty()) {
        vll arr_of_ans = backtrack(n, ans_fastest_way);
        reverse(all(arr_of_ans));
        cout << (arr_of_ans.size() - 1) << '\n';
        for (auto& x : arr_of_ans) cout << x << ' ';
        cout << '\n';
    }
    else {
        cout << -1 << '\n';
    }
    
    return 0;
}