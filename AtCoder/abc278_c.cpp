#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q; cin >> n >> q;
    unordered_map<int, unordered_set<int>> visit;
    while (q--) {
        int t; cin >> t;
        int a, b; cin >> a >> b;
        if (t == 1) {
            visit[a].insert(b);
        }
        else if (t == 2) {
            visit[a].erase(b);
        }
        else {
            if (visit[a].count(b) && visit[b].count(a)) {
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
            }
        }
    }

    return 0;
}