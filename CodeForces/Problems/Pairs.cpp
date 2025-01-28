#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    vector<pair<int, int>> p;
    int n, m; cin >>  n >> m;
    int a1, b1; cin >> a1 >> b1;
    vector<int> fp = {a1, b1}; // x must be from the first pair, either a or b
    for(int i = 0; i < m-1; i++) {
        int a, b; cin >> a >> b;
        p.emplace_back(make_pair(a,b));
    }

    // check if y exists for all pairs that doesn't contain x
    for(int i = 0; i < fp.size(); i++) {
        vector<int> y_count(n+1);
        int rest = 0;
        for(int j = 0; j < p.size(); j++) {
            if(fp[i] != p[j].first && fp[i] != p[j].second) {
                rest++;
                y_count[p[j].first]++;
                y_count[p[j].second]++;
            }
        }

        if(*max_element(y_count.begin(), y_count.end()) == rest) {
            cout << "Yes" << endl; return;
        }
    }

    cout << "No" << endl;
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
