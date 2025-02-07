#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; int m; int k; cin >> n; cin >> m; cin >> k;
    int h[n];
    string res = "YES\n";
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }
    for(int i = 0; i < n-1; i++) {
        int req = max(0, h[i+1] - k);
        if(h[i] >= req) {
            m+= h[i] - req;
        } else  {
            // assume h[i+1] is hj and h[i] is hi
            // since we need hj - hi to be <= k
            // then: hj - (hi+m) = k is the minimum m we need to spend to make the difference decrease to k
            // solving for m, m = hj - hi - k... hence, for optimal result, we need to take (hj - hi - k) from the total m we have in the bag
            int need = h[i+1] - h[i] - k; // if k is zero, then we need h[i+1] - h[i] from m (which is more needed than if we have k)
            if(need > m) {
                res = "NO\n";
                break;
            }
            m-=need;
        }
    }
    cout << res;
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}