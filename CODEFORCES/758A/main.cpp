#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int maxEl = 0;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
        maxEl = max(maxEl, x);
    }

    int sum = 0;
    for (int i = 0; i  < n; i++) {
        sum += maxEl - arr[i]; 
    }

    cout << sum << '\n';

    return 0;
}