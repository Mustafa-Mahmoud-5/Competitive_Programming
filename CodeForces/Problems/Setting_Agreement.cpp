#include <iostream>
using namespace std;
int main () {
	int n, m, d; cin >> n >> m >> d;
	int c = 1;
	int skip = 1;
	for(int i = 1; i <= n; i++) {
		int x; cin >> x;
		cout << x << " " << skip << " ";
		cout << "\n";
		if(skip == d) {
			c = 1;
			continue;
		}
		if(x % m == 0) c++;
		skip++;
	}


	cout << c + 1;
}