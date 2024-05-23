#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string result = "";
    for (char c : s) {
        // Convert uppercase letters to lowercase
        c = tolower(c);
        
        // Check if the character is a vowel (aeiouy)
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            result += '.';
            result += c; // Insert a period before each consonant
        }
    }
 
    cout << result << endl;
 
    return 0;
}
