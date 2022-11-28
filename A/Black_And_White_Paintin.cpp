#include <iostream>
using namespace std;
void sol () {
	int n,m,rbc;
	while (cin >> n >> m >> rbc && (n != 0 || m != 0 || rbc != 0)) {
		bool cc = rbc;
		int count = 0;
		for(int r = 1; r <= n; r++) {
			for(int c = 1; c <= m; c++) { // enhance this part
				if(n-r+1 >= 8 && m-c+1 >=8) {
					if(cc) count++;
				}
				cc = !cc;
			}
		}
		cout << count << "\n";
	}
}

void another_sol() {
	int n, m, rbc;
	while (cin >> n >> m >> rbc && (n != 0 || m != 0 || rbc != 0)) {
		int lr = n - 8 + 1;
		int lc = m - 8 + 1;
		int res = (lr * lc)/ 2;
		if((res % 2 == 1 || res == 0) && rbc == 1) cout << res + 1 << "\n";
		else cout << res << "\n";
	}
}

int main () {
	another_sol();
	return 0;
}