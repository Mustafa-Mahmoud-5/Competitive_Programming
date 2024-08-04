#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> c(n);
    map<int, pair<int, int>>m;
    long double s = 0;
    double f = 1;
    for(int i = 0; i < n; i++) {
        c[i] = i;
        f *= (i+1);
        int x,y; cin >> x >> y;
        m[i] = {x, y};
    }
    do {
        double d = 0;
        for(int i = 0; i < n - 1; i++) {
            auto p1 = m[c[i]];
            auto p2 = m[c[i+1]];
            d += double(sqrt((pow(p1.first - p2.first, 2)) + pow((p1.second - p2.second), 2)));
        }
        s+=d;
    } while(next_permutation(c.begin(), c.end()));

    cout << setprecision(10) << s / f;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
