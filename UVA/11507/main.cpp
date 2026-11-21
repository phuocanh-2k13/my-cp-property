// Ha Phixah Example Templates Edited 2026-08-10
#include <bits/stdc++.h>
#include <string>
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

    unordered_map<string, unordered_map<string, string>> bend;
    bend["+x"]["+y"] = "+y";
    bend["+x"]["-y"] = "-y";
    bend["+x"]["+z"] = "+z";
    bend["+x"]["-z"] = "-z";
    bend["-x"]["+y"] = "-y";
    bend["-x"]["-y"] = "+y";
    bend["-x"]["+z"] = "-z";
    bend["-x"]["-z"] = "+z";
    bend["+y"]["+y"] = "-x";
    bend["+y"]["-y"] = "+x";
    bend["+y"]["-z"] = "+y";
    bend["+y"]["+z"] = "+y";
    bend["-y"]["+y"] = "+x";
    bend["-y"]["-y"] = "-x";
    bend["-y"]["-z"] = "-y";
    bend["-y"]["+z"] = "-y";
    bend["+z"]["+z"] = "-x";
    bend["+z"]["-z"] = "+x";
    bend["+z"]["+y"] = "+z";
    bend["+z"]["-y"] = "+z";
    bend["-z"]["+z"] = "+x";
    bend["-z"]["-z"] = "-x";
    bend["-z"]["+y"] = "-z";
    bend["-z"]["-y"] = "-z";

    int n;
    while (true) {
        cin >> n;
        if (!n) break;

        string thisWire = "+x";
        for (int i = 1; i < n; i++) {
            string s; cin >> s;
            if (s != "No") {
                thisWire = bend[thisWire][s];
            }
        }

        cout << thisWire << '\n';
    }

    return 0;
}

