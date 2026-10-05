// Ha Phixah Example Templates Edited 2026-08-10
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

    ll n; cin >> n;
    vector<pll> events;
    while (n--) {
        ll a, b; cin >> a >> b;
        events.push_back({ a, 1 });
        events.push_back({ b + 1, -1 });
    } 

    sort(all(events), [](const pi& a, const pi& b){
        return a.first < b.first;
    });

    ll current = 0;
    ll maxVal = current;
    for (ll i = 0; i < (ll)events.size(); i++) {
        ll x = events[i].first;
        ll currIn = 0;
        while (i < (ll)events.size() && events[i].first == x) {
            currIn += events[i].second;
            i++;
        }
        current += currIn;
        maxVal = max(maxVal, current);
        i--;
    }

    cout << maxVal << '\n';

    return 0;
}

