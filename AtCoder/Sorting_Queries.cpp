#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    deque<int> dq;
    deque<int> recent;
    int q; cin >> q;
    while(q--) {
        int c; cin >> c;
        if(c == 1) {
            int x; cin >> x;
            recent.push_back(x);
        } else if(c==2) {
            if(!dq.empty()) {
                cout << dq.front() << endl;
                dq.pop_front();
            } else {
                // we either didn't sort yet or we consumed all the sorted elements.. so we go to the recent elements, they act as the elements pushed at the end..
                // the entire idea is to not sort the entire list we have redundantly, just sort the recently inserted elements
                cout << recent.front() << endl;
                recent.pop_front();
            }
        } else {
            for(int i = 0; i < recent.size(); i++) { // insert the recent sorted
                auto  pos = lower_bound(dq.begin(), dq.end(), recent[i]);
                dq.insert(pos, recent[i]);
            }
            recent.clear();
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}