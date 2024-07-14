#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    int t; cin >> t;
    while(t--) {
        deque<int>dq; // keep the smallest element on the left
        int n; cin >> n;
        for(int i = 0; i < n; i++) {
            int p; cin >> p;
            if(dq.empty()) {
                dq.push_back(p);
                continue;
            }

            if(p < dq.front()) {
                dq.push_front(p);
            } else {
                dq.push_back(p);
            }
        }
        for(int i = 0; i < n; i++) {
            cout << dq[i];
            if(i != n-1) cout << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
