#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    map<int, int> quality_idx;
    vector<pair<int,int>> words;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        quality_idx[b] = i + 1;
        words.push_back(make_pair(b, a));
    }

    sort(words.rbegin(), words.rend());

    for(int i = 0; i < n; i++) {
        if((words[i]).second <= 10) {
            cout << quality_idx[(words[i].first)] << "\n";
            break;
        }
    }
}

int main () {
    int t; cin >>t ;
    while(t--) {
        solve();
    }
}