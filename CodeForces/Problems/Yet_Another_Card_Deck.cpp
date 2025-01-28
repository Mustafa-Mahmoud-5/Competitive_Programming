#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int n, q; cin >> n >> q;
    deque<int> d;
 
    while(n--) {
        int a; cin >> a; d.push_back(a);
    }
 
    while(q--) {
        int t; cin >> t;
        auto pos = find(d.begin(), d.end(), t);
        int val = *pos;
        int idx = pos - d.begin() + 1;
        d.erase(pos);
        d.push_front(val);
        cout << idx << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    solve();
 
    return 0;
}
