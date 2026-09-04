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
    vll a(n), b(m), c;
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c.push_back(a[i]);
            i++;
        }
        else {
            c.push_back(b[j]);
            j++;
        }
    } 

    while (i < n) {
        c.push_back(a[i]);
        i++;
    }
    while (j < m) {
        c.push_back(b[j]);
        j++;
    }

    for (auto& x : c) cout << x << ' ';
        cout << '\n';

    return 0;
}

