#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    // law x akbr mn y mn b8d el nzr hwa el hybd2 walla la, x brdo el hyksb
    // fe 7alt law equal, bn4of men hybd2 b3d ma y5lso c
    // law c is even -> first starts, odd -> second starts
    // sa3tha el hybd2 hy5sr

    int a, b, c; cin >> a >> b >> c;

    if (a > b) {
        cout << "First" << endl;
    } else if (a < b) {
        cout << "Second" << endl;
    } else {
        if (c % 2 == 0) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
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
