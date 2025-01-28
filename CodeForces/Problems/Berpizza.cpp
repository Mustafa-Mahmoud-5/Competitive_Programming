#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//(index, cost)
struct compare {
    bool operator()(const pair<int,int> p1, const pair<int,int> p2) const {
        if(p1.second == p2.second) {
            return p1.first > p2.first;
        }
        return p1.second < p2.second;
    }
} ;

void display(priority_queue<pair<int,int>, vector<pair<int,int>>, compare> pq) {
    while(!pq.empty()) {
        auto el = pq.top();
        cout << "(" << el.first << "," << el.second << ")" << endl;
        pq.pop();
    }
}


void solve() {


    priority_queue<pair<int, int>,  vector<pair<int,int>>, compare> pq;
    queue<int> fcfs;
    int q; cin >> q;
    vector<int> served(q+1, 0);

    int idx = 1;
    while(q--) {
        int x; cin >> x;
        if(x ==1) {
            int m; cin >> m;
            fcfs.push(idx);
            pq.emplace(make_pair(idx, m));
            idx++;
        } else if(x==2) {
            int f = fcfs.front();
            // remove all customers served by pq and not updated here first
            while(!fcfs.empty() && served[f] == 1) {
                fcfs.pop();
                f = fcfs.front();
            }
            cout << f << " ";
            fcfs.pop();
            served[f] = 1;
        } else {
            auto f = pq.top();
            while(!pq.empty() && served[f.first] == 1) {
                pq.pop();
                f = pq.top();
            }
            cout << f.first << " ";
            pq.pop();
            served[f.first] = 1;
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}