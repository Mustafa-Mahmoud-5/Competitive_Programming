#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >>t;
	for(int ti = 1; ti <= t; ++ti) {
		int n; cin >>n; //s size
		int k; cin >>k; // max operations
		string str; cin >> str;
		map<char, pair<int, int>> m;

		for(char c: str) {
			char lower_c = tolower(c);
			cout << c  << " ";
			if(m.find(lower_c) != m.end()) {
				if(islower(c)) {
					(m[lower_c].first)++;
				} else {
					(m[lower_c].second)++;
				}
			} else {
				pair<int, int>char_data = {0, 0};
				if(islower(c)) {
					char_data.first++;
				} else {
					char_data.second++;
				}
				m[lower_c] = char_data;
			}
		}
		cout << endl;
		int prmry = 0;
		int extra = 0;
		for(auto el: m) {
			cout << el.first << "|" << el.second.first << "|" << el.second.second << endl;
			int small = min((el.second).first, (el.second).second);
			prmry += small;
			int big = max((el.second).first, (el.second).second);
			extra += ((big-small) / 2);
		}
		extra = min(extra, k);
		int res = prmry + extra;
		cout << "RES" << res << "\n";

	}
}