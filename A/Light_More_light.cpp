#include <iostream>
#include <cmath>
using namespace std;
void basic_sol() {
	// N time
	int x;
	while (cin >> x && x != 0) {
		bool on = false;
		for(int i = 1; i <= x/2; ++i) { // loop while x / 2 only, rest is redundant
			if(x % i == 0) on = !on;
		}

		if(on) cout << "yes\n";
		else cout << "no\n";
	}
}

void another_sol() {
	// Constant time
	int x;
	while(cin >> x && x!=0) {
		// find number of divisors for this number
		// if number has a square root, divisors -> odd
		// else, divisors -> divisors -> even
		// if divisors number is even -> off
		// else -> on

		int s = sqrt(x);
		if(s * s == x) cout << "yes\n";
		else cout << "no\n";
	}
}

int main() {
	basic_sol();
}