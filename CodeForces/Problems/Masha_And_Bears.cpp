#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    bool failed = false;
    vector<pair<int, int>>cars(3); // each car has lowerBound and upperBound
    int meshaSize = 0;

    for(int i = 0; i < 3; i++) {
        int v; cin >> v;
        cars[i] = make_pair(v, 2*v); // 2
    }
    cin >> meshaSize;

    // 1
    cars[0].first = max(cars[0].first, (meshaSize));
    cars[1].first = max(cars[1].first, (meshaSize));
    cars[2].first = max(cars[2].first, (meshaSize));

    // 3
    cars[0].first = max(cars[0].first, (meshaSize*2) + 1);
    cars[1].first = max(cars[1].first, (meshaSize*2) + 1);

    //4
    cars[2].second = min(cars[2].second, meshaSize*2);

    for(int i = 0; i < 3; i++) {
        if(cars[i].second - cars[i].first +1 <= 0) {
            failed = true;
            break;
        }
        if(meshaSize > cars[i].second) {
            failed = true;
            break;
        }
    }


    if(failed) {
        cout << -1 << endl;
    } else {
        while(cars[0].first <= cars[1].first && cars[0].first < cars[0].second) {
            cars[0].first++; // make sure first is greater than second
        }

        while(cars[1].first <= cars[2].first && cars[1].first < cars[1].second) {
            cars[1].first++; // make sure second is greater than third
        }

        if(cars[0].first > cars[1].first && cars[1].first > cars[2].first) {
            cout << cars[0].first << "\n" << cars[1].first << "\n" << cars[2].first << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    solve();

    return 0;
}


/*
 * 50 30 10 10
bearSize <= carSize <= 2*bearSize
50 <= car1 <= 100
30 <= car2 <= 60
10 <= car3 <= 20

MeshaSize  = 10
bearSize<=carSize
bearSize*2 >= carSize

9<= car1,car2,car3
18>= car3

Rule#1: car3.second = min(car3.second, mesha.second)
Rule#2: 7gm el 3 3rbyat mynf34 y2l 3n 10 bs mynf34 yzed 3n el ubber bound bta3 carx=>mesha.first <= carx.second '
Rule#3: sa3tha carsizeX = max(mesha.first, carx.first)
Rule#4: car1,car2 > meshaSize*2

ex:

99 50 25 49


99 <= car1 <= 198
99 <= car2 <= 100
49 <= car3 <= 50

meshaSize = 49
49 <= car1, car2, car3
98 >= car3
98 < car1, car2 = 99



*/