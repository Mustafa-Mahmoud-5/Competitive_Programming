#include <iostream>
#include <vector>
using namespace std;
int main() {
	int LEN = 200002;
	int n, k, q; cin >> n >> k >> q;
	vector<int>v(LEN);
	while(n--) {
		int l, r; cin >> l >> r;
		v[l]++;
		v[r+1]--;
	}


	for(int i = 1; i < LEN;i++) {
		v[i]+= v[i-1];
	}

	for(int i = 0; i < LEN; i++) {
		if(v[i] >= k) {
			v[i] = 1;
		} else {
			v[i] = 0;
		}
	}


	for(int i = 1; i < LEN; i++) {
		v[i]+= v[i-1];
	}

	while(q--) {
		int a, b; cin >> a >> b;
		cout << v[b] - v[a-1] << endl;
	}
}