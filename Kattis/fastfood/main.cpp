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
        int n, k; cin >> n >> k;
        vector<vi> order(n);
        vi prize(n);
        for (int i = 0; i < n; i++) {
            int ords; cin >> ords;
            while (ords--) {
                int x; cin >> x;
                order[i].push_back(x);
            }
            int p; cin >> p;
            prize[i] = p;
        }

        vi cash(k + 1);
        for (int i = 1; i <= k; i++) {
            cin >> cash[i];
        }

        int ans = 0;
        for (int i = 0;  i < order.size(); i++) {
            int thisPrize = INT_MAX;
            for (auto& stk : order[i]) {
                thisPrize = min(thisPrize, cash[stk]);
            }
            ans += thisPrize * prize[i];
        }

        cout << ans << '\n';
    }

    return 0;
}

