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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q; cin >> n >> q;
    vector<priority_queue<int>> vpq(n);
    while (q--) {
        int type; cin >> type;
        if (type == 0) {
            int t, x; cin >> t >> x;
            vpq[t].push(x);
        }
        else if (type == 1) {
            int t; cin >> t;
            if (!vpq[t].empty()) cout << vpq[t].top() << '\n';
        }
        else if (type == 2) {
            int t; cin >> t;
            if (!vpq[t].empty()) vpq[t].pop();
        }
    }

    return 0;
}

