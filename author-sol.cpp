#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int x = 0;
	int y = 0;
	int coin = 0;
	for (int i = 0; i < n - 1; i++) {
		x += (s[i] == 'U');
		y += (s[i] == 'R');
		// check if the current coordinate is at the identity line (y = x), and check also if
		// the next move is same as the previous move
		if (x == y && s[i] == s[i + 1]) {
			coin += 1;
		}
	}
	cout << coin << '\n';
	return 0;
}
