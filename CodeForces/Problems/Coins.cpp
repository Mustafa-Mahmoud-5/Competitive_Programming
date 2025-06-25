#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {

    // 2x + ky = n
    // set y = 0,
    // 2x = n
    // x = n/2 => n must be divisible by 2

    // set y = 1,
    // 2x = n-k
    // x = (n-k)/2 => n-k must be divisible by 2

    ll n, k; cin >> n >> k;
    if (n%2 == 0 || (n-k)%2 == 0) {
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
