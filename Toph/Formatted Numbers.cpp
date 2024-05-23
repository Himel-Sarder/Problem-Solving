#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    cin >> number;

    string formattedNumber = to_string(number);  // Convert the number to a string

    // Insert commas at appropriate positions
    int n = formattedNumber.length();
    int commaCount = (n - 1) / 3;  // Calculate the number of commas needed

    for (int i = 1; i <= commaCount; i++) {
        int index = n - (i * 3);
        formattedNumber.insert(index, ",");
    }

    cout << formattedNumber << endl;

    return 0;
}
