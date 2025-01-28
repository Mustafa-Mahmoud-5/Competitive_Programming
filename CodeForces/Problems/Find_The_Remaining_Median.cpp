#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    vector<int> v;
    double ans;
    int m1 = 0; int m2 = 0;
    int n; cin >> n;
    while(n--) {
        int x; cin >> x;
        auto sortedPos = lower_bound(v.begin(), v.end(), x); // insert sorted
        v.insert(sortedPos, x);
        if(v.size() % 2 == 0) {
            m2 = v[v.size() / 2];
            m1 = v[(v.size() / 2 ) -1];
            ans = (m1+m2 )/ 2.0;
        } else {
            m1 = v[v.size() /2];
            ans = m1;
        }

        cout << fixed << setprecision(1) << ans << endl;

    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}