#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    if (s[0] == s[1] || s[1] == s[2] || s[2] == s[3]) cout << "Bad\n";
    else cout << "Good\n";

    return 0;
}
