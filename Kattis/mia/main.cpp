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

    int s1, s2, r1, r2;
    while (true) {
        cin >> s1 >> s2 >> r1 >> r2;
        if (!s1 && !s2 && !r1 && !r2) {
            break;
        }

        int val1 = s1 * 10 + s2;
        int val2 = r1 * 10 + r2;
        if ((val1 == 12 || val1 == 21)) {
            if (val2 == 12 || val2 == 21) {
                cout << "Tie." << '\n';
            }
            else {
                cout << "Player 1 wins.\n"; 
            }
        }
        else if (val2 == 12 || val2 == 21) {
            cout << "Player 2 wins.\n"; 
        }
        else if (s1 == s2) {
            if (r1 == r2) {
                if (s1 > r1) cout << "Player 1 wins.\n";
                else if (s1 < r1) cout << "Player 2 wins.\n";
                else cout << "Tie.\n";
            }
            else {
                cout << "Player 1 wins.\n";
            }
        }
        else if (r1 == r2) {
            cout << "Player 2 wins.\n"; 
        }
        else {
            if (s2 > s1) {
                val1 = s2 * 10 + s1;
            }
            if (r2 > r1) {
                val2 = r2 * 10 + r1;
            }
            if (val1 > val2) cout << "Player 1 wins.\n";
            else if (val1 < val2) cout << "Player 2 wins.\n";
            else cout << "Tie.\n";
        }
    }

    return 0;
}

