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
        string s; cin >> s;
        if (s[0] == 'P') cout << "skipped\n";
        else {
            int a = 0, b = 0;
            bool isYet = false;
            for (char& c : s) {
                if (c == '+') {
                    isYet = true;
                    continue;
                }

                if (!isYet) {
                    a *= 10;
                    a += (int)(c - '0');
                }
                else {
                    b *= 10;
                    b += (int)(c - '0');    
                }
            }

            cout << a + b << '\n';
        }
    }

    return 0;
}

