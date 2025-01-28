#include <iostream>
using namespace std;
int main () {
	int n; cin >>n;
	int arr[n];
	for(int i = 0; i < n; ++i) {
		int x; cin >> x;
		arr[i] = x;
	}

	for(int i = 0; i < n; ++i) {
		// min --> before or after
		int min1;

		if(i != n-1) {
			min1 = abs(arr[i] - arr[i+1]);
		}

		int min2;
		if(i != 0) {
			min2 = abs(arr[i] - arr[i-1]); 
		}

		if(min2 < min1 && i != 0) cout << min2;
		else cout << min1;

		// max --> first or last
		cout << " ";

		int max1 = abs(arr[i] - arr[n - 1]);
		int max2 = abs(arr[i] - arr[0]);
		if(max2 > max1) cout << max2;
		else cout << max1;

		cout << "\n";
	}


}