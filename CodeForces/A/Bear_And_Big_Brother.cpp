#include <iostream>
using namespace std;
int main() {
	int a,b;
	cin >> a >> b;

	int c = 0;
	while(b >=	 a) {
		a *= 3;
		b *= 2;
		c++;
	}

	cout << c;
}