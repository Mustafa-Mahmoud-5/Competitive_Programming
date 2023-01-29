#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, x;
	cin >> n >> x;
	string can = "YES";
	for(int i = 1; i <= n; ++i) {
		int a, b; cin >> a >> b;
		if(a == x || b == x || a + b == 7 || a + x == 7 || b + x == 7) {
			can = "NO";
			break;
		}
	}

	cout << can;
}