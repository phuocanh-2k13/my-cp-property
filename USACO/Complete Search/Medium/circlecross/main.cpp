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

    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);

    vi start(26, -1);
    vi end(26, -1);
    for (int i = 0; i < 52; i++) {
        char c; cin >> c;
        if (start[c - 'A'] == -1) {
            start[c - 'A'] = i;
        }
        else {
            end[c - 'A'] = i;
        }
    }

    int crossPair = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (start[i] < start[j] && start[j] < end[i] && end[i] < end[j]) crossPair++;
        }
    }

    cout << crossPair << '\n';

    return 0;
}

