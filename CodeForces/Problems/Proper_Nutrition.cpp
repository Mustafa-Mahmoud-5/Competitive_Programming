#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; int a; int b; cin >> n >> a >> b;
    int xMax = n/a;
    for(int x = 0; x <= xMax; x++) {
        int by = n - (a*x);
        if(by % b == 0) {
            int y = by / b;
            cout << "YES" << endl;
            cout << x << " " << y; return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();


    return 0;
}
