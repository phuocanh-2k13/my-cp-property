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
        int n; cin >> n;
        string s; cin >> s;
        vi a(26), b(26);

        int maxAns = 0;
        for (char& c : s) {
            a[c - 97]++;
            if (a[c - 97] == 1) maxAns++;
        }

        for (int i = 0; i < n; i++) {
            a[s[i] - 97]--;
            b[s[i] - 97]++;

            int cntA = 0, cntB = 0;
            for (int i = 0; i < 26; i++) {
                cntA += a[i] ? 1 : 0;
                cntB += b[i] ? 1 : 0;
            }
            maxAns = max(maxAns, cntA + cntB);
        }

        cout << maxAns << '\n';
    }

    return 0;
}

