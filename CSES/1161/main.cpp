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

    int x; cin >> x;
    int n; cin >> n;
    priority_queue<ll, vll, greater<ll>> pque;
    for (int i = 0; i < n; i++) {
        ll val; cin >> val;
        pque.push(val);
    }

    ll minCost = 0;
    while (pque.size() > 1) {
        ll x1 = pque.top();
        pque.pop();
        ll x2 = pque.top();
        pque.pop();

        minCost += x1 + x2;
        ll currentCose = x1 + x2;
        pque.push(currentCose);
    }

    cout << minCost << '\n';

    return 0;
}

