#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    // same cell x1 = x2 and y1 = y2   = > 0 moves
    // same row -> x1 - x2 => 1 move
    // same column -> y1 = y2 => 1 move
    // same diagonal -> abs(x1 - x2) = abs(y1 - y2) => 1 move
    // else => 2 moves


    int x1, y1, x2, y2;
    while(cin >> x1 >> y1 >> x2 >> y2 && (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0)) {
        if(x1 == x2 && y1 == y2) {
            cout << 0 << endl;
        } else if(x1 == x2) {
            cout << 1 << endl;
        } else if(y1 == y2) {
            cout << 1 << endl;
        } else if(abs(x1-x2) == abs(y1-y2)) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}