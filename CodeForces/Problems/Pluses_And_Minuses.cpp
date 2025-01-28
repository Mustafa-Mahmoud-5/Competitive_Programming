#include <iostream>
#include <string>
#include <map>
using namespace std;

/*
each element x needs -(x+1) to make it a negative
if our smallest negative number is -x, then that means that the first element that will escape the negative is x
because x-x = 0 still not negative
that means that abs(-x) will be the case to escape the while loop and it will run the entire loop on string
that means that we need to loop from 0 to abs(-x) - 1 which is the last element to fall in the negative trap
and for each element i from 0 to abs(-x) - 1 . we will search for the element that make it be negative which is -1-x and add its index
i.e if i is 3, -1-3 = -4 will make it negative, add the index of -4 because that means we looped on s untill sum was -4 at the index -4
if min is positive that means that the first element to escape the negative trap is 0 itself, which means it looped over the entire s and we didn't decrease 0 to be negative, so we just pring s length
*/

void solve_N() {
	string s; cin >> s;
	long long len  = s.size();
	map<int, int> m;
	int sum = 0;
	int min = 0;
	for(int i = 0; i < len; i++) {
		if(s[i] == '-') {
			sum--;
		} else {
			sum++;

		}

		if(sum < min) {
			min = sum;
		}


		if(!m.count(sum)) {
			m[sum] = i + 1;
		}
	}


	if(min >= 0) {
		cout << len << endl;
		return;
	}

	int to = abs(min) - 1;

	for(int i = 0; i <= to; i++) {
		len += m[-1-i];
	} 


	cout << len << endl;
}




int main () {
	int t; cin >>t;
	while(t--) {
		solve_N();
	}
}