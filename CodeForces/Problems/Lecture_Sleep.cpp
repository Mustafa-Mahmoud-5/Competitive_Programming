#include <iostream>
using namespace std;

void display(int arr[], int n) {
	cout << "[ ";
	for(int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}
int main () {
	long long n, k; cin >> n >> k;
	long long arr[n+1];
	int bhvr[n+1];
	long long prfx_sum[n+1];
	long long awake_prefix[n+1];
	for(int i = 1; i<=n;i++) {
		cin >>arr[i];
	}
	
	for(int i = 1; i <=n; i++) {
		cin >> bhvr[i];
	}

	// build prefix sum
	prfx_sum[1] = arr[1];
	for(int i = 2; i <=n; i++) {
		prfx_sum[i] = prfx_sum[i-1] + arr[i];
	}

	// display(prfx_sum, n);
	// build awake prefix sum for awake hours only
	if(bhvr[1] == 1) {
		awake_prefix[1] = arr[1];
	} else {
		awake_prefix[1] = 0;
	}



	for(int i = 2; i <=n; i++) {
		if(bhvr[i] == 1) {
			awake_prefix[i] = awake_prefix[i-1] + arr[i];
		} else {
			awake_prefix[i] = awake_prefix[i-1]; 
		}
	}

	// display(awake_prefix, n);

	long long end = n-k+1;
	long long maxx = 0;
	for(int i =1; i<= end; i++) {
		long long to = i + k - 1;
		long long sum = 0;
		if(i == 1 ) {
			sum = prfx_sum[to] + (awake_prefix[n] - awake_prefix[to]); 
		} else {
			sum =  (prfx_sum[to] - prfx_sum[i-1]) + (awake_prefix[n] - (awake_prefix[to] - awake_prefix[i-1]));
		}
		if(sum > maxx) {
			maxx = sum;
		}
	}
	cout << maxx << endl;
}


/*####prefix on awake only
1 4 4 6 6 6
initial_total = 6

###prefix sum
1 4 9 11 16 20
n = 6 k = 3
start = 1;
end = n-k+1 = 4

1=>4 Decide which is maximum
try on prefix sum
1 4 9 11 16 20

awake_prefix[n] - awake_prefix[start to end] + prefix_sum[start to end]

prfx [i+3-1]
i = 1
start=1, end = 3
4 - 4 + 9 = 9

i = 2
start = 2, end = 4
6 - 5 + 10 = 11

i = 3
start = 3, end = 5
6 - 2 + 12 = 16

i = 4
start = 4 end = 6
6 - 2 + 11 = 15

*/