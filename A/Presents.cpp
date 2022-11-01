#include <iostream>
using namespace std;

void zero_based_idx_solution() {
	int x; cin >>x;
	int ar[x];
	for(int i = 0; i < x; ++i) {
		int p; cin >> p;
		ar[p-1] = i + 1;
	}
	for(int i =0; i< x; i++) {
		cout << ar[i] << " ";	
	}
}

int main () {
	int x; cin >>x;
	int ar[x+1];
	for(int i = 1; i <= x; i++) {
		int p; cin >>p;
		ar[p] = i;
	}
	for(int i = 1; i<= x; ++i) {
		cout << ar[i] << " ";
	}
}