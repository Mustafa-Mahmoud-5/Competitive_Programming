#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    vector<int>fence(n);

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        fence[i] = a;
    }


    if (fence[0] != n) {
        cout << "NO\n";
        return;
    }


    vector<int>range(n, 0);

    for(int i = 0; i < n; i++) {
        range[0] += 1;
        if(fence[i] < n) range[fence[i]] -= 1;
    }


    vector<int>prefix(n, 0);

    prefix[0] = range[0];

    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + range[i];
    }

    for(int i = 0; i < n; i++) {
        if(fence[i] != prefix[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}


int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}