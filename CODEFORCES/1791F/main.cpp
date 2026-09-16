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

int compute(ll n) {
    int val = 0;
    while (n >= 1) {
        val += n % 10;
        n /= 10;
    }
    return val;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        vll arr(n); set<int> s;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > 9) s.insert(i);
        }
        while (q--) {
            int type; cin >> type;
            if (type == 2) {
                int x; cin >> x;
                cout << arr[x - 1] << '\n';
            }
            else {
                int l, r; cin >> l >> r;
                l--; r--;
                int i = l;
                while (!s.empty()) {
                    auto pos = s.lower_bound(i);
                    if (pos == s.end() || *pos > r) break;

                    arr[*pos] = compute(arr[*pos]);
                    int posE = *pos;
                    
                    if (arr[posE] <= 9) {
                        s.erase(pos);
                    }
                    i = posE + 1;
                }
            }
        }
    }

    return 0;
}

