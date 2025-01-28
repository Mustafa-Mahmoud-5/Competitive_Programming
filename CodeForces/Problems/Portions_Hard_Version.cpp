#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    long long h = 0; int c = 0;
    priority_queue<long long, vector<long long>, std::greater<>> minHeap;
    // we must process the input in the same order given because we must check if we go to negative at some point depending on the given potions order
    for(int i = 0; i < n; i++) {
        int p; cin >> p;
        if(p + h >= 0) {
            // if it keeps health non-negative, include it
            h+=p;
            c++;
            minHeap.push(p);
        } else {
            // the potion will make the accumulative health below zero.. then we check if we can replace the most negative potion we have consumed with this potion to get a health above 0
            if(!minHeap.empty() && p > minHeap.top()) {
                h-=minHeap.top();
                h+=p;
                minHeap.pop();
                minHeap.push(p);
            }
        }
    }
    cout << c;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}