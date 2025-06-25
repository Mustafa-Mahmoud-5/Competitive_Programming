#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

set<pair<int, int>> getKnightPositions(int x, int y, int a, int b) {
    set<pair<int,int>> m;

    // right-up
    m.insert(make_pair(x+a, y+b));

    // right-down
    m.insert(make_pair(x+a, y-b));

    // left-up
    m.insert(make_pair(x-a, y+b));

    // left-down
    m.insert(make_pair(x-a, y-b));

    // using x,b and y,a

    // right-up
    m.insert(make_pair(x+b, y+a));

    // right-down
    m.insert(make_pair(x+b, y-a));

    // left-up
    m.insert(make_pair(x-b, y+a));

    // left-down
    m.insert(make_pair(x-b, y-a));

    return m;
}


void solve() {
    // get all positions a knight might be in if it is attacking the king.
    // get all positions a knight might be in if it is attacking the queen
    // common positions mean we can go to both the king and queen from it

    int a,b, xk, yk, xq, yq; cin >> a >> b >> xk >> yk >> xq >> yq;

    auto kMoves = getKnightPositions(xk, yk, a, b);
    auto qMoves = getKnightPositions(xq, yq, a, b);
    int c = 0;
    for (auto i: kMoves) {
        for (auto j: qMoves) {
            if (i.first == j.first  &&  i.second == j.second) {
              c++;
            }
        }
    }

    cout << c << endl;

}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
