#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int n = s.size();
 
    if (n < 3) {
        cout << "NO" << "\n";
    } else {
        if (s[0] == '1' && s[1] == '0') {
            if ((n == 3 && s[2] > '1') || (n > 3 && s[2] > '0')) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        } else {
            cout << "NO" << "\n";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    int TC = 1;
    cin >> TC;
    while (TC--) {
        solve();
    }
    return 0;
}
