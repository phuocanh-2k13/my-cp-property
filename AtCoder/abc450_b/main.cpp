// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <unordered_map>
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
    unordered_map<ll, unordered_map<ll, ll>> C;
    for (int i = 1; i <= n - 1; i++) {
        for (int j = i + 1; j <= n; j++) {
            cin >> C[i][j];
        }
    }

    bool isExist = false;
    for (int a = 1; a <= n - 2; a++) {
        for (int b = a + 1; b <= n - 1; b++) {
            for (int c = b + 1; c <= n; c++) {
                if (C[a][b] + C[b][c] < C[a][c]) {
                    isExist = true;
                    break;
                }
            }
            if (isExist) break;
        }
        if (isExist) break;
    }

    cout << (isExist ? "Yes" : "No") << '\n';

    return 0;
}

