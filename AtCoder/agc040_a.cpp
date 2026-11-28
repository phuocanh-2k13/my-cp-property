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
    vll left(s.size() + 1), right(s.size() + 1);
    for (int i = 1; i <= (int)s.size(); i++) {
        if (s[i - 1] == '<') left[i] = left[i - 1] + 1;
        else left[i] = 0;
    }
    for (int i = (int)s.size() - 1; i >= 0; i--) {
        if (s[i] == '>') right[i] = right[i + 1] + 1;
        else right[i] = 0;
    }

    ll ans = 0;
    for (int i = 0; i <= s.size(); i++) {
        ans += max(left[i], right[i]);
    }

    cout << ans << '\n';
    /*
    ll ans = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        char c = s[i];
        ll counted = 1;
        while (s[i + 1] == c && i < s.size() - 1) {
            i++;
            counted++;
        }
        ans += (counted * (counted + 1)) / 2;
    }
    cout << ans << '\n';
    */
    /*
    vll arr(s.size() + 1);
    ll minVal = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') arr[i + 1] = arr[i] + 1;
        else arr[i + 1] = arr[i] - 1;

        if (s[i] == '>' && s[i + 1] == '<') arr[i + 1] = 0;

        minVal = min(arr[i+1], minVal);
        cerr << arr[i + 1] << ' ';
    }
    cerr << '\n';
    minVal = abs(minVal);
    ll ans = 0;
    if (s[0] != '<') ans += arr[0] + minVal;
    for (int i = 1; i < s.size(); i++) {
        ans += arr[i] + minVal;
        cerr << ans << '\n';
    }
    cerr << "DEB: " << minVal << '\n';
    cout << ans << '\n';
    return 0;

    // 0 < 1 > 0 > -1 > -2 < -1 < 0 > 1 < 2 < 3 < 4 < 5 < 6 > 5 > 4 > 3 < 4
    // */

}
