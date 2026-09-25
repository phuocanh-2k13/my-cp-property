// Ha Phixah Example Templates Edited 2026-08-10
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

    int n, m; cin >> n >> m;
    ll K_DOLLAR_BILL; cin >> K_DOLLAR_BILL;
    ll amountOfOneDollarBill, ammountOfKDollarBill; cin >> amountOfOneDollarBill >> ammountOfKDollarBill;
    vll a(n), b(m);
    for (auto& val : a) cin >> val;
    for (auto& val : b) cin >> val;

    sort(all(a));
    sort(all(b));

    int products = 0;
    for (int i = 0; i < m; i++) {
        if ((ll)(ammountOfKDollarBill * K_DOLLAR_BILL) >= b[i]) {
            ll kBillNeed = b[i] + K_DOLLAR_BILL - 1;

            ll changes = abs((kBillNeed * K_DOLLAR_BILL) - b[i]);
            products++;

            amountOfOneDollarBill += changes;
            ammountOfKDollarBill -= kBillNeed;
        }
        else {
            break;
        }
    }
    amountOfOneDollarBill += ammountOfKDollarBill * K_DOLLAR_BILL;
    for (int i = 0; i < n; i++) {
        if (a[i] <= amountOfOneDollarBill) {
            amountOfOneDollarBill -= a[i];
            products++;
        }
        else break;
    }

    cout << products << '\n';


    return 0;
}

