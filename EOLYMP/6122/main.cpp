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

    stack<ll> stk; string s; cin >> s; while (s != "exit") { if (s == "push")
    { ll x; cin >> x; stk.push(x); cout << "ok" << '\n'; } else if
    (s == "pop") { ll x = stk.top(); stk.pop(); cout << x << '\n'; } else
    if (s == "back") { ll x = stk.top(); cout << x << '\n'; } else if (s == "size") {
        int x = stk.size();
        cout << x << '\n';
    }
    else if (s == "clear") {
        while (!stk.empty()) stk.pop();
        cout << "ok" << '\n';
    }

        cin >> s;
    }
    cout << "bye\n";
    return 0;
}

