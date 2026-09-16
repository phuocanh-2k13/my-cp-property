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
    while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int ans = 0;
        for (int i = 0; i < n - k; i++) {
            if (s[i] == 'B') {
                for (int j = i; j < i + k; j++) {
                    s[j] = 'W';
                }
                ans++;
            }
        }
        for (int i = n - k; i < n; i++) {
            if (s[i] == 'B') {
                ans++;
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}

