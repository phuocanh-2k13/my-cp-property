#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> val(4);
    for (int i = 0; i < 4; i++) {
        cin >> val[i];
    }

    int max_Val = *max_element(val.begin(), val.end());
    for (auto& x : val) {
        if (x != max_Val)
            cout << (max_Val - x) << ' ';
    }

    cout << '\n';

    return 0;
}