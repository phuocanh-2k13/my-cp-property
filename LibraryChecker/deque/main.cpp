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

    deque<int> dque;

    int q; cin >> q;
    while (q--) {
        int type; cin >> type;
        if (type == 0) {
            int x; cin >> x;
            dque.push_front(x);
        }
        else if (type == 1) {
            int x; cin >> x;
            dque.push_back(x);
        }
        else if (type == 2) {
            dque.pop_front();
        }
        else if (type == 3) {
            dque.pop_back();
        }
        else {
            int idx; cin >> idx;
            cout << dque.at(idx) << '\n'; 
        }
    }

    return 0;
}

