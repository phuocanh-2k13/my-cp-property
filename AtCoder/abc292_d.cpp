#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    if (n != m) {
        cout << "No\n";
        return 0;
    }

    vector<vi> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n + 1);
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            ll deg_cnt = 0;
            ll v_cnt = 0;
            stack<int> st;
            st.push(i);
            visited[i] = true;
            while (!st.empty()) {
                int node = st.top();
                st.pop();

                v_cnt++;
                deg_cnt += (ll)adj[node].size();
                for (auto& v : adj[node]) {
                    if (!visited[v]) {
                        visited[v] = true;
                        st.push(v);
                    }
                }
            }

            ll e_cnt = deg_cnt / 2;
            if (v_cnt != e_cnt) {
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";    

    return 0;
}
