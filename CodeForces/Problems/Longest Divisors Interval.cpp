#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n; cin >> n;
    int i = 1;
    while (n%i == 0) {
        i++;
    }
    cout << i-1 << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}