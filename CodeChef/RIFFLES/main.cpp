// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <tuple>
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

vi applyPerm(vi& P, vi& A) {
    vi Ap(P.size());
    for (int i = 0; i < (int)P.size(); i++) {
        Ap[i] = A[P[i]];
    }
    return Ap;
}

vi solve(vi& P, vi& A, int k) {
    while (k > 0) {
        if (k & 1) A = applyPerm(P, A);
        P = applyPerm(P, P);
        k >>= 1;
    }
    return A;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vi P;
        for (int i = 0; i < n; i += 2) P.push_back(i);
        for (int i = 1; i < n; i += 2) P.push_back(i);

        vi A; for (int i = 1; i <= n; i++) A.push_back(i);

        vi ans = solve(P, A, k);
        for (auto& x : ans ) cout << x << ' ';
        cout << '\n';
    }

    return 0;
}

