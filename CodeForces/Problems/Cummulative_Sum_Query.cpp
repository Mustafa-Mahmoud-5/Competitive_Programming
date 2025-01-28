#include <iostream>
using namespace std;
int main () {
	int n; cin >> n;
	int prfx[n];
	int f; cin >>f;
	prfx[0] = f;
	for(int i = 1; i < n; i++) {
		int q; cin >> q;
		prfx[i] = prfx[i-1] + q; 
	}

	int q; cin >> q;
	while(q--) {
		int i, j; cin >> i >> j;
		if(i == 0) {
			cout << prfx[j] << endl; 
		} else {
			cout << prfx[j] - prfx[i-1] << endl; 
		}
	}
}
