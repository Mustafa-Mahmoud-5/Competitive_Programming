#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while(t--) {
        string x, y; cin >> x >> y;
        // loop from right to left
        // find the first position of 1 from y => pos1
        // find the first position of 1 from x that occurs after or at the same position of pos1 => pos2
        // return pos2 - pos1
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        auto pos1  = y.find('1');
        auto pos2 = x.find('1', pos1);
        cout << pos2 - pos1 << endl;


    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}