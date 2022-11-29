#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int n, m; cin >> n >> m;
	n += 1;
	while(true) {
		bool is_prime = true;
		for(int i = 2; i <= n / 2; ++i) {
			if(n % i == 0) {
				is_prime = false;
				break;
			}
		}
		if(is_prime) break;
		n++;

		// cout << n << " ";
	}
	if(m == n) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}