#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
	int n, q; cin >> n >> q;
	vector<int>v(n);

	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.rbegin(), v.rend());

	for(int i = 1; i < n; i++) {
		v[i]+= v[i-1];
	}
	int lrgst = v[n-1];
	while(q--) {
		int x; cin >> x;
		if(x == lrgst) {
			cout << n << endl;
			continue;
		}
		if(x > lrgst) {
			cout  << -1 << endl;
			continue;
		}

		int l = 0; int r = n-1; int mid;

		while(l <= r) {
			mid =  (r+l)/2;
			if((v[mid] >= x)) {
				r = mid - 1;
			} else  {
				l = mid + 1;
			}
		}
			cout << l+1 << endl;
}

}

int main () {
	int t; cin >> t;
	while(t--) {
		solve();
	}
}