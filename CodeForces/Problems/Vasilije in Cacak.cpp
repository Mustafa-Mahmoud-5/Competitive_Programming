#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    // for any range from 1 to n, if we will add k elements:
    // min = summation of first k elements
    // max = summation of last k elements
    // any summation between lower and upper can be obtained using k elements in the range of 1->n

    ll n, k, x; cin >> n >> k >> x;

    ll mn = (k*(k+1))/2;
    ll mx = (n*(n+1)/2) - ((n-k)*(n-k+1))/2;


    if (mn <= x && x <= mx) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
