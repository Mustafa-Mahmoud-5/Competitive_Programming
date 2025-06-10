    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;



    void solve() {
        // s2 lazm tkon cyclic substring mn s1
        // instead of cyclic looping in s1, append s1 to s1, increment counter a (Starts at 0), eventually return a
        // check kol el substrings el fe s1 el bybd2o b awl char fe s2(candidate start points)
        // fail only law kol el candidates. sa3tha return -1
        // substring check: compare char by char

        int n, m; cin >> n >> m;
        string s1, s2; cin >> s1 >> s2;
        vector<int> fIdxs;
        int a = -1;

        // get candidate start points for substring checking
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == s2[0]) {
                fIdxs.push_back(i);
            }
        }



        for (int c = 0; c < fIdxs.size(); c++) {
            string s1Cpy = s1;
            bool isSub = true;
            a = 0;
            int p1 = fIdxs[c];
            int p2 = 0;
            while (p2 < s2.size()) {
                if (s1Cpy[p1] != s2[p2]) {
                    isSub = false;
                    break;
                }

                p1++;
                p2++;

                if (p1 == s1Cpy.size() && p2 != s2.size()) {
                    s1Cpy += s1Cpy;
                    a++;
                }
            }

            if (isSub) {
                break;
            } else {
                a = -1;
            }
        }
        cout << a << endl;
    }



    int main () {
        ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

        int t; cin >> t;
        while (t--) {
            solve();
        }
        return 0;

    }
