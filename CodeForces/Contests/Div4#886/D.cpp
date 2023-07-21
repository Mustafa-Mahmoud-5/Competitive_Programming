#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    long long c = 0;
    int str_ptr = 0;
    for(int i = 0; i < n -1 ; i++) {
        if(abs(v[i] - v[i+1]) > k) {
             c = n - (i - str_ptr + 1);
             str_ptr = i + 1;
        }
    }

    cout << c << "\n";
}

int main () {
    int t; cin >>t;
    while(t--) {
        solve();
    }
}