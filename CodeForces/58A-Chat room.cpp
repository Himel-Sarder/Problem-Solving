#include <iostream>
#include <string>

using namespace std; // Adding the 'using' directive

int main() {
    string s;
    cin >> s;

    int pointer = 0;  // Initialize the pointer for "hello"

    for (char c : s) {
        if (c == "hello"[pointer]) {
            pointer++;  // Move the pointer to the next character in "hello"
        }

        // If we've matched all characters in "hello," Vasya managed to say hello
        if (pointer == 5) {
            cout << "YES" << endl;
            return 0;
        }
    }

    // If the loop completes without finding "hello," Vasya didn't manage to say hello
    if (pointer < 5) {
        cout << "NO" << endl;
    }

    return 0;
}

