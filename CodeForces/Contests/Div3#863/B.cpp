#include <iostream>
using namespace std;


void solve() {
    int n, x, y, x2, y2;
    cin >> n >> x >> y >> x2 >> y2;

    int min1 = min(x,y);
    if(min1 > n/2) {
        min1 = n-min1;
    }

    int min2 = min(x2, y2);
    if(min1 > n/2) {
        min2 = n-min2;
    }

    int ans = abs(min2 - min1);
    cout << ans << endl;
}



int main () {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}