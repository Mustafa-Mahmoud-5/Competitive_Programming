#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    bool end = 1; // 1 right, 0 left
    deque<int> dq;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(end == 1) {
            dq.push_back(x);
        } else {
            dq.push_front(x);
        }
        end = !end;
    }
    if(n % 2 == 0) {
        for(int i = 0; i < n; i++) {
            cout << dq[i];
            if(i != n-1) cout << " ";
        }
    } else {
        for(int i = n-1; i >= 0; i--) {
            cout << dq[i];
            if(i != 0) cout << " ";
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
