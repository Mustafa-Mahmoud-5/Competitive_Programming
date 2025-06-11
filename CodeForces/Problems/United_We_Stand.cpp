#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void solve() {
    // if x < y, then x%y != 0
    // then we can sort the array, make all elements on the first array less than elements on the right one
    // how to split? from 0 till the last duplicate occurrence of a[0] goes to left arr. rest goes to right arr
    // if last duplicate occurrence of a[0] is a[size-1], then the array contains single element, return -1

    int n; cin >> n;
    vector<int> a;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    int idx = 0;
    for (int i = a.size()-1; i >= 0; i--) {
        if (a[i] == a[0]) {
            idx = i;
            break;
        }
    }

    if (idx == a.size() -1) {
        cout << -1 << endl;
        return;
    }


    int lSize = idx+1;
    int rSize = a.size() - lSize;
    cout << lSize << " " << rSize << endl;
    
    int i = 0;
    for (i; i <= idx; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (i; i < a.size(); i++) {
        cout << a[i] << " ";
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
