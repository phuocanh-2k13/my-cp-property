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
        int n, m; cin >> n >> m;
        vi freq_a(26), freq_b(26);
        for (int i = 0; i < n; i++) {
            char x; cin >> x;
            freq_a[x - 'a']++;
        }
        for (int i = 0; i < m; i++) {
            char x; cin >> x;
            freq_b[x - 'a']++;
        }

        bool isOk = true;
        for (char i = 'a'; i <= 'z'; i++) {
            int val = freq_a[i - 'a'] - freq_b[i - 'a'];
            //cerr << "TEST " << t << ' ' << i << ':' << val << '\n';
            if (val != 0) {
                if (i != 's' && i != 'i' && i != 'x') {
              //      cerr << "TRIGGER: " << i << '\n';
                    isOk = false;
                    break;
                }
                else if (val != 1) {
                    isOk = false;
                    break;
                }
            }
            if (i == 's' || i == 'i' || i == 'x') {
              //      cerr << "TRIGGER: " << i << '\n';
                if (val == 0) {
                    
                isOk = false;
                break;
                }
            }
        }

        cout << (isOk ? "YES\n" : "NO\n");
    }

    return 0;
}

