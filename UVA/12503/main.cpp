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
    while (t--) {
        int n; cin >> n;
        int x = 0;

        vector<string> ins(n + 1);
        for (int i = 1; i <= n; i++) {
            string s; cin >> s;
            if (s == "SAME") {
                cin >> s;
                cin >> s;
                ins[i] = ins[stoi(s)];
            }
            else {
                ins[i] = s;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (ins[i] == "LEFT") {
                x--;
            }
            else {
                x++;
            }
        }

        cout << x << '\n';
    }

    return 0;
}

