/*
	PSEUDO CODE:
	GET n;
	LOOP FROM 0 TO n BY i:
		GET AND STORE THEM IN THE MAP
		GET AND FIND max DAYS

	LOOP FROM 0 TO max BY i:
		
*/

#include <bits/stdc++.h>
using namespace std;

struct Event {
	int day;
	int cow;
	int change;
	Event(int d_inp, const string& c_inp, int ch_inp) : day(d_inp), change(ch_inp) {
		if (c_inp == "Bessie") cow = 0;
		else if (c_inp == "Elsie") cow = 1;
		else cow = 2;
	};
	bool operator<(const Event& other) const {
		return day < other.day;
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("measurement.in", "r", stdin);
	freopen("measurement.out", "w", stdout);

	int n; cin >> n;

	// DAY: {NAME, CHANGE}
	vector<Event> measurement;
	for (int i = 0; i < n; i++) {
		int day; string name; int change;
		cin >> day >> name >> change;
		measurement.emplace_back(day, name, change);
	}
	sort(measurement.begin(), measurement.end());

	// LEADERBOARD
	int timesToChange = 0;
	int leaderBoard = 0;
	vector<int> gallonEachCow = {7, 7, 7};
	for (auto& x : measurement) {
		gallonEachCow[x.cow] += x.change;

		int maxElement = *max_element(gallonEachCow.begin(), gallonEachCow.end());
		int leadNow = 0;
		for (int i = 0; i < 3; i++) {
			if (maxElement == gallonEachCow[i]) {
				leadNow = leadNow | (1 << i);
			}
		}

		if (leadNow != leaderBoard) {
			timesToChange++;
		}

		leaderBoard = leadNow;
	}

	cout << timesToChange << '\n';
	
	return 0;
}
