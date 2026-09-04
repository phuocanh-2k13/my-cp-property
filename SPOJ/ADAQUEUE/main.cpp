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

    int q; cin >> q;
    deque<int> dq;
    bool isReverse = false;
    while (q--) {
        string cmd; cin >> cmd;
        if (cmd == "reverse") isReverse = !isReverse;
        else {
            if (cmd == "back") {
                if (dq.empty()) cout << "No job for Ada?\n";
                else {
                    if (isReverse) {
                        cout << dq.front() << '\n';
                        dq.pop_front();
                    }
                    else {
                        cout << dq.back() << '\n';
                        dq.pop_back();
                    }
                }
            }
            else if (cmd == "front") {
                if (dq.empty()) cout << "No job for Ada?\n";
                else {
                    if (isReverse) {
                        cout << dq.back() << '\n';
                        dq.pop_back();
                    }
                    else {
                        cout << dq.front() << '\n';
                        dq.pop_front();
                    }
                }
            }
            else if (cmd == "push_back") {
                int x; cin >> x;
                if (isReverse) dq.push_front(x);
                else dq.push_back(x);
            }
            else if (cmd == "toFront") {
                int x; cin >> x;
                if (isReverse) dq.push_back(x);
                else dq.push_front(x);
            }
        }
    }

    return 0;
}

