#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n; cin >> n;
	int c = n;
	int arr[n+1];
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		arr[a] = a;
		while(arr[c] && c) {
			cout << c << " ";
			c--;
		}
		if(c) cout << "\n";
	}


	// vector<int>v;
	// for(int i = 1; i <= n; ++i) {
	// 	int s; cin >>s;
	// 	v.push_back(s);
	// }


	// int arr[n] = {n};
	// int curr = n;
	// for(int el: v) {
	// 	int idx = n - el;
	// 	if(el != curr) {
	// 		arr[idx] = el;
	// 		cout << "\n";
	// 	} else {
	// 		// cout << "IDX: " << idx << "\n"; 
	// 		while(arr[idx]) {
	// 			cout << arr[idx] << " ";

	// 			idx++;
	// 			curr--;
	// 		}
	// 		if(curr!=0) cout << "\n";
	// 		arr[n-curr] = curr;
	// 	}

	// 	// for(int i: arr) cout << i << " ";

	// }

}