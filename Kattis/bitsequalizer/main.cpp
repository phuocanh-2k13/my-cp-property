// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <unordered_map>
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

    int C; cin >> C;
    for (int a = 1; a <= C; a++) {
        string s, t; cin >> s >> t;
        unordered_map<char, int> diff;
        int c1 = count(all(s), '1');
        int c2 = count(all(t), '1');
        if (s.size() != t.size() || c1 > c2) {
            cout << "Case " << a << ": " << "-1" << '\n';
            continue;
        }

        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] != t[i]) diff[s[i]]++;
        }

        if (diff['0'] >= diff['1']) {
            diff['0'] -= diff['1'];
        } else {
            diff['1'] -= diff['0'];
        }

        int ans = diff['1'] + diff['0'] + diff['?'];
        cout << "Case " << a << ": " << ans << '\n';
    }

    return 0;
}

