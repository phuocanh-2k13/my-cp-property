#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, s; cin >> m >> s;
    ll minimum = -1, maximum = -1;
    for (int i = 1; i <= s; i++) {
        string tmp = to_string(i) + to_string(s - i);
        ll total = 0;
        for (auto& c : tmp) {
            total += c - '0';
        }
        cerr << tmp.size() << ' ' << total << '\n';
        if (tmp.size() == m && total == s) {
            minimum = stoll(tmp);
            maximum = max(stoll(to_string(s - i) + to_string(i)), stoll(tmp));
            break;
        }
    }

    cout << minimum << ' ' << maximum << '\n';

    return 0;
}