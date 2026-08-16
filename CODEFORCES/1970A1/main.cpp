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

    string s; cin >> s;
    vector<pi> balance_prefix;

    int last = 0;
    for (int i = 1; i <= s.size(); i++) {
        balance_prefix.push_back({ last, i });
        if (s[i - 1] == '(') last += 1;
        else last -= 1;
    }

    sort(all(balance_prefix), [](const pi& f, const pi& s) {
        if (f.first == s.first) return f.second > s.second;
        else return f.first < s.first;
    });

    for (auto& [x, y] : balance_prefix) {
        cout << s[y - 1];
    }
    cout << '\n';

    return 0;
}
