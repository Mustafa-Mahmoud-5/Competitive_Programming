#include <iostream>
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		int p; cin >> p;
		int sum = p;
		bool passed = true;
		for(int j = 1; j <= m; j++) {
			// cout << "SUM: " << sum << endl;
			int a; cin >> a;
			if(sum < a) {
				passed = false;
			}
			sum-= a;
			sum+= p;
		}
		
		if(passed) {
			cout << "Happy ";
		} else {
			cout << "Upset ";
		}
		cout << "\n";
	}
}