#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    int mb = 1;

    for (int i = 2; i <= n; i++) {

        if (i == ((n/2) + 1)) {
            i = n;
        }

        // factor
        if(n%i == 0) {
            for (int k = 0; k <= 32; k++) {
                if(i == ((pow(2, k) - 1) * (pow(2, k-1)))) {
                    mb = i;
                    break;
                }
            }
        }
    }
    cout << mb << "\n";
}


int main () {
    solve();
}