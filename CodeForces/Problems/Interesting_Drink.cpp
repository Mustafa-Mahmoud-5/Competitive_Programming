#include <iostream>
#include <algorithm>
using namespace std;


int main () {
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);

	int q; cin >> q;
	for(int i = 1; i <= q; i++) {
		int m; cin >>m;
		auto idx = upper_bound(arr, arr+n, m)-arr;
		int res;

		if(idx < n) {
			res = idx;
		} else {
			// out of limit, didn't find any which is greater than x, return last idx which is n
			res = n;
		}
		cout << res << endl;
	}
}