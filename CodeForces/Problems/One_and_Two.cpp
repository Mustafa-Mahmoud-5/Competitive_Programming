#include <iostream>
#include <bits/stdc++.h>
using namespace std;





void solve() {
    vector<int> v;
    int n; cin >> n;
    int t = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 2) {
            t++;
        }
        v.push_back(x);
    }

    if (t == 0) {
        cout << 1 << endl;
        return;
    }


    int l = 0; int r = t;
    for (int i = 0; i < n-1; i++) {
        if (v[i] == 2) {
            l++;
            r--;
        }

        if (l == r) {
            cout << i+1 << endl;;
            return;
        }
    }

    cout << -1 << endl;
}


int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;

}
