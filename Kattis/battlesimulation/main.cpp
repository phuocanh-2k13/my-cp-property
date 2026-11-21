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

    unordered_map<char, char> mapp = {
        {'R', 'S'},
        {'B', 'K'},
        {'L', 'H'},
    };
    string s; cin >> s;
    if (s.size() == 1) {
        cout << mapp[s[0]] << '\n';
    } else if (s.size() == 2)  {
        cout << mapp[s[0]] << mapp[s[1]] << '\n';
    } else {
        unordered_set<char> test;
        string ans;
        for (int i = 0; i < (int)s.size(); i++) {
            if (i + 2 < (int)s.size()) {
                test.insert(s[i]);
                test.insert(s[i + 1]);
                test.insert(s[i + 2]);
                if (test.size() == 3) {
                    ans += 'C';
                    i += 2;
                } else {
                    ans += mapp[s[i]];
                }
            } else {
                ans += mapp[s[i]];
            }
            
            test.clear();
        }
        cout << ans << '\n';

    }

    return 0;
}

