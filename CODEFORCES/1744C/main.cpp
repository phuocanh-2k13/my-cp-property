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

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        char c; cin >> c;
        string s; cin >> s;
        s += s;
        vi greenPlace;
        for (int i = 0; i < n*2; i++) if (s[i] == 'g') greenPlace.push_back(i);

        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                auto it = lower_bound(greenPlace.begin(), greenPlace.end(), i);
                ans = max((int)(*it - i), ans);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

