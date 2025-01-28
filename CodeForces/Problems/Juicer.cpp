#include <iostream>
using namespace std;
int main() {
	long n, b, d;
	cin >> n >> b >> d;
	int sum = 0;
	int ans = 0;
	for(int i = 1; i <= n; i++) {
		int orng; cin >> orng;
		if(orng > b) continue;
		sum+= orng;
		if(sum > d) {
			ans++;
			sum = 0;
		}
	}
	cout << ans;

}