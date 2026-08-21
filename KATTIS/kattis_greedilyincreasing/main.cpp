#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    
    vector<int> GID;
    int leftMostIdx = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (!i) GID.push_back(x);
        else {
            if (x > GID[leftMostIdx]) { 
                GID.push_back(x);
                leftMostIdx++;
            }
        }
    }
    

    cout << GID.size() << '\n';
    for (int i = 0; i < GID.size(); i++) {
        cout << GID[i] << ' ';
    }
    cout << '\n';

    return 0;
}