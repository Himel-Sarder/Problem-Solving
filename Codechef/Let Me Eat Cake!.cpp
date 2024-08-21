#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int A, B;
        cin >> A >> B;
        int count = 0;
        if (A == B) {
            cout << "0" << endl;
        } else {
            while (A != B) {
                if (A > B) {
                    count += (A + 1) / 2;
                    A -= (A + 1) / 2;
                } else if (A < B) {
                    count += (B + 1) / 2;
                    B -= (B + 1) / 2;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}

