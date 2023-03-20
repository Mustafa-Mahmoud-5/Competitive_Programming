#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >>n;
	string s; cin >>s;
	map<char, int>m;
	string res = "YES";
	for(int i = 1; i <= n; i++) {
		int b = i % 2;
		char c = s[i-1];
		if(m.count(c) && m[c] != b) {
			res = "NO";
			break;
		}
		m[c] = b;
	}

	cout << res << endl;
}

int main () {
	int t; cin >> t;
	while(t--) {
		solve();
	}
}