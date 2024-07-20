#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    deque<pair<long long, long long>>qrs;
    int Q; cin >> Q;
    while (Q--) {
        int q; cin >> q;
        if(q == 1) {
            long long x, c; cin >> x >> c;
            qrs.push_back(make_pair(x, c));
        } else {
            long long c; cin >> c;
            long long s = 0;
            while (c != 0) {
                auto p = qrs.front();
                long long etr = min(c, p.second); // elements to remove
                s +=  (etr * p.first);
                if(etr < p.second) {
                    qrs.front().second -= etr;
                } else {
                    qrs.pop_front();
                }
                c-= etr;
            }
            cout << s << endl;
            //  s = 0
            // while c != 0
            // elementsToRemove = min( pair.second (c), c )
            // s    = elementsToRemove * pair.first;
            // if elementsToRemove < pair.second
            //   pair.second -= elementsToRemove
            // else
            //   qrs.pop_front() // remove the current query
            // c -= elements_to_remove
            // end while, print sum
        }

    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
