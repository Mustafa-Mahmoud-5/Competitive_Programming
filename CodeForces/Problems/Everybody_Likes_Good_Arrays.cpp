#include <iostream>
#include <bits/stdc++.h>
using namespace std;






void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i= 0; i < n; i++) {
        cin >> v[i];
    }

    auto mxIt = max_element(v.begin(), v.end());
    auto mnIt = min_element(v.begin(), v.end());

    int mx = *mxIt;
    int mn = *mnIt;

    v.erase(mxIt);
    v.erase(mnIt);

    if (mx == mn) {
        cout << "NO" << endl;
        return;
    }


    v.insert(v.begin(), mx);
    v.insert((v.begin()+1), mn);

    cout << "YES" << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;

}

