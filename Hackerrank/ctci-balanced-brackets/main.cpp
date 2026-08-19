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

string isBalanced(string expression) {
    stack<char> charStack;
    for (char& c : expression) {
        if (c == '(' || c == '[' || c == '{') charStack.push(c);
        else {
            if (charStack.empty()) return "NO";

            char before = charStack.top();
            charStack.pop();

            if ((before != '(' && c == ')') || (before != '[' && c == ']') || (before != '{' && c == '}')) return "NO"; 
        }
    }
    return (charStack.empty() ? "YES" : "NO");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string dummy; getline(cin, dummy);
    while (t--) {
        string s; cin >> s;
        cout << isBalanced(s) << '\n';
    }

    return 0;
}

