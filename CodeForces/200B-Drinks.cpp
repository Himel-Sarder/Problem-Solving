#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    int n;
    double x, temp = 0;
    cin >> n;

    int tem = n;

    while (tem--) {
        cin >> x;
        temp += x;
    }

    cout << fixed << setprecision(12) << temp / n;

    return 0;
}
