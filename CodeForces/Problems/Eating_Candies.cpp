#include <iostream>
#include <vector>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int l = 0; int r = n- 1;
	int ls = v[l]; int rs = v[r];
	int mx = 0;
	while(l < r) {
		if(ls == rs) {
			int left = l +1;
			int right = n - r;
			mx = left + right;
			l++;
			r--;
			ls += v[l];
			rs += v[r];

		} else if(ls < rs) {
			l++;
			ls += v[l];
		} else {
			r--;
			rs += v[r];
		}
	}
	cout << mx << endl;
}



int main () {
	int t; cin >> t;
	while (t--) {
		solve();
	}
}