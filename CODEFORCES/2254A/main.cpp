// Ha Phixah Example Templates Edited 2026-08-10
#include <algorithm>
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
    while (t--) {
        vi arr(3); for (auto& x : arr) cin >> x;

        int round = 0;
        while (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2]) {
            int minEl = min_element(all(arr)) - arr.begin();
            int maxEl = max_element(all(arr)) - arr.begin();
            arr[maxEl]--;
            arr[minEl]++;
            round++;
        }

        cout << round << '\n';
    }

    return 0;
}

