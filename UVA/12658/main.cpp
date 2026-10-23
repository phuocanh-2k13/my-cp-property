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
    string a; cin >> a;
    string b; cin >> b;
    string c; cin >> c;
    string d; cin >> d;

    for (int i = 3; i < n * 3 + n; i += 4) {
        if (a[i - 3] == '.' && a[i - 2] == '*' && a[i - 1] == '.') {
            cout << 1;
        }
        else {
            if (d[i - 3] == '*') cout << 2;
            else cout << 3;
        }
    }

    cout << '\n';

    return 0;
}

