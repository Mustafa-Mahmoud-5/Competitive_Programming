#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

void solve() {
	string s;  cin >> s;
	int zeroes = 0;
	int ones = 0;
	for(char c: s) {
		if(c == '1') {
			ones++;
		} else {
			zeroes++;
		}
	}
	int left_zeroes = 0;
	int left_ones = 0;
	int min_c = std::numeric_limits<int>::max();
	for(char c: s) {
		if(c == '1') {
			left_ones++;
		} else {
			left_zeroes++;
		}
		int changes = min(left_zeroes, left_ones) + min(zeroes-left_zeroes, ones - left_ones);
		// cout << "changes: " << min(left_zeroes, left_ones) << " " << min(zeroes-left_zeroes, ones - left_ones) << " " << changes << endl;
		if(changes < min_c) {
			min_c = changes;
		}
	}
	cout << min_c << endl;
}

int main () {
	int t; cin >> t;
	while(t--) {
		solve();
	}
}