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

vll ans;
bool found = false;
void solve(ll a, ll b) {
    if (found) return;
    if (a * 2 <= b) solve(a * 2, b);
    if (a * 10 + 1 <= b) solve(a * 10 + 1, b);

    if (a == b || found) {
        ans.push_back(a);
        found = true;
        return;
    }
    else if (a > b) return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b; cin >> a >> b;
    if (a > b) cout << "NO\n";
    else {
        solve(a, b);
        if (ans.size()) {
            cout << "YES\n";
            cout << ans.size() << '\n';
            reverse(all(ans));
            for (auto& x : ans) cout << x << ' ';
            cout << '\n';
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}

