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

    int t; cin >> t;
    int scene = 0;
    while (t != 0) {
        scene++;
        cout << "Scenario #" << scene << '\n';
        vi team(1000001);
        queue<int> qoft;
        vector<queue<int>> qofm(t + 1);
        while (t--) {
            int n; cin >> n;
            for (int i = 0; i < n; i++) {
                int x; cin >> x;
                team[x] = t;
            }
        }
        string command;
        while (cin >> command && command != "STOP") {
            if (command == "ENQUEUE") {
                int x; cin >> x;
                int teamID = team[x];
                if (qofm[teamID].empty()) qoft.push(teamID);
                qofm[teamID].push(x);
            }
            else {
                int teamID = qoft.front();
                int popedVal = qofm[teamID].front();
                qofm[teamID].pop();
                cout << popedVal << '\n';

                if (qofm[teamID].empty()) qoft.pop();
            }
        }
        cin >> t;
        if (t) cout << '\n';
    }

    return 0;
}

