#include <cstdlib>
#include <iostream>
using namespace std;

int main () {
	int moves;
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <= 5; j++) {
			int el;
			cin >> el;
			if(el == 1) {
				// calc movs abs(rows - 3) + (colums - 3) or ((i-3)*-1) + (j-3)*-1
				moves = abs(i - 3) + abs(j - 3);
				break;
			} 
		}
	}
	cout << moves;
}