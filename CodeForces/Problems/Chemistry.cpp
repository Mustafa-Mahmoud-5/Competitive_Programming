#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    // a palindrome has one of the following characteristics
    // it just contains one character
    // all of its characters frequencies are even numbers
    // all of its characters frequencies are even numbers except 1 character has its frequency as odd
    // odd-1 <= k < n
    // if k = n-1, then we can remove all characters, and we will be left with one character => valid palindrome
    // if k = odd-1. then remove one character from each odd, and we will be left with only 1 character repeated in odd
    // if k is between odd-1 and n, then we can convert all odd to even(including completely deleting odd characters)


    map<char, int> fq;
    int n, k;
    int o = 0;
    string s;
    cin >> n >> k >> s;

    for (char c: s) {
        fq[c]++;
    }

    for (auto el: fq) {
        if (el.second % 2 != 0) {
            o++;
        }
    }
    if (o > k+1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
