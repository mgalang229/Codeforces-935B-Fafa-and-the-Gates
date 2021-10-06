#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	// view the image in this repository for better understanding
	// perform the needed operations on the coordinates based on the string sequence
	vector<pair<int, int>> vec(n + 1);
	int x = 0;
	int y = 0;
	vec[0] = make_pair(x, y);
	for (int i = 0; i < n; i++) {
		if (s[i] == 'U') {
			y += 1;
		} else {
			x += 1;
		}
		vec[i + 1] = make_pair(x, y);
	}
	// for every coordinate in the identity line (y = x), check the previous and next adjacent
	// coordinates and check if the x-coordinates or the y-coordinates are in increasing order
	// (if it's in increasing order, then it means that Fafa crossed the identity line)
	int cnt = 0;
	for (int i = 1; i + 1 < (int) vec.size(); i++) {
		if (vec[i].first == vec[i].second) {
			if (vec[i - 1].first < vec[i].first && vec[i].first < vec[i + 1].first) {
				cnt += 1;
			} else if (vec[i - 1].second < vec[i].second && vec[i].second < vec[i + 1].second) {
				cnt += 1;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}
