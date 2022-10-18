#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int c = 0;
	for(int i = 1; i <= n; i++) {
		int solve = 0;
		for(int j = 1; j <= 3; j++) {
			int know;
			cin >> know;
			if(know) solve++;
		}
		if (solve >= 2) c++;
	}

	cout << c;
}