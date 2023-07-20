#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve () {
	int n, d; cin >> n >> d;
	string s; cin >> s;
	int i;
	for(i=0; i < n; i++) {
		if(d > (s[i] - '0')) {
			s.insert(i, to_string(d));
			break;
		}
	}

	if(i == n) {
		s+= to_string(d);
	}
	cout << s << endl;
}

int main () {
	int t; cin >> t;
	while(t--) {
		solve();
	}
}