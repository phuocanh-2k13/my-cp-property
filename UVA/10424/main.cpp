// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <cctype>
#include <iomanip>
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

void lowercase(string& s) {
    for (auto& c : s) {
        c = tolower(c);
    }
}

void removecase(string& s) {
    string ans;
    for (auto& c : s) {
        int t = c - 'a' + 1;
        if (t > 0 && t <= 26) {
            ans += c;
        } 
    }
    s = ans;
}

int calc(string s) {
    int ans = 0;
    for (auto& c : s) {
        ans += c - 'a' + 1;
    } 
    return ans;
}

void calcDig(int& a) {
    beg:
        int ans = 0;
        while (a) {
            ans += a % 10;
            a /= 10;
        }
        a = ans;

    if (a >= 10) goto beg;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    while (getline(cin, s) && getline(cin, t)) {
        lowercase(s);
        removecase(s);
        lowercase(t);
        removecase(t);
        int sum1 = calc(s), sum2 = calc(t);
        calcDig(sum1);
        calcDig(sum2);
        double s1 = sum1, s2 = sum2;

        cout << fixed << setprecision(2);
        cout << (min(s1, s2) / max(s1, s2) * 100) << ' ' << '%' << '\n';
    }

    return 0;
}

