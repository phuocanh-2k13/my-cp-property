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

pi process(const string& s) {
    stack<int> stk;
    stk.push(-1);
    int max_len = 0;
    int count = 1;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '(') stk.push(i);
        else {
            stk.pop();
            if (stk.empty()) stk.push(i);
            else {
                int sizeOfThisPart = i - stk.top();
                if (sizeOfThisPart > max_len) {
                    max_len = sizeOfThisPart;
                    count = 1;
                }
                else {
                    count += sizeOfThisPart == max_len;
                }
            }
        }
    }
    return { max_len, count };
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    pi ans = process(s);
    cout << ans.first << ' ' << ans.second << '\n';

    return 0;
}

