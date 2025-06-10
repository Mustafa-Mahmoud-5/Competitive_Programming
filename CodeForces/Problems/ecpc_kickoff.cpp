#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    long long m;
    cin >> n; cin >> m;
    if (n == m) {
        cout << 1 << endl;
    } else {
        long long g = lcm(n, m);
        cout << (long long)((g / n) * (g / m)) << endl;
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

