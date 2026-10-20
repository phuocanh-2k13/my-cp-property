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

    int n; cin >> n;
    while (n--) {
        int t; cin >> t;
        int be4; cin >> be4;
        bool bypass = false;
        for (int i = 2; i <= t; i++) {
            int a; cin >> a;
            if (be4 + 1 == a) {
                be4 = a;
            }
            else {
                if (bypass) {
                    continue;
                }
                else {
                    cout << i << '\n';
                    bypass = true;
                }
            }
        }
    }

    return 0;
}

