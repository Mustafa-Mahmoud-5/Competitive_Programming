#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
	int n; long long h; cin >> n >> h;
	vector<long long>v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}

	long long  l = 0; long long r = 1e18;
	long long k;
	while(l <= r) {
		k = (r + l) / 2;

		long long hits = k;
		for(long long i = 0; i < n - 1; i++) {
			hits += min(k, v[i+1] - v[i]);
		}
		// cout << "hits: " << hits << endl;
		if(hits < h) {
			l = k + 1;
		} else {
			r = k - 1;
		}
	}

	cout << l << endl;
}


int main () {
	int t; cin >> t;
	while(t--) {
		solve();
	}
}