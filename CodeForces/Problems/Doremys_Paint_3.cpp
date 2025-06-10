#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n; cin >> n;
    map<int, int> fq;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        fq[a]++;
    }

    if (fq.size() == 1) {
        cout << "Yes" << endl;
        return;
    }
    if (fq.size() == 2) {
        if (n %2 == 0) {
            for (auto el: fq) {
                if (el.second != n/2) {
                    cout << "No" << endl;;
                    return;
                }
            }
            cout << "Yes" << endl;
        } else {
            for (auto el: fq) {
                if (el.second != n/2 && el.second != ceil(n/2.0)) {
                    cout << "No" << endl;
                    return;
                }
            }
            cout << "Yes" << endl;
        }
    } else {
        cout << "No" << endl;
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