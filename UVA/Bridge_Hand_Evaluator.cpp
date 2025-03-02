#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<string> suits(4, ""); // {S,H,D,C}
    string idxSuite = "SHDC";
    map<char, int>suitIdx = {{'S', 0} , {'H', 1}, {'D', 2}, {'C', 3}};
    map<char, int>cardVal = {{'A', 4}, {'K', 3}, {'Q', 2}, {'J', 1}};
    int scoreWithoutRules567 = 0;
    int scoreWithRules567 = 0;
    int stoppedSuites = 0;

    string card = "";
    int i = 1;
    while(i++ <= 13 && cin >> card) {
        suits[suitIdx[card[1]]] += card[0];
        scoreWithoutRules567 += cardVal[card[0]];
    }
    if(i == 2) return; // empty line

    i = 0;
    int idx = 0;
    int mxSuit = 0;
    for(string &cards: suits) {
        int len = cards.size();
        int rem = 0;
        map<char, int> fq;
        for(char c: cards) {
            fq[c]++;
        }
        if(len > mxSuit) {
            mxSuit = len;
            idx = i;
        }
        // Rule2
        int k = fq['K']; rem = len - k;
        if(k && rem == 0) {
            scoreWithoutRules567--;
        }
        // Rule3
        int q = fq['Q']; rem = len - q;
        if(q && (rem == 0 || rem == 1)) {
            scoreWithoutRules567--;
        }
        // Rule4
        int j = fq['J']; rem = len - j;
        if(j && (rem == 0 || rem == 1 || rem == 2)) {
            scoreWithoutRules567--;
        }
        // Rule5
        if(len == 2) {
            scoreWithRules567++;
        }
        // Rule6
        if(len == 1) {
            scoreWithRules567+=2;
        }
        // Rule7
        if(len == 0) {
            scoreWithRules567+=2;
        }
        // stopping rules
        if(fq['A']) {
            stoppedSuites++;
        } else if(fq['K'] && len - fq['K'] >= 1) {
            stoppedSuites++;
        } else if(fq['Q'] && len - fq['Q'] >= 2) {
            stoppedSuites++;
        }

        i++;
    }

    scoreWithRules567+= scoreWithoutRules567;

    if(scoreWithRules567 < 14) {
        cout << "PASS" << endl;
    } else if(scoreWithoutRules567 >= 16 && stoppedSuites == 4) {
        cout << "BID NO-TRUMP" << endl;
    } else {
        cout << "BID " << idxSuite[idx] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    while(!cin.eof()) {
        solve();
    }

    return 0;
}