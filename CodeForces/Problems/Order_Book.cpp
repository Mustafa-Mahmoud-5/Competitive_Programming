#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool compFirst(const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.first > p2.first;
};



void solve() {
    int n, s; cin >> n >> s;
    map<int, int> sell;
    map<int, int> buy;
    vector<pair<int, int>> sellSet;
    vector<pair<int, int>> buySet;
    while (n--) {
        char d; int p; int q; cin >> d >> p >> q;
        if(d == 'S') {
            sell[p] += q;
        } else {
            buy[p] += q;
        }
    }

    for(auto el: sell) {
        sellSet.emplace_back(el);
    }

    while(sellSet.size() > s)  {
        sellSet.erase(--sellSet.end());
    }

    for(auto el: buy) {
        buySet.emplace_back(el);
    }

    while(buySet.size() > s)  {
        buySet.erase(buySet.begin());
    }


    sort(buySet.begin(), buySet.end(), compFirst);

    sort(sellSet.begin(), sellSet.end(), compFirst);



    for(auto el: sellSet) {
        cout << "S" << " " << el.first << " " << el.second << endl;
    }

    for(auto el: buySet) {
        cout << "B" << " " << el.first << " " << el.second << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}
