#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        map<int, int>m;

        for (int i = 0; i < n; i++) {
            int x; cin >>x;
            if(m.find(x) != m.end()) {
                m[x]++;
            } else {
                m[x] = 1;
            }
        }
        int unique = m.size();
        for(int i = 1; i <= n; i++) {
            if(i <= unique) {
                cout << unique;
            } else {
                cout << i;
            }

            if(i!=n) cout << " ";
        }
        cout << endl;
    }
}



int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
