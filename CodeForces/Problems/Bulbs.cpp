#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    set<int> s;

    int n; int m; cin >> n >> m;
    while(n--) {
        int x; cin >> x;
        while(x--) {
            int y; cin >> y;
            s.insert(y);
        }
    }
    cout << (s.size() == m ? "YES" : "NO") << endl;
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}