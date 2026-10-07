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

    int n, m; cin >> n >> m;
    vi arr(m + 1);
    while (n--) {
        int wishes; cin >> wishes;
        int chosen = 0;
        for (int i = 0; i < wishes; i++) {
            int wish; cin >> wish;
            if (arr[wish] != 1 && !chosen) chosen = wish;
        }
        arr[chosen] = 1;
        cout << chosen << '\n';
    }

    return 0;
}

