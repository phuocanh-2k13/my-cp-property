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
    queue<int> even, odd;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            odd.push(i);
        } 
        else {
            even.push(i);
        }
    }

    while (!even.empty()) {
        int x = even.front();
        even.pop();
        cout << x << ' ';
    }
    while (!odd.empty()) {
        int x = odd.front();
        odd.pop();
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}

