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

    int n; cin >> n;
    
    int k1; cin >> k1;
    deque<int> a;
    for (int i = 0; i < k1; i++) {
        int x; cin >> x;
        a.push_back(x);
    } 

    int k2; cin >> k2;
    deque<int> b;
    for (int i = 0; i < k2; i++) {
        int x; cin >> x;
        b.push_back(x);
    } 

    set<pair<deque<int>, deque<int>>> state;
    bool isByRepeatState = false;
    while (!a.empty() && !b.empty()) {
        int x1 = a.front(), x2 = b.front();
        a.pop_front();
        b.pop_front();
        if (x1 < x2) {
            b.push_back(x1);
            b.push_back(x2);
        }
        else {
            a.push_back(x2);
            a.push_back(x1);
        }
        
        if (state.count({ a, b })) {
            isByRepeatState = true;
            break;
        }
        else {
            state.insert({ a, b });
        }
    }

    if (isByRepeatState) {
        cout << "-1\n";
    }
    else {
        cout << state.size() << ' ';
        if (b.empty()) {
            cout << 1 << '\n';
        }
        else {
            cout << 2 << '\n';
        }
    }

    return 0;
}

