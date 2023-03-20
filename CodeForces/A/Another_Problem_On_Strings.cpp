#include <iostream>
#include <string>
#include <map>
using namespace std;


void solve_NLOGN() {
	int k; cin >> k;
	string s; cin >>s;
	int n = s.size();
	map<long long, long long>prefix_sums;
	prefix_sums[0] = 1;
	long long prefix_sum = 0;
	long long counter = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '1')
			prefix_sum++;
		counter += prefix_sums[prefix_sum - k];
		prefix_sums[prefix_sum]++;
	}
	cout << counter << endl;
}


int main() {
	solve_NLOGN();
}

// void solve(){
// 		int k; cin >> k;
// 	string s; cin >> s;
// 	int n = s.size();
// 	int arr[n];
// 	arr[0] = (s[0] - 48);

// 	for(int i = 1; i <n; i++) {
// 		arr[i] = arr[i-1] + (s[i] - 48);
// 	}

// 	// cout << "[ ";
// 	// for(int i = 0; i < n; i++) {
// 	// 	cout << arr[i] << " ";
// 	// }
// 	// cout << "]";

// 	int c = 0;
// 	for(int i = 0; i < n; i++) {
// 		if(arr[i] == k) {
// 			c++;
// 		}

// 		int j = 0;
// 		while(j < i) {
// 			if((arr[i] - k) == arr[j]) {
// 				c++;
// 			}
// 			j++;
// 		}
// 	}
// 	cout << c << endl;

// }
