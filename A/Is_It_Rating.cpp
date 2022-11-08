#include <iostream>
using namespace std;
int main () {
	int n; cin >> n;
	bool non_inc = true;
	long long prev = 9999999999;
	for(int i = 1; i <= n; ++i) {
		int a,b; cin >> a >> b;
		if(prev < a) non_inc = false; 
		if(a != b) {
			cout << "rated";
			return 0;
		}
		prev = a;
	}
	if(non_inc) cout << "maybe";
	else cout << "unrated";


	// int prev;
	// int a = 2000;
	// cout << (a >= prev);
}