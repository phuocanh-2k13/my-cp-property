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

    int n, t; cin >> n >> t;
    vi arr(n); for (auto& x : arr) cin >> x;
    
    int maxBook = 0;
    int r = 0;
    int timeUsed = 0;
    for (int i = 0; i < n; i++) {
        while (r < n && arr[r] + timeUsed <= t) {
            timeUsed += arr[r];
            r++;
        }
        maxBook = max(maxBook, r - i);
        timeUsed -= arr[i];
    }

    cout << maxBook << '\n';

    return 0;
}

