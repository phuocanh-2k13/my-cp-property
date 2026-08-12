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
int calCycle(int t, int z, int y) {
    return z * t + y;
}
int calBalloonCycle(int time, int t, int z, int y) {
    return (time / calCycle(t, z, y)) * z;
} 

int calBalloonRemain(int time, int t, int z, int y) {
    return min(z, (time % calCycle(t, z, y)) / t);
}

int calAllBalloon(int time, int t, int z, int y) {
    return calBalloonCycle(time, t, z, y) + calBalloonRemain(time, t, z, y);
}



bool f(int required_time, const vector<pair<int, pi>>& worker, int balloon) {
    int totalBallon = 0;
    for (auto& [time, rest] : worker) {
        totalBallon += calAllBalloon(required_time, time, rest.first, rest.second);
        
        if (totalBallon >= balloon) return true;
    }
    return false;
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n; cin >> m >> n;
    vector<pair<int, pi>> worker(n);
    for (int i = 0; i < n; i++) {
        int t, z, y; cin >> t >> z >> y;
        worker[i] = { t, { z, y } };
    }

    int l = 0, r = 1e7;
    int ans = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (f(mid, worker, m)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    vi ans_arr(n);
    int remainBallon = m;
    for (int i = 0; i < n; i++) {
        int ballonInTime = calAllBalloon(
            ans,
            worker[i].first,
            worker[i].second.first,
            worker[i].second.second);

        ans_arr[i] = min(remainBallon, ballonInTime);
        remainBallon -= ans_arr[i];
    }

    cout << ans << '\n';
    for (auto& x : ans_arr) {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}