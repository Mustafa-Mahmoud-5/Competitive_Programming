#include <iostream>
using namespace std;



void solve_N() {
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >>arr[i];
	}
	int sm = 1;
	int bg = n;
	int l = 0;
	int r = n - 1;
	while(l <= r) {
		if(arr[l] == sm ) {
			l++;
			sm++;
		} else if (arr[l] == bg) {
			l++;
			bg--;
		} else if (arr[r] == sm) {
			r--;
			sm++;
		} else if(arr[r] == bg) {
			r--;
			bg--;
		} else {
			break;
			// left is neither the biggest nor the smallest
			// right is neither the biggest nor the smallest
			// that means that the middle must contain bigger and smaller elements
			// a valid sub array
		}
	}

	if(l <= r) {
		cout << l +1 << " " << r + 1 << endl;
	} else {
		cout << -1 << endl;
	}
}



void solve() {
	int n; cin >> n;
	int arr[n+1];
	int sm = 1;
	int bg = n;
	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for(int i = 1; i <= n-1; i++) {
		int l = arr[i];
		if(l == sm || l == bg) {
			// cout << "Catch: " << l << endl;
			continue;
		}
		int minn = l;
		int maxx = l;

		for(int j = i+1; j <= n; j++) {
			int r = arr[j];
			if(r > maxx)
				maxx = r;
			if(r < minn)
				minn = r;
			if((r != minn && r!= maxx) && (l != minn && l != maxx)){
				cout << i << " " << j << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
}


int main() {
	int t; cin >>t;
	while(t--) {
		solve_N();
	}
}