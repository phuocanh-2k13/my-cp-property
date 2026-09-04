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

    int n, m; cin >> n >> m;
    vector<sll> adj_list(n);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj_list[u - 1].insert(v - 1);
        adj_list[v - 1].insert(u - 1);
    }

    int sumOfOneDeg = 0;
    int sumOfTwoDeg = 0;
    int sumAllDeg = 0;
    int sumOther = 0;
    for (auto& x : adj_list) {
        if ((int)x.size() == 1) sumOfOneDeg++;
        else if ((int)x.size() == 2) sumOfTwoDeg++;
        else if ((int)x.size() == n - 1) sumAllDeg++;
        else sumOther++;
    }

    if (sumOfOneDeg == 2 && sumOfTwoDeg == n - sumOfOneDeg) {
        cout << "bus topology\n";
    }
    else if (sumOfTwoDeg == n) {
        cout << "ring topology\n";
    }
    else if (sumAllDeg == 1 && sumOfOneDeg == n - 1) {
        cout << "star topology\n";
    }
    else {
        cout << "unknown topology\n";
    }

    return 0;
}

