// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <climits>
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

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vll arr(n); for (auto& x : arr) cin >> x;
        ll maxVal = LLONG_MIN;
        ll low = 0, high = 0;
        for (int i = 0; i < n; i++) {
            maxVal = max({ maxVal, arr[i] - low, arr[i] + high});
            low = min(arr[i], arr[i] + 2 * low);
            high = max(arr[i], arr[i] + 2 * high);
        }
        cout << maxVal << '\n';
    }

    return 0;
}

