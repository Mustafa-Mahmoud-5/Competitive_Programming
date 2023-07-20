#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    vector<int> sol;
    for(int i =0; i < n; i++) {
        int l = 0; int r = b.size() - 1; int mid = (l+r)/2;
        cout << "a[i] "<< a[i] << endl;
        while(l <= r) {
            mid = (l+r)/2;
            cout << "[ ";
            for(int j = 0; j < b.size(); j++) {
                cout << b[j] << " ";
            }
            cout << "]" << endl;

            cout << "b[mid]" << b[mid] <<  endl;


            if(abs(a[i] - b[mid]) <= k) {
                cout << "push: " << b[mid] << " mid = " << mid << endl;
                sol.push_back(b[mid]);
                auto it = b.begin();
                it+=mid;
                b.erase(it);
                break;
            } else {
                r = mid - 1;
            }
        }
    }

    cout << "[ ";
    for(int i = 0; i < n; i++) {
        cout << sol[i] << " ";
    }
    cout << "]" << endl;
    cout << "====" << endl;
}


int main () {
    int t; cin >>t;
    while(t--) {
        solve();
    }
}