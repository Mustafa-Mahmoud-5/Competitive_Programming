#include <iostream>
#include <string>
using namespace std;

int main () {
    string str; cin >> str;
    string vowels = "aoyeui";
    int idx = 0;
    while(idx < str.size()) {
        str[idx] = tolower(str[idx]);
        int vowel_idx = vowels.find(str[idx]);
        if(vowel_idx != -1) {
            // vowel
            str.erase(idx, 1);
        } else {
            str.insert(idx, ".");
            idx+=2;
        }
    }
    cout << str;
}