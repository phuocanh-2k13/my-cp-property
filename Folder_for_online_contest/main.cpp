// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <cmath>
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

pair<ll, bitset<8001>> solve(ll n, ll s, ll l, vll& arr) {
    bitset<8001> origin;

    if (l == 0) {
        origin.set(s);
        return {0, origin};
    }
    else if (l < 0) {
        return {-1, origin};
    }

    ll currentMax = 1;
    cout << "\nBRANCH 1\n";
    pair<ll, bitset<8001>> firstAns = solve(n, s - 1, l - arr[s - 1], arr);
    if (firstAns.first <= 0) {
        currentMax += firstAns.first + 1;
        origin |= firstAns.second;
            cout << "-------------- STATE TRIGGER A: " << currentMax << '\n';

    }
    else {
        currentMax += firstAns.first;
        origin |= firstAns.second;
            cout << "-------------- STATE TRIGGER B: " << currentMax << '\n';

    }
    cout << "\nBRANCE 2\n";
    pair<ll, bitset<8001>> secondAns = solve(n, s - 1, l - arr[s - 1], arr);
    if (secondAns.first > currentMax) {
        currentMax = secondAns.first;
        origin = secondAns.second;
    } 

    cout << "STATE: " << currentMax << '\n';

    return {currentMax, origin};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s, l;
    cin >> n >> s >> l;

    vll arr(n - 1);
    for (auto& x : arr) cin >> x;

    cout << solve(n, s, l, arr).first << '\n';

    return 0;
}

