#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int off = 0;
	int un = 0;
	for(int i = 1; i <= n; i++) {
		int x; cin >> x;
		if(x > 0) {
			off+=x;
		} else {
			// crime occured
			if(off) off--;
			else un++;
		}
	}
	cout << un;
}