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

int countDiff(string a, string b) {
    if (a.size() != b.size()) return -1;

    int diff = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] != b[i]) diff++;
    }

    return diff;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<string> S(n), T(m);
    for (auto& x : S) cin >> x;
    for (auto& x : T) cin >> x;

    vi point(n);
    vi only(m, -1);
    vector<bool> exact(m, false);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int diff = countDiff(S[i], T[j]);
            if (diff == 0) {
                point[i]++;
                exact[j] = true;
            }
            else if (diff == 1) {
                if (only[j] == -1) only[j] = i;
                else only[j] = -2;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        if (only[i] >= 0 && !exact[i]) point[only[i]]++;
    }

    for (auto& x : point) cout << x << '\n';

    return 0;
}

