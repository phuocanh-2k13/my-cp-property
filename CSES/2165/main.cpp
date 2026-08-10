#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int

vector<pair<int, int>> process;
void addResult(int start, int end) {
    process.emplace_back(start, end);
}
void towerOfHanoi(int n, int start, int end) {
    if (n == 1) process.emplace_back(start, end);
    else {
        int mvtToOther = 6 - (start + end);
        towerOfHanoi(n - 1, start, mvtToOther);
        addResult(start, end);
        towerOfHanoi(n - 1, mvtToOther, end);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    towerOfHanoi(n, 1, 3);

    cout << process.size() << '\n';
    for (auto& [x, y] : process) {
        cout << x << ' ' << y << '\n';
    } 
    
    return 0;
}