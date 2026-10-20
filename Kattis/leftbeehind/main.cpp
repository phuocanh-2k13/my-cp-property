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

    int sweet, sour;
    while (cin >> sweet >> sour) {
        if (sweet == 0 && sour == 0) break;
        
        if (sweet + sour == 13) {
            cout << "Never speak again.\n";
        }
        else if (sour > sweet) {
            cout << "Left beehind.\n";
        }
        else if (sweet > sour) {
            cout << "To the convention.\n";
        }
        else if (sweet == sour) {
            cout << "Undecided.\n";
        }
    }

    return 0;
}

