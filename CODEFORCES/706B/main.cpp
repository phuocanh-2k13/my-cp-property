// Ha Phixah Example Templates Edited 2026-08-10
#include <algorithm>
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

    int n; cin >> n;
    vi cost(n); for (auto& x : cost) cin >> x;
    sort(all(cost));

    int q; cin >> q;
    while (q--) {
        int money; cin >> money;
        if (money < cost[0]) cout << 0 << '\n';
        else {
            auto it = upper_bound(all(cost), money);
            cout << (it - cost.begin()) << '\n';
        }
    }


    return 0;
}

