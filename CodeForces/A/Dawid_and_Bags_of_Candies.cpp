#include <iostream>
#include <bits/stdc++.h>
using namespace std;



// brute force
void solve() {
    int n = 4;
    vector<int>v(n);
    int s = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s += v[i];
    }
    if(s % 2 != 0) {
        cout << "NO"; return;
    }


    // check one number

    for(int i = 0; i < n; i++) {
        if(v[i] == s-v[i]) {
            cout << "YES"; return;
        }
    }

    // check two numbers
    for(int i = 0; i < n-1; i++) {
        for(int j  = i + 1; j < n; j++) {
            if(v[i] + v[j] == (s - (v[i] + v[j]))) {
                cout << "YES"; return;
            }
        }
    }
    cout << "NO";
}


void solve2() {
    int n = 4;
    vector<int> v(n);
    int s = 0;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s+=v[i];
    }


    sort(v.rbegin(), v.rend());
    if(v[0] == s-v[0]) {
        cout << "YES";
    } else if(v[0] + v[n-1] == s - (v[0] + v[n-1])) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
