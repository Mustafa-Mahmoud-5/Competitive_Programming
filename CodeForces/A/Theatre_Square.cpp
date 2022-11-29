#include <iostream>
using namespace std;
int main () {
	long long n,m,a; cin >> n >> m >> a;
	long long rem_n = n % a == 0 ? 0 : 1;
	long long rem_m = m % a == 0 ? 0 : 1;
	long long res = ((n / a) + rem_n)  * ((m / a) + rem_m);
	cout << res;
}