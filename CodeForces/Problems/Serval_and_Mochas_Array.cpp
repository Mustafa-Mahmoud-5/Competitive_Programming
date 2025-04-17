#include <iostream>
#include <bits/stdc++.h>
using namespace std;





int GCD(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a%b;
        }
        else {
            b = b%a;
        }
    }

    if (a == 0) return b;
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            if (GCD(v[i], v[j]) <= 2) {
                cout << "YES" << endl; return;
            }
        }
    }
    cout << "NO" << endl;;
}



int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;

}

