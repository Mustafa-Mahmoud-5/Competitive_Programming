#include <iostream>
using namespace std;


void solve() {
	int n; cin >> n;
	
	int p1 = 0; int n1 = 0;
	for(int i = 0; i < n; i++) {
		int b; cin >> b;
		if(b < 0)
			n1++;
		else
			p1++;
	}

	// max
	int x = 0;
	for(int i =1; i <= n; i++) {
		if(i > p1) {
			// start subtracting after positives are finished
			x--;
		} else {
			x++;
		}
		cout << x << " ";
	}
	cout << endl;



	// min
	for(int i = 1; i <=n1; i++) {
		cout << 1 << " " << 0 << " ";
	}
	x = p1 - n1;
	for(int i = 1; i <= x; i++) {
		cout << i << " ";
	}
	cout << endl;
}




int main() {
	int t; cin >>t;
	while(t--) {
		solve();
	}
}