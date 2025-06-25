#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n; cin >> n;
    int neg = 0;
    int pos = 0;
    int ops = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a == 1) {
            pos++;
        } else {
            neg++;
        }
    }


    // make the necessary operations to make the sum >= 0

    int sm = pos + (neg * -1);
    while (sm < 0) {
        neg--;
        pos++;
        ops++;
        sm = pos + (neg * -1);
    }

    if (neg % 2 != 0) {
        ops++;
    }
    cout << ops << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
