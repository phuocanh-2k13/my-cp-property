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

    int q; cin >> q;
    while (q--) {
        int n, t; cin >> n >> t;
        vi a(n); for (auto& x : a) cin >> x;
        vi b(n); for (auto& x : b) cin >> x;

        int largestIdx = -1;
        int largestEntVal = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (a[i] + i <= t) {
                if (largestEntVal < b[i]) {
                    largestEntVal = b[i];
                    largestIdx = i + 1;
                }
            }
        } 

        cout << largestIdx << '\n';
    }

    return 0;
}

