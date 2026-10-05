// Ha Phixah Example Templates Edited 2026-08-10
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define pi pair<int, int>
#define pll pair<long long, long long>

#define si unordered_set<int>
#define sll unordered_set<long long>

#define mi unordered_map<int, int>
#define mll unordered_map<long long, long long>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k; cin >> n >> k;
    vll arr(n + 1); for (int i = 1; i <= n; i++) cin >> arr[i];

    vll prefMax(n + 1), suffixMin(n + 1);
    

    if (is_sorted(all(arr))) cout << "Yes\n";
    else if (k == 1) cout << "No\n";
    else {
        bool isOk = false;
        for (int i = 1; i <= n - k + 1; i++) {
            ll minInArea = *min_element(arr.begin() + i, arr.begin() + i + k);
            ll maxInArea = *max_element(arr.begin() + i, arr.begin() + i + k);

            if (i == 1) {
                ll minInRight = *min_element(arr.begin() + i + k + 1, arr.end());
                if (maxInArea < minInRight) {
                    cout << "Yes\n";
                    isOk = true;
                    break;
                }
            }
            else if (i == n - k + 1) {
                ll maxInLeft = *max_element(arr.begin() + 1, arr.begin() + i);
                if (minInArea > maxInLeft) {
                    cout << "Yes\n";
                    isOk = true;
                    break;
                }
            } 
            else {
                ll minInRight = *min_element(arr.begin() + i + k + 1, arr.end());
                ll maxInLeft = *max_element(arr.begin() + 1, arr.begin() + i);
                if (maxInArea < minInRight && minInArea > maxInLeft) {
                    cout << "Yes\n";
                    isOk = true;
                    break;
                }
            }
         }
        if (!isOk) cout << "No\n";
    } 



    return 0;
}

