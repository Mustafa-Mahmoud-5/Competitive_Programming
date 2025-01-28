#include <iostream>
#include <string>
using namespace std;
int main () {

	string s;
	cin >> s;

	int m = 0, from = 97;

	for(int to: s) {

		int sr = abs(from - to); // straight route

		// decide if current is left or right
		bool l = (from < 110);

		int cr; // circular route
		if(l) {
			// move left
			cr = abs(from - 97) + abs(122 - to) + 1;

		} else {
			// move right
			cr = abs(122 - from) + abs(to - 97) + 1;
		}


		if(sr < cr) m += sr;
		else m+= cr;

		from = to;
	}

	cout << m;

}