#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1,s2;
	while(cin >> s1 >> s2) {

	int l1 = s1.length();
	int l2 = s2.length();
	int arr[l1 * l2] = {};
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	for(int i = 0; i < l1; i++) {
		for(int j = 0; j < l2; j++) {
			int n1 = s1[i] - '0';
			int n2 = s2[j] - '0';
			int p = n1 * n2;
			arr[i+j] += p; 
		}
	}
	string res = "";
	int cr = 0;
	for(int n: arr) {
		res += to_string((n+cr) % 10);
		cr = (n+cr) / 10;
	}

	int idx = res.length() - 1;
	while(res[idx] - '0' == 0) idx--; 


	for(idx; idx >= 0; idx--) {
		cout << res[idx] - '0';
	}
	cout << "\n";
}

}

// #include <bits/stdc++.h>

// using namespace std;

// const int MXN = 600;

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	string s1, s2;
// 	while (cin>>s1) {
// 		cin>>s2;
// 		reverse(s1.begin(), s1.end());
// 		reverse(s2.begin(), s2.end());
// 		int a[MXN];
// 		memset(a, 0, sizeof(a));
// 		for (int i=0; i<s1.length(); i++) {
// 			for (int j=0; j<s2.length(); j++) {
// 				a[i + j] += (s1[i]-'0') * (s2[j] - '0');
// 			}
// 		}
// 		for (int i=0; i<MXN - 1; i++) {
// 			a[i + 1] += a[i] / 10;
// 			a[i] %= 10;
// 		}
// 		int i = MXN - 1;
// 		while (i > 0 && a[i] == 0) i--;
// 		for (; i>=0; i--) cout<<a[i];
// 		cout<<endl;
// 	}
// 	return 0;
// }
