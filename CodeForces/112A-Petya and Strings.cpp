#include <iostream>
#include <cstring>
#include <cctype>
 
using namespace std;
 
int main() {
    char str1[101], str2[101];
    cin >> str1 >> str2;
 
    int n = strlen(str1);
    for (int i = 0; i < n; i++) {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }
 
    int cmp = strcmp(str1, str2);
    if (cmp < 0) {
        cout << "-1\n";
    } else if (cmp > 0) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }
    return 0;
}
