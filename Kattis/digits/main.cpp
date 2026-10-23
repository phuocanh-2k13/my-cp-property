// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <string>
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

    string s;
    while (true) {
        cin >> s;
        if (s == "END") break;
        if (s == "1") {
            cout << 1 << '\n';
            continue;
        }

        ll x = s.size();
        ll t = 2;
        while (true) {
            ll next = 0;
            ll tmp = x;
            while (tmp) {
                next++;
                tmp /= 10;
            }
            if (next == x) break;
            x = next;
            t++;
        }

        cout << t << '\n';
    }

    return 0;
}

