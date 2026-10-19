#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int longest = 1;
    for (int i = 1; i < (int)s.size() - 1; i++) {
        if (s[i - 1] == s[i + 1]) {
            int curr = 1;
            for (int range = 1; i - range >= 0 && i + range < (int)s.size(); range++) {
                if (s[i - range] == s[i + range]) {
                    curr += 2;
                }
                else {
                    break;
                }
            }
            longest = max(longest, curr);
        }
    }

    cout << longest << '\n';

    return 0;
}