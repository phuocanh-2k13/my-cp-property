// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <unordered_map>
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

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vi arr(n); for (auto& x : arr) cin >> x;
        unordered_map<int, int> freq;
        sort(all(arr));


        vi ansV(n);
        ansV[0] = arr[0];
        int ansI = 1;
        int left = 1, right = n - 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                ansV[left] = arr[i];
                left++;
                ansI++;
            } 
            else {
                ansV[right] = arr[i];
                right--;
                if (!freq[arr[i]]) {
                    ansI++;
                }
                freq[arr[i]]++;
            }
        }
        cout << ansI << '\n';
        for (auto& x : ansV) cout << x << ' ';
            cout << '\n';
/*
        vi ansV = { arr[0] };
        freq[arr[0]]--;
        int ansI = 1;
        for (int i = 1; i < arr.size(); i++) {
            freq[arr[i]]--;
            ansV.push_back(arr[i]);
            ansI++;
        }
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (freq[arr[i]] > 0) {
                for (int j = 0; j < freq[arr[i]]; j++) {
                    ansV.push_back(arr[i]);
                }
                ansI++;
            }
        }

        */
    }

    return 0;
}

