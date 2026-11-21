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
    vector<vi> arr(3);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        arr[x - 1].push_back(i + 1);
    }


    int ans = 100000000;
    for (auto& x : arr) ans = min((int)x.size(), ans);

    cout << ans << '\n';
    for (int i = 0; i < ans; i++) {
        cout << arr[0][i] << ' ' << arr[1][i] << ' ' << arr[2][i] << '\n';
    }

    return 0;
}

