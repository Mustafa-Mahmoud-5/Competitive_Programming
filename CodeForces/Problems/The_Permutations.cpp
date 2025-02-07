
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while(t--) {
        map<int, int> m;
        int n; cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; i++) {
            int a; cin >>a;
            m[a] = i;
            p[i] = a;
        }

        for(auto el : m) {
            p[el.second] = n--;
        }

        for(int b: p) {
            cout << b << " ";
        }
        cout << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}