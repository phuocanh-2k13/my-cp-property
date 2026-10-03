    // Ha Phixah Example Templates Edited 2026-08-10
    #include <algorithm>
    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int

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

        ll q; cin >> q;
        string s, t; cin >> s >> t;

        // Find all occurence
        vi occurPlace;
        for (int i = 0; i < (int)(s.size()); i++) {
            bool isThere = true;
            for (int j = 0; j < (int)(t.size()); j++) {
                if (s[i + j] != t[j]) {
                    isThere  = false;
                    break;
                }
            } 

            if (isThere) 
                {
                    occurPlace.push_back(i);
                   // cerr << "DEBUG: " << i << '\n';

                }
        }

        while (q--) {
            ll l, r; cin >> l >> r;
            l--; r--;

            if (r - l + 1 < (int)(t.size())) cout << "No\n";
            else {
                auto place = lower_bound(all(occurPlace), l);
                if (place != occurPlace.end() && *place + (int)(t.size()) - 1 <= r) {
                    cout << "Yes\n";
                }
                else cout << "No\n";
            }
            
        }

        return 0;
    }

