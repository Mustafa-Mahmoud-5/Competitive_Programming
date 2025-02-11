#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void expand(ll n, int f, int s, vector<ll> &p) {
    if(n > 1e10) return;
    if(f == s) {
        p.push_back(n);
    }
    expand((n*10)+4, f+1, s, p);
    expand((n*10)+7, f, s+1, p);
}


void solve() {
    vector<ll> p; //  possibilities
    ll n; cin >> n;

    expand(0, 0, 0, p); // try 2^n possibilities... worst lucky number would have 10 digits, each digit could be either 4 or 7. so we have 2^10 possibilities...
    // from recursion perspective, we expand T(n) = 2T(n+1).. till n is 10, so we try 10 levels of the exponential recursive tree, hence o(2^10)
    sort(p.begin(), p.end());
    cout << *(lower_bound(p.begin(), p.end(), n)); // binary search to get x >= n
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}

