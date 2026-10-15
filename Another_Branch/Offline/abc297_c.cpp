#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w; cin >> h >> w;
    vector<string> S(h); for (auto& x : S) cin >> x;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w - 1; j++) {
            if (S[i][j] == 'T' && S[i][j + 1] == 'T') {
                S[i][j] = 'P';
                S[i][j + 1] = 'C';
            }
        }
    }

    for (auto& s : S) cout << s << '\n';

    return 0;
}