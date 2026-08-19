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

class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        for (auto& c : s) {
            if (c == '(' || c == '[' || c == '{') charStack.push(c);
            else {
                if (charStack.empty()) return false;

                char check = charStack.top();
                charStack.pop();
                if (check == '(' && c != ')') return false;
                if (check == '[' && c != ']') return false;
                if (check == '{' && c != '}') return false;
            }
        }
        return charStack.empty();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    Solution solution;
    cout << (solution.isValid(s) ? "true" : "false") << '\n';

    return 0;
}

