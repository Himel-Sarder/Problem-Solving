#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string name;
    cin >> name;
 
    set<char> distinct_characters;
    for (char c : name) {
        distinct_characters.insert(c);
    }
 
    if (distinct_characters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
 
    return 0;
}
