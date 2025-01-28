#include <iostream>
#include <cmath>
using namespace std;
int main() {
	/*
		1378 ^ n gives a last number of this sequence:
		1378 ^ 1 => 8
			 ^ 2 => 4
			 ^ 3 => 2
			 ^ 4 => 6   end of sequence(8 4 2 6)
			 ^ 5 => 8   started to repeat the sequence  
		put it them array,
		move 6 to the first for easier access: if n%4 == 0, means it was 6. 
		
		n    = 1 2 3 4
		last = 8 4 2 6
		mod  = 1 2 3 0
	*/ 

	long long n; cin >>n;
	if(n == 0) {
		cout << 1;
		return 0;
	}
	int seq[] = {6,8,4,2};
	int p = n%4;
	cout << seq[p];
}