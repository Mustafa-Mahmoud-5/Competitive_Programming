#include <iostream>
#include <bits/stdc++.h>
using namespace std;




void solve() {
    int n; int a; int b; cin >> n >> a >> b;
    int mx = INT_MIN;
    for(int i = 1; i<= n-1; i++) {
        int j = n-i;
        int aMax = a/i;
        int bMax = b/j;
        mx = max(mx, min(aMax, bMax));
    }

    cout << mx << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
