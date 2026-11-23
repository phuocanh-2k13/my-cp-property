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
    vector<string> S(n), P(n);
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        int c; cin >> c;
        S[i] = s;
        P[i] = c;
    }

    vi arr(n);
    for (int i = 0; i < n; i++) arr[i] = i;
    sort(all(arr), [&](int a, int b){
        if (S[a] != S[b]) return S[a] < S[b];
        else return P[a] > P[b];
    });

    for (auto& x : arr) cout << x + 1 << '\n';    



    return 0;
}

