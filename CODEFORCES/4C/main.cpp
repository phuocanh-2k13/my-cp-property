#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    unordered_map<string, int> names;
    for (int i = 0; i < n; i++) {
        string name; cin >> name;
        if (names.count(name)) {
            names[name]++;
            cout << name << names[name] << '\n';
        } 
        else {
            names[name] = 0;
            cout << "OK\n";
        }
    }

    return 0;
}