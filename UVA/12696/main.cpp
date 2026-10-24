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

    int t; cin >> t;
    int allow = 0;
    while (t--) {
        float a, b, c, w;
        cin >> a >> b >> c >> w;

        if (w > 7.f) {
            cout << 0 << '\n';
        }
        else {
            if (a <= 56.f && b <= 45.f && c <= 25.f) {
                cout << 1 << '\n';
                allow++;
            }
            else {
                if (a + b + c <= 125.f) {
                    cout << 1 << '\n';
                    allow++;
                }
                else cout << 0 << '\n';
            }
        }
    }

    cout << allow << '\n';

    return 0;
}

