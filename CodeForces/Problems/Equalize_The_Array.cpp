#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve() {

    int n; cin >> n;
    map<int, int> fq; // the frequency of each element
    vector<int> rep; // repetitions
    map<int, int> repfq; // repetitions frequency


    // 1- find frequency for the given elements (repetitions)
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(fq[x]) {
            fq[x]+=1;
        } else {
            fq[x] = 1;
        }
    }

    // 2- store the repetitions and sort them in descending order
    for(auto el: fq) {
        rep.push_back(el.second);
    }
    sort(rep.rbegin(), rep.rend());

    // 3- find the frequency of the repetitions to know how many times each frequency appeared
    set<int, greater<int>>repset;
    for(int i = 0; i < rep.size(); i++) {
        repset.insert(rep[i]);
        if(repfq[rep[i]]) {
            repfq[rep[i]]+=1;
        } else {
            repfq[rep[i]] = 1;
        }
    }

    // 4- for each element r in the sorted  repetitions arrau
    //  - for all repitions below than r, calculate the cost to remove them
    //  - for all repitions higher than r, calculate the cost to make them reach x
    int mn = INT_MAX;
    for(auto it1 = repset.begin(); it1 != repset.end(); it1++) {
        int before = 0;
        int after = 0;
        for(auto it2 = repset.begin(); it2 != it1; it2++) {
            int val1 = *it1; int val2 = *it2;
            before += ((val2 - val1) * repfq[val2]);
        }

        for(auto it2= next(it1); it2 != repset.end(); it2++) {
            int val2 = *it2;
            after += (val2 * repfq[val2]);
        }

        mn = min(mn, (before+after));
    }


    cout << mn << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >>t ;
    while(t--) {
        solve();
    }

    return 0;
}