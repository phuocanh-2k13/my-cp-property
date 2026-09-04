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
    vll a(n); for (auto& x : a) cin >> x;
    vll b(m); for (auto& x : b) cin >> x;

    int i = 0; int j = 0;
    while (j < m) {
        while (a[i] < b[j] && i < n) i++;
        cout << i << ' '; 
        j++;
    }

    cout << '\n';

    return 0;
}

