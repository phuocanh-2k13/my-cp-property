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
        stack<int> docStack;
        vector<bool> printed(n);
        for (int i = 0; i < n; i++) {
            char c; cin >> c;
            if (c == '1') {
                docStack.push(i);
            } else if (c == '2') {
                if (!docStack.empty()) { 
                    printed[docStack.top()] = true;
                    docStack.pop();
                } else {
                    printed[i] = true;
                }
            } else {
                printed[i] = true;
            }
        }

        int notPrinted = 0;
        vi doc;
        for (int i = 0; i < n; i++) {
            if (!printed[i]) {
                notPrinted++;
                doc.push_back(i + 1);
            }
        }

        cout << notPrinted << '\n';
        for (auto& x : doc) cout << x << ' ';
        cout << '\n';
    }

    return 0;
}

