#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int Q; cin >>Q;
    deque<int>dq; bool reversed = false;
    while (Q--) {
        string s; cin >>s;
        if(s == "toFront") {
            int n; cin >> n;
            if(!reversed) {
                dq.push_front(n);
            } else {
                dq.push_back(n);
            }
        } else if (s == "push_back") {
            int n; cin >> n;
            if(!reversed) {
                dq.push_back(n);
            } else {
                dq.push_front(n);
            }

        } else if(s == "front") {
            if(dq.empty()) {
                cout << "No job for Ada?" << endl;
            } else {
                if(!reversed) {
                    cout << dq.front() << endl; dq.pop_front();
                } else {
                    cout << dq.back() << endl; dq.pop_back();
                }
            }
        } else if (s == "back") {
            if(dq.empty()) {
                cout << "No job for Ada?" << endl;
            } else {
                if(!reversed) {
                    cout << dq.back() << endl; dq.pop_back();
                } else {
                    cout << dq.front() << endl; dq.pop_front();
                }
            }
        } else {
            // reverse operations instead of elements
            reversed = !reversed;
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}