#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n; cin >> n;
    vector<int> b;
    deque<int> a;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        b.push_back(x);
    }


    for (int i = b.size() - 1; i > 0; i--) {
        a.push_front(b[i]);
        if (b[i] < b[i-1]) {
            a.push_front(min(b[i], b[i-1]-1));
        }
    }
    a.push_front(b[0]);



    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}