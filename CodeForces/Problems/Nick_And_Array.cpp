#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int mn = INT_MAX;
    int idx = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        if(a>=0) a = (a *-1)-1;
        if(a < mn) {
            mn = a;
            idx = i;
        }
        v[i] = a;
    }


    if(n %2 != 0) {
        v[idx] = (v[idx] * -1) -1;
    }


    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}