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

        unordered_map<char, int> vc = {
            {'a', 0}, {'e', 0},
            {'b', 1}, {'c', 1}, {'d', 1}
        };

        deque<string> ans;
        for (int i = n - 1; i >= 0; i--) {
            if (vc[s[i]] == 1) {
                string p;
                p += s[i - 2];
                p += s[i - 1];
                p += s[i];
                ans.push_front(p);
                i -= 2;
            }
            else {
                string p;
                p += s[i - 1];
                p += s[i];
                ans.push_front(p);
                i--;
            }
        }

        string finalAns;
        while (!ans.empty()) {
            string p = ans.front();
            ans.pop_front();
            finalAns += p;
            finalAns += '.';
        }

        for (int i = 0; i < (int)finalAns.size() - 1; i++) {
            cout << finalAns[i];
        }
        cout << '\n';
    }

    return 0;
}

