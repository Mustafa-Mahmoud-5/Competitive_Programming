#include <iostream>
#include <string>
using namespace std;

int main() {
	int y,w; cin >> y >> w;
	if(w > y) y = w;
	int dnm = 6;
	int p = dnm-y+1;

	// find HCM
	for(int i = p; i >= 2; i--) {
		if(p % i == 0 && 6 % i == 0) {
			p /= i;
			dnm = 6 / i; 
			break;
		}
	}


	cout << to_string(p) + "/" + to_string(dnm);

}