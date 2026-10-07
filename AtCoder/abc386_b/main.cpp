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

    int ans = 0;
    string s; cin >> s;
    s += '.';
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (s[i] == '0' && s[i + 1] == '0') {
            ans++;
            i++;
        }
        else {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}

