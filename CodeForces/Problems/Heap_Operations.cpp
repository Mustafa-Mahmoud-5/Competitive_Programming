#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    priority_queue<int, vector<int>, std::greater<>> pq;
    int n; cin >> n;
    vector<string> logs;
    while(n--) {
        string q; cin >> q;
        if(q == "insert") {
            int x; cin >> x;
            logs.push_back("insert " + to_string(x));
            pq.push(x);
        }

        if(q == "removeMin") {
            if(pq.empty()) {
                pq.push(1);
                logs.push_back("insert " + to_string(1));
            }
            logs.push_back("removeMin");
            pq.pop();
        }


        if(q == "getMin") {
            int x; cin >> x;
            if(pq.empty()) {
                logs.push_back("insert " + to_string(x));
                pq.push(x);
            }

            if(x == pq.top()) {
                logs.push_back("getMin " + to_string(x));
            } else {
                while(!pq.empty() && pq.top() < x) {
                    logs.push_back("removeMin");
                    pq.pop();
                }
                if(x != pq.top()) {
                    logs.push_back("insert " + to_string(x));
                    pq.push(x);
                }
                logs.push_back("getMin "+ to_string(x));
            }
        }
    }
    cout << logs.size() << endl;
    for(int i = 0; i < logs.size(); i++) {
        cout << logs[i] << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}