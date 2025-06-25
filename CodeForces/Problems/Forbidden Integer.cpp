#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {

    int n, k, x; cin >> n >> k >> x;
    if (k == 1) {
        cout << "NO" << endl;
        return;
    }

    // candidates = [1,...]
    if (x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 1; i <= n; i++) {
            cout << 1 << " ";
        }
        cout << endl; return;
    }


    // x = 1
    if (k == 2) {
        if (n % 2 != 0) { // sum is odd and we have candidates = [2]
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            int c = n/2;
            cout << c << endl;
            for (int i = 1; i<= c; i++) {
                cout << 2 << " ";
            }
            cout << endl;
        }
        return;
    }


    // candidates = [2, 3, .....]
    // for even we can take twos, for odd we can take threes

    if (n%2 == 0) {
        cout << "YES" << endl;
        int c = n/2;
        cout << c << endl;
        for (int i = 1; i<= c; i++) {
            cout << 2 << " ";
        }
        cout << endl;
    } else {
        cout << "YES" << endl;
        int c = 1 + ((n-3)/2);
        cout << c << endl;
        cout << 3 << " ";
        for (int i = 1; i <= c-1; i++) {
            cout << 2 << " ";
        }
        cout << endl;
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
