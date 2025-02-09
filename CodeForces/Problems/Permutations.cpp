#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; int k; cin >> n >> k;
    vector<int> indices(k);
    vector<string> numbers(n);
    vector<int> ordered_numbers;
    for(int i = 0; i < k;i++) {
        indices[i] = i;
    }
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int mn = INT_MAX;

    do {
        for(int i = 0; i < n; i++) {
            string on = "";
            for(int j = 0; j < k; j++) {
                on += numbers[i][indices[j]];
            }
            ordered_numbers.push_back(stoi(on));
        }
        int mx = *(max_element(ordered_numbers.begin(), ordered_numbers.end()));
        int sm = *(min_element(ordered_numbers.begin(), ordered_numbers.end()));
        mn = min(mn, mx-sm);
        ordered_numbers.clear();
    } while(next_permutation(indices.begin(), indices.end()));
    cout << mn << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}

