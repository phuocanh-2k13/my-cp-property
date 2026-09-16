// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <unordered_map>
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
        string s;
        unordered_map<int, vi> freq;
        for (int i = 0; i < n; i++) {
            char c; cin >> c;
            s.push_back(c);
            freq[c].push_back(i);
        }

        vi saved(n + 1, 2);
        bool zOo = false;
        bool isOk = true;
        for (int i = 0; i < n; i++) {
            if (saved[i] != 2) {
                if (saved[i] == saved[i - 1] || saved[i] == saved[i + 1]) {
                    isOk = false;
                    break;
                }
                else {
                    zOo = !zOo;
                }
            }
            else {
                char c = s[i];
                for (auto& idx : freq[c]) saved[idx] = zOo;
                zOo = !zOo;
            }
        }

        //cerr << "DEBUG " << t << ": ";
        //for (auto& x : saved) cerr << x << ' ';
        //cerr << '\n';
        cout << (isOk ? "YES\n" : "NO\n");
    }

    return 0;
}

