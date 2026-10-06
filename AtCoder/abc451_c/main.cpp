// Ha Phixah Example Templates Edited 2026-08-10
#include <algorithm>
#include <bits/stdc++.h>
#include <queue>
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
    priority_queue<ll, vector<ll>, greater<ll>> arr; 
    while (q--) {
        int type, height;
        cin >> type >> height;
        if (type == 1) {
            arr.push(height);
        }
        else {
            while (!arr.empty() && arr.top() <= height) {
                arr.pop();
            }  
        }
        cout << arr.size() << '\n';
    }

    return 0;
}

