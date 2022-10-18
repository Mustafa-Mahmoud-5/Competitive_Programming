#include <iostream>
#include <string>
using namespace std;


int main () {
	int arr[4] = {};
	for(int i = 0; i < 4; i++) {
		int val;
		cin >> val;
		arr[i] = val;
	}

	string g; // "123211"
	cin >> g;

	int clrs = 0;
	for(int i = 0; i < g.length(); i++) {
		int loc = (int)g[i] - 48;
		clrs += arr[loc-1];
	}

	cout << clrs;

}
