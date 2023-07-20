#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, t; cin >> n >> t;
    vector<int> dur;
    vector<int> ent;
    map<int, int> ent_idxs;

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        dur.push_back(a);
    }

    for(int i = 0; i < n; i++) {
        int b; cin >> b;
        ent.push_back(b);
        ent_idxs[b] = i;
    }


    sort(ent.rbegin(), ent.rend());

    int idx = -1;
    for(int i = 0; i < ent.size(); i++) {
        int ent_idx =  ent_idxs[ent[i]];
        int t_taken = dur[ent_idx] + ent_idx;
        if(t_taken <= t) {
            idx = ent_idx+1;
            break;
        }
    }
    cout << idx << endl;
}


int main () {
    int q; cin >> q;
    while(q--) {
        solve();
    }
}