#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, f;
    cin >> n >> f;
    vector<pair<int, int>> days(n); // (gain, normal sales)
    long long res = 0;

    for (int i = 0; i < n; i++) {
        int k, l;
        cin >> k >> l;
        int normal = min(k, l);
        int sellout = min(2 * k, l);
        days[i] = make_pair(sellout - normal, normal);
    }

    // Sort by gain descending
    sort(days.rbegin(), days.rend());

    for (int i = 0; i < n; i++) {
        if (f > 0 && days[i].first > 0) {
            res += days[i].second + days[i].first;
            f--;
        } else {
            res += days[i].second;
        }
    }

    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}