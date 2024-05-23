#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        int count = 1;

        // Check if there are 7 consecutive players of the same team
        while (i + 1 < s.length() && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        if (count >= 7) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
