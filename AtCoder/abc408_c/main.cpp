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
    vi arr(n + 2);
    while (m--) {
        int l, r; cin >> l >> r;
        arr[l]++;
        arr[r + 1]--;
    }

    int minimum = INT_MAX;
    int lasted = 0;
    for (int i = 1; i <= n; i++) {
        lasted += arr[i];
        minimum = min(minimum, lasted);
    }

    cout << minimum << '\n';

    return 0;
}

