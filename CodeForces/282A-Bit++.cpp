#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n, X = 0;
    string statement;
 
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> statement;
 
        if (statement[0] == '+' || statement[2] == '+') {
            X++;
        } else {
            X--;
        }
    }
 
    cout << X << endl;
 
    return 0;
}
 
