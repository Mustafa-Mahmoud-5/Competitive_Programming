#include <iostream>
#include <map>
using namespace std;

int main () {
	int n; cin >> n;
	map<int, int>m;
	
	while(n--) {
		int b,d; cin >> b >> d;
		m[b]++;
		m[d]--;
	}

	int mx_ppl = 0;
	int mx_year;
	int ppl_sum = 0;
	for(auto el: m) {
		ppl_sum += el.second;
		if(ppl_sum > mx_ppl) {
			mx_ppl = ppl_sum;
			mx_year = el.first;
		}
		// cout << el.first << ": " << el.second << "| ";
	}

	cout << mx_year << " " << mx_ppl; 
}

/*
{1:1, 5:0, 2:1, 4: -1, 6: -1}

map is sorted by default

{1:1, 2:1, 4:-1, 5: 0, 6: -1}

loop over map,  ppl_sum+= map val => ppl_sum means that up until this year, x are living
save the maximum

Another half solution
from here
we can make an prefix array
[(year, people_living), (,),...........]

another loop and return the maximum


*/