#include <iostream>
using namespace std;
int main() {
	int n; cin >>n;
	int arr[n];
	for(int i = 0; i < n; ++i) {
		int a; cin >>a;
		arr[i] = a;
	}


	int max = arr[0];
	int min = arr[0];
	for(int n: arr) {
		if(n > max) max = n;
		if(n < min) min = n;
	}

	int c = 0;
	for(int n: arr) {
		if(n > min && n < max) c++;
	}

	cout << c;

}