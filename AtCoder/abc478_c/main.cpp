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

    int n, k; cin >> n >> k;
    vll arr(n); for (auto& x : arr) cin >> x;

    vll arr_sorted = arr;
    sort(all(arr_sorted));

    ll i = 0;
    while (i < n && arr[i] == arr_sorted[i]) i++;

    ll j = n - 1;
    while (j >= 0 && arr[j] == arr_sorted[j]) j--;

    if (k >= j - i + 1) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}

