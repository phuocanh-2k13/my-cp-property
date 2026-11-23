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
    vector<vi> arr(m);
    for (auto& x : arr) {
        int k; cin >> k;
        for (int i = 0; i < k; i++) {
            int v; cin >> v;
            x.push_back(v);
        }
    }

    vi p(m);
    for (auto& x : p) cin >> x;

    int ans = 0;
    for (int mask = 0; mask <= (1 << n) - 1; mask++) {
        bool all_lit = true;
        for (int i = 0; i < m; i++) {
            int count = 0;
            for (auto& s : arr[i]) {
                if (mask & (1 << (s - 1))) count++;
            }
            if (count % 2 != p[i]) {
                all_lit = false;
                break;
            }
        }
        ans += all_lit;
    }

    cout << ans << '\n';

    return 0;
}

