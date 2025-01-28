#include <iostream>
using namespace std;
int main () {
	int n;
	long long x;
	cin >> n >> x;
	int d = 0;
	while (n--) {
		char c; cin >> c;
		int i; cin >> i;

		if(c == '+') {
			x+=i;
		} else {
			if(x >= i) x-=i;
			else d++;
		}
	}

	cout << x << " " << d;
}