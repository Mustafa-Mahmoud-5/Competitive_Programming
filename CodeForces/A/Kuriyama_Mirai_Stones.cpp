#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;

	vector<long long> v(n+1);
	vector<long long> v_prfx(n+1);
	vector<long long>v_prfx_sorted(n+1);
	
	int f; cin >> f;
	v[1] = f;
	v_prfx[1] = f;
	
	for(int i = 2; i <= n; i++) {
		int el; cin >> el;
		v[i] = el;
		v_prfx[i] = v_prfx[i-1] + el;
	}


	sort(v.begin(), v.end());

	v_prfx_sorted[1] = v[1];
	for(int i = 2; i <= n; i++) {
		v_prfx_sorted[i] = v_prfx_sorted[i-1] + v[i];
	}




	int q; cin >> q;
	while(q--) {
		int t, l, r; cin >> t >> l >> r;
		long long ans;
		if(t == 1) {
			if(l == 1) {
				ans = v_prfx[r];
			} else {
				ans = v_prfx[r] - v_prfx[l-1];
			}
		} else {
			if (l == 1) {
				ans = v_prfx_sorted[r];
			} else {
				ans = v_prfx_sorted[r] - v_prfx_sorted[l-1];
			}
		}
		cout << ans << endl;
	}
}
