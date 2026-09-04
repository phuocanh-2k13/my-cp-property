// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <string>
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
        string s; cin >> s;

        int ans = 1, x = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) ans++;
            if (i == n - 1) break;

            if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
                if (s[i - 1] == s[i + 1]) x = 2;
                else x = max(x, 1);
            }
        }
        cout << (ans - x) << '\n';
    }

    return 0;
}

