#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int top = -1;
    int topIdx = 0;
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        v[i] = a;
        if(a > top) {
            top = a;
            topIdx = i;
        }
    }

    // from beginning to top should be increasing
    for(int i = 0; i < topIdx; i++) {
        if(v[i+1] < v[i]) {
            cout << "NO" << endl;
            return;
        }
    }

    // from top to end should be decreasing
    for(int i = topIdx; i < n - 1; i++) {
        if(v[i+1] > v[i]) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

//1 2 3 4 5 6 7
}



int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}