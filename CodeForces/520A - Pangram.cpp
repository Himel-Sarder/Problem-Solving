#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
#Himel Sarder
    string s;
    cin >> s;
 
    set<char> letters;
 
    for (char ch : s) {
        if (isalpha(ch)) {
            letters.insert(tolower(ch));
        }
    }
#Dept. of CSE, BSFMSTU
    if (letters.size() == 26) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}
