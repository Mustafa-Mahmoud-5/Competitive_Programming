#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {

    // if target is below => -1
    // if target is on right same y => -1
    // if target is above but right distance > 2 => -1
    // if on same y, calculate x difference
    // else calculate (y1 - y2 = yDiff) + (x1 - newX)   newX = x1+yDiff... if x1 < x2(right same y). return -1


    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    if (y2 < y1) {
        cout << -1 << endl;
        return;
    }
    if (y1 == y2 && x2 > x1) {
        cout << -1 << endl;
        return;
    }
    if (y1 == y2) {
        cout << abs(x2 - x1) << endl;
        return;
    }



    // else calculate diagonal move + left move


    int yDiff = abs(y1 - y2);
    x1 += yDiff; // new X

    if (x1 < x2) {
        cout << -1 << endl;
    } else {
        int xDiff = abs(x1 - x2);
        cout << xDiff + yDiff << endl;
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
