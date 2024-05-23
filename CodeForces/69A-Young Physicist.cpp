#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int a[50], temp1 = 0, temp2 = 0, temp3 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[j];
        }
 
        temp1 += a[0];
        temp2 += a[1];
        temp3 += a[2];
    }
        if (temp1 == 0 && temp2 == 0 && temp3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    return 0;
}
