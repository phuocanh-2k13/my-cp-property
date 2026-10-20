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

    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        int n; cin >> n;
        int maximum = INT_MIN;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            maximum = max(maximum, x);
        }
        cout << "Case " << i << ": " << maximum << '\n'; 
    }

    return 0;
}

