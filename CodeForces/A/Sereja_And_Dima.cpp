#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    deque<int> dq;
    vector<int>p(2,0);
    bool t = 0; // turn flag
    while(n--) {
        int x; cin >>x;
        dq.push_back(x);
    }
    while(dq.size() > 0) {
        if(dq.front() > dq.back()) {
            p[t] += dq.front(); dq.pop_front();
        } else {
            p[t] += dq.back(); dq.pop_back();
        }
        t = !t;
    }
    cout << p[0] << " " << p[1] << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
