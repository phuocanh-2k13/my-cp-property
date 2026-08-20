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
    vector<int> arr(t); for (auto& x : arr) cin >> x;

    stack<int> san;

    for (int i = 0; i < t; i++) {
        while (!san.empty() && arr[san.top()] >= arr[i]) san.pop();

        if (san.empty()) cout << "0 ";
        else cout << (san.top() + 1) << ' ';
        san.push(i); 
    }

    return 0;
}

