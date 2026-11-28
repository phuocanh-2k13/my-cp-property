#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    ll this_pos = s.size();
    ll moves = 0;
    for (ll i = 1; i <= (ll)s.size(); i++) {
        if (s[i - 1] == 'B') {
            moves += this_pos - i;
            this_pos--;
        }
    }
    cout << moves << '\n';

    return 0;
}
