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

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int last1 = 0, last2 = 0;
        int ans = 0;
        for (auto& x : edges) {
            if (!last1) {
                last1 = x[0];
                last2 = x[1];
            }
            else {
                if (last1 == x[0] || last1 == x[1]) ans = last1;
                else return ans = last2;
            }
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vi> edges;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int u, v; cin >> u >> v;
        edges.push_back({u, v});
    }


    Solution solution;
    cout << solution.findCenter(edges) << '\n';

    return 0;
}

