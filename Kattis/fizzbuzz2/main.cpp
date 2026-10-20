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

bool isDig(string& s) {
    for (auto& c : s) {
        if (!isdigit(c)) {
            return false;
        }
    } 
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    int bestAns = -1;
    int pl = -1;
    for (int i = 0; i < n; i++) {
        int corAns = 0;
        for (int j = 1; j <= m; j++) {
            string x; cin >> x;
            if (j % 3 == 0 && j % 5 == 0) {
                if (x == "fizzbuzz") corAns++;
            }
            else if (j % 3 == 0) {
                if (x == "fizz") corAns++;
            }
            else if (j % 5 == 0) {
                if (x == "buzz") corAns++;
            }
            else {
                if (x == to_string(j)) corAns++;
            }
        }
        if (bestAns < corAns) {
            bestAns = corAns;
            pl = i + 1;
        }
    }

    cout << pl << '\n';

    return 0;
}

