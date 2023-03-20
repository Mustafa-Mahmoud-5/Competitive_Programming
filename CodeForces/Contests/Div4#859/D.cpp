#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, q; cin >> n >> q;
	int arr[n+1];

	// create prfx sum arr
	int f; cin >> f;
	arr[1] = f;
	for(int i = 2; i <=n; i++) {
		int a; cin >> a; 
		arr[i] = arr[i-1] + a;
	}

	int arr_sum = arr[n];
	
	// cout << "[ ";
	// for(int i = 1; i <=n; i++) {
	// 	cout << arr[i] << " ";
	// }
	// cout << "]" << endl;
	
	while(q--) {
		int l, r, k; cin >> l >> r >> k;
		int sub;
		if(l == 1) {
			sub = arr[r];
		} else {
			sub = arr[r] - arr[l-1];
		}
		// cout << "SUB: " << sub << endl;
		
		int sub_len = r - l + 1;
		// cout << "SUB_LEN: " << sub_len << endl;

		int ans = ((arr_sum - sub) + (sub_len * k));

		// cout << "ANS: " << ans << endl;
		if(ans % 2 != 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	// cout << "=========================" << endl;
}


int main () {
	int t; cin >> t;
	while(t--) {
		solve();
	}
}