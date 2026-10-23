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

    vi arr(3); for (auto& x : arr) cin >> x;
    sort(all(arr));

    if (arr[1] - arr[0] > arr[2] - arr[1]) {
        cout << arr[0] + (arr[2] - arr[1]) << '\n';
    }
    else if (arr[1] - arr[0] < arr[2] - arr[1]) {
        cout << arr[1] + (arr[1] - arr[0]) << '\n';
    }
    else {
        cout << arr[2] + (arr[1] - arr[0]) << '\n';
    }

    return 0;
}

