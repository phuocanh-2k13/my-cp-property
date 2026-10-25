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

    int a, c;
    while (true) {
        cin >> a >> c;
        if (!a && !c) break;

        int ans = a;
        int be4 = 0;
        for (int i = 0; i < c; i++) {
            int x; cin >> x;  
            if (i == 0) ans -= x;
            else {
                ans += max(0, be4 - x);
            }
            be4 = x;
        }

        cout << ans << '\n';
    }

    return 0;
}

