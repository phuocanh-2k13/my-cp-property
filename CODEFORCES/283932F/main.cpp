// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define mi map<int, int>
#define mll map<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool f(int x, const string& s, const string& t, const vi& arr) {
    vi removed(s.size());
    for (int i = 0; i < x; i++) removed[arr[i]]++;

    int j = 0;
    for (int i = 0; i < (int)s.size() && j < (int)t.size(); i++) {
        if (!removed[i] && t[j] == s[i]) j++;
    }

    return j == (int)t.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t; cin >> s >> t;
    vi arr(s.size()); for (auto& x : arr) {cin >> x;x--;}

    int l = 0, r = s.size();
    int ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (f(mid, s, t, arr)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}