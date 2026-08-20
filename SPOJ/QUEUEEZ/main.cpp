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
    cin.tie(NULL);

    int t; cin >> t;
    queue<ll> que;
    while (t--) {
        int type; cin >> type;
        if (type == 1) {
            ll x; cin >> x;
            que.push(x);
        }
        else if (type == 2) {
            if (!que.empty()) que.pop();
        }
        else {
            if (que.empty()) cout << "Empty!\n";
            else cout << que.front() << '\n';
        }
    }

    return 0;
}

