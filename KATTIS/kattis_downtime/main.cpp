#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> req(n);
    for (auto& x : req) cin >> x;
    
    int minimumServer = 0, left = 0;
    for (int right = 0; right < req.size(); right++) {
        while (req[right] >= req[left] + 1000) {
            left++;
        }
        int reqAmount = ceil((right - left + 1) / (double)k);
        minimumServer = max(minimumServer, reqAmount);
    }

    cout << minimumServer << '\n';

    return 0;
}