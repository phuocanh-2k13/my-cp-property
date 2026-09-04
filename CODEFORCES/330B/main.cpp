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
    vector<bool> block(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        block[a] = true;
        block[b] = true;
    }

    int chosen = 0;
    for (int i = 1; i <= n; i++) {
        if (!block[i]) {
            chosen = i;
            break;
        }
    }

    cout << (n - 1) << '\n';
    for (int i = 1; i <= n; i++) {
        if (i != chosen) {
            cout << chosen << ' ' << i << '\n';
        }
    }

    return 0;
}

