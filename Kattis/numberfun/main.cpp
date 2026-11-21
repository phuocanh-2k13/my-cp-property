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
    while (n--) {
        int a, b, c; cin >> a >> b >> c;
        if (a + b == c) cout << "Possible\n";
        else if (a - b == c || b - a == c) cout << "Possible\n";
        else if (a * b == c) cout << "Possible\n";
        else {
            if (!a || !b) {
                if (!c) cout << "Possible\n";
                else cout << "Impossible\n";
                continue;
            }
            int valA = a / b, valB = b / a;
            if (valA * b == a && valA == c) {
                cout << "Possible\n";
            } else if (valB * a == b && valB == c) {
                cout << "Possible\n";
            } else {
                cout << "Impossible\n";
            }
        }
    }

    return 0;
}

