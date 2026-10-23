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

    int p;
    vi arr(26);
    ll time = 0;
    ll pt = 0;
    while (true) {
        cin >> p;
        if (p == -1) break;

        char c;
        string verdict;
        cin >> c >> verdict;

        if (verdict == "right") {
            pt++;
            time += arr[c - 'A'] * 20 + p;
        }
        else {
            arr[c - 'A']++;
        }
    }

    cout << pt << ' ' << time << '\n';

    return 0;
}

