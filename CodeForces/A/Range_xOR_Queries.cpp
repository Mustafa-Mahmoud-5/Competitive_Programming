#include <iostream>
using namespace std;
int main() {
	int n, q; cin >> n >> q;
	int f; cin >>f;
	int arr[n+1] = {};
	arr[1] = f;
	
	for(int i = 2; i <= n; i++) {
		int x; cin >> x;
		arr[i] = (arr[i-1]^x);
	}



	while(q--) {
		int a, b; cin >> a >> b;
		if(a == 1 ) {
			cout << arr[b] << endl;
		} else {
			cout << (arr[b] ^ arr[a-1]) << endl;
		}
	}
}