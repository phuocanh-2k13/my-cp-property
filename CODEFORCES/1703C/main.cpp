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
    unordered_map<char, int> c_map = {{'D', 1}, {'U', -1}};
    while (t--) {
        int n; cin >> n;
        vi finalSeq(n); for (auto& x : finalSeq) cin >> x;

        vi crackedSeq = finalSeq;
        for (int i = 0; i < n; i++) {
            int steps; cin >> steps;
            string stepDetail; cin >> stepDetail;

            int changes = 0;
            for (auto& c : stepDetail) changes += c_map[c];

            crackedSeq[i] = crackedSeq[i] + changes;
            if (crackedSeq[i] < 0) crackedSeq[i] += 10;
            crackedSeq[i] = crackedSeq[i] % 10;
        } 

        for (auto& x : crackedSeq) cout << x << ' ';
            cout << '\n';
    }

    return 0;
}

