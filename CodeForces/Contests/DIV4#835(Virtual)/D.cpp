#include <iostream>
#include <string>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >>n;
		int arr[n];
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int l = 0;
		int r = 0;
		int c = 0;
		while(r <= n-1) {
			if(r == n-1 || arr[r] != arr[r+1]) {
				// end of subarr
				// check conditions on subarr
				// move pointers
				if((l == 0 || arr[l-1] > arr[l]) && (r == n-1 || arr[r] < arr[r+1])){
					c++;
				}
				l = r+1;
			}
			r++;
		}
		string res = "NO";
		if(c == 1)
			res = "YES";

		cout << res << endl;
	}
}
// (i == 0 || arr[i-1] < arr[i]) && (i == n-1 || arr[i] > arr[i+1])