#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int testCase = 1;

int getVal(string &card) {
    if(isdigit(card[0])) {
        return card[0] - '0';
    }
    return 10;
}

void solve(){
    vector<string> cards;
    vector<string> top25;

    for(int i = 1; i <= 27; i++) {
        string c; cin >> c;
        cards.push_back(c);
    }


    for(int i = 1; i <= 25; i++) {
        string c; cin >> c;
        top25.push_back(c);
    }


    int n = 3;
    int y = 0;
    while(n--) {
        int val = getVal(cards.back());
        y+= val;
        int rm = (10-val)+1;
        while(rm--) {
            cards.pop_back();
        }
    }


    cards.insert(cards.end(), top25.begin(), top25.end());

    cout << "Case " << testCase++ << ": " << cards[y-1] << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int T; cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}