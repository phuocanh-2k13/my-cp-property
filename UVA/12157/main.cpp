// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <ios>
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

    int t; cin >> t;
    for (int c = 1; c <= t; c++) {
        int n; cin >> n;
        int t1 = 0, t2 = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            t1 += x / 30 + 1;
            t2 += x / 60 + 1;
            cerr << t1 << ' ' << t2 << '\n';
        }

        t1 *= 10;
        t2 *= 15;
        if (t1 < t2) {
            cout << "Case " << c << ": Mile " << t1 <<'\n';
        }
        else if (t1 > t2) {
            cout << "Case " << c << ": Juice " << t2 <<'\n';
        }
        else {
            cout << "Case " << c << ": Mile Juice " << t1 <<'\n';
        }
    }

    return 0;
}

