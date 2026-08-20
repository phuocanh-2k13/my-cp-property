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

string removedAll(const string& exp) {
    string arr;
    for (auto& c : exp) {
        if (arr.size() >= 2 && c == 'C') {
            if (arr[arr.size() - 2]  == 'A' && arr[arr.size() - 1]  == 'B') {
                arr.pop_back();
                arr.pop_back();
            }
            else {
                arr.push_back(c);
            }
        } 
        else {
            arr.push_back(c);
        }
    }
    return arr;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    cout << removedAll(s) << '\n';

    return 0;
}

