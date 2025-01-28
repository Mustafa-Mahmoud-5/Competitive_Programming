#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, k; cin >> n >> k;
	int len = 2 * n + 1;
	int arr[len+1];
	
	for(int i =1; i<=len;++i) {
		int r; cin >> r;
		arr[i] = r;
	}


	for(int i = 1; i<= len; ++i) {
		if(i%2 == 0 && k) {
			if(arr[i] > arr[i-1] + 1 && arr[i] > arr[i+1] + 1) {
				cout << arr[i] - 1 << " ";
				k--;
			} else {
				cout << arr[i] << " ";
			}
		} else {
			cout << arr[i] << " ";
		}
	}
}