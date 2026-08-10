#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    long long stLength; cin >> stLength;
    vector<long long> arr(n);
    for (auto& x : arr) cin >> x;

    arr.push_back(0);
    arr.push_back(stLength);

    sort(arr.begin(), arr.end());

    double maxR = 0;
    for (int i = 1; i < n + 2; i++) {
        if (i == 1) maxR = arr[i] - arr[i-1];
        else if (i == n + 1) maxR = max(maxR, (double)arr[i] - arr[i-1]);
        else maxR = max(maxR, (arr[i] - arr[i-1]) / 2.0);
    }

    cout << fixed << setprecision(10) << maxR << '\n';
    

    return 0;
}