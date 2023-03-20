#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve () {
	int n; cin >> n;
	int o = 0;
	int e = 0;
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		if(a %2 == 0) {
			e+=a;
		} else {
			o+=a;
		}
	}


	if(e > o) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}
int main () {
	int t; cin >> t;
	while(t--) {
		solve();
	}
}