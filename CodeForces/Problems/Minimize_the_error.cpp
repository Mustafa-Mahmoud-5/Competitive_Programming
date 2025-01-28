#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {

    int n, k1, k2; cin >> n >> k1 >> k2;
    int ops = k1+k2;
    long long err_sum = 0;

    vector<int> a(n);
    vector<int>b(n);
    multiset<int> ms;


    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
        ms.insert(abs(a[i] - b[i]));
    }


    for(int i = 0; i < ops; i++) {
        auto it = --ms.end();
        int largest = *it;
        ms.erase(it);
        ms.insert(abs(largest -1));
    }


    for(auto el: ms) {
        err_sum += 1LL * el * el;
    }
    cout << err_sum << endl;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
