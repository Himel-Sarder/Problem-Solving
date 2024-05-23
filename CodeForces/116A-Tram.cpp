#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int capacity = 0, currentPassengers = 0;

    for (int i = 0; i < n; i++) {
        int exit, enter;
        cin >> exit >> enter;

        // Update the current number of passengers inside the tram
        currentPassengers = currentPassengers - exit + enter;

        // Update the maximum capacity if needed
        if (currentPassengers > capacity) {
            capacity = currentPassengers;
        }
    }

    cout << capacity << endl;

    return 0;
}
