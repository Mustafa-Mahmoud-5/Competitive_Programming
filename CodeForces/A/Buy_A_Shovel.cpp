#include <iostream>
using namespace std;
int main() {
	int k; cin >> k;
	int r; cin >> r;
	int x = 1;
	while(true) {
		if(x*k % 10 == 0 || x*k % 10 == r) break; 
		x++;
	}
	cout << x;
}