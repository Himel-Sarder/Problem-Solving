#include <iostream>
#include <string>
#include <cctype> // Include this header for the toupper and tolower functions

using namespace std;

int main() {
    string str;
    cin >> str;

    int counter = 0, counter2 = 0;

    for (char x : str) {
        if (x >= 'A' && x <= 'Z') {
            counter++;
        } else {
            counter2++;
        }
    }

    string UprString = str; // Initialize UprString and LwrString with the original string
    string LwrString = str;

    for (char &c : UprString) { // Use a reference to modify the characters in the string
        c = toupper(c);
    }

    for (char &c : LwrString) { // Use a reference to modify the characters in the string
        c = tolower(c);
    }

    if (counter > counter2) {
        cout << UprString << endl;
    } else {
        cout << LwrString << endl;
    }

    return 0;
}
